
// single header ui library

// options before including mo_ui.h:

// #define moui_gl1
// - use open gl 1 rendering
// include stb_turetype.h
// - use stbe_truetype to load font data
// include mo_platform.h and mo_memory_arena.h
// - load font files from path
// #define moui_custom_renderer
// - implement your own rendering api

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

typedef struct
{
    moui_quad *quads;
    moui_u32   quad_count;
    moui_u32   quad_request_count;

    moui_texture *textures;
    moui_u32      texture_count;
    moui_u32      texture_request_count; // we can't really say how many unique textures we have seen, when the buffer count is exceeded

    moui_command *commands;
    moui_u32      command_count;
    moui_u32      command_request_count;
    moui_command  current_command;

    moui_texture white_texture;

    moui_s32 min_layer;
    moui_s32 max_layer;

    moui_vec2 canvas_size;

#if defined DEBUG
    moui_b8 is_recording;
#endif
} moui_renderer_base;

// actual implementation with additional implementation defined data
// moui_renderer contains (moui_renderer_base base) as first field
struct moui_renderer;
typedef struct moui_renderer moui_renderer;

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

    moui_vec2 canvas_size;

    moui_vec2 drag_start_point;
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

// constants

const moui_rgba moui_rgba_white = { 1, 1, 1, 1 };
const moui_rgba moui_rgba_black = { 0, 0, 0, 1 };

// input

#define moui_line_id(index) ((__LINE__ << 12) | index)

#define moui_update_signature void moui_update(moui_state *state, moui_vec2 canvas_size, moui_vec2 cursor, moui_u32 cursor_active_mask)
moui_update_signature;

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

// render

#define moui_init_signature void moui_init(moui_renderer *renderer, moui_quad *quads, moui_u32 quad_count, moui_texture *textures, moui_u32 texture_count, moui_command *commands, moui_u32 command_count)
moui_init_signature;

#define moui_set_buffers_signature void moui_set_buffers(moui_renderer *renderer, moui_quad *quads, moui_u32 quad_count, moui_texture *textures, moui_u32 texture_count, moui_command *commands, moui_u32 command_count)
moui_set_buffers_signature;

#define moui_record_signature void moui_record(moui_renderer *renderer, moui_vec2 canvas_size)
moui_record_signature;

#define moui_set_command_signature moui_b8 moui_set_command(moui_renderer *renderer, moui_s32 layer, moui_u32 texture_index)
moui_set_command_signature;

#define moui_set_command_texture_signature moui_b8 moui_set_command_texture(moui_renderer *renderer, moui_s32 layer, moui_texture texture)
moui_set_command_texture_signature;

#define moui_add_quad_signature moui_b8 moui_add_quad(moui_renderer *renderer, moui_quad quad)
moui_add_quad_signature;

#define moui_to_quad_colors_signature moui_quad_colors moui_to_quad_colors(moui_rgba color)
moui_to_quad_colors_signature;

#define moui_add_texture_quad_signature void moui_add_texture_quad(moui_renderer *renderer, moui_vec2 texture_scale, moui_quad_colors colors, moui_box2 box, moui_box2 texture_box)
moui_add_texture_quad_signature;

#define moui_texture_box_signature void moui_texture_box(moui_renderer *renderer, moui_s32 layer, moui_texture texture, moui_quad_colors colors, moui_box2 box, moui_box2 texture_box)
moui_texture_box_signature;

#define moui_box_signature void moui_box(moui_renderer *renderer, moui_s32 layer, moui_quad_colors colors, moui_box2 box)
moui_box_signature;

#define moui_text_cursor_at_line_signature moui_text_cursor moui_text_cursor_at_line(moui_vec2 position)
moui_text_cursor_at_line_signature;

#define moui_text_advance_signature moui_b8 moui_text_advance(moui_glyph *out_glyph, moui_simple_text_iterator *iterator)
moui_text_advance_signature;

#define moui_get_text_box_signature moui_box2 moui_get_text_box(moui_simple_text_iterator *iterator)
moui_get_text_box_signature;

#define moui_print_text_iterator_signature void moui_print_text_iterator(moui_renderer *renderer, moui_simple_text_iterator *iterator, moui_s32 layer, moui_rgba color)
moui_print_text_iterator_signature;

