
// single header ui library

// options before including mo_ui.h:

// #define moui_gl_implementation
// - use open gl rendering
// #define moui_gl_symbols
// - skip defining and loading gl functions and definitions
// include stb_turetype.h
// - use stbe_truetype to load font data
// include mo_platform.h and mo_memory_arena.h
// - load font files from path
// #define moui_custom_state
// - implement your own rendering api
// #define moui_debug
// - enable debug information for api validation etc.

// #define moui_implementation
// - enable implementaion, only in one translation unit (.c or .cpp file) in your project

#if !defined moui_h
#define moui_h

#include <stdarg.h>
#include <stdio.h>

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

// you don't need to use these types outside of the file
// this is just a personal preference of the developer

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

#if !defined moui_f32_ceil
#include <math.h>
#define moui_f32_ceil ceilf
#endif

#if !defined moui_f32_square_root
#include <math.h>
#define moui_f32_square_root sqrtf
#endif

#if !defined moui_fmod
#include <math.h>
#define moui_fmod fmodf
#endif

typedef moui_u8_array moui_string;

// struct literal macro to help with compatibility between c and c++
#ifdef __cplusplus
#define moui_sl(name)
#else
#define moui_sl(name) (name)
#endif

#define moui_s(static_string) moui_sl(moui_string) { (moui_u8 *) static_string, (moui_usize) moui_carray_count(static_string) - 1 }
#define moui_fs(text) (int) (text).count, (char *) (text).base

const moui_string moui_string_empty = {0};

typedef moui_u64 moui_id;

const moui_id moui_invalid_id = 0;

typedef union
{
    struct
    {
        moui_f32 x;
        moui_f32 y;
    };

    moui_f32 values[2];
} moui_vec2;

typedef union
{
    struct
    {
        moui_vec2 min;
        moui_vec2 max;
    };

    moui_f32 values[4];
} moui_box2;

typedef struct
{
    moui_f32 r;
    moui_f32 g;
    moui_f32 b;
    moui_f32 a;
} moui_rgba;

typedef struct
{
    moui_vec2 position;
    moui_vec2 uv;
    moui_rgba color;
} moui_vertex;

typedef struct
{
    moui_vertex vertices[4];
} moui_quad;

typedef struct
{
    moui_rgba values[4];
} moui_quad_colors;

typedef struct
{
    moui_s32 layer;
    moui_u32 texture_index;
    moui_u32 quad_count;
} moui_command;

typedef struct
{
    moui_s32 width;
    moui_s32 height;
    moui_u8  *handle; // render api specific handle
} moui_texture;

typedef struct
{
    moui_box2 texture_box;
    moui_vec2 offset;
    moui_u32  code;
    moui_s32  x_advance;
} moui_font_glyph;

typedef struct
{
    moui_font_glyph *glyphs;
    moui_usize      glyph_count;
    moui_s32        height;
    moui_s32        line_spacing;
    moui_s32        bottom_to_line;
    moui_s32        line_to_top;
    moui_s32        line_height;
    moui_texture    texture;
} moui_simple_font;

typedef struct
{
    moui_vec2 position;
    moui_f32  line_start_x;
} moui_text_cursor;

typedef struct
{
    moui_simple_font font;
    moui_text_cursor cursor;
    moui_string      text;
} moui_simple_text_iterator;

typedef struct
{
    moui_u32  code;
    moui_u32  index;
    moui_box2 box;
    moui_box2 texture_box;
} moui_glyph;

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

typedef struct
{
    moui_box2 texture_box;
    moui_u32  type;
    moui_f32  parameters[3];
} moui_atlas_item;

typedef struct
{
    moui_atlas_item *items;
    moui_u32        item_request_count;
    moui_u32        item_count;

    moui_s32 row_x;
    moui_s32 row_y;
    moui_s32 max_row_height;

    moui_u32 buffer_request_byte_count;

    moui_texture texture;
} moui_atlas;

typedef enum
{
    moui_default_atlas_item_type_white,
    moui_default_atlas_item_type_rounded_box,
    moui_default_atlas_item_type_rounded_cutout_box,

    moui_default_atlas_item_type_count
} moui_default_atlas_item_type;

typedef struct
{
    moui_id active_id;
    moui_id next_active_id;

    moui_id hot_id;
    moui_id next_hot_id;

    moui_u32 active_mask;
    moui_u32 next_active_mask;

    moui_u32 next_hot_priority;

    moui_u32 cursor_active_mask;

    moui_vec2 previous_cursor;
    moui_vec2 cursor;

    moui_vec2 drag_start_point;
} moui_input;

typedef struct
{
    moui_u32 array_object;
    moui_u32 array_buffer_object;
    moui_u32 used_count;
    moui_u32 total_count;
} moui_gl_buffer;

typedef struct
{
    moui_atlas   default_atlas;
    moui_texture white_texture;
    moui_texture line_texture;

    moui_quad *quads;
    moui_u32   quad_count;
    moui_u32   quad_request_count;

    moui_vertex *vertices;
    moui_u32    vertex_count;
    moui_u32    vertex_request_count;

    moui_texture *textures;
    moui_u32      texture_count;
    moui_u32      texture_request_count; // we can't really say how many unique textures we have seen, when the buffer count is exceeded

    moui_command *commands;
    moui_u32      command_count;
    moui_u32      command_request_count;
    moui_command  current_command;

    moui_s32 min_layer;
    moui_s32 max_layer;

    moui_box2 used_box;
    moui_vec2 canvas_size;

    union
    {
        struct
        {
            moui_u32       shader;
            moui_s32       shader_color_map;
            moui_gl_buffer vertex_buffer;
            moui_b8        is_modern;
        } gl;
    };
} moui_renderer;

typedef struct
{
    moui_box2     scissor_box;
    moui_input    input;
    moui_renderer renderer;

#if defined moui_debug
    moui_b8 debug_is_in_frame;
#endif
} moui_state;

struct moui_default_state;
typedef struct moui_default_state moui_default_state;

struct moui_default_window;
typedef struct moui_default_window moui_default_window;

// constants

const moui_rgba moui_rgba_white = { 1, 1, 1, 1 };
const moui_rgba moui_rgba_black = { 0, 0, 0, 1 };

// input

#define moui_line_id(index) ((__LINE__ << 12) | index)

#define moui_frame_signature void moui_frame(moui_state *state, moui_vec2 canvas_size, moui_vec2 cursor, moui_u32 cursor_active_mask)
moui_frame_signature;

#define moui_item_is_active_signature moui_b8 moui_item_is_active(moui_state *state, moui_id id)
moui_item_is_active_signature;

#define moui_item_is_hot_signature moui_b8 moui_item_is_hot(moui_state *state, moui_id id)
moui_item_is_hot_signature;

#define moui_item_signature moui_item_state moui_item(moui_state *state, moui_id id, moui_b8 is_hot, moui_u32 hot_priority, moui_u32 active_mask)
moui_item_signature;

#define moui_button_signature moui_u32 moui_button(moui_state *state, moui_id id, moui_b8 is_hot, moui_u32 hot_priority, moui_u32 active_mask)
moui_button_signature;

#define moui_drag_item_signature moui_u32 moui_drag_item(moui_state *state, moui_id id, moui_b8 is_hot, moui_u32 hot_priority, moui_u32 active_mask, moui_vec2 *point)
moui_drag_item_signature;

#define moui_box_line_is_hot_signature moui_b8 moui_box_line_is_hot(moui_box2 box, moui_vec2 line_from, moui_vec2 line_to)
moui_box_line_is_hot_signature;

#define moui_box_is_hot_signature moui_b8 moui_box_is_hot(moui_state *state, moui_box2 box)
moui_box_is_hot_signature;

// render

#define moui_set_buffers_signature void moui_set_buffers(moui_state *state, moui_u32 quad_count, moui_quad *quads, moui_u32 vertex_count, moui_vertex *vertices, moui_u32 texture_count, moui_texture *textures, moui_u32 command_count, moui_command *commands)
moui_set_buffers_signature;

#define moui_set_scissor_box_signature moui_box2 moui_set_scissor_box(moui_state *state, moui_box2 scissor_box)
moui_set_scissor_box_signature;

#define moui_scissor_box_signature moui_b8 moui_scissor_box(moui_box2 scissor_box, moui_box2 *box, moui_box2 *texture_box)
moui_scissor_box_signature;

#define moui_scissor_signature moui_b8 moui_scissor(moui_state *state, moui_box2 *box, moui_box2 *texture_box)
moui_scissor_signature;

#define moui_used_box_begin_signature moui_box2 moui_used_box_begin(moui_state *state)
moui_used_box_begin_signature;

#define moui_used_box_end_signature moui_box2 moui_used_box_end(moui_state *state, moui_box2 begin_box)
moui_used_box_end_signature;

#define moui_set_command_signature moui_b8 moui_set_command(moui_state *state, moui_s32 layer, moui_u32 texture_index)
moui_set_command_signature;

#define moui_set_command_texture_signature moui_b8 moui_set_command_texture(moui_state *state, moui_s32 layer, moui_texture texture)
moui_set_command_texture_signature;

#define moui_add_quad_signature moui_b8 moui_add_quad(moui_state *state, moui_quad quad)
moui_add_quad_signature;

#define moui_premultiply_alpha_signature moui_rgba moui_premultiply_alpha(moui_rgba color)
moui_premultiply_alpha_signature;

#define moui_to_quad_colors_signature moui_quad_colors moui_to_quad_colors(moui_rgba color)
moui_to_quad_colors_signature;

#define moui_add_texture_quad_signature void moui_add_texture_quad(moui_state *state, moui_vec2 texture_scale, moui_quad_colors colors, moui_box2 box, moui_box2 texture_box)
moui_add_texture_quad_signature;

#define moui_texture_box_signature void moui_texture_box(moui_state *state, moui_s32 layer, moui_texture texture, moui_quad_colors colors, moui_box2 box, moui_box2 texture_box)
moui_texture_box_signature;

#define moui_box_signature void moui_box(moui_state *state, moui_s32 layer, moui_quad_colors colors, moui_box2 box)
moui_box_signature;

#define moui_line_signature void moui_line(moui_state *state, moui_s32 layer, moui_quad_colors colors, moui_vec2 from, moui_vec2 to, moui_f32 thickness)
moui_line_signature;

#define moui_get_atlas_item_signature moui_atlas_item * moui_get_atlas_item(moui_atlas *atlas, moui_atlas_item key_item, moui_u32 parameter_count)
moui_get_atlas_item_signature;

#define moui_rounded_box_signature void moui_rounded_box(moui_state *state, moui_s32 layer, moui_quad_colors colors, moui_box2 box, moui_f32 corner_radius)
moui_rounded_box_signature;

#define moui_rounded_cutout_box_signature void moui_rounded_cutout_box(moui_state *state, moui_s32 layer, moui_quad_colors colors, moui_s32 background_layer, moui_quad_colors background_colors, moui_box2 box, moui_f32 corner_radius)
moui_rounded_cutout_box_signature;

#define moui_text_cursor_at_line_signature moui_text_cursor moui_text_cursor_at_line(moui_vec2 position)
moui_text_cursor_at_line_signature;

#define moui_text_cursor_at_top_signature moui_text_cursor moui_text_cursor_at_top(moui_simple_font font, moui_vec2 position)
moui_text_cursor_at_top_signature;

#define moui_text_cursor_at_bottom_signature moui_text_cursor moui_text_cursor_at_bottom(moui_simple_font font, moui_vec2 position)
moui_text_cursor_at_bottom_signature;

#define moui_text_advance_signature moui_b8 moui_text_advance(moui_glyph *out_glyph, moui_simple_text_iterator *iterator)
moui_text_advance_signature;

#define moui_get_text_box_signature moui_box2 moui_get_text_box(moui_simple_text_iterator *iterator)
moui_get_text_box_signature;

#define moui_print_text_iterator_signature void moui_print_text_iterator(moui_state *state, moui_simple_text_iterator *iterator, moui_s32 layer, moui_rgba color)
moui_print_text_iterator_signature;

#define moui_print_signature void moui_print(moui_state *state, moui_simple_font font, moui_s32 layer, moui_rgba color, moui_text_cursor *cursor, moui_string text)
moui_print_signature;

#define moui_printf_signature void moui_printf(moui_state *state, moui_simple_font font, moui_s32 layer, moui_rgba color, moui_text_cursor *cursor, moui_cstring format, ...)
moui_printf_signature;

