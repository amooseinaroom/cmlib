
// single header string library

#if !defined mos_h
#define mos_h

#ifdef __cplusplus
extern "C" {
#endif

#if !defined mos_assert
#define mos_assert(x)
#endif

typedef unsigned char      mos_u8;
typedef unsigned int       mos_u32;
typedef unsigned long long mos_u64;

typedef signed int       mos_s32;
typedef signed long long mos_s64;

typedef float  mos_f32;
typedef double mos_f64;

typedef mos_u8 mos_b8;

typedef mos_u64 mos_usize;

typedef char * mos_cstring;

#define mos_null 0

const mos_b8 mos_false = 0;
const mos_b8 mos_true  = 1;

#define mos_carray_count(static_array) (sizeof(static_array) / sizeof(*(static_array)))

#if !defined mos_u8_array_type
#define mos_u8_array_type mos_u8_array

typedef struct
{
    mos_u8    *base;
    mos_usize count;
} mos_u8_array;

#else

typedef mos_u8_array_type mos_u8_array;

#endif

typedef mos_u8_array mos_string;

#ifdef __cplusplus
#define mos_struct_literal(name)
#else
#define mos_struct_literal(name) (name)
#endif

#define mos_s(static_string) mos_struct_literal(mos_string) { (mos_u8 *) static_string, mos_carray_count(static_string) - 1 }
#define mos_t(base, count)   mos_struct_literal(mos_string) { (mos_u8 *) base, (mos_usize) count }
#define mos_fs(text) (int) (text).count, (char *) (text).base

typedef struct
{
    mos_u8 *base;
    mos_u32 used_count;
    mos_u32 total_count;
} mos_string_buffer;

#include <stdarg.h>
#include <stdio.h>

#define mos_advance_signature void mos_advance(mos_string *text, mos_usize count)
mos_advance_signature;

#define mos_are_equal_signature mos_b8 mos_are_equal(mos_string a, mos_string b)
mos_are_equal_signature;

#define mos_set_contains_signature mos_b8 mos_set_contains(mos_string set, mos_u8 symbol)
mos_set_contains_signature;

#define mos_skip_set_signature mos_usize mos_skip_set(mos_string *iterator, mos_string set)
mos_skip_set_signature;

#define mos_skip_white_space_signature mos_usize mos_skip_white_space(mos_string *iterator)
mos_skip_white_space_signature;

#define mos_try_skip_signature mos_b8 mos_try_skip(mos_string *iterator, mos_string pattern)
mos_try_skip_signature;

#define mos_parse_u64_ex_signature mos_b8 mos_parse_u64_ex(mos_u64 *result, mos_string *iterator, mos_u8 base)
mos_parse_u64_ex_signature;

#define mos_parse_u64_signature mos_b8 mos_parse_u64(mos_u64 *result, mos_string *iterator)
mos_parse_u64_signature;

#define mos_parse_s64_ex_signature mos_b8 mos_parse_s64_ex(mos_s64 *result, mos_string *iterator, mos_u8 base)
mos_parse_s64_ex_signature;

#define mos_parse_s64_signature mos_b8 mos_parse_s64(mos_s64 *result, mos_string *iterator)
mos_parse_s64_signature;

#define mos_buffer_to_string_signature mos_string mos_buffer_to_string(mos_string_buffer buffer)
mos_buffer_to_string_signature;

#define mos_write_signature mos_string mos_write(mos_string_buffer *buffer, mos_cstring format, ...)
mos_write_signature;

#define mos_write_va_signature mos_string mos_write_va(mos_string_buffer *buffer, mos_cstring format, va_list arguments)
mos_write_va_signature;

#ifdef __cplusplus
}
#endif

#endif

#if defined mos_implementation
#undef mos_implementation

mos_advance_signature
{
    mos_assert(count <= text->count);

    text->base   += count;
    text->count -= count;
}

mos_are_equal_signature
{
    if (a.count != b.count)
        return mos_false;

    for (mos_usize i = 0; i < a.count; i++)
    {
        if (a.base[i] != b.base[i])
            return mos_false;
    }

    return mos_true;
}

#if 0
mos_write_signature
{
    mos_assert(text.count <= buffer.count);

    for (mos_usize i = 0; i < text.count; i++)
    {
        buffer.base[i] = text.base[i];
    }

    return (mos_string) { buffer.base, text.count };
}
#endif

mos_set_contains_signature
{
    for (mos_usize i = 0; i < set.count; i++)
    {
        if (set.base[i] == symbol)
            return mos_true;
    }

    return mos_false;
}

mos_skip_set_signature
{
    mos_usize count = 0;

    while (count < iterator->count)
    {
        mos_u8 symbol = iterator->base[count];
        if (!mos_set_contains(set, symbol))
            break;

        count++;
    }

    mos_advance(iterator, count);
    return count;
}

mos_skip_white_space_signature
{
    return mos_skip_set(iterator, mos_s(" \t\n\r"));
}

mos_try_skip_signature
{
    if (iterator->count < pattern.count)
        return mos_false;

    for (mos_usize i = 0; i < pattern.count; i++)
    {
        if (iterator->base[i] != pattern.base[i])
            return mos_false;
    }

    mos_advance(iterator, pattern.count);

    return mos_true;
}

mos_parse_u64_signature
{
    return mos_parse_u64_ex(result, iterator, 10);
}

mos_parse_u64_ex_signature
{
    if (!iterator->count)
        return mos_false;

    mos_u64 value = 0;
    mos_usize count = 0;

    while (count < iterator->count)
    {
        mos_u8 symbol = iterator->base[count];
        mos_u8 digit = symbol - '0';
        if (digit > 9)
        {
            digit = symbol - 'A';

            if (digit >= base - 10)
            {
                digit = symbol - 'a';

                if (digit >= base - 10)
                    break;

                digit += 10;
            }
        }

        mos_u64 next_value = value * base + digit;

        // overflow
        if (next_value < value)
            return mos_false;

        value = next_value;
        count++;
    }

    mos_advance(iterator, count);
    *result = value;

    return (count > 0);
}

mos_parse_s64_signature
{
    return mos_parse_s64_ex(result, iterator, 10);
}

mos_parse_s64_ex_signature
{
    if (!iterator->count)
        return mos_false;

    mos_s64 sign = 1;
    mos_string test_iterator = *iterator;
    if (test_iterator.base[0] == '-')
    {
        sign = -1;
        test_iterator.base++;
        test_iterator.count--;
    }

    mos_u64 value;
    mos_b8 ok = mos_parse_u64_ex(&value, &test_iterator, base);

    if (ok)
    {
        if (value >= 0x7FFFFFFFFFFFFFFF)
            return mos_false;

        *result = (mos_s64) value * sign;
        *iterator = test_iterator;
    }

    return ok;
}

mos_buffer_to_string_signature
{
    return mos_t(buffer.base, buffer.used_count);
}

mos_write_signature
{
    va_list arguments;
    va_start(arguments, format);

    mos_string result = mos_write_va(buffer, format, arguments);

    va_end(arguments);

    return result;
}

mos_write_va_signature
{
    mos_s32 count = vsprintf_s((char *) buffer->base + buffer->used_count, buffer->total_count - buffer->used_count, format, arguments);
    mos_assert(count >= 0);
    mos_string result = { buffer->base + buffer->used_count, (mos_usize) count };
    buffer->used_count += count;

    return result;
}

#endif