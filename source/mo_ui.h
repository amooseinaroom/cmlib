
// single header ui library

#if !defined moui_h
#define moui_h

#ifdef __cplusplus
extern "C" {
#endif

#if !defined moui_assert
#define moui_assert(x)
#endif

#if !defined moui_require
#define moui_require(x) (x)
#endif

#define moui_cases_complete(value) default: moui_assert(0)

typedef unsigned char      moui_u8;
typedef unsigned int       moui_u32;
typedef unsigned long long moui_u64;

typedef signed int       moui_s32;
typedef signed long long moui_s64;

typedef float  moui_f32;
typedef double moui_f64;

typedef moui_u8 moui_b8;

typedef moui_u64 moui_usize;

typedef char * moui_cstring;

#define moui_null 0

const moui_b8 moui_false = 0;
const moui_b8 moui_true  = 1;

#define moui_carray_count(static_array) (sizeof(static_array) / sizeof(*(static_array)))

#if !defined moui_u8_array_type
#define moui_u8_array_type moui_u8_array

typedef struct
{
    moui_u8    *base;
    moui_usize count;
} moui_u8_array;

#else

typedef moui_u8_array_type moui_u8_array;

#endif

typedef moui_u8_array moui_string;

#ifdef __cplusplus
#define moui_struct_literal(name)
#else
#define moui_struct_literal(name) (name)
#endif

#define moui_s(static_string) moui_struct_literal(string) { static_string, moui_carray_count(static_string) - 1 }
#define moui_fs(text) (int) (text).count, (char *) (text).base

const moui_string moui_string_empty = {0};

typedef moui_u64 moui_id;

const moui_id moui_invalid_id = 0;

typedef struct
{
  moui_s32 x;
  moui_s32 y;
} moui_point;

typedef struct
{
    moui_id  active_id;
    moui_id  next_active_id;

    moui_id  hot_id;
    moui_id  next_hot_id;

    moui_u32 active_mask;
    moui_u32 next_active_mask;

    moui_u32 next_hot_priority;

    moui_u32 cursor_active_mask;

    moui_point previous_cursor;
    moui_point cursor;

    moui_point size;
} moui_state;

typedef union
{
    struct {
        moui_u8 is_hot:       1;
        moui_u8 is_active:    1;
        moui_u8 active_enter: 1;
        moui_u8 active_exit:  1;
    };

    moui_u8 value;
} moui_item_state;

#define moui_line_id(index) ((__LINE__ << 12) | index)

#define moui_update_signature void moui_update(moui_state *state, moui_point size, moui_point cursor, moui_u32 cursor_active_mask)
moui_update_signature;

#define moui_item_is_active_signature moui_b8 moui_item_is_active(moui_state *state, moui_id id)
moui_item_is_active_signature;

#define moui_item_is_hot_signature moui_b8 moui_item_is_hot(moui_state *state, moui_id id)
moui_item_is_hot_signature;


#define moui_item_signature moui_item_state moui_item(moui_state *state, moui_id id, moui_b8 is_hot, moui_u32 hot_priority, moui_u32 active_mask)
moui_item_signature;

#ifdef __cplusplus
}
#endif

#endif

#if defined moui_implementation
#undef moui_implementation

moui_update_signature
{
    state->active_id = state->next_active_id;
    state->active_mask = state->next_active_mask;
    state->hot_id = state->next_hot_id;

    state->next_hot_id = moui_invalid_id;
    state->next_hot_priority = 0xFFFFFFFF;

    state->previous_cursor = state->cursor;
    state->cursor = cursor;
    state->cursor_active_mask = cursor_active_mask;

    state->size = size;
}

moui_item_is_active_signature
{
    return (state->active_id == id);
}

moui_item_is_hot_signature
{
    return (state->hot_id == id);
}

moui_item_signature
{
    moui_assert(id);

    moui_item_state result = {0};

    if (state->active_id == id)
    {
        result.is_active = !(state->active_mask & active_mask);

        if (!result.is_active)
        {
            state->next_active_id = moui_invalid_id;
            result.active_exit = moui_true;
        }
    }
    else if (!state->active_id && is_hot && (state->hot_id == id) && active_mask)
    {
        state->next_active_id   = id;
        state->next_active_mask = active_mask;

        result.active_enter = moui_true;
    }

    if (is_hot && (state->next_hot_priority > hot_priority))
    {
        state->next_hot_id = id;
        state->next_hot_priority = hot_priority;
    }

    result.is_hot = !result.is_active && is_hot && (state->hot_id == id);

    return result;
}

#endif