#define moui_create_texture_signature moui_texture moui_create_texture(moui_s32 width, moui_s32 height, moui_u8 *data, moui_b8 is_alpha_only, moui_b8 is_bilinear)
moui_create_texture_signature;

#define moui_update_texture_box_signature void moui_update_texture_box(moui_texture texture, moui_box2 texture_box, moui_b8 is_alpha_only, moui_u8 *data)
moui_update_texture_box_signature;

// actual rendering on the current render target
#define moui_execute_signature void moui_execute(moui_state *state)
moui_execute_signature;

// default functions
// if you don't have your own rendering api set up, you can use these default functions

#if defined mop_h

#define moui_get_default_platform_window_signature moui_default_window moui_get_default_platform_window(moui_default_state *default_state, mop_platform *platform, mop_window window)
moui_get_default_platform_window_signature;

#endif

#define moui_default_init_signature void moui_default_init(moui_default_state *default_state)
moui_default_init_signature;

// window is expected to be initialized with the platform native information
#define moui_default_window_init_signature void moui_default_window_init(moui_default_state *default_state, moui_default_window *window)
moui_default_window_init_signature;

#define moui_default_render_begin_signature void moui_default_render_begin(moui_default_state *default_state, moui_default_window *window)
moui_default_render_begin_signature;

#define moui_default_render_prepare_execute_signature void moui_default_render_prepare_execute(moui_default_state *default_state)
moui_default_render_prepare_execute_signature;

#define moui_default_render_end_signature void moui_default_render_end(moui_default_state *default_state, moui_default_window *window, moui_b8 wait_for_vsync)
moui_default_render_end_signature;

// utility

#define moui_u32_min_signature moui_u32 moui_u32_min(moui_u32 a, moui_u32 b)
moui_u32_min_signature;

#define moui_u32_max_signature moui_u32 moui_u32_max(moui_u32 a, moui_u32 b)
moui_u32_max_signature;

#define moui_s32_min_signature moui_s32 moui_s32_min(moui_s32 a, moui_s32 b)
moui_s32_min_signature;

#define moui_s32_max_signature moui_s32 moui_s32_max(moui_s32 a, moui_s32 b)
moui_s32_max_signature;

#define moui_f32_min_signature moui_f32 moui_f32_min(moui_f32 a, moui_f32 b)
moui_f32_min_signature;

#define moui_f32_max_signature moui_f32 moui_f32_max(moui_f32 a, moui_f32 b)
moui_f32_max_signature;

#define moui_box2_merge_signature moui_box2 moui_box2_merge(moui_box2 a, moui_box2 b)
moui_box2_merge_signature;

#define moui_box2_cut_signature moui_box2 moui_box2_cut(moui_box2 a, moui_box2 b)
moui_box2_cut_signature;

#define moui_vec2_resize_signature moui_vec2 moui_vec2_resize(moui_vec2 vector, moui_f32 new_length)
moui_vec2_resize_signature;

// optional interface

#if defined __STB_INCLUDE_STB_TRUETYPE_H__

// loads glyph data into font from font_data
// font_data should be a loaded font file
// we assume font->glyphs and font->glyph_count are allready allocated
// we assume font->texture.width and font->texture.height is set properly
// writes alpha values into texture_alpha_buffer and returns how much of the buffer was used
#define moui_load_font_signature moui_u8_array moui_load_font(moui_simple_font *font, moui_u8_array texture_alpha_buffer, moui_u8_array font_data, s32 height, u32 first_character)
moui_load_font_signature;

#if defined moui_gl_implementation

#define moui_gl_load_font_signature void moui_gl_load_font(moui_simple_font *font, moui_u8_array texture_alpha_buffer, moui_u8_array font_data, s32 height, u32 first_character)
moui_gl_load_font_signature;

#if defined(mop_h) && defined(moma_h)

#define moui_load_font_file_signature moui_simple_font moui_load_font_file(mop_platform *platform, moma_arena *arena, moui_cstring path, moui_s32 texture_width, moui_s32 texture_height, moui_s32 height, moui_u32 first_character, moui_u32 character_count)
moui_load_font_file_signature;

#endif

#endif

#endif

#if defined(moma_h)

#define moui_resize_buffers_signature void moui_resize_buffers(moui_state *state, moma_arena *arena)
moui_resize_buffers_signature;

#endif

#ifdef __cplusplus
}
#endif

#endif

#if defined moui_implementation
#undef moui_implementation

// input

moui_frame_signature
{
    moui_input *input = &state->input;
    input->active_id   = input->next_active_id;
    input->active_mask = input->next_active_mask;
    input->hot_id = input->next_hot_id;

    input->next_active_id = moui_invalid_id; // prevent soft lock if active element gets removed
    input->next_active_id = moui_invalid_id; // prevent soft lock if active element gets removed
    input->next_hot_id = moui_invalid_id;
    input->next_hot_priority = 0xFFFFFFFF;

    input->previous_cursor = input->cursor;
    input->cursor = cursor;
    input->cursor_active_mask = cursor_active_mask;

#if defined moui_debug
    moui_assert(!state->debug_is_in_frame);
    state->debug_is_in_frame = moui_true;
#endif

    moui_renderer *renderer = &state->renderer;
    renderer->quad_request_count = 0;
    renderer->vertex_request_count = 0;
    renderer->texture_request_count = 0;
    renderer->command_request_count = 0;
    renderer->canvas_size = canvas_size;

    state->scissor_box.min = moui_sl(moui_vec2) {0};
    state->scissor_box.max = canvas_size;

    // inverted box
    renderer->used_box.max = state->scissor_box.min;
    renderer->used_box.min = state->scissor_box.max;

    renderer->current_command.layer = 0;
    renderer->current_command.texture_index = -1;
    renderer->current_command.quad_count = 0;

    // MAYBE: pick min and max properly
    renderer->min_layer = 0;
    renderer->max_layer = 0;

    {
        moui_atlas *atlas = &state->renderer.default_atlas;
        atlas->item_request_count = moui_u32_min(atlas->item_request_count, atlas->item_count);

        // special white type
        if (atlas->item_count)
        {
            if (!atlas->item_request_count)
            {
                atlas->item_request_count++;
                atlas->buffer_request_byte_count = moui_u32_max(atlas->buffer_request_byte_count, 12);
                atlas->items[0].type = moui_default_atlas_item_type_white;
            }

            moui_assert(atlas->items[0].type == moui_default_atlas_item_type_white);
        }
    }
}

moui_item_is_active_signature
{
    return (state->input.active_id == id);
}

moui_item_is_hot_signature
{
    return (state->input.hot_id == id);
}

moui_item_signature
{
    moui_assert(id);

    moui_item_state result = {0};

    if (is_hot && (state->input.next_hot_priority > hot_priority))
    {
        state->input.next_hot_id       = id;
        state->input.next_hot_priority = hot_priority;
    }

    result.is_hot = is_hot && moui_item_is_hot(state, id);

    if (moui_item_is_active(state, id))
    {
        result.is_active = (state->input.active_mask & active_mask) != 0;

        if (result.is_active)
            state->input.next_active_id = id;
        else
            result.active_exit = moui_true;
    }
    else if (!state->input.active_id && result.is_hot && active_mask)
    {
        state->input.next_active_id   = id;
        state->input.next_active_mask = active_mask;

        result.is_active    = moui_true;
        result.active_enter = moui_true;
    }

    return result;
}

moui_button_signature
{
    moui_item_state result = moui_item(state, id, is_hot, hot_priority, active_mask);
    if (result.active_exit && result.is_hot)
        return state->input.active_mask & ~active_mask;
    else
        return 0;
}

moui_drag_item_signature
{
    moui_item_state result = moui_item(state, id, is_hot, hot_priority, active_mask);

    if (result.active_enter)
    {
        state->input.drag_start_point.x = point->x - state->input.cursor.x;
        state->input.drag_start_point.y = point->y - state->input.cursor.y;
    }

    if (result.is_active || result.active_exit)
    {
        point->x = state->input.drag_start_point.x + state->input.cursor.x;
        point->y = state->input.drag_start_point.y + state->input.cursor.y;
    }

    if (result.active_exit)
        return state->input.active_mask & ~active_mask;
    else
        return 0;
}

moui_box_line_is_hot_signature
{
    if ((box.min.x <= line_to.x) && (line_to.x < box.max.x) && (box.min.y <= line_to.y) && (line_to.y < box.max.y))
        return moui_true;

    // from + (to - from) * t == point
    // (to - from) * t == point - from
    // t == point - from / (to - from)
    // 0 <= t < 1
    // and point inside box

    moui_vec2 line_direction = { line_to.x - line_from.x, line_to.y - line_from.y };

    if (line_direction.x != 0)
    {
        moui_f32 distance = (box.min.x - line_from.x) / line_direction.x;
        if ((distance < 0) || (distance >= 1))
            distance =  (box.max.x - line_from.x) / line_direction.x;

        if ((0 <= distance) && (distance < 1))
        {
            moui_f32 y = line_from.y + line_direction.y * distance;
            if ((box.min.y <= y) && (y < box.max.y))
                return moui_true;
        }
    }

    if (line_direction.y != 0)
    {
        moui_f32 distance = (box.min.y - line_from.y) / line_direction.y;
        if ((distance < 0) || (distance >= 1))
            distance =  (box.max.y - line_from.y) / line_direction.y;

        if ((0 <= distance) && (distance < 1))
        {
            moui_f32 x = line_from.x + line_direction.x * distance;
            if ((box.min.x <= x) && (x < box.max.x))
                return moui_true;
        }
    }

    return moui_false;
}

moui_box_is_hot_signature
{
    box = moui_box2_cut(state->scissor_box, box);
    return moui_box_line_is_hot(box, state->input.previous_cursor, state->input.cursor);
}

// render

#if defined moui_gl_implementation

// internal

#define moui_platform_init_signature void moui_platform_init(moui_default_state *default_state)
moui_platform_init_signature;

#if defined(_WIN32) || defined(WIN32)

#if !defined moui_gl_symbols

#include <windows.h>
#include <GL/gl.h>

#pragma comment(lib, "gdi32")
#pragma comment(lib, "user32")
#pragma comment(lib, "opengl32")

#define moui_gl_load(function) moui_ ## function = (moui_ ## function ## _function) wglGetProcAddress(# function)

#define WGL_DRAW_TO_WINDOW_ARB 0x2001
#define WGL_SUPPORT_OPENGL_ARB 0x2010
#define WGL_DOUBLE_BUFFER_ARB 0x2011
#define WGL_PIXEL_TYPE_ARB 0x2013
#define WGL_TYPE_RGBA_ARB 0x202B
#define WGL_COLOR_BITS_ARB 0x2014
#define WGL_DEPTH_BITS_ARB 0x2022
#define WGL_STENCIL_BITS_ARB 0x2023
#define WGL_CONTEXT_MAJOR_VERSION_ARB 0x2091
#define WGL_CONTEXT_MINOR_VERSION_ARB 0x2092
#define WGL_CONTEXT_PROFILE_MASK_ARB 0x9126
#define WGL_CONTEXT_CORE_PROFILE_BIT_ARB 0x00000001
#define WGL_CONTEXT_FLAGS_ARB 0x2094
#define WGL_CONTEXT_DEBUG_BIT_ARB 0x00000001

typedef signed int  (*moui_wglChoosePixelFormatARB_function)(HDC hdc, signed int *piAttribIList, float *pfAttribFList, unsigned int nMaxFormats, signed int *piFormats, unsigned int *nNumFormats);
moui_wglChoosePixelFormatARB_function moui_wglChoosePixelFormatARB;

typedef HGLRC  (*moui_wglCreateContextAttribsARB_function)(HDC hDC, HGLRC hShareContext, signed int *attribList);
moui_wglCreateContextAttribsARB_function moui_wglCreateContextAttribsARB;

typedef signed int  (*moui_wglSwapIntervalEXT_function)(signed int interval);
moui_wglSwapIntervalEXT_function moui_wglSwapIntervalEXT;

#endif

struct moui_default_window
{
    HDC device_context;
};

struct moui_default_state
{
    moui_state base;

    HWND    win32_gl_init_window;
    HDC     win32_gl_init_device_context;
    HGLRC   win32_gl_context;
    HDC     win32_gl_current_device_context;    
};

