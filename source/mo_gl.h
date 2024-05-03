
#if !defined mogl_h
#define mogl_h

#ifdef __cplusplus
extern "C" {
#endif

#if !defined mogl_assert_message
#define mogl_assert_message(...)
#endif

#if !defined mogl_require_message
#define mogl_require_message(...)
#endif

#define mogl_assert(x)  mogl_assert_message(x, "")
#define mogl_require(x) mogl_require_message(x, "")

#define mogl_cases_complete(format, ...) default: mogl_assert_message(mogl_false, "unhandled switch case " format, __VA_ARGS__)

typedef unsigned char      mogl_u8;
typedef unsigned int       mogl_u32;
typedef unsigned long long mogl_u64;

typedef signed int       mogl_s32;
typedef signed long long mogl_s64;

typedef float  mogl_f32;
typedef double mogl_f64;

typedef mogl_u8 mogl_b8;

typedef mogl_u64 mogl_usize;

typedef char * mogl_cstring;

#define mogl_null 0

const mogl_b8 mogl_false = 0;
const mogl_b8 mogl_true  = 1;

#define mogl_carray_count(static_array) (sizeof(static_array) / sizeof(*(static_array)))

#if !defined mogl_u8_array_type
#define mogl_u8_array_type mogl_u8_array

typedef struct
{
    mogl_u8    *base;
    mogl_usize count;
} mogl_u8_array;

#else

typedef mogl_u8_array_type mogl_u8_array;

#endif

typedef mogl_u8_array mogl_string;

#ifdef __cplusplus
#define mogl_struct_literal(name)
#else
#define mogl_struct_literal(name) (name)
#endif

#define mogl_s(static_string) mogl_struct_literal(string) { static_string, mogl_carray_count(static_string) - 1 }
#define mogl_fs(text) (mogl_s32) (text).count, (char *) (text).base

struct mogl_state;
typedef struct mogl_state mogl_state;

struct mogl_platform_window;
typedef struct mogl_platform_window mogl_platform_window;

struct mogl_window;
typedef struct mogl_window mogl_window;

extern mogl_state global_mogl_state;

#define mogl_init_signature void mogl_init(mogl_state *state)
mogl_init_signature;

#define mogl_window_init_signature void mogl_window_init(mogl_state *state, mogl_window *window, mogl_platform_window platform_window)
mogl_window_init_signature;

#ifdef __cplusplus
}
#endif

#endif

#if defined mogl_implementation
#undef mogl_implementation

#include "mo_gl_bindings.h"

#if defined(_WIN32) || defined(WIN32)

#include <windows.h>

#include "mo_gl_win32_bindings.h"

#pragma comment(lib, "gdi32")
#pragma comment(lib, "user32")
#pragma comment(lib, "opengl32")

struct mogl_state
{
    HWND    init_window_handle;
    HDC     init_device_context;
    HGLRC   gl_context;
    mogl_b8 is_modern_context;
};

struct mogl_platform_window
{
    HDC device_context;
};

struct mogl_window
{
    mogl_u8 unused;
};

void mogl_win32_base_window_init(HDC device_context)
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

    mogl_s32 format = ChoosePixelFormat(device_context, &format_descriptor);
    mogl_require(SetPixelFormat(device_context, format, &format_descriptor));
}

void mogl_win32_modern_window_init(HDC device_context)
{
    mogl_assert(mogl_false);
}

mogl_window_init_signature
{
    mogl_assert(state->gl_context);

    if (state->is_modern_context)
        mogl_win32_modern_window_init(platform_window.device_context);
    else
        mogl_win32_base_window_init(platform_window.device_context);

    wglMakeCurrent(platform_window.device_context, state->gl_context);
}

mogl_init_signature
{
    WNDCLASS window_class = {0};
    window_class.lpfnWndProc   = DefWindowProc;
    window_class.hInstance     = (HINSTANCE) GetModuleHandleA(mogl_null);
    window_class.lpszClassName = "mogl init window class";
    mogl_require(RegisterClass(&window_class));

    state->init_window_handle = CreateWindowExA(0, window_class.lpszClassName, window_class.lpszClassName, WS_OVERLAPPEDWINDOW, CW_USEDEFAULT, CW_USEDEFAULT, CW_USEDEFAULT, CW_USEDEFAULT, mogl_null, mogl_null, (HINSTANCE) GetModuleHandleA(mogl_null), mogl_null);
    mogl_assert(state->init_window_handle);

    state->init_device_context = GetDC(state->init_window_handle);
    mogl_require(state->init_device_context);

    mogl_win32_base_window_init(state->init_device_context);

    state->gl_context = wglCreateContext(state->init_device_context);
    mogl_require(state->gl_context);

    wglMakeCurrent(state->init_device_context, state->gl_context);

    // enable v-sync
    //wglSwapIntervalEXT(1);
}

