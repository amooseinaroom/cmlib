
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
#define mop_sl(name)
#else
#define mop_sl(name) (name)
#endif

#define mop_s(static_string) mop_sl(string) { (mop_u8 *) static_string, mop_carray_count(static_string) - 1 }
// sometimes needed to initialize global values
#define mop_sc(const_static_string) { (mop_u8 *) const_static_string, mop_carray_count(const_static_string) - 1 }
#define mop_fs(text) (int) (text).count, (char *) (text).base

const mop_string mop_string_empty = {0};

struct mop_platform;
typedef struct mop_platform mop_platform;

struct mop_window;
typedef struct mop_window mop_window;

typedef struct mop_file_search_iterator mop_file_search_iterator;
struct mop_file_search_iterator;

typedef struct mop_thread mop_thread;
struct mop_thread;

typedef struct mop_library mop_library;
struct mop_library;

typedef struct mop_hot_reload_state mop_hot_reload_state;
struct mop_hot_reload_state;

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
    mop_u8     buffer[512];
    mop_string filepath;
    mop_b8     is_directory;
} mop_file_search_result;

typedef struct
{
    mop_u32 code;

    union
    {
        struct
        {
            mop_b8 is_symbol    : 1;
            mop_b8 with_shift   : 1;
            mop_b8 with_alt     : 1;
            mop_b8 with_control : 1;
        };

        u8 mask;
    };
} mop_character;

typedef struct
{
    mop_character *base;
    mop_usize     count;
} mop_character_array;

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

typedef enum
{
    mop_week_day_monday,
    mop_week_day_thuesday,
    mop_week_day_wednesday,
    mop_week_day_thursday,
    mop_week_day_friday,
    mop_week_day_saturday,
    mop_week_day_sunday,

    mop_week_day_count,
} mop_week_day;

typedef enum
{
    mop_month_january,
	mop_month_february,
	mop_month_march,
	mop_month_april,
	mop_month_may,
	mop_month_june,
	mop_month_july,
	mop_month_august,
	mop_month_september,
	mop_month_october,
	mop_month_november,
    mop_month_december,

    mop_month_count,
} mop_month;

typedef struct
{
    u16 millisecond;
    u8  second;
    u8  minute;
    u8  hour;
    u8  day;
    u8  month;
    u16 year;

    u8 week_day;
} mop_date_and_time;

typedef enum mop_key mop_key;

struct mop_platform;

extern const mop_u32 mop_month_day_count[12];

#define mop_init_signature void mop_init(mop_platform *platform)
mop_init_signature;

#define mop_window_init_signature void mop_window_init(mop_platform *platform, mop_window *window, mop_cstring title, mop_s32 width, mop_s32 height)
mop_window_init_signature;

#define mop_window_get_info_signature mop_window_info mop_window_get_info(mop_platform *platform, mop_window *window)
mop_window_get_info_signature;

#define mop_handle_messages_signature void mop_handle_messages(mop_platform *platform)
mop_handle_messages_signature;

#define mop_get_characters_signature mop_character_array mop_get_characters(mop_platform *platform)
mop_get_characters_signature;

#define mop_get_realtime_counter_signature mop_u64 mop_get_realtime_counter(mop_platform *platform)
mop_get_realtime_counter_signature;

#define mop_get_local_date_and_time_signature mop_date_and_time mop_get_local_date_and_time(mop_platform *platform)
mop_get_local_date_and_time_signature;

#define mop_get_file_byte_count_signature mop_get_file_byte_count_result mop_get_file_byte_count(mop_platform *platform, mop_string path)
mop_get_file_byte_count_signature;

#define mop_get_file_write_timestamp_signature mop_u64 mop_get_file_write_timestamp(mop_platform *platform, mop_string path)
mop_get_file_write_timestamp_signature;

#define mop_normalize_path_signature void mop_normalize_path(mop_string *path)
mop_normalize_path_signature;

#define mop_path_is_directory_signature mop_b8 mop_path_is_directory(mop_platform *platform, mop_string path)
mop_path_is_directory_signature;

#define mop_read_file_signature mop_read_file_result mop_read_file(mop_platform *platform, mop_u8_array buffer, mop_string path)
mop_read_file_signature;

#define mop_write_file_signature mop_b8 mop_write_file(mop_platform *platform, mop_string path, mop_u8_array data)
mop_write_file_signature;

