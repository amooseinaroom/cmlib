
// single header platform layer library

#if !defined mop_h
#define mop_h

#ifdef __cplusplus
extern "C" {
#endif

#if !defined mop_assert
#define mop_assert(x)
#endif

#if !defined mop_assert
#define mop_require(x) (x)
#endif

#define mop_cases_complete(value) default: mop_assert(0)

typedef unsigned char      mop_u8;
typedef unsigned int       mop_u32;
typedef unsigned long long mop_u64;

typedef signed int       mop_s32;
typedef signed long long mop_s64;

typedef float  mop_f32;
typedef double mop_f64;

typedef mop_u8 mop_b8;

typedef mop_u64 mop_usize;

typedef char * mop_cstring;

#define mop_null 0

const mop_b8 mop_false = 0;
const mop_b8 mop_true  = 1;

#define mop_carray_count(static_array) (sizeof(static_array) / sizeof(*(static_array)))

typedef struct
{
    mop_u8    *base;
    mop_usize count;
} mop_u8_array;

typedef mop_u8_array mop_string;

#define mop_s(static_string) (string) { static_string, carray_count(static_string) - 1 }
#define mop_fs(text) (int) (text).count, (char *) (text).base

const mop_string mop_string_empty = {0};

struct mop_platform;
typedef struct mop_platform mop_platform;

struct mop_window;
typedef struct mop_window mop_window;

typedef struct
{
    mop_s32 width, height;
} mop_window_size;

typedef struct
{
    mop_u64 byte_count;
    mop_b8  ok;
} mop_get_file_byte_count_result;

typedef struct
{
    mop_u8_array data;
    mop_b8       ok;
} mop_read_file_result;

typedef struct
{
    mop_u32 code;
    mop_b8 is_symbol;
} mop_character;

enum mop_character_symbol;
typedef enum mop_character_symbol mop_character_symbol;

#define mop_init_signature void mop_init()
mop_init_signature;

#define mop_window_init_signature void mop_window_init(mop_window *window, mop_cstring title)
mop_window_init_signature;

#define mop_window_get_size_signature mop_window_size mop_window_get_size(mop_window *window)
mop_window_get_size_signature;

#define mop_handle_messages_signature void mop_handle_messages()
mop_handle_messages_signature;

#define mop_get_file_byte_count_signature mop_get_file_byte_count_result mop_get_file_byte_count(mop_cstring path)
mop_get_file_byte_count_signature;

#define mop_read_file_signature mop_read_file_result mop_read_file(mop_u8_array buffer, mop_cstring path)
mop_read_file_signature;

#define mop_write_file_signature mop_b8 mop_write_file(mop_cstring path, mop_u8_array data)
mop_write_file_signature;

#ifdef __cplusplus
}
#endif

#endif

#if defined mop_IMPLEMENTATION
#undef mop_IMPLEMENTATION

#include <windows.h>

#pragma comment(lib, "gdi32")
#pragma comment(lib, "user32")

enum mop_character_symbol
{
    mop_character_symbol_return,
    mop_character_symbol_backspace,
    mop_character_symbol_escape,
    mop_character_symbol_delete,
    mop_character_symbol_newline,
};

struct mop_platform
{
    mop_character characters[32];
    mop_u32 character_count;
    mop_u32 missed_character_count;

    mop_b8 do_quit;
};

struct mop_window
{
    HANDLE handle;
    HDC    device_context;
};

mop_cstring mop_win32_window_class_name = "window class";

mop_platform global_platform;

LRESULT CALLBACK mop_win32_window_callback(HWND window_handle, UINT msg, WPARAM w_param, LPARAM l_param)
{
    switch (msg)
    {
    case WM_DESTROY:
    {
        PostQuitMessage(0);
        return 0;
    }
    }

    return DefWindowProc(window_handle, msg, w_param, l_param);
}

mop_init_signature
{
    HINSTANCE instance = (HINSTANCE) GetModuleHandleA(null);

    WNDCLASS window_class = {0};
    window_class.lpfnWndProc   = mop_win32_window_callback;
    window_class.hInstance     = instance;
    window_class.lpszClassName = mop_win32_window_class_name;
    window_class.hCursor       = LoadCursorA(null, IDC_ARROW);
    window_class.hbrBackground = (HBRUSH) COLOR_BACKGROUND;
    window_class.style         = CS_OWNDC;

    require(RegisterClass(&window_class));
}