#elif defined(__EMSCRIPTEN__)

//#include <EGL/egl.h>

#include "mogl_egl_bindings.h"

struct mogl_state
{
    EGLDisplay display;
    EGLConfig  config;
    EGLSurface surface;
    EGLContext gl_context;
};

struct mogl_platform_window
{
    mogl_u8 unused;
};

struct mogl_window
{

    EGLSurface surface;
};

mogl_init_signature
{
    state->display = eglGetDisplay(EGL_DEFAULT_DISPLAY);
    mogl_require(state->display != EGL_NO_DISPLAY);

    mogl_require(eglInitialize(state->display, mogl_null, mogl_null));

    {
        mogl_s32 attributes[] =
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

        mogl_s32 config_count;
        mogl_require(eglGetConfigs(display, mogl_null, 0, &config_count));
        mogl_require(eglChooseConfig(display, attributes, &state->config, 1, &config_count));
    }

    state->init_surface = eglCreateWindowSurface(state->display, state->config, 0, mogl_null);
    mogl_require(state->init_surface != EGL_NO_SURFACE);

    {
        mogl_s32 attributes[] =
        {
            EGL_CONTEXT_CLIENT_VERSION,       2,
            //EGL_CONTEXT_OPENGL_PROFILE_MASK, EGL_CONTEXT_OPENGL_CORE_PROFILE_BIT,
            //EGL_CONTEXT_OPENGL_DEBUG,        EGL_TRUE,
            EGL_NONE,
            EGL_NONE
        };

        state->gl_context = eglCreateContext(state->display, state->config, EGL_NO_CONTEXT, attributes);
        mogl_require(state->gl_context != EGL_NO_CONTEXT);
    }

    mogl_require(eglMakeCurrent(state->display, state->init_surface, state->init_surface, state->gl_context));
}

mogl_window_init_signature
{
    window->surface = eglCreateWindowSurface(state->display, state->config, 0, mogl_null);
    mogl_require(window->surface != EGL_NO_SURFACE);

    mogl_require(eglMakeCurrent(state->display, window->surface, window->surface, state->gl_context));
}

#else
#error unknown plaform
#endif

#if !defined gl_ckeck

#include <stdio.h>

#define gl_ckeck(x) x; gl_error(# x, __FUNCTION__, __LINE__)

#endif

void gl_error(mogl_cstring command, mogl_cstring function, mogl_u32 line)
{
    struct {
        mogl_u32     code;
        mogl_cstring message;
    } errors[]= {
        { GL_NO_ERROR, "No error has been recorded. The value of this symbolic constant is guaranteed to be 0." },
        { GL_INVALID_ENUM, "An unacceptable value is specified for an enumerated argument. The offending command is ignored and has no other side effect than to set the error flag." },
        { GL_INVALID_VALUE, "A numeric argument is out of range. The offending command is ignored and has no other side effect than to set the error flag." },
        { GL_INVALID_OPERATION, "The specified operation is not allowed in the current state. The offending command is ignored and has no other side effect than to set the error flag." },
        //{ GL_INVALID_FRAMEBUFFER_OPERATION, "The framebuffer object is not complete. The offending command is ignored and has no other side effect than to set the error flag." },
        { GL_OUT_OF_MEMORY, "There is not enough memory left to execute the command. The state of the GL is undefined, except for the state of the error flags, after this error is recorded." },
        { GL_STACK_UNDERFLOW, "An attempt has been made to perform an operation that would cause an internal stack to underflow." },
        { GL_STACK_OVERFLOW, "An attempt has been made to perform an operation that would cause an internal stack to overflow." },
    };

    mogl_u32 error = glGetError();
    if (error)
    {
        mogl_b8 found = mogl_false;
        for (mogl_u32 i = 0; i < mogl_carray_count(errors); i++)
        {
            if (errors[i].code == error)
            {
                printf("%s,%u: gl error %s %i %s\n", function, line, command, error, errors[i].message);
                found = mogl_true;
                break;
            }
        }

        if (!found)
            printf("gl error %s %i unknown\n", command, error);
    }
}

#endif
