
#if !defined string_h
#define string_h

#ifdef __cplusplus
extern "C" {
#endif

#if !defined string_assert
#define string_assert(x)
#endif

typedef unsigned char      string_u8;
typedef unsigned int       string_u32;
typedef unsigned long long string_u64;

typedef signed int       string_s32;
typedef signed long long string_s64;

typedef float  string_f32;
typedef double string_f64;

typedef string_u8 string_b8;

typedef string_u64 string_usize;

typedef char * string_ctext;

#define string_null 0

const string_b8 string_false = 0;
const string_b8 string_true  = 1;

#define string_carray_count(static_array) (sizeof(static_array) / sizeof(*(static_array)))

typedef struct
{
    string_u8    *base;
    string_usize count;
} string_u8_array;

typedef string_u8_array string_text;

#ifdef __cplusplus
#define string_s(static_string) { (string_u8 *) static_string, string_carray_count(static_string) - 1 }
#define string_t(base, count)  { (string_u8 *) base, (string_usize) count }
#else
#define string_s(static_string) (string_text) { (string_u8 *) static_string, string_carray_count(static_string) - 1 }
#define string_t(base, count) (string_text) { (string_u8 *) base, (string_usize) count }
#endif

typedef struct
{
    string_u8 *base;
    string_u32 used_count;
    string_u32 total_count;
} string_text_buffer;

#include <stdarg.h>
#include <stdio.h>

#define string_advance_signature void string_advance(string_text *text, string_usize count)
string_advance_signature;

#define string_are_equal_signature string_b8 string_are_equal(string_text a, string_text b)
string_are_equal_signature;

#define string_set_contains_signature string_b8 string_set_contains(string_text set, string_u8 symbol)
string_set_contains_signature;

#define string_skip_set_signature string_usize string_skip_set(string_text *iterator, string_text set)
string_skip_set_signature;

#define string_skip_white_space_signature string_usize string_skip_white_space(string_text *iterator)
string_skip_white_space_signature;

#define string_try_skip_signature string_b8 string_try_skip(string_text *iterator, string_text pattern)
string_try_skip_signature;

#define string_parse_u64_ex_signature string_b8 string_parse_u64_ex(string_u64 *result, string_text *iterator, string_u8 base)
string_parse_u64_ex_signature;

#define string_parse_u64_signature string_b8 string_parse_u64(string_u64 *result, string_text *iterator)
string_parse_u64_signature;

#define string_parse_s64_ex_signature string_b8 string_parse_s64_ex(string_s64 *result, string_text *iterator, string_u8 base)
string_parse_s64_ex_signature;

#define string_parse_s64_signature string_b8 string_parse_string_s64(string_s64 *result, string_text *iterator)
string_parse_s64_signature;

#define string_buffer_to_text_signature string_text string_buffer_to_text(string_text_buffer buffer)
string_buffer_to_text_signature;

#define string_write_signature string_text string_write(string_text_buffer *buffer, string_ctext format, ...)
string_write_signature;

#define string_write_va_signature string_text string_write_va(string_text_buffer *buffer, string_ctext format, va_list arguments)
string_write_va_signature;

#ifdef __cplusplus
}
#endif

#endif

#if defined string_implementation

string_advance_signature
{
    string_assert(count <= text->count);

    text->base   += count;
    text->count -= count;
}

string_are_equal_signature
{
    if (a.count != b.count)
        return string_false;

    for (string_usize i = 0; i < a.count; i++)
    {
        if (a.base[i] != b.base[i])
            return string_false;
    }

    return string_true;
}

#if 0
string_write_signature
{
    string_assert(text.count <= buffer.count);

    for (string_usize i = 0; i < text.count; i++)
    {
        buffer.base[i] = text.base[i];
    }

    return (string_text) { buffer.base, text.count };
}
#endif

string_set_contains_signature
{
    for (string_usize i = 0; i < set.count; i++)
    {
        if (set.base[i] == symbol)
            return string_true;
    }

    return string_false;
}

string_skip_set_signature
{
    string_usize count = 0;

    while (count < iterator->count)
    {
        string_u8 symbol = iterator->base[count];
        if (!string_set_contains(set, symbol))
            break;

        count++;
    }

    string_advance(iterator, count);
    return count;
}

string_skip_white_space_signature
{
    return string_skip_set(iterator, string_s(" \t\n\r"));
}

string_try_skip_signature
{
    if (iterator->count < pattern.count)
        return string_false;

    for (string_usize i = 0; i < pattern.count; i++)
    {
        if (iterator->base[i] != pattern.base[i])
            return string_false;
    }

    string_advance(iterator, pattern.count);

    return string_true;
}

string_parse_u64_signature
{
    return string_parse_u64_ex(result, iterator, 10);
}

string_parse_u64_ex_signature
{
    if (!iterator->count)
        return string_false;

    string_u64 value = 0;
    string_usize count = 0;

    while (count < iterator->count)
    {
        string_u8 symbol = iterator->base[count];
        string_u8 digit = symbol - '0';
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

        string_u64 next_value = value * base + digit;

        // overflow
        if (next_value < value)
            return string_false;

        value = next_value;
        count++;
    }

    string_advance(iterator, count);
    *result = value;

    return (count > 0);
}

string_parse_s64_signature
{
    return string_parse_s64_ex(result, iterator, 10);
}

string_parse_s64_ex_signature
{
    if (!iterator->count)
        return string_false;

    string_s64 sign = 1;
    string_text test_iterator = *iterator;
    if (test_iterator.base[0] == '-')
    {
        sign = -1;
        test_iterator.base++;
        test_iterator.count--;
    }

    string_u64 value;
    string_b8 ok = string_parse_u64_ex(&value, &test_iterator, base);

    if (ok)
    {
        if (value >= 0x7FFFFFFFFFFFFFFF)
            return string_false;

        *result = (string_s64) value * sign;
        *iterator = test_iterator;
    }

    return ok;
}

string_buffer_to_text_signature
{
    return string_t(buffer.base, buffer.used_count);
}

string_write_signature
{
    va_list arguments;
    va_start(arguments, format);

    string_text result = string_write_va(buffer, format, arguments);

    va_end(arguments);

    return result;
}

string_write_va_signature
{
    string_s32 count = vsprintf_s((char *) buffer->base + buffer->used_count, buffer->total_count - buffer->used_count, format, arguments);
    string_assert(count >= 0);
    string_text result = { buffer->base + buffer->used_count, (string_usize) count };
    buffer->used_count += count;

    return result;
}

#endif