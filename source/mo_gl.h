
#if !defined mogl_h
#define mogl_h

#ifdef __cplusplus
extern "C" {
#endif

#if !defined mogl_assert
#define mogl_assert(x)
#endif

#if !defined mogl_require
#define mogl_require(x) (x)
#endif

#define mogl_cases_complete(value) default: mogl_assert(0)

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
#define mogl_fs(text) (int) (text).count, (char *) (text).base

struct mogl_state;
typedef struct mogl_state mogl_state;

extern mogl_state global_mogl_state;

#define mogl_init_signature void mogl_init()
mogl_init_signature;

#define mogl_win32_window_init_signature void mogl_win32_window_init(void *device_context)
mogl_win32_window_init_signature;

#ifdef __cplusplus
}
#endif

#endif

#if defined mogl_implementation
#undef mogl_implementation

struct mogl_state
{
    HWND    init_window_handle;
    HDC     init_device_context;
    HRGL    gl_context;
    mogl_b8 is_modern_context;
};

mogl_state global_mogl_state;

#ifdef _WIN32

#include <windows.h>
#include <gl/gl.h>

#pragma comment(lib, "gdi32")
#pragma comment(lib, "user32")
#pragma comment(lib, "opengl32")

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

}

mogl_win32_window_init_signature
{
    mogl_assert(global_mogl_state.gl_context);

    if (global_mogl_state.is_modern_context)
        mogl_win32_modern_window_init(device_context);
    else
        mogl_win32_base_window_init(device_context);

    wglMakeCurrent(device_context, global_mogl_state.gl_context);
}

#else
#error unknown plaform
#endif


#define gl_ckeck(x) x; gl_error(# x, __FUNCTION__, __LINE__)

void gl_error(cstring command, cstring function, u32 line)
{
    struct {
        u32     code;
        cstring message;
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

    u32 error = glGetError();
    if (error)
    {
        b8 found = false;
        for (u32 i = 0; i < carray_count(errors); i++)
        {
            if (errors[i].code == error)
            {
                printf("%s,%u: gl error %s %i %s\n", function, line, command, error, errors[i].message);
                found = true;
                break;
            }
        }

        if (!found)
            printf("gl error %s %i unknown\n", command, error);
    }
}

mogl_init_signature
{
    WNDCLASS window_class = {0};
    window_class.lpfnWndProc   = DefWindowProc;
    window_class.hInstance     = (HINSTANCE) GetModuleHandleA(null);
    window_class.lpszClassName = "mogl init window class";
    require(RegisterClass(&window_class));

    global_mogl_state.init_window_handle = CreateWindowExA(0, window_class.lpszClassName, window_class.lpszClassName, WS_OVERLAPPEDWINDOW, CW_USEDEFAULT, CW_USEDEFAULT, CW_USEDEFAULT, CW_USEDEFAULT, mogl_null, mogl_null, (HINSTANCE) GetModuleHandleA(mogl_null), mogl_null);
    mogl_assert(global_mogl_state.init_window_handle);

    global_mogl_state.init_device_context = GetDC(global_mogl_state.init_window_handle);
    mogl_require(global_render.win32_gl_init_device_context);

    mogl_win32_base_window_init(global_mogl_state.init_device_context);

    global_mogl_state.gl_context = wglCreateContext(global_mogl_state.init_device_context);
    mogl_require(global_mogl_state.gl_context);

    wglMakeCurrent(global_mogl_state.init_device_context, global_mogl_state.gl_context);

    // enable v-sync
    //wglSwapIntervalEXT(1);
}

#endif
