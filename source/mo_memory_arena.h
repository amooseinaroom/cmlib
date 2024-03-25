
// single header memory arena library

#if !defined moma_h
#define moma_h

#ifdef __cplusplus
extern "C" {
#endif

#if !defined moma_assert_message
#define moma_assert_message(...)
#endif

#if !defined moma_require_mesage
#define moma_require_mesage(...)
#endif

#define moma_assert(x)  moma_assert_message(x, "")
#define moma_require(x) moma_require_message(x, "")

#define moma_cases_complete(format, ...) default: moma_assert_message(moma_false, "unhandled switch case " format, __VA_ARGS__)

typedef unsigned char      moma_u8;
typedef unsigned int       moma_u32;
typedef unsigned long long moma_u64;

typedef signed int       moma_s32;
typedef signed long long moma_s64;

typedef float  moma_f32;
typedef double moma_f64;

typedef moma_u8 moma_b8;

typedef moma_u64 moma_usize;

typedef char * moma_cstring;

#define moma_null 0

const moma_b8 moma_false = 0;
const moma_b8 moma_true  = 1;

#define moma_carray_count(static_array) (sizeof(static_array) / sizeof(*(static_array)))

#if !defined moma_u8_array_type
#define moma_u8_array_type moma_u8_array

typedef struct
{
    moma_u8    *base;
    moma_usize count;
} moma_u8_array;

#else

typedef moma_u8_array_type moma_u8_array;

#endif

typedef moma_u8_array moma_string;

#ifdef __cplusplus
#define moma_struct_literal(name)
#define moma_aling_of(type) alignof(type)
#else
#define moma_struct_literal(name) (name)
#define moma_aling_of(type) 8
#endif

#define moma_s(static_string) moma_struct_literal(string) { static_string, moma_carray_count(static_string) - 1 }
#define moma_fs(text) (int) (text).count, (char *) (text).base

const moma_string moma_string_empty = {0};

typedef struct
{
    moma_u8    *base;
    moma_usize used_count;
    moma_usize count;
} moma_arena;

#define moma_allocate_item(arena, type)         ((type *) moma_allocate_bytes(arena, sizeof(type), moma_aling_of(type)))
#define moma_allocate_array(arena, type, count) ((type *) moma_allocate_bytes(arena, sizeof(type) * (count), moma_aling_of(type)))
#define moma_reallocate_array(arena, array, type) moma_reallocate_bytes(arena, (moma_u8 **) &(array)->base, sizeof(type) * ((array)->count), moma_aling_of(type))
#define moma_free(arena, item_or_array_base)              moma_reset(arena, (moma_u8 *) (item_or_array_base))

#define moma_clear_signature void moma_clear(moma_arena *arena)
moma_clear_signature;

#define moma_allocate_bytes_signature moma_u8 * moma_allocate_bytes(moma_arena *arena, moma_usize byte_count, moma_u32 byte_alignment)
moma_allocate_bytes_signature;

#define moma_reallocate_bytes_signature void moma_reallocate_bytes(moma_arena *arena, u8 **base, usize byte_count, u32 byte_alignment)
moma_reallocate_bytes_signature;

#define moma_reset_signature void moma_reset(moma_arena *arena, moma_u8 *base)
moma_reset_signature;

#if defined mop_h

#define moma_create_signature void moma_create(moma_arena *arena, mop_platform *platform, moma_usize count)
moma_create_signature;

#define moma_destroy_signature void moma_destroy(moma_arena *arena, mop_platform *platform)
moma_destroy_signature;

#define moma_read_file_signature mop_read_file_result moma_read_file(mop_platform *platform, moma_arena *memory, mop_string path)
moma_read_file_signature;

#endif

#ifdef __cplusplus
}
#endif

#endif

#if defined moma_implementation
#undef moma_implementation

moma_clear_signature
{
    arena->used_count = 0;
}

moma_allocate_bytes_signature
{
    if (!byte_count)
        return moma_null;

    moma_u8 *base = (moma_u8 *) (((moma_usize) arena->base + arena->used_count + byte_alignment - 1) & ~(moma_usize) (byte_alignment - 1));

    moma_usize new_used_count = base + byte_count - arena->base;

    moma_assert(new_used_count <= arena->count);
    arena->used_count = new_used_count;

    return base;
}

moma_reallocate_bytes_signature
{
    moma_free(arena, *base);
    *base = moma_allocate_bytes(arena, byte_count, byte_alignment);
}

moma_reset_signature
{
    if (!base)
        return;

    moma_usize new_used_count = base - arena->base;

    moma_assert(new_used_count <= arena->count);
    arena->used_count = new_used_count;
}

#if defined mop_h

moma_create_signature
{
    moma_assert(!arena->base);

    mop_u8_array data = mop_allocate(platform, count);
    arena->base = data.base;
    arena->used_count = 0;
    arena->count = data.count;
}

moma_destroy_signature
{
    mop_free(platform, arena->base);
}

moma_read_file_signature
{
    u8_array data;
    data.count = memory->count - memory->used_count;
    data.base  = memory->base + memory->used_count;
    mop_read_file_result result = mop_read_file(platform, data, path);
    if (result.ok)
    {
        u8 *base = moma_allocate_bytes(memory, result.data.count, 1);
        assert(base == data.base);
    }

    return result;
}

#endif

#endif