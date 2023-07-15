
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
    moui_f32 x;
    moui_f32 y;
} moui_vec2;

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

struct moui_renderer;
typedef struct moui_renderer moui_renderer;

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

    moui_point canvas_size;

    moui_point drag_start_point;
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

// input

#define moui_line_id(index) ((__LINE__ << 12) | index)

#define moui_update_signature void moui_update(moui_state *state, moui_point canvas_size, moui_point cursor, moui_u32 cursor_active_mask)
moui_update_signature;

#define moui_item_is_active_signature moui_b8 moui_item_is_active(moui_state *state, moui_id id)
moui_item_is_active_signature;

#define moui_item_is_hot_signature moui_b8 moui_item_is_hot(moui_state *state, moui_id id)
moui_item_is_hot_signature;

#define moui_item_signature moui_item_state moui_item(moui_state *state, moui_id id, moui_b8 is_hot, moui_u32 hot_priority, moui_u32 active_mask)
moui_item_signature;

#define moui_button_signature moui_u32 moui_button(moui_state *state, moui_id id, moui_b8 is_hot, moui_u32 hot_priority, moui_u32 active_mask)
moui_button_signature;

#define moui_drag_item_signature moui_u32 moui_drag_item(moui_state *state, moui_id id, moui_b8 is_hot, moui_u32 hot_priority, moui_u32 active_mask, moui_point *point)
moui_drag_item_signature;

// render

#define moui_render_init_signature void moui_render_init(moui_renderer *renderer, moui_quad *quads, moui_u32 quad_count, moui_texture *textures, moui_u32 texture_count, moui_command *commands, moui_u32 command_count)
moui_render_init_signature;

#define moui_render_set_buffers_signature void moui_render_set_buffers(moui_renderer *renderer, moui_quad *quads, moui_u32 quad_count, moui_texture *textures, moui_u32 texture_count, moui_command *commands, moui_u32 command_count)
moui_render_set_buffers_signature;

#define moui_render_begin_signature void moui_render_begin(moui_renderer *renderer, moui_vec2 canvas_size)
moui_render_begin_signature;

#define moui_render_set_command_signature moui_b8 moui_render_set_command(moui_renderer *renderer, moui_s32 layer, moui_u32 texture_index)
moui_render_set_command_signature;

#define moui_render_set_command_texture_signature moui_b8 moui_render_set_command_texture(moui_renderer *renderer, moui_s32 layer, moui_texture texture)
moui_render_set_command_texture_signature;

#define moui_render_add_quad_signature moui_b8 moui_render_add_quad(moui_renderer *renderer, moui_quad quad)
moui_render_add_quad_signature;

#define moui_render_end_signature void moui_render_end(moui_renderer *renderer)
moui_render_end_signature;

// utility

#define moui_u32_min_signature moui_u32 moui_u32_min(moui_u32 a, moui_u32 b)
moui_u32_min_signature;

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


#if defined moui_gl_implementation
#undef moui_gl_implementation