void moui_win32_gl_window_init(HDC device_context)
{
    PIXELFORMATDESCRIPTOR format_descriptor = {
        sizeof(PIXELFORMATDESCRIPTOR),   // size of this pfd
        1,                     // version number
        PFD_DRAW_TO_WINDOW |   // support window
        PFD_SUPPORT_OPENGL |   // support OpenGL
        PFD_DOUBLEBUFFER,      // double buffered
        PFD_TYPE_RGBA,         // RGBA type
        24,                    // 24-bit color depth
        0, 0, 0, 0, 0, 0,      // color bits ignored
        0,                     // no alpha buffer
        0,                     // shift bit ignored
        0,                     // no accumulation buffer
        0, 0, 0, 0,            // accum bits ignored
        32,                    // 32-bit z-buffer
        0,                     // no stencil buffer
        0,                     // no auxiliary buffer
        PFD_MAIN_PLANE,        // main layer
        0,                     // reserved
        0, 0, 0                // layer masks ignored
    };

    moui_s32 format = ChoosePixelFormat(device_context, &format_descriptor);
    moui_require(SetPixelFormat(device_context, format, &format_descriptor));
}

void moui_win32_gl_window_init_modern(HDC device_context)
{
    moui_s32 pixel_format_attributes[] =
    {
        WGL_DRAW_TO_WINDOW_ARB, GL_TRUE,
        WGL_SUPPORT_OPENGL_ARB, GL_TRUE,
        WGL_DOUBLE_BUFFER_ARB,  GL_TRUE,
        WGL_PIXEL_TYPE_ARB, WGL_TYPE_RGBA_ARB,
        WGL_COLOR_BITS_ARB, 24,
        WGL_DEPTH_BITS_ARB, 24,
        WGL_STENCIL_BITS_ARB, 8,

        // multi sample anti aliasing
        // WGL_SAMPLE_BUFFERS_ARB, GL_TRUE, // Number of buffers (must be 1 at time of writing)
        // WGL_SAMPLES_ARB, 1,  // Number of samples

        0 // end
    };

    moui_s32 pixel_format;
    moui_u32 pixel_format_count;
    moui_require(moui_wglChoosePixelFormatARB(device_context, pixel_format_attributes, moui_null, 1, &pixel_format, &pixel_format_count));
    moui_require(SetPixelFormat(device_context, pixel_format, moui_null));
}

moui_platform_init_signature
{
    WNDCLASS window_class = {0};
    window_class.lpfnWndProc   = DefWindowProc;
    window_class.hInstance     = (HINSTANCE) GetModuleHandleA(moui_null);
    window_class.lpszClassName = "moui init window class";
    moui_require(RegisterClass(&window_class));

    default_state->win32_gl_init_window = CreateWindowExA(0, window_class.lpszClassName, window_class.lpszClassName, WS_OVERLAPPEDWINDOW, CW_USEDEFAULT, CW_USEDEFAULT, CW_USEDEFAULT, CW_USEDEFAULT, moui_null, moui_null, window_class.hInstance, moui_null);
    moui_require(default_state->win32_gl_init_window);

    default_state->win32_gl_init_device_context = GetDC(default_state->win32_gl_init_window);
    moui_require(default_state->win32_gl_init_device_context);

    moui_win32_gl_window_init(default_state->win32_gl_init_device_context);

    default_state->win32_gl_context = wglCreateContext(default_state->win32_gl_init_device_context);
    moui_require(default_state->win32_gl_context);

    moui_require(wglMakeCurrent(default_state->win32_gl_init_device_context, default_state->win32_gl_context));

    moui_gl_load(wglChoosePixelFormatARB);
    moui_gl_load(wglCreateContextAttribsARB);

    if (moui_wglChoosePixelFormatARB && moui_wglCreateContextAttribsARB)
    {
        moui_require(wglMakeCurrent(moui_null, moui_null));

        HWND win32_gl_init_window = CreateWindowExA(0, window_class.lpszClassName, window_class.lpszClassName, WS_OVERLAPPEDWINDOW, CW_USEDEFAULT, CW_USEDEFAULT, CW_USEDEFAULT, CW_USEDEFAULT, moui_null, moui_null, window_class.hInstance, moui_null);
        moui_require(win32_gl_init_window);

        HDC win32_gl_init_device_context = GetDC(win32_gl_init_window);
        moui_require(win32_gl_init_device_context);

        moui_win32_gl_window_init_modern(win32_gl_init_device_context);

        moui_s32 context_attributes[] =
        {
            WGL_CONTEXT_MAJOR_VERSION_ARB, 3,
            WGL_CONTEXT_MINOR_VERSION_ARB, 3,
            WGL_CONTEXT_PROFILE_MASK_ARB,  WGL_CONTEXT_CORE_PROFILE_BIT_ARB,
            WGL_CONTEXT_FLAGS_ARB,         WGL_CONTEXT_DEBUG_BIT_ARB,
            0
        };

        //if backwards_compatible
            //{ context_attributes[7] = WGL_CONTEXT_COMPATIBILITY_PROFILE_BIT_ARB; }

        HGLRC win32_gl_context = moui_wglCreateContextAttribsARB(win32_gl_init_device_context, moui_null, context_attributes);        
        if (win32_gl_context)
        {
            moui_require(wglDeleteContext(default_state->win32_gl_context));
            moui_require(ReleaseDC(default_state->win32_gl_init_window, default_state->win32_gl_init_device_context));
            moui_require(DestroyWindow(default_state->win32_gl_init_window));

            default_state->win32_gl_init_window         = win32_gl_init_window;
            default_state->win32_gl_init_device_context = win32_gl_init_device_context;
            default_state->win32_gl_context             = win32_gl_context;
            default_state->base.renderer.gl.is_modern   = moui_true;

            moui_require(wglMakeCurrent(default_state->win32_gl_init_device_context, default_state->win32_gl_context));
        }    
        else
        {        
            moui_require(ReleaseDC(win32_gl_init_window, win32_gl_init_device_context));
            moui_require(DestroyWindow(win32_gl_init_window));
        }
    }

    // enable v-sync
    moui_gl_load(wglSwapIntervalEXT);

    if (moui_wglSwapIntervalEXT)
        moui_wglSwapIntervalEXT(1);
}

moui_get_default_platform_window_signature
{
    moui_default_window default_window = { window->device_context };
    return default_window;
}

moui_default_window_init_signature
{
    moui_assert(default_state->win32_gl_context); // call moui_init first
    moui_assert(window->device_context);

    if (default_state->base.renderer.gl.is_modern)
        moui_win32_gl_window_init_modern(window->device_context);
    else
        moui_win32_gl_window_init(window->device_context);
}

moui_default_render_begin_signature
{
    moui_assert(default_state->win32_gl_context); // call moui_init first
    moui_assert(window->device_context);
    // TODO: assert on moui_default_window_init being called

    if (default_state->win32_gl_current_device_context != window->device_context)
    {
        wglMakeCurrent(window->device_context, default_state->win32_gl_context);
        default_state->win32_gl_current_device_context = window->device_context;
    }
}

moui_default_render_end_signature
{
    moui_assert(default_state->win32_gl_context); // call moui_init first
    moui_assert(window->device_context);

    moui_assert(default_state->win32_gl_current_device_context == window->device_context);
    SwapBuffers(window->device_context);
}

#elif __EMSCRIPTEN__

#if !defined moui_gl_symbols

#include <EGL/egl.h>
#include <GLES/gl.h>
#include <GLES3/gl3.h>
#include <GLES3/gl2ext.h>
//#include <GLES3/gl3platform.h>

#define moui_gl_load(function) moui_ ## function = (moui_ ## function ## _function) eglGetProcAddress(# function)

#endif

struct moui_default_window
{
    EGLSurface surface;
};

struct moui_default_state
{
    moui_state base;
    
    EGLDisplay display;
    EGLConfig  config;
    EGLSurface init_surface;    
    EGLSurface current_surface;    
    EGLContext gl_context;    
};

moui_platform_init_signature
{
    default_state->display = eglGetDisplay(EGL_DEFAULT_DISPLAY);
    moui_require(default_state->display != EGL_NO_DISPLAY);

    moui_require(eglInitialize(default_state->display, moui_null, moui_null));
            
    {
        moui_s32 attributes[] =
        {
            EGL_RED_SIZE,       5,
            EGL_GREEN_SIZE,     6,
            EGL_BLUE_SIZE,      5,
            //EGL_ALPHA_SIZE,     EGL_DONT_CARE,
            //EGL_DEPTH_SIZE,     EGL_DONT_CARE,
            //EGL_STENCIL_SIZE,   EGL_DONT_CARE,
            EGL_SAMPLE_BUFFERS, 0,
            EGL_NONE
        };

        moui_s32 config_count;
        moui_require(eglGetConfigs(default_state->display, moui_null, 0, &config_count));        
        moui_require(eglChooseConfig(default_state->display, attributes, &default_state->config, 1, &config_count));   
    }
    
    default_state->init_surface = eglCreateWindowSurface(default_state->display, default_state->config, 0, moui_null);
    moui_require(default_state->init_surface != EGL_NO_SURFACE); 
    
    {
        moui_s32 attributes[] = 
        {
            EGL_CONTEXT_CLIENT_VERSION,       2,            
            //EGL_CONTEXT_OPENGL_PROFILE_MASK, EGL_CONTEXT_OPENGL_CORE_PROFILE_BIT,
            //EGL_CONTEXT_OPENGL_DEBUG,        EGL_TRUE,            
            EGL_NONE,
            EGL_NONE
        };

        default_state->gl_context = eglCreateContext(default_state->display, default_state->config, EGL_NO_CONTEXT, attributes);
        moui_require(default_state->gl_context != EGL_NO_CONTEXT);
    }

    moui_require(eglMakeCurrent(default_state->display, default_state->init_surface, default_state->init_surface, default_state->gl_context));
    default_state->current_surface = default_state->init_surface;

    default_state->base.renderer.gl.is_modern = moui_true;
}

moui_get_default_platform_window_signature
{
    moui_default_window default_window = {0};
    return default_window;
}

moui_default_window_init_signature
{
    moui_assert(default_state->gl_context != EGL_NO_CONTEXT); // call moui_init first
    moui_assert(window->surface == EGL_NO_SURFACE);

    moui_assert(default_state->base.renderer.gl.is_modern);        

    window->surface = eglCreateWindowSurface(default_state->display, default_state->config, 0, moui_null);
    moui_require(window->surface != EGL_NO_SURFACE); 
}

moui_default_render_begin_signature
{
    moui_assert(default_state->gl_context != EGL_NO_CONTEXT); // call moui_init first
    moui_assert(window->surface != EGL_NO_SURFACE);    

    if (default_state->current_surface != window->surface)
    {
        moui_require(eglMakeCurrent(default_state->display, window->surface, window->surface, default_state->gl_context));
        default_state->current_surface = window->surface;    
    }
}

moui_default_render_end_signature
{
    moui_assert(default_state->gl_context != EGL_NO_CONTEXT); // call moui_init first
    moui_assert(window->surface != EGL_NO_SURFACE);

    moui_assert(default_state->current_surface == window->surface);
    eglSwapBuffers(default_state->display, window->surface);
}

#else

#error moui_gl_implementation not implemented for current platform

#endif

#define moui_gl_check(x) x; moui_gl_error(# x, (moui_cstring) __FUNCTION__, __LINE__)

void moui_gl_error(moui_cstring command, moui_cstring function, moui_u32 line)
{
    struct {
        moui_s32     code;
        moui_cstring name;
        moui_cstring message;
    } errors[]= {
        { GL_NO_ERROR, "GL_NO_ERROR", "No error has been recorded. The value of this symbolic constant is guaranteed to be 0." },
        { GL_INVALID_ENUM, "GL_INVALID_ENUM", "An unacceptable value is specified for an enumerated argument. The offending command is ignored and has no other side effect than to set the error flag." },
        { GL_INVALID_VALUE, "GL_INVALID_VALUE", "A numeric argument is out of range. The offending command is ignored and has no other side effect than to set the error flag." },
        { GL_INVALID_OPERATION, "GL_INVALID_OPERATION", "The specified operation is not allowed in the current state. The offending command is ignored and has no other side effect than to set the error flag." },
        //{ GL_INVALID_FRAMEBUFFER_OPERATION, "The framebuffer object is not complete. The offending command is ignored and has no other side effect than to set the error flag." },
        { GL_OUT_OF_MEMORY, "GL_OUT_OF_MEMORY", "There is not enough memory left to execute the command. The state of the GL is undefined, except for the state of the error flags, after this error is recorded." },
        { GL_STACK_UNDERFLOW, "GL_STACK_UNDERFLOW", "An attempt has been made to perform an operation that would cause an internal stack to underflow." },
        { GL_STACK_OVERFLOW, "GL_STACK_OVERFLOW", "An attempt has been made to perform an operation that would cause an internal stack to overflow." },
    };

    moui_u32 error = glGetError();
    if (error)
    {
        moui_b8 found = moui_false;
        for (moui_u32 i = 0; i < moui_carray_count(errors); i++)
        {
            if (errors[i].code == error)
            {
                printf("%s,%u: gl error %s %s %s\n", function, line, command, errors[i].name, errors[i].message);
                found = moui_true;
                break;
            }
        }

        if (!found)
            printf("gl error %s unknown error %i\n", command, error);
    }
}

