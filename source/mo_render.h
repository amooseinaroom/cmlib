
#if !defined mor_h
#define mor_h

#ifdef __cplusplus
extern "C" {
#endif

#if !defined mor_assert
#define mor_assert(x)
#endif

#if !defined mor_require
#define mor_require(x) (x)
#endif

#define mor_cases_complete(value) default: mor_assert(0)

typedef unsigned char      mor_u8;
typedef unsigned short     mor_u16;
typedef unsigned int       mor_u32;
typedef unsigned long long mor_u64;

typedef signed int       mor_s32;
typedef signed long long mor_s64;

typedef float  mor_f32;
typedef double mor_f64;

typedef mor_u8 mor_b8;

typedef mor_u64 mor_usize;

typedef char * mor_cstring;

#define mor_null 0

const mor_b8 mor_false = 0;
const mor_b8 mor_true  = 1;

#define mor_carray_count(static_array) (sizeof(static_array) / sizeof(*(static_array)))

#if !defined mor_u8_array_type
#define mor_u8_array_type mor_u8_array

typedef struct
{
    mor_u8    *base;
    mor_usize count;
} mor_u8_array;

#else

typedef mor_u8_array_type mor_u8_array;

#endif

typedef mor_u8_array mor_string;

#ifdef __cplusplus
#define mor_struct_literal(name)
#else
#define mor_struct_literal(name) (name)
#endif

#define mor_s(static_string) mor_struct_literal(string) { (mos_u8 *) static_string, mor_carray_count(static_string) - 1 }
// sometimes needed to initialize global values
#define mor_sc(const_static_string) { (mos_u8 *) static_string, mor_carray_count(static_string) - 1 }
#define mor_fs(text) (int) (text).count, (char *) (text).base

const mor_string mor_string_empty = {0};

typedef enum
{
    mor_render_api_invalid,
    mor_render_api_gl,

    mor_render_api_count
} mor_render_api;

struct mor_renderer;
typedef struct mor_renderer mor_renderer;

struct mor_shader;
typedef struct mor_shader mor_shader;

struct mor_vertex_buffer;
typedef struct mor_vertex_buffer mor_vertex_buffer;

struct mor_texture;
typedef struct mor_texture mor_texture;

struct mor_framebuffer;
typedef struct mor_framebuffer mor_framebuffer;

typedef struct
{
    mor_framebuffer   *framebuffers;
    mor_shader        *shaders;
    mor_vertex_buffer *vertex_buffers;
    mor_texture       *textures;

    mor_u16 framebuffer_count;
    mor_u16 shader_count;
    mor_u16 vertex_buffer_count;
    mor_u16 texture_count;

    mor_u16 framebuffer_used_count;
    mor_u16 shader_used_count;
    mor_u16 vertex_buffer_used_count;
    mor_u16 texture_used_count;

    mor_render_api api;
} mor_renderer_base;

typedef enum
{
    mor_texture_slot_invalid = -1,
    mor_texture_slot_albedo,
    mor_texture_slot_material,

    mor_texture_slot_count
} mor_texture_slot;

typedef union
{
    struct
    {
        mor_b8 clear_color         : 1;
        mor_b8 clear_depth         : 1;
        mor_b8 disable_depth_test  : 1;
        mor_b8 disable_depth_write : 1;
        mor_b8 enable_blend        : 1;
    };

    mor_u8 value;
} mor_framebuffer_bind_mask;

typedef union
{
    struct
    {
        mor_f32 x;
        mor_f32 y;
        mor_f32 z;
    };

    mor_f32 values[3];
} mor_vec3;

typedef union
{
    struct
    {
        mor_f32 x;
        mor_f32 y;
        mor_f32 z;
        mor_f32 w;
    };

    struct
    {
        mor_f32 r;
        mor_f32 g;
        mor_f32 b;
        mor_f32 a;
    };

    mor_vec3 xyz;
    mor_vec3 rgb;

    mor_f32 values[4];
} mor_vec4;

typedef mor_vec4 mor_rgba;

typedef struct
{
    mor_rgba                  clear_color;
    mor_u16                   framebuffer_index;
    mor_framebuffer_bind_mask bind_mask;

    mor_u16 command_count;
} mor_render_pass;

typedef struct
{
    mor_u16 shader_index;
    mor_u16 vertex_buffer_index;
    mor_u16 texture_indices[mor_texture_slot_count];

    mor_u32 transform_offset;
    mor_u32 transform_count;

    mor_u32 vertex_offset;
    mor_u32 vertex_count;
} mor_command;

typedef union
{
    struct
    {
        mor_vec3 right;
        mor_f32  right_w;
        mor_vec3 up;
        mor_f32  up_w;
        mor_vec3 forward;
        mor_f32  forward_w;
        mor_vec3 translation;
        mor_f32  translation_w;
    };

    mor_f32 values[16];
} mor_transform;

typedef struct
{
    mor_render_pass *passes;
    mor_command     *commands;
    mor_transform   *transforms;

    mor_u16 pass_count;
    mor_u16 command_count;
    mor_u16 transform_count;

    mor_u16 pass_used_count;
    mor_u16 command_used_count;
    mor_u16 transform_used_count;
} mor_command_buffer;

#define mor_init_signature void mor_init(mor_renderer *renderer)
mor_init_signature;

#define mor_clear_signature void mor_clear(mor_renderer *renderer)
mor_clear_signature;

#define mor_push_pass_signature void mor_push_pass(mor_renderer *renderer, mor_command_buffer *buffer, mor_render_pass pass)
mor_push_pass_signature;

#define mor_push_command_signature void mor_push_command(mor_renderer *renderer, mor_command_buffer *buffer, mor_command command)
mor_push_command_signature;

#define mor_execute_signature void mor_execute(mor_renderer *renderer, mor_command_buffer *buffer)
mor_execute_signature;

typedef struct
{
    mor_string *vertex_attributes;
    mor_string *uniform_blocks;
    mor_string *vertex_sources;
    mor_string *fragment_sources;

    mor_u32 vertex_attribute_count;
    mor_u32 uniform_block_count;
    mor_u32 vertex_source_count;
    mor_u32 fragment_source_count;
} mor_shader_settings;

#define mor_shader_create_signature mor_shader mor_shader_create(mor_renderer *renderer, mor_string name, mor_shader_settings settings)
mor_shader_create_signature;

#ifdef __cplusplus
}
#endif

#endif