#define moui_print_signature void moui_print(moui_renderer *renderer, moui_simple_font font, moui_s32 layer, moui_rgba color, moui_text_cursor *cursor, moui_string text)
moui_print_signature;

#define moui_printf_signature void moui_printf(moui_renderer *renderer, moui_simple_font font, moui_s32 layer, moui_rgba color, moui_text_cursor *cursor, moui_cstring format, ...)
moui_printf_signature;

// optional call before moui_execute to setup render api correctly, if you don't want to control it yourself
#define moui_frame_begin_signature void moui_frame_begin(moui_renderer *renderer)
moui_frame_begin_signature;

#define moui_execute_signature void moui_execute(moui_renderer *renderer)
moui_execute_signature;

// utility

#define moui_u32_min_signature moui_u32 moui_u32_min(moui_u32 a, moui_u32 b)
moui_u32_min_signature;

#define moui_u32_max_signature moui_u32 moui_u32_max(moui_u32 a, moui_u32 b)
moui_u32_max_signature;

#define moui_s32_min_signature moui_s32 moui_s32_min(moui_s32 a, moui_s32 b)
moui_s32_min_signature;

#define moui_s32_max_signature moui_s32 moui_s32_max(moui_s32 a, moui_s32 b)
moui_s32_max_signature;

// optional interface

#if defined __STB_INCLUDE_STB_TRUETYPE_H__

// loads glyph data into font from font_data
// font_data should be a loaded font file
// we assume font->glyphs and font->glyph_count are allready allocated
// we assume font->texture.width and font->texture.height is set properly
// writes alpha values into texture_alpha_buffer and returns how much of the buffer was used
#define moui_load_font_signature moui_u8_array moui_load_font(moui_simple_font *font, moui_u8_array texture_alpha_buffer, moui_u8_array font_data, s32 height, u32 first_character)
moui_load_font_signature;

#if defined moui_gl1

#define moui_gl_load_font_signature void moui_gl_load_font(moui_simple_font *font, moui_u8_array texture_alpha_buffer, moui_u8_array font_data, s32 height, u32 first_character)
moui_gl_load_font_signature;

#if defined(mop_h) && defined(moma_h)

#define moui_load_font_file_signature moui_simple_font moui_load_font_file(mop_platform *platform, moma_arena *arena, moui_cstring path, moui_s32 texture_width, moui_s32 texture_height, moui_s32 height, moui_u32 first_character, moui_u32 character_count)
moui_load_font_file_signature;

#endif

#endif

#endif

#if defined(moma_h)

#define moui_resize_buffers_signature void moui_resize_buffers(moui_renderer *renderer, moma_arena *arena)
moui_resize_buffers_signature;

#endif

#ifdef __cplusplus
}
#endif

#endif

#if defined moui_implementation
#undef moui_implementation

// input

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

    state->canvas_size = canvas_size;
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
        result.is_active = (state->active_mask & active_mask) != 0;

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

        result.is_active    = moui_true;
        result.active_enter = moui_true;
    }

    if (is_hot && (state->next_hot_priority > hot_priority))
    {
        state->next_hot_id = id;
        state->next_hot_priority = hot_priority;
    }

    result.is_hot = is_hot && (state->hot_id == id);

    return result;
}

moui_button_signature
{
    moui_item_state result = moui_item(state, id, is_hot, hot_priority, active_mask);
    if (result.active_exit && result.is_hot)
        return state->active_mask & ~active_mask;
    else
        return 0;
}

moui_drag_item_signature
{
    moui_item_state result = moui_item(state, id, is_hot, hot_priority, active_mask);

    if (result.active_enter)
    {
        state->drag_start_point.x = point->x - state->cursor.x;
        state->drag_start_point.y = point->y - state->cursor.y;
    }

    if (result.is_active || result.active_exit)
    {
        point->x = state->drag_start_point.x + state->cursor.x;
        point->y = state->drag_start_point.y + state->cursor.y;
    }

    if (result.active_exit)
        return state->active_mask & ~active_mask;
    else
        return 0;
}

// render

#if defined moui_gl1

