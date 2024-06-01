
// single header audio library

// on windows, this requires C++ compilation, since we are using xaudio2 which does not build in C

#if !defined moa_h
#define moa_h

#ifdef __cplusplus
extern "C" {
#endif

#if !defined moa_assert_message
#define moa_assert_message(...)
#endif

#if !defined moa_require_message
#define moa_require_message(...)
#endif

#define moa_assert(x)  moa_assert_message(x, "")
#define moa_require(x) moa_require_message(x, "")

#define moa_cases_complete(format, ...) default: moa_assert_message(moa_false, "unhandled switch case " format, __VA_ARGS__)

typedef unsigned char      moa_u8;
typedef unsigned short     moa_u16;
typedef unsigned int       moa_u32;
typedef unsigned long long moa_u64;

typedef signed short     moa_s16;
typedef signed int       moa_s32;
typedef signed long long moa_s64;

typedef float  moa_f32;
typedef double moa_f64;

typedef moa_u8 moa_b8;

typedef moa_u64 moa_usize;

typedef char * moa_cstring;

#define moa_null 0

const moa_b8 moa_false = 0;
const moa_b8 moa_true  = 1;

#define moa_carray_count(static_array) (sizeof(static_array) / sizeof(*(static_array)))

#if !defined moa_u8_array_type
#define moa_u8_array_type moa_u8_array

typedef struct
{
    moa_u8    *base;
    moa_usize count;
} moa_u8_array;

#else

typedef moa_u8_array_type moa_u8_array;

#endif

typedef moa_u8_array moa_string;

#ifdef __cplusplus
#define moa_sl(name)
#else
#define moa_sl(name) (name)
#endif

#define moa_s(static_string) moa_sl(string) { (moa_u8 *) static_string, moa_carray_count(static_string) - 1 }
// sometimes needed to initialize global values
#define moa_sc(const_static_string) { (moa_u8 *) const_static_string, moa_carray_count(const_static_string) - 1 }
#define moa_fs(text) (int) (text).count, (char *) (text).base

const moa_string moa_string_empty = {0};

typedef struct moa_audio moa_audio;
struct moa_audio;

typedef struct moa_track moa_track;
struct moa_track;

typedef struct
{
    moa_u16 *base;
    moa_u32  count;
    moa_u32  frequency;
    moa_u32  channel_count;
} moa_samples;

#define moa_init_signature void moa_init(moa_audio *audio)
moa_init_signature;

#define moa_track_init_signature void moa_track_init(moa_audio *audio, moa_track *track, moa_u32 frequency, moa_u32 channel_count)
moa_track_init_signature;

#define moa_track_set_volume_signature void moa_track_set_volume(moa_audio *audio, moa_track *track, moa_f32 volume_ratio)
moa_track_set_volume_signature;

#define moa_track_queue_signature void moa_track_queue(moa_audio *audio, moa_track *track, moa_u32 sample_count, moa_u16 *samples, moa_u32 frequency, moa_u32 channel_count, moa_b8 do_loop)
moa_track_queue_signature;

#define moa_track_play_signature void moa_track_play(moa_audio *audio, moa_track *track)
moa_track_play_signature;

#define moa_track_stop_signature void moa_track_stop(moa_audio *audio, moa_track *track)
moa_track_stop_signature;

#define moa_track_queue_is_empty_signature moa_b8 moa_track_queue_is_empty(moa_audio *audio, moa_track *track)
moa_track_queue_is_empty_signature;

#define moa_load_wave_samples_signature moa_samples moa_load_wave_samples(moa_audio *audio, moa_u8_array buffer, moa_u8_array source, moa_b8 force_stereo)
moa_load_wave_samples_signature;

#if defined(mop_h) && defined(moma_h)

#define moa_load_wave_samples_from_file_signature moa_samples moa_load_wave_samples_from_file(mop_platform *platform, moa_audio *audio, moma_arena *memory, mop_string path, moa_b8 force_stereo)
moa_load_wave_samples_from_file_signature;

#endif

#ifdef __cplusplus
}
#endif

#endif

#if defined moa_implementation
#undef moa_implementation

#if defined(_WIN32) || defined(WIN32)

#include <xaudio2.h>

#pragma comment(lib, "xaudio2")
#pragma comment(lib, "ole32")

struct moa_audio
{
    IXAudio2               *x_audio2;
    IXAudio2MasteringVoice *master_voice;
};

struct moa_track
{
    moa_u32 frequency;
    moa_u32 channel_count;

    // platform specific
    IXAudio2SourceVoice *source_voice;
};

moa_init_signature
{
    moa_require(CoInitializeEx(moa_null, COINIT_MULTITHREADED) != RPC_E_CHANGED_MODE);

    HRESULT result = XAudio2Create(&audio->x_audio2, 0, XAUDIO2_DEFAULT_PROCESSOR);
    moa_require(result == S_OK);

    result = audio->x_audio2->CreateMasteringVoice(&audio->master_voice);
    moa_require(result == S_OK);
}