#if defined moui_gl_symbols
#define moui_gl_load(function)
#endif

#define moui_gl_required_load(function) moui_gl_load(function); moui_require(moui_ ## function)

#if !defined moui_gl_symbols

#define GL_TEXTURE_SWIZZLE_RGBA 0x8E46
#define GL_VERTEX_SHADER 0x8B31
#define GL_FRAGMENT_SHADER 0x8B30
#define GL_COMPILE_STATUS 0x8B81
#define GL_LINK_STATUS 0x8B82
#define GL_ARRAY_BUFFER 0x8892
#define GL_ELEMENT_ARRAY_BUFFER 0x8893
#define GL_DYNAMIC_DRAW 0x88E8
#define GL_TEXTURE0 0x84C0

typedef GLuint  (*moui_glCreateShader_function)(GLenum type);
moui_glCreateShader_function moui_glCreateShader;

typedef GLuint  (*moui_glCreateProgram_function)();
moui_glCreateProgram_function moui_glCreateProgram;

typedef void (*moui_glShaderSource_function)(GLuint shader, GLsizei count, char **string, GLint *length);
moui_glShaderSource_function moui_glShaderSource;

typedef void (*moui_glCompileShader_function)(GLuint shader);
moui_glCompileShader_function moui_glCompileShader;

typedef void (*moui_glGetShaderiv_function)(GLuint shader, GLenum pname, GLint *params);
moui_glGetShaderiv_function moui_glGetShaderiv;

typedef void (*moui_glAttachShader_function)(GLuint program, GLuint shader);
moui_glAttachShader_function moui_glAttachShader;

typedef void (*moui_glBindAttribLocation_function)(GLuint program, GLuint index, char *name);
moui_glBindAttribLocation_function moui_glBindAttribLocation;

typedef void (*moui_glLinkProgram_function)(GLuint program);
moui_glLinkProgram_function moui_glLinkProgram;

typedef void (*moui_glGetProgramiv_function)(GLuint program, GLenum pname, GLint *params);
moui_glGetProgramiv_function moui_glGetProgramiv;

typedef GLint  (*moui_glGetUniformLocation_function)(GLuint program, char *name);
moui_glGetUniformLocation_function moui_glGetUniformLocation;

typedef void (*moui_glDeleteShader_function)(GLuint shader);
moui_glDeleteShader_function moui_glDeleteShader;

typedef void (*moui_glGenVertexArrays_function)(GLsizei n, GLuint *arrays);
moui_glGenVertexArrays_function moui_glGenVertexArrays;

typedef void (*moui_glBindVertexArray_function)(GLuint array);
moui_glBindVertexArray_function moui_glBindVertexArray;

typedef void (*moui_glEnableVertexAttribArray_function)(GLuint index);
moui_glEnableVertexAttribArray_function moui_glEnableVertexAttribArray;

typedef void (*moui_glVertexAttribPointer_function)(GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, void * pointer);
moui_glVertexAttribPointer_function moui_glVertexAttribPointer;

typedef void (*moui_glDeleteVertexArrays_function)(GLsizei n, GLuint *arrays);
moui_glDeleteVertexArrays_function moui_glDeleteVertexArrays;

typedef void (*moui_glGenBuffers_function)(GLsizei n, GLuint *buffers);
moui_glGenBuffers_function moui_glGenBuffers;

typedef void (*moui_glDeleteBuffers_function)(GLsizei n, GLuint *buffers);
moui_glDeleteBuffers_function moui_glDeleteBuffers;

typedef void (*moui_glBindBuffer_function)(GLenum target, GLuint buffer);
moui_glBindBuffer_function moui_glBindBuffer;

typedef void (*moui_glBufferData_function)(GLenum target, moui_s64 size, void * data, GLenum usage);
moui_glBufferData_function moui_glBufferData;

typedef void (*moui_glBufferSubData_function)(GLenum target, moui_s64 offset, moui_s64 size, void * data);
moui_glBufferSubData_function moui_glBufferSubData;

typedef void (*moui_glUseProgram_function)(GLuint program);
moui_glUseProgram_function moui_glUseProgram;

typedef void (*moui_glUniform1i_function)(GLint location, GLint v0);
moui_glUniform1i_function moui_glUniform1i;
      
typedef void (*moui_glActiveTexture_function)(GLenum texture);
moui_glActiveTexture_function moui_glActiveTexture;

#endif

moui_create_texture_signature
{
    moui_texture texture;
    texture.width  = width;
    texture.height = height;

    moui_u32 texture_handle;
    moui_gl_check(glGenTextures(1, &texture_handle));
    moui_assert(texture_handle);

    moui_gl_check(glBindTexture(GL_TEXTURE_2D, texture_handle));
    if (is_alpha_only)
    {
        moui_gl_check(glTexImage2D(GL_TEXTURE_2D, 0, GL_RED, texture.width, texture.height, 0, GL_RED, GL_UNSIGNED_BYTE, data));

        // premultiplied alpha
        GLint swizzle_mask[] = { GL_RED, GL_RED, GL_RED, GL_RED };
        glTexParameteriv(GL_TEXTURE_2D, GL_TEXTURE_SWIZZLE_RGBA, swizzle_mask);
    }
    else
    {
        moui_gl_check(glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, texture.width, texture.height, 0, GL_RGBA, GL_UNSIGNED_BYTE, data));
    }

    if (is_bilinear)
    {
        moui_gl_check(glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR));
        moui_gl_check(glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR));
    }
    else
    {
        moui_gl_check(glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST));
        moui_gl_check(glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST));
    }

    moui_gl_check(glBindTexture(GL_TEXTURE_2D, 0));

    texture.handle = (moui_u8 *) (moui_usize) texture_handle;
    return texture;
}

moui_update_texture_box_signature
{
    moui_u32 texture_handle = (moui_u32) (moui_usize) texture.handle;
    moui_assert(texture_handle);

    moui_gl_check(glBindTexture(GL_TEXTURE_2D, texture_handle));

    if (is_alpha_only)
    {
        moui_gl_check(glTexSubImage2D(GL_TEXTURE_2D, 0, texture_box.min.x, texture_box.min.y, texture_box.max.x - texture_box.min.x, texture_box.max.y - texture_box.min.y, GL_RED, GL_UNSIGNED_BYTE, data));
    }
    else
    {
        moui_gl_check(glTexSubImage2D(GL_TEXTURE_2D, 0, texture_box.min.x, texture_box.min.y, texture_box.max.x - texture_box.min.x, texture_box.max.y - texture_box.min.y, GL_RGBA, GL_UNSIGNED_BYTE, data));
    }

    moui_gl_check(glBindTexture(GL_TEXTURE_2D, texture_handle));
}

#define moui_gl_create_shader_program_signature moui_u32 moui_gl_create_shader_program(moui_string name, moui_u32 vertex_source_count, moui_string *vertex_sources, moui_u32 fragment_source_count, moui_string *fragment_sources)
moui_gl_create_shader_program_signature;

#define moui_gl_create_shader_object_signature moui_u32 moui_gl_create_shader_object(moui_string name, moui_b8 is_fragment_shader, moui_u32 source_count, moui_string *sources)
moui_gl_create_shader_object_signature;

moui_default_init_signature
{
    moui_platform_init(default_state);

    if (default_state->base.renderer.gl.is_modern)
    {
        moui_gl_required_load(glCreateShader);
        moui_gl_required_load(glCreateProgram);
        moui_gl_required_load(glShaderSource);
        moui_gl_required_load(glCompileShader);
        moui_gl_required_load(glGetShaderiv);
        moui_gl_required_load(glAttachShader);            
        moui_gl_required_load(glBindAttribLocation);            
        moui_gl_required_load(glLinkProgram);
        moui_gl_required_load(glGetProgramiv);            
        moui_gl_required_load(glGetUniformLocation);
        moui_gl_required_load(glDeleteShader);            
        moui_gl_required_load(glGenVertexArrays);
        moui_gl_required_load(glBindVertexArray);
        moui_gl_required_load(glEnableVertexAttribArray);
        moui_gl_required_load(glVertexAttribPointer);
        moui_gl_required_load(glDeleteVertexArrays);
        moui_gl_required_load(glGenBuffers);
        moui_gl_required_load(glDeleteBuffers);
        moui_gl_required_load(glBindBuffer);
        moui_gl_required_load(glBufferData);
        moui_gl_required_load(glBufferSubData);        
        moui_gl_required_load(glUseProgram);
        moui_gl_required_load(glUniform1i);
        moui_gl_required_load(glActiveTexture);

        moui_string vertex_shader = moui_s(
            "#version 330\n"
            "\n"
            "in vec2 vertex_position;\n"
            "in vec2 vertex_uv;\n"
            "in vec4 vertex_color;\n"
            "\n"
            "out vec2 fragment_uv;\n"
            "out vec4 fragment_color;\n"
            "\n"
            "void main()\n"
            "{\n"
            "    fragment_uv    = vertex_uv;\n"
            "    fragment_color = vertex_color;\n"
            "\n"
            "    gl_Position = vec4(vertex_position, 0, 1);\n"
            "}\n"
            );

        moui_string fragment_shader = moui_s(
            "#version 330\n"
            "\n"                
            "in vec2 fragment_uv;\n"
            "in vec4 fragment_color;\n"
            "\n"
            "out vec4 out_color;\n"
            "\n"
            "uniform sampler2D color_map;\n"
            "\n"
            "void main()\n"
            "{\n"                
            "    out_color = texture(color_map, fragment_uv) * fragment_color;\n"
            "}\n"
            );

        default_state->base.renderer.gl.shader = moui_gl_create_shader_program(moui_s("moui default shader"), 1, &vertex_shader, 1, &fragment_shader);
        default_state->base.renderer.gl.shader_color_map = moui_glGetUniformLocation(default_state->base.renderer.gl.shader, "color_map");
        moui_assert(default_state->base.renderer.gl.shader_color_map != -1);
    }    
    
    {
        moui_u8 white = 255;
        default_state->base.renderer.white_texture = moui_create_texture(1, 1, &white, moui_true, moui_false);
    }

    {
        // padded to 4 bytes per row
        moui_u8 line[] =
        {
              0, 0, 0, 0,
            255, 0, 0, 0,
              0, 0, 0, 0,
              0, 0, 0, 0,
        };
        default_state->base.renderer.line_texture = moui_create_texture(1, 4, line, moui_true, moui_true);
    }
}

moui_default_render_prepare_execute_signature
{
    moui_gl_check(glViewport(0, 0, default_state->base.renderer.canvas_size.x, default_state->base.renderer.canvas_size.y));
    moui_gl_check(glScissor(0,  0, default_state->base.renderer.canvas_size.x, default_state->base.renderer.canvas_size.y));

    moui_gl_check(glClearColor(0, 0, 0, 1));
    moui_gl_check(glClear(GL_COLOR_BUFFER_BIT));

    moui_gl_check(glDisable(GL_DEPTH_TEST));
}

moui_gl_create_shader_object_signature
{
    moui_u32 shader_kind_map[] =
    {
        GL_VERTEX_SHADER,
        GL_FRAGMENT_SHADER
    };

    moui_u32 gl_shader_kind = shader_kind_map[is_fragment_shader];
    moui_u32 shader_object = moui_glCreateShader(gl_shader_kind);

    moui_u8  *source_bases[32];
    moui_s32 source_counts[moui_carray_count(source_bases)];
    moui_assert(source_count <= moui_carray_count(source_bases));

    for (moui_u32 i = 0; i < source_count; i++)
    {
        source_bases[i]  = sources[i].base;
        source_counts[i] = (moui_s32) sources[i].count;
    }

    moui_glShaderSource(shader_object, (moui_s32) source_count, (char **) source_bases, source_counts);

    moui_glCompileShader(shader_object);

    GLint is_compiled;
    moui_glGetShaderiv(shader_object, GL_COMPILE_STATUS, &is_compiled);
    moui_require(is_compiled);

    return shader_object;
}

