
// single header platform layer library

#if !defined mop_h
#define mop_h

#ifdef __cplusplus
extern "C"
#endif

typedef unsigned char      mop_u8;
typedef unsigned short     mop_u16;
typedef unsigned int       mop_u32;
typedef unsigned long long mop_u64;

typedef signed short     mop_s16;
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

#if !defined mop_assert_message
#if defined mop_debug

#define mop_assert_message(x, message, ...) if (!(x)) { mop_fatal_error("Assertion Failure", __FILE__, __FUNCTION__, __LINE__, # x, message, __VA_ARGS__); }

#else

#define mop_assert_message(...)

#endif

#endif

#define mop_assert(x) mop_assert_message(x, "")

#if !defined mop_require_message

#define mop_require_message(x, message, ...) if (!(x)) { mop_fatal_error("Requirement Failure", __FILE__, __FUNCTION__, __LINE__, # x, message, __VA_ARGS__); }

#endif

#define mop_require(x) mop_require_message(x, "")

#define mop_cases_complete(format, ...) default: mop_assert_message(false, "unhandled switch case " format, __VA_ARGS__)

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

#define mop_path_max_count 512

typedef struct
{
    mop_s32 x;
    mop_s32 y;
} mop_point;

typedef struct
{
    mop_point size;
    mop_point relative_mouse_position;
    mop_b8    requested_close;
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
    mop_u8     buffer[mop_path_max_count];
    mop_string filepath;
    mop_b8     is_directory;
    mop_b8     is_search_directory;
    mop_b8     is_parent_directory;
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

        mop_u8 mask;
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

#ifndef mop_vec2_type
#define mop_vec2_type mop_vec2

typedef union
{
    struct
    {
        mop_f32 x;
        mop_f32 y;
    };

    mop_f32 values[2];
} mop_vec2;

#endif

typedef struct
{
    mop_vec2_type left_stick;
    mop_vec2_type right_stick;

    mop_f32 left_trigger;
    mop_f32 right_trigger;

    mop_key_state left_thumb;
    mop_key_state right_thumb;

    mop_key_state start;
    mop_key_state select;

    mop_key_state left_shoulder;
    mop_key_state right_shoulder;

    mop_key_state dpad_down;
    mop_key_state dpad_right;
    mop_key_state dpad_up;
    mop_key_state dpad_left;

    mop_key_state action_down;
    mop_key_state action_right;
    mop_key_state action_up;
    mop_key_state action_left;

    mop_b8 is_enabled;
} mop_gamepad;

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
    mop_u16 millisecond;
    mop_u8  second;
    mop_u8  minute;
    mop_u8  hour;
    mop_u8  day;
    mop_u8  month;
    mop_u16 year;

    mop_u8 week_day;
} mop_date_and_time;

typedef struct
{
    mop_u32 argument_count;
    mop_u32 text_byte_count;
} mop_command_line_info;

typedef struct
{
    mop_b8     ok;
    mop_s32    exit_code;
    mop_string output;
} mop_execute_command_result;

typedef enum mop_key mop_key;

struct mop_platform;

extern const mop_u32 mop_month_day_count[12];

#define mop_fatal_error_signature void mop_fatal_error(mop_cstring label, mop_cstring file, mop_cstring function, mop_u32 line_number, mop_cstring condition_text, mop_cstring message, ...)
mop_fatal_error_signature;

#define mop_init_signature void mop_init(mop_platform *platform)
mop_init_signature;

// starts off hidden
#define mop_window_init_signature void mop_window_init(mop_platform *platform, mop_window *window, mop_cstring title, mop_s32 width, mop_s32 height)
mop_window_init_signature;

#define mop_window_set_icon_signature void mop_window_set_icon(mop_platform *platform, mop_window *window, mop_cstring icon_name)
mop_window_set_icon_signature;

#define mop_window_show_signature void mop_window_show(mop_platform *platform, mop_window *window)
mop_window_show_signature;

#define mop_window_set_fullscreen_signature void mop_window_set_fullscreen(mop_platform *platform, mop_window *window, mop_b8 enable_fullscreen)
mop_window_set_fullscreen_signature;

#define mop_window_get_info_signature mop_window_info mop_window_get_info(mop_platform *platform, mop_window *window)
mop_window_get_info_signature;

#define mop_get_command_line_info_signature mop_command_line_info mop_get_command_line_info(mop_platform *platform)
mop_get_command_line_info_signature;

#define mop_get_command_line_arguments_signature mop_u32 mop_get_command_line_arguments(mop_string text_buffer, mop_u32 argument_buffer_count, mop_string *argument_buffer)
mop_get_command_line_arguments_signature;

#define mop_get_program_directory_signature mop_string mop_get_program_directory(mop_platform *platform)
mop_get_program_directory_signature;

#define mop_get_working_directory_signature mop_string mop_get_working_directory(mop_platform *platform)
mop_get_working_directory_signature;

#define mop_update_delta_seconds_signature void mop_update_delta_seconds(mop_platform *platform)
mop_update_delta_seconds_signature;

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

// left < right  => -1
// left == right =>  0
// left > right  =>  1
#define mop_compare_timestamps_signature mop_s32 mop_compare_timestamps(mop_platform *platform, mop_u64 left, mop_u64 right)
mop_compare_timestamps_signature;

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

#define mop_create_directory_siganture mop_b8 mop_create_directory(mop_platform *platform, mop_string path)
mop_create_directory_siganture;

#define mop_file_search_init_signature mop_file_search_iterator mop_file_search_init(mop_platform *platform, mop_string directory_path)
mop_file_search_init_signature;

#define mop_file_search_advance_signature mop_b8 mop_file_search_advance(mop_file_search_result *result, mop_platform *platform, mop_file_search_iterator *file_iterator)
mop_file_search_advance_signature;

