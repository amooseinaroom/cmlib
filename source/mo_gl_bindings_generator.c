
#include "mo_basic.h"

#define mop_implementation
#define mop_debug
#include "mo_platform.h"

#define moma_implementation
#include "mo_memory_arena.h"

#define mos_implementation
#include "mo_string.h"

typedef struct
{
    string name;
    u32 indirection_count;
} parsed_type;

typedef struct
{
    string base[16384];
    usize used_count;
} unique_string_buffer;

void skip_white(string* iterator)
{
    while (iterator->count)
    {
        if (mos_skip_white_space(iterator))
            continue;

        if (mos_try_skip(iterator, s("/*")))
        {
            mos_skip_until_pattern_or_end(iterator, s("*/"));
            mos_try_skip(iterator, s("*/"));
            continue;
        }

        if (mos_try_skip(iterator, s("//")))
        {
            string test = *iterator;
            while (mos_skip_until_set_or_end(&test, s("\\")).count)
            {
                if (!mos_try_skip(&test, s("\\")))
                    break;

                *iterator = test;
            }

            mos_skip_until_set_or_end(iterator, s("\n"));
            continue;
        }

        break;
    }
}

string skip_name(string *iterator)
{
    string name = mos_skip_name(iterator, s(" \t\n\r!\"§$%&/()=?²³{[]}\\`´*+~<>|,;.:-'#^°@"));
    if (name.count)
        skip_white(iterator);

    return name;
}

void print_newline(mos_string_buffer *buffer)
{
    mos_write(buffer, "\n");
}

b8 starts_with(string text, string pattern)
{
    return mos_try_skip(&text, pattern);
}

b8 add_unique(unique_string_buffer *buffer, string text)
{
    for (usize i = 0; i < buffer->used_count; i++)
    {
        if (mos_are_equal(buffer->base[i], text))
            return false;
    }

    assert(buffer->used_count < carray_count(buffer->base));
    buffer->base[buffer->used_count] = text;
    buffer->used_count++;

    return true;
}

b8 try_skip_keyword(string *iterator, string keyword)
{
    string backup = *iterator;
    string name = skip_name(iterator);
    if (mos_are_equal(name, keyword))
    {
        skip_white(iterator);

        return true;
    }
    else
    {
        *iterator = backup;

        return false;
    }
}

typedef enum
{
    basic_type_s8,
    basic_type_s16,
    basic_type_s32,
    basic_type_s64,

    basic_type_f32,
    basic_type_f64,

    basic_type_u8,
    basic_type_u16,
    basic_type_u32,
    basic_type_u64,

    basic_type_ssize,
    basic_type_usize,

    basic_type_char,
    basic_type_cstring,
    basic_type_void,
    basic_type_void_pointer,
} basic_type;

// initialized in main, since C can't handle it here
string basic_type_names[] =
{
#if 0
    sc("s8"),
    sc("s16"),
    sc("s32"),
    sc("s64"),
    sc("f32"),
    sc("f64"),
    sc("u8"),
    sc("u16"),
    sc("u32"),
    sc("u64"),

    sc("ssize"),
    sc("usize"),

    sc("u8"),
    sc("cstring"),
    sc("u8"),
    sc("u8 *"),
#else
    sc("signed char"),
    sc("signed short"),
    sc("signed int"),
    sc("signed long long"),
    sc("float"),
    sc("double"),
    sc("unsigned char"),
    sc("unsigned short"),
    sc("unsigned int"),
    sc("unsigned long long"),

    sc("signed long long"),
    sc("unsigned long long"),

    sc("char"),
    sc("char *"),
    sc("void"),
    sc("void *"),
#endif
};

