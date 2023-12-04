
// single header platform layer library

#if !defined mop_h
#define mop_h

#ifdef __cplusplus
extern "C" {
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

#if !defined mop_u8_array_type
#define mop_u8_array_type mop_u8_array

typedef struct
{
    mop_u8    *base;
    mop_usize count;
} mop_u8_array;

#else

typedef mop_u8_array_type mop_u8_array;

#endif

typedef mop_u8_array mop_string;

#ifdef __cplusplus
#define mop_struct_literal(name)
#else
#define mop_struct_literal(name) (name)
#endif

#define mop_s(static_string) mop_struct_literal(string) { (mos_u8 *) static_string, mop_carray_count(static_string) - 1 }
// sometimes needed to initialize global values
#define mop_sc(const_static_string) { (mos_u8 *) static_string, mop_carray_count(static_string) - 1 }
#define mop_fs(text) (int) (text).count, (char *) (text).base

const mop_string mop_string_empty = {0};

struct mop_platform;
typedef struct mop_platform mop_platform;

struct mop_window;
typedef struct mop_window mop_window;

typedef struct
{
    mop_s32 x;
    mop_s32 y;
} mop_point;

typedef struct
{
    mop_point size;
    mop_point relative_mouse_position;
} mop_window_info;

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

enum mop_key;

typedef union
{
    struct
    {
        mop_b8 is_active:                1;
        mop_u8 half_transition_count:    6;
        mop_b8 half_transition_overflow: 1;
    };

    mop_u8 value;
} mop_key_state;

typedef enum mop_key mop_key;

struct mop_platform;

#define mop_init_signature void mop_init(mop_platform *platform)
mop_init_signature;

#define mop_window_init_signature void mop_window_init(mop_platform *platform, mop_window *window, mop_cstring title, mop_s32 width, mop_s32 height)
mop_window_init_signature;

#define mop_window_get_info_signature mop_window_info mop_window_get_info(mop_platform *platform, mop_window *window)
mop_window_get_info_signature;

#define mop_handle_messages_signature void mop_handle_messages(mop_platform *platform)
mop_handle_messages_signature;

#define mop_get_realtime_counter_signature mop_u64 mop_get_realtime_counter(mop_platform *platform)
mop_get_realtime_counter_signature;

#define mop_get_file_byte_count_signature mop_get_file_byte_count_result mop_get_file_byte_count(mop_platform *platform, mop_cstring path)
mop_get_file_byte_count_signature;

#define mop_read_file_signature mop_read_file_result mop_read_file(mop_platform *platform, mop_u8_array buffer, mop_cstring path)
mop_read_file_signature;

#define mop_write_file_signature mop_b8 mop_write_file(mop_platform *platform, mop_cstring path, mop_u8_array data)
mop_write_file_signature;

#define mop_key_event_update_signature void mop_key_event_update(mop_platform *platform, mop_u32 key, mop_b8 is_active)
mop_key_event_update_signature;

#define mop_key_poll_update_signature void mop_key_poll_update(mop_platform *platform, mop_u32 key, mop_b8 is_active)
mop_key_poll_update_signature;

#ifdef __cplusplus
}
#endif

#endif

#if defined mop_implementation
#undef mop_implementation

#if defined(_WIN32) || defined(WIN32)

#include <windows.h>

#pragma comment(lib, "gdi32")
#pragma comment(lib, "user32")

#if !defined mop_assert
#if defined mop_debug
// TODO: create proper message box
#include <stdio.h>
#define mop_assert(x) if (!(x)) { printf("%s,%s,%u: Assertion Failure: '%s' failed\n", __FILE__, __FUNCTION__, __LINE__, # x); __debugbreak(); }
#else
#define mop_assert(x)
#endif
#endif

#if !defined mop_require
#include <stdio.h>
#define mop_require(x) if (!(x)) { printf("%s,%s,%u: Requirement Failure: '%s' failed\n", __FILE__, __FUNCTION__, __LINE__, # x); int error = GetLastError(); if (error) printf("   GetLastError() = %i\n", error); __debugbreak(); }
#endif