#if defined(_WIN32) || defined(WIN32)

#include <windows.h>

#pragma comment(lib, "gdi32")
#pragma comment(lib, "user32")
#pragma comment(lib, "opengl32")

#else

#error moui_gl1 not implemented for current platform

#endif

#include <gl/gl.h>

struct moui_renderer
{
    moui_renderer_base base;

    HWND  win32_gl_init_window;
    HDC   win32_gl_init_device_context;
    HGLRC win32_gl_context;
    HDC   win32_gl_current_device_context;
};

#define moui_gl_ckeck(x) x; moui_gl_error(# x, __FUNCTION__, __LINE__)

void moui_gl_error(moui_cstring command, moui_cstring function, moui_u32 line)
{
    struct {
        moui_u32     code;
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

void moui_win32_gl_window_bind(moui_renderer *renderer, HDC device_context)
{
    moui_assert(renderer->win32_gl_context);
    wglMakeCurrent(device_context, renderer->win32_gl_context);

    renderer->win32_gl_current_device_context = device_context;
}

void moui_win32_gl_frame_end(moui_renderer *renderer, HDC device_context, moui_b8 is_last_window_in_frame)
{
    moui_assert(renderer->win32_gl_current_device_context == device_context);
    SwapBuffers(device_context);
}

moui_init_signature
{
    *renderer = moui_struct_literal(moui_renderer) {0};
    moui_set_buffers(renderer, quads, quad_count, textures, texture_count, commands, command_count);

    WNDCLASS window_class = {0};
    window_class.lpfnWndProc   = DefWindowProc;
    window_class.hInstance     = (HINSTANCE) GetModuleHandleA(moui_null);
    window_class.lpszClassName = "moui init window class";
    moui_require(RegisterClass(&window_class));

    renderer->win32_gl_init_window = CreateWindowExA(0, window_class.lpszClassName, window_class.lpszClassName, WS_OVERLAPPEDWINDOW, CW_USEDEFAULT, CW_USEDEFAULT, CW_USEDEFAULT, CW_USEDEFAULT, moui_null, moui_null, window_class.hInstance, moui_null);
    moui_assert(renderer->win32_gl_init_window);

    renderer->win32_gl_init_device_context = GetDC(renderer->win32_gl_init_window);
    moui_require(renderer->win32_gl_init_device_context);

    moui_win32_gl_window_init(renderer->win32_gl_init_device_context);

    renderer->win32_gl_context = wglCreateContext(renderer->win32_gl_init_device_context);
    moui_require(renderer->win32_gl_context);

    wglMakeCurrent(renderer->win32_gl_init_device_context, renderer->win32_gl_context);

    {
        moui_u32 texture_handle;
        glGenTextures(1, &texture_handle);

        u8 white = 255;
        glBindTexture(GL_TEXTURE_2D, texture_handle);
        glTexImage2D(GL_TEXTURE_2D, 0, GL_ALPHA, 1, 1, 0, GL_ALPHA, GL_UNSIGNED_BYTE, &white);

        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);

        glBindTexture(GL_TEXTURE_2D, 0);

        renderer->base.white_texture.width  = 1;
        renderer->base.white_texture.height = 1;
        renderer->base.white_texture.handle = (u8 *) (usize) texture_handle;
    }

    // enable v-sync
    //wglSwapIntervalEXT(1);
}

moui_record_signature
{
    moui_assert(!renderer->base.is_recording);

#if defined DEBUG
    renderer->base.debug_is_recording = moui_true;
#endif

    renderer->base.quad_request_count = 0;
    renderer->base.texture_request_count = 0;
    renderer->base.command_request_count = 0;
    renderer->base.canvas_size = canvas_size;

    renderer->base.current_command.layer = 0;
    renderer->base.current_command.texture_index = 0; // TODO: generate white texture
    renderer->base.current_command.quad_count = 0;
}

moui_frame_begin_signature
{
    moui_gl_ckeck(glViewport(0, 0, renderer->base.canvas_size.x, renderer->base.canvas_size.y));
    moui_gl_ckeck(glScissor(0, 0, renderer->base.canvas_size.x, renderer->base.canvas_size.y));

    moui_gl_ckeck(glClearColor(0, 0, 0, 1));
    moui_gl_ckeck(glClear(GL_COLOR_BUFFER_BIT));
}

moui_execute_signature
{
    moui_assert(renderer->base.is_recording);

#if defined DEBUG
    renderer->base.debug_is_recording = moui_true;
#endif

    moui_gl_ckeck(glEnable(GL_BLEND));
    moui_gl_ckeck(glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA));

    moui_u32 quad_offset = 0;

    // force applying last command
    moui_set_command(renderer, renderer->base.current_command.layer + 1, 0);

    moui_u32 command_count = moui_u32_min(renderer->base.command_request_count, renderer->base.command_count);

    moui_vec2 gl_viewport_scale = { 2.0f / renderer->base.canvas_size.x, 2.0f / renderer->base.canvas_size.y };

    // TODO: sort by layer

    for (moui_u32 command_index = 0; command_index < command_count; command_index++)
    {
        moui_command command = renderer->base.commands[command_index];

        if (quad_offset + command.quad_count > renderer->base.quad_count)
            break;

        moui_u32 texture_handle = (moui_u32) (moui_usize) renderer->base.textures[command.texture_index].handle;
        if (texture_handle)
        {
            moui_gl_ckeck(glEnable(GL_TEXTURE_2D));
        }
        else
        {
            moui_gl_ckeck(glDisable(GL_TEXTURE_2D));
        }

        moui_gl_ckeck(glBindTexture(GL_TEXTURE_2D, texture_handle));

        glBegin(GL_TRIANGLES);

        for (moui_u32 quad_index = 0; quad_index < command.quad_count; quad_index++)
        {
            moui_vertex vertices[6];

            vertices[0] = renderer->base.quads[quad_offset + quad_index].vertices[0];
            vertices[1] = renderer->base.quads[quad_offset + quad_index].vertices[1];
            vertices[2] = renderer->base.quads[quad_offset + quad_index].vertices[2];

            vertices[3] = vertices[0];
            vertices[4] = vertices[2];
            vertices[5] = renderer->base.quads[quad_offset + quad_index].vertices[3];

            for (moui_u32 vertex_index = 0; vertex_index < moui_carray_count(vertices); vertex_index++)
            {
                glTexCoord2f(vertices[vertex_index].uv.x, vertices[vertex_index].uv.y);
                glColor4f(vertices[vertex_index].color.r, vertices[vertex_index].color.g, vertices[vertex_index].color.b, vertices[vertex_index].color.a);
                glVertex2f(vertices[vertex_index].position.x * gl_viewport_scale.x - 1, vertices[vertex_index].position.y * gl_viewport_scale.y - 1);
            }
        }

        moui_gl_ckeck(glEnd());

        quad_offset += command.quad_count;
    }
}

