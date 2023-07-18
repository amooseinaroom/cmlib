
// some basic types
// this is my personal basic setup for typenames and some common macros

#if !defined mob_h
#define mob_h

#ifdef __cplusplus
extern "C" {
#endif

#define assert(x)  mop_assert(x)
#define require(x) mop_require(x)

#define cases_complete(value) default: assert(0)

// for compatibilty with other libs
#define mos_assert(x)  assert(x)
#define mote_assert(x) assert(x)
#define moui_assert(x) assert(x)
#define moma_assert(x) assert(x)

typedef unsigned char      u8;
typedef unsigned short     u16;
typedef unsigned int       u32;
typedef unsigned long long u64;

typedef signed char      s8;
typedef signed short     s16;
typedef signed int       s32;
typedef signed long long s64;

typedef float  f32;
typedef double f64;

typedef u8 b8;

typedef u64 usize;

typedef char * cstring;

#define null 0

#if !defined __cplusplus
const b8 false = 0;
const b8 true  = 1;
#endif

#define carray_count(static_array) (sizeof(static_array) / sizeof(*(static_array)))

#define array_type(name, type) \
typedef struct \
{ \
    type  *base; \
    usize count; \
} name

array_type(u8_array, u8);

// for compatibilty with other libs
#define mop_u8_array_type  u8_array
#define mos_u8_array_type  u8_array
#define mote_u8_array_type u8_array
#define moui_u8_array_type u8_array
#define moma_u8_array_type u8_array

typedef u8_array string;

array_type(string_array, string);

#define copy_items(to, from, count) copy((u8 *) (to), (u8 *) (from), sizeof(*(to)) * count)

#define copy_signature void copy(u8 *to, u8 *from, usize byte_count)
copy_signature;

// sl - struct literal
// to help with compatibility between c and c++
#ifdef __cplusplus
#define sl(name)
#else
#define sl(name) (name)
#endif

// string out of c string literal
#define s(static_string) sl(string) { (u8 *) static_string, carray_count(static_string) - 1 }

// format string
// example: printf("%.*s", fs(my_string));
#define fs(text) (int) (text).count, (char *) (text).base

#ifdef __cplusplus
}
#endif

#endif

#if defined mob_implementation
#undef mob_implementation

copy_signature
{
    if (to >= from)
    {
        for (usize i = 0; i < byte_count; i++)
            to[i] = from[i];
    }
    else
    {
        for (usize i = 0; i < byte_count; i++)
            to[byte_count - 1 - i] = from[byte_count - 1 - i];
    }
}

#endif