
// some basic types
// this is my personal basic setup for typenames and some common macros

#if !defined mob_h
#define mob_h

#ifdef __cplusplus
extern "C" {
#endif

#define assert_message(x, message, ...)  mop_assert_message(x, message, __VA_ARGS__)
#define require_message(x, message, ...) mop_require_message(x, message, __VA_ARGS__)

#define assert(x)  mop_assert(x)
#define require(x) mop_require(x)

#define cases_complete(format, ...) default: assert_message(false, "unhandled switch case " format, __VA_ARGS__)

// for compatibilty with other libs
#define mos_assert_message(x, message, ...)  assert_message(x, message, __VA_ARGS__)
#define mote_assert_message(x, message, ...) assert_message(x, message, __VA_ARGS__)
#define moui_assert_message(x, message, ...) assert_message(x, message, __VA_ARGS__)
#define moma_assert_message(x, message, ...) assert_message(x, message, __VA_ARGS__)
#define moa_assert_message(x, message, ...)  assert_message(x, message, __VA_ARGS__)

#define mos_require_message(x, message, ...)  require_message(x, message, __VA_ARGS__)
#define mote_require_message(x, message, ...) require_message(x, message, __VA_ARGS__)
#define moui_require_message(x, message, ...) require_message(x, message, __VA_ARGS__)
#define moma_require_message(x, message, ...) require_message(x, message, __VA_ARGS__)
#define moa_require_message(x, message, ...)  require_message(x, message, __VA_ARGS__)

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
#define moa_u8_array_type  u8_array

// HACK:
#define box2  moui_box2
#define vec2  moui_vec2
#define rgba  moui_rgba
#define rgba8 moui_rgba8

typedef u8_array string;

array_type(string_array, string);

const string string_empty = {0};

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
// sometimes needed to initialize global values
#define sc(static_string) { (u8 *) static_string, carray_count(static_string) - 1 }

// format string
// example: printf("%.*s", fs(my_string));
#define fs(text) (int) (text).count, (char *) (text).base

#define flag32(bit) (((u32) 1) << (bit))
#define flag64(bit) (((u64) 1) << (bit))

// for use in macro lists

#define mo_enum_item(name, prefix) prefix ## name,
#define mo_string_item(name, ...) sc(# name),

#define mo_enum_list(name, list_macro) \
    typedef enum \
    { \
        list_macro(mo_enum_item, name ## _) \
        name ## _count \
    } name \

#define mo_string_list(name, list_macro) \
    const string name[] = \
    { \
        list_macro(mo_string_item) \
    } \

// example:
//
// here you can add and remove entries
// #define my_list(macro, ...) \
//     macro(apple, __VA_ARGS__) \
//     macro(banana, __VA_ARGS__) \
//     macro(grape, __VA_ARGS__) \
//
// mo_enum_list(fruit_tag, my_list);
//
// mo_string_list(fruit_names, my_list);
//
// will expand to this:
//
// typedef enum
// {
//     fruit_tag_apple,
//     fruit_tag_banana,
//     fruit_tag_grap,
//
//     fruit_tag_count
// } fruit_tag;
//
// const string fruit_names[] =
//     sc("apple"),
//     sc("banana"),
//     sc("grap"),
// };

#ifdef __cplusplus
}
#endif

#endif

#if defined mob_implementation
#undef mob_implementation

copy_signature
{
    if (to <= from)
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