moa_track_init_signature
{
    IXAudio2 *x_audio2 = audio->x_audio2;
    moa_assert(x_audio2);

    moa_assert(!track->source_voice);

    track->frequency     = frequency;
    track->channel_count = channel_count;

    WAVEFORMATEX format = {0};
    format.wFormatTag = WAVE_FORMAT_PCM;
    format.nChannels  = track->channel_count;
    format.nSamplesPerSec = frequency;
    format.nAvgBytesPerSec = format.nSamplesPerSec * sizeof(moa_u16) * format.nChannels;
    format.wBitsPerSample = sizeof(moa_u16) * 8;
    format.nBlockAlign    = sizeof(moa_u16) * format.nChannels;
    // format.cbSize = 0;
    moa_require(x_audio2->CreateSourceVoice(&track->source_voice, (WAVEFORMATEX*) &format) == S_OK);
}

moa_track_set_volume_signature
{
    moa_assert(track->source_voice);

    track->source_voice->SetVolume(volume_ratio);
}

moa_track_queue_signature
{
    moa_assert(track->source_voice);
    moa_assert(track->frequency == frequency);
    moa_assert(track->channel_count == channel_count);

    XAUDIO2_BUFFER buffer = {0};
    // buffer.Flags = XAUDIO2_END_OF_STREAM; // supress deboug output warnings on empty buffer?
    buffer.AudioBytes = sample_count * sizeof(moa_u16);
    buffer.pAudioData = (moa_u8 *) samples;
    // buffer.PlayBegin = 0;
    // buffer.PlayLength = 0;
    // buffer.LoopBegin = 0;
    // buffer.LoopLength;
    if (do_loop)
        buffer.LoopCount = XAUDIO2_LOOP_INFINITE; // 0; //
    // buffer.pContext = moa_null;

    moa_assert(buffer.AudioBytes <= XAUDIO2_MAX_BUFFER_BYTES);

    HRESULT result = track->source_voice->SubmitSourceBuffer(&buffer);
    moa_require(result == S_OK);
}

moa_track_play_signature
{
    moa_assert(track->source_voice);
    track->source_voice->Start(0);
}

moa_track_stop_signature
{
    moa_assert(track->source_voice);
    track->source_voice->Stop(0);
    track->source_voice->FlushSourceBuffers();
}

moa_track_queue_is_empty_signature
{
    moa_assert(track->source_voice);

    XAUDIO2_VOICE_STATE state;
    track->source_voice->GetState(&state);
    return (state.BuffersQueued == 0);
}

#define moa_wave_id_string(text) ( text[0] | (text[1] << 8) | (text[2] << 16) | (text[3] << 24) )

typedef enum
{
    moa_wave_format_pcm        = 1,
    moa_wave_format_ieee_float = 3,
    moa_wave_format_alaw       = 6,
    moa_wave_format_mulaw      = 7,
    moa_wave_format_extensible = 0xFFFF,
} moa_wave_format;

typedef enum
{
    moa_wave_id_riff = moa_wave_id_string("RIFF"),
    moa_wave_id_fmt  = moa_wave_id_string("fmt "),
    moa_wave_id_wave = moa_wave_id_string("WAVE"),
    moa_wave_id_data = moa_wave_id_string("data"),
} moa_wave_id;

#pragma pack(push, 1)

typedef struct
{
    union
    {
        moa_u8 id[4];
        moa_u32 id_value;
    };

    moa_u32 size;
} moa_wave_chunk_header;

typedef struct
{
    moa_wave_chunk_header header;

    union
    {
        moa_u8 moa_wave_id[4];
        moa_u32 moa_wave_id_value;
    };
} moa_wave_riff_chunk;

typedef struct
{
    moa_wave_chunk_header header;

    moa_u16 format_tag;
    moa_u16 channel_count;
    moa_u32 samples_per_second;
    moa_u32 bytes_per_second;

    union
    {
        moa_u16 bytes_per_sample, block_alignment;
    };

    moa_u16 bits_per_sample;
} moa_wave_fmt0_chunk;

typedef struct
{
    moa_wave_fmt0_chunk chunk0;

    moa_u16 extension_size; // 0 or 22
} moa_wave_fmt1_chunk;

typedef struct
{
    moa_wave_fmt0_chunk chunk1;

    moa_u16 valid_bits_per_sample;
    moa_u32 channel_mask;
    moa_u8 sub_format[16];
} moa_wave_fmt2_chunk;

#pragma pack(pop)

typedef struct
{
    moa_u32 samples_per_second;
    moa_u32 bytes_per_channel;
    moa_u32 channel_count;
    moa_u32 sample_count;
    moa_u32 bytes_per_sample;
    moa_u32 bytes_per_sample_per_channel;
    moa_f32 duration; // in seconds

    moa_u8_array samples;
} moa_wave;

moa_u8 * moa_advance(moa_u8_array *iterator, moa_usize count)
{
    moa_assert(count <= iterator->count);

    moa_u8 *base = iterator->base;
    iterator->base  += count;
    iterator->count -= count;

    return base;
}