struct moui_renderer
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

    moui_s32 min_layer;
    moui_s32 max_layer;

    moui_vec2 canvas_size;

    HWND  win32_gl_init_window;
    HDC   win32_gl_init_device_context;
    HGLRC win32_gl_context;

    moui_vec2 gl_viewport_scale;
} ;

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
        moui_b8 found = false;
        for (moui_u32 i = 0; i < moui_carray_count(errors); i++)
        {
            if (errors[i].code == error)
            {
                printf("%s,%u: gl error %s %s %s\n", function, line, command, errors[i].name, errors[i].message);
                found = true;
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

    s32 format = ChoosePixelFormat(device_context, &format_descriptor);
    require(SetPixelFormat(device_context, format, &format_descriptor));
}

moui_render_init_signature
{
    moui_render_set_buffers(renderer, quads, quad_count, textures, texture_count, commands, command_count);

    WNDCLASS window_class = {0};
    window_class.lpfnWndProc   = DefWindowProc;
    window_class.hInstance     = (HINSTANCE) GetModuleHandleA(null);
    window_class.lpszClassName = "moui init window class";
    moui_require(RegisterClass(&window_class));

    renderer->win32_gl_init_window = CreateWindowExA(0, window_class.lpszClassName, window_class.lpszClassName, WS_OVERLAPPEDWINDOW, CW_USEDEFAULT, CW_USEDEFAULT, CW_USEDEFAULT, CW_USEDEFAULT, null, null, (HINSTANCE) GetModuleHandleA(null), null);
    moui_assert(renderer->win32_gl_init_window);

    renderer->win32_gl_init_device_context = GetDC(renderer->win32_gl_init_window);
    moui_require(renderer->win32_gl_init_device_context);

    moui_win32_gl_window_init(renderer->win32_gl_init_device_context);

    renderer->win32_gl_context = wglCreateContext(renderer->win32_gl_init_device_context);
    moui_require(renderer->win32_gl_context);

    wglMakeCurrent(renderer->win32_gl_init_device_context, renderer->win32_gl_context);

    // enable v-sync
    //wglSwapIntervalEXT(1);
}

moui_render_begin_signature
{
    renderer->quad_request_count = 0;
    renderer->texture_request_count = 0;
    renderer->command_request_count = 0;
    renderer->canvas_size = canvas_size;

    renderer->gl_viewport_scale = moui_struct_literal(moui_vec2) { 2.0f / canvas_size.x, 2.0f / canvas_size.y };
}

moui_render_end_signature
{
    moui_gl_ckeck(glEnable(GL_BLEND));
    moui_gl_ckeck(glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA));

    u32 quad_offset = 0;

    u32 command_count = moui_u32_min(renderer->command_request_count, renderer->command_count);

    // TODO: sort by layer

    for (u32 command_index = 0; command_index < command_count; command_index++)
    {
        moui_command command = renderer->commands[command_index];

        if (quad_offset + command.quad_count > renderer->quad_count)
            break;

        moui_u32 texture_handle = (moui_u32) (moui_usize) renderer->textures[command.texture_index].handle;
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

        for (u32 quad_index = 0; quad_index < command.quad_count; quad_index++)
        {
            moui_vertex vertices[6];

            vertices[0] = renderer->quads[quad_offset].vertices[0];
            vertices[1] = renderer->quads[quad_offset].vertices[1];
            vertices[2] = renderer->quads[quad_offset].vertices[2];

            vertices[3] = vertices[0];
            vertices[4] = vertices[2];
            vertices[5] = renderer->quads[quad_offset].vertices[3];

            for (u32 vertex_index = 0; vertex_index < moui_carray_count(vertices); vertex_index)
            {
                glTexCoord2f(vertices[vertex_index].uv.x, vertices[vertex_index].uv.y);
                glColor4f(vertices[vertex_index].color.r, vertices[vertex_index].color.g, vertices[vertex_index].color.b, vertices[vertex_index].color.a);
                glVertex2f(vertices[vertex_index].position.x, vertices[vertex_index].position.y);
            }
        }

        moui_gl_ckeck(glEnd());

        quad_offset += command.quad_count;
    }
}

#else // rendering is optional

struct moui_renderer
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

    moui_s32 min_layer;
    moui_s32 max_layer;
} ;

moui_render_init_signature
{
    moui_assert(0);
}

moui_render_begin_signature
{
    moui_assert(0);
}

moui_render_end_signature
{
    moui_assert(0);
}

#endif

moui_render_set_buffers_signature
{
    renderer->quads      = quads;
    renderer->quad_count = quad_count;

    renderer->textures      = textures;
    renderer->texture_count = texture_count;

    renderer->commands      = commands;
    renderer->command_count = command_count;
}

moui_render_set_command_signature
{
    // append to current command
    if ((renderer->current_command.layer == layer) && (renderer->current_command.texture_index == texture_index))
        return moui_true;

    moui_b8 ok = moui_true;
    if (renderer->command_request_count <= renderer->command_count)
    {
        renderer->commands[renderer->command_request_count - 1] = renderer->current_command;
        ok = moui_false;
    }

    renderer->command_request_count++;

    renderer->current_command.layer         = layer;
    renderer->current_command.texture_index = texture_index;
    renderer->current_command.quad_count    = 0;

    return ok;
}

moui_render_set_command_texture_signature
{
    moui_u32 texture_count = moui_u32_min(renderer->texture_request_count, renderer->texture_count);
    moui_u32 texture_index = 0;
    for (; texture_index < texture_count; texture_index++)
    {
        if (renderer->textures[texture_index].handle == texture.handle)
        {
            moui_assert(renderer->textures[texture_index].width  == texture.width);
            moui_assert(renderer->textures[texture_index].height == texture.height);
            break;
        }
    }

    if (texture_index == texture_count)
    {
        if (renderer->texture_request_count < renderer->texture_count)
            renderer->textures[texture_index] = texture;
        else
            texture_index = renderer->texture_request_count;

        renderer->texture_request_count++;
    }

    return moui_render_set_command(renderer, layer, texture_index);
}

moui_render_add_quad_signature
{
    moui_assert(renderer->command_request_count);

    renderer->current_command.quad_count++;

    moui_b8 ok = moui_false;
    if (renderer->quad_request_count < renderer->quad_count)
    {
        renderer->quads[renderer->quad_request_count] = quad;
        ok = moui_true;
    }

    renderer->quad_request_count++;

    return ok;
}

// utility

moui_u32_min_signature
{
    if (a <= b)
        return a;
    else
        return b;
}


#endif