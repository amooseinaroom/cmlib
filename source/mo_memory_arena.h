
// single header memory arena library

#if !defined moma_h
#define moma_h

#ifdef __cplusplus
extern "C" {
#endif

#if !defined moma_assert
#define moma_assert(x)
#endif

#if !defined moma_require
#define moma_require(x) (x)
#endif

#define moma_cases_complete(value) default: moma_assert(0)

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
#else
#define moma_struct_literal(name) (name)
#endif

#define moma_s(static_string) moma_struct_literal(string) { static_string, moma_carray_count(static_string) - 1 }
#define moma_fs(text) (int) (text).count, (char *) (text).base

const moma_string moma_string_empty = {0};

struct moma_platform;
typedef struct moma_platform moma_platform;

struct moma_window;
typedef struct moma_window moma_window;

typedef struct
{
    moma_u8    *base;
    moma_usize used_count;
    moma_usize count;
} moma_arena;

#if !defined moma_aling_of
#define moma_aling_of(type) 8
#endif

#define moma_allocate_item(arena, type)         ((type *) moma_allocate_bytes(arena, sizeof(type), moma_aling_of(type)))
#define moma_allocate_array(arena, type, count) ((type *) moma_allocate_bytes(arena, sizeof(type) * (count), moma_aling_of(type)))
#define moma_free(arena, item_or_array_base)              moma_reset(arena, (moma_u8 *) (item_or_array_base))

#define moma_allocate_bytes_signature moma_u8 * moma_allocate_bytes(moma_arena *arena, moma_usize byte_count, moma_u32 byte_alignment)
moma_allocate_bytes_signature;

#define moma_reset_signature void moma_reset(moma_arena *arena, moma_u8 *base)
moma_reset_signature;

#ifdef __cplusplus
}
#endif

#endif

#if defined moma_implementation
#undef moma_implementation

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

moma_reset_signature
{
    if (!base)
        return;

    moma_usize new_used_count = base - arena->base;

    moma_assert(new_used_count <= arena->count);
    arena->used_count = new_used_count;
}

#endif