mop_window_init_signature
{
    assert(!window->handle);

    window->handle = CreateWindowExA(0, mop_win32_window_class_name, title, WS_OVERLAPPEDWINDOW, CW_USEDEFAULT, CW_USEDEFAULT, CW_USEDEFAULT, CW_USEDEFAULT, null, null, (HINSTANCE) GetModuleHandleA(null), null);
    require(window->handle);

    ShowWindow(window->handle, SW_SHOW);

    window->device_context = GetDC(window->handle);
    require(window->device_context);
}

mop_window_get_size_signature
{
    RECT client_rect;
    require(GetClientRect(window->handle, &client_rect));

    mop_window_size size;
    size.width  = client_rect.right - client_rect.left;
    size.height = client_rect.bottom - client_rect.top;
    return size;
}

void mop_win32_add_character(mop_u32 code, mop_b8 is_symbol)
{
    if (global_platform.character_count < carray_count(global_platform.characters))
    {
        mop_character *character = &global_platform.characters[global_platform.character_count];
        global_platform.character_count++;

        character->code = code;
        character->is_symbol = is_symbol;
    }
    else
    {
        global_platform.missed_character_count++;
    }
}

mop_handle_messages_signature
{
    // previous quit message was ignored so we clear it
    global_platform.do_quit = false;

    global_platform.character_count = 0;
    global_platform.missed_character_count = 0;

    MSG msg = {0};
    while (PeekMessageA(&msg, null, 0, 0, PM_REMOVE))
    {
        switch (msg.message)
        {
        case WM_QUIT:
        {
            global_platform.do_quit = true;
        } break;

        case WM_KEYDOWN:
        case WM_SYSKEYDOWN:
        {
            switch (msg.wParam)
            {
                case VK_BACK:
                {
                    mop_win32_add_character(mop_character_symbol_backspace, true);
                } break;

                case VK_DELETE:
                {
                    mop_win32_add_character(mop_character_symbol_delete, true);
                } break;

                case VK_RETURN:
                {
                    mop_win32_add_character(mop_character_symbol_newline, true);
                } break;
            }

        } break;

        case WM_CHAR:
        {
            if (msg.wParam >= ' ')
                mop_win32_add_character(msg.wParam, false);
        } break;
        }

        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }
}

mop_get_file_byte_count_signature
{
    WIN32_FILE_ATTRIBUTE_DATA data;
    if (!GetFileAttributesExA(path, GetFileExInfoStandard, &data))
    {
        mop_s32 error = GetLastError();
        require(error == ERROR_FILE_NOT_FOUND);

        return (mop_get_file_byte_count_result) {0};
    }

    mop_u64 byte_count = (mop_u64) data.nFileSizeHigh << 32 | data.nFileSizeLow;
    return (mop_get_file_byte_count_result) { byte_count, true };
}

mop_read_file_signature
{
    HANDLE handle = CreateFile(path, GENERIC_READ, FILE_SHARE_READ, null, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, null);
    if (handle == INVALID_HANDLE_VALUE)
    {
        mop_s32 error = GetLastError();
        require(error == ERROR_FILE_NOT_FOUND);

        return (mop_read_file_result) {0};
    }

    mop_u32 high32;
    mop_u32 low32 = GetFileSize(handle, &high32);

    mop_u64 byte_count = (mop_u64) high32 << 32 | low32;
    assert(byte_count <= buffer.count);

    mop_read_file_result result = { { buffer.base, byte_count }, true };

    u8 *base = buffer.base;
    while (byte_count)
    {
        mop_u32 read_count;
        if (byte_count > 0xFFFFFFFF)
            read_count = 0xFFFFFFFF;
        else
            read_count = byte_count;

        require(ReadFile(handle, base, read_count, null, null));
        base       += read_count;
        byte_count -= read_count;
    }

    return result;
}

mop_write_file_signature
{
    HANDLE handle = CreateFile(path, GENERIC_WRITE, 0, null, CREATE_ALWAYS, FILE_ATTRIBUTE_NORMAL, null);
    if (handle == INVALID_HANDLE_VALUE)
    {
        mop_s32 error = GetLastError();
        require(error == ERROR_FILE_NOT_FOUND);

        return false;
    }

    while (data.count)
    {
        mop_u32 write_count;
        if (data.count > 0xFFFFFFFF)
            write_count = 0xFFFFFFFF;
        else
            write_count = (mop_u32) data.count;

        require(WriteFile(handle, data.base, write_count, null, null));
        data.base  += write_count;
        data.count -= write_count;
    }

    return true;
}

#endif