struct
{
    string     name;
    basic_type type;
} c_to_lang_types[] =
{
    //{ s("void"),               s("u8") },

    { sc("char"),   basic_type_char },
    { sc("short"),  basic_type_s16 },
    { sc("int"),    basic_type_s32 },
    { sc("long"),   basic_type_s32 },
    { sc("float"),  basic_type_f32 },
    { sc("double"), basic_type_f64 },

    { sc("unsigned char"),      basic_type_u8 },
    { sc("unsigned short"),     basic_type_u16 },
    { sc("unsigned int"),       basic_type_u32 },
    { sc("unsigned long long"), basic_type_u64 },
    //{ sc("size_t"),             sc("usize") },

    { sc("unsigned long"),      basic_type_u32 },

    { sc("LPVOID"),             basic_type_void_pointer },
    { sc("USHORT"),             basic_type_u16 },
    { sc("SHORT"),              basic_type_s16 },
    { sc("UINT"),               basic_type_u32 },
    { sc("INT"),                basic_type_s32 },
    { sc("BOOL"),               basic_type_s32 },
    { sc("DWORD"),              basic_type_u32 },
    { sc("FLOAT"),              basic_type_f32 },
    { sc("INT32"),              basic_type_s32 },
    { sc("INT64"),              basic_type_s64 },

    { sc("signed char"),      basic_type_s8 },
    { sc("signed short"),     basic_type_s16 },
    { sc("signed int"),       basic_type_s32 },
    { sc("signed long long"), basic_type_s64 },

    // thank you khronos, that was completely useful gg
    { sc("khronos_uint8_t"),  basic_type_u8 },
    { sc("khronos_uint16_t"), basic_type_u16 },
    { sc("khronos_uint32_t"), basic_type_u32 },
    { sc("khronos_uint64_t"), basic_type_u64 },
    //{ sc("khronos_size_t"),  sc("usize") },

    { sc("khronos_int8_t"),  basic_type_s8 },
    { sc("khronos_int16_t"), basic_type_s16 },
    { sc("khronos_int32_t"), basic_type_s32 },
    { sc("khronos_int64_t"), basic_type_s64 },
    // q{ sc("khronos_ssize_t"), basic_type_ssize },

    { sc("__GLsync"), basic_type_u8 },
};

parsed_type skip_type(string *iterator)
{
    parsed_type result = {0};

    try_skip_keyword(iterator, s("const"));
    try_skip_keyword(iterator, s("CONST")); // since windows is DUMB!!! #define CONST const

    try_skip_keyword(iterator, s("struct"));

    result.name = skip_name(iterator);
    while (mos_are_equal(result.name, s("unsigned")) || mos_are_equal(result.name, s("signed")) || mos_are_equal(result.name, s("long")))
    {
        string name = skip_name(iterator);
        result.name.count = name.base + name.count - result.name.base;
    }

    for (u32 i = 0; i < carray_count(c_to_lang_types); i++)
    {
        if (mos_are_equal(c_to_lang_types[i].name, result.name))
        {
            result.name = basic_type_names[c_to_lang_types[i].type];
            break;
        }
    }

    // thank you khronos, that was completely useful gg
    if (mos_are_equal(result.name, s("khronos_intptr_t")))
    {
        result.name = basic_type_names[basic_type_void_pointer];
        result.indirection_count = 1;
    }

    //string name = *iterator;
    while (true)
    {
        if (mos_try_skip(iterator, s("*")))
        {
            result.indirection_count++;
        }
        else if (try_skip_keyword(iterator, s("const")) || try_skip_keyword(iterator, s("CONST"))) // since windows is DUMB!!! #define CONST const
        {
        }
        else
        {
            break;
        }

        skip_white(iterator);
    }

    if (mos_are_equal(result.name, s("void")) || mos_are_equal(result.name, s("VOID")))
    {
        if (result.indirection_count)
        {
            result.name = basic_type_names[basic_type_void_pointer];
            result.indirection_count--;
        }
        else
            result.name = string_empty;
    }

    return result;
}

void print_type(mos_string_buffer *buffer, parsed_type type)
{
    assert(type.name.count);

    mos_write(buffer, "%.*s", fs(type.name));

    if (type.indirection_count)
    {
        mos_write(buffer, " ");

        for (u32 i = 0; i < type.indirection_count; i++)
            mos_write(buffer, "*");
    }
    else
    {
        mos_write(buffer, " ");
    }
}

void parse_and_print_function_arguments(mos_string_buffer *buffer, string *iterator, string name, parsed_type return_type, b8 define_function, b8 use_name_for_signature)
{
    mos_skip(iterator, s("(")); skip_white(iterator);

    print_newline(buffer);

    if (!define_function)
        mos_write(buffer, "typedef ");

    if (return_type.name.count)
        print_type(buffer, return_type);
    else
        mos_write(buffer, "void");

    //if (define_function)
        //mos_write(buffer, " gl_api ");

    if (define_function)
        mos_write(buffer, " %.*s(", fs(name));
    else if (use_name_for_signature)
        mos_write(buffer, " (*%.*s)(", fs(name));
    else
        mos_write(buffer, " (*mogl_function_%.*s)(", fs(name));

    u32 argument_count = 0;
    while (true)
    {
        parsed_type type = skip_type(iterator);

        // function line foo(void), because C can ._.
        if (!type.name.count)
            break;

        string name = skip_name(iterator);

        if (argument_count)
            mos_write(buffer, ", ");

        print_type(buffer, type);

        if (name.count)
            mos_write(buffer, "%.*s", fs(name));
        else
            mos_write(buffer, "argument%i", argument_count);

        argument_count++;

        if (!mos_try_skip(iterator, s(",")))
            break;

        skip_white(iterator);
    }

    mos_skip(iterator, s(")"));
    skip_white(iterator);
    mos_skip(iterator, s(";"));

    mos_write(buffer, ")");
}

