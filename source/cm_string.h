
#if !defined STRING_H
#define STRING_H

#if !defined STRING_BASE_TYPES

#define assert(x)
#define require(x) (x)

typedef unsigned char      u8;
typedef unsigned int       u32;
typedef unsigned long long u64;

typedef signed int       s32;
typedef signed long long s64;

typedef float  f32;
typedef double f64;

typedef u8 b8;

typedef u64 usize;

typedef char * cstring;

#define null 0

const b8 false = 0;
const b8 true  = 1;

#define carray_count(static_array) (sizeof(static_array) / sizeof(*(static_array)))

typedef struct
{
    u8    *base;
    usize count;
} u8_array;

typedef u8_array string;
#define s(static_string) (string) { static_string, carray_count(static_string) - 1 }

#endif

typedef struct
{
    u8 *base;
    u32 used_count;
    u32 total_count;
} string_buffer;

#define string_advance_signature void string_advance(string *text, usize count)
string_advance_signature;

#define string_are_equal_signature b8 string_are_equal(string a, string b)
string_are_equal_signature;

#define string_set_contains_signature b8 string_set_contains(string set, u8 symbol)
string_set_contains_signature;

#define string_skip_set_signature usize string_skip_set(string *iterator, string set)
string_skip_set_signature;

#define string_skip_white_space_signature usize string_skip_white_space(string *iterator)
string_skip_white_space_signature;

#define string_try_skip_signature b8 string_try_skip(string *iterator, string pattern)
string_try_skip_signature;

#define string_parse_u64_ex_signature b8 string_parse_u64_ex(u64 *result, string *iterator, u8 base)
string_parse_u64_ex_signature;

#define string_parse_u64_signature b8 string_parse_u64(u64 *result, string *iterator)
string_parse_u64_signature;

#define string_parse_s64_ex_signature b8 string_parse_s64_ex(s64 *result, string *iterator, u8 base)
string_parse_s64_ex_signature;

#define string_parse_s64_signature b8 string_parse_s64(s64 *result, string *iterator)
string_parse_s64_signature;

#define string_buffer_to_string_signature string string_buffer_to_string(string_buffer buffer)
string_buffer_to_string_signature;

#define string_write_signature string string_write(string_buffer *buffer, cstring format, ...)
string_write_signature;

#define string_write_va_signature string string_write_va(string_buffer *buffer, cstring format, va_list arguments)
string_write_va_signature;

#endif

#if defined STRING_IMPLEMENTATION

string_advance_signature
{
    assert(count <= text->count);

    text->base   += count;
    text->count -= count;
}

string_are_equal_signature
{
    if (a.count != b.count)
        return false;

    for (usize i = 0; i < a.count; i++)
    {
        if (a.base[i] != b.base[i])
            return false;
    }

    return true;
}

#if 0
string_write_signature
{
    assert(text.count <= buffer.count);

    for (usize i = 0; i < text.count; i++)
    {
        buffer.base[i] = text.base[i];
    }

    return (string) { buffer.base, text.count };
}
#endif

string_set_contains_signature
{
    for (usize i = 0; i < set.count; i++)
    {
        if (set.base[i] == symbol)
            return true;
    }

    return false;
}

string_skip_set_signature
{
    usize count = 0;

    while (count < iterator->count)
    {
        u8 symbol = iterator->base[count];
        if (!string_set_contains(set, symbol))
            break;

        count++;
    }

    string_advance(iterator, count);
    return count;
}

string_skip_white_space_signature
{
    return string_skip_set(iterator, s(" \t\n\r"));
}

string_try_skip_signature
{
    if (iterator->count < pattern.count)
        return false;

    for (usize i = 0; i < pattern.count; i++)
    {
        if (iterator->base[i] != pattern.base[i])
            return false;
    }

    string_advance(iterator, pattern.count);

    return true;
}

string_parse_u64_signature
{
    return string_parse_u64_ex(result, iterator, 10);
}

string_parse_u64_ex_signature
{
    if (!iterator->count)
        return false;

    u64 value = 0;
    usize count = 0;

    while (count < iterator->count)
    {
        u8 symbol = iterator->base[count];
        u8 digit = symbol - '0';
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

        u64 next_value = value * base + digit;

        // overflow
        if (next_value < value)
            return false;

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
        return false;

    s64 sign = 1;
    string test_iterator = *iterator;
    if (test_iterator.base[0] == '-')
    {
        sign = -1;
        test_iterator.base++;
        test_iterator.count--;
    }

    u64 value;
    b8 ok = string_parse_u64_ex(&value, &test_iterator, base);

    if (ok)
    {
        if (value >= 0x7FFFFFFFFFFFFFFF)
            return false;

        *result = (s64) value * sign;
        *iterator = test_iterator;
    }

    return ok;
}

string_buffer_to_string_signature
{
    return (string) { buffer.base, buffer.used_count };
}

string_write_signature
{
    va_list arguments;
    va_start(arguments, format);

    string result = string_write_va(buffer, format, arguments);

    va_end(arguments);

    return result;
}

string_write_va_signature
{
    s32 count = vsprintf_s((char *) buffer->base + buffer->used_count, buffer->total_count - buffer->used_count, format, arguments);
    assert(count >= 0);
    string result = { buffer->base + buffer->used_count, count };
    buffer->used_count += count;

    return result;
}

#endif