#define mop_copy_file_signature mop_b8 mop_copy_file(mop_platform *platform, mop_string to_path, mop_string from_path, mop_b8 override)
mop_copy_file_signature;

#define mop_file_search_init_signature mop_file_search_iterator mop_file_search_init(mop_platform *platform, mop_string directory_path)
mop_file_search_init_signature;

#define mop_file_search_advance_signature mop_b8 mop_file_search_advance(mop_file_search_result *result, mop_platform *platform, mop_file_search_iterator *file_iterator)
mop_file_search_advance_signature;

#define mop_allocate_signature mop_u8_array mop_allocate(mop_platform *platform, mop_usize byte_count)
mop_allocate_signature;

#define mop_free_signature void mop_free(mop_platform *platform, mop_u8 *base)
mop_free_signature;

#define mop_sleep_milliseconds_signature void mop_sleep_milliseconds(mop_platform *platform, u32 milliseconds)
mop_sleep_milliseconds_signature;

#define mop_thread_function(name) s32 name(u8 *user_data)
typedef mop_thread_function((*mop_thread_function_type));

#define mop_thread_init_signature void mop_thread_init(mop_platform *platform, mop_thread *thread, mop_thread_function_type function, u8 *user_data)
mop_thread_init_signature;

#define mop_thread_start_signature void mop_thread_start(mop_platform *platform, mop_thread *thread)
mop_thread_start_signature;

#define mop_thread_wait_for_exit_signature void mop_thread_wait_for_exit(mop_platform *platform, mop_thread *thread)
mop_thread_wait_for_exit_signature;

#define mop_thread_kill_signature void mop_thread_kill(mop_platform *platform, mop_thread *thread)
mop_thread_kill_signature;

#define mop_atomic_increment_s64_signature s64 mop_atomic_increment_s64(mop_platform *platform, s64 *value)
mop_atomic_increment_s64_signature;

#define mop_atomic_decrement_s64_signature s64 mop_atomic_decrement_s64(mop_platform *platform, s64 *value)
mop_atomic_decrement_s64_signature;

#define mop_atomic_add_s64_signature s64 mop_atomic_add_s64(mop_platform *platform, s64 *value, s64 delta)
mop_atomic_add_s64_signature;

#define mop_atomic_sub_s64_signature s64 mop_atomic_sub_s64(mop_platform *platform, s64 *value, s64 delta)
mop_atomic_sub_s64_signature;

#define mop_atomic_compare_exchange_s32_signature s64 mop_atomic_compare_exchange_s32(mop_platform *platform, s32 *value, s32 expected_value, s32 new_value)

#define mop_load_library_signature mop_b8 mop_load_library(mop_platform *platform, mop_library *library, mop_string name)
mop_load_library_signature;

#define mop_unload_library_signature void mop_unload_library(mop_platform *platform, mop_library *library)
mop_unload_library_signature;

#define mop_load_symbol_signature mop_u8 * mop_load_symbol(mop_platform *platform, mop_library *library, mop_string name)
mop_load_symbol_signature;

#define mop_hot_update_type(name) mop_b8 name(mop_platform *platform, mop_u8_array data, mop_b8 did_reload)
typedef mop_hot_update_type((*mop_hot_update_function));

#define mop_hot_reload_signature mop_b8 mop_hot_reload(mop_platform *platform, mop_hot_reload_state *state, mop_string name)

#define mop_key_state_was_pressed_signature mop_b8 mop_key_state_was_pressed(mop_key_state state)
mop_key_state_was_pressed_signature;

#define mop_key_state_was_released_signature mop_b8 mop_key_state_was_released(mop_key_state state)
mop_key_state_was_released_signature;

#define mop_key_is_active_signature mop_b8 mop_key_is_active(mop_platform *platform, mop_u32 key)
mop_key_is_active_signature;

#define mop_key_was_pressed_signature mop_b8 mop_key_was_pressed(mop_platform *platform, mop_u32 key)
mop_key_was_pressed_signature;

#define mop_key_was_released_signature mop_b8 mop_key_was_released(mop_platform *platform, mop_u32 key)
mop_key_was_released_signature;

const mop_string mop_hot_update_name = mop_sc("mop_hot_update");

#ifdef __cplusplus

// in C++ somehow the 'extern "C"' has to be provided extra if we want the function to be exported
// even though we are already in an 'extern "C"' scope
#define mop_hot_update_signature extern "C" __declspec(dllexport) mop_hot_update_type(mop_hot_update)

}