void parse_and_print_file(mos_string_buffer *buffer, b8 define_function, unique_string_buffer *constants, unique_string_buffer *dll_functions, string source)
{
    string it = source;
    skip_white(&it);

    while (it.count)
    {
        skip_white(&it);
        string line = it;

        // skip to next line
        mos_skip_until_set_or_end(&it, s("\n"));

        if (mos_try_skip(&line, s("#")))
        {
            skip_white(&line);

             if (try_skip_keyword(&line, s("define")))
             {
                string name = skip_name(&line);

                //if (!starts_with(name, s("GL_")) && (exclude_wgl_constants || !starts_with(name, s("WGL_"))))
                if (!starts_with(name, s("GL_")) && !starts_with(name, s("WGL_")))
                    continue;

                string value = mos_skip_until_set_or_end(&line, s("u\r\n")); // u is number prefix, we don't care about
                mos_try_skip(&line, s("u\r\n"));

                if (add_unique(constants, name))
                    //mos_write(buffer, "const %.*s %.*s = %.*s;\n", fs(basic_type_names[basic_type_s32]), fs(name), fs(value));
                    mos_write(buffer, "#define %.*s %.*s\n", fs(name), fs(value));
            }

            it = line;
            continue;
        }
    #if 0
        else if (try_skip_keyword(&line, s("struct")))
        {
            string name = skip_name(&line);
            if (!mos_try_skip(&line, s(";")))
                continue;

            // forward declared structs will only be passed by pointer, so treat them as u8
            mos_write(buffer, "type %.*s def u8;\n", fs(name));
            it = line;
        }
    #endif
        else if (try_skip_keyword(&line, s("typedef")))
        {
            parsed_type type = skip_type(&line);

            if (mos_try_skip(&line, s("(")))
            {
                // is gl function signature, we generate them ourselfs
                if (!try_skip_keyword(&line, s("APIENTRY")) || !mos_try_skip(&line, s("*")))
                    continue;

                skip_white(&line);

                // is callback signature, we care about, like GLDEBUGPROC
                string name = skip_name(&line);

                if (!starts_with(name, s("GL")))
                    continue;

                mos_skip(&line, s(")"));

                parse_and_print_function_arguments(buffer, &line, name, type, false, true);
                mos_write(buffer, ";\n");

                it = line;
            }
            else
            {
            #if 0
                string name = skip_name(&line);

                // probably parsed function pointer type
                if (!starts_with(name, s("GL")))
                    continue;

                string ignored;
                try_skip_until_set(&ignored, &line, s(";"), true);
                it = line;

                mos_write(buffer, "type %.*s ", fs(name));
                if (type.name.count)
                    print_type(buffer, type);
                else
                    mos_write(buffer, "u8"); // replacing void

                mos_write(buffer, ";\n");
            #endif
            }
            continue;
        }

        //bool define_function = !try_skip_keyword(&line, s("GLAPI"));
        try_skip_keyword(&line, s("GLAPI"));

        try_skip_keyword(&line, s("WINGDIAPI"));

        //if (!define_function && !))
            //continue;

        //skip_white(&line);

        parsed_type return_type = skip_type(&line);

        try_skip_keyword(&line, s("APIENTRY"));
        try_skip_keyword(&line, s("WINAPI"));

        string name = skip_name(&line);

        if (!starts_with(name, s("gl")) && !starts_with(name, s("wgl")))
            continue;

        parse_and_print_function_arguments(buffer, &line, name, return_type, define_function, false);
        mos_write(buffer, ";\n");

        if (define_function)
        {
            //mos_write(buffer, " extern_binding(\"opengl32\", true);\n");
        }
        else
        {

            mos_write(buffer, "mogl_function_%.*s %.*s;\n", fs(name), fs(name));

            add_unique(dll_functions, name);
        }

        it = line;
    }
}

u8 _read_file_buffer[10 << 20]; // 10 mb
u8 _builder_buffer[10 << 20]; // 10 mb