enum mop_character_symbol
{
    mop_character_symbol_backspace,
    mop_character_symbol_escape,
    mop_character_symbol_delete,
    mop_character_symbol_newline,
};

enum mop_key
{
    mop_key_return = VK_RETURN,
    mop_key_backspace = VK_BACK,
    mop_key_escape = VK_ESCAPE,
    mop_key_delete = VK_DELETE,
    mop_key_mouse_left = VK_LBUTTON,
    mop_key_mouse_middle = VK_MBUTTON,
    mop_key_mouse_right = VK_RBUTTON,
};

struct mop_platform
{
    mop_character characters[32];
    mop_u32 character_count;
    mop_u32 missed_character_count;

    mop_key_state keys[256];

    mop_point previous_mouse_position;
    mop_point mouse_position;

    mop_u64 realtime_counter_ticks_per_second;
    mop_u64 last_realtime_counter;

    mop_f32 delta_seconds;

    mop_b8 do_quit;

    struct
    {
        POINT cursor;
    } win32;
};

struct mop_window
{
    HWND handle;
    HDC  device_context;
};

mop_cstring mop_win32_window_class_name = "window class";

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
    HINSTANCE instance = (HINSTANCE) GetModuleHandleA(mop_null);

    WNDCLASS window_class = {0};
    window_class.lpfnWndProc   = mop_win32_window_callback;
    window_class.hInstance     = instance;
    window_class.lpszClassName = mop_win32_window_class_name;
    window_class.hCursor       = LoadCursorA(mop_null, IDC_ARROW);
    window_class.hbrBackground = (HBRUSH) COLOR_BACKGROUND;
    window_class.style         = CS_OWNDC;

    mop_require(RegisterClass(&window_class));
}

mop_window_init_signature
{
    mop_assert(!window->handle);

    RECT client_rect;
    client_rect.left = 0;
    client_rect.right = width;
    client_rect.top = 0;
    client_rect.bottom = height;
    AdjustWindowRect(&client_rect, WS_OVERLAPPEDWINDOW, false);

    window->handle = CreateWindowExA(0, mop_win32_window_class_name, title, WS_OVERLAPPEDWINDOW, CW_USEDEFAULT, CW_USEDEFAULT, client_rect.right - client_rect.left, client_rect.bottom - client_rect.top, mop_null, mop_null, (HINSTANCE) GetModuleHandleA(mop_null), mop_null);
    mop_require(window->handle);

    ShowWindow(window->handle, SW_SHOW);

    window->device_context = GetDC(window->handle);
    mop_require(window->device_context);

    mop_require(QueryPerformanceFrequency((LARGE_INTEGER *) &platform->realtime_counter_ticks_per_second));
}

mop_window_get_info_signature
{
    RECT client_rect;
    mop_require(GetClientRect(window->handle, &client_rect));

    POINT window_cursor = platform->win32.cursor;
    ScreenToClient(window->handle, &window_cursor);

    mop_window_info info;
    info.size.x = client_rect.right - client_rect.left;
    info.size.y = client_rect.bottom - client_rect.top;

    info.relative_mouse_position.x = window_cursor.x;
    info.relative_mouse_position.y = info.size.y - window_cursor.y;

    return info;
}

void mop_win32_add_character(mop_platform *platform, mop_u32 code, mop_b8 is_symbol)
{
    if (platform->character_count < mop_carray_count(platform->characters))
    {
        mop_character *character = &platform->characters[platform->character_count];
        platform->character_count++;

        character->code = code;
        character->is_symbol = is_symbol;
    }
    else
    {
        platform->missed_character_count++;
    }
}