moui_gl_create_shader_program_signature
{   
    moui_u32 vertex_shader   = moui_gl_create_shader_object(name, moui_false, vertex_source_count,   vertex_sources);
    moui_u32 fragment_shader = moui_gl_create_shader_object(name, moui_true,  fragment_source_count, fragment_sources);
    
    moui_u32 program = moui_glCreateProgram();
    moui_glAttachShader(program, vertex_shader);
    moui_glAttachShader(program, fragment_shader);

    {                    
        moui_glBindAttribLocation(program, 0, "vertex_position");
        moui_glBindAttribLocation(program, 1, "vertex_uv");
        moui_glBindAttribLocation(program, 2, "vertex_color");
    }

    moui_glLinkProgram(program);

    GLint is_linked;
    moui_glGetProgramiv(program, GL_LINK_STATUS, &is_linked);
    moui_require(is_linked);

    moui_glDeleteShader(vertex_shader);
    moui_glDeleteShader(fragment_shader);

    return program;
}

void moui_gl_resize_vertex_buffer(moui_gl_buffer *buffer, moui_u32 vertex_count, moui_vertex *vertices)
{
    buffer->used_count = vertex_count;
    moui_u32 new_total_count = moui_u32_max(buffer->total_count, 2 * buffer->used_count);
        
    if (new_total_count > buffer->total_count)
    {                
        buffer->total_count = new_total_count;

        if (buffer->array_buffer_object)
        {   
            moui_assert(buffer->array_object);
            moui_glDeleteVertexArrays(1, &buffer->array_object);
            moui_glDeleteBuffers(1, &buffer->array_buffer_object);
        }
            
        moui_glGenVertexArrays(1, &buffer->array_object);       
        moui_require(buffer->array_object);
        moui_glBindVertexArray(buffer->array_object);

        moui_glGenBuffers(1, &buffer->array_buffer_object);
        moui_require(buffer->array_buffer_object);
        moui_glBindBuffer(GL_ARRAY_BUFFER, buffer->array_buffer_object);

        // vec2 position
        moui_usize byte_offset = 0;
        moui_glEnableVertexAttribArray(0);
        moui_glVertexAttribPointer(0, 2, GL_FLOAT, GL_FALSE, sizeof(moui_vertex), (void *) byte_offset);
        byte_offset += sizeof(moui_vec2);

        // vec2 uv
        moui_glEnableVertexAttribArray(1);
        moui_glVertexAttribPointer(1, 2, GL_FLOAT, GL_FALSE, sizeof(moui_vertex), (void *) byte_offset);
        byte_offset += sizeof(moui_vec2);

        // vec4 color
        moui_glEnableVertexAttribArray(2);
        moui_glVertexAttribPointer(2, 4, GL_FLOAT, GL_FALSE, sizeof(moui_vertex), (void *) byte_offset);
        byte_offset += sizeof(moui_rgba);    

        moui_glBufferData(GL_ARRAY_BUFFER, buffer->total_count * sizeof(moui_vertex), moui_null, GL_DYNAMIC_DRAW);
        moui_glBufferSubData(GL_ARRAY_BUFFER, 0, buffer->used_count * sizeof(moui_vertex), vertices);

        // order is important
        moui_glBindVertexArray(0);
        moui_glBindBuffer(GL_ARRAY_BUFFER, 0);
    }
    else if (buffer->used_count)
    {
        moui_assert(buffer->array_buffer_object);
        moui_glBindBuffer(GL_ARRAY_BUFFER, buffer->array_buffer_object);        
        
        moui_glBufferSubData(GL_ARRAY_BUFFER, 0, buffer->used_count * sizeof(moui_vertex), vertices);
        
        moui_glBindBuffer(GL_ARRAY_BUFFER, 0);
    }
}

moui_execute_signature
{
#if defined moui_debug
    moui_assert(state->debug_is_in_frame);
    state->debug_is_in_frame = moui_false;
#endif    

    moui_renderer *renderer = &state->renderer;

    // force applying last command
    moui_set_command(state, renderer->current_command.layer + 1, 0);

    if ((renderer->command_request_count > renderer->command_count) || (renderer->quad_request_count > renderer->quad_count) || (renderer->texture_request_count > renderer->texture_count))
        return;

    moui_gl_check(glEnable(GL_BLEND));    
    moui_gl_check(glBlendFunc(GL_ONE, GL_ONE_MINUS_SRC_ALPHA));

    moui_u32 command_count = renderer->command_request_count;

    moui_vec2 gl_viewport_scale = { 2.0f / renderer->canvas_size.x, 2.0f / renderer->canvas_size.y };

    if (state->renderer.gl.is_modern)
    {
        renderer->vertex_request_count = moui_u32_max(renderer->vertex_request_count, renderer->quad_request_count * 6);    
        if (renderer->quad_request_count * 6 > renderer->vertex_count)
            return;

        moui_vertex *sorted_vertices = renderer->vertices;
        moui_u32 sorted_vertex_count = 0;

        for (moui_s32 layer = renderer->min_layer; layer <= renderer->max_layer; layer++)
        {                        
            for (moui_s32 texture_index = 0; texture_index < renderer->texture_count; texture_index++)
            {        
                moui_u32 quad_offset = 0;    

                for (moui_u32 command_index = 0; command_index < command_count; command_index++)
                {
                    moui_command command = renderer->commands[command_index];                    
                    if ((command.layer != layer) || (command.texture_index != texture_index))                                    
                    {
                        quad_offset += command.quad_count;
                        continue;                    
                    }

                    for (moui_u32 quad_index = 0; quad_index < command.quad_count; quad_index++)
                    {
                        moui_vertex *vertices = sorted_vertices + sorted_vertex_count;
                        sorted_vertex_count += 6;

                        vertices[0] = renderer->quads[quad_offset + quad_index].vertices[0];
                        vertices[1] = renderer->quads[quad_offset + quad_index].vertices[1];
                        vertices[2] = renderer->quads[quad_offset + quad_index].vertices[2];

                        vertices[3] = vertices[0];
                        vertices[4] = vertices[2];
                        vertices[5] = renderer->quads[quad_offset + quad_index].vertices[3];                     
                    }

                    quad_offset += command.quad_count;
                }
            }        
        }

        // transform from ui to clip space
        for (moui_s32 vertex_index = 0; vertex_index < sorted_vertex_count; vertex_index++)
        {            
            sorted_vertices[vertex_index].position.x = sorted_vertices[vertex_index].position.x * gl_viewport_scale.x - 1;
            sorted_vertices[vertex_index].position.y = sorted_vertices[vertex_index].position.y * gl_viewport_scale.y - 1;
        }

        moui_gl_resize_vertex_buffer(&state->renderer.gl.vertex_buffer, sorted_vertex_count, sorted_vertices);

        moui_glUseProgram(state->renderer.gl.shader);    
        
        moui_glUniform1i(state->renderer.gl.shader_color_map, 0);
        moui_glActiveTexture(GL_TEXTURE0);

        moui_glBindVertexArray(state->renderer.gl.vertex_buffer.array_object);        

        {
            moui_u32 vertex_offset = 0;

            for (moui_s32 layer = renderer->min_layer; layer <= renderer->max_layer; layer++)
            {                            
                for (moui_s32 texture_index = 0; texture_index < renderer->texture_count; texture_index++)
                {            
                    for (moui_u32 command_index = 0; command_index < command_count; command_index++)
                    {
                        moui_command command = renderer->commands[command_index];                    
                        if ((command.layer != layer) || (command.texture_index != texture_index))                                                            
                            continue;                        

                        moui_u32 texture_handle = (moui_u32) (moui_usize) renderer->textures[command.texture_index].handle;
                        glBindTexture(GL_TEXTURE_2D, texture_handle);

                        glDrawArrays(GL_TRIANGLES, vertex_offset, command.quad_count * 6);
                        vertex_offset += command.quad_count * 6;
                    }
                }
            }

            moui_assert(vertex_offset == sorted_vertex_count);
        }

        glBindTexture(GL_TEXTURE_2D, 0);

        moui_glBindVertexArray(0);

        moui_glUseProgram(0);
    }
    else
    {
    #if !__EMSCRIPTEN__

        // TODO: sort by layer and texture
        for (moui_s32 layer = renderer->min_layer; layer <= renderer->max_layer; layer++)
        {
            moui_u32 quad_offset = 0;

            for (moui_u32 command_index = 0; command_index < command_count; command_index++)
            {
                moui_command command = renderer->commands[command_index];
                if (quad_offset + command.quad_count > renderer->quad_count)
                    break;

                if (command.layer != layer)
                {
                    quad_offset += command.quad_count;
                    continue;
                }

                moui_u32 texture_handle = (moui_u32) (moui_usize) renderer->textures[command.texture_index].handle;
                if (texture_handle)
                {
                    moui_gl_check(glEnable(GL_TEXTURE_2D));
                }
                else
                {
                    moui_gl_check(glDisable(GL_TEXTURE_2D));
                }

                moui_gl_check(glBindTexture(GL_TEXTURE_2D, texture_handle));

                glBegin(GL_TRIANGLES);

                for (moui_u32 quad_index = 0; quad_index < command.quad_count; quad_index++)
                {
                    moui_vertex vertices[6];

                    vertices[0] = renderer->quads[quad_offset + quad_index].vertices[0];
                    vertices[1] = renderer->quads[quad_offset + quad_index].vertices[1];
                    vertices[2] = renderer->quads[quad_offset + quad_index].vertices[2];

                    vertices[3] = vertices[0];
                    vertices[4] = vertices[2];
                    vertices[5] = renderer->quads[quad_offset + quad_index].vertices[3];

                    for (moui_u32 vertex_index = 0; vertex_index < moui_carray_count(vertices); vertex_index++)
                    {
                        glTexCoord2f(vertices[vertex_index].uv.x, vertices[vertex_index].uv.y);
                        glColor4f(vertices[vertex_index].color.r, vertices[vertex_index].color.g, vertices[vertex_index].color.b, vertices[vertex_index].color.a);
                        glVertex2f(vertices[vertex_index].position.x * gl_viewport_scale.x - 1, vertices[vertex_index].position.y * gl_viewport_scale.y - 1);
                    }
                }

                moui_gl_check(glEnd());

                quad_offset += command.quad_count;
            }
        }

    #endif  
    }
}

#elif !defined moui_custom_state

struct moui_default_state
{
    moui_state base;
};

struct moui_default_window
{
    moui_u32 ignored;
};

moui_default_init_signature
{
    moui_assert(0);
}

moui_default_window_init_signature
{
    moui_assert(0);
}

moui_default_render_begin_signature
{
    moui_assert(0);
}

moui_default_render_end_signature
{
    moui_assert(0);
}

moui_default_render_prepare_execute_signature
{
    moui_assert(0);
}

moui_execute_signature
{
    moui_assert(0);
}

#endif

moui_set_buffers_signature
{
    state->renderer.quads      = quads;
    state->renderer.quad_count = quad_count;

    state->renderer.vertices     = vertices;
    state->renderer.vertex_count = vertex_count;

    state->renderer.textures      = textures;
    state->renderer.texture_count = texture_count;

    state->renderer.commands      = commands;
    state->renderer.command_count = command_count;
}

moui_set_scissor_box_signature
{
    moui_box2 previous_scissor_box = state->scissor_box;
    state->scissor_box = scissor_box;

    return previous_scissor_box;
}

moui_scissor_box_signature
{
    moui_vec2 box_size = { box->max.x - box->min.x, box->max.y - box->min.y };

    moui_f32 min_x_cut = moui_f32_max(scissor_box.min.x - box->min.x, 0);
    moui_f32 max_x_cut = moui_f32_max(box->max.x - scissor_box.max.x, 0);
    moui_f32 min_y_cut = moui_f32_max(scissor_box.min.y - box->min.y, 0);
    moui_f32 max_y_cut = moui_f32_max(box->max.y - scissor_box.max.y, 0);

    if ((box_size.x < (min_x_cut + max_x_cut)) || (box_size.y < (min_y_cut + max_y_cut)))
        return moui_false;

    box->min.x += min_x_cut;
    box->max.x -= max_x_cut;
    box->min.y += min_y_cut;
    box->max.y -= max_y_cut;

    moui_vec2 texture_size = { texture_box->max.x - texture_box->min.x, texture_box->max.y - texture_box->min.y };
    moui_vec2 texture_scale = { texture_size.x / box_size.x, texture_size.y / box_size.y };
    texture_box->min.x += min_x_cut * texture_scale.x;
    texture_box->max.x -= max_x_cut * texture_scale.x;
    texture_box->min.y += min_y_cut * texture_scale.y;
    texture_box->max.y -= max_y_cut * texture_scale.y;

    return moui_true;
}