s32 main(s32 argument_count, cstring arguments[])
{
    mop_platform platform = {0};
    mop_init(&platform);

    struct {
        string path;
        //bool exclude_wgl_constants;
        b8 dont_define_functions;
    } files[] =
    {
        { s("C:/Program Files (x86)/Windows Kits/10/Include/10.0.19041.0/um/gl/GL.h"), },
        { s("source/gl/glext.h"), true },
    };

    u8_array read_buffer = { _read_file_buffer, carray_count(_read_file_buffer) };

    mos_string_buffer buffer = { _builder_buffer, 0, carray_count(_builder_buffer) };
    unique_string_buffer constants = {0};
    unique_string_buffer dll_functions = {0};

    // some GL types
    mos_write(&buffer,
"#if !defined mo_gl_bindings_h\n"
"#define mo_gl_bindings_h\n"
"\n"
"#ifdef __cplusplus\n"
"extern \"C\" {\n"
"#endif\n"
"\n"
"// types are manually added, since these are a mess to generate from the headers\n"
"typedef %.*s GLenum;\n"
"\n"
"typedef %.*s GLsizei;\n"
"typedef %.*s GLsizeiptr;\n"
"typedef %.*s GLintptr;\n"
"\n"
"typedef %.*s GLvoid; // since its only useful as a pointer\n"
"typedef %.*s GLboolean;\n"
"typedef %.*s GLchar;\n"
"typedef %.*s GLbitfield;\n"
"\n"
"typedef %.*s GLubyte;\n"
"typedef %.*s GLushort;\n"
"typedef %.*s GLuint;\n"
"typedef %.*s GLuint64;\n"
"\n"
"typedef %.*s GLbyte;\n"
"typedef %.*s GLshort;\n"
"typedef %.*s GLint;\n"
"typedef %.*s GLint64;\n"
"\n"
"typedef %.*s GLfloat;\n"
"typedef %.*s GLdouble;\n"
"\n"
"typedef %.*s GLclampf;\n"
"typedef %.*s GLclampd;\n"
"\n"
"typedef %.*s GLhalf;\n"
"typedef %.*s GLfixed;\n"
"\n"
"typedef %.*s GLuint64EXT;\n"
"typedef %.*s GLint64EXT;\n"
"\n"
"typedef %.*s GLhalfNV;\n"
"typedef %.*s GLvdpauSurfaceNV;\n"
"\n"
"typedef %.*s GLhandleARB;\n"
"typedef %.*s GLcharARB;\n"
"typedef %.*s GLsizeiptrARB;\n"
"typedef %.*s *GLintptrARB;\n"
"\n"
"typedef %.*s GLeglImageOES;\n"
"\n"
"typedef %.*s GLeglClientBufferEXT;\n"
"\n"
"// structs that are passed by pointer only\n"
"typedef %.*s GLsync;\n"
"\n"
"typedef %.*s _cl_context;\n"
"typedef %.*s _cl_event;\n",
    fs(basic_type_names[basic_type_u32]),
    fs(basic_type_names[basic_type_s32]),
    fs(basic_type_names[basic_type_ssize]),
    fs(basic_type_names[basic_type_ssize]),

    fs(basic_type_names[basic_type_void]),
    fs(basic_type_names[basic_type_u8]),
    fs(basic_type_names[basic_type_char]),
    fs(basic_type_names[basic_type_u32]),

    fs(basic_type_names[basic_type_u8]),
    fs(basic_type_names[basic_type_u16]),
    fs(basic_type_names[basic_type_u32]),
    fs(basic_type_names[basic_type_u64]),

    fs(basic_type_names[basic_type_s8]),
    fs(basic_type_names[basic_type_s16]),
    fs(basic_type_names[basic_type_s32]),
    fs(basic_type_names[basic_type_s64]),

    fs(basic_type_names[basic_type_f32]),
    fs(basic_type_names[basic_type_f64]),

    fs(basic_type_names[basic_type_f32]),
    fs(basic_type_names[basic_type_f64]),

    fs(basic_type_names[basic_type_s16]),
    fs(basic_type_names[basic_type_s32]),

    fs(basic_type_names[basic_type_u64]),
    fs(basic_type_names[basic_type_s64]),

    fs(basic_type_names[basic_type_u16]),
    fs(basic_type_names[basic_type_void_pointer]),

    fs(basic_type_names[basic_type_u32]),
    fs(basic_type_names[basic_type_char]),
    fs(basic_type_names[basic_type_ssize]),
    fs(basic_type_names[basic_type_s32]),
    fs(basic_type_names[basic_type_void_pointer]),
    fs(basic_type_names[basic_type_void_pointer]),
    fs(basic_type_names[basic_type_void_pointer]),
    fs(basic_type_names[basic_type_void]),
    fs(basic_type_names[basic_type_void])
);

    for (u32 i = 0; i < carray_count(files); i++)
    {
        mop_read_file_result read_file_result = mop_read_file(&platform, read_buffer, files[i].path);
        if (!read_file_result.ok)
        {
            printf("couldn't open file %.*s\n", fs(files[i].path));
            return 0;
        }

        read_buffer.base  += read_file_result.data.count;
        read_buffer.count -= read_file_result.data.count;

        //bool exclude_wgl_constants = files[i].exclude_wgl_constants;
        b8 define_function = !files[i].dont_define_functions;

        print_newline(&buffer);
        mos_write(&buffer, "// file: %s\n", files[i].path);

        print_newline(&buffer);
        parse_and_print_file(&buffer, define_function, &constants, &dll_functions, read_file_result.data);
    }

    mos_write(&buffer,
        "\n"
        "#ifdef __cplusplus\n"
        "}\n"
        "#endif\n"
        "\n"
        "#endif\n");

    mop_write_file(&platform, s("source/mo_gl_bindings.h"), mos_buffer_to_string(buffer));

    u32 gl_function_count = dll_functions.used_count;

    {
        buffer.used_count = 0;
        dll_functions.used_count = gl_function_count;

        // some win32 GL types
        mos_write(&buffer,
            "#if !defined mo_gl_win32_bindings_h\n"
            "#define mo_gl_win32_bindings_h\n"
            "\n"
            "#ifdef __cplusplus\n"
            "extern \"C\" {\n"
            "#endif\n"
            "\n"
            "typedef %.*s HPBUFFERARB;\n"
            "typedef %.*s HPBUFFEREXT;\n"
            "typedef %.*s HGPUNV;\n"
            "typedef %.*s PGPU_DEVICE;\n"
            "typedef %.*s HVIDEOOUTPUTDEVICENV;\n"
            "typedef %.*s HVIDEOINPUTDEVICENV;\n"
            "typedef %.*s HPVIDEODEV;\n"
            "\n"
            "#if !defined(_WIN32) && !defined(WIN32)\n"
            "typedef %.*s HANDLE;\n"
            "typedef %.*s HGLRC;\n"
            "\n"
            "%.*s wglGetProcAddress(%.*sname);\n"
            "HGLRC wglCreateContext(HDC device_context);\n"
            "%.*s wglDeleteContext(HGLRC gl_context);\n"
            "%.*s wglMakeCurrent(HDC device_context, HGLRC gl_context);\n"
            "#endif",
            fs(basic_type_names[basic_type_void_pointer]),
            fs(basic_type_names[basic_type_void_pointer]),
            fs(basic_type_names[basic_type_void_pointer]),
            fs(basic_type_names[basic_type_void_pointer]),
            fs(basic_type_names[basic_type_void_pointer]),
            fs(basic_type_names[basic_type_void_pointer]),
            fs(basic_type_names[basic_type_void_pointer]),
            fs(basic_type_names[basic_type_void_pointer]),
            fs(basic_type_names[basic_type_void_pointer]), fs(basic_type_names[basic_type_cstring]),
            fs(basic_type_names[basic_type_s32]),
            fs(basic_type_names[basic_type_s32]));

        {
            mop_read_file_result read_file_result = mop_read_file(&platform, read_buffer, s("source/gl/wglext.h"));
            if (!read_file_result.ok)
            {
                printf("couldn't open file %s\n", "gl/wglext.h");
                return 0;
            }

            read_buffer.base  += read_file_result.data.count;
            read_buffer.count -= read_file_result.data.count;

            b8 define_function = false;
            parse_and_print_file(&buffer, define_function, &constants, &dll_functions, read_file_result.data);
        }

        mos_write(&buffer,
            "\n"
            "#ifdef __cplusplus\n"
            "}\n"
            "#endif\n"
            "\n"
            "#endif\n");

        mos_write(&buffer,
            "\n"
            "#if defined mo_gl_win32_bindings_implementation\n"
            "\n"
            "void mogl_load_functions()\n"
            "{\n");

        for (u32 i = 0; i < dll_functions.used_count; i++)
        {
            string name = dll_functions.base[i];
            mos_write(&buffer, "    %.*s = (mogl_function_%.*s) wglGetProcAddress(\"%.*s\");\n", fs(name), fs(name), fs(name));
        }

        mos_write(&buffer,
            "}\n"
            "\n"
            "#endif");

        mop_write_file(&platform, s("source/mo_gl_win32_bindings.h"), mos_buffer_to_string(buffer));
    }

    return 0;
}