#define moa_advance_type(iterator, type) ((type *) moa_advance(iterator, sizeof(type)))

moa_load_wave_samples_signature
{
    moa_samples result = {0};

    if (!source.count)
        return result;

    moa_u8_array it = source;
    moa_wave_riff_chunk *riff_chunk = moa_advance_type(&it, moa_wave_riff_chunk);

    moa_assert(riff_chunk->header.id_value == moa_wave_id_riff);
    moa_assert(riff_chunk->moa_wave_id_value == moa_wave_id_wave);
    moa_assert(riff_chunk->header.size - sizeof(riff_chunk->moa_wave_id) <= it.count);

    // NOTE: skip garbage data at end?
    it.count = riff_chunk->header.size - 4;

    moa_wave wave = {0};

    while (it.count)
    {
        moa_wave_chunk_header *chunk = (moa_wave_chunk_header *) it.base;
        switch (chunk->id_value)
        {
            case moa_wave_id_fmt:
            {
                moa_wave_fmt0_chunk *fmt_chunk = (moa_wave_fmt0_chunk *) it.base;

                wave.samples_per_second = fmt_chunk->samples_per_second;
                wave.bytes_per_channel  = fmt_chunk->bits_per_sample / 8;
                wave.channel_count      = fmt_chunk->channel_count;
                wave.bytes_per_sample   = fmt_chunk->bytes_per_sample;
                wave.bytes_per_sample_per_channel = fmt_chunk->bytes_per_sample / fmt_chunk->channel_count;

                switch (chunk->size)
                {
                    case sizeof(moa_wave_fmt0_chunk) - sizeof(moa_wave_chunk_header):
                    {
                        moa_advance_type(&it, moa_wave_fmt0_chunk);
                    } break;

                    case sizeof(moa_wave_fmt1_chunk) - sizeof(moa_wave_chunk_header):
                    {
                        auto fmt_chunk1 = moa_advance_type(&it, moa_wave_fmt1_chunk);
                    } break;

                    case sizeof(moa_wave_fmt2_chunk) - sizeof(moa_wave_chunk_header):
                    {
                        auto fmt_chunk2 = moa_advance_type(&it, moa_wave_fmt2_chunk);
                    } break;

                    default:
                    {
                        return moa_sl(moa_stereo_samples) {0};
                    }
                }
            } break;

            case moa_wave_id_data:
            {
                wave.samples.count = chunk->size;
                wave.sample_count  = chunk->size / wave.bytes_per_sample_per_channel;
                wave.duration = (moa_f32) wave.sample_count / wave.samples_per_second;

                moa_advance_type(&it, moa_wave_chunk_header);
                wave.samples.base = moa_advance(&it, chunk->size);

                // skipp odd padding
                if (chunk->size & 1)
                    moa_advance_type(&it, moa_u8);
            } break;

            default:
            {
                moa_advance_type(&it, moa_wave_chunk_header);
                moa_advance(&it, chunk->size);

                // skipp odd padding
                if (chunk->size & 1)
                    moa_advance_type(&it, moa_u8);
            };
        }
    }

    if (wave.channel_count == 1 && force_stereo)
    {
        result.base          = (moa_u16 *) buffer.base;
        result.count         = wave.sample_count * 2;
        result.frequency     = wave.samples_per_second;
        result.channel_count = 2;

        moa_assert(wave.sample_count * result.channel_count * sizeof(moa_u16) <= buffer.count);
        moa_u16 *samples = (moa_u16 *) wave.samples.base;

        for (moa_u32 i = 0; i < wave.sample_count; i++)
        {
            result.base[2 * i]     = samples[i];
            result.base[2 * i + 1] = samples[i];
        }
    }
    else
    {
        moa_assert(wave.sample_count * sizeof(moa_u16) <= buffer.count);

        result.base = (moa_u16 *) buffer.base;
        memcpy(result.base, wave.samples.base, wave.sample_count * sizeof(moa_u16));
        result.count         = wave.sample_count;
        result.frequency     = wave.samples_per_second;
        result.channel_count = wave.channel_count;
    }

    return result;
}

#else

#error platform not supported

#endif

#if defined(mop_h) && defined(moma_h)

moa_load_wave_samples_from_file_signature
{
    mop_read_file_result read_result = moma_read_file(platform, memory, path);
    if (!read_result.ok)
        return moa_sl(moa_stereo_samples) {0};

    moa_u8_array data = { read_result.data.base, read_result.data.count };
    moa_u8_array buffer = { memory->base + memory->used_count, memory->count - memory->used_count };
    moa_samples samples = moa_load_wave_samples(audio, buffer, data, force_stereo);

    // TODO: align read_result.data.base to u16
    // move allocated samples to the beginning of allocation from memory
    memcpy(read_result.data.base, samples.base, samples.count * sizeof(moa_u16));
    samples.base = (moa_u16 *) read_result.data.base;

    moma_free(memory, (moa_u8 *) (samples.base + samples.count));

    return samples;
}

#endif

#endif