mop_handle_messages_signature
{
    // previous quit message was ignored so we clear it
    platform->do_quit = mop_false;

    platform->character_count = 0;
    platform->missed_character_count = 0;

    for (mop_u32 i = 0; i < mop_carray_count(platform->keys); i++)
    {
        platform->keys[i].half_transition_count    = 0;
        platform->keys[i].half_transition_overflow = mop_false;
    }

    MSG msg = {0};
    while (PeekMessageA(&msg, mop_null, 0, 0, PM_REMOVE))
    {
        switch (msg.message)
        {
        case WM_QUIT:
        {
            platform->do_quit = mop_true;
        } break;

        case WM_KEYUP:
        case WM_SYSKEYUP:
        {
            mop_key_event_update(platform, msg.wParam, mop_false);
        } break;

        case WM_KEYDOWN:
        case WM_SYSKEYDOWN:
        {
            switch (msg.wParam)
            {
                case VK_BACK:
                {
                    mop_win32_add_character(platform, mop_character_symbol_backspace, mop_true);
                } break;

                case VK_DELETE:
                {
                    mop_win32_add_character(platform, mop_character_symbol_delete, mop_true);
                } break;

                case VK_RETURN:
                {
                    mop_win32_add_character(platform, mop_character_symbol_newline, mop_true);
                } break;
            }

            mop_key_event_update(platform, msg.wParam, mop_true);
        } break;

        case WM_CHAR:
        {
            if (msg.wParam >= ' ')
                mop_win32_add_character(platform, msg.wParam, mop_false);
        } break;
        }

        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }

    mop_key_poll_update(platform, VK_LBUTTON, (GetAsyncKeyState(VK_LBUTTON) >> 15) & 1);
    mop_key_poll_update(platform, VK_MBUTTON, (GetAsyncKeyState(VK_MBUTTON) >> 15) & 1);
    mop_key_poll_update(platform, VK_RBUTTON, (GetAsyncKeyState(VK_RBUTTON) >> 15) & 1);

    POINT cursor;
    GetCursorPos(&cursor);
    platform->win32.cursor = cursor;

    HMONITOR monitor = MonitorFromPoint(cursor, MONITOR_DEFAULTTOPRIMARY);
    MONITORINFO monitor_info = { sizeof(MONITORINFO) };
    GetMonitorInfoA(monitor, &monitor_info);

    platform->previous_mouse_position = platform->mouse_position;
    platform->mouse_position.x = cursor.x;
    platform->mouse_position.y = monitor_info.rcMonitor.bottom - monitor_info.rcMonitor.top - cursor.y;

    mop_u64 realtime_counter = mop_get_realtime_counter(platform);
    platform->delta_seconds = (mop_f32) (realtime_counter - platform->last_realtime_counter) / platform->realtime_counter_ticks_per_second;
    platform->last_realtime_counter = realtime_counter;
}

mop_get_realtime_counter_signature
{
    mop_u64 counter;
    mop_require(QueryPerformanceCounter((LARGE_INTEGER *) &counter));

    return counter;
}

mop_get_file_byte_count_signature
{
    WIN32_FILE_ATTRIBUTE_DATA data;
    if (!GetFileAttributesExA(path, GetFileExInfoStandard, &data))
    {
        mop_s32 error = GetLastError();
        mop_require(error == ERROR_FILE_NOT_FOUND);

        return mop_struct_literal(mop_get_file_byte_count_result) {0};
    }

    mop_u64 byte_count = (mop_u64) data.nFileSizeHigh << 32 | data.nFileSizeLow;
    return mop_struct_literal(mop_get_file_byte_count_result) { byte_count, mop_true };
}