#else !defined moui_custom_renderer

struct moui_renderer
{
    moui_renderer_base base;
};

moui_init_signature
{
    moui_assert(0);
}

moui_record_signature
{
    moui_assert(0);
}

moui_frame_begin_signature
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
    renderer->base.quads      = quads;
    renderer->base.quad_count = quad_count;

    renderer->base.textures      = textures;
    renderer->base.texture_count = texture_count;

    renderer->base.commands      = commands;
    renderer->base.command_count = command_count;
}

moui_set_command_signature
{
    // append to current command
    if ((renderer->base.current_command.layer == layer) && (renderer->base.current_command.texture_index == texture_index))
        return moui_true;

    moui_b8 ok = moui_true;
    if (renderer->base.current_command.quad_count)
    {
        if (renderer->base.command_request_count < renderer->base.command_count)
            renderer->base.commands[renderer->base.command_request_count] = renderer->base.current_command;
        else
            ok = moui_false;

        renderer->base.command_request_count++;
    }

    renderer->base.current_command.layer         = layer;
    renderer->base.current_command.texture_index = texture_index;
    renderer->base.current_command.quad_count    = 0;

    return ok;
}

moui_set_command_texture_signature
{
    moui_u32 texture_count = moui_u32_min(renderer->base.texture_request_count, renderer->base.texture_count);
    moui_u32 texture_index = 0;
    for (; texture_index < texture_count; texture_index++)
    {
        if (renderer->base.textures[texture_index].handle == texture.handle)
        {
            moui_assert(renderer->base.textures[texture_index].width  == texture.width);
            moui_assert(renderer->base.textures[texture_index].height == texture.height);
            break;
        }
    }

    if (texture_index == texture_count)
    {
        if (renderer->base.texture_request_count < renderer->base.texture_count)
            renderer->base.textures[texture_index] = texture;
        else
            texture_index = renderer->base.texture_request_count;

        renderer->base.texture_request_count++;
    }

    return moui_set_command(renderer, layer, texture_index);
}

