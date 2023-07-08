
// some basic types

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

typedef struct
{
    u8    *base;
    usize count;
} u8_array;

// for compatibilty with other libs
#define mop_u8_array_type  u8_array
#define mos_u8_array_type  u8_array
#define mote_u8_array_type u8_array

typedef u8_array string;

#ifdef __cplusplus
#define struct_literal(name)
#else
#define struct_literal(name) (name)
#endif

#define s(static_string) struct_literal(string) { (u8 *) static_string, carray_count(static_string) - 1 }
#define fs(text) (int) (text).count, (char *) (text).base

#ifdef __cplusplus
}
#endif

#endif