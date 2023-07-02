
// single header text editing library

#if !defined mote_h
#define mote_h

#ifdef __cplusplus
extern "C" {
#endif

#if !defined mote_assert
#define mote_assert(x)
#endif

typedef unsigned char      mote_u8;
typedef unsigned int       mote_u32;
typedef unsigned long long mote_u64;

typedef signed int       mote_s32;
typedef signed long long mote_s64;

typedef float  mote_f32;
typedef double mote_f64;

typedef mote_u8 mote_b8;

typedef mote_u64 mote_usize;

typedef char * mote_cstring;

#define mote_null 0

const mote_b8 mote_false = 0;
const mote_b8 mote_true  = 1;

#define mote_carray_count(static_array) (sizeof(static_array) / sizeof(*(static_array)))

#if !defined mote_u8_array_type
#define mote_u8_array_type mote_u8_array

typedef struct
{
    mote_u8    *base;
    mote_usize count;
} mote_u8_array;

#else

typedef mote_u8_array_type mote_u8_array;

#endif

typedef mote_u8_array mote_string;

#ifdef __cplusplus
#define mote_struct_literal(name)
#else
#define mote_struct_literal(name) (name)
#endif

#define mote_s(static_string) mote_struct_literal(mote_string) { (mote_u8 *) static_string, mote_carray_count(static_string) - 1 }
#define mote_t(base, count)   mote_struct_literal(mote_string) { (mote_u8 *) base, (mote_usize) count }
#define mote_fs(text) (int) (text).count, (char *) (text).base

typedef struct
{
    mote_u8 *base;
    mote_u32 used_count;
    mote_u32 total_count;
    mote_u32 cursor;
} mote_buffer;

typedef enum
{
    mote_character_symbol_return,
    mote_character_symbol_backspace,
    mote_character_symbol_escape,
    mote_character_symbol_delete,
    mote_character_symbol_newline,
} mote_character_symbol;

typedef struct
{
    mote_u32 code;
    mote_b8  is_symbol;
} mote_character;

#define mote_buffer_to_string_signature mote_string mote_buffer_to_string(mote_buffer buffer)
mote_buffer_to_string_signature;

#define mote_handle_character_signature mote_b8 mote_handle_character(mote_buffer *text, mote_character character)
mote_handle_character_signature;

#ifdef __cplusplus
}
#endif

#endif

#if defined mote_implementation
#undef mote_implementation

mote_buffer_to_string_signature
{
    mote_string result = { buffer.base, buffer.used_count };
    return result;
}

mote_handle_character_signature
{
    mote_b8 did_change = mote_false;

    if (character.is_symbol)
    {
        switch (character.code)
        {
            case mote_character_symbol_backspace:
            {
                if (text->used_count)
                {
                    text->used_count--;
                    text->cursor--;
                    did_change = mote_true;
                }
            } break;

            case mote_character_symbol_newline:
            {
                if (text->used_count < text->total_count)
                {
                    text->base[text->used_count] = '\n';
                    text->used_count++;
                    text->cursor++;
                }
            } break;
        }
    }
    else
    {
        if (character.code < 128)
        {
            if (text->used_count < text->total_count)
            {
                text->base[text->used_count] = (mote_u8) character.code;
                text->used_count++;
                text->cursor++;
                did_change = mote_true;
            }
        }
    }

    return did_change;
}

#endif