moui_add_quad_signature
{
    moui_assert(renderer->base.command_request_count);

    renderer->base.current_command.quad_count++;

    moui_b8 ok = moui_false;
    if (renderer->base.quad_request_count < renderer->base.quad_count)
    {
        renderer->base.quads[renderer->base.quad_request_count] = quad;
        ok = moui_true;
    }

    renderer->base.quad_request_count++;

    return ok;
}

moui_to_quad_colors_signature
{
    return moui_struct_literal(moui_quad_colors) { color, color, color, color };
}

moui_add_texture_quad_signature
{
    moui_quad quad;
    quad.vertices[0].color    = colors.values[0];
    quad.vertices[0].position = moui_struct_literal(moui_vec2) { box.min.x, box.min.y };
    quad.vertices[0].uv       = moui_struct_literal(moui_vec2) { texture_box.min.x * texture_scale.x, texture_box.min.y * texture_scale.y };

    quad.vertices[1].color    = colors.values[1];
    quad.vertices[1].position = moui_struct_literal(moui_vec2) { box.max.x, box.min.y };
    quad.vertices[1].uv       = moui_struct_literal(moui_vec2) { texture_box.max.x * texture_scale.x, texture_box.min.y * texture_scale.y };

    quad.vertices[2].color    = colors.values[2];
    quad.vertices[2].position = moui_struct_literal(moui_vec2) { box.max.x, box.max.y };
    quad.vertices[2].uv       = moui_struct_literal(moui_vec2) { texture_box.max.x * texture_scale.x, texture_box.max.y * texture_scale.y };

    quad.vertices[3].color    = colors.values[3];
    quad.vertices[3].position = moui_struct_literal(moui_vec2) { box.min.x, box.max.y };
    quad.vertices[3].uv       = moui_struct_literal(moui_vec2) { texture_box.min.x * texture_scale.x, texture_box.max.y * texture_scale.y };

    moui_add_quad(renderer, quad);
}

moui_texture_box_signature
{
    moui_set_command_texture(renderer, layer, texture);

    moui_vec2 texture_scale = { 1.0f / texture.width, 1.0f / texture.height };
    moui_add_texture_quad(renderer, texture_scale, colors, box, texture_box);
}

moui_box_signature
{
    moui_texture_box(renderer, layer, renderer->base.white_texture, colors, box, moui_struct_literal(moui_box2) {0});
}

moui_text_cursor_at_line_signature
{
    return moui_struct_literal(moui_text_cursor) { position, position.x };
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
    moui_box2 box = { iterator->cursor.position, iterator->cursor.position };
    // box.min.y -= iterator.font.bottom_margin;
    box.max.y += iterator->font.line_spacing;

    moui_glyph glyph;
    while (moui_text_advance(&glyph, iterator))
    {
        if (glyph.index != -1)
        {
            box.min.x = moui_s32_min(box.min.x, glyph.box.min.x);
            box.min.y = moui_s32_min(box.min.y, glyph.box.min.y);
            box.max.x = moui_s32_max(box.max.x, glyph.box.max.x);
            box.max.y = moui_s32_max(box.max.y, glyph.box.max.y);
        }
    }

    return box;
}

moui_print_signature
{
    moui_simple_text_iterator iterator = { font, *cursor, text };

    moui_print_text_iterator(renderer, &iterator, layer, color);

    *cursor = iterator.cursor;
}

