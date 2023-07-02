
#if !defined TEXT_EDIT
#define TEXT_EDIT

#if !defined TEXT_EDIT_BASE_TYPES

typedef unsigned char      u8;
typedef unsigned int       u32;
typedef unsigned long long u64;

typedef u64 usize;

typedef u8 b8;

typedef struct
{
    u8   *base;
    usize count;
} string;

#endif

typedef struct
{
    u8 *base;
    u32 used_count;
    u32 total_count;
    u32 cursor;
} text_edit_buffer;

typedef enum
{
    text_edit_character_symbol_return,
    text_edit_character_symbol_backspace,
    text_edit_character_symbol_escape,
    text_edit_character_symbol_delete,
} text_edit_character_symbol;

typedef struct
{
    u32 code;
    b8 is_symbol;
} text_edit_character;

#define text_edit_handle_character_signature b8 edit_text_handle_character(text_edit_buffer *text, text_edit_character character)
text_edit_handle_character_signature;

string text_edit_to_string(text_edit_buffer buffer)
{
    string result = { buffer.base, buffer.used_count };
    return result;
}

#endif

#if defined TEXT_EDIT_IMPLEMENTATION

text_edit_handle_character_signature
{
    b8 did_change = false;

    if (character.is_symbol)
    {
        switch (character.code)
        {
            case platform_character_symbol_backspace:
            {
                if (text->used_count)
                {
                    text->used_count--;
                    text->cursor--;
                    did_change = true;
                }
            } break;

            case platform_character_symbol_newline:
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
                text->base[text->used_count] = (u8) character.code;
                text->used_count++;
                text->cursor++;
                did_change = true;
            }
        }
    }

    return did_change;
}

#endif