#else

// in C, we don't want to add 'extern "C"'
#define mop_hot_update_signature __declspec(dllexport) mop_hot_update_type(mop_hot_update)

#endif

#endif

#if defined mop_implementation
#undef mop_implementation

const mop_u32 mop_month_day_count[12] =
{
    31, // january
    28, // february
    31, // march
    30, // april
    31, // may
    30, // june
    31, // july
    31, // august
    30, // september
    31, // october
    30, // november
    31, // december
};

#define mop_key_event_update_signature void mop_key_event_update(mop_platform *platform, mop_u32 key, mop_b8 is_active)
mop_key_event_update_signature;

#define mop_key_poll_update_signature void mop_key_poll_update(mop_platform *platform, mop_u32 key, mop_b8 is_active)
mop_key_poll_update_signature;

#if defined(_WIN32) || defined(WIN32)

#include <windows.h>
#include <intrin.h>

#pragma comment(lib, "gdi32")
#pragma comment(lib, "user32")

#if !defined mop_assert
#if defined mop_debug
// TODO: create proper message box
#include <stdio.h>
#define mop_assert(x) if (!(x)) { printf("%s,%s,%u: Assertion Failure: '%s' failed\n", __FILE__, __FUNCTION__, __LINE__, # x); if (IsDebuggerPresent()) __debugbreak(); else ExitProcess(0); }
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
    mop_character_symbol_escape,

    mop_character_symbol_backspace,
    mop_character_symbol_delete,
    mop_character_symbol_return,

    mop_character_symbol_tabulator,

    mop_character_symbol_left,
    mop_character_symbol_right,
    mop_character_symbol_up,
    mop_character_symbol_down,

    mop_character_symbol_home,
    mop_character_symbol_end,

    mop_character_symbol_page_up,
    mop_character_symbol_page_down,
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

    mop_key_left  = VK_LEFT,
    mop_key_right = VK_RIGHT,
    mop_key_down  = VK_DOWN,
    mop_key_up    = VK_UP,

    mop_key_control = VK_CONTROL,
    mop_key_alt     = VK_MENU,

    mop_key_plus = VK_OEM_PLUS,
    mop_key_minus = VK_OEM_MINUS,

    mop_key_f0 = VK_F1 - 1,

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

struct mop_thread
{
    HANDLE handle;
    mop_u8 is_running;
};

struct mop_library
{
    HMODULE module;
};

struct mop_hot_reload_state
{
    mop_library             library;
    mop_hot_update_function hot_update;
    mop_u64                 write_timestamp;
};