moui_scissor_signature
{
    moui_b8 ok = moui_scissor_box(state->scissor_box, box, texture_box);
    if (ok)
        state->renderer.used_box = moui_box2_merge(state->renderer.used_box, *box);

    return ok;
}

moui_used_box_begin_signature
{
    moui_box2 begin_box = state->renderer.used_box;
    state->renderer.used_box.min.x = state->renderer.canvas_size.x;
    state->renderer.used_box.max.x = 0;
    state->renderer.used_box.min.y = state->renderer.canvas_size.y;
    state->renderer.used_box.max.y = 0;

    return begin_box;
}

moui_used_box_end_signature
{
    moui_box2 end_box = state->renderer.used_box;
    state->renderer.used_box = moui_box2_merge(state->renderer.used_box, begin_box);

    return end_box;
}

moui_set_command_signature
{
    // append to current command
    if ((state->renderer.current_command.layer == layer) && (state->renderer.current_command.texture_index == texture_index))
        return moui_true;

    moui_b8 ok = moui_true;
    if (state->renderer.current_command.quad_count)
    {
        if (state->renderer.command_request_count < state->renderer.command_count)
        {
            state->renderer.commands[state->renderer.command_request_count] = state->renderer.current_command;
            state->renderer.min_layer = moui_s32_min(state->renderer.min_layer, state->renderer.current_command.layer);
            state->renderer.max_layer = moui_s32_max(state->renderer.max_layer, state->renderer.current_command.layer);
        }
        else
        {
            ok = moui_false;
        }

        state->renderer.command_request_count++;
    }

    state->renderer.current_command.layer         = layer;
    state->renderer.current_command.texture_index = texture_index;
    state->renderer.current_command.quad_count    = 0;

    return ok;
}

moui_set_command_texture_signature
{
    moui_u32 texture_count = moui_u32_min(state->renderer.texture_request_count, state->renderer.texture_count);
    moui_u32 texture_index = 0;
    for (; texture_index < texture_count; texture_index++)
    {
        if (state->renderer.textures[texture_index].handle == texture.handle)
        {
            moui_assert(state->renderer.textures[texture_index].width  == texture.width);
            moui_assert(state->renderer.textures[texture_index].height == texture.height);
            break;
        }
    }

    if (texture_index == texture_count)
    {
        if (state->renderer.texture_request_count < state->renderer.texture_count)
            state->renderer.textures[texture_index] = texture;
        else
            texture_index = state->renderer.texture_request_count;

        state->renderer.texture_request_count++;
    }

    return moui_set_command(state, layer, texture_index);
}

moui_add_quad_signature
{
    state->renderer.current_command.quad_count++;

    moui_b8 ok = moui_false;
    if (state->renderer.quad_request_count < state->renderer.quad_count)
    {
        state->renderer.quads[state->renderer.quad_request_count] = quad;
        ok = moui_true;
    }

    state->renderer.quad_request_count++;

    return ok;
}

moui_premultiply_alpha_signature
{
    color.r *= color.a;
    color.g *= color.a;
    color.b *= color.a;
    return color;
}

moui_to_quad_colors_signature
{
    color = moui_premultiply_alpha(color);
    return moui_sl(moui_quad_colors) { color, color, color, color };
}

moui_add_texture_quad_signature
{
    if (!moui_scissor(state, &box, &texture_box))
        return;

    moui_quad quad;
    quad.vertices[0].color    = colors.values[0];
    quad.vertices[0].position = moui_sl(moui_vec2) { box.min.x, box.min.y };
    quad.vertices[0].uv       = moui_sl(moui_vec2) { texture_box.min.x * texture_scale.x, texture_box.min.y * texture_scale.y };

    quad.vertices[1].color    = colors.values[1];
    quad.vertices[1].position = moui_sl(moui_vec2) { box.max.x, box.min.y };
    quad.vertices[1].uv       = moui_sl(moui_vec2) { texture_box.max.x * texture_scale.x, texture_box.min.y * texture_scale.y };

    quad.vertices[2].color    = colors.values[2];
    quad.vertices[2].position = moui_sl(moui_vec2) { box.max.x, box.max.y };
    quad.vertices[2].uv       = moui_sl(moui_vec2) { texture_box.max.x * texture_scale.x, texture_box.max.y * texture_scale.y };

    quad.vertices[3].color    = colors.values[3];
    quad.vertices[3].position = moui_sl(moui_vec2) { box.min.x, box.max.y};
    quad.vertices[3].uv       = moui_sl(moui_vec2) { texture_box.min.x * texture_scale.x, texture_box.max.y * texture_scale.y };

    moui_add_quad(state, quad);
}

moui_texture_box_signature
{
    moui_set_command_texture(state, layer, texture);

    moui_vec2 texture_scale = { 1.0f /  texture.width, 1.0f / texture.height };    
    moui_add_texture_quad(state, texture_scale, colors, box, texture_box);
}

moui_box_signature
{
    moui_texture_box(state, layer, state->renderer.white_texture, colors, box, moui_sl(moui_box2) {0});
}

moui_line_signature
{
    moui_texture texture = state->renderer.line_texture;
    moui_set_command_texture(state, layer, texture);

    moui_vec2 texture_scale = { 1.0f / texture.width, 1.0f / texture.height };

    moui_vec2 right = moui_vec2_resize(moui_sl(moui_vec2) { to.x - from.x, to.y - from.y }, 0.5f);

    // rotated
    moui_vec2 up    = { -right.y, right.x };

    from.x += 0.5f - right.x;
    from.y += 0.5f - right.y;
    to.x   += 0.5f + right.x;
    to.y   += 0.5f + right.y;

    moui_vec2 thick_up = { up.x * thickness, up.y * thickness };
    moui_box2 texture_box;
    moui_quad quad;

    // mid

#if 1

    texture_box.min.x = 0;
    texture_box.max.x = 1;
    texture_box.min.y = 1;
    texture_box.max.y = 2;

    quad.vertices[0].color    = colors.values[0];
    quad.vertices[0].position = moui_sl(moui_vec2) { from.x - thick_up.x, from.y - thick_up.y };
    quad.vertices[0].uv       = moui_sl(moui_vec2) { texture_box.min.x * texture_scale.x, texture_box.min.y * texture_scale.y };

    quad.vertices[1].color    = colors.values[1];
    quad.vertices[1].position = moui_sl(moui_vec2) { to.x - thick_up.x, to.y - thick_up.y };
    quad.vertices[1].uv       = moui_sl(moui_vec2) { texture_box.max.x * texture_scale.x, texture_box.min.y * texture_scale.y };

    quad.vertices[2].color    = colors.values[2];
    quad.vertices[2].position = moui_sl(moui_vec2) { to.x + thick_up.x, to.y + thick_up.y };
    quad.vertices[2].uv       = moui_sl(moui_vec2) { texture_box.max.x * texture_scale.x, texture_box.max.y * texture_scale.y };

    quad.vertices[3].color    = colors.values[3];
    quad.vertices[3].position = moui_sl(moui_vec2) { from.x + thick_up.x, from.y + thick_up.y };
    quad.vertices[3].uv       = moui_sl(moui_vec2) { texture_box.min.x * texture_scale.x, texture_box.max.y * texture_scale.y };

    moui_add_quad(state, quad);

#endif

#if 0
    // bottom

    from.x -= thick_up.x + up.x;
    from.y -= thick_up.y + up.y;
    to.x   -= thick_up.x + up.x;
    to.y   -= thick_up.y + up.y;

    texture_box.min.x = 0;
    texture_box.max.x = 1;
    texture_box.min.y = 0;
    texture_box.max.y = 1;

    quad.vertices[0].color    = colors.values[0];
    quad.vertices[0].position = moui_sl(moui_vec2) { from.x - up.x, from.y - up.y };
    quad.vertices[0].uv       = moui_sl(moui_vec2) { texture_box.min.x * texture_scale.x, texture_box.min.y * texture_scale.y };

    quad.vertices[1].color    = colors.values[1];
    quad.vertices[1].position = moui_sl(moui_vec2) { to.x - up.x, to.y - up.y };
    quad.vertices[1].uv       = moui_sl(moui_vec2) { texture_box.max.x * texture_scale.x, texture_box.min.y * texture_scale.y };

    quad.vertices[2].color    = colors.values[2];
    quad.vertices[2].position = moui_sl(moui_vec2) { to.x + up.x, to.y + up.y };
    quad.vertices[2].uv       = moui_sl(moui_vec2) { texture_box.max.x * texture_scale.x, texture_box.max.y * texture_scale.y };

    quad.vertices[3].color    = colors.values[3];
    quad.vertices[3].position = moui_sl(moui_vec2) { from.x + up.x, from.y + up.y };
    quad.vertices[3].uv       = moui_sl(moui_vec2) { texture_box.min.x * texture_scale.x, texture_box.max.y * texture_scale.y };

    moui_add_quad(state, quad);

#endif

#if 0
    // top

    from.x += (thick_up.x + up.x) * 2;
    from.y += (thick_up.y + up.y) * 2;
    to.x   += (thick_up.x + up.x) * 2;
    to.y   += (thick_up.y + up.y) * 2;

    quad.vertices[0].color    = colors.values[0];
    quad.vertices[0].position = moui_sl(moui_vec2) { from.x - up.x, from.y - up.y };
    quad.vertices[0].uv       = moui_sl(moui_vec2) { texture_box.min.x * texture_scale.x, texture_box.min.y * texture_scale.y };

    quad.vertices[1].color    = colors.values[1];
    quad.vertices[1].position = moui_sl(moui_vec2) { to.x - up.x, to.y - up.y };
    quad.vertices[1].uv       = moui_sl(moui_vec2) { texture_box.max.x * texture_scale.x, texture_box.min.y * texture_scale.y };

    quad.vertices[2].color    = colors.values[2];
    quad.vertices[2].position = moui_sl(moui_vec2) { to.x + up.x, to.y + up.y };
    quad.vertices[2].uv       = moui_sl(moui_vec2) { texture_box.max.x * texture_scale.x, texture_box.max.y * texture_scale.y };

    quad.vertices[3].color    = colors.values[3];
    quad.vertices[3].position = moui_sl(moui_vec2) { from.x + up.x, from.y + up.y };
    quad.vertices[3].uv       = moui_sl(moui_vec2) { texture_box.min.x * texture_scale.x, texture_box.max.y * texture_scale.y };

    moui_add_quad(state, quad);
#endif
}

moui_get_atlas_item_signature
{
    moui_assert(parameter_count <= moui_carray_count(key_item.parameters));
    moui_u32 item_count = moui_u32_min(atlas->item_request_count, atlas->item_count);
    moui_u32 item_index = -1;

    // i = 1, skip white type
    for (moui_u32 i = 1; i < item_count; i++)
    {
        moui_atlas_item item = atlas->items[i];

        if (item.type != key_item.type)
            continue;

        moui_b8 ok = moui_true;
        for (moui_u32 parameter_index = 0; parameter_index < parameter_count; parameter_index++)
        {
            if (item.parameters[parameter_index] != key_item.parameters[parameter_index])
            {
                ok = moui_false;
                break;
            }
        }

        if (ok)
        {
            item_index = i;
            break;
        }
    }

    moui_atlas_item *item = moui_null;
    if (item_index == -1)
    {
        if (atlas->item_request_count < atlas->item_count)
        {
            item = &atlas->items[atlas->item_request_count];
            *item = key_item;
            item->texture_box.max.x = 0; // not init
        }

        atlas->item_request_count++;
    }
    else
    {
        item = &atlas->items[item_index];
        if (item->texture_box.max.x == 0) // not init
            item = moui_null;
    }

    return item;
}

