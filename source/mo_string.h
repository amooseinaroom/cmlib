
// single header string library

#if !defined mos_h
#define mos_h

#ifdef __cplusplus
extern "C" {
#endif

#if !defined mos_assert_message
#define mos_assert_message(...)
#endif

#define mos_assert(x) mos_assert_message(x, "")

#define mos_cases_complete(format, ...) default: mos_assert_message(mos_false, "unhandled switch case " format, __VA_ARGS__)

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
#define mos_sl(name)
#else
#define mos_sl(name) (name)
#endif

#define mos_s(static_string) mos_sl(mos_string) { (mos_u8 *) static_string, mos_carray_count(static_string) - 1 }
#define mos_t(base, count)   mos_sl(mos_string) { (mos_u8 *) base, (mos_usize) count }
#define mos_fs(text) (int) (text).count, (char *) (text).base

const mos_string mos_string_empty = {0};

typedef struct
{
    mos_u8 *base;
    mos_u32 used_count;
    mos_u32 total_count;
} mos_string_buffer;

typedef struct
{
    mos_u32 utf32_code;
    mos_u32 byte_count;
} mos_utf8_result;

typedef struct
{
    mos_u8  base[4];
    mos_u32 count;
} mos_utf8_encoding;

typedef struct
{
    mos_string directory;
    mos_string name;
    mos_string extension;
} mos_split_path_result;

#include <stdarg.h>
#include <stdio.h>

#define mos_utf8_advance_signature mos_utf8_result mos_utf8_advance(mos_string *iterator)
mos_utf8_advance_signature;

#define mos_utf8_previous_signature mos_utf8_result mos_utf8_previous(mos_string text, mos_usize byte_offset)
mos_utf8_previous_signature;

#define mos_encode_utf8_signature mos_utf8_encoding mos_encode_utf8(mos_u32 utf32_code)
mos_encode_utf8_signature;

#define mos_advance_signature void mos_advance(mos_string *text, mos_usize count)
mos_advance_signature;

#define mos_are_equal_signature mos_b8 mos_are_equal(mos_string a, mos_string b)
mos_are_equal_signature;

#define mos_substring_signature mos_string mos_substring(mos_string text, mos_usize offset, mos_usize count)
mos_substring_signature;

#define mos_remaining_substring_signature mos_string mos_remaining_substring(mos_string text, mos_usize offset)
mos_remaining_substring_signature;

#define mos_set_contains_signature mos_b8 mos_set_contains(mos_string set, mos_u8 symbol)
mos_set_contains_signature;

#define mos_skip_set_signature mos_usize mos_skip_set(mos_string *iterator, mos_string set)
mos_skip_set_signature;

#define mos_skip_until_set_or_end_signature mos_string mos_skip_until_set_or_end(mos_string *iterator, mos_string set)
mos_skip_until_set_or_end_signature;

#define mos_skip_white_space_signature mos_usize mos_skip_white_space(mos_string *iterator)
mos_skip_white_space_signature;

#define mos_skip_name_signature mos_string mos_skip_name(mos_string *iterator, mos_string blacklist)
mos_skip_name_signature;

#define mos_try_skip_signature mos_b8 mos_try_skip(mos_string *iterator, mos_string pattern)
mos_try_skip_signature;

#define mos_skip_signature void mos_skip(mos_string *iterator, mos_string pattern)
mos_skip_signature;

#define mos_skip_until_pattern_or_end_signature mos_string mos_skip_until_pattern_or_end(mos_string *iterator, mos_string pattern)
mos_skip_until_pattern_or_end_signature;

#define mos_contains_pattern_signature mos_string mos_contains_pattern(mos_string text, mos_string pattern)
mos_contains_pattern_signature;

#define mos_contains_pattern_from_end_signature mos_string mos_contains_pattern_from_end(mos_string text, mos_string pattern)
mos_contains_pattern_from_end_signature;

#define mos_parse_u64_ex_signature mos_b8 mos_parse_u64_ex(mos_u64 *result, mos_string *iterator, mos_u8 base)
mos_parse_u64_ex_signature;

#define mos_parse_u64_signature mos_b8 mos_parse_u64(mos_u64 *result, mos_string *iterator)
mos_parse_u64_signature;

#define mos_parse_s64_ex_signature mos_b8 mos_parse_s64_ex(mos_s64 *result, mos_string *iterator, mos_u8 base)
mos_parse_s64_ex_signature;

#define mos_parse_s64_signature mos_b8 mos_parse_s64(mos_s64 *result, mos_string *iterator)
mos_parse_s64_signature;

#define mos_parse_f64_signature mos_b8 mos_parse_f64(mos_f64 *result, mos_string *iterator)
mos_parse_f64_signature;

#define mos_parse_u32_signature mos_b8 mos_parse_u32(mos_u32 *result, mos_string *iterator)
mos_parse_u32_signature;

#define mos_parse_s32_signature mos_b8 mos_parse_s32(mos_s32 *result, mos_string *iterator)
mos_parse_s32_signature;

#define mos_parse_f32_signature mos_b8 mos_parse_f32(mos_f32 *result, mos_string *iterator)
mos_parse_f32_signature;

#define mos_buffer_from_memory_signature mos_string_buffer mos_buffer_from_memory(u8 *base, mos_usize count)
mos_buffer_from_memory_signature;

#define mos_buffer_to_string_signature mos_string mos_buffer_to_string(mos_string_buffer buffer)
mos_buffer_to_string_signature;

#define mos_get_remaining_string_signature mos_string mos_get_remaining_string(mos_string_buffer buffer)
mos_get_remaining_string_signature;

#define mos_write_signature mos_string mos_write(mos_string_buffer *buffer, mos_cstring format, ...)
mos_write_signature;

#define mos_write_va_signature mos_string mos_write_va(mos_string_buffer *buffer, mos_cstring format, va_list arguments)
mos_write_va_signature;

#define mos_split_path_signature mos_split_path_result mos_split_path(string path)
mos_split_path_signature;

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

mos_substring_signature
{
    mos_assert(offset <= text.count);
    mos_assert(offset + count <= text.count);

    return mos_sl(mos_string) { text.base + offset, count };
}

mos_remaining_substring_signature
{
    return mos_substring(text, offset, text.count - offset);
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

mos_skip_until_set_or_end_signature
{
    mos_usize count = 0;
    while (count < iterator->count)
    {
        mos_string test = mos_sl(mos_string) { iterator->base + count, iterator->count - count };
        if (mos_skip_set(&test, set))
            break;

        count++;
    }

    mos_string result = mos_sl(mos_string) { iterator->base, count };
    mos_advance(iterator, count);

    return result;
}

mos_skip_white_space_signature
{
    return mos_skip_set(iterator, mos_s(" \t\n\r"));
}

mos_skip_name_signature
{
    if (!iterator->count)
        return mos_string_empty;

    mos_u8 digit = iterator->base[0];
    if ('0' <= digit && digit <= '9')
        return mos_string_empty;

    mos_string name = mos_skip_until_set_or_end(iterator, blacklist);
    return name;
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

mos_skip_signature
{
    mos_b8 ok = mos_try_skip(iterator, pattern);
    mos_assert(ok);
}

mos_skip_until_pattern_or_end_signature
{
    mos_usize count = 0;
    while (count < iterator->count)
    {
        mos_string test = mos_sl(mos_string) { iterator->base + count, iterator->count - count };
        if (mos_try_skip(&test, pattern))
            break;

        count++;
    }

    mos_string result = mos_sl(mos_string) { iterator->base, count };
    mos_advance(iterator, count);

    return result;
}

mos_contains_pattern_signature
{
    if (!pattern.count)
        return mos_sl(mos_string) { text.base, 0 };

    if (text.count < pattern.count)
        return mos_string_empty;

    for (mos_usize offset = 0; offset < text.count + 1 - pattern.count; offset++)
    {
        // inlined compare, since we know count's are equal
        // mos_are_equal would work as well
        mos_b8 does_match = mos_true;
        for (mos_usize i = 0; i < pattern.count; i++)
        {
            if (text.base[offset + i] != pattern.base[i])
            {
                does_match = mos_false;
                break;
            }
        }

        if (does_match)
            return mos_sl(mos_string) { text.base + offset, pattern.count };
    }

    return mos_string_empty;
}


mos_contains_pattern_from_end_signature
{
    if (!pattern.count)
        return mos_sl(mos_string) { text.base + text.count, 0 };

    if (text.count < pattern.count)
        return mos_string_empty;

    for (mos_usize reverse_offset = 0; reverse_offset < text.count + 1 - pattern.count; reverse_offset++)
    {
        // inlined compare, since we know count's are equal
        // mos_are_equal would work as well
        mos_b8 does_match = mos_true;

        mos_usize offset = text.count - pattern.count - reverse_offset;
        for (mos_usize i = 0; i < pattern.count; i++)
        {
            if (text.base[offset + i] != pattern.base[i])
            {
                does_match = mos_false;
                break;
            }
        }

        if (does_match)
            return mos_sl(mos_string) { text.base + offset, pattern.count };
    }

    return mos_string_empty;
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

mos_parse_f64_signature
{
    mos_string test_iterator = *iterator;

    mos_f64 sign = 1.0;
    if (test_iterator.count && test_iterator.base[0] == '-')
    {
        sign = -1.0;
        test_iterator.base  += 1;
        test_iterator.count -= 1;
    }

    mos_u64 whole;
    if (!mos_parse_u64(&whole, &test_iterator))
        return mos_false;

    mos_f64 value = whole;
    if (test_iterator.count && (test_iterator.base[0] == '.'))
    {
        mos_f64 fraction = 0.1;
        mos_usize count = 1;
        while (count < test_iterator.count)
        {
            mos_u8 symbol = test_iterator.base[count];
            mos_u8 digit = symbol - '0';
            if (digit > 9)
                break;

            value += fraction * digit;
            fraction *= 0.1;
            count += 1;
        }

        if (count < 2)
            return mos_false;
        else
            mos_advance(&test_iterator, count);
    }

    *result = value * sign;
    *iterator = test_iterator;

    return mos_true;
}

mos_parse_u32_signature
{
    mos_u64 value;
    mos_b8 ok = mos_parse_u64(&value, iterator);
    *result = (mos_u32) value;

    return (*result == value);
}

mos_parse_s32_signature
{
    mos_s64 value;
    mos_b8 ok = mos_parse_s64(&value, iterator);
    *result = (mos_s32) value;

    return (*result == value);
}

mos_parse_f32_signature
{
    mos_f64 value;
    mos_b8 ok = mos_parse_f64(&value, iterator);
    *result = (mos_f32) value;

    return ok;
}

mos_buffer_from_memory_signature
{
    mos_string_buffer buffer = {0};
    buffer.base        = base;
    buffer.total_count = count;

    return buffer;
}

mos_buffer_to_string_signature
{
    return mos_t(buffer.base, buffer.used_count);
}

mos_get_remaining_string_signature
{
    return mos_t(buffer.base + buffer.used_count, buffer.total_count - buffer.used_count);
}

mos_write_signature
{
    va_list arguments;
    va_start(arguments, format);

    mos_string result = mos_write_va(buffer, format, arguments);

    va_end(arguments);

    return result;
}

mos_utf8_advance_signature
{
    mos_assert(iterator->count);

    mos_u8 head = iterator->base[0];
    if (head <= 0x7F)
    {
        mos_advance(iterator, 1);
        return mos_sl(mos_utf8_result) { head, 1 };
    }

    mos_u32 byte_count = 4;
    mos_u8  mask = 0xF0;
    while ((head & mask) != mask)
    {
        mask <<= 1;
        byte_count -= 1;
    }

    mos_assert(byte_count > 1);
    mos_assert(byte_count <= iterator->count);

    mos_u32 code = (head & ~mask) << (6 * (byte_count - 1));
    for (u32 i= 1; i < byte_count; i++)
        code |= (iterator->base[i] & ~0x80) << (6 * (byte_count - i - 1));

    mos_advance(iterator, byte_count);

    return mos_sl(mos_utf8_result) { code, byte_count };
}

mos_utf8_previous_signature
{
    mos_assert(byte_offset > 0);
    mos_assert(byte_offset <= text.count);

    mos_u32 byte_count = 1;
    while ((text.base[byte_offset - byte_count] & 0xC0) == 0x80)
    {
        mos_assert(byte_count < 4);
        mos_assert(byte_count < byte_offset);
        byte_count += 1;
    }

    string previous = { text.base + byte_offset - byte_count, byte_count };
    mos_utf8_result result = mos_utf8_advance(&previous);
    mos_assert(result.byte_count == byte_count);

    return result;
}

mos_encode_utf8_signature
{
    mos_utf8_encoding result;

    if (utf32_code <= 0x7F)
    {
       result.count   = 1;
       result.base[0] = utf32_code;
       return result;
    }

    if (utf32_code <= 0x7FF)
    {
        result.count   = 2;
        result.base[0] = 0xC0 | (utf32_code >> 6);            /* 110xxxxx */
        result.base[1] = 0x80 | (utf32_code & 0x3F);          /* 10xxxxxx */
        return result;
    }

    if (utf32_code <= 0xFFFF)
    {
        result.count   = 3;
        result.base[1] = 0xE0 | (utf32_code >> 12);           /* 1110xxxx */
        result.base[2] = 0x80 | ((utf32_code >> 6) & 0x3F);   /* 10xxxxxx */
        result.base[3] = 0x80 | (utf32_code & 0x3F);          /* 10xxxxxx */
        return result;
    }

    if (utf32_code <= 0x10FFFF)
    {
        result.count   = 4;
        result.base[0] = 0xF0 | (utf32_code >> 18);           /* 11110xxx */
        result.base[1] = 0x80 | ((utf32_code >> 12) & 0x3F);  /* 10xxxxxx */
        result.base[2] = 0x80 | ((utf32_code >> 6) & 0x3F);   /* 10xxxxxx */
        result.base[3] = 0x80 | (utf32_code & 0x3F);          /* 10xxxxxx */
        return result;
    }

    mos_assert(0);
    return mos_sl(mos_utf8_endocing) {0};
}

mos_split_path_signature
{
    mos_string directory = { path.base, 0 };

    while (path.count)
    {
        mos_usize count = mos_skip_until_pattern_or_end(&path, mos_s("/")).count;
        if (!count)
            break;

        if (!mos_try_skip(&path, mos_s("/")))
        {
           path.base -= count;
           path.count += count;
           break;
        }

        directory.count += count + 1;
    }

    // exlude last "/"
    if (directory.count)
        directory.count -= 1;

    mos_string name = { path.base, 0 };
    mos_string extension = name;

    while (path.count)
    {
        mos_usize count = mos_skip_until_pattern_or_end(&path, mos_s(".")).count;

        if (mos_try_skip(&path, mos_s(".")))
            extension.base = path.base;
    }

    if (extension.base == name.base)
    {
        name.count = (mos_usize) (path.base - name.base);
        extension = path;
    }
    else
    {
        name.count      = (mos_usize) (extension.base - name.base);
        extension.count = (mos_usize) (path.base - extension.base);
    }

    // remove .
    //if (name.count && (name.base[name.count - 1] == '.'))
        // name.count -= 1;

    // mos_string extension = path;

    return mos_sl(mos_split_path_result) { directory, name, extension };
}

mos_write_va_signature
{
    mos_s32 count = vsnprintf((char *) buffer->base + buffer->used_count, buffer->total_count - buffer->used_count, format, arguments);
    mos_assert(count >= 0);
    mos_string result = { buffer->base + buffer->used_count, (mos_usize) count };
    buffer->used_count += count;

    return result;
}

#endif