moui_print_text_iterator_signature
{
    moui_set_command_texture(renderer, layer, iterator->font.texture);

    moui_vec2 texture_scale = { 1.0f / iterator->font.texture.width, 1.0f / iterator->font.texture.height };
    moui_quad_colors colors = moui_to_quad_colors(color);

    moui_glyph glyph;
    while (moui_text_advance(&glyph, iterator))
    {
        if (glyph.index != -1)
            moui_add_texture_quad(renderer, texture_scale, colors, glyph.box, glyph.texture_box);
    }
}

moui_printf_signature
{
    va_list arguments;
    va_start(arguments, format);
    char text_buffer[1024]; // TODO: could be configurable
    moui_s32 count = vsnprintf(text_buffer, moui_carray_count(text_buffer), format, arguments);
    moui_print(renderer, font, layer, color, cursor, moui_struct_literal(moui_string) { (moui_u8 *) text_buffer, (moui_usize) count });
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

#if defined __STB_INCLUDE_STB_TRUETYPE_H__

moui_load_font_signature
{
    moui_assert(font->glyphs && font->glyph_count);
    moui_assert((font->width > 0) && (font->height > 0));

    font->height = height;
    font->line_spacing = height;

    stbtt_bakedchar chars[256];
    moui_assert(font->glyph_count <= moui_carray_count(font->glyph_count));

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
        glyph->texture_box.min.y = font->texture.height - chars[i].y1;
        glyph->texture_box.max.y = font->texture.height - chars[i].y0;
        glyph->offset.x = chars[i].xoff;
        glyph->offset.y = glyph->texture_box.min.y - glyph->texture_box.max.y - chars[i].yoff;
        glyph->x_advance = chars[i].xadvance;
    }

    return result_texture;
}

#if defined moui_gl1

moui_gl_load_font_signature
{
    moui_u8_array result_texture = moui_load_font(font, texture_alpha_buffer, font_data, height, first_character);

    moui_u32 texture_handle;
    glGenTextures(1, &texture_handle);

    glBindTexture(GL_TEXTURE_2D, texture_handle);
    glTexImage2D(GL_TEXTURE_2D, 0, GL_ALPHA, font->texture.width, font->texture.height, 0, GL_ALPHA, GL_UNSIGNED_BYTE, result_texture.base);

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
    font.line_spacing = font.height;

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
        glyph->texture_box.min.y = font.texture.height - chars[i].y1;
        glyph->texture_box.max.y = font.texture.height - chars[i].y0;
        glyph->offset.x = chars[i].xoff;
        glyph->offset.y = glyph->texture_box.min.y - glyph->texture_box.max.y - chars[i].yoff;
        glyph->x_advance = chars[i].xadvance;
    }

    u32 texture_handle;
    glGenTextures(1, &texture_handle);

    glBindTexture(GL_TEXTURE_2D, texture_handle);
    glTexImage2D(GL_TEXTURE_2D, 0, GL_ALPHA, font.texture.width, font.texture.height, 0, GL_ALPHA, GL_UNSIGNED_BYTE, texture_buffer);

    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);

    glBindTexture(GL_TEXTURE_2D, 0);

    font.texture.handle = (u8 *) (usize) texture_handle;

    moma_reset(arena, read_file_buffer.base);

    return font;
}

#endif

#endif

#endif


#if defined(moma_h)

moui_resize_buffers_signature
{
    moma_free(arena, renderer->base.quads);
    renderer->base.quad_count = moui_u32_max(renderer->base.quad_count, renderer->base.quad_request_count);
    renderer->base.quads = moma_allocate_array(arena, moui_quad, renderer->base.quad_count);

    // we do a doubling stratagy, since we don't know how many different textures we missed
    if (renderer->base.texture_request_count > renderer->base.texture_count)
        renderer->base.texture_count = moui_u32_max(4, 2 * renderer->base.texture_count);
    renderer->base.textures = moma_allocate_array(arena, moui_texture, renderer->base.texture_count);

    renderer->base.command_count = moui_u32_max(renderer->base.command_count, renderer->base.command_request_count);
    renderer->base.commands = moma_allocate_array(arena, moui_command, renderer->base.command_count);

    moui_set_buffers(renderer, renderer->base.quads, renderer->base.quad_count, renderer->base.textures, renderer->base.texture_count, renderer->base.commands, renderer->base.command_count);
}

#endif

#endif