#define mop_allocate_signature mop_u8_array mop_allocate(mop_platform *platform, mop_usize byte_count)
mop_allocate_signature;

#define mop_free_signature void mop_free(mop_platform *platform, mop_u8 *base)
mop_free_signature;

#define mop_sleep_milliseconds_signature void mop_sleep_milliseconds(mop_platform *platform, mop_u32 milliseconds)
mop_sleep_milliseconds_signature;

#define mop_thread_function(name) mop_s32 name(mop_u8 *user_data)
typedef mop_thread_function((*mop_thread_function_type));

#define mop_thread_init_signature void mop_thread_init(mop_platform *platform, mop_thread *thread, mop_thread_function_type function, mop_u8 *user_data)
mop_thread_init_signature;

#define mop_thread_start_signature void mop_thread_start(mop_platform *platform, mop_thread *thread)
mop_thread_start_signature;

#define mop_thread_wait_for_exit_signature void mop_thread_wait_for_exit(mop_platform *platform, mop_thread *thread)
mop_thread_wait_for_exit_signature;

#define mop_thread_kill_signature void mop_thread_kill(mop_platform *platform, mop_thread *thread)
mop_thread_kill_signature;

#define mop_bit_count_u64_signature mop_u32 mop_bit_count_u64(mop_u64 value)
mop_bit_count_u64_signature;

#define mop_atomic_increment_s64_signature mop_s64 mop_atomic_increment_s64(mop_platform *platform, mop_s64 *value)
mop_atomic_increment_s64_signature;

#define mop_atomic_decrement_s64_signature mop_s64 mop_atomic_decrement_s64(mop_platform *platform, mop_s64 *value)
mop_atomic_decrement_s64_signature;

#define mop_atomic_add_s64_signature mop_s64 mop_atomic_add_s64(mop_platform *platform, mop_s64 *value, mop_s64 delta)
mop_atomic_add_s64_signature;

#define mop_atomic_sub_s64_signature mop_s64 mop_atomic_sub_s64(mop_platform *platform, mop_s64 *value, mop_s64 delta)
mop_atomic_sub_s64_signature;

#define mop_atomic_compare_exchange_s32_signature mop_s64 mop_atomic_compare_exchange_s32(mop_platform *platform, mop_s32 *value, mop_s32 expected_value, mop_s32 new_value)

#define mop_execute_command_siganture mop_execute_command_result mop_execute_command(mop_string output_buffer, mop_string command_line, mop_string working_directory)
mop_execute_command_siganture;

#define mop_load_library_signature mop_b8 mop_load_library(mop_platform *platform, mop_library *library, mop_string name)
mop_load_library_signature;

#define mop_unload_library_signature void mop_unload_library(mop_platform *platform, mop_library *library)
mop_unload_library_signature;

#define mop_load_symbol_signature mop_u8 * mop_load_symbol(mop_platform *platform, mop_library *library, mop_string name)
mop_load_symbol_signature;

#define mop_hot_update_type(name) void name(mop_platform *platform, mop_u8_array data, mop_b8 did_reload)
typedef mop_hot_update_type((*mop_hot_update_function));

#define mop_hot_reload_signature mop_b8 mop_hot_reload(mop_platform *platform, mop_hot_reload_state *state, mop_string name)

#define mop_read_embedded_file_signature mop_u8_array mop_read_embedded_file(mop_platform *platform, mop_string name)
mop_read_embedded_file_signature;

// TODO: better name
#define mop_dubugger_is_present_signature mop_b8 mop_dubugger_is_present()
mop_dubugger_is_present_signature;

#define mop_debug_break_signature void mop_debug_break()
mop_debug_break_signature;

#define mop_key_state_was_pressed_signature mop_b8 mop_key_state_was_pressed(mop_key_state state)
mop_key_state_was_pressed_signature;

#define mop_key_state_consume_pressed_signature mop_b8 mop_key_state_consume_pressed(mop_key_state *state)
mop_key_state_consume_pressed_signature;

#define mop_key_state_was_released_signature mop_b8 mop_key_state_was_released(mop_key_state state)
mop_key_state_was_released_signature;

#define mop_key_state_was_active_signature mop_b8 mop_key_state_was_active(mop_key_state state)
mop_key_state_was_active_signature;

#define mop_key_was_active_signature mop_b8 mop_key_was_active(mop_platform *platform, mop_u32 key)
mop_key_was_active_signature;

#define mop_key_was_pressed_signature mop_b8 mop_key_was_pressed(mop_platform *platform, mop_u32 key)
mop_key_was_pressed_signature;

#define mop_key_was_released_signature mop_b8 mop_key_was_released(mop_platform *platform, mop_u32 key)
mop_key_was_released_signature;

#define mop_key_state_event_update_signature void mop_key_state_event_update(mop_key_state *state, mop_b8 is_active)
mop_key_state_event_update_signature;

#define mop_key_state_poll_update_signature void mop_key_state_poll_update(mop_key_state *state, mop_b8 is_active)
mop_key_state_poll_update_signature;

#define mop_key_event_update_signature void mop_key_event_update(mop_platform *platform, mop_u32 key, mop_b8 is_active)
mop_key_event_update_signature;

#define mop_key_poll_update_signature void mop_key_poll_update(mop_platform *platform, mop_u32 key, mop_b8 is_active)
mop_key_poll_update_signature;

#define mop_gamepad_count 4

#define mop_get_gamepad_signature mop_gamepad mop_get_gamepad(mop_platform *platform, mop_u32 index)
mop_get_gamepad_signature;

const mop_string mop_hot_update_name = mop_sc("mop_hot_update");

#ifdef __cplusplus