moui_rounded_box_signature
{
    moui_atlas *atlas = &state->renderer.default_atlas;
    moui_atlas_item key_item;
    key_item.type = moui_default_atlas_item_type_rounded_box;
    key_item.parameters[0] = corner_radius;

    moui_f32 corner_size = moui_f32_ceil(corner_radius);

    // add some row allignment for gl texture
    moui_s32 row_width = ((moui_s32) (corner_size + 1) + 3) & ~3;   
    atlas->buffer_request_byte_count = moui_u32_max(atlas->buffer_request_byte_count, (moui_u32) (row_width * (corner_size + 1)));

    moui_atlas_item *found_item = moui_get_atlas_item(atlas, key_item, 1);
    if (!found_item)
        return;

    moui_atlas_item item = *found_item;

    moui_set_command_texture(state, layer, atlas->texture);

    moui_vec2 texture_scale = { 1.0f / atlas->texture.width, 1.0f / atlas->texture.height };

    moui_box2 tile_box;
    moui_box2 tile_texture_box;
    
    // exclude white border
    item.texture_box.max.x -= 1;
    item.texture_box.max.y -= 1;

    tile_box.min.y = box.min.y;
    tile_box.max.y = tile_box.min.y + corner_size;
    tile_texture_box.min.y = item.texture_box.max.y;
    tile_texture_box.max.y = item.texture_box.min.y;

    for (moui_u32 i = 0; i < 2; i++)
    {
        tile_box.min.x         = box.min.x;
        tile_box.max.x         = tile_box.min.x + corner_size;
        tile_texture_box.min.x = item.texture_box.max.x;
        tile_texture_box.max.x = item.texture_box.min.x;
        moui_add_texture_quad(state, texture_scale, colors, tile_box, tile_texture_box);

        tile_box.min.x = tile_box.max.x;
        tile_box.max.x = box.max.x - corner_size;
        tile_texture_box.min.x = item.texture_box.min.x;
        tile_texture_box.max.x = item.texture_box.min.x + 1;

        if (box.max.x - box.min.x > corner_size * 2)
            moui_add_texture_quad(state, texture_scale, colors, tile_box, tile_texture_box);

        tile_box.max.x = box.max.x;
        tile_box.min.x = tile_box.max.x - corner_size;        
        tile_texture_box.min.x = item.texture_box.min.x;
        tile_texture_box.max.x = item.texture_box.max.x;
        moui_add_texture_quad(state, texture_scale, colors, tile_box, tile_texture_box);

        tile_box.min.y = box.max.y - corner_size;
        tile_box.max.y = box.max.y;
        tile_texture_box.min.y = item.texture_box.min.y;
        tile_texture_box.max.y = item.texture_box.max.y;
    }

    tile_box.min.x         = box.min.x;
    tile_box.max.x         = box.max.x;
    tile_box.min.y         = box.min.y + corner_size;
    tile_box.max.y         = box.max.y - corner_size;
    tile_texture_box.min.x = item.texture_box.min.x;
    tile_texture_box.max.x = item.texture_box.min.x + 1;
    tile_texture_box.min.y = item.texture_box.min.y;
    tile_texture_box.max.y = item.texture_box.min.y + 1;
    moui_add_texture_quad(state, texture_scale, colors, tile_box, tile_texture_box);
}

moui_rounded_cutout_box_signature
{
    moui_atlas *atlas = &state->renderer.default_atlas;
    moui_atlas_item key_item;
    key_item.type = moui_default_atlas_item_type_rounded_cutout_box;
    key_item.parameters[0] = corner_radius;

    moui_f32 corner_size = moui_f32_ceil(corner_radius);

    // add some row allignment for gl texture
    moui_s32 row_width = ((moui_s32) (corner_size + 1) + 3) & ~3;
    atlas->buffer_request_byte_count = moui_u32_max(atlas->buffer_request_byte_count, (moui_u32) (row_width * (corner_size + 1)));

    moui_atlas_item *found_item = moui_get_atlas_item(atlas, key_item, 1);
    if (!found_item)
        return;

    moui_atlas_item item = *found_item;

    moui_set_command_texture(state, layer, atlas->texture);

    moui_vec2 texture_scale = { 1.0f / atlas->texture.width, 1.0f / atlas->texture.height };

    moui_box2 tile_box;
    moui_box2 tile_texture_box;

    // cutout background
    tile_box = box;
    tile_texture_box.min.x = item.texture_box.max.x - 1;
    tile_texture_box.max.x = item.texture_box.max.x;
    tile_texture_box.min.y = item.texture_box.max.y - 1;
    tile_texture_box.max.y = item.texture_box.max.y;
    moui_add_texture_quad(state, texture_scale, colors, tile_box, tile_texture_box);

    moui_set_command_texture(state, background_layer, atlas->texture);

    tile_box.min.y = box.min.y;
    tile_box.max.y = box.min.y + corner_size;
    tile_texture_box.min.y = item.texture_box.max.y - 1;
    tile_texture_box.max.y = item.texture_box.min.y;

    for (moui_u32 i = 0; i < 2; i++)
    {
        tile_box.min.x         = box.min.x;
        tile_box.max.x         = tile_box.min.x + corner_size;
        tile_texture_box.min.x = item.texture_box.max.x - 1;
        tile_texture_box.max.x = item.texture_box.min.x;
        moui_add_texture_quad(state, texture_scale, background_colors, tile_box, tile_texture_box);

        tile_box.min.x = tile_box.max.x;
        tile_box.max.x = box.max.x - corner_size;
        tile_texture_box.min.x = item.texture_box.min.x;
        tile_texture_box.max.x = item.texture_box.min.x + 1;

        tile_box.min.x = tile_box.max.x;
        tile_box.max.x = box.max.x;
        tile_texture_box.min.x = item.texture_box.min.x;
        tile_texture_box.max.x = item.texture_box.max.x - 1;
        moui_add_texture_quad(state, texture_scale, background_colors, tile_box, tile_texture_box);

        tile_box.min.y = box.max.y - corner_size;
        tile_box.max.y = box.max.y;
        tile_texture_box.min.y = item.texture_box.min.y;
        tile_texture_box.max.y = item.texture_box.max.y - 1;
    }
}

moui_box2 moui_atlas_place_texture_box(moui_atlas *atlas, moui_s32 width, moui_s32 height, moui_u8_array buffer)
{
    moui_s32 row_width = (width + 3) & ~3;
    moui_assert(row_width * height <= buffer.count);

    if (atlas->row_x + width + 1 > atlas->texture.width)
    {
        atlas->row_x = 0;
        moui_assert(atlas->row_x + width + 1 <= atlas->texture.width);

        atlas->row_y += atlas->max_row_height;
        moui_assert(atlas->row_y < atlas->texture.height);
        atlas->max_row_height = 0;
    }

    atlas->max_row_height = moui_s32_max(atlas->max_row_height, height + 1);

    moui_box2 texture_box;
    texture_box.min.x = atlas->row_x;
    texture_box.min.y = atlas->row_y;
    texture_box.max.x = texture_box.min.x + width;
    texture_box.max.y = texture_box.min.y + height;
    moui_update_texture_box(atlas->texture, texture_box, moui_true, buffer.base);

    atlas->row_x += width + 1;

    return texture_box;
}

void moui_update_atlas(moui_state *state, moui_u8_array buffer)
{
    moui_atlas *atlas = &state->renderer.default_atlas;
    moui_assert(atlas->buffer_request_byte_count <= buffer.count);

    if (!atlas->texture.handle)
    {
        atlas->texture.width  = 1024;
        atlas->texture.height = 1024;

        atlas->texture = moui_create_texture(1024, 1024, moui_null, moui_true, moui_false);

        atlas->row_x = 0;
        atlas->row_y = 0;
        atlas->max_row_height = 0;
    }

    moui_u32 item_count = moui_u32_min(atlas->item_request_count, atlas->item_count);
    for (moui_u32 i = 0; i < item_count; i++)
    {
        moui_atlas_item *item = &atlas->items[i];
        if (item->texture_box.max.x != 0) // is init
            continue;

        switch (item->type)
        {
        case moui_default_atlas_item_type_white:
        {
            // add alignment for gl texture
            moui_s32 row_width = 4;
            moui_assert(12 <= buffer.count);

            for (moui_s32 y = 0; y < 3; y++)
            {
               for (moui_s32 x = 0; x < 3; x++)
               {
                    buffer.base[y * row_width + x] = 0;
               }
            }

            // center is white
            buffer.base[1 * row_width + 1] = 255;

            item->texture_box = moui_atlas_place_texture_box(atlas, 3, 3, buffer);
        } break;

        case moui_default_atlas_item_type_rounded_box:
        case moui_default_atlas_item_type_rounded_cutout_box:
        {
            moui_f32 is_inverted = 0.0f;
            if (item->type == moui_default_atlas_item_type_rounded_cutout_box)
                is_inverted = 1.0f;

            moui_f32 corner_radius = item->parameters[0];
            moui_s32 size = (moui_s32) moui_f32_ceil(corner_radius) + 1;

            // add alignment for gl texture
            moui_s32 row_width = (size + 3) & ~3;

            moui_assert(row_width * size <= buffer.count);

            for (moui_s32 y = 0; y < size; y++)
            {
               for (moui_s32 x = 0; x < size; x++)
               {
                    moui_f32 value = moui_f32_max(0, moui_f32_min(1, corner_radius - moui_f32_square_root(x * x + y * y)));
                    value = value * (1.0f - is_inverted) +  (1.0f - value) * is_inverted;
                    buffer.base[y * row_width + x] = (moui_u8) (255 * value);

                #if defined moui_debug
                    // moui_string gray_scale = moui_s("$@B%8&WM#*oahkbdpqwmZO0QLCJUYXzcvunxrjft/\\|()1{}[]?-_+~<>i!lI;:,\"^`'. ");
                    // printf("%c", gray_scale.base[gray_scale.count * (255 - buffer.base[y * row_width + x]) / 255]);
                #endif
                }

            #if defined moui_debug
                // printf("\n");
            #endif
            }

            item->texture_box = moui_atlas_place_texture_box(atlas, size, size, buffer);
        } break;

        default:
            moui_assert(0);
        }
    }
}

moui_text_cursor_at_line_signature
{
    return moui_sl(moui_text_cursor) { position, position.x };
}

moui_text_cursor_at_top_signature
{
    position.y -= font.line_to_top;
    return moui_text_cursor_at_line(position);
}

moui_text_cursor_at_bottom_signature
{
    position.y += font.bottom_to_line;
    return moui_text_cursor_at_line(position);
}

moui_text_advance_signature
{
    if (!iterator->text.count)
        return moui_false;

    // TODO: utf8 decoding
    moui_u32 code = iterator->text.base[0];
    iterator->text.base  += 1;
    iterator->text.count -= 1;

    moui_u32 render_code = code;
    if (code == '\n')
        render_code = ' ';

    out_glyph->code = code;
    moui_assert(iterator->font.glyph_count);
    moui_u32 glyph_index = render_code - iterator->font.glyphs[0].code;
    if (glyph_index < iterator->font.glyph_count)
    {
        moui_font_glyph glyph = iterator->font.glyphs[glyph_index];

        out_glyph->index = glyph_index;
        out_glyph->texture_box = glyph.texture_box;

        moui_s32 width  = out_glyph->texture_box.max.x - out_glyph->texture_box.min.x;
        moui_s32 height = out_glyph->texture_box.max.y - out_glyph->texture_box.min.y;

        out_glyph->box.min.x = iterator->cursor.position.x + glyph.offset.x;
        out_glyph->box.min.y = iterator->cursor.position.y + glyph.offset.y;
        out_glyph->box.max.x = out_glyph->box.min.x + width;
        out_glyph->box.max.y = out_glyph->box.min.y + height;

        iterator->cursor.position.x += glyph.x_advance;
    }
    else
    {
        out_glyph->index = -1;
    }

    if (code == '\n')
    {
        iterator->cursor.position.x = iterator->cursor.line_start_x;
        iterator->cursor.position.y -= iterator->font.line_spacing;
    }

    return moui_true;
}

