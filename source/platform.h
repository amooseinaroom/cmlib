
#if !defined PLATFORM
#define PLATFORM

#if !defined PLATFORM_BASE_TYPES

#define assert(x)
#define require(x) (x)
#define cases_complete(value) default: assert(0)

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
#define fs(text) (int) (text).count, (char *) (text).base

const string string_empty = {0};

#endif

struct platform_api;
typedef struct platform_api platform_api;

struct platform_window;
typedef struct platform_window platform_window;

typedef struct
{
    s32 width, height;
} platform_window_size;

typedef struct
{
    u64 byte_count;
    b8  ok;
} platform_get_file_byte_count_result;

typedef struct
{
    u8_array data;
    b8 ok;
} platform_read_file_result;

typedef struct
{
    u32 code;
    b8 is_symbol;
} platform_character;

enum platform_character_symbol;
typedef enum platform_character_symbol platform_character_symbol;

#define platform_init_signature void platform_init()
platform_init_signature;

#define platform_window_init_signature void platform_window_init(platform_window *window, cstring title)
platform_window_init_signature;

#define platform_window_get_size_signature platform_window_size platform_window_get_size(platform_window *window)
platform_window_get_size_signature;

#define platform_handle_messages_signature void platform_handle_messages()
platform_handle_messages_signature;

#define platform_get_file_byte_count_signature platform_get_file_byte_count_result platform_get_file_byte_count(cstring path)
platform_get_file_byte_count_signature;

#define platform_read_file_signature platform_read_file_result platform_read_file(u8_array buffer, cstring path)
platform_read_file_signature;

#define platform_write_file_signature b8 platform_write_file(cstring path, u8_array data)
platform_write_file_signature;

#endif

#if defined PLATFORM_IMPLEMENTATION
#undef PLATFORM_IMPLEMENTATION

#include <windows.h>

#pragma comment(lib, "gdi32")
#pragma comment(lib, "user32")

enum platform_character_symbol
{
    platform_character_symbol_return,
    platform_character_symbol_backspace,
    platform_character_symbol_escape,
    platform_character_symbol_delete,
    platform_character_symbol_newline,
};

struct platform_api
{
    platform_character characters[32];
    u32 character_count;
    u32 missed_character_count;

    b8 do_quit;
};

struct platform_window
{
    HANDLE handle;
    HDC    device_context;
};

cstring platform_win32_window_class_name = "window class";

platform_api global_platform;

LRESULT CALLBACK platform_win32_window_callback(HWND window_handle, UINT msg, WPARAM w_param, LPARAM l_param)
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

platform_init_signature
{
    HINSTANCE instance = (HINSTANCE) GetModuleHandleA(null);

    WNDCLASS window_class = {0};
    window_class.lpfnWndProc   = platform_win32_window_callback;
    window_class.hInstance     = instance;
    window_class.lpszClassName = platform_win32_window_class_name;
    window_class.hCursor       = LoadCursorA(null, IDC_ARROW);
    window_class.hbrBackground = (HBRUSH) COLOR_BACKGROUND;
    window_class.style         = CS_OWNDC;

    require(RegisterClass(&window_class));
}

platform_window_init_signature
{
    assert(!window->handle);

    window->handle = CreateWindowExA(0, platform_win32_window_class_name, title, WS_OVERLAPPEDWINDOW, CW_USEDEFAULT, CW_USEDEFAULT, CW_USEDEFAULT, CW_USEDEFAULT, null, null, (HINSTANCE) GetModuleHandleA(null), null);
    require(window->handle);

    ShowWindow(window->handle, SW_SHOW);

    window->device_context = GetDC(window->handle);
    require(window->device_context);
}

platform_window_get_size_signature
{
    RECT client_rect;
    require(GetClientRect(window->handle, &client_rect));

    platform_window_size size;
    size.width  = client_rect.right - client_rect.left;
    size.height = client_rect.bottom - client_rect.top;
    return size;
}

void platform_win32_add_character(u32 code, b8 is_symbol)
{
    if (global_platform.character_count < carray_count(global_platform.characters))
    {
        platform_character *character = &global_platform.characters[global_platform.character_count];
        global_platform.character_count++;

        character->code = code;
        character->is_symbol = is_symbol;
    }
    else
    {
        global_platform.missed_character_count++;
    }
}

platform_handle_messages_signature
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
                    platform_win32_add_character(platform_character_symbol_backspace, true);
                } break;

                case VK_DELETE:
                {
                    platform_win32_add_character(platform_character_symbol_delete, true);
                } break;

                case VK_RETURN:
                {
                    platform_win32_add_character(platform_character_symbol_newline, true);
                } break;
            }

        } break;

        case WM_CHAR:
        {
            if (msg.wParam >= ' ')
                platform_win32_add_character(msg.wParam, false);
        } break;
        }

        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }
}

platform_get_file_byte_count_signature
{
    WIN32_FILE_ATTRIBUTE_DATA data;
    if (!GetFileAttributesExA(path, GetFileExInfoStandard, &data))
    {
        s32 error = GetLastError();
        require(error == ERROR_FILE_NOT_FOUND);

        return (platform_get_file_byte_count_result) {0};
    }

    u64 byte_count = (u64) data.nFileSizeHigh << 32 | data.nFileSizeLow;
    return (platform_get_file_byte_count_result) { byte_count, true };
}

platform_read_file_signature
{
    HANDLE handle = CreateFile(path, GENERIC_READ, FILE_SHARE_READ, null, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, null);
    if (handle == INVALID_HANDLE_VALUE)
    {
        s32 error = GetLastError();
        require(error == ERROR_FILE_NOT_FOUND);

        return (platform_read_file_result) {0};
    }

    u32 high32;
    u32 low32 = GetFileSize(handle, &high32);

    u64 byte_count = (u64) high32 << 32 | low32;
    assert(byte_count <= buffer.count);

    platform_read_file_result result = { { buffer.base, byte_count }, true };

    u8 *base = buffer.base;
    while (byte_count)
    {
        u32 read_count;
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

platform_write_file_signature
{
    HANDLE handle = CreateFile(path, GENERIC_WRITE, 0, null, CREATE_ALWAYS, FILE_ATTRIBUTE_NORMAL, null);
    if (handle == INVALID_HANDLE_VALUE)
    {
        s32 error = GetLastError();
        require(error == ERROR_FILE_NOT_FOUND);

        return false;
    }

    while (data.count)
    {
        u32 write_count;
        if (data.count > 0xFFFFFFFF)
            write_count = 0xFFFFFFFF;
        else
            write_count = (u32) data.count;

        require(WriteFile(handle, data.base, write_count, null, null));
        data.base  += write_count;
        data.count -= write_count;
    }

    return true;
}


#endif