// in C++ somehow the 'extern "C"' has to be provided extra if we want the function to be exported
// even though we are already in an 'extern "C"' scope
#define mop_hot_update_signature extern "C" __declspec(dllexport) mop_hot_update_type(mop_hot_update)

#else

// in C, we don't want to add 'extern "C"'
#define mop_hot_update_signature __declspec(dllexport) mop_hot_update_type(mop_hot_update)

#endif

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

#define mop_has_avx_support_signature mop_b8 mop_has_avx_support(mop_platform *platform)
mop_has_avx_support_signature;

#endif

#if defined mop_implementation
#undef mop_implementation

#if defined(_WIN32) || defined(WIN32)

#include <windows.h>
#include <xinput.h>
#include <stdio.h>
#include <intrin.h>

#pragma comment(lib, "gdi32")
#pragma comment(lib, "user32")
#pragma comment(lib, "shell32")

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

    mop_character_symbol_f1  = VK_F1,
    mop_character_symbol_f24 = VK_F24,
    mop_character_symbol_f_max = mop_character_symbol_f24,
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

    mop_key_shift   = VK_SHIFT,
    mop_key_control = VK_CONTROL,
    mop_key_alt     = VK_MENU,

    mop_key_plus = VK_OEM_PLUS,
    mop_key_minus = VK_OEM_MINUS,

    mop_key_f0 = VK_F1 - 1,

};

typedef struct
{
    HWND    window_handles[32];
    mop_u32 count;
} mop_win32_close_window_requests;

struct mop_library
{
    HMODULE module;
};

struct mop_platform
{
    mop_character characters[32];
    mop_u32 character_count;
    mop_u32 missed_character_count;
    mop_b8  previous_character_was_key_down;

    mop_key_state keys[256];
    mop_gamepad gamepads[mop_gamepad_count];

    mop_u8     program_directory_buffer[mop_path_max_count];
    mop_string program_directory;

    mop_u8     working_directory_buffer[mop_path_max_count];
    mop_string working_directory;

    mop_win32_close_window_requests close_window_requests;

    mop_point previous_mouse_position;
    mop_point mouse_position;

    mop_u64 realtime_counter_ticks_per_second;
    mop_u64 last_realtime_counter;

    mop_f32 delta_seconds;

    mop_b8 do_quit;

    struct
    {
        HINSTANCE   instance;
        mop_library xinput_library;
        POINT cursor;
    } win32;
};

struct mop_window
{
    b8              is_hidden;
    b8              is_fullscreen;

    HWND            handle;
    HDC             device_context;
    WINDOWPLACEMENT placement_backup;
};