mop_read_file_signature
{
    HANDLE handle = CreateFile(path, GENERIC_READ, FILE_SHARE_READ, mop_null, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, mop_null);
    if (handle == INVALID_HANDLE_VALUE)
    {
        mop_s32 error = GetLastError();
        mop_require(error == ERROR_FILE_NOT_FOUND);

        return mop_struct_literal(mop_read_file_result) {0};
    }

    mop_u32 high32;
    mop_u32 low32 = GetFileSize(handle, (DWORD *) &high32);

    mop_u64 byte_count = (mop_u64) high32 << 32 | low32;
    mop_assert(byte_count <= buffer.count);

    mop_read_file_result result = { { buffer.base, byte_count }, mop_true };

    mop_u8 *base = buffer.base;
    while (byte_count)
    {
        mop_u32 read_count;
        if (byte_count > 0xFFFFFFFF)
            read_count = 0xFFFFFFFF;
        else
            read_count = byte_count;

        mop_u32 ignored_out_read_byte_count; // win7 requires this
        mop_require(ReadFile(handle, base, read_count, (DWORD *) &ignored_out_read_byte_count, mop_null));
        base       += read_count;
        byte_count -= read_count;
    }

    CloseHandle(handle);

    return result;
}

mop_write_file_signature
{
    HANDLE handle = CreateFile(path, GENERIC_WRITE, 0, mop_null, CREATE_ALWAYS, FILE_ATTRIBUTE_NORMAL, mop_null);
    if (handle == INVALID_HANDLE_VALUE)
    {
        mop_s32 error = GetLastError();
        mop_require(error == ERROR_FILE_NOT_FOUND);

        return mop_false;
    }

    while (data.count)
    {
        mop_u32 write_count;
        if (data.count > 0xFFFFFFFF)
            write_count = 0xFFFFFFFF;
        else
            write_count = (mop_u32) data.count;

        mop_u32 ignored_out_write_byte_count; // win7 requires this
        mop_require(WriteFile(handle, data.base, write_count, (DWORD *) &ignored_out_write_byte_count, mop_null));
        data.base  += write_count;
        data.count -= write_count;
    }

    CloseHandle(handle);

    return mop_true;
}

#elif __EMSCRIPTEN__

#if !defined mop_assert
#if defined mop_debug
// TODO: create proper message box
#include <stdio.h>
#define mop_assert(x) if (!(x)) { printf("%s,%s,%u: Assertion Failure: '%s' failed\n", __FILE__, __FUNCTION__, __LINE__, # x); }
#else
#define mop_assert(x)
#endif
#endif

#if !defined mop_require
#include <stdio.h>
#define mop_require(x) if (!(x)) { printf("%s,%s,%u: Requirement Failure: '%s' failed\n", __FILE__, __FUNCTION__, __LINE__, # x); }
#endif

enum mop_character_symbol
{
    mop_character_symbol_backspace,
    mop_character_symbol_escape,
    mop_character_symbol_delete,
    mop_character_symbol_newline,
};

enum mop_key
{
    mop_key_return,
    mop_key_backspace,
    mop_key_escape,
    mop_key_delete,
    mop_key_mouse_left,
    mop_key_mouse_middle,
    mop_key_mouse_right,
};

struct mop_platform
{
    mop_character characters[32];
    mop_u32 character_count;
    mop_u32 missed_character_count;

    mop_key_state keys[256];

    mop_point previous_mouse_position;
    mop_point mouse_position;

    mop_u64 realtime_counter_ticks_per_second;
    mop_u64 last_realtime_counter;

    mop_f32 delta_seconds;

    mop_b8 do_quit;

    struct
    {
        u8 unused;
    } emscripten;
};

struct mop_window
{
    u8 unused;
    //HWND handle;
    //HDC  device_context;
};

#else

#error mop_implementation not implemented for current platform

#endif

mop_key_event_update_signature
{
    mop_assert(key < mop_carray_count(platform->keys));

    // mop_assert(platform->keys[key].is_active != is_active);

    if (platform->keys[key].half_transition_count == 63)
        platform->keys[key].half_transition_overflow = mop_true;

    platform->keys[key].half_transition_count += 1;
    platform->keys[key].is_active = is_active;
}

mop_key_poll_update_signature
{
    mop_assert(key < mop_carray_count(platform->keys));

    if (platform->keys[key].is_active != is_active)
        mop_key_event_update(platform, key, is_active);
}

#endif