moui_get_text_box_signature
{
    moui_f32 bottom_to_line = iterator->font.bottom_to_line;
    moui_f32 line_to_top    = iterator->font.line_to_top;

    moui_box2 box = { iterator->cursor.position.x, iterator->cursor.position.y - bottom_to_line, iterator->cursor.position.x, iterator->cursor.position.y + iterator->font.line_to_top };

    moui_glyph glyph;
    moui_f32 last_line_y = iterator->cursor.position.y;
    while (moui_text_advance(&glyph, iterator))
    {
        if (glyph.index != -1)
        {
            box.min.x = moui_s32_min(box.min.x, glyph.box.min.x);
            box.min.y = moui_s32_min(box.min.y, last_line_y - bottom_to_line);
            box.max.x = moui_s32_max(box.max.x, glyph.box.max.x);
            box.max.y = moui_s32_max(box.max.y, last_line_y + line_to_top);
        }

        last_line_y = iterator->cursor.position.y;
    }

    return box;
}

moui_print_signature
{
    moui_simple_text_iterator iterator = { font, *cursor, text };

    moui_print_text_iterator(state, &iterator, layer, color);

    *cursor = iterator.cursor;
}

moui_print_text_iterator_signature
{
    moui_set_command_texture(state, layer, iterator->font.texture);

    moui_vec2 texture_scale = { 1.0f / iterator->font.texture.width, 1.0f / iterator->font.texture.height };
    moui_quad_colors colors = moui_to_quad_colors(color);

    moui_glyph glyph;
    while (moui_text_advance(&glyph, iterator))
    {
        if (glyph.index != -1)
            moui_add_texture_quad(state, texture_scale, colors, glyph.box, glyph.texture_box);
    }
}

moui_printf_signature
{
    va_list arguments;
    va_start(arguments, format);
    char text_buffer[1024]; // TODO: could be configurable
    moui_s32 count = vsnprintf(text_buffer, moui_carray_count(text_buffer), format, arguments);
    moui_print(state, font, layer, color, cursor, moui_sl(moui_string) { (moui_u8 *) text_buffer, (moui_usize) count });
    va_end(arguments);
}

// utility

moui_u32_min_signature
{
    if (a <= b)
        return a;
    else
        return b;
}

moui_u32_max_signature
{
    if (a > b)
        return a;
    else
        return b;
}

moui_s32_min_signature
{
    if (a <= b)
        return a;
    else
        return b;
}

moui_s32_max_signature
{
    if (a > b)
        return a;
    else
        return b;
}

moui_f32_min_signature
{
    if (a <= b)
        return a;
    else
        return b;
}

moui_f32_max_signature
{
    if (a > b)
        return a;
    else
        return b;
}

moui_box2_merge_signature
{
    moui_box2 result;
    result.min.x = moui_f32_min(a.min.x, b.min.x);
    result.max.x = moui_f32_max(a.max.x, b.max.x);
    result.min.y = moui_f32_min(a.min.y, b.min.y);
    result.max.y = moui_f32_max(a.max.y, b.max.y);

    return result;
}

moui_box2_cut_signature
{
    moui_box2 result;
    result.min.x = moui_f32_max(a.min.x, b.min.x);
    result.max.x = moui_f32_min(a.max.x, b.max.x);
    result.min.y = moui_f32_max(a.min.y, b.min.y);
    result.max.y = moui_f32_min(a.max.y, b.max.y);

    return result;
}

moui_vec2_resize_signature
{
    moui_f32 length_squared = vector.x * vector.x + vector.y * vector.y;
    moui_f32 scale = new_length / moui_f32_square_root(length_squared);
    vector.x *= scale;
    vector.y *= scale;

    return vector;
}

#if defined __STB_INCLUDE_STB_TRUETYPE_H__

moui_load_font_signature
{
    moui_assert(font->glyphs && font->glyph_count);
    moui_assert((font->texture.width > 0) && (font->texture.height > 0));

    font->height = height;

    {
        stbtt_fontinfo font_info;
        moui_b8 ok = stbtt_InitFont(&font_info, font_data.base, 0);
        moui_assert(ok);

        moui_s32 ascent;
        moui_s32 decent;
        moui_s32 line_gap;
        stbtt_GetFontVMetrics(&font_info, &ascent, &decent, &line_gap);
        moui_f32 scale = stbtt_ScaleForPixelHeight(&font_info, height);

        font->bottom_to_line = -decent * scale;
        font->line_to_top    = ascent * scale;
        font->line_height    = font->bottom_to_line + font->line_to_top;
        font->line_spacing   = font->line_height + line_gap * scale;
    }

    stbtt_bakedchar chars[256];
    moui_assert(font->glyph_count <= moui_carray_count(chars));

    moui_u8_array result_texture = { texture_alpha_buffer.base, (moui_usize) (font->texture.width * font->texture.height) };
    moui_assert(result_texture.count <= texture_alpha_buffer.count);
    moui_s32 max_y = stbtt_BakeFontBitmap(font_data.base, 0, font->height, result_texture.base, font->texture.width, font->texture.height, first_character, font->glyph_count, chars);
    moui_assert(max_y >= 0);

    // lame: flip texture
    for (s32 y = 0; y < (font->texture.height + 1)/ 2; y++)
    {
        for (s32 x = 0; x < font->texture.width; x++)
        {
            u8 alpha = result_texture.base[y * font->texture.width + x];
            result_texture.base[y * font->texture.width + x] = result_texture.base[(font->texture.height - 1 - y) * font->texture.width + x];
            result_texture.base[(font->texture.height - 1 - y) * font->texture.width + x] = alpha;
        }
    }

    for (u32 i = 0; i < font->glyph_count; i++)
    {
        moui_font_glyph *glyph = &font->glyphs[i];
        glyph->code = first_character + i;
        glyph->texture_box.min.x = chars[i].x0;
        glyph->texture_box.max.x = chars[i].x1;
        glyph->texture_box.min.y = font->texture.height - 1 - chars[i].y1;
        glyph->texture_box.max.y = font->texture.height - chars[i].y0;
        glyph->offset.x = chars[i].xoff;
        glyph->offset.y = glyph->texture_box.min.y - glyph->texture_box.max.y - chars[i].yoff;
        glyph->x_advance = chars[i].xadvance;
    }

    return result_texture;
}

#if defined moui_gl_implementation

moui_gl_load_font_signature
{
    moui_u8_array result_texture = moui_load_font(font, texture_alpha_buffer, font_data, height, first_character);

    moui_u32 texture_handle;
    glGenTextures(1, &texture_handle);

    glBindTexture(GL_TEXTURE_2D, texture_handle);
    glTexImage2D(GL_TEXTURE_2D, 0, GL_ALPHA, font->texture.width, font->texture.height, 0, GL_ALPHA, GL_UNSIGNED_BYTE, result_texture.base);

    //GLint swizzle_mask[] = { GL_ONE, GL_ONE, GL_ONE, GL_RED };
    //glTexParameteriv(GL_TEXTURE_2D, GL_TEXTURE_SWIZZLE_RGBA, swizzle_mask);

    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);

    glBindTexture(GL_TEXTURE_2D, 0);

    font->texture.handle = (u8 *) (usize) texture_handle;
}

#if defined(mop_h) && defined(moma_h)

moui_load_font_file_signature
{
    moui_simple_font font = {0};
    font.height = height;

    font.glyph_count = character_count;
    font.glyphs = moma_allocate_array(arena, moui_font_glyph, font.glyph_count);
    font.texture.width  = texture_width;
    font.texture.height = texture_height;


    mop_get_file_byte_count_result file_byte_count_result = mop_get_file_byte_count(platform, path);
    moui_assert(file_byte_count_result.ok);

    mop_u8_array read_file_buffer;
    read_file_buffer.count = file_byte_count_result.byte_count;
    read_file_buffer.base = moma_allocate_bytes(arena, read_file_buffer.count, 1);

    mop_read_file_result result = mop_read_file(platform, read_file_buffer, path);
    moui_assert(result.ok);

    stbtt_bakedchar *chars = moma_allocate_array(arena, stbtt_bakedchar, font.glyph_count);

    {
        stbtt_fontinfo font_info;
        moui_b8 ok = stbtt_InitFont(&font_info, result.data.base, 0);
        moui_assert(ok);

        moui_s32 ascent;
        moui_s32 decent;
        moui_s32 line_gap;
        stbtt_GetFontVMetrics(&font_info, &ascent, &decent, &line_gap);
        moui_f32 scale = stbtt_ScaleForPixelHeight(&font_info, height);

        font.bottom_to_line = -decent * scale;
        font.line_to_top    = ascent * scale;
        font.line_height    = font.bottom_to_line + font.line_to_top;
        font.line_spacing   = font.line_height + line_gap * scale;
    }

    u8 *texture_buffer = moma_allocate_bytes(arena, font.texture.width * font.texture.height, 1);
    stbtt_BakeFontBitmap(result.data.base, 0, font.height, texture_buffer, font.texture.width, font.texture.height, first_character, font.glyph_count, chars);

    // lame: flip texture
    for (s32 y = 0; y < (font.texture.height + 1)/ 2; y++)
    {
        for (s32 x = 0; x < font.texture.width; x++)
        {
            u8 alpha = texture_buffer[y * font.texture.width + x];
            texture_buffer[y * font.texture.width + x] = texture_buffer[(font.texture.height - 1 - y) * font.texture.width + x];
            texture_buffer[(font.texture.height - 1 - y) * font.texture.width + x] = alpha;
        }
    }

    for (u32 i = 0; i < font.glyph_count; i++)
    {
        moui_font_glyph *glyph = &font.glyphs[i];
        glyph->code = first_character + i;
        glyph->texture_box.min.x = chars[i].x0;
        glyph->texture_box.max.x = chars[i].x1;
        glyph->texture_box.min.y = font.texture.height - 1 -  chars[i].y1;
        glyph->texture_box.max.y = font.texture.height - chars[i].y0;
        glyph->offset.x = chars[i].xoff;
        glyph->offset.y = glyph->texture_box.min.y - glyph->texture_box.max.y - chars[i].yoff;
        glyph->x_advance = chars[i].xadvance;
    }

    font.texture = moui_create_texture(font.texture.width, font.texture.height, texture_buffer, moui_true, moui_false);

    moma_reset(arena, read_file_buffer.base);

    return font;
}

#endif

#endif

#endif


#if defined(moma_h)

moui_resize_buffers_signature
{
    moma_free(arena, state->renderer.quads);
    state->renderer.quad_count = moui_u32_max(state->renderer.quad_count, state->renderer.quad_request_count);
    state->renderer.quads = moma_allocate_array(arena, moui_quad, state->renderer.quad_count);

    state->renderer.vertex_count = moui_u32_max(state->renderer.vertex_count, state->renderer.vertex_request_count);
    state->renderer.vertices = moma_allocate_array(arena, moui_vertex, state->renderer.vertex_count);

    // we do a doubling stratagy, since we don't know how many different textures we missed
    if (state->renderer.texture_request_count > state->renderer.texture_count)
        state->renderer.texture_count = moui_u32_max(4, 2 * state->renderer.texture_count);
    state->renderer.textures = moma_allocate_array(arena, moui_texture, state->renderer.texture_count);

    state->renderer.command_count = moui_u32_max(state->renderer.command_count, state->renderer.command_request_count);
    state->renderer.commands = moma_allocate_array(arena, moui_command, state->renderer.command_count);

    moui_set_buffers(state, state->renderer.quad_count, state->renderer.quads, state->renderer.vertex_count, state->renderer.vertices, state->renderer.texture_count, state->renderer.textures, state->renderer.command_count, state->renderer.commands);

    {
        moui_usize previous_item_count = state->renderer.default_atlas.item_count;

        if (state->renderer.default_atlas.item_count < state->renderer.default_atlas.item_request_count)
        {
            state->renderer.default_atlas.item_request_count = moui_u32_min(state->renderer.default_atlas.item_request_count, state->renderer.default_atlas.item_count);
            state->renderer.default_atlas.item_count = moui_u32_max(4, state->renderer.default_atlas.item_count * 4);
        }

        // WARNING: if we change the memory contents, we need to buffer items before the reallocations
        // so far we only recomputed pointers, so the old items pointer should still point to valid data
        moui_atlas_item *items = state->renderer.default_atlas.items;
        state->renderer.default_atlas.items = moma_allocate_array(arena, moui_atlas_item, state->renderer.default_atlas.item_count);
        memmove(state->renderer.default_atlas.items, items, sizeof(moui_atlas_item) * previous_item_count);

        {
            moui_u8_array buffer;
            buffer.count = state->renderer.default_atlas.buffer_request_byte_count;
            buffer.base = moma_allocate_bytes(arena, buffer.count, 1);

            moui_update_atlas(state, buffer);

            moma_free(arena, buffer.base);
        }
    }
}

#endif

#endif