struct mop_thread
{
    HANDLE handle;
    mop_u8 is_running;
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

const mop_cstring mop_win32_window_class_name = "window class";

#define mop_XInputGetState_signature(name) DWORD name(DWORD dwUserIndex, XINPUT_STATE *pState)
typedef mop_XInputGetState_signature((*mop_XInputGetState_type));

#define mop_XInputGetCapabilities_signature(name) DWORD name(DWORD dwUserIndex, DWORD dwFlags, XINPUT_CAPABILITIES *pCapabilities)
typedef mop_XInputGetCapabilities_signature((*mop_XInputGetCapabilities_type));

mop_XInputGetState_type        mop_XInputGetState;
mop_XInputGetCapabilities_type mop_XInputGetCapabilities;

mop_win32_close_window_requests mop_win32_global_close_window_requests;
mop_b8                          mop_win32_global_check_gamepad_connections;

mop_XInputGetState_signature(mop_dummy_XInputGetState)
{
    return 0;
}

mop_XInputGetCapabilities_signature(mop_dummy_XInputGetCapabilities)
{
    return 0;
}

mop_fatal_error_signature
{
    char text_buffer[1024];
    mop_usize text_count = mop_carray_count(text_buffer);
    mop_string text = { (mop_u8 *) text_buffer, text_count };

    mop_s32 count = snprintf((char *) text.base, text.count, "%s\n%s,%i:\n\n    Condition '%s' failed.\n\n", file, function, line_number, condition_text);
    if (count >= 0)
    {
        text.base  += count;
        text.count -= count;
    }

    mop_u32 error = GetLastError();
    if (error)
    {
        mop_s32 count = snprintf((char *) text.base, text.count, "GetLastError() = %i\n\n", error);
        if (count >= 0)
        {
            text.base  += count;
            text.count -= count;
        }
    }

    {
        va_list arguments;

        va_start(arguments, message);

        mop_s32 count = vsnprintf((char *) text.base, text.count, message, arguments);

        va_end(arguments);

        if (count >= 0)
        {
            text.base  += count;
            text.count -= count;
        }
    }

    if (text.count && (text.count < text_count))
        text.base[0] = '\0';
    else
        text_buffer[text_count - 1] = '\0';

    printf("%s:\n", label);
    printf("%s\n", text_buffer);

    mop_s32 result = MessageBox(mop_null, text_buffer, label, MB_RETRYCANCEL | MB_ICONERROR);
    switch (result)
    {
        case IDCANCEL:
        {
            ExitProcess(-1);
        } break;

        case IDRETRY:
        {
            if (IsDebuggerPresent())
                __debugbreak();
            else
                ExitProcess(-1);
        } break;
    }
}

LRESULT CALLBACK mop_win32_window_callback(HWND window_handle, UINT msg, WPARAM w_param, LPARAM l_param)
{
    switch (msg)
    {
        // don't destroy the window, since we typically want to react to that request
        // prevents WM_DESTROY to be called
        case WM_CLOSE:
        {
            // maybe a bit of HACK , but should work with hot code reloading
            mop_win32_close_window_requests *requests = &mop_win32_global_close_window_requests;
            mop_assert(requests->count < mop_carray_count(requests->window_handles));
            requests->window_handles[requests->count] = window_handle;
            requests->count += 1;
            return 0;
        } break;

        // disable beep when pressing alt + ...
        // since we have no menu shortcuts
        case WM_MENUCHAR:
        {
            return MNC_CLOSE << 16;
        } break;

        case WM_DEVICECHANGE:
        {
            mop_win32_global_check_gamepad_connections = true;
        } break;
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

    platform->win32.instance = instance;

    platform->win32.xinput_library = mop_sl(mop_library) {0};
    if (mop_load_library(platform, &platform->win32.xinput_library, mop_s("Xinput1_4")) ||
        mop_load_library(platform, &platform->win32.xinput_library, mop_s("Xinput1_3")) ||
        mop_load_library(platform, &platform->win32.xinput_library, mop_s("Xinput9_1_0")))
    {
        mop_XInputGetState        = (mop_XInputGetState_type) mop_load_symbol(platform, &platform->win32.xinput_library, mop_s("XInputGetState"));
        mop_XInputGetCapabilities = (mop_XInputGetCapabilities_type) mop_load_symbol(platform, &platform->win32.xinput_library, mop_s("XInputGetCapabilities"));

        mop_win32_global_check_gamepad_connections = true;
    }
    else
    {
        mop_XInputGetState        = mop_dummy_XInputGetState;
        mop_XInputGetCapabilities = mop_dummy_XInputGetCapabilities;
    }

    mop_require(mop_XInputGetState);
    mop_require(mop_XInputGetCapabilities);
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

    window->device_context = GetDC(window->handle);
    mop_require(window->device_context);

    mop_require(QueryPerformanceFrequency((LARGE_INTEGER *) &platform->realtime_counter_ticks_per_second));

    window->is_hidden = true;
}

mop_window_set_icon_signature
{
    HICON icon = LoadIconA(platform->win32.instance, icon_name);
    if (icon)
        SetClassLongPtrA(window->handle, GCLP_HICON, (LONG_PTR) icon);
}

mop_window_show_signature
{
    assert(window->is_hidden);
    ShowWindow(window->handle, SW_SHOW);
    window->is_hidden = false;
}

mop_window_set_fullscreen_signature
{
    if (window->is_fullscreen == enable_fullscreen)
        return;

    mop_u32 style = GetWindowLongA(window->handle, GWL_STYLE);
    if (style & WS_OVERLAPPEDWINDOW)
    {
        mop_assert(!window->is_fullscreen);

        MONITORINFO monitor_info;
        monitor_info.cbSize = sizeof(MONITORINFO);
        mop_require(GetWindowPlacement(window->handle, &window->placement_backup) && GetMonitorInfoA(MonitorFromWindow(window->handle, MONITOR_DEFAULTTOPRIMARY), &monitor_info));
        // window->size.width  = monitor_info.rcMonitor.right - monitor_info.rcMonitor.left;
        // window->size.height = monitor_info.rcMonitor.bottom - monitor_info.rcMonitor.top;

        SetWindowLongA(window->handle, GWL_STYLE, style & ~WS_OVERLAPPEDWINDOW);
        SetWindowPos(window->handle, HWND_TOP,
                        monitor_info.rcMonitor.left, monitor_info.rcMonitor.top,
                        monitor_info.rcMonitor.right - monitor_info.rcMonitor.left,
                        monitor_info.rcMonitor.bottom - monitor_info.rcMonitor.top, SWP_NOOWNERZORDER | SWP_FRAMECHANGED);


    }
    else
    {
        mop_assert(window->is_fullscreen);

        style |= WS_OVERLAPPEDWINDOW;

        //if (!window->is_resizeable)
        //style &= ~WS_THICKFRAME;

        SetWindowLongA(window->handle, GWL_STYLE, style);
        SetWindowPlacement(window->handle, &window->placement_backup);
        SetWindowPos(window->handle, null, 0, 0, 0, 0, SWP_NOMOVE | SWP_NOSIZE | SWP_NOZORDER | SWP_NOOWNERZORDER | SWP_FRAMECHANGED);
    }

    window->is_fullscreen = enable_fullscreen;
}

mop_window_get_info_signature
{
    assert(!window->is_hidden);

    RECT client_rect;
    mop_require(GetClientRect(window->handle, &client_rect));

    POINT window_cursor = platform->win32.cursor;
    ScreenToClient(window->handle, &window_cursor);

    mop_window_info info = {0};
    info.size.x = client_rect.right - client_rect.left;
    info.size.y = client_rect.bottom - client_rect.top;

    info.relative_mouse_position.x = window_cursor.x;
    info.relative_mouse_position.y = info.size.y - window_cursor.y;

    for (mop_u32 i = 0; i < platform->close_window_requests.count; i++)
    {
        if (platform->close_window_requests.window_handles[i] == window->handle)
        {
            info.requested_close = true;
            break;
        }
    }

    return info;
}

void mop_win32_add_character(mop_platform *platform, mop_u32 code, mop_b8 is_symbol, mop_b8 with_shift, mop_b8 with_alt, mop_b8 with_control, mop_b8 override_previous_character)
{
    mop_assert(!is_symbol || !override_previous_character);

    if (platform->character_count < mop_carray_count(platform->characters))
    {
        if (override_previous_character)
        {
            mop_assert(platform->character_count);
            platform->character_count -= 1;
        }

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

mop_get_command_line_info_signature
{
    WCHAR *command_line = GetCommandLineW();

    mop_s32 argument_count;
    WCHAR **arguments = CommandLineToArgvW(command_line, &argument_count);
    mop_require(arguments);

    mop_s32 text_byte_count = 0;
    for (mop_s32 i = 0; i < argument_count; i++)
    {
        mop_s32 byte_count = WideCharToMultiByte(CP_UTF8, WC_ERR_INVALID_CHARS, arguments[i], -1, mop_null, 0, mop_null, mop_null);
        mop_require(byte_count);

        text_byte_count += byte_count - 1; // without mop_null terminal
    }

    LocalFree(arguments);

    mop_command_line_info info;
    info.argument_count = argument_count;
    info.text_byte_count = text_byte_count + 1; // for temporary mop_null terminal returned by WideCharToMultiByte

    return info;
}

mop_get_command_line_arguments_signature
{
    WCHAR *command_line = GetCommandLineW();

    mop_s32 argument_count;
    WCHAR **arguments = CommandLineToArgvW(command_line, &argument_count);
    mop_require(arguments);

    mop_assert(argument_count <= argument_buffer_count);

    mop_s32 text_byte_count = 0;
    for (mop_s32 i = 0; i < argument_count; i++)
    {
        mop_s32 byte_count = WideCharToMultiByte(CP_UTF8, WC_ERR_INVALID_CHARS, arguments[i], -1, (mop_cstring) text_buffer.base, text_buffer.count, mop_null, mop_null);
        mop_require(byte_count);

        byte_count -= 1; // remove mop_null terminal
        mop_assert(byte_count <= text_buffer.count);

        argument_buffer[i].base  = text_buffer.base;
        argument_buffer[i].count = byte_count;

        text_buffer.base  += byte_count;
        text_buffer.count -= byte_count;

        text_byte_count += byte_count;
    }

    LocalFree(arguments);

    return argument_count;
}

mop_get_working_directory_signature
{
    if (platform->working_directory.base)
        return platform->working_directory;

    platform->working_directory = mop_sl(mop_string) { platform->working_directory_buffer, 0 };
    mop_string *working_directory = &platform->working_directory;

    mop_u32 count = GetCurrentDirectoryA(mop_carray_count(platform->working_directory_buffer), (char *) platform->working_directory_buffer);
    mop_require(count);
    mop_assert(count <= mop_carray_count(platform->working_directory_buffer));
    working_directory->count = count;

    for (mop_u32 i = 0; i < working_directory->count; i++)
    {
        if (working_directory->base[i] == '\\')
            working_directory->base[i] = '/';
    }

    return platform->working_directory;
}

mop_get_program_directory_signature
{
    if (platform->program_directory.base)
        return platform->program_directory;

    platform->program_directory = mop_sl(mop_string) { platform->program_directory_buffer, 0 };
    mop_string *program_directory = &platform->program_directory;

    program_directory->count = GetModuleFileNameA(mop_null, (char *) program_directory->base, mop_carray_count(platform->program_directory_buffer));
    mop_require(program_directory->count);

    // error could be ERROR_INSUFFICIENT_BUFFER, since the function truncates the path if the buffer is too small
    if (program_directory->count == mop_carray_count(platform->program_directory_buffer))
    {
        mop_s32 error = GetLastError();
        mop_require(!error)
    }

    {
        mop_usize count = 0; // count without name
        for (mop_u32 i = 0; i < program_directory->count; i++)
        {
            if (program_directory->base[i] == '\\')
            {
                program_directory->base[i] = '/';
                count = i;
            }
        }

        program_directory->count = count;
    }

    return platform->program_directory;
}

mop_f32 mop_win32_get_xinput_stick_axis(mop_s32 raw_value, mop_s16 threshold)
{
    mop_f32 value;

    if (raw_value > 0)
    {
        if (raw_value < threshold)
            raw_value = 0;

        value = raw_value / 32768.0f;
    }
    else
    {
        if (raw_value > -threshold)
            raw_value = 0;

        value = raw_value / 32767.0f;
    }

    return value;
}

mop_vec2_type mop_win32_get_xinput_stick_direction(mop_s16 stick_x, mop_s16 stick_y, mop_s16 threshold)
{
    mop_vec2_type direction;
    direction.x = mop_win32_get_xinput_stick_axis(stick_x, threshold);
    direction.y = mop_win32_get_xinput_stick_axis(stick_y, threshold);

    return direction;
}

mop_f32 mop_win32_get_xinput_trigger_value(mop_u8 raw_value)
{
    if (raw_value < XINPUT_GAMEPAD_TRIGGER_THRESHOLD)
        raw_value = 0;

    mop_f32 value = raw_value / 255.0f;
    return value;
}

mop_update_delta_seconds_signature
{

    mop_u64 realtime_counter = mop_get_realtime_counter(platform);
    platform->delta_seconds = (mop_f32) (realtime_counter - platform->last_realtime_counter) / platform->realtime_counter_ticks_per_second;
    platform->last_realtime_counter = realtime_counter;
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

    platform->close_window_requests = mop_win32_global_close_window_requests;
    mop_win32_global_close_window_requests.count = 0;

    mop_b8 with_shift   = (GetAsyncKeyState(VK_SHIFT) >> 15) & 1;
    mop_b8 with_alt     = (GetAsyncKeyState(VK_MENU) >> 15) & 1;
    mop_b8 with_control = (GetAsyncKeyState(VK_CONTROL) >> 15) & 1;

    // we want to override key down characters if they are followed by a char
    mop_b8 previous_character_was_key_down = mop_false;

    MSG msg = {0};
    while (PeekMessageA(&msg, mop_null, 0, 0, PM_REMOVE))
    {
        mop_b8 preserve_character_was_key_down = mop_false;

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

                case VK_ESCAPE:
                {
                    mop_win32_add_character(platform, mop_character_symbol_escape, mop_true, with_shift, with_alt, with_control, mop_false);
                } break;

                case VK_BACK:
                {
                    mop_win32_add_character(platform, mop_character_symbol_backspace, mop_true, with_shift, with_alt, with_control, mop_false);
                } break;

                case VK_DELETE:
                {
                    mop_win32_add_character(platform, mop_character_symbol_delete, mop_true, with_shift, with_alt, with_control, mop_false);
                } break;

                case VK_RETURN:
                {
                    mop_win32_add_character(platform, mop_character_symbol_return, mop_true, with_shift, with_alt, with_control, mop_false);
                } break;

                case VK_TAB:
                {
                    mop_win32_add_character(platform, mop_character_symbol_tabulator, mop_true, with_shift, with_alt, with_control, mop_false);
                } break;

                case VK_LEFT:
                {
                    mop_win32_add_character(platform, mop_character_symbol_left, mop_true, with_shift, with_alt, with_control, mop_false);
                } break;

                case VK_RIGHT:
                {
                    mop_win32_add_character(platform, mop_character_symbol_right, mop_true, with_shift, with_alt, with_control, mop_false);
                } break;

                case VK_DOWN:
                {
                    mop_win32_add_character(platform, mop_character_symbol_down, mop_true, with_shift, with_alt, with_control, mop_false);
                } break;

                case VK_UP:
                {
                    mop_win32_add_character(platform, mop_character_symbol_up, mop_true, with_shift, with_alt, with_control, mop_false);
                } break;

                case VK_HOME:
                {
                    mop_win32_add_character(platform, mop_character_symbol_home, mop_true, with_shift, with_alt, with_control, mop_false);
                } break;

                case VK_END:
                {
                    mop_win32_add_character(platform, mop_character_symbol_end, mop_true, with_shift, with_alt, with_control, mop_false);
                } break;

                case VK_PRIOR:
                {
                    mop_win32_add_character(platform, mop_character_symbol_page_up, mop_true, with_shift, with_alt, with_control, mop_false);
                } break;

                case VK_NEXT:
                {
                    mop_win32_add_character(platform, mop_character_symbol_page_down, mop_true, with_shift, with_alt, with_control, mop_false);
                } break;

                default:
                {
                    if (msg.wParam - VK_F1 < 24)
                    {
                        mop_win32_add_character(platform, mop_character_symbol_f1 + msg.wParam - VK_F1, mop_true, with_shift, with_alt, with_control, mop_false);
                    }
                    else
                    {
                        mop_win32_add_character(platform, msg.wParam, mop_true, with_shift, with_alt, with_control, mop_false);
                        previous_character_was_key_down = mop_true;
                        preserve_character_was_key_down = mop_true;
                    }
                }
            }

            if (!(msg.lParam & (1 << 30)))
                mop_key_event_update(platform, msg.wParam, mop_true);
        } break;

        case WM_CHAR:
        {
            // 127 is delete character, produced also with control + backspace
            if ((msg.wParam >= ' ') && (msg.wParam != 127))
            {
                mop_win32_add_character(platform, msg.wParam, mop_false, with_shift, with_alt, with_control, previous_character_was_key_down);
            }
        } break;
        }

        TranslateMessage(&msg);
        DispatchMessage(&msg);

        if (!preserve_character_was_key_down)
            previous_character_was_key_down = mop_false;
    }

    mop_key_poll_update(platform, VK_LBUTTON, (GetAsyncKeyState(VK_LBUTTON) >> 15) & 1);
    mop_key_poll_update(platform, VK_MBUTTON, (GetAsyncKeyState(VK_MBUTTON) >> 15) & 1);
    mop_key_poll_update(platform, VK_RBUTTON, (GetAsyncKeyState(VK_RBUTTON) >> 15) & 1);

    // poll gamepads
    {
        // this is expensive, so we use a flag
        if (mop_win32_global_check_gamepad_connections)
        {
            mop_win32_global_check_gamepad_connections = false;

            for (mop_u32 i = 0; i < XUSER_MAX_COUNT; i++)
            {
                XINPUT_CAPABILITIES capabilites;
                platform->gamepads[i].is_enabled = (mop_XInputGetCapabilities(i, XINPUT_FLAG_GAMEPAD, &capabilites) == ERROR_SUCCESS);
            }
        }

        for (mop_u32 i = 0; i < XUSER_MAX_COUNT; i++)
        {
            if (!platform->gamepads[i].is_enabled)
                continue;

            mop_gamepad *gamepad = &platform->gamepads[i];

            XINPUT_STATE state;

            mop_u32 result = mop_XInputGetState(i, &state);
            if (result != ERROR_SUCCESS)
            {
                gamepad->is_enabled = false;
                continue;
            }

            gamepad->left_stick  = mop_win32_get_xinput_stick_direction(state.Gamepad.sThumbLX, state.Gamepad.sThumbLY,  XINPUT_GAMEPAD_LEFT_THUMB_DEADZONE);
            gamepad->right_stick = mop_win32_get_xinput_stick_direction(state.Gamepad.sThumbRX, state.Gamepad.sThumbRY,  XINPUT_GAMEPAD_RIGHT_THUMB_DEADZONE);

            gamepad->left_trigger  = mop_win32_get_xinput_trigger_value(state.Gamepad.bLeftTrigger);
            gamepad->right_trigger = mop_win32_get_xinput_trigger_value(state.Gamepad.bRightTrigger);

            //mop_key_state_poll_update(&gamepad->left_stick_as_button, (gamepad->left_stick.x is_not 0) or (gamepad->left_stick.y is_not 0));
            //mop_key_state_poll_update(&gamepad->right_stick_as_button, (gamepad->right_stick.x is_not 0) or (gamepad->right_stick.y is_not 0));
            //mop_key_state_poll_update(&gamepad->left_trigger_as_button, gamepad->left_trigger is_not 0);
            //mop_key_state_poll_update(&gamepad->right_trigger_as_button, gamepad->right_trigger is_not 0);

            mop_key_state_poll_update(&gamepad->dpad_up,    (state.Gamepad.wButtons & XINPUT_GAMEPAD_DPAD_UP) != 0);
            mop_key_state_poll_update(&gamepad->dpad_down,  (state.Gamepad.wButtons & XINPUT_GAMEPAD_DPAD_DOWN) != 0);
            mop_key_state_poll_update(&gamepad->dpad_right, (state.Gamepad.wButtons & XINPUT_GAMEPAD_DPAD_RIGHT) != 0);
            mop_key_state_poll_update(&gamepad->dpad_left,  (state.Gamepad.wButtons & XINPUT_GAMEPAD_DPAD_LEFT) != 0);

            mop_key_state_poll_update(&gamepad->action_down,  (state.Gamepad.wButtons & XINPUT_GAMEPAD_A) != 0);
            mop_key_state_poll_update(&gamepad->action_right, (state.Gamepad.wButtons & XINPUT_GAMEPAD_B) != 0);
            mop_key_state_poll_update(&gamepad->action_left,  (state.Gamepad.wButtons & XINPUT_GAMEPAD_X) != 0);
            mop_key_state_poll_update(&gamepad->action_up,    (state.Gamepad.wButtons & XINPUT_GAMEPAD_Y) != 0);

            mop_key_state_poll_update(&gamepad->left_shoulder,  (state.Gamepad.wButtons & XINPUT_GAMEPAD_LEFT_SHOULDER) != 0);
            mop_key_state_poll_update(&gamepad->right_shoulder, (state.Gamepad.wButtons & XINPUT_GAMEPAD_RIGHT_SHOULDER) != 0);

            mop_key_state_poll_update(&gamepad->left_thumb,  (state.Gamepad.wButtons & XINPUT_GAMEPAD_LEFT_THUMB) != 0);
            mop_key_state_poll_update(&gamepad->right_thumb, (state.Gamepad.wButtons & XINPUT_GAMEPAD_RIGHT_THUMB) != 0);

            mop_key_state_poll_update(&gamepad->select, (state.Gamepad.wButtons & XINPUT_GAMEPAD_BACK) != 0);
            mop_key_state_poll_update(&gamepad->start,  (state.Gamepad.wButtons & XINPUT_GAMEPAD_START) != 0);
        }
    }

    POINT cursor;
    GetCursorPos(&cursor);
    platform->win32.cursor = cursor;

    HMONITOR monitor = MonitorFromPoint(cursor, MONITOR_DEFAULTTOPRIMARY);
    MONITORINFO monitor_info = { sizeof(MONITORINFO) };
    GetMonitorInfoA(monitor, &monitor_info);

    platform->previous_mouse_position = platform->mouse_position;
    platform->mouse_position.x = cursor.x;
    platform->mouse_position.y = monitor_info.rcMonitor.bottom - monitor_info.rcMonitor.top - cursor.y;

    mop_update_delta_seconds(platform);
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
         // make paths consistent
        if (path.base[i] == '\\')
            cpath[i] = '/';
        else
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
        mop_require((error == ERROR_FILE_NOT_FOUND) || (error == ERROR_PATH_NOT_FOUND) || (error == ERROR_SHARING_VIOLATION));

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

mop_compare_timestamps_signature
{
    return (mop_s32) CompareFileTime((FILETIME *) &left, (FILETIME *) &right);
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
        mop_require((error == ERROR_FILE_NOT_FOUND) || (error == ERROR_PATH_NOT_FOUND) || (error == ERROR_SHARING_VIOLATION));

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

mop_create_directory_siganture
{
    mop_u8 cpath[MAX_PATH];
    mop_win32_to_cpath(cpath, path);

    mop_b8 ok = CreateDirectory((char *) cpath, mop_null);
    if (!ok)
    {
        if (GetLastError() == ERROR_ALREADY_EXISTS)
            return true;
    }

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
    mop_file_search_iterator file_iterator = {0};
    mop_win32_to_cpath(file_iterator.win32.cdirectory_path, directory_path);

    mop_string path = mop_sl(mop_string) { file_iterator.win32.cdirectory_path, directory_path.count };
    mop_normalize_path(&path);

    if (!mop_path_is_directory(platform, path))
        return file_iterator;

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

    *result = mop_sl(mop_file_search_result) {0};

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

        result->is_search_directory = true;
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
            mop_assert(result->filepath.count >= 2);

            for (mop_u32 i = 0; i < result->filepath.count; i++)
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

        result->is_parent_directory = true;
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

mop_bit_count_u64_signature
{
    mop_u32 index = 0;
    mop_b8 is_not_zero = _BitScanReverse64((unsigned long *) &index, value);
    mop_assert(is_not_zero || index == 0);

    return index + 1;
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

mop_execute_command_siganture
{
    HANDLE read_pipe;
    HANDLE write_pipe;
    SECURITY_ATTRIBUTES secutirty_attributes = {0};
    secutirty_attributes.nLength        = sizeof(SECURITY_ATTRIBUTES);
    secutirty_attributes.bInheritHandle = mop_true;
    mop_require(CreatePipe(&read_pipe, &write_pipe, &secutirty_attributes, 0));
    mop_require(SetHandleInformation(write_pipe, HANDLE_FLAG_INHERIT, 0));

    mop_u8 command_line_buffer[1024];
    mop_assert(snprintf((mop_cstring) command_line_buffer, mop_carray_count(command_line_buffer), "%.*s", mop_fs(command_line)) < mop_carray_count(command_line_buffer));

    mop_u8 working_directory_buffer[512];
    mop_cstring cworking_directory = mop_null;
    if (working_directory.count)
    {
        mop_assert(snprintf((mop_cstring) working_directory_buffer, mop_carray_count(working_directory_buffer), "%.*s", mop_fs(working_directory)) < mop_carray_count(working_directory_buffer));
        cworking_directory = (mop_cstring) working_directory_buffer;
    }

    STARTUPINFOA start_info = {0};
    start_info.cb = sizeof(start_info);
    start_info.hStdError = write_pipe;
    start_info.hStdOutput = write_pipe;
    PROCESS_INFORMATION process_info = {0};
    mop_b8 ok = CreateProcessA(mop_null, (mop_cstring) command_line_buffer, mop_null, mop_null, mop_true, 0, mop_null, cworking_directory, &start_info, &process_info);

    mop_string output = output_buffer;
    mop_s32 exit_code = 0;
    if (ok)
    {
        output.count = 0;
        while(WaitForSingleObject(process_info.hProcess, 0) != WAIT_OBJECT_0)
        {
            mop_u8 buffer[1024];

            mop_u32 read_count;
            mop_b8 ok = ReadFile(write_pipe, buffer, mop_carray_count(buffer), (DWORD *) &read_count, mop_null);
            if (!ok || read_count == 0)
                break;

            if (output.count + read_count <= output_buffer.count)
            {
                memcpy(output.base + output.count, buffer, read_count);
                output.count += read_count;
            }
        }

        mop_require(GetExitCodeProcess(process_info.hProcess, (DWORD *) &exit_code));

        CloseHandle(process_info.hProcess);
        CloseHandle(process_info.hThread);
    }

    CloseHandle(read_pipe);
    CloseHandle(write_pipe);

    return mop_sl(mop_execute_command_result) { ok, exit_code, output };
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

    mop_string program_directory = mop_get_program_directory(platform);
    mop_assert(program_directory.count + name.count + 5 <= mop_carray_count(dll_name_buffer));

    mop_win32_to_cpath(dll_name_buffer, program_directory);
    dll_name_buffer[program_directory.count] = '/';
    mop_win32_to_cpath(dll_name_buffer + program_directory.count + 1, name);
    dll_name_buffer[program_directory.count + 1 + name.count] = '.';
    dll_name_buffer[program_directory.count + 1 + name.count + 1] = 'd';
    dll_name_buffer[program_directory.count + 1 + name.count + 2] = 'l';
    dll_name_buffer[program_directory.count + 1 + name.count + 3] = 'l';
    dll_name_buffer[program_directory.count + 1 + name.count + 4] = '\0';

    mop_string dll_name = { dll_name_buffer, program_directory.count + name.count + 5 };

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

mop_read_embedded_file_signature
{
    mop_u8 cname[MAX_PATH];
    mop_win32_to_cpath(cname, name);

    HRSRC resource = FindResourceA(mop_null, cname, RT_RCDATA);
    mop_require(resource);

    HGLOBAL data = LoadResource(mop_null, resource);
    mop_require(data);

    mop_u8_array result;
    result.base = LockResource(data);
    mop_require(result.base);

    result.count = SizeofResource(mop_null, resource);
    mop_require(result.count);

    return result;
}

mop_dubugger_is_present_signature
{
    return IsDebuggerPresent();
}

mop_debug_break_signature
{
    __debugbreak();
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
        mop_u8 unused;
    } emscripten;
};

struct mop_window
{
    mop_u8 unused;
    //HWND handle;
    //HDC  device_context;
};

#else

#error mop_implementation not implemented for current platform

#endif

mop_key_state_event_update_signature
{
    if (state->half_transition_count == 63)
        state->half_transition_overflow = mop_true;

    state->half_transition_count += 1;
    state->is_active = is_active;
}

mop_key_state_poll_update_signature
{
    state->half_transition_count    = 0;
    state->half_transition_overflow = mop_false;

    if (state->is_active != is_active)
        mop_key_state_event_update(state, is_active);
}

mop_key_event_update_signature
{
    mop_assert(key < mop_carray_count(platform->keys));
    mop_key_state_event_update(&platform->keys[key], is_active);
}

mop_key_poll_update_signature
{
    mop_assert(key < mop_carray_count(platform->keys));
    mop_key_state_poll_update(&platform->keys[key], is_active);
}

mop_get_gamepad_signature
{
    assert(index < mop_carray_count(platform->gamepads));
    return platform->gamepads[index];
}

mop_key_state_was_pressed_signature
{
    return state.half_transition_overflow || (state.half_transition_count >= 2 - state.is_active);
}

mop_key_state_consume_pressed_signature
{
    b8 was_pressed = mop_key_state_was_pressed(*state);
    if (was_pressed)
        state->value = state->is_active;

    return was_pressed;
}

mop_key_state_was_released_signature
{
    return state.half_transition_overflow || (state.half_transition_count >= 1 + state.is_active);
}

mop_key_state_was_active_signature
{
    return state.is_active || mop_key_state_was_pressed(state);
}

mop_key_was_active_signature
{
    mop_assert(key < mop_carray_count(platform->keys));
    mop_key_state state = platform->keys[key];
    return mop_key_state_was_active(state);
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

mop_has_avx_support_signature
{
    // from: https://gist.github.com/hi2p-perim/7855506
    // quote:
    // Check AVX support
	// References
	// http://software.intel.com/en-us/blogs/2011/04/14/is-avx-enabled/
	// http://insufficientlycomplicated.wordpress.com/2011/11/07/detecting-intel-advanced-vector-extensions-avx-in-visual-studio/

    mop_s32 cpuinfo[4];
	__cpuid(cpuinfo, 1);
    mop_b8 ok = (cpuinfo[2] & (1 << 28)) != 0;
    return ok;
}

#endif