struct mop_file_search_iterator
{
    struct
    {
        mop_u8           cdirectory_path[MAX_PATH];
        mop_u32          cdirectory_path_count;
        WIN32_FIND_DATAA find_data;
        HANDLE           handle;
    } win32;
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

void mop_win32_add_character(mop_platform *platform, mop_u32 code, mop_b8 is_symbol, mop_b8 with_shift, mop_b8 with_alt, mop_b8 with_control)
{
    if (platform->character_count < mop_carray_count(platform->characters))
    {
        mop_character *character = &platform->characters[platform->character_count];
        platform->character_count++;

        character->code = code;
        character->is_symbol = is_symbol;
        character->with_shift   = with_shift;
        character->with_alt     = with_alt;
        character->with_control = with_control;
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

    mop_b8 with_shift   = (GetAsyncKeyState(VK_SHIFT) >> 15) & 1;
    mop_b8 with_alt     = (GetAsyncKeyState(VK_MENU) >> 15) & 1;
    mop_b8 with_control = (GetAsyncKeyState(VK_CONTROL) >> 15) & 1;

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
            switch (msg.wParam)
            {
                case VK_SHIFT:
                {
                    with_shift = mop_false;
                } break;

                case VK_MENU:
                {
                    with_alt = mop_false;
                } break;

                case VK_CONTROL:
                {
                    with_control = mop_false;
                } break;
            }

            mop_key_event_update(platform, msg.wParam, mop_false);
        } break;

        case WM_KEYDOWN:
        case WM_SYSKEYDOWN:
        {
            switch (msg.wParam)
            {
                case VK_SHIFT:
                {
                    with_shift = mop_true;
                } break;

                case VK_MENU:
                {
                    with_alt = mop_true;
                } break;

                case VK_CONTROL:
                {
                    with_control = mop_true;
                } break;

                case VK_BACK:
                {
                    mop_win32_add_character(platform, mop_character_symbol_backspace, mop_true, with_shift, with_alt, with_control);
                } break;

                case VK_DELETE:
                {
                    mop_win32_add_character(platform, mop_character_symbol_delete, mop_true, with_shift, with_alt, with_control);
                } break;

                case VK_RETURN:
                {
                    mop_win32_add_character(platform, mop_character_symbol_return, mop_true, with_shift, with_alt, with_control);
                } break;

                case VK_TAB:
                {
                    mop_win32_add_character(platform, mop_character_symbol_tabulator, mop_true, with_shift, with_alt, with_control);
                } break;

                case VK_LEFT:
                {
                    mop_win32_add_character(platform, mop_character_symbol_left, mop_true, with_shift, with_alt, with_control);
                } break;

                case VK_RIGHT:
                {
                    mop_win32_add_character(platform, mop_character_symbol_right, mop_true, with_shift, with_alt, with_control);
                } break;

                case VK_DOWN:
                {
                    mop_win32_add_character(platform, mop_character_symbol_down, mop_true, with_shift, with_alt, with_control);
                } break;

                case VK_UP:
                {
                    mop_win32_add_character(platform, mop_character_symbol_up, mop_true, with_shift, with_alt, with_control);
                } break;

                case VK_HOME:
                {
                    mop_win32_add_character(platform, mop_character_symbol_home, mop_true, with_shift, with_alt, with_control);
                } break;

                case VK_END:
                {
                    mop_win32_add_character(platform, mop_character_symbol_end, mop_true, with_shift, with_alt, with_control);
                } break;

                case VK_PRIOR:
                {
                    mop_win32_add_character(platform, mop_character_symbol_page_up, mop_true, with_shift, with_alt, with_control);
                } break;

                case VK_NEXT:
                {
                    mop_win32_add_character(platform, mop_character_symbol_page_down, mop_true, with_shift, with_alt, with_control);
                } break;

                default:
                {
                    if (with_alt || with_control)
                        mop_win32_add_character(platform, msg.wParam, mop_false, with_shift, with_alt, with_control);
                }
            }

            if (!(msg.lParam & (1 << 30)))
                mop_key_event_update(platform, msg.wParam, mop_true);
        } break;

        case WM_CHAR:
        {
            if (msg.wParam >= ' ')
                mop_win32_add_character(platform, msg.wParam, mop_false, with_shift, with_alt, with_control);
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

mop_get_characters_signature
{
    mop_character_array characters;
    characters.count = platform->character_count;
    characters.base  = platform->characters;

    return characters;
}

mop_get_realtime_counter_signature
{
    mop_u64 counter;
    mop_require(QueryPerformanceCounter((LARGE_INTEGER *) &counter));

    return counter;
}

mop_get_local_date_and_time_signature
{
    SYSTEMTIME local_time;
    GetLocalTime(&local_time);

    mop_date_and_time result;
    result.millisecond = local_time.wMilliseconds;
    result.second      = local_time.wSecond;
    result.minute      = local_time.wMinute;
    result.hour        = local_time.wHour;
    result.day         = local_time.wDay;
    result.month       = local_time.wMonth - 1;
    result.year        = local_time.wYear;
    result.week_day    = (local_time.wDayOfWeek + mop_week_day_count - 1) % mop_week_day_count;
    return result;
}

void mop_win32_to_cpath(mop_u8 cpath[MAX_PATH], mop_string path)
{
    mop_require(path.count < MAX_PATH);

    for (mop_u32 i = 0; i < path.count; i++)
    {
        mop_assert(path.base[i] != '\\'); // make paths consistent
        cpath[i] = path.base[i];
    }

    if (path.count < MAX_PATH)
        cpath[path.count] = 0;
}

mop_get_file_byte_count_signature
{
    mop_u8 cpath[MAX_PATH];
    mop_win32_to_cpath(cpath, path);

    WIN32_FILE_ATTRIBUTE_DATA data;
    if (!GetFileAttributesExA((mop_cstring) cpath, GetFileExInfoStandard, &data))
    {
        mop_s32 error = GetLastError();
        mop_require(error == ERROR_FILE_NOT_FOUND);

        return mop_sl(mop_get_file_byte_count_result) {0};
    }

    mop_u64 byte_count = (mop_u64) data.nFileSizeHigh << 32 | data.nFileSizeLow;
    return mop_sl(mop_get_file_byte_count_result) { byte_count, mop_true };
}

mop_get_file_write_timestamp_signature
{
    mop_u8 cpath[MAX_PATH];
    mop_win32_to_cpath(cpath, path);

    WIN32_FILE_ATTRIBUTE_DATA data;
    if (!GetFileAttributesExA((mop_cstring) cpath, GetFileExInfoStandard, &data))
    {
        mop_s32 error = GetLastError();
        mop_require(error == ERROR_FILE_NOT_FOUND);

        return 0;
    }

    return *(mop_u64 *) &data.ftLastWriteTime;
}

mop_path_is_directory_signature
{
    if (!path.count)
        return mop_true;

    mop_u8 cpath[MAX_PATH];
    mop_win32_to_cpath(cpath, path);

    mop_u32 file_attributes = GetFileAttributes((mop_cstring) cpath);
    return (file_attributes != INVALID_FILE_ATTRIBUTES && (file_attributes & FILE_ATTRIBUTE_DIRECTORY));
}

mop_read_file_signature
{
    mop_u8 cpath[MAX_PATH];
    mop_win32_to_cpath(cpath, path);

    HANDLE handle = CreateFile((mop_cstring) cpath, GENERIC_READ, FILE_SHARE_READ, mop_null, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, mop_null);
    if (handle == INVALID_HANDLE_VALUE)
    {
        mop_s32 error = GetLastError();
        mop_require((error == ERROR_FILE_NOT_FOUND) || (error == ERROR_SHARING_VIOLATION));

        return mop_sl(mop_read_file_result) {0};
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
    mop_u8 cpath[MAX_PATH];
    mop_win32_to_cpath(cpath, path);

    HANDLE handle = CreateFile((mop_cstring) cpath, GENERIC_WRITE, 0, mop_null, CREATE_ALWAYS, FILE_ATTRIBUTE_NORMAL, mop_null);
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

mop_copy_file_signature
{
    mop_u8 to_cpath[MAX_PATH];
    mop_win32_to_cpath(to_cpath, to_path);

    mop_u8 from_cpath[MAX_PATH];
    mop_win32_to_cpath(from_cpath, from_path);

    mop_b8 ok = CopyFileA((mop_cstring) from_cpath, (mop_cstring) to_cpath, (mop_s32) !override);
    return ok;
}

mop_normalize_path_signature
{
    for (mop_usize i = 0; i < path->count; i++)
    {
        if (path->base[i] == '\\')
            path->base[i] = '/';
    }

    if (path->count == 1 && path->base[path->count - 1] == '.')
        path->count = 0;
    else if (path->base[path->count - 1] == '/')
        path->count--;
    else if (path->count >= 2 && path->base[path->count - 2] == '/' && path->base[path->count - 1] == '.')
        path->count -= 2;
    else if (path->count >= 3 && path->base[path->count - 3] == '/' && path->base[path->count - 2] == '.' && path->base[path->count - 1] == '.')
        path->count -= 3;
    else
    {
        mop_assert(path->count != 2 || path->base[path->count - 2] != '.' || path->base[path->count - 1] != '.');
    }
}

mop_file_search_init_signature
{
    mop_file_search_iterator file_iterator;
    mop_win32_to_cpath(file_iterator.win32.cdirectory_path, directory_path);

    mop_string path = mop_sl(mop_string) { file_iterator.win32.cdirectory_path, directory_path.count };
    mop_normalize_path(&path);
    mop_assert(mop_path_is_directory(platform, path));

    if (!path.count)
    {
        file_iterator.win32.cdirectory_path[0] = '.';
        file_iterator.win32.cdirectory_path[1] = '\\';
        file_iterator.win32.cdirectory_path[2] = '*';
        file_iterator.win32.cdirectory_path[3] = 0;
        file_iterator.win32.cdirectory_path_count = 0;
    }
    else
    {
        mop_assert(path.count + 1 < mop_carray_count(file_iterator.win32.cdirectory_path));
        file_iterator.win32.cdirectory_path[path.count] = '\\';
        file_iterator.win32.cdirectory_path[path.count + 1] = '*';

        if (path.count + 2 < mop_carray_count(file_iterator.win32.cdirectory_path))
           file_iterator.win32.cdirectory_path[path.count + 2] = 0;

        file_iterator.win32.cdirectory_path_count = path.count + 1; // including '/'
    }

    file_iterator.win32.handle = FindFirstFileA((mop_cstring) file_iterator.win32.cdirectory_path, &file_iterator.win32.find_data);

    if (!path.count)
        file_iterator.win32.cdirectory_path[0] = 0;
    else if (path.count < mop_carray_count(file_iterator.win32.cdirectory_path))
    {
        file_iterator.win32.cdirectory_path[path.count] = '/';
        file_iterator.win32.cdirectory_path[path.count + 1] = 0;
    }

    if (file_iterator.win32.handle == INVALID_HANDLE_VALUE)
        file_iterator.win32.handle = mop_null;

    return file_iterator;
}

mop_file_search_advance_signature
{
    if (!file_iterator->win32.handle)
        return mop_false;

    result->filepath = mop_sl(mop_string) { result->buffer };
    result->is_directory = (file_iterator->win32.find_data.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY) != 0;

    mop_assert(file_iterator->win32.cdirectory_path_count <= mop_carray_count(result->buffer));
    result->filepath.count = file_iterator->win32.cdirectory_path_count;

    for (mop_u32 i = 0; i < file_iterator->win32.cdirectory_path_count; i++)
        result->buffer[i] = file_iterator->win32.cdirectory_path[i];

    if (file_iterator->win32.find_data.cFileName[0] == '.' && file_iterator->win32.find_data.cFileName[1] == '\0')
    {
        // remove / from path
        if (result->filepath.count)
            result->filepath.count--;
    }
    else if (file_iterator->win32.find_data.cFileName[0] == '.' && file_iterator->win32.find_data.cFileName[1] == '.' && file_iterator->win32.find_data.cFileName[2] == 0)
    {
        if (!file_iterator->win32.cdirectory_path_count)
        {
            result->filepath.count = 2;
            result->filepath.base[0] = '.';
            result->filepath.base[1] = '.';
        }
        else
        {
            mop_b8 found_slash = mop_false;
            assert(result->filepath.count >= 2);

            for (u32 i = 0; i < result->filepath.count; i++)
            {
                if (result->filepath.base[result->filepath.count - 2 - i] == '/')
                {
                    result->filepath.count = result->filepath.count - 2 - i;
                    found_slash = mop_true;
                    break;
                }
            }

            if (!found_slash)
                result->filepath.count = 0;
        }
    }
    else
    {
        for (mop_u32 i = 0; file_iterator->win32.find_data.cFileName[i]; i++)
        {
            mop_assert(result->filepath.count + 1 <= mop_carray_count(result->buffer));
            result->filepath.base[result->filepath.count] = file_iterator->win32.find_data.cFileName[i];
            result->filepath.count++;
        }

    #if 0
        if (result->is_directory)
        {
            mop_assert(result->filepath.count + 1 <= mop_carray_count(result->buffer));
            result->filepath.base[result->filepath.count] = '/';
            result->filepath.count++;
        }
    #endif
    }

    if (!FindNextFileA(file_iterator->win32.handle, &file_iterator->win32.find_data))
        file_iterator->win32.handle = mop_null;

    return mop_true;
}

mop_allocate_signature
{
    mop_u8_array data;
    data.count = byte_count;
    data.base  = (mop_u8 *) VirtualAlloc(mop_null, data.count, MEM_COMMIT, PAGE_READWRITE);
    mop_require(data.base);

    return data;
}

mop_free_signature
{
    mop_require(VirtualFree(base, 0, MEM_RELEASE));
}

mop_sleep_milliseconds_signature
{
    Sleep(milliseconds);
}

mop_thread_init_signature
{
    mop_assert(!thread->handle);
    thread->handle = CreateThread(mop_null, 0, (LPTHREAD_START_ROUTINE) function, user_data, CREATE_SUSPENDED, mop_null);
    mop_require(thread->handle);
}

mop_thread_start_signature
{
    mop_assert(thread->handle && !thread->is_running);
    mop_require(ResumeThread(thread->handle));
    thread->is_running = mop_true;
}

mop_thread_wait_for_exit_signature
{
    mop_assert(thread->handle && thread->is_running);
    mop_require(WaitForSingleObject(thread->handle, INFINITE) == WAIT_OBJECT_0);
    mop_require(CloseHandle(thread->handle));

    *thread  = mop_sl(mop_thread) {0};
}

mop_thread_kill_signature
{
    mop_assert(thread->handle && thread->is_running);
    mop_require(TerminateThread(thread->handle, 0));
    mop_require(CloseHandle(thread->handle));

    *thread  = mop_sl(mop_thread) {0};
}

mop_atomic_increment_s64_signature
{
    return _InterlockedIncrement64(value);
}

mop_atomic_decrement_s64_signature
{
    return _InterlockedDecrement64(value);
}

mop_atomic_add_s64_signature
{
    return _InlineInterlockedAdd64(value, delta);
}

mop_atomic_compare_exchange_s32_signature
{
    return (mop_s32) InterlockedCompareExchange((LONG *) value, (LONG) new_value, (LONG) expected_value);
}

mop_load_library_signature
{
    mop_u8 cname[MAX_PATH];
    mop_assert(name.count + 4 < mop_carray_count(cname));
    mop_win32_to_cpath(cname, name);
    cname[name.count] = '.';
    cname[name.count + 1] = 'd';
    cname[name.count + 2] = 'l';
    cname[name.count + 3] = 'l';
    cname[name.count + 4] = '\0';

    library->module = LoadLibraryA((mop_cstring) cname);
    return library->module != mop_null;
}

mop_unload_library_signature
{
    mop_assert(library->module);
    mop_require(FreeLibrary(library->module));
    library->module = mop_null;
}

mop_load_symbol_signature
{
    mop_assert(library->module);

    // not a path, but probably big enough
    mop_u8 cname[MAX_PATH];
    mop_win32_to_cpath(cname, name);

    mop_u8 *symbol = (mop_u8 *) GetProcAddress(library->module, (mop_cstring) cname);
    return symbol;
}

mop_hot_reload_signature
{
    mop_u8 dll_name_buffer[MAX_PATH];
    mop_string dll_name = { dll_name_buffer, name.count + 4 };

    mop_win32_to_cpath(dll_name_buffer, name);
    dll_name_buffer[name.count] = '.';
    dll_name_buffer[name.count + 1] = 'd';
    dll_name_buffer[name.count + 2] = 'l';
    dll_name_buffer[name.count + 3] = 'l';
    dll_name_buffer[name.count + 4] = '\0';

    mop_u64 write_timestamp = mop_get_file_write_timestamp(platform, dll_name);
    if (write_timestamp == state->write_timestamp)
        return mop_false;

    state->write_timestamp = write_timestamp;

    mop_library test_library = {0};
    if (!mop_load_library(platform, &test_library, name))
        return mop_false;

    {
        mop_hot_update_function hot_update = (mop_hot_update_function) mop_load_symbol(platform, &test_library, mop_hot_update_name);
        mop_unload_library(platform, &test_library);

        if (!hot_update)
            return mop_false;
    }

    if (state->library.module)
        mop_unload_library(platform, &state->library);

    mop_u8 hot_name_buffer[] = "hot_00.dll";
    mop_string hot_name = { hot_name_buffer, mop_carray_count(hot_name_buffer) - 1 };

    mop_u32 i;
    for (i = 1; i < 33; i++)
    {
        hot_name_buffer[4] = '0' + (i / 10);
        hot_name_buffer[5] = '0' + (i % 10);

        if (mop_copy_file(platform, hot_name, dll_name, mop_true))
            break;
    }

    mop_require(i < 33);

    hot_name.count -= 4; // without .dll
    mop_require(mop_load_library(platform, &state->library, hot_name));
    state->hot_update = (mop_hot_update_function) mop_load_symbol(platform, &state->library, mop_hot_update_name);

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

mop_key_state_was_pressed_signature
{
    return state.half_transition_overflow || (state.half_transition_count >= 2 - state.is_active);
}

mop_key_state_was_released_signature
{
    return state.half_transition_overflow || (state.half_transition_count >= 1 + state.is_active);
}

mop_key_is_active_signature
{
    mop_assert(key < mop_carray_count(platform->keys));
    mop_key_state state = platform->keys[key];
    return state.is_active;
}

mop_key_was_pressed_signature
{
    mop_assert(key < mop_carray_count(platform->keys));
    mop_key_state state = platform->keys[key];
    return mop_key_state_was_pressed(state);
}

mop_key_was_released_signature
{
    mop_assert(key < mop_carray_count(platform->keys));
    mop_key_state state = platform->keys[key];
    return mop_key_state_was_released(state);
}

#endif