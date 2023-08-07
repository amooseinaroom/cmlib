#if !defined GL_BINDINGS_H
#define GL_BINDINGS_H

#ifdef __cplusplus
extern "C" {
#endif

// types are manually added, since these are a mess to generate from the headers
typedef unsigned int GLenum;

typedef signed int GLsizei;
typedef signed long long GLsizeiptr;
typedef signed long long GLintptr;

typedef void GLvoid; // since its only useful as a pointer
typedef unsigned char GLboolean;
typedef char GLchar;
typedef unsigned int GLbitfield;

typedef unsigned char GLubyte;
typedef unsigned short GLushort;
typedef unsigned int GLuint;
typedef unsigned long long GLuint64;

typedef signed char GLbyte;
typedef signed short GLshort;
typedef signed int GLint;
typedef signed long long GLint64;

typedef float GLfloat;
typedef double GLdouble;

typedef float GLclampf;
typedef double GLclampd;

typedef signed short GLhalf;
typedef signed int GLfixed;

typedef unsigned long long GLuint64EXT;
typedef signed long long GLint64EXT;

typedef unsigned short GLhalfNV;
typedef void * GLvdpauSurfaceNV;

typedef unsigned int GLhandleARB;
typedef char GLcharARB;
typedef signed long long GLsizeiptrARB;
typedef signed int *GLintptrARB;

typedef void * GLeglImageOES;

typedef void * GLeglClientBufferEXT;

// structs that are passed by pointer only
typedef void * GLsync;

typedef void _cl_context;
typedef void _cl_event;

// file: C:/Program Files (x86)/Windows Kits/10/Include/10.0.19041.0/um/gl/GL.h

#define GL_VERSION_1_1 1
#define GL_ACCUM 0x0100
#define GL_LOAD 0x0101
#define GL_RETURN 0x0102
#define GL_MULT 0x0103
#define GL_ADD 0x0104
#define GL_NEVER 0x0200
#define GL_LESS 0x0201
#define GL_EQUAL 0x0202
#define GL_LEQUAL 0x0203
#define GL_GREATER 0x0204
#define GL_NOTEQUAL 0x0205
#define GL_GEQUAL 0x0206
#define GL_ALWAYS 0x0207
#define GL_CURRENT_BIT 0x00000001
#define GL_POINT_BIT 0x00000002
#define GL_LINE_BIT 0x00000004
#define GL_POLYGON_BIT 0x00000008
#define GL_POLYGON_STIPPLE_BIT 0x00000010
#define GL_PIXEL_MODE_BIT 0x00000020
#define GL_LIGHTING_BIT 0x00000040
#define GL_FOG_BIT 0x00000080
#define GL_DEPTH_BUFFER_BIT 0x00000100
#define GL_ACCUM_BUFFER_BIT 0x00000200
#define GL_STENCIL_BUFFER_BIT 0x00000400
#define GL_VIEWPORT_BIT 0x00000800
#define GL_TRANSFORM_BIT 0x00001000
#define GL_ENABLE_BIT 0x00002000
#define GL_COLOR_BUFFER_BIT 0x00004000
#define GL_HINT_BIT 0x00008000
#define GL_EVAL_BIT 0x00010000
#define GL_LIST_BIT 0x00020000
#define GL_TEXTURE_BIT 0x00040000
#define GL_SCISSOR_BIT 0x00080000
#define GL_ALL_ATTRIB_BITS 0x000fffff
#define GL_POINTS 0x0000
#define GL_LINES 0x0001
#define GL_LINE_LOOP 0x0002
#define GL_LINE_STRIP 0x0003
#define GL_TRIANGLES 0x0004
#define GL_TRIANGLE_STRIP 0x0005
#define GL_TRIANGLE_FAN 0x0006
#define GL_QUADS 0x0007
#define GL_QUAD_STRIP 0x0008
#define GL_POLYGON 0x0009
#define GL_ZERO 0
#define GL_ONE 1
#define GL_SRC_COLOR 0x0300
#define GL_ONE_MINUS_SRC_COLOR 0x0301
#define GL_SRC_ALPHA 0x0302
#define GL_ONE_MINUS_SRC_ALPHA 0x0303
#define GL_DST_ALPHA 0x0304
#define GL_ONE_MINUS_DST_ALPHA 0x0305
#define GL_DST_COLOR 0x0306
#define GL_ONE_MINUS_DST_COLOR 0x0307
#define GL_SRC_ALPHA_SATURATE 0x0308
#define GL_TRUE 1
#define GL_FALSE 0
#define GL_CLIP_PLANE0 0x3000
#define GL_CLIP_PLANE1 0x3001
#define GL_CLIP_PLANE2 0x3002
#define GL_CLIP_PLANE3 0x3003
#define GL_CLIP_PLANE4 0x3004
#define GL_CLIP_PLANE5 0x3005
#define GL_BYTE 0x1400
#define GL_UNSIGNED_BYTE 0x1401
#define GL_SHORT 0x1402
#define GL_UNSIGNED_SHORT 0x1403
#define GL_INT 0x1404
#define GL_UNSIGNED_INT 0x1405
#define GL_FLOAT 0x1406
#define GL_2_BYTES 0x1407
#define GL_3_BYTES 0x1408
#define GL_4_BYTES 0x1409
#define GL_DOUBLE 0x140A
#define GL_NONE 0
#define GL_FRONT_LEFT 0x0400
#define GL_FRONT_RIGHT 0x0401
#define GL_BACK_LEFT 0x0402
#define GL_BACK_RIGHT 0x0403
#define GL_FRONT 0x0404
#define GL_BACK 0x0405
#define GL_LEFT 0x0406
#define GL_RIGHT 0x0407
#define GL_FRONT_AND_BACK 0x0408
#define GL_AUX0 0x0409
#define GL_AUX1 0x040A
#define GL_AUX2 0x040B
#define GL_AUX3 0x040C
#define GL_NO_ERROR 0
#define GL_INVALID_ENUM 0x0500
#define GL_INVALID_VALUE 0x0501
#define GL_INVALID_OPERATION 0x0502
#define GL_STACK_OVERFLOW 0x0503
#define GL_STACK_UNDERFLOW 0x0504
#define GL_OUT_OF_MEMORY 0x0505
#define GL_2D 0x0600
#define GL_3D 0x0601
#define GL_3D_COLOR 0x0602
#define GL_3D_COLOR_TEXTURE 0x0603
#define GL_4D_COLOR_TEXTURE 0x0604
#define GL_PASS_THROUGH_TOKEN 0x0700
#define GL_POINT_TOKEN 0x0701
#define GL_LINE_TOKEN 0x0702
#define GL_POLYGON_TOKEN 0x0703
#define GL_BITMAP_TOKEN 0x0704
#define GL_DRAW_PIXEL_TOKEN 0x0705
#define GL_COPY_PIXEL_TOKEN 0x0706
#define GL_LINE_RESET_TOKEN 0x0707
#define GL_EXP 0x0800
#define GL_EXP2 0x0801
#define GL_CW 0x0900
#define GL_CCW 0x0901
#define GL_COEFF 0x0A00
#define GL_ORDER 0x0A01
#define GL_DOMAIN 0x0A02
#define GL_CURRENT_COLOR 0x0B00
#define GL_CURRENT_INDEX 0x0B01
#define GL_CURRENT_NORMAL 0x0B02
#define GL_CURRENT_TEXTURE_COORDS 0x0B03
#define GL_CURRENT_RASTER_COLOR 0x0B04
#define GL_CURRENT_RASTER_INDEX 0x0B05
#define GL_CURRENT_RASTER_TEXTURE_COORDS 0x0B06
#define GL_CURRENT_RASTER_POSITION 0x0B07
#define GL_CURRENT_RASTER_POSITION_VALID 0x0B08
#define GL_CURRENT_RASTER_DISTANCE 0x0B09
#define GL_POINT_SMOOTH 0x0B10
#define GL_POINT_SIZE 0x0B11
#define GL_POINT_SIZE_RANGE 0x0B12
#define GL_POINT_SIZE_GRANULARITY 0x0B13
#define GL_LINE_SMOOTH 0x0B20
#define GL_LINE_WIDTH 0x0B21
#define GL_LINE_WIDTH_RANGE 0x0B22
#define GL_LINE_WIDTH_GRANULARITY 0x0B23
#define GL_LINE_STIPPLE 0x0B24
#define GL_LINE_STIPPLE_PATTERN 0x0B25
#define GL_LINE_STIPPLE_REPEAT 0x0B26
#define GL_LIST_MODE 0x0B30
#define GL_MAX_LIST_NESTING 0x0B31
#define GL_LIST_BASE 0x0B32
#define GL_LIST_INDEX 0x0B33
#define GL_POLYGON_MODE 0x0B40
#define GL_POLYGON_SMOOTH 0x0B41
#define GL_POLYGON_STIPPLE 0x0B42
#define GL_EDGE_FLAG 0x0B43
#define GL_CULL_FACE 0x0B44
#define GL_CULL_FACE_MODE 0x0B45
#define GL_FRONT_FACE 0x0B46
#define GL_LIGHTING 0x0B50
#define GL_LIGHT_MODEL_LOCAL_VIEWER 0x0B51
#define GL_LIGHT_MODEL_TWO_SIDE 0x0B52
#define GL_LIGHT_MODEL_AMBIENT 0x0B53
#define GL_SHADE_MODEL 0x0B54
#define GL_COLOR_MATERIAL_FACE 0x0B55
#define GL_COLOR_MATERIAL_PARAMETER 0x0B56
#define GL_COLOR_MATERIAL 0x0B57
#define GL_FOG 0x0B60
#define GL_FOG_INDEX 0x0B61
#define GL_FOG_DENSITY 0x0B62
#define GL_FOG_START 0x0B63
#define GL_FOG_END 0x0B64
#define GL_FOG_MODE 0x0B65
#define GL_FOG_COLOR 0x0B66
#define GL_DEPTH_RANGE 0x0B70
#define GL_DEPTH_TEST 0x0B71
#define GL_DEPTH_WRITEMASK 0x0B72
#define GL_DEPTH_CLEAR_VALUE 0x0B73
#define GL_DEPTH_FUNC 0x0B74
#define GL_ACCUM_CLEAR_VALUE 0x0B80
#define GL_STENCIL_TEST 0x0B90
#define GL_STENCIL_CLEAR_VALUE 0x0B91
#define GL_STENCIL_FUNC 0x0B92
#define GL_STENCIL_VALUE_MASK 0x0B93
#define GL_STENCIL_FAIL 0x0B94
#define GL_STENCIL_PASS_DEPTH_FAIL 0x0B95
#define GL_STENCIL_PASS_DEPTH_PASS 0x0B96
#define GL_STENCIL_REF 0x0B97
#define GL_STENCIL_WRITEMASK 0x0B98
#define GL_MATRIX_MODE 0x0BA0
#define GL_NORMALIZE 0x0BA1
#define GL_VIEWPORT 0x0BA2
#define GL_MODELVIEW_STACK_DEPTH 0x0BA3
#define GL_PROJECTION_STACK_DEPTH 0x0BA4
#define GL_TEXTURE_STACK_DEPTH 0x0BA5
#define GL_MODELVIEW_MATRIX 0x0BA6
#define GL_PROJECTION_MATRIX 0x0BA7
#define GL_TEXTURE_MATRIX 0x0BA8
#define GL_ATTRIB_STACK_DEPTH 0x0BB0
#define GL_CLIENT_ATTRIB_STACK_DEPTH 0x0BB1
#define GL_ALPHA_TEST 0x0BC0
#define GL_ALPHA_TEST_FUNC 0x0BC1
#define GL_ALPHA_TEST_REF 0x0BC2
#define GL_DITHER 0x0BD0
#define GL_BLEND_DST 0x0BE0
#define GL_BLEND_SRC 0x0BE1
#define GL_BLEND 0x0BE2
#define GL_LOGIC_OP_MODE 0x0BF0
#define GL_INDEX_LOGIC_OP 0x0BF1
#define GL_COLOR_LOGIC_OP 0x0BF2
#define GL_AUX_BUFFERS 0x0C00
#define GL_DRAW_BUFFER 0x0C01
#define GL_READ_BUFFER 0x0C02
#define GL_SCISSOR_BOX 0x0C10
#define GL_SCISSOR_TEST 0x0C11
#define GL_INDEX_CLEAR_VALUE 0x0C20
#define GL_INDEX_WRITEMASK 0x0C21
#define GL_COLOR_CLEAR_VALUE 0x0C22
#define GL_COLOR_WRITEMASK 0x0C23
#define GL_INDEX_MODE 0x0C30
#define GL_RGBA_MODE 0x0C31
#define GL_DOUBLEBUFFER 0x0C32
#define GL_STEREO 0x0C33
#define GL_RENDER_MODE 0x0C40
#define GL_PERSPECTIVE_CORRECTION_HINT 0x0C50
#define GL_POINT_SMOOTH_HINT 0x0C51
#define GL_LINE_SMOOTH_HINT 0x0C52
#define GL_POLYGON_SMOOTH_HINT 0x0C53
#define GL_FOG_HINT 0x0C54
#define GL_TEXTURE_GEN_S 0x0C60
#define GL_TEXTURE_GEN_T 0x0C61
#define GL_TEXTURE_GEN_R 0x0C62
#define GL_TEXTURE_GEN_Q 0x0C63
#define GL_PIXEL_MAP_I_TO_I 0x0C70
#define GL_PIXEL_MAP_S_TO_S 0x0C71
#define GL_PIXEL_MAP_I_TO_R 0x0C72
#define GL_PIXEL_MAP_I_TO_G 0x0C73
#define GL_PIXEL_MAP_I_TO_B 0x0C74
#define GL_PIXEL_MAP_I_TO_A 0x0C75
#define GL_PIXEL_MAP_R_TO_R 0x0C76
#define GL_PIXEL_MAP_G_TO_G 0x0C77
#define GL_PIXEL_MAP_B_TO_B 0x0C78
#define GL_PIXEL_MAP_A_TO_A 0x0C79
#define GL_PIXEL_MAP_I_TO_I_SIZE 0x0CB0
#define GL_PIXEL_MAP_S_TO_S_SIZE 0x0CB1
#define GL_PIXEL_MAP_I_TO_R_SIZE 0x0CB2
#define GL_PIXEL_MAP_I_TO_G_SIZE 0x0CB3
#define GL_PIXEL_MAP_I_TO_B_SIZE 0x0CB4
#define GL_PIXEL_MAP_I_TO_A_SIZE 0x0CB5
#define GL_PIXEL_MAP_R_TO_R_SIZE 0x0CB6
#define GL_PIXEL_MAP_G_TO_G_SIZE 0x0CB7
#define GL_PIXEL_MAP_B_TO_B_SIZE 0x0CB8
#define GL_PIXEL_MAP_A_TO_A_SIZE 0x0CB9
#define GL_UNPACK_SWAP_BYTES 0x0CF0
#define GL_UNPACK_LSB_FIRST 0x0CF1
#define GL_UNPACK_ROW_LENGTH 0x0CF2
#define GL_UNPACK_SKIP_ROWS 0x0CF3
#define GL_UNPACK_SKIP_PIXELS 0x0CF4
#define GL_UNPACK_ALIGNMENT 0x0CF5
#define GL_PACK_SWAP_BYTES 0x0D00
#define GL_PACK_LSB_FIRST 0x0D01
#define GL_PACK_ROW_LENGTH 0x0D02
#define GL_PACK_SKIP_ROWS 0x0D03
#define GL_PACK_SKIP_PIXELS 0x0D04
#define GL_PACK_ALIGNMENT 0x0D05
#define GL_MAP_COLOR 0x0D10
#define GL_MAP_STENCIL 0x0D11
#define GL_INDEX_SHIFT 0x0D12
#define GL_INDEX_OFFSET 0x0D13
#define GL_RED_SCALE 0x0D14
#define GL_RED_BIAS 0x0D15
#define GL_ZOOM_X 0x0D16
#define GL_ZOOM_Y 0x0D17
#define GL_GREEN_SCALE 0x0D18
#define GL_GREEN_BIAS 0x0D19
#define GL_BLUE_SCALE 0x0D1A
#define GL_BLUE_BIAS 0x0D1B
#define GL_ALPHA_SCALE 0x0D1C
#define GL_ALPHA_BIAS 0x0D1D
#define GL_DEPTH_SCALE 0x0D1E
#define GL_DEPTH_BIAS 0x0D1F
#define GL_MAX_EVAL_ORDER 0x0D30
#define GL_MAX_LIGHTS 0x0D31
#define GL_MAX_CLIP_PLANES 0x0D32
#define GL_MAX_TEXTURE_SIZE 0x0D33
#define GL_MAX_PIXEL_MAP_TABLE 0x0D34
#define GL_MAX_ATTRIB_STACK_DEPTH 0x0D35
#define GL_MAX_MODELVIEW_STACK_DEPTH 0x0D36
#define GL_MAX_NAME_STACK_DEPTH 0x0D37
#define GL_MAX_PROJECTION_STACK_DEPTH 0x0D38
#define GL_MAX_TEXTURE_STACK_DEPTH 0x0D39
#define GL_MAX_VIEWPORT_DIMS 0x0D3A
#define GL_MAX_CLIENT_ATTRIB_STACK_DEPTH 0x0D3B
#define GL_SUBPIXEL_BITS 0x0D50
#define GL_INDEX_BITS 0x0D51
#define GL_RED_BITS 0x0D52
#define GL_GREEN_BITS 0x0D53
#define GL_BLUE_BITS 0x0D54
#define GL_ALPHA_BITS 0x0D55
#define GL_DEPTH_BITS 0x0D56
#define GL_STENCIL_BITS 0x0D57
#define GL_ACCUM_RED_BITS 0x0D58
#define GL_ACCUM_GREEN_BITS 0x0D59
#define GL_ACCUM_BLUE_BITS 0x0D5A
#define GL_ACCUM_ALPHA_BITS 0x0D5B
#define GL_NAME_STACK_DEPTH 0x0D70
#define GL_AUTO_NORMAL 0x0D80
#define GL_MAP1_COLOR_4 0x0D90
#define GL_MAP1_INDEX 0x0D91
#define GL_MAP1_NORMAL 0x0D92
#define GL_MAP1_TEXTURE_COORD_1 0x0D93
#define GL_MAP1_TEXTURE_COORD_2 0x0D94
#define GL_MAP1_TEXTURE_COORD_3 0x0D95
#define GL_MAP1_TEXTURE_COORD_4 0x0D96
#define GL_MAP1_VERTEX_3 0x0D97
#define GL_MAP1_VERTEX_4 0x0D98
#define GL_MAP2_COLOR_4 0x0DB0
#define GL_MAP2_INDEX 0x0DB1
#define GL_MAP2_NORMAL 0x0DB2
#define GL_MAP2_TEXTURE_COORD_1 0x0DB3
#define GL_MAP2_TEXTURE_COORD_2 0x0DB4
#define GL_MAP2_TEXTURE_COORD_3 0x0DB5
#define GL_MAP2_TEXTURE_COORD_4 0x0DB6
#define GL_MAP2_VERTEX_3 0x0DB7
#define GL_MAP2_VERTEX_4 0x0DB8
#define GL_MAP1_GRID_DOMAIN 0x0DD0
#define GL_MAP1_GRID_SEGMENTS 0x0DD1
#define GL_MAP2_GRID_DOMAIN 0x0DD2
#define GL_MAP2_GRID_SEGMENTS 0x0DD3
#define GL_TEXTURE_1D 0x0DE0
#define GL_TEXTURE_2D 0x0DE1
#define GL_FEEDBACK_BUFFER_POINTER 0x0DF0
#define GL_FEEDBACK_BUFFER_SIZE 0x0DF1
#define GL_FEEDBACK_BUFFER_TYPE 0x0DF2
#define GL_SELECTION_BUFFER_POINTER 0x0DF3
#define GL_SELECTION_BUFFER_SIZE 0x0DF4
#define GL_TEXTURE_WIDTH 0x1000
#define GL_TEXTURE_HEIGHT 0x1001
#define GL_TEXTURE_INTERNAL_FORMAT 0x1003
#define GL_TEXTURE_BORDER_COLOR 0x1004
#define GL_TEXTURE_BORDER 0x1005
#define GL_DONT_CARE 0x1100
#define GL_FASTEST 0x1101
#define GL_NICEST 0x1102
#define GL_LIGHT0 0x4000
#define GL_LIGHT1 0x4001
#define GL_LIGHT2 0x4002
#define GL_LIGHT3 0x4003
#define GL_LIGHT4 0x4004
#define GL_LIGHT5 0x4005
#define GL_LIGHT6 0x4006
#define GL_LIGHT7 0x4007
#define GL_AMBIENT 0x1200
#define GL_DIFFUSE 0x1201
#define GL_SPECULAR 0x1202
#define GL_POSITION 0x1203
#define GL_SPOT_DIRECTION 0x1204
#define GL_SPOT_EXPONENT 0x1205
#define GL_SPOT_CUTOFF 0x1206
#define GL_CONSTANT_ATTENUATION 0x1207
#define GL_LINEAR_ATTENUATION 0x1208
#define GL_QUADRATIC_ATTENUATION 0x1209
#define GL_COMPILE 0x1300
#define GL_COMPILE_AND_EXECUTE 0x1301
#define GL_CLEAR 0x1500
#define GL_AND 0x1501
#define GL_AND_REVERSE 0x1502
#define GL_COPY 0x1503
#define GL_AND_INVERTED 0x1504
#define GL_NOOP 0x1505
#define GL_XOR 0x1506
#define GL_OR 0x1507
#define GL_NOR 0x1508
#define GL_EQUIV 0x1509
#define GL_INVERT 0x150A
#define GL_OR_REVERSE 0x150B
#define GL_COPY_INVERTED 0x150C
#define GL_OR_INVERTED 0x150D
#define GL_NAND 0x150E
#define GL_SET 0x150F
#define GL_EMISSION 0x1600
#define GL_SHININESS 0x1601
#define GL_AMBIENT_AND_DIFFUSE 0x1602
#define GL_COLOR_INDEXES 0x1603
#define GL_MODELVIEW 0x1700
#define GL_PROJECTION 0x1701
#define GL_TEXTURE 0x1702
#define GL_COLOR 0x1800
#define GL_DEPTH 0x1801
#define GL_STENCIL 0x1802
#define GL_COLOR_INDEX 0x1900
#define GL_STENCIL_INDEX 0x1901
#define GL_DEPTH_COMPONENT 0x1902
#define GL_RED 0x1903
#define GL_GREEN 0x1904
#define GL_BLUE 0x1905
#define GL_ALPHA 0x1906
#define GL_RGB 0x1907
#define GL_RGBA 0x1908
#define GL_LUMINANCE 0x1909
#define GL_LUMINANCE_ALPHA 0x190A
#define GL_BITMAP 0x1A00
#define GL_POINT 0x1B00
#define GL_LINE 0x1B01
#define GL_FILL 0x1B02
#define GL_RENDER 0x1C00
#define GL_FEEDBACK 0x1C01
#define GL_SELECT 0x1C02
#define GL_FLAT 0x1D00
#define GL_SMOOTH 0x1D01
#define GL_KEEP 0x1E00
#define GL_REPLACE 0x1E01
#define GL_INCR 0x1E02
#define GL_DECR 0x1E03
#define GL_VENDOR 0x1F00
#define GL_RENDERER 0x1F01
#define GL_VERSION 0x1F02
#define GL_EXTENSIONS 0x1F03
#define GL_S 0x2000
#define GL_T 0x2001
#define GL_R 0x2002
#define GL_Q 0x2003
#define GL_MODULATE 0x2100
#define GL_DECAL 0x2101
#define GL_TEXTURE_ENV_MODE 0x2200
#define GL_TEXTURE_ENV_COLOR 0x2201
#define GL_TEXTURE_ENV 0x2300
#define GL_EYE_LINEAR 0x2400
#define GL_OBJECT_LINEAR 0x2401
#define GL_SPHERE_MAP 0x2402
#define GL_TEXTURE_GEN_MODE 0x2500
#define GL_OBJECT_PLANE 0x2501
#define GL_EYE_PLANE 0x2502
#define GL_NEAREST 0x2600
#define GL_LINEAR 0x2601
#define GL_NEAREST_MIPMAP_NEAREST 0x2700
#define GL_LINEAR_MIPMAP_NEAREST 0x2701
#define GL_NEAREST_MIPMAP_LINEAR 0x2702
#define GL_LINEAR_MIPMAP_LINEAR 0x2703
#define GL_TEXTURE_MAG_FILTER 0x2800
#define GL_TEXTURE_MIN_FILTER 0x2801
#define GL_TEXTURE_WRAP_S 0x2802
#define GL_TEXTURE_WRAP_T 0x2803
#define GL_CLAMP 0x2900
#define GL_REPEAT 0x2901
#define GL_CLIENT_PIXEL_STORE_BIT 0x00000001
#define GL_CLIENT_VERTEX_ARRAY_BIT 0x00000002
#define GL_CLIENT_ALL_ATTRIB_BITS 0xffffffff
#define GL_POLYGON_OFFSET_FACTOR 0x8038
#define GL_POLYGON_OFFSET_UNITS 0x2A00
#define GL_POLYGON_OFFSET_POINT 0x2A01
#define GL_POLYGON_OFFSET_LINE 0x2A02
#define GL_POLYGON_OFFSET_FILL 0x8037
#define GL_ALPHA4 0x803B
#define GL_ALPHA8 0x803C
#define GL_ALPHA12 0x803D
#define GL_ALPHA16 0x803E
#define GL_LUMINANCE4 0x803F
#define GL_LUMINANCE8 0x8040
#define GL_LUMINANCE12 0x8041
#define GL_LUMINANCE16 0x8042
#define GL_LUMINANCE4_ALPHA4 0x8043
#define GL_LUMINANCE6_ALPHA2 0x8044
#define GL_LUMINANCE8_ALPHA8 0x8045
#define GL_LUMINANCE12_ALPHA4 0x8046
#define GL_LUMINANCE12_ALPHA12 0x8047
#define GL_LUMINANCE16_ALPHA16 0x8048
#define GL_INTENSITY 0x8049
#define GL_INTENSITY4 0x804A
#define GL_INTENSITY8 0x804B
#define GL_INTENSITY12 0x804C
#define GL_INTENSITY16 0x804D
#define GL_R3_G3_B2 0x2A10
#define GL_RGB4 0x804F
#define GL_RGB5 0x8050
#define GL_RGB8 0x8051
#define GL_RGB10 0x8052
#define GL_RGB12 0x8053
#define GL_RGB16 0x8054
#define GL_RGBA2 0x8055
#define GL_RGBA4 0x8056
#define GL_RGB5_A1 0x8057
#define GL_RGBA8 0x8058
#define GL_RGB10_A2 0x8059
#define GL_RGBA12 0x805A
#define GL_RGBA16 0x805B
#define GL_TEXTURE_RED_SIZE 0x805C
#define GL_TEXTURE_GREEN_SIZE 0x805D
#define GL_TEXTURE_BLUE_SIZE 0x805E
#define GL_TEXTURE_ALPHA_SIZE 0x805F
#define GL_TEXTURE_LUMINANCE_SIZE 0x8060
#define GL_TEXTURE_INTENSITY_SIZE 0x8061
#define GL_PROXY_TEXTURE_1D 0x8063
#define GL_PROXY_TEXTURE_2D 0x8064
#define GL_TEXTURE_PRIORITY 0x8066
#define GL_TEXTURE_RESIDENT 0x8067
#define GL_TEXTURE_BINDING_1D 0x8068
#define GL_TEXTURE_BINDING_2D 0x8069
#define GL_VERTEX_ARRAY 0x8074
#define GL_NORMAL_ARRAY 0x8075
#define GL_COLOR_ARRAY 0x8076
#define GL_INDEX_ARRAY 0x8077
#define GL_TEXTURE_COORD_ARRAY 0x8078
#define GL_EDGE_FLAG_ARRAY 0x8079
#define GL_VERTEX_ARRAY_SIZE 0x807A
#define GL_VERTEX_ARRAY_TYPE 0x807B
#define GL_VERTEX_ARRAY_STRIDE 0x807C
#define GL_NORMAL_ARRAY_TYPE 0x807E
#define GL_NORMAL_ARRAY_STRIDE 0x807F
#define GL_COLOR_ARRAY_SIZE 0x8081
#define GL_COLOR_ARRAY_TYPE 0x8082
#define GL_COLOR_ARRAY_STRIDE 0x8083
#define GL_INDEX_ARRAY_TYPE 0x8085
#define GL_INDEX_ARRAY_STRIDE 0x8086
#define GL_TEXTURE_COORD_ARRAY_SIZE 0x8088
#define GL_TEXTURE_COORD_ARRAY_TYPE 0x8089
#define GL_TEXTURE_COORD_ARRAY_STRIDE 0x808A
#define GL_EDGE_FLAG_ARRAY_STRIDE 0x808C
#define GL_VERTEX_ARRAY_POINTER 0x808E
#define GL_NORMAL_ARRAY_POINTER 0x808F
#define GL_COLOR_ARRAY_POINTER 0x8090
#define GL_INDEX_ARRAY_POINTER 0x8091
#define GL_TEXTURE_COORD_ARRAY_POINTER 0x8092
#define GL_EDGE_FLAG_ARRAY_POINTER 0x8093
#define GL_V2F 0x2A20
#define GL_V3F 0x2A21
#define GL_C4UB_V2F 0x2A22
#define GL_C4UB_V3F 0x2A23
#define GL_C3F_V3F 0x2A24
#define GL_N3F_V3F 0x2A25
#define GL_C4F_N3F_V3F 0x2A26
#define GL_T2F_V3F 0x2A27
#define GL_T4F_V4F 0x2A28
#define GL_T2F_C4UB_V3F 0x2A29
#define GL_T2F_C3F_V3F 0x2A2A
#define GL_T2F_N3F_V3F 0x2A2B
#define GL_T2F_C4F_N3F_V3F 0x2A2C
#define GL_T4F_C4F_N3F_V4F 0x2A2D
#define GL_EXT_vertex_array 1
#define GL_EXT_bgra 1
#define GL_EXT_paletted_texture 1
#define GL_WIN_swap_hint 1
#define GL_WIN_draw_range_elements 1
#define GL_VERTEX_ARRAY_EXT 0x8074
#define GL_NORMAL_ARRAY_EXT 0x8075
#define GL_COLOR_ARRAY_EXT 0x8076
#define GL_INDEX_ARRAY_EXT 0x8077
#define GL_TEXTURE_COORD_ARRAY_EXT 0x8078
#define GL_EDGE_FLAG_ARRAY_EXT 0x8079
#define GL_VERTEX_ARRAY_SIZE_EXT 0x807A
#define GL_VERTEX_ARRAY_TYPE_EXT 0x807B
#define GL_VERTEX_ARRAY_STRIDE_EXT 0x807C
#define GL_VERTEX_ARRAY_COUNT_EXT 0x807D
#define GL_NORMAL_ARRAY_TYPE_EXT 0x807E
#define GL_NORMAL_ARRAY_STRIDE_EXT 0x807F
#define GL_NORMAL_ARRAY_COUNT_EXT 0x8080
#define GL_COLOR_ARRAY_SIZE_EXT 0x8081
#define GL_COLOR_ARRAY_TYPE_EXT 0x8082
#define GL_COLOR_ARRAY_STRIDE_EXT 0x8083
#define GL_COLOR_ARRAY_COUNT_EXT 0x8084
#define GL_INDEX_ARRAY_TYPE_EXT 0x8085
#define GL_INDEX_ARRAY_STRIDE_EXT 0x8086
#define GL_INDEX_ARRAY_COUNT_EXT 0x8087
#define GL_TEXTURE_COORD_ARRAY_SIZE_EXT 0x8088
#define GL_TEXTURE_COORD_ARRAY_TYPE_EXT 0x8089
#define GL_TEXTURE_COORD_ARRAY_STRIDE_EXT 0x808A
#define GL_TEXTURE_COORD_ARRAY_COUNT_EXT 0x808B
#define GL_EDGE_FLAG_ARRAY_STRIDE_EXT 0x808C
#define GL_EDGE_FLAG_ARRAY_COUNT_EXT 0x808D
#define GL_VERTEX_ARRAY_POINTER_EXT 0x808E
#define GL_NORMAL_ARRAY_POINTER_EXT 0x808F
#define GL_COLOR_ARRAY_POINTER_EXT 0x8090
#define GL_INDEX_ARRAY_POINTER_EXT 0x8091
#define GL_TEXTURE_COORD_ARRAY_POINTER_EXT 0x8092
#define GL_EDGE_FLAG_ARRAY_POINTER_EXT 0x8093
#define GL_DOUBLE_EXT GL_DOUBLE
#define GL_BGR_EXT 0x80E0
#define GL_BGRA_EXT 0x80E1
#define GL_COLOR_TABLE_FORMAT_EXT 0x80D8
#define GL_COLOR_TABLE_WIDTH_EXT 0x80D9
#define GL_COLOR_TABLE_RED_SIZE_EXT 0x80DA
#define GL_COLOR_TABLE_GREEN_SIZE_EXT 0x80DB
#define GL_COLOR_TABLE_BLUE_SIZE_EXT 0x80DC
#define GL_COLOR_TABLE_ALPHA_SIZE_EXT 0x80DD
#define GL_COLOR_TABLE_LUMINANCE_SIZE_EXT 0x80DE
#define GL_COLOR_TABLE_INTENSITY_SIZE_EXT 0x80DF
#define GL_COLOR_INDEX1_EXT 0x80E2
#define GL_COLOR_INDEX2_EXT 0x80E3
#define GL_COLOR_INDEX4_EXT 0x80E4
#define GL_COLOR_INDEX8_EXT 0x80E5
#define GL_COLOR_INDEX12_EXT 0x80E6
#define GL_COLOR_INDEX16_EXT 0x80E7
#define GL_MAX_ELEMENTS_VERTICES_WIN 0x80E8
#define GL_MAX_ELEMENTS_INDICES_WIN 0x80E9
#define GL_PHONG_WIN 0x80EA 
#define GL_PHONG_HINT_WIN 0x80EB 
#define GL_FOG_SPECULAR_TEXTURE_WIN 0x80EC
#define GL_LOGIC_OP GL_INDEX_LOGIC_OP
#define GL_TEXTURE_COMPONENTS GL_TEXTURE_INTERNAL_FORMAT

void glAccum(GLenum op, GLfloat value);

void glAlphaFunc(GLenum func, GLclampf ref);

GLboolean  glAreTexturesResident(GLsizei n, GLuint *textures, GLboolean *residences);

void glArrayElement(GLint i);

void glBegin(GLenum mode);

void glBindTexture(GLenum target, GLuint texture);

void glBitmap(GLsizei width, GLsizei height, GLfloat xorig, GLfloat yorig, GLfloat xmove, GLfloat ymove, GLubyte *bitmap);

void glBlendFunc(GLenum sfactor, GLenum dfactor);

void glCallList(GLuint list);

void glCallLists(GLsizei n, GLenum type, GLvoid *lists);

void glClear(GLbitfield mask);

void glClearAccum(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);

void glClearColor(GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha);

void glClearDepth(GLclampd depth);

void glClearIndex(GLfloat c);

void glClearStencil(GLint s);

void glClipPlane(GLenum plane, GLdouble *equation);

void glColor3b(GLbyte red, GLbyte green, GLbyte blue);

void glColor3bv(GLbyte *v);

void glColor3d(GLdouble red, GLdouble green, GLdouble blue);

void glColor3dv(GLdouble *v);

void glColor3f(GLfloat red, GLfloat green, GLfloat blue);

void glColor3fv(GLfloat *v);

void glColor3i(GLint red, GLint green, GLint blue);

void glColor3iv(GLint *v);

void glColor3s(GLshort red, GLshort green, GLshort blue);

void glColor3sv(GLshort *v);

void glColor3ub(GLubyte red, GLubyte green, GLubyte blue);

void glColor3ubv(GLubyte *v);

void glColor3ui(GLuint red, GLuint green, GLuint blue);

void glColor3uiv(GLuint *v);

void glColor3us(GLushort red, GLushort green, GLushort blue);

void glColor3usv(GLushort *v);

void glColor4b(GLbyte red, GLbyte green, GLbyte blue, GLbyte alpha);

void glColor4bv(GLbyte *v);

void glColor4d(GLdouble red, GLdouble green, GLdouble blue, GLdouble alpha);

void glColor4dv(GLdouble *v);

void glColor4f(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);

void glColor4fv(GLfloat *v);

void glColor4i(GLint red, GLint green, GLint blue, GLint alpha);

void glColor4iv(GLint *v);

void glColor4s(GLshort red, GLshort green, GLshort blue, GLshort alpha);

void glColor4sv(GLshort *v);

void glColor4ub(GLubyte red, GLubyte green, GLubyte blue, GLubyte alpha);

void glColor4ubv(GLubyte *v);

void glColor4ui(GLuint red, GLuint green, GLuint blue, GLuint alpha);

void glColor4uiv(GLuint *v);

void glColor4us(GLushort red, GLushort green, GLushort blue, GLushort alpha);

void glColor4usv(GLushort *v);

void glColorMask(GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha);

void glColorMaterial(GLenum face, GLenum mode);

void glColorPointer(GLint size, GLenum type, GLsizei stride, GLvoid *pointer);

void glCopyPixels(GLint x, GLint y, GLsizei width, GLsizei height, GLenum type);

void glCopyTexImage1D(GLenum target, GLint level, GLenum internalFormat, GLint x, GLint y, GLsizei width, GLint border);

void glCopyTexImage2D(GLenum target, GLint level, GLenum internalFormat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border);

void glCopyTexSubImage1D(GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width);

void glCopyTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height);

void glCullFace(GLenum mode);

void glDeleteLists(GLuint list, GLsizei range);

void glDeleteTextures(GLsizei n, GLuint *textures);

void glDepthFunc(GLenum func);

void glDepthMask(GLboolean flag);

void glDepthRange(GLclampd zNear, GLclampd zFar);

void glDisable(GLenum cap);

void glDisableClientState(GLenum array);

void glDrawArrays(GLenum mode, GLint first, GLsizei count);

void glDrawBuffer(GLenum mode);

void glDrawElements(GLenum mode, GLsizei count, GLenum type, GLvoid *indices);

void glDrawPixels(GLsizei width, GLsizei height, GLenum format, GLenum type, GLvoid *pixels);

void glEdgeFlag(GLboolean flag);

void glEdgeFlagPointer(GLsizei stride, GLvoid *pointer);

void glEdgeFlagv(GLboolean *flag);

void glEnable(GLenum cap);

void glEnableClientState(GLenum array);

void glEnd();

void glEndList();

void glEvalCoord1d(GLdouble u);

void glEvalCoord1dv(GLdouble *u);

void glEvalCoord1f(GLfloat u);

void glEvalCoord1fv(GLfloat *u);

void glEvalCoord2d(GLdouble u, GLdouble v);

void glEvalCoord2dv(GLdouble *u);

void glEvalCoord2f(GLfloat u, GLfloat v);

void glEvalCoord2fv(GLfloat *u);

void glEvalMesh1(GLenum mode, GLint i1, GLint i2);

void glEvalMesh2(GLenum mode, GLint i1, GLint i2, GLint j1, GLint j2);

void glEvalPoint1(GLint i);

void glEvalPoint2(GLint i, GLint j);

void glFeedbackBuffer(GLsizei size, GLenum type, GLfloat *buffer);

void glFinish();

void glFlush();

void glFogf(GLenum pname, GLfloat param);

void glFogfv(GLenum pname, GLfloat *params);

void glFogi(GLenum pname, GLint param);

void glFogiv(GLenum pname, GLint *params);

void glFrontFace(GLenum mode);

void glFrustum(GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar);

GLuint  glGenLists(GLsizei range);

void glGenTextures(GLsizei n, GLuint *textures);

void glGetBooleanv(GLenum pname, GLboolean *params);

void glGetClipPlane(GLenum plane, GLdouble *equation);

void glGetDoublev(GLenum pname, GLdouble *params);

GLenum  glGetError();

void glGetFloatv(GLenum pname, GLfloat *params);

void glGetIntegerv(GLenum pname, GLint *params);

void glGetLightfv(GLenum light, GLenum pname, GLfloat *params);

void glGetLightiv(GLenum light, GLenum pname, GLint *params);

void glGetMapdv(GLenum target, GLenum query, GLdouble *v);

void glGetMapfv(GLenum target, GLenum query, GLfloat *v);

void glGetMapiv(GLenum target, GLenum query, GLint *v);

void glGetMaterialfv(GLenum face, GLenum pname, GLfloat *params);

void glGetMaterialiv(GLenum face, GLenum pname, GLint *params);

void glGetPixelMapfv(GLenum map, GLfloat *values);

void glGetPixelMapuiv(GLenum map, GLuint *values);

void glGetPixelMapusv(GLenum map, GLushort *values);

void glGetPointerv(GLenum pname, GLvoid **params);

void glGetPolygonStipple(GLubyte *mask);

GLubyte * glGetString(GLenum name);

void glGetTexEnvfv(GLenum target, GLenum pname, GLfloat *params);

void glGetTexEnviv(GLenum target, GLenum pname, GLint *params);

void glGetTexGendv(GLenum coord, GLenum pname, GLdouble *params);

void glGetTexGenfv(GLenum coord, GLenum pname, GLfloat *params);

void glGetTexGeniv(GLenum coord, GLenum pname, GLint *params);

void glGetTexImage(GLenum target, GLint level, GLenum format, GLenum type, GLvoid *pixels);

void glGetTexLevelParameterfv(GLenum target, GLint level, GLenum pname, GLfloat *params);

void glGetTexLevelParameteriv(GLenum target, GLint level, GLenum pname, GLint *params);

void glGetTexParameterfv(GLenum target, GLenum pname, GLfloat *params);

void glGetTexParameteriv(GLenum target, GLenum pname, GLint *params);

void glHint(GLenum target, GLenum mode);

void glIndexMask(GLuint mask);

void glIndexPointer(GLenum type, GLsizei stride, GLvoid *pointer);

void glIndexd(GLdouble c);

void glIndexdv(GLdouble *c);

void glIndexf(GLfloat c);

void glIndexfv(GLfloat *c);

void glIndexi(GLint c);

void glIndexiv(GLint *c);

void glIndexs(GLshort c);

void glIndexsv(GLshort *c);

void glIndexub(GLubyte c);

void glIndexubv(GLubyte *c);

void glInitNames();

void glInterleavedArrays(GLenum format, GLsizei stride, GLvoid *pointer);

GLboolean  glIsEnabled(GLenum cap);

GLboolean  glIsList(GLuint list);

GLboolean  glIsTexture(GLuint texture);

void glLightModelf(GLenum pname, GLfloat param);

void glLightModelfv(GLenum pname, GLfloat *params);

void glLightModeli(GLenum pname, GLint param);

void glLightModeliv(GLenum pname, GLint *params);

void glLightf(GLenum light, GLenum pname, GLfloat param);

void glLightfv(GLenum light, GLenum pname, GLfloat *params);

void glLighti(GLenum light, GLenum pname, GLint param);

void glLightiv(GLenum light, GLenum pname, GLint *params);

void glLineStipple(GLint factor, GLushort pattern);

void glLineWidth(GLfloat width);

void glListBase(GLuint base);

void glLoadIdentity();

void glLoadMatrixd(GLdouble *m);

void glLoadMatrixf(GLfloat *m);

void glLoadName(GLuint name);

void glLogicOp(GLenum opcode);

void glMap1d(GLenum target, GLdouble u1, GLdouble u2, GLint stride, GLint order, GLdouble *points);

void glMap1f(GLenum target, GLfloat u1, GLfloat u2, GLint stride, GLint order, GLfloat *points);

void glMap2d(GLenum target, GLdouble u1, GLdouble u2, GLint ustride, GLint uorder, GLdouble v1, GLdouble v2, GLint vstride, GLint vorder, GLdouble *points);

void glMap2f(GLenum target, GLfloat u1, GLfloat u2, GLint ustride, GLint uorder, GLfloat v1, GLfloat v2, GLint vstride, GLint vorder, GLfloat *points);

void glMapGrid1d(GLint un, GLdouble u1, GLdouble u2);

void glMapGrid1f(GLint un, GLfloat u1, GLfloat u2);

void glMapGrid2d(GLint un, GLdouble u1, GLdouble u2, GLint vn, GLdouble v1, GLdouble v2);

void glMapGrid2f(GLint un, GLfloat u1, GLfloat u2, GLint vn, GLfloat v1, GLfloat v2);

void glMaterialf(GLenum face, GLenum pname, GLfloat param);

void glMaterialfv(GLenum face, GLenum pname, GLfloat *params);

void glMateriali(GLenum face, GLenum pname, GLint param);

void glMaterialiv(GLenum face, GLenum pname, GLint *params);

void glMatrixMode(GLenum mode);

void glMultMatrixd(GLdouble *m);

void glMultMatrixf(GLfloat *m);

void glNewList(GLuint list, GLenum mode);

void glNormal3b(GLbyte nx, GLbyte ny, GLbyte nz);

void glNormal3bv(GLbyte *v);

void glNormal3d(GLdouble nx, GLdouble ny, GLdouble nz);

void glNormal3dv(GLdouble *v);

void glNormal3f(GLfloat nx, GLfloat ny, GLfloat nz);

void glNormal3fv(GLfloat *v);

void glNormal3i(GLint nx, GLint ny, GLint nz);

void glNormal3iv(GLint *v);

void glNormal3s(GLshort nx, GLshort ny, GLshort nz);

void glNormal3sv(GLshort *v);

void glNormalPointer(GLenum type, GLsizei stride, GLvoid *pointer);

void glOrtho(GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar);

void glPassThrough(GLfloat token);

void glPixelMapfv(GLenum map, GLsizei mapsize, GLfloat *values);

void glPixelMapuiv(GLenum map, GLsizei mapsize, GLuint *values);

void glPixelMapusv(GLenum map, GLsizei mapsize, GLushort *values);

void glPixelStoref(GLenum pname, GLfloat param);

void glPixelStorei(GLenum pname, GLint param);

void glPixelTransferf(GLenum pname, GLfloat param);

void glPixelTransferi(GLenum pname, GLint param);

void glPixelZoom(GLfloat xfactor, GLfloat yfactor);

void glPointSize(GLfloat size);

void glPolygonMode(GLenum face, GLenum mode);

void glPolygonOffset(GLfloat factor, GLfloat units);

void glPolygonStipple(GLubyte *mask);

void glPopAttrib();

void glPopClientAttrib();

void glPopMatrix();

void glPopName();

void glPrioritizeTextures(GLsizei n, GLuint *textures, GLclampf *priorities);

void glPushAttrib(GLbitfield mask);

void glPushClientAttrib(GLbitfield mask);

void glPushMatrix();

void glPushName(GLuint name);

void glRasterPos2d(GLdouble x, GLdouble y);

void glRasterPos2dv(GLdouble *v);

void glRasterPos2f(GLfloat x, GLfloat y);

void glRasterPos2fv(GLfloat *v);

void glRasterPos2i(GLint x, GLint y);

void glRasterPos2iv(GLint *v);

void glRasterPos2s(GLshort x, GLshort y);

void glRasterPos2sv(GLshort *v);

void glRasterPos3d(GLdouble x, GLdouble y, GLdouble z);

void glRasterPos3dv(GLdouble *v);

void glRasterPos3f(GLfloat x, GLfloat y, GLfloat z);

void glRasterPos3fv(GLfloat *v);

void glRasterPos3i(GLint x, GLint y, GLint z);

void glRasterPos3iv(GLint *v);

void glRasterPos3s(GLshort x, GLshort y, GLshort z);

void glRasterPos3sv(GLshort *v);

void glRasterPos4d(GLdouble x, GLdouble y, GLdouble z, GLdouble w);

void glRasterPos4dv(GLdouble *v);

void glRasterPos4f(GLfloat x, GLfloat y, GLfloat z, GLfloat w);

void glRasterPos4fv(GLfloat *v);

void glRasterPos4i(GLint x, GLint y, GLint z, GLint w);

void glRasterPos4iv(GLint *v);

void glRasterPos4s(GLshort x, GLshort y, GLshort z, GLshort w);

void glRasterPos4sv(GLshort *v);

void glReadBuffer(GLenum mode);

void glReadPixels(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLvoid *pixels);

void glRectd(GLdouble x1, GLdouble y1, GLdouble x2, GLdouble y2);

void glRectdv(GLdouble *v1, GLdouble *v2);

void glRectf(GLfloat x1, GLfloat y1, GLfloat x2, GLfloat y2);

void glRectfv(GLfloat *v1, GLfloat *v2);

void glRecti(GLint x1, GLint y1, GLint x2, GLint y2);

void glRectiv(GLint *v1, GLint *v2);

void glRects(GLshort x1, GLshort y1, GLshort x2, GLshort y2);

void glRectsv(GLshort *v1, GLshort *v2);

GLint  glRenderMode(GLenum mode);

void glRotated(GLdouble angle, GLdouble x, GLdouble y, GLdouble z);

void glRotatef(GLfloat angle, GLfloat x, GLfloat y, GLfloat z);

void glScaled(GLdouble x, GLdouble y, GLdouble z);

void glScalef(GLfloat x, GLfloat y, GLfloat z);

void glScissor(GLint x, GLint y, GLsizei width, GLsizei height);

void glSelectBuffer(GLsizei size, GLuint *buffer);

void glShadeModel(GLenum mode);

void glStencilFunc(GLenum func, GLint ref, GLuint mask);

void glStencilMask(GLuint mask);

void glStencilOp(GLenum fail, GLenum zfail, GLenum zpass);

void glTexCoord1d(GLdouble s);

void glTexCoord1dv(GLdouble *v);

void glTexCoord1f(GLfloat s);

void glTexCoord1fv(GLfloat *v);

void glTexCoord1i(GLint s);

void glTexCoord1iv(GLint *v);

void glTexCoord1s(GLshort s);

void glTexCoord1sv(GLshort *v);

void glTexCoord2d(GLdouble s, GLdouble t);

void glTexCoord2dv(GLdouble *v);

void glTexCoord2f(GLfloat s, GLfloat t);

void glTexCoord2fv(GLfloat *v);

void glTexCoord2i(GLint s, GLint t);

void glTexCoord2iv(GLint *v);

void glTexCoord2s(GLshort s, GLshort t);

void glTexCoord2sv(GLshort *v);

void glTexCoord3d(GLdouble s, GLdouble t, GLdouble r);

void glTexCoord3dv(GLdouble *v);

void glTexCoord3f(GLfloat s, GLfloat t, GLfloat r);

void glTexCoord3fv(GLfloat *v);

void glTexCoord3i(GLint s, GLint t, GLint r);

void glTexCoord3iv(GLint *v);

void glTexCoord3s(GLshort s, GLshort t, GLshort r);

void glTexCoord3sv(GLshort *v);

void glTexCoord4d(GLdouble s, GLdouble t, GLdouble r, GLdouble q);

void glTexCoord4dv(GLdouble *v);

void glTexCoord4f(GLfloat s, GLfloat t, GLfloat r, GLfloat q);

void glTexCoord4fv(GLfloat *v);

void glTexCoord4i(GLint s, GLint t, GLint r, GLint q);

void glTexCoord4iv(GLint *v);

void glTexCoord4s(GLshort s, GLshort t, GLshort r, GLshort q);

void glTexCoord4sv(GLshort *v);

void glTexCoordPointer(GLint size, GLenum type, GLsizei stride, GLvoid *pointer);

void glTexEnvf(GLenum target, GLenum pname, GLfloat param);

void glTexEnvfv(GLenum target, GLenum pname, GLfloat *params);

void glTexEnvi(GLenum target, GLenum pname, GLint param);

void glTexEnviv(GLenum target, GLenum pname, GLint *params);

void glTexGend(GLenum coord, GLenum pname, GLdouble param);

void glTexGendv(GLenum coord, GLenum pname, GLdouble *params);

void glTexGenf(GLenum coord, GLenum pname, GLfloat param);

void glTexGenfv(GLenum coord, GLenum pname, GLfloat *params);

void glTexGeni(GLenum coord, GLenum pname, GLint param);

void glTexGeniv(GLenum coord, GLenum pname, GLint *params);

void glTexImage1D(GLenum target, GLint level, GLint internalformat, GLsizei width, GLint border, GLenum format, GLenum type, GLvoid *pixels);

void glTexImage2D(GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, GLvoid *pixels);

void glTexParameterf(GLenum target, GLenum pname, GLfloat param);

void glTexParameterfv(GLenum target, GLenum pname, GLfloat *params);

void glTexParameteri(GLenum target, GLenum pname, GLint param);

void glTexParameteriv(GLenum target, GLenum pname, GLint *params);

void glTexSubImage1D(GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, GLvoid *pixels);

void glTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, GLvoid *pixels);

void glTranslated(GLdouble x, GLdouble y, GLdouble z);

void glTranslatef(GLfloat x, GLfloat y, GLfloat z);

void glVertex2d(GLdouble x, GLdouble y);

void glVertex2dv(GLdouble *v);

void glVertex2f(GLfloat x, GLfloat y);

void glVertex2fv(GLfloat *v);

void glVertex2i(GLint x, GLint y);

void glVertex2iv(GLint *v);

void glVertex2s(GLshort x, GLshort y);

void glVertex2sv(GLshort *v);

void glVertex3d(GLdouble x, GLdouble y, GLdouble z);

void glVertex3dv(GLdouble *v);

void glVertex3f(GLfloat x, GLfloat y, GLfloat z);

void glVertex3fv(GLfloat *v);

void glVertex3i(GLint x, GLint y, GLint z);

void glVertex3iv(GLint *v);

void glVertex3s(GLshort x, GLshort y, GLshort z);

void glVertex3sv(GLshort *v);

void glVertex4d(GLdouble x, GLdouble y, GLdouble z, GLdouble w);

void glVertex4dv(GLdouble *v);

void glVertex4f(GLfloat x, GLfloat y, GLfloat z, GLfloat w);

void glVertex4fv(GLfloat *v);

void glVertex4i(GLint x, GLint y, GLint z, GLint w);

void glVertex4iv(GLint *v);

void glVertex4s(GLshort x, GLshort y, GLshort z, GLshort w);

void glVertex4sv(GLshort *v);

void glVertexPointer(GLint size, GLenum type, GLsizei stride, GLvoid *pointer);

void glViewport(GLint x, GLint y, GLsizei width, GLsizei height);

// file: source/gl/glext.h

#define GL_GLEXT_VERSION 20230705
#define GL_VERSION_1_2 1
#define GL_UNSIGNED_BYTE_3_3_2 0x8032
#define GL_UNSIGNED_SHORT_4_4_4_4 0x8033
#define GL_UNSIGNED_SHORT_5_5_5_1 0x8034
#define GL_UNSIGNED_INT_8_8_8_8 0x8035
#define GL_UNSIGNED_INT_10_10_10_2 0x8036
#define GL_TEXTURE_BINDING_3D 0x806A
#define GL_PACK_SKIP_IMAGES 0x806B
#define GL_PACK_IMAGE_HEIGHT 0x806C
#define GL_UNPACK_SKIP_IMAGES 0x806D
#define GL_UNPACK_IMAGE_HEIGHT 0x806E
#define GL_TEXTURE_3D 0x806F
#define GL_PROXY_TEXTURE_3D 0x8070
#define GL_TEXTURE_DEPTH 0x8071
#define GL_TEXTURE_WRAP_R 0x8072
#define GL_MAX_3D_TEXTURE_SIZE 0x8073
#define GL_UNSIGNED_BYTE_2_3_3_REV 0x8362
#define GL_UNSIGNED_SHORT_5_6_5 0x8363
#define GL_UNSIGNED_SHORT_5_6_5_REV 0x8364
#define GL_UNSIGNED_SHORT_4_4_4_4_REV 0x8365
#define GL_UNSIGNED_SHORT_1_5_5_5_REV 0x8366
#define GL_UNSIGNED_INT_8_8_8_8_REV 0x8367
#define GL_UNSIGNED_INT_2_10_10_10_REV 0x8368
#define GL_BGR 0x80E0
#define GL_BGRA 0x80E1
#define GL_MAX_ELEMENTS_VERTICES 0x80E8
#define GL_MAX_ELEMENTS_INDICES 0x80E9
#define GL_CLAMP_TO_EDGE 0x812F
#define GL_TEXTURE_MIN_LOD 0x813A
#define GL_TEXTURE_MAX_LOD 0x813B
#define GL_TEXTURE_BASE_LEVEL 0x813C
#define GL_TEXTURE_MAX_LEVEL 0x813D
#define GL_SMOOTH_POINT_SIZE_RANGE 0x0B12
#define GL_SMOOTH_POINT_SIZE_GRANULARITY 0x0B13
#define GL_SMOOTH_LINE_WIDTH_RANGE 0x0B22
#define GL_SMOOTH_LINE_WIDTH_GRANULARITY 0x0B23
#define GL_ALIASED_LINE_WIDTH_RANGE 0x846E
#define GL_RESCALE_NORMAL 0x803A
#define GL_LIGHT_MODEL_COLOR_CONTROL 0x81F8
#define GL_SINGLE_COLOR 0x81F9
#define GL_SEPARATE_SPECULAR_COLOR 0x81FA
#define GL_ALIASED_POINT_SIZE_RANGE 0x846D

typedef void (*glDrawRangeElements_function)(GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, void * indices);
glDrawRangeElements_function glDrawRangeElements;

typedef void (*glTexImage3D_function)(GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, void * pixels);
glTexImage3D_function glTexImage3D;

typedef void (*glTexSubImage3D_function)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, void * pixels);
glTexSubImage3D_function glTexSubImage3D;

typedef void (*glCopyTexSubImage3D_function)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height);
glCopyTexSubImage3D_function glCopyTexSubImage3D;
#define GL_VERSION_1_3 1
#define GL_TEXTURE0 0x84C0
#define GL_TEXTURE1 0x84C1
#define GL_TEXTURE2 0x84C2
#define GL_TEXTURE3 0x84C3
#define GL_TEXTURE4 0x84C4
#define GL_TEXTURE5 0x84C5
#define GL_TEXTURE6 0x84C6
#define GL_TEXTURE7 0x84C7
#define GL_TEXTURE8 0x84C8
#define GL_TEXTURE9 0x84C9
#define GL_TEXTURE10 0x84CA
#define GL_TEXTURE11 0x84CB
#define GL_TEXTURE12 0x84CC
#define GL_TEXTURE13 0x84CD
#define GL_TEXTURE14 0x84CE
#define GL_TEXTURE15 0x84CF
#define GL_TEXTURE16 0x84D0
#define GL_TEXTURE17 0x84D1
#define GL_TEXTURE18 0x84D2
#define GL_TEXTURE19 0x84D3
#define GL_TEXTURE20 0x84D4
#define GL_TEXTURE21 0x84D5
#define GL_TEXTURE22 0x84D6
#define GL_TEXTURE23 0x84D7
#define GL_TEXTURE24 0x84D8
#define GL_TEXTURE25 0x84D9
#define GL_TEXTURE26 0x84DA
#define GL_TEXTURE27 0x84DB
#define GL_TEXTURE28 0x84DC
#define GL_TEXTURE29 0x84DD
#define GL_TEXTURE30 0x84DE
#define GL_TEXTURE31 0x84DF
#define GL_ACTIVE_TEXTURE 0x84E0
#define GL_MULTISAMPLE 0x809D
#define GL_SAMPLE_ALPHA_TO_COVERAGE 0x809E
#define GL_SAMPLE_ALPHA_TO_ONE 0x809F
#define GL_SAMPLE_COVERAGE 0x80A0
#define GL_SAMPLE_BUFFERS 0x80A8
#define GL_SAMPLES 0x80A9
#define GL_SAMPLE_COVERAGE_VALUE 0x80AA
#define GL_SAMPLE_COVERAGE_INVERT 0x80AB
#define GL_TEXTURE_CUBE_MAP 0x8513
#define GL_TEXTURE_BINDING_CUBE_MAP 0x8514
#define GL_TEXTURE_CUBE_MAP_POSITIVE_X 0x8515
#define GL_TEXTURE_CUBE_MAP_NEGATIVE_X 0x8516
#define GL_TEXTURE_CUBE_MAP_POSITIVE_Y 0x8517
#define GL_TEXTURE_CUBE_MAP_NEGATIVE_Y 0x8518
#define GL_TEXTURE_CUBE_MAP_POSITIVE_Z 0x8519
#define GL_TEXTURE_CUBE_MAP_NEGATIVE_Z 0x851A
#define GL_PROXY_TEXTURE_CUBE_MAP 0x851B
#define GL_MAX_CUBE_MAP_TEXTURE_SIZE 0x851C
#define GL_COMPRESSED_RGB 0x84ED
#define GL_COMPRESSED_RGBA 0x84EE
#define GL_TEXTURE_COMPRESSION_HINT 0x84EF
#define GL_TEXTURE_COMPRESSED_IMAGE_SIZE 0x86A0
#define GL_TEXTURE_COMPRESSED 0x86A1
#define GL_NUM_COMPRESSED_TEXTURE_FORMATS 0x86A2
#define GL_COMPRESSED_TEXTURE_FORMATS 0x86A3
#define GL_CLAMP_TO_BORDER 0x812D
#define GL_CLIENT_ACTIVE_TEXTURE 0x84E1
#define GL_MAX_TEXTURE_UNITS 0x84E2
#define GL_TRANSPOSE_MODELVIEW_MATRIX 0x84E3
#define GL_TRANSPOSE_PROJECTION_MATRIX 0x84E4
#define GL_TRANSPOSE_TEXTURE_MATRIX 0x84E5
#define GL_TRANSPOSE_COLOR_MATRIX 0x84E6
#define GL_MULTISAMPLE_BIT 0x20000000
#define GL_NORMAL_MAP 0x8511
#define GL_REFLECTION_MAP 0x8512
#define GL_COMPRESSED_ALPHA 0x84E9
#define GL_COMPRESSED_LUMINANCE 0x84EA
#define GL_COMPRESSED_LUMINANCE_ALPHA 0x84EB
#define GL_COMPRESSED_INTENSITY 0x84EC
#define GL_COMBINE 0x8570
#define GL_COMBINE_RGB 0x8571
#define GL_COMBINE_ALPHA 0x8572
#define GL_SOURCE0_RGB 0x8580
#define GL_SOURCE1_RGB 0x8581
#define GL_SOURCE2_RGB 0x8582
#define GL_SOURCE0_ALPHA 0x8588
#define GL_SOURCE1_ALPHA 0x8589
#define GL_SOURCE2_ALPHA 0x858A
#define GL_OPERAND0_RGB 0x8590
#define GL_OPERAND1_RGB 0x8591
#define GL_OPERAND2_RGB 0x8592
#define GL_OPERAND0_ALPHA 0x8598
#define GL_OPERAND1_ALPHA 0x8599
#define GL_OPERAND2_ALPHA 0x859A
#define GL_RGB_SCALE 0x8573
#define GL_ADD_SIGNED 0x8574
#define GL_INTERPOLATE 0x8575
#define GL_SUBTRACT 0x84E7
#define GL_CONSTANT 0x8576
#define GL_PRIMARY_COLOR 0x8577
#define GL_PREVIOUS 0x8578
#define GL_DOT3_RGB 0x86AE
#define GL_DOT3_RGBA 0x86AF

typedef void (*glActiveTexture_function)(GLenum texture);
glActiveTexture_function glActiveTexture;

typedef void (*glSampleCoverage_function)(GLfloat value, GLboolean invert);
glSampleCoverage_function glSampleCoverage;

typedef void (*glCompressedTexImage3D_function)(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, void * data);
glCompressedTexImage3D_function glCompressedTexImage3D;

typedef void (*glCompressedTexImage2D_function)(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, void * data);
glCompressedTexImage2D_function glCompressedTexImage2D;

typedef void (*glCompressedTexImage1D_function)(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, void * data);
glCompressedTexImage1D_function glCompressedTexImage1D;

typedef void (*glCompressedTexSubImage3D_function)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, void * data);
glCompressedTexSubImage3D_function glCompressedTexSubImage3D;

typedef void (*glCompressedTexSubImage2D_function)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, void * data);
glCompressedTexSubImage2D_function glCompressedTexSubImage2D;

typedef void (*glCompressedTexSubImage1D_function)(GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, void * data);
glCompressedTexSubImage1D_function glCompressedTexSubImage1D;

typedef void (*glGetCompressedTexImage_function)(GLenum target, GLint level, void * img);
glGetCompressedTexImage_function glGetCompressedTexImage;

typedef void (*glClientActiveTexture_function)(GLenum texture);
glClientActiveTexture_function glClientActiveTexture;

typedef void (*glMultiTexCoord1d_function)(GLenum target, GLdouble s);
glMultiTexCoord1d_function glMultiTexCoord1d;

typedef void (*glMultiTexCoord1dv_function)(GLenum target, GLdouble *v);
glMultiTexCoord1dv_function glMultiTexCoord1dv;

typedef void (*glMultiTexCoord1f_function)(GLenum target, GLfloat s);
glMultiTexCoord1f_function glMultiTexCoord1f;

typedef void (*glMultiTexCoord1fv_function)(GLenum target, GLfloat *v);
glMultiTexCoord1fv_function glMultiTexCoord1fv;

typedef void (*glMultiTexCoord1i_function)(GLenum target, GLint s);
glMultiTexCoord1i_function glMultiTexCoord1i;

typedef void (*glMultiTexCoord1iv_function)(GLenum target, GLint *v);
glMultiTexCoord1iv_function glMultiTexCoord1iv;

typedef void (*glMultiTexCoord1s_function)(GLenum target, GLshort s);
glMultiTexCoord1s_function glMultiTexCoord1s;

typedef void (*glMultiTexCoord1sv_function)(GLenum target, GLshort *v);
glMultiTexCoord1sv_function glMultiTexCoord1sv;

typedef void (*glMultiTexCoord2d_function)(GLenum target, GLdouble s, GLdouble t);
glMultiTexCoord2d_function glMultiTexCoord2d;

typedef void (*glMultiTexCoord2dv_function)(GLenum target, GLdouble *v);
glMultiTexCoord2dv_function glMultiTexCoord2dv;

typedef void (*glMultiTexCoord2f_function)(GLenum target, GLfloat s, GLfloat t);
glMultiTexCoord2f_function glMultiTexCoord2f;

typedef void (*glMultiTexCoord2fv_function)(GLenum target, GLfloat *v);
glMultiTexCoord2fv_function glMultiTexCoord2fv;

typedef void (*glMultiTexCoord2i_function)(GLenum target, GLint s, GLint t);
glMultiTexCoord2i_function glMultiTexCoord2i;

typedef void (*glMultiTexCoord2iv_function)(GLenum target, GLint *v);
glMultiTexCoord2iv_function glMultiTexCoord2iv;

typedef void (*glMultiTexCoord2s_function)(GLenum target, GLshort s, GLshort t);
glMultiTexCoord2s_function glMultiTexCoord2s;

typedef void (*glMultiTexCoord2sv_function)(GLenum target, GLshort *v);
glMultiTexCoord2sv_function glMultiTexCoord2sv;

typedef void (*glMultiTexCoord3d_function)(GLenum target, GLdouble s, GLdouble t, GLdouble r);
glMultiTexCoord3d_function glMultiTexCoord3d;

typedef void (*glMultiTexCoord3dv_function)(GLenum target, GLdouble *v);
glMultiTexCoord3dv_function glMultiTexCoord3dv;

typedef void (*glMultiTexCoord3f_function)(GLenum target, GLfloat s, GLfloat t, GLfloat r);
glMultiTexCoord3f_function glMultiTexCoord3f;

typedef void (*glMultiTexCoord3fv_function)(GLenum target, GLfloat *v);
glMultiTexCoord3fv_function glMultiTexCoord3fv;

typedef void (*glMultiTexCoord3i_function)(GLenum target, GLint s, GLint t, GLint r);
glMultiTexCoord3i_function glMultiTexCoord3i;

typedef void (*glMultiTexCoord3iv_function)(GLenum target, GLint *v);
glMultiTexCoord3iv_function glMultiTexCoord3iv;

typedef void (*glMultiTexCoord3s_function)(GLenum target, GLshort s, GLshort t, GLshort r);
glMultiTexCoord3s_function glMultiTexCoord3s;

typedef void (*glMultiTexCoord3sv_function)(GLenum target, GLshort *v);
glMultiTexCoord3sv_function glMultiTexCoord3sv;

typedef void (*glMultiTexCoord4d_function)(GLenum target, GLdouble s, GLdouble t, GLdouble r, GLdouble q);
glMultiTexCoord4d_function glMultiTexCoord4d;

typedef void (*glMultiTexCoord4dv_function)(GLenum target, GLdouble *v);
glMultiTexCoord4dv_function glMultiTexCoord4dv;

typedef void (*glMultiTexCoord4f_function)(GLenum target, GLfloat s, GLfloat t, GLfloat r, GLfloat q);
glMultiTexCoord4f_function glMultiTexCoord4f;

typedef void (*glMultiTexCoord4fv_function)(GLenum target, GLfloat *v);
glMultiTexCoord4fv_function glMultiTexCoord4fv;

typedef void (*glMultiTexCoord4i_function)(GLenum target, GLint s, GLint t, GLint r, GLint q);
glMultiTexCoord4i_function glMultiTexCoord4i;

typedef void (*glMultiTexCoord4iv_function)(GLenum target, GLint *v);
glMultiTexCoord4iv_function glMultiTexCoord4iv;

typedef void (*glMultiTexCoord4s_function)(GLenum target, GLshort s, GLshort t, GLshort r, GLshort q);
glMultiTexCoord4s_function glMultiTexCoord4s;

typedef void (*glMultiTexCoord4sv_function)(GLenum target, GLshort *v);
glMultiTexCoord4sv_function glMultiTexCoord4sv;

typedef void (*glLoadTransposeMatrixf_function)(GLfloat *m);
glLoadTransposeMatrixf_function glLoadTransposeMatrixf;

typedef void (*glLoadTransposeMatrixd_function)(GLdouble *m);
glLoadTransposeMatrixd_function glLoadTransposeMatrixd;

typedef void (*glMultTransposeMatrixf_function)(GLfloat *m);
glMultTransposeMatrixf_function glMultTransposeMatrixf;

typedef void (*glMultTransposeMatrixd_function)(GLdouble *m);
glMultTransposeMatrixd_function glMultTransposeMatrixd;
#define GL_VERSION_1_4 1
#define GL_BLEND_DST_RGB 0x80C8
#define GL_BLEND_SRC_RGB 0x80C9
#define GL_BLEND_DST_ALPHA 0x80CA
#define GL_BLEND_SRC_ALPHA 0x80CB
#define GL_POINT_FADE_THRESHOLD_SIZE 0x8128
#define GL_DEPTH_COMPONENT16 0x81A5
#define GL_DEPTH_COMPONENT24 0x81A6
#define GL_DEPTH_COMPONENT32 0x81A7
#define GL_MIRRORED_REPEAT 0x8370
#define GL_MAX_TEXTURE_LOD_BIAS 0x84FD
#define GL_TEXTURE_LOD_BIAS 0x8501
#define GL_INCR_WRAP 0x8507
#define GL_DECR_WRAP 0x8508
#define GL_TEXTURE_DEPTH_SIZE 0x884A
#define GL_TEXTURE_COMPARE_MODE 0x884C
#define GL_TEXTURE_COMPARE_FUNC 0x884D
#define GL_POINT_SIZE_MIN 0x8126
#define GL_POINT_SIZE_MAX 0x8127
#define GL_POINT_DISTANCE_ATTENUATION 0x8129
#define GL_GENERATE_MIPMAP 0x8191
#define GL_GENERATE_MIPMAP_HINT 0x8192
#define GL_FOG_COORDINATE_SOURCE 0x8450
#define GL_FOG_COORDINATE 0x8451
#define GL_FRAGMENT_DEPTH 0x8452
#define GL_CURRENT_FOG_COORDINATE 0x8453
#define GL_FOG_COORDINATE_ARRAY_TYPE 0x8454
#define GL_FOG_COORDINATE_ARRAY_STRIDE 0x8455
#define GL_FOG_COORDINATE_ARRAY_POINTER 0x8456
#define GL_FOG_COORDINATE_ARRAY 0x8457
#define GL_COLOR_SUM 0x8458
#define GL_CURRENT_SECONDARY_COLOR 0x8459
#define GL_SECONDARY_COLOR_ARRAY_SIZE 0x845A
#define GL_SECONDARY_COLOR_ARRAY_TYPE 0x845B
#define GL_SECONDARY_COLOR_ARRAY_STRIDE 0x845C
#define GL_SECONDARY_COLOR_ARRAY_POINTER 0x845D
#define GL_SECONDARY_COLOR_ARRAY 0x845E
#define GL_TEXTURE_FILTER_CONTROL 0x8500
#define GL_DEPTH_TEXTURE_MODE 0x884B
#define GL_COMPARE_R_TO_TEXTURE 0x884E
#define GL_BLEND_COLOR 0x8005
#define GL_BLEND_EQUATION 0x8009
#define GL_CONSTANT_COLOR 0x8001
#define GL_ONE_MINUS_CONSTANT_COLOR 0x8002
#define GL_CONSTANT_ALPHA 0x8003
#define GL_ONE_MINUS_CONSTANT_ALPHA 0x8004
#define GL_FUNC_ADD 0x8006
#define GL_FUNC_REVERSE_SUBTRACT 0x800B
#define GL_FUNC_SUBTRACT 0x800A
#define GL_MIN 0x8007
#define GL_MAX 0x8008

typedef void (*glBlendFuncSeparate_function)(GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha);
glBlendFuncSeparate_function glBlendFuncSeparate;

typedef void (*glMultiDrawArrays_function)(GLenum mode, GLint *first, GLsizei *count, GLsizei drawcount);
glMultiDrawArrays_function glMultiDrawArrays;

typedef void (*glMultiDrawElements_function)(GLenum mode, GLsizei *count, GLenum type, void * *indices, GLsizei drawcount);
glMultiDrawElements_function glMultiDrawElements;

typedef void (*glPointParameterf_function)(GLenum pname, GLfloat param);
glPointParameterf_function glPointParameterf;

typedef void (*glPointParameterfv_function)(GLenum pname, GLfloat *params);
glPointParameterfv_function glPointParameterfv;

typedef void (*glPointParameteri_function)(GLenum pname, GLint param);
glPointParameteri_function glPointParameteri;

typedef void (*glPointParameteriv_function)(GLenum pname, GLint *params);
glPointParameteriv_function glPointParameteriv;

typedef void (*glFogCoordf_function)(GLfloat coord);
glFogCoordf_function glFogCoordf;

typedef void (*glFogCoordfv_function)(GLfloat *coord);
glFogCoordfv_function glFogCoordfv;

typedef void (*glFogCoordd_function)(GLdouble coord);
glFogCoordd_function glFogCoordd;

typedef void (*glFogCoorddv_function)(GLdouble *coord);
glFogCoorddv_function glFogCoorddv;

typedef void (*glFogCoordPointer_function)(GLenum type, GLsizei stride, void * pointer);
glFogCoordPointer_function glFogCoordPointer;

typedef void (*glSecondaryColor3b_function)(GLbyte red, GLbyte green, GLbyte blue);
glSecondaryColor3b_function glSecondaryColor3b;

typedef void (*glSecondaryColor3bv_function)(GLbyte *v);
glSecondaryColor3bv_function glSecondaryColor3bv;

typedef void (*glSecondaryColor3d_function)(GLdouble red, GLdouble green, GLdouble blue);
glSecondaryColor3d_function glSecondaryColor3d;

typedef void (*glSecondaryColor3dv_function)(GLdouble *v);
glSecondaryColor3dv_function glSecondaryColor3dv;

typedef void (*glSecondaryColor3f_function)(GLfloat red, GLfloat green, GLfloat blue);
glSecondaryColor3f_function glSecondaryColor3f;

typedef void (*glSecondaryColor3fv_function)(GLfloat *v);
glSecondaryColor3fv_function glSecondaryColor3fv;

typedef void (*glSecondaryColor3i_function)(GLint red, GLint green, GLint blue);
glSecondaryColor3i_function glSecondaryColor3i;

typedef void (*glSecondaryColor3iv_function)(GLint *v);
glSecondaryColor3iv_function glSecondaryColor3iv;

typedef void (*glSecondaryColor3s_function)(GLshort red, GLshort green, GLshort blue);
glSecondaryColor3s_function glSecondaryColor3s;

typedef void (*glSecondaryColor3sv_function)(GLshort *v);
glSecondaryColor3sv_function glSecondaryColor3sv;

typedef void (*glSecondaryColor3ub_function)(GLubyte red, GLubyte green, GLubyte blue);
glSecondaryColor3ub_function glSecondaryColor3ub;

typedef void (*glSecondaryColor3ubv_function)(GLubyte *v);
glSecondaryColor3ubv_function glSecondaryColor3ubv;

typedef void (*glSecondaryColor3ui_function)(GLuint red, GLuint green, GLuint blue);
glSecondaryColor3ui_function glSecondaryColor3ui;

typedef void (*glSecondaryColor3uiv_function)(GLuint *v);
glSecondaryColor3uiv_function glSecondaryColor3uiv;

typedef void (*glSecondaryColor3us_function)(GLushort red, GLushort green, GLushort blue);
glSecondaryColor3us_function glSecondaryColor3us;

typedef void (*glSecondaryColor3usv_function)(GLushort *v);
glSecondaryColor3usv_function glSecondaryColor3usv;

typedef void (*glSecondaryColorPointer_function)(GLint size, GLenum type, GLsizei stride, void * pointer);
glSecondaryColorPointer_function glSecondaryColorPointer;

typedef void (*glWindowPos2d_function)(GLdouble x, GLdouble y);
glWindowPos2d_function glWindowPos2d;

typedef void (*glWindowPos2dv_function)(GLdouble *v);
glWindowPos2dv_function glWindowPos2dv;

typedef void (*glWindowPos2f_function)(GLfloat x, GLfloat y);
glWindowPos2f_function glWindowPos2f;

typedef void (*glWindowPos2fv_function)(GLfloat *v);
glWindowPos2fv_function glWindowPos2fv;

typedef void (*glWindowPos2i_function)(GLint x, GLint y);
glWindowPos2i_function glWindowPos2i;

typedef void (*glWindowPos2iv_function)(GLint *v);
glWindowPos2iv_function glWindowPos2iv;

typedef void (*glWindowPos2s_function)(GLshort x, GLshort y);
glWindowPos2s_function glWindowPos2s;

typedef void (*glWindowPos2sv_function)(GLshort *v);
glWindowPos2sv_function glWindowPos2sv;

typedef void (*glWindowPos3d_function)(GLdouble x, GLdouble y, GLdouble z);
glWindowPos3d_function glWindowPos3d;

typedef void (*glWindowPos3dv_function)(GLdouble *v);
glWindowPos3dv_function glWindowPos3dv;

typedef void (*glWindowPos3f_function)(GLfloat x, GLfloat y, GLfloat z);
glWindowPos3f_function glWindowPos3f;

typedef void (*glWindowPos3fv_function)(GLfloat *v);
glWindowPos3fv_function glWindowPos3fv;

typedef void (*glWindowPos3i_function)(GLint x, GLint y, GLint z);
glWindowPos3i_function glWindowPos3i;

typedef void (*glWindowPos3iv_function)(GLint *v);
glWindowPos3iv_function glWindowPos3iv;

typedef void (*glWindowPos3s_function)(GLshort x, GLshort y, GLshort z);
glWindowPos3s_function glWindowPos3s;

typedef void (*glWindowPos3sv_function)(GLshort *v);
glWindowPos3sv_function glWindowPos3sv;

typedef void (*glBlendColor_function)(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);
glBlendColor_function glBlendColor;

typedef void (*glBlendEquation_function)(GLenum mode);
glBlendEquation_function glBlendEquation;
#define GL_VERSION_1_5 1
#define GL_BUFFER_SIZE 0x8764
#define GL_BUFFER_USAGE 0x8765
#define GL_QUERY_COUNTER_BITS 0x8864
#define GL_CURRENT_QUERY 0x8865
#define GL_QUERY_RESULT 0x8866
#define GL_QUERY_RESULT_AVAILABLE 0x8867
#define GL_ARRAY_BUFFER 0x8892
#define GL_ELEMENT_ARRAY_BUFFER 0x8893
#define GL_ARRAY_BUFFER_BINDING 0x8894
#define GL_ELEMENT_ARRAY_BUFFER_BINDING 0x8895
#define GL_VERTEX_ATTRIB_ARRAY_BUFFER_BINDING 0x889F
#define GL_READ_ONLY 0x88B8
#define GL_WRITE_ONLY 0x88B9
#define GL_READ_WRITE 0x88BA
#define GL_BUFFER_ACCESS 0x88BB
#define GL_BUFFER_MAPPED 0x88BC
#define GL_BUFFER_MAP_POINTER 0x88BD
#define GL_STREAM_DRAW 0x88E0
#define GL_STREAM_READ 0x88E1
#define GL_STREAM_COPY 0x88E2
#define GL_STATIC_DRAW 0x88E4
#define GL_STATIC_READ 0x88E5
#define GL_STATIC_COPY 0x88E6
#define GL_DYNAMIC_DRAW 0x88E8
#define GL_DYNAMIC_READ 0x88E9
#define GL_DYNAMIC_COPY 0x88EA
#define GL_SAMPLES_PASSED 0x8914
#define GL_SRC1_ALPHA 0x8589
#define GL_VERTEX_ARRAY_BUFFER_BINDING 0x8896
#define GL_NORMAL_ARRAY_BUFFER_BINDING 0x8897
#define GL_COLOR_ARRAY_BUFFER_BINDING 0x8898
#define GL_INDEX_ARRAY_BUFFER_BINDING 0x8899
#define GL_TEXTURE_COORD_ARRAY_BUFFER_BINDING 0x889A
#define GL_EDGE_FLAG_ARRAY_BUFFER_BINDING 0x889B
#define GL_SECONDARY_COLOR_ARRAY_BUFFER_BINDING 0x889C
#define GL_FOG_COORDINATE_ARRAY_BUFFER_BINDING 0x889D
#define GL_WEIGHT_ARRAY_BUFFER_BINDING 0x889E
#define GL_FOG_COORD_SRC 0x8450
#define GL_FOG_COORD 0x8451
#define GL_CURRENT_FOG_COORD 0x8453
#define GL_FOG_COORD_ARRAY_TYPE 0x8454
#define GL_FOG_COORD_ARRAY_STRIDE 0x8455
#define GL_FOG_COORD_ARRAY_POINTER 0x8456
#define GL_FOG_COORD_ARRAY 0x8457
#define GL_FOG_COORD_ARRAY_BUFFER_BINDING 0x889D
#define GL_SRC0_RGB 0x8580
#define GL_SRC1_RGB 0x8581
#define GL_SRC2_RGB 0x8582
#define GL_SRC0_ALPHA 0x8588
#define GL_SRC2_ALPHA 0x858A

typedef void (*glGenQueries_function)(GLsizei n, GLuint *ids);
glGenQueries_function glGenQueries;

typedef void (*glDeleteQueries_function)(GLsizei n, GLuint *ids);
glDeleteQueries_function glDeleteQueries;

typedef GLboolean  (*glIsQuery_function)(GLuint id);
glIsQuery_function glIsQuery;

typedef void (*glBeginQuery_function)(GLenum target, GLuint id);
glBeginQuery_function glBeginQuery;

typedef void (*glEndQuery_function)(GLenum target);
glEndQuery_function glEndQuery;

typedef void (*glGetQueryiv_function)(GLenum target, GLenum pname, GLint *params);
glGetQueryiv_function glGetQueryiv;

typedef void (*glGetQueryObjectiv_function)(GLuint id, GLenum pname, GLint *params);
glGetQueryObjectiv_function glGetQueryObjectiv;

typedef void (*glGetQueryObjectuiv_function)(GLuint id, GLenum pname, GLuint *params);
glGetQueryObjectuiv_function glGetQueryObjectuiv;

typedef void (*glBindBuffer_function)(GLenum target, GLuint buffer);
glBindBuffer_function glBindBuffer;

typedef void (*glDeleteBuffers_function)(GLsizei n, GLuint *buffers);
glDeleteBuffers_function glDeleteBuffers;

typedef void (*glGenBuffers_function)(GLsizei n, GLuint *buffers);
glGenBuffers_function glGenBuffers;

typedef GLboolean  (*glIsBuffer_function)(GLuint buffer);
glIsBuffer_function glIsBuffer;

typedef void (*glBufferData_function)(GLenum target, GLsizeiptr size, void * data, GLenum usage);
glBufferData_function glBufferData;

typedef void (*glBufferSubData_function)(GLenum target, GLintptr offset, GLsizeiptr size, void * data);
glBufferSubData_function glBufferSubData;

typedef void (*glGetBufferSubData_function)(GLenum target, GLintptr offset, GLsizeiptr size, void * data);
glGetBufferSubData_function glGetBufferSubData;

typedef void *  (*glMapBuffer_function)(GLenum target, GLenum access);
glMapBuffer_function glMapBuffer;

typedef GLboolean  (*glUnmapBuffer_function)(GLenum target);
glUnmapBuffer_function glUnmapBuffer;

typedef void (*glGetBufferParameteriv_function)(GLenum target, GLenum pname, GLint *params);
glGetBufferParameteriv_function glGetBufferParameteriv;

typedef void (*glGetBufferPointerv_function)(GLenum target, GLenum pname, void * *params);
glGetBufferPointerv_function glGetBufferPointerv;
#define GL_VERSION_2_0 1
#define GL_BLEND_EQUATION_RGB 0x8009
#define GL_VERTEX_ATTRIB_ARRAY_ENABLED 0x8622
#define GL_VERTEX_ATTRIB_ARRAY_SIZE 0x8623
#define GL_VERTEX_ATTRIB_ARRAY_STRIDE 0x8624
#define GL_VERTEX_ATTRIB_ARRAY_TYPE 0x8625
#define GL_CURRENT_VERTEX_ATTRIB 0x8626
#define GL_VERTEX_PROGRAM_POINT_SIZE 0x8642
#define GL_VERTEX_ATTRIB_ARRAY_POINTER 0x8645
#define GL_STENCIL_BACK_FUNC 0x8800
#define GL_STENCIL_BACK_FAIL 0x8801
#define GL_STENCIL_BACK_PASS_DEPTH_FAIL 0x8802
#define GL_STENCIL_BACK_PASS_DEPTH_PASS 0x8803
#define GL_MAX_DRAW_BUFFERS 0x8824
#define GL_DRAW_BUFFER0 0x8825
#define GL_DRAW_BUFFER1 0x8826
#define GL_DRAW_BUFFER2 0x8827
#define GL_DRAW_BUFFER3 0x8828
#define GL_DRAW_BUFFER4 0x8829
#define GL_DRAW_BUFFER5 0x882A
#define GL_DRAW_BUFFER6 0x882B
#define GL_DRAW_BUFFER7 0x882C
#define GL_DRAW_BUFFER8 0x882D
#define GL_DRAW_BUFFER9 0x882E
#define GL_DRAW_BUFFER10 0x882F
#define GL_DRAW_BUFFER11 0x8830
#define GL_DRAW_BUFFER12 0x8831
#define GL_DRAW_BUFFER13 0x8832
#define GL_DRAW_BUFFER14 0x8833
#define GL_DRAW_BUFFER15 0x8834
#define GL_BLEND_EQUATION_ALPHA 0x883D
#define GL_MAX_VERTEX_ATTRIBS 0x8869
#define GL_VERTEX_ATTRIB_ARRAY_NORMALIZED 0x886A
#define GL_MAX_TEXTURE_IMAGE_UNITS 0x8872
#define GL_FRAGMENT_SHADER 0x8B30
#define GL_VERTEX_SHADER 0x8B31
#define GL_MAX_FRAGMENT_UNIFORM_COMPONENTS 0x8B49
#define GL_MAX_VERTEX_UNIFORM_COMPONENTS 0x8B4A
#define GL_MAX_VARYING_FLOATS 0x8B4B
#define GL_MAX_VERTEX_TEXTURE_IMAGE_UNITS 0x8B4C
#define GL_MAX_COMBINED_TEXTURE_IMAGE_UNITS 0x8B4D
#define GL_SHADER_TYPE 0x8B4F
#define GL_FLOAT_VEC2 0x8B50
#define GL_FLOAT_VEC3 0x8B51
#define GL_FLOAT_VEC4 0x8B52
#define GL_INT_VEC2 0x8B53
#define GL_INT_VEC3 0x8B54
#define GL_INT_VEC4 0x8B55
#define GL_BOOL 0x8B56
#define GL_BOOL_VEC2 0x8B57
#define GL_BOOL_VEC3 0x8B58
#define GL_BOOL_VEC4 0x8B59
#define GL_FLOAT_MAT2 0x8B5A
#define GL_FLOAT_MAT3 0x8B5B
#define GL_FLOAT_MAT4 0x8B5C
#define GL_SAMPLER_1D 0x8B5D
#define GL_SAMPLER_2D 0x8B5E
#define GL_SAMPLER_3D 0x8B5F
#define GL_SAMPLER_CUBE 0x8B60
#define GL_SAMPLER_1D_SHADOW 0x8B61
#define GL_SAMPLER_2D_SHADOW 0x8B62
#define GL_DELETE_STATUS 0x8B80
#define GL_COMPILE_STATUS 0x8B81
#define GL_LINK_STATUS 0x8B82
#define GL_VALIDATE_STATUS 0x8B83
#define GL_INFO_LOG_LENGTH 0x8B84
#define GL_ATTACHED_SHADERS 0x8B85
#define GL_ACTIVE_UNIFORMS 0x8B86
#define GL_ACTIVE_UNIFORM_MAX_LENGTH 0x8B87
#define GL_SHADER_SOURCE_LENGTH 0x8B88
#define GL_ACTIVE_ATTRIBUTES 0x8B89
#define GL_ACTIVE_ATTRIBUTE_MAX_LENGTH 0x8B8A
#define GL_FRAGMENT_SHADER_DERIVATIVE_HINT 0x8B8B
#define GL_SHADING_LANGUAGE_VERSION 0x8B8C
#define GL_CURRENT_PROGRAM 0x8B8D
#define GL_POINT_SPRITE_COORD_ORIGIN 0x8CA0
#define GL_LOWER_LEFT 0x8CA1
#define GL_UPPER_LEFT 0x8CA2
#define GL_STENCIL_BACK_REF 0x8CA3
#define GL_STENCIL_BACK_VALUE_MASK 0x8CA4
#define GL_STENCIL_BACK_WRITEMASK 0x8CA5
#define GL_VERTEX_PROGRAM_TWO_SIDE 0x8643
#define GL_POINT_SPRITE 0x8861
#define GL_COORD_REPLACE 0x8862
#define GL_MAX_TEXTURE_COORDS 0x8871

typedef void (*glBlendEquationSeparate_function)(GLenum modeRGB, GLenum modeAlpha);
glBlendEquationSeparate_function glBlendEquationSeparate;

typedef void (*glDrawBuffers_function)(GLsizei n, GLenum *bufs);
glDrawBuffers_function glDrawBuffers;

typedef void (*glStencilOpSeparate_function)(GLenum face, GLenum sfail, GLenum dpfail, GLenum dppass);
glStencilOpSeparate_function glStencilOpSeparate;

typedef void (*glStencilFuncSeparate_function)(GLenum face, GLenum func, GLint ref, GLuint mask);
glStencilFuncSeparate_function glStencilFuncSeparate;

typedef void (*glStencilMaskSeparate_function)(GLenum face, GLuint mask);
glStencilMaskSeparate_function glStencilMaskSeparate;

typedef void (*glAttachShader_function)(GLuint program, GLuint shader);
glAttachShader_function glAttachShader;

typedef void (*glBindAttribLocation_function)(GLuint program, GLuint index, GLchar *name);
glBindAttribLocation_function glBindAttribLocation;

typedef void (*glCompileShader_function)(GLuint shader);
glCompileShader_function glCompileShader;

typedef GLuint  (*glCreateProgram_function)();
glCreateProgram_function glCreateProgram;

typedef GLuint  (*glCreateShader_function)(GLenum type);
glCreateShader_function glCreateShader;

typedef void (*glDeleteProgram_function)(GLuint program);
glDeleteProgram_function glDeleteProgram;

typedef void (*glDeleteShader_function)(GLuint shader);
glDeleteShader_function glDeleteShader;

typedef void (*glDetachShader_function)(GLuint program, GLuint shader);
glDetachShader_function glDetachShader;

typedef void (*glDisableVertexAttribArray_function)(GLuint index);
glDisableVertexAttribArray_function glDisableVertexAttribArray;

typedef void (*glEnableVertexAttribArray_function)(GLuint index);
glEnableVertexAttribArray_function glEnableVertexAttribArray;

typedef void (*glGetActiveAttrib_function)(GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLint *size, GLenum *type, GLchar *name);
glGetActiveAttrib_function glGetActiveAttrib;

typedef void (*glGetActiveUniform_function)(GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLint *size, GLenum *type, GLchar *name);
glGetActiveUniform_function glGetActiveUniform;

typedef void (*glGetAttachedShaders_function)(GLuint program, GLsizei maxCount, GLsizei *count, GLuint *shaders);
glGetAttachedShaders_function glGetAttachedShaders;

typedef GLint  (*glGetAttribLocation_function)(GLuint program, GLchar *name);
glGetAttribLocation_function glGetAttribLocation;

typedef void (*glGetProgramiv_function)(GLuint program, GLenum pname, GLint *params);
glGetProgramiv_function glGetProgramiv;

typedef void (*glGetProgramInfoLog_function)(GLuint program, GLsizei bufSize, GLsizei *length, GLchar *infoLog);
glGetProgramInfoLog_function glGetProgramInfoLog;

typedef void (*glGetShaderiv_function)(GLuint shader, GLenum pname, GLint *params);
glGetShaderiv_function glGetShaderiv;

typedef void (*glGetShaderInfoLog_function)(GLuint shader, GLsizei bufSize, GLsizei *length, GLchar *infoLog);
glGetShaderInfoLog_function glGetShaderInfoLog;

typedef void (*glGetShaderSource_function)(GLuint shader, GLsizei bufSize, GLsizei *length, GLchar *source);
glGetShaderSource_function glGetShaderSource;

typedef GLint  (*glGetUniformLocation_function)(GLuint program, GLchar *name);
glGetUniformLocation_function glGetUniformLocation;

typedef void (*glGetUniformfv_function)(GLuint program, GLint location, GLfloat *params);
glGetUniformfv_function glGetUniformfv;

typedef void (*glGetUniformiv_function)(GLuint program, GLint location, GLint *params);
glGetUniformiv_function glGetUniformiv;

typedef void (*glGetVertexAttribdv_function)(GLuint index, GLenum pname, GLdouble *params);
glGetVertexAttribdv_function glGetVertexAttribdv;

typedef void (*glGetVertexAttribfv_function)(GLuint index, GLenum pname, GLfloat *params);
glGetVertexAttribfv_function glGetVertexAttribfv;

typedef void (*glGetVertexAttribiv_function)(GLuint index, GLenum pname, GLint *params);
glGetVertexAttribiv_function glGetVertexAttribiv;

typedef void (*glGetVertexAttribPointerv_function)(GLuint index, GLenum pname, void * *pointer);
glGetVertexAttribPointerv_function glGetVertexAttribPointerv;

typedef GLboolean  (*glIsProgram_function)(GLuint program);
glIsProgram_function glIsProgram;

typedef GLboolean  (*glIsShader_function)(GLuint shader);
glIsShader_function glIsShader;

typedef void (*glLinkProgram_function)(GLuint program);
glLinkProgram_function glLinkProgram;

typedef void (*glShaderSource_function)(GLuint shader, GLsizei count, GLchar **string, GLint *length);
glShaderSource_function glShaderSource;

typedef void (*glUseProgram_function)(GLuint program);
glUseProgram_function glUseProgram;

typedef void (*glUniform1f_function)(GLint location, GLfloat v0);
glUniform1f_function glUniform1f;

typedef void (*glUniform2f_function)(GLint location, GLfloat v0, GLfloat v1);
glUniform2f_function glUniform2f;

typedef void (*glUniform3f_function)(GLint location, GLfloat v0, GLfloat v1, GLfloat v2);
glUniform3f_function glUniform3f;

typedef void (*glUniform4f_function)(GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3);
glUniform4f_function glUniform4f;

typedef void (*glUniform1i_function)(GLint location, GLint v0);
glUniform1i_function glUniform1i;

typedef void (*glUniform2i_function)(GLint location, GLint v0, GLint v1);
glUniform2i_function glUniform2i;

typedef void (*glUniform3i_function)(GLint location, GLint v0, GLint v1, GLint v2);
glUniform3i_function glUniform3i;

typedef void (*glUniform4i_function)(GLint location, GLint v0, GLint v1, GLint v2, GLint v3);
glUniform4i_function glUniform4i;

typedef void (*glUniform1fv_function)(GLint location, GLsizei count, GLfloat *value);
glUniform1fv_function glUniform1fv;

typedef void (*glUniform2fv_function)(GLint location, GLsizei count, GLfloat *value);
glUniform2fv_function glUniform2fv;

typedef void (*glUniform3fv_function)(GLint location, GLsizei count, GLfloat *value);
glUniform3fv_function glUniform3fv;

typedef void (*glUniform4fv_function)(GLint location, GLsizei count, GLfloat *value);
glUniform4fv_function glUniform4fv;

typedef void (*glUniform1iv_function)(GLint location, GLsizei count, GLint *value);
glUniform1iv_function glUniform1iv;

typedef void (*glUniform2iv_function)(GLint location, GLsizei count, GLint *value);
glUniform2iv_function glUniform2iv;

typedef void (*glUniform3iv_function)(GLint location, GLsizei count, GLint *value);
glUniform3iv_function glUniform3iv;

typedef void (*glUniform4iv_function)(GLint location, GLsizei count, GLint *value);
glUniform4iv_function glUniform4iv;

typedef void (*glUniformMatrix2fv_function)(GLint location, GLsizei count, GLboolean transpose, GLfloat *value);
glUniformMatrix2fv_function glUniformMatrix2fv;

typedef void (*glUniformMatrix3fv_function)(GLint location, GLsizei count, GLboolean transpose, GLfloat *value);
glUniformMatrix3fv_function glUniformMatrix3fv;

typedef void (*glUniformMatrix4fv_function)(GLint location, GLsizei count, GLboolean transpose, GLfloat *value);
glUniformMatrix4fv_function glUniformMatrix4fv;

typedef void (*glValidateProgram_function)(GLuint program);
glValidateProgram_function glValidateProgram;

typedef void (*glVertexAttrib1d_function)(GLuint index, GLdouble x);
glVertexAttrib1d_function glVertexAttrib1d;

typedef void (*glVertexAttrib1dv_function)(GLuint index, GLdouble *v);
glVertexAttrib1dv_function glVertexAttrib1dv;

typedef void (*glVertexAttrib1f_function)(GLuint index, GLfloat x);
glVertexAttrib1f_function glVertexAttrib1f;

typedef void (*glVertexAttrib1fv_function)(GLuint index, GLfloat *v);
glVertexAttrib1fv_function glVertexAttrib1fv;

typedef void (*glVertexAttrib1s_function)(GLuint index, GLshort x);
glVertexAttrib1s_function glVertexAttrib1s;

typedef void (*glVertexAttrib1sv_function)(GLuint index, GLshort *v);
glVertexAttrib1sv_function glVertexAttrib1sv;

typedef void (*glVertexAttrib2d_function)(GLuint index, GLdouble x, GLdouble y);
glVertexAttrib2d_function glVertexAttrib2d;

typedef void (*glVertexAttrib2dv_function)(GLuint index, GLdouble *v);
glVertexAttrib2dv_function glVertexAttrib2dv;

typedef void (*glVertexAttrib2f_function)(GLuint index, GLfloat x, GLfloat y);
glVertexAttrib2f_function glVertexAttrib2f;

typedef void (*glVertexAttrib2fv_function)(GLuint index, GLfloat *v);
glVertexAttrib2fv_function glVertexAttrib2fv;

typedef void (*glVertexAttrib2s_function)(GLuint index, GLshort x, GLshort y);
glVertexAttrib2s_function glVertexAttrib2s;

typedef void (*glVertexAttrib2sv_function)(GLuint index, GLshort *v);
glVertexAttrib2sv_function glVertexAttrib2sv;

typedef void (*glVertexAttrib3d_function)(GLuint index, GLdouble x, GLdouble y, GLdouble z);
glVertexAttrib3d_function glVertexAttrib3d;

typedef void (*glVertexAttrib3dv_function)(GLuint index, GLdouble *v);
glVertexAttrib3dv_function glVertexAttrib3dv;

typedef void (*glVertexAttrib3f_function)(GLuint index, GLfloat x, GLfloat y, GLfloat z);
glVertexAttrib3f_function glVertexAttrib3f;

typedef void (*glVertexAttrib3fv_function)(GLuint index, GLfloat *v);
glVertexAttrib3fv_function glVertexAttrib3fv;

typedef void (*glVertexAttrib3s_function)(GLuint index, GLshort x, GLshort y, GLshort z);
glVertexAttrib3s_function glVertexAttrib3s;

typedef void (*glVertexAttrib3sv_function)(GLuint index, GLshort *v);
glVertexAttrib3sv_function glVertexAttrib3sv;

typedef void (*glVertexAttrib4Nbv_function)(GLuint index, GLbyte *v);
glVertexAttrib4Nbv_function glVertexAttrib4Nbv;

typedef void (*glVertexAttrib4Niv_function)(GLuint index, GLint *v);
glVertexAttrib4Niv_function glVertexAttrib4Niv;

typedef void (*glVertexAttrib4Nsv_function)(GLuint index, GLshort *v);
glVertexAttrib4Nsv_function glVertexAttrib4Nsv;

typedef void (*glVertexAttrib4Nub_function)(GLuint index, GLubyte x, GLubyte y, GLubyte z, GLubyte w);
glVertexAttrib4Nub_function glVertexAttrib4Nub;

typedef void (*glVertexAttrib4Nubv_function)(GLuint index, GLubyte *v);
glVertexAttrib4Nubv_function glVertexAttrib4Nubv;

typedef void (*glVertexAttrib4Nuiv_function)(GLuint index, GLuint *v);
glVertexAttrib4Nuiv_function glVertexAttrib4Nuiv;

typedef void (*glVertexAttrib4Nusv_function)(GLuint index, GLushort *v);
glVertexAttrib4Nusv_function glVertexAttrib4Nusv;

typedef void (*glVertexAttrib4bv_function)(GLuint index, GLbyte *v);
glVertexAttrib4bv_function glVertexAttrib4bv;

typedef void (*glVertexAttrib4d_function)(GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
glVertexAttrib4d_function glVertexAttrib4d;

typedef void (*glVertexAttrib4dv_function)(GLuint index, GLdouble *v);
glVertexAttrib4dv_function glVertexAttrib4dv;

typedef void (*glVertexAttrib4f_function)(GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
glVertexAttrib4f_function glVertexAttrib4f;

typedef void (*glVertexAttrib4fv_function)(GLuint index, GLfloat *v);
glVertexAttrib4fv_function glVertexAttrib4fv;

typedef void (*glVertexAttrib4iv_function)(GLuint index, GLint *v);
glVertexAttrib4iv_function glVertexAttrib4iv;

typedef void (*glVertexAttrib4s_function)(GLuint index, GLshort x, GLshort y, GLshort z, GLshort w);
glVertexAttrib4s_function glVertexAttrib4s;

typedef void (*glVertexAttrib4sv_function)(GLuint index, GLshort *v);
glVertexAttrib4sv_function glVertexAttrib4sv;

typedef void (*glVertexAttrib4ubv_function)(GLuint index, GLubyte *v);
glVertexAttrib4ubv_function glVertexAttrib4ubv;

typedef void (*glVertexAttrib4uiv_function)(GLuint index, GLuint *v);
glVertexAttrib4uiv_function glVertexAttrib4uiv;

typedef void (*glVertexAttrib4usv_function)(GLuint index, GLushort *v);
glVertexAttrib4usv_function glVertexAttrib4usv;

typedef void (*glVertexAttribPointer_function)(GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, void * pointer);
glVertexAttribPointer_function glVertexAttribPointer;
#define GL_VERSION_2_1 1
#define GL_PIXEL_PACK_BUFFER 0x88EB
#define GL_PIXEL_UNPACK_BUFFER 0x88EC
#define GL_PIXEL_PACK_BUFFER_BINDING 0x88ED
#define GL_PIXEL_UNPACK_BUFFER_BINDING 0x88EF
#define GL_FLOAT_MAT2x3 0x8B65
#define GL_FLOAT_MAT2x4 0x8B66
#define GL_FLOAT_MAT3x2 0x8B67
#define GL_FLOAT_MAT3x4 0x8B68
#define GL_FLOAT_MAT4x2 0x8B69
#define GL_FLOAT_MAT4x3 0x8B6A
#define GL_SRGB 0x8C40
#define GL_SRGB8 0x8C41
#define GL_SRGB_ALPHA 0x8C42
#define GL_SRGB8_ALPHA8 0x8C43
#define GL_COMPRESSED_SRGB 0x8C48
#define GL_COMPRESSED_SRGB_ALPHA 0x8C49
#define GL_CURRENT_RASTER_SECONDARY_COLOR 0x845F
#define GL_SLUMINANCE_ALPHA 0x8C44
#define GL_SLUMINANCE8_ALPHA8 0x8C45
#define GL_SLUMINANCE 0x8C46
#define GL_SLUMINANCE8 0x8C47
#define GL_COMPRESSED_SLUMINANCE 0x8C4A
#define GL_COMPRESSED_SLUMINANCE_ALPHA 0x8C4B

typedef void (*glUniformMatrix2x3fv_function)(GLint location, GLsizei count, GLboolean transpose, GLfloat *value);
glUniformMatrix2x3fv_function glUniformMatrix2x3fv;

typedef void (*glUniformMatrix3x2fv_function)(GLint location, GLsizei count, GLboolean transpose, GLfloat *value);
glUniformMatrix3x2fv_function glUniformMatrix3x2fv;

typedef void (*glUniformMatrix2x4fv_function)(GLint location, GLsizei count, GLboolean transpose, GLfloat *value);
glUniformMatrix2x4fv_function glUniformMatrix2x4fv;

typedef void (*glUniformMatrix4x2fv_function)(GLint location, GLsizei count, GLboolean transpose, GLfloat *value);
glUniformMatrix4x2fv_function glUniformMatrix4x2fv;

typedef void (*glUniformMatrix3x4fv_function)(GLint location, GLsizei count, GLboolean transpose, GLfloat *value);
glUniformMatrix3x4fv_function glUniformMatrix3x4fv;

typedef void (*glUniformMatrix4x3fv_function)(GLint location, GLsizei count, GLboolean transpose, GLfloat *value);
glUniformMatrix4x3fv_function glUniformMatrix4x3fv;
#define GL_VERSION_3_0 1
#define GL_COMPARE_REF_TO_TEXTURE 0x884E
#define GL_CLIP_DISTANCE0 0x3000
#define GL_CLIP_DISTANCE1 0x3001
#define GL_CLIP_DISTANCE2 0x3002
#define GL_CLIP_DISTANCE3 0x3003
#define GL_CLIP_DISTANCE4 0x3004
#define GL_CLIP_DISTANCE5 0x3005
#define GL_CLIP_DISTANCE6 0x3006
#define GL_CLIP_DISTANCE7 0x3007
#define GL_MAX_CLIP_DISTANCES 0x0D32
#define GL_MAJOR_VERSION 0x821B
#define GL_MINOR_VERSION 0x821C
#define GL_NUM_EXTENSIONS 0x821D
#define GL_CONTEXT_FLAGS 0x821E
#define GL_COMPRESSED_RED 0x8225
#define GL_COMPRESSED_RG 0x8226
#define GL_CONTEXT_FLAG_FORWARD_COMPATIBLE_BIT 0x00000001
#define GL_RGBA32F 0x8814
#define GL_RGB32F 0x8815
#define GL_RGBA16F 0x881A
#define GL_RGB16F 0x881B
#define GL_VERTEX_ATTRIB_ARRAY_INTEGER 0x88FD
#define GL_MAX_ARRAY_TEXTURE_LAYERS 0x88FF
#define GL_MIN_PROGRAM_TEXEL_OFFSET 0x8904
#define GL_MAX_PROGRAM_TEXEL_OFFSET 0x8905
#define GL_CLAMP_READ_COLOR 0x891C
#define GL_FIXED_ONLY 0x891D
#define GL_MAX_VARYING_COMPONENTS 0x8B4B
#define GL_TEXTURE_1D_ARRAY 0x8C18
#define GL_PROXY_TEXTURE_1D_ARRAY 0x8C19
#define GL_TEXTURE_2D_ARRAY 0x8C1A
#define GL_PROXY_TEXTURE_2D_ARRAY 0x8C1B
#define GL_TEXTURE_BINDING_1D_ARRAY 0x8C1C
#define GL_TEXTURE_BINDING_2D_ARRAY 0x8C1D
#define GL_R11F_G11F_B10F 0x8C3A
#define GL_UNSIGNED_INT_10F_11F_11F_REV 0x8C3B
#define GL_RGB9_E5 0x8C3D
#define GL_UNSIGNED_INT_5_9_9_9_REV 0x8C3E
#define GL_TEXTURE_SHARED_SIZE 0x8C3F
#define GL_TRANSFORM_FEEDBACK_VARYING_MAX_LENGTH 0x8C76
#define GL_TRANSFORM_FEEDBACK_BUFFER_MODE 0x8C7F
#define GL_MAX_TRANSFORM_FEEDBACK_SEPARATE_COMPONENTS 0x8C80
#define GL_TRANSFORM_FEEDBACK_VARYINGS 0x8C83
#define GL_TRANSFORM_FEEDBACK_BUFFER_START 0x8C84
#define GL_TRANSFORM_FEEDBACK_BUFFER_SIZE 0x8C85
#define GL_PRIMITIVES_GENERATED 0x8C87
#define GL_TRANSFORM_FEEDBACK_PRIMITIVES_WRITTEN 0x8C88
#define GL_RASTERIZER_DISCARD 0x8C89
#define GL_MAX_TRANSFORM_FEEDBACK_INTERLEAVED_COMPONENTS 0x8C8A
#define GL_MAX_TRANSFORM_FEEDBACK_SEPARATE_ATTRIBS 0x8C8B
#define GL_INTERLEAVED_ATTRIBS 0x8C8C
#define GL_SEPARATE_ATTRIBS 0x8C8D
#define GL_TRANSFORM_FEEDBACK_BUFFER 0x8C8E
#define GL_TRANSFORM_FEEDBACK_BUFFER_BINDING 0x8C8F
#define GL_RGBA32UI 0x8D70
#define GL_RGB32UI 0x8D71
#define GL_RGBA16UI 0x8D76
#define GL_RGB16UI 0x8D77
#define GL_RGBA8UI 0x8D7C
#define GL_RGB8UI 0x8D7D
#define GL_RGBA32I 0x8D82
#define GL_RGB32I 0x8D83
#define GL_RGBA16I 0x8D88
#define GL_RGB16I 0x8D89
#define GL_RGBA8I 0x8D8E
#define GL_RGB8I 0x8D8F
#define GL_RED_INTEGER 0x8D94
#define GL_GREEN_INTEGER 0x8D95
#define GL_BLUE_INTEGER 0x8D96
#define GL_RGB_INTEGER 0x8D98
#define GL_RGBA_INTEGER 0x8D99
#define GL_BGR_INTEGER 0x8D9A
#define GL_BGRA_INTEGER 0x8D9B
#define GL_SAMPLER_1D_ARRAY 0x8DC0
#define GL_SAMPLER_2D_ARRAY 0x8DC1
#define GL_SAMPLER_1D_ARRAY_SHADOW 0x8DC3
#define GL_SAMPLER_2D_ARRAY_SHADOW 0x8DC4
#define GL_SAMPLER_CUBE_SHADOW 0x8DC5
#define GL_UNSIGNED_INT_VEC2 0x8DC6
#define GL_UNSIGNED_INT_VEC3 0x8DC7
#define GL_UNSIGNED_INT_VEC4 0x8DC8
#define GL_INT_SAMPLER_1D 0x8DC9
#define GL_INT_SAMPLER_2D 0x8DCA
#define GL_INT_SAMPLER_3D 0x8DCB
#define GL_INT_SAMPLER_CUBE 0x8DCC
#define GL_INT_SAMPLER_1D_ARRAY 0x8DCE
#define GL_INT_SAMPLER_2D_ARRAY 0x8DCF
#define GL_UNSIGNED_INT_SAMPLER_1D 0x8DD1
#define GL_UNSIGNED_INT_SAMPLER_2D 0x8DD2
#define GL_UNSIGNED_INT_SAMPLER_3D 0x8DD3
#define GL_UNSIGNED_INT_SAMPLER_CUBE 0x8DD4
#define GL_UNSIGNED_INT_SAMPLER_1D_ARRAY 0x8DD6
#define GL_UNSIGNED_INT_SAMPLER_2D_ARRAY 0x8DD7
#define GL_QUERY_WAIT 0x8E13
#define GL_QUERY_NO_WAIT 0x8E14
#define GL_QUERY_BY_REGION_WAIT 0x8E15
#define GL_QUERY_BY_REGION_NO_WAIT 0x8E16
#define GL_BUFFER_ACCESS_FLAGS 0x911F
#define GL_BUFFER_MAP_LENGTH 0x9120
#define GL_BUFFER_MAP_OFFSET 0x9121
#define GL_DEPTH_COMPONENT32F 0x8CAC
#define GL_DEPTH32F_STENCIL8 0x8CAD
#define GL_FLOAT_32_UNSIGNED_INT_24_8_REV 0x8DAD
#define GL_INVALID_FRAMEBUFFER_OPERATION 0x0506
#define GL_FRAMEBUFFER_ATTACHMENT_COLOR_ENCODING 0x8210
#define GL_FRAMEBUFFER_ATTACHMENT_COMPONENT_TYPE 0x8211
#define GL_FRAMEBUFFER_ATTACHMENT_RED_SIZE 0x8212
#define GL_FRAMEBUFFER_ATTACHMENT_GREEN_SIZE 0x8213
#define GL_FRAMEBUFFER_ATTACHMENT_BLUE_SIZE 0x8214
#define GL_FRAMEBUFFER_ATTACHMENT_ALPHA_SIZE 0x8215
#define GL_FRAMEBUFFER_ATTACHMENT_DEPTH_SIZE 0x8216
#define GL_FRAMEBUFFER_ATTACHMENT_STENCIL_SIZE 0x8217
#define GL_FRAMEBUFFER_DEFAULT 0x8218
#define GL_FRAMEBUFFER_UNDEFINED 0x8219
#define GL_DEPTH_STENCIL_ATTACHMENT 0x821A
#define GL_MAX_RENDERBUFFER_SIZE 0x84E8
#define GL_DEPTH_STENCIL 0x84F9
#define GL_UNSIGNED_INT_24_8 0x84FA
#define GL_DEPTH24_STENCIL8 0x88F0
#define GL_TEXTURE_STENCIL_SIZE 0x88F1
#define GL_TEXTURE_RED_TYPE 0x8C10
#define GL_TEXTURE_GREEN_TYPE 0x8C11
#define GL_TEXTURE_BLUE_TYPE 0x8C12
#define GL_TEXTURE_ALPHA_TYPE 0x8C13
#define GL_TEXTURE_DEPTH_TYPE 0x8C16
#define GL_UNSIGNED_NORMALIZED 0x8C17
#define GL_FRAMEBUFFER_BINDING 0x8CA6
#define GL_DRAW_FRAMEBUFFER_BINDING 0x8CA6
#define GL_RENDERBUFFER_BINDING 0x8CA7
#define GL_READ_FRAMEBUFFER 0x8CA8
#define GL_DRAW_FRAMEBUFFER 0x8CA9
#define GL_READ_FRAMEBUFFER_BINDING 0x8CAA
#define GL_RENDERBUFFER_SAMPLES 0x8CAB
#define GL_FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE 0x8CD0
#define GL_FRAMEBUFFER_ATTACHMENT_OBJECT_NAME 0x8CD1
#define GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL 0x8CD2
#define GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE 0x8CD3
#define GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LAYER 0x8CD4
#define GL_FRAMEBUFFER_COMPLETE 0x8CD5
#define GL_FRAMEBUFFER_INCOMPLETE_ATTACHMENT 0x8CD6
#define GL_FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT 0x8CD7
#define GL_FRAMEBUFFER_INCOMPLETE_DRAW_BUFFER 0x8CDB
#define GL_FRAMEBUFFER_INCOMPLETE_READ_BUFFER 0x8CDC
#define GL_FRAMEBUFFER_UNSUPPORTED 0x8CDD
#define GL_MAX_COLOR_ATTACHMENTS 0x8CDF
#define GL_COLOR_ATTACHMENT0 0x8CE0
#define GL_COLOR_ATTACHMENT1 0x8CE1
#define GL_COLOR_ATTACHMENT2 0x8CE2
#define GL_COLOR_ATTACHMENT3 0x8CE3
#define GL_COLOR_ATTACHMENT4 0x8CE4
#define GL_COLOR_ATTACHMENT5 0x8CE5
#define GL_COLOR_ATTACHMENT6 0x8CE6
#define GL_COLOR_ATTACHMENT7 0x8CE7
#define GL_COLOR_ATTACHMENT8 0x8CE8
#define GL_COLOR_ATTACHMENT9 0x8CE9
#define GL_COLOR_ATTACHMENT10 0x8CEA
#define GL_COLOR_ATTACHMENT11 0x8CEB
#define GL_COLOR_ATTACHMENT12 0x8CEC
#define GL_COLOR_ATTACHMENT13 0x8CED
#define GL_COLOR_ATTACHMENT14 0x8CEE
#define GL_COLOR_ATTACHMENT15 0x8CEF
#define GL_COLOR_ATTACHMENT16 0x8CF0
#define GL_COLOR_ATTACHMENT17 0x8CF1
#define GL_COLOR_ATTACHMENT18 0x8CF2
#define GL_COLOR_ATTACHMENT19 0x8CF3
#define GL_COLOR_ATTACHMENT20 0x8CF4
#define GL_COLOR_ATTACHMENT21 0x8CF5
#define GL_COLOR_ATTACHMENT22 0x8CF6
#define GL_COLOR_ATTACHMENT23 0x8CF7
#define GL_COLOR_ATTACHMENT24 0x8CF8
#define GL_COLOR_ATTACHMENT25 0x8CF9
#define GL_COLOR_ATTACHMENT26 0x8CFA
#define GL_COLOR_ATTACHMENT27 0x8CFB
#define GL_COLOR_ATTACHMENT28 0x8CFC
#define GL_COLOR_ATTACHMENT29 0x8CFD
#define GL_COLOR_ATTACHMENT30 0x8CFE
#define GL_COLOR_ATTACHMENT31 0x8CFF
#define GL_DEPTH_ATTACHMENT 0x8D00
#define GL_STENCIL_ATTACHMENT 0x8D20
#define GL_FRAMEBUFFER 0x8D40
#define GL_RENDERBUFFER 0x8D41
#define GL_RENDERBUFFER_WIDTH 0x8D42
#define GL_RENDERBUFFER_HEIGHT 0x8D43
#define GL_RENDERBUFFER_INTERNAL_FORMAT 0x8D44
#define GL_STENCIL_INDEX1 0x8D46
#define GL_STENCIL_INDEX4 0x8D47
#define GL_STENCIL_INDEX8 0x8D48
#define GL_STENCIL_INDEX16 0x8D49
#define GL_RENDERBUFFER_RED_SIZE 0x8D50
#define GL_RENDERBUFFER_GREEN_SIZE 0x8D51
#define GL_RENDERBUFFER_BLUE_SIZE 0x8D52
#define GL_RENDERBUFFER_ALPHA_SIZE 0x8D53
#define GL_RENDERBUFFER_DEPTH_SIZE 0x8D54
#define GL_RENDERBUFFER_STENCIL_SIZE 0x8D55
#define GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE 0x8D56
#define GL_MAX_SAMPLES 0x8D57
#define GL_INDEX 0x8222
#define GL_TEXTURE_LUMINANCE_TYPE 0x8C14
#define GL_TEXTURE_INTENSITY_TYPE 0x8C15
#define GL_FRAMEBUFFER_SRGB 0x8DB9
#define GL_HALF_FLOAT 0x140B
#define GL_MAP_READ_BIT 0x0001
#define GL_MAP_WRITE_BIT 0x0002
#define GL_MAP_INVALIDATE_RANGE_BIT 0x0004
#define GL_MAP_INVALIDATE_BUFFER_BIT 0x0008
#define GL_MAP_FLUSH_EXPLICIT_BIT 0x0010
#define GL_MAP_UNSYNCHRONIZED_BIT 0x0020
#define GL_COMPRESSED_RED_RGTC1 0x8DBB
#define GL_COMPRESSED_SIGNED_RED_RGTC1 0x8DBC
#define GL_COMPRESSED_RG_RGTC2 0x8DBD
#define GL_COMPRESSED_SIGNED_RG_RGTC2 0x8DBE
#define GL_RG 0x8227
#define GL_RG_INTEGER 0x8228
#define GL_R8 0x8229
#define GL_R16 0x822A
#define GL_RG8 0x822B
#define GL_RG16 0x822C
#define GL_R16F 0x822D
#define GL_R32F 0x822E
#define GL_RG16F 0x822F
#define GL_RG32F 0x8230
#define GL_R8I 0x8231
#define GL_R8UI 0x8232
#define GL_R16I 0x8233
#define GL_R16UI 0x8234
#define GL_R32I 0x8235
#define GL_R32UI 0x8236
#define GL_RG8I 0x8237
#define GL_RG8UI 0x8238
#define GL_RG16I 0x8239
#define GL_RG16UI 0x823A
#define GL_RG32I 0x823B
#define GL_RG32UI 0x823C
#define GL_VERTEX_ARRAY_BINDING 0x85B5
#define GL_CLAMP_VERTEX_COLOR 0x891A
#define GL_CLAMP_FRAGMENT_COLOR 0x891B
#define GL_ALPHA_INTEGER 0x8D97

typedef void (*glColorMaski_function)(GLuint index, GLboolean r, GLboolean g, GLboolean b, GLboolean a);
glColorMaski_function glColorMaski;

typedef void (*glGetBooleani_v_function)(GLenum target, GLuint index, GLboolean *data);
glGetBooleani_v_function glGetBooleani_v;

typedef void (*glGetIntegeri_v_function)(GLenum target, GLuint index, GLint *data);
glGetIntegeri_v_function glGetIntegeri_v;

typedef void (*glEnablei_function)(GLenum target, GLuint index);
glEnablei_function glEnablei;

typedef void (*glDisablei_function)(GLenum target, GLuint index);
glDisablei_function glDisablei;

typedef GLboolean  (*glIsEnabledi_function)(GLenum target, GLuint index);
glIsEnabledi_function glIsEnabledi;

typedef void (*glBeginTransformFeedback_function)(GLenum primitiveMode);
glBeginTransformFeedback_function glBeginTransformFeedback;

typedef void (*glEndTransformFeedback_function)();
glEndTransformFeedback_function glEndTransformFeedback;

typedef void (*glBindBufferRange_function)(GLenum target, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size);
glBindBufferRange_function glBindBufferRange;

typedef void (*glBindBufferBase_function)(GLenum target, GLuint index, GLuint buffer);
glBindBufferBase_function glBindBufferBase;

typedef void (*glTransformFeedbackVaryings_function)(GLuint program, GLsizei count, GLchar **varyings, GLenum bufferMode);
glTransformFeedbackVaryings_function glTransformFeedbackVaryings;

typedef void (*glGetTransformFeedbackVarying_function)(GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLsizei *size, GLenum *type, GLchar *name);
glGetTransformFeedbackVarying_function glGetTransformFeedbackVarying;

typedef void (*glClampColor_function)(GLenum target, GLenum clamp);
glClampColor_function glClampColor;

typedef void (*glBeginConditionalRender_function)(GLuint id, GLenum mode);
glBeginConditionalRender_function glBeginConditionalRender;

typedef void (*glEndConditionalRender_function)();
glEndConditionalRender_function glEndConditionalRender;

typedef void (*glVertexAttribIPointer_function)(GLuint index, GLint size, GLenum type, GLsizei stride, void * pointer);
glVertexAttribIPointer_function glVertexAttribIPointer;

typedef void (*glGetVertexAttribIiv_function)(GLuint index, GLenum pname, GLint *params);
glGetVertexAttribIiv_function glGetVertexAttribIiv;

typedef void (*glGetVertexAttribIuiv_function)(GLuint index, GLenum pname, GLuint *params);
glGetVertexAttribIuiv_function glGetVertexAttribIuiv;

typedef void (*glVertexAttribI1i_function)(GLuint index, GLint x);
glVertexAttribI1i_function glVertexAttribI1i;

typedef void (*glVertexAttribI2i_function)(GLuint index, GLint x, GLint y);
glVertexAttribI2i_function glVertexAttribI2i;

typedef void (*glVertexAttribI3i_function)(GLuint index, GLint x, GLint y, GLint z);
glVertexAttribI3i_function glVertexAttribI3i;

typedef void (*glVertexAttribI4i_function)(GLuint index, GLint x, GLint y, GLint z, GLint w);
glVertexAttribI4i_function glVertexAttribI4i;

typedef void (*glVertexAttribI1ui_function)(GLuint index, GLuint x);
glVertexAttribI1ui_function glVertexAttribI1ui;

typedef void (*glVertexAttribI2ui_function)(GLuint index, GLuint x, GLuint y);
glVertexAttribI2ui_function glVertexAttribI2ui;

typedef void (*glVertexAttribI3ui_function)(GLuint index, GLuint x, GLuint y, GLuint z);
glVertexAttribI3ui_function glVertexAttribI3ui;

typedef void (*glVertexAttribI4ui_function)(GLuint index, GLuint x, GLuint y, GLuint z, GLuint w);
glVertexAttribI4ui_function glVertexAttribI4ui;

typedef void (*glVertexAttribI1iv_function)(GLuint index, GLint *v);
glVertexAttribI1iv_function glVertexAttribI1iv;

typedef void (*glVertexAttribI2iv_function)(GLuint index, GLint *v);
glVertexAttribI2iv_function glVertexAttribI2iv;

typedef void (*glVertexAttribI3iv_function)(GLuint index, GLint *v);
glVertexAttribI3iv_function glVertexAttribI3iv;

typedef void (*glVertexAttribI4iv_function)(GLuint index, GLint *v);
glVertexAttribI4iv_function glVertexAttribI4iv;

typedef void (*glVertexAttribI1uiv_function)(GLuint index, GLuint *v);
glVertexAttribI1uiv_function glVertexAttribI1uiv;

typedef void (*glVertexAttribI2uiv_function)(GLuint index, GLuint *v);
glVertexAttribI2uiv_function glVertexAttribI2uiv;

typedef void (*glVertexAttribI3uiv_function)(GLuint index, GLuint *v);
glVertexAttribI3uiv_function glVertexAttribI3uiv;

typedef void (*glVertexAttribI4uiv_function)(GLuint index, GLuint *v);
glVertexAttribI4uiv_function glVertexAttribI4uiv;

typedef void (*glVertexAttribI4bv_function)(GLuint index, GLbyte *v);
glVertexAttribI4bv_function glVertexAttribI4bv;

typedef void (*glVertexAttribI4sv_function)(GLuint index, GLshort *v);
glVertexAttribI4sv_function glVertexAttribI4sv;

typedef void (*glVertexAttribI4ubv_function)(GLuint index, GLubyte *v);
glVertexAttribI4ubv_function glVertexAttribI4ubv;

typedef void (*glVertexAttribI4usv_function)(GLuint index, GLushort *v);
glVertexAttribI4usv_function glVertexAttribI4usv;

typedef void (*glGetUniformuiv_function)(GLuint program, GLint location, GLuint *params);
glGetUniformuiv_function glGetUniformuiv;

typedef void (*glBindFragDataLocation_function)(GLuint program, GLuint color, GLchar *name);
glBindFragDataLocation_function glBindFragDataLocation;

typedef GLint  (*glGetFragDataLocation_function)(GLuint program, GLchar *name);
glGetFragDataLocation_function glGetFragDataLocation;

typedef void (*glUniform1ui_function)(GLint location, GLuint v0);
glUniform1ui_function glUniform1ui;

typedef void (*glUniform2ui_function)(GLint location, GLuint v0, GLuint v1);
glUniform2ui_function glUniform2ui;

typedef void (*glUniform3ui_function)(GLint location, GLuint v0, GLuint v1, GLuint v2);
glUniform3ui_function glUniform3ui;

typedef void (*glUniform4ui_function)(GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3);
glUniform4ui_function glUniform4ui;

typedef void (*glUniform1uiv_function)(GLint location, GLsizei count, GLuint *value);
glUniform1uiv_function glUniform1uiv;

typedef void (*glUniform2uiv_function)(GLint location, GLsizei count, GLuint *value);
glUniform2uiv_function glUniform2uiv;

typedef void (*glUniform3uiv_function)(GLint location, GLsizei count, GLuint *value);
glUniform3uiv_function glUniform3uiv;

typedef void (*glUniform4uiv_function)(GLint location, GLsizei count, GLuint *value);
glUniform4uiv_function glUniform4uiv;

typedef void (*glTexParameterIiv_function)(GLenum target, GLenum pname, GLint *params);
glTexParameterIiv_function glTexParameterIiv;

typedef void (*glTexParameterIuiv_function)(GLenum target, GLenum pname, GLuint *params);
glTexParameterIuiv_function glTexParameterIuiv;

typedef void (*glGetTexParameterIiv_function)(GLenum target, GLenum pname, GLint *params);
glGetTexParameterIiv_function glGetTexParameterIiv;

typedef void (*glGetTexParameterIuiv_function)(GLenum target, GLenum pname, GLuint *params);
glGetTexParameterIuiv_function glGetTexParameterIuiv;

typedef void (*glClearBufferiv_function)(GLenum buffer, GLint drawbuffer, GLint *value);
glClearBufferiv_function glClearBufferiv;

typedef void (*glClearBufferuiv_function)(GLenum buffer, GLint drawbuffer, GLuint *value);
glClearBufferuiv_function glClearBufferuiv;

typedef void (*glClearBufferfv_function)(GLenum buffer, GLint drawbuffer, GLfloat *value);
glClearBufferfv_function glClearBufferfv;

typedef void (*glClearBufferfi_function)(GLenum buffer, GLint drawbuffer, GLfloat depth, GLint stencil);
glClearBufferfi_function glClearBufferfi;

typedef GLubyte * (*glGetStringi_function)(GLenum name, GLuint index);
glGetStringi_function glGetStringi;

typedef GLboolean  (*glIsRenderbuffer_function)(GLuint renderbuffer);
glIsRenderbuffer_function glIsRenderbuffer;

typedef void (*glBindRenderbuffer_function)(GLenum target, GLuint renderbuffer);
glBindRenderbuffer_function glBindRenderbuffer;

typedef void (*glDeleteRenderbuffers_function)(GLsizei n, GLuint *renderbuffers);
glDeleteRenderbuffers_function glDeleteRenderbuffers;

typedef void (*glGenRenderbuffers_function)(GLsizei n, GLuint *renderbuffers);
glGenRenderbuffers_function glGenRenderbuffers;

typedef void (*glRenderbufferStorage_function)(GLenum target, GLenum internalformat, GLsizei width, GLsizei height);
glRenderbufferStorage_function glRenderbufferStorage;

typedef void (*glGetRenderbufferParameteriv_function)(GLenum target, GLenum pname, GLint *params);
glGetRenderbufferParameteriv_function glGetRenderbufferParameteriv;

typedef GLboolean  (*glIsFramebuffer_function)(GLuint framebuffer);
glIsFramebuffer_function glIsFramebuffer;

typedef void (*glBindFramebuffer_function)(GLenum target, GLuint framebuffer);
glBindFramebuffer_function glBindFramebuffer;

typedef void (*glDeleteFramebuffers_function)(GLsizei n, GLuint *framebuffers);
glDeleteFramebuffers_function glDeleteFramebuffers;

typedef void (*glGenFramebuffers_function)(GLsizei n, GLuint *framebuffers);
glGenFramebuffers_function glGenFramebuffers;

typedef GLenum  (*glCheckFramebufferStatus_function)(GLenum target);
glCheckFramebufferStatus_function glCheckFramebufferStatus;

typedef void (*glFramebufferTexture1D_function)(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level);
glFramebufferTexture1D_function glFramebufferTexture1D;

typedef void (*glFramebufferTexture2D_function)(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level);
glFramebufferTexture2D_function glFramebufferTexture2D;

typedef void (*glFramebufferTexture3D_function)(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint zoffset);
glFramebufferTexture3D_function glFramebufferTexture3D;

typedef void (*glFramebufferRenderbuffer_function)(GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer);
glFramebufferRenderbuffer_function glFramebufferRenderbuffer;

typedef void (*glGetFramebufferAttachmentParameteriv_function)(GLenum target, GLenum attachment, GLenum pname, GLint *params);
glGetFramebufferAttachmentParameteriv_function glGetFramebufferAttachmentParameteriv;

typedef void (*glGenerateMipmap_function)(GLenum target);
glGenerateMipmap_function glGenerateMipmap;

typedef void (*glBlitFramebuffer_function)(GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter);
glBlitFramebuffer_function glBlitFramebuffer;

typedef void (*glRenderbufferStorageMultisample_function)(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height);
glRenderbufferStorageMultisample_function glRenderbufferStorageMultisample;

typedef void (*glFramebufferTextureLayer_function)(GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer);
glFramebufferTextureLayer_function glFramebufferTextureLayer;

typedef void *  (*glMapBufferRange_function)(GLenum target, GLintptr offset, GLsizeiptr length, GLbitfield access);
glMapBufferRange_function glMapBufferRange;

typedef void (*glFlushMappedBufferRange_function)(GLenum target, GLintptr offset, GLsizeiptr length);
glFlushMappedBufferRange_function glFlushMappedBufferRange;

typedef void (*glBindVertexArray_function)(GLuint array);
glBindVertexArray_function glBindVertexArray;

typedef void (*glDeleteVertexArrays_function)(GLsizei n, GLuint *arrays);
glDeleteVertexArrays_function glDeleteVertexArrays;

typedef void (*glGenVertexArrays_function)(GLsizei n, GLuint *arrays);
glGenVertexArrays_function glGenVertexArrays;

typedef GLboolean  (*glIsVertexArray_function)(GLuint array);
glIsVertexArray_function glIsVertexArray;
#define GL_VERSION_3_1 1
#define GL_SAMPLER_2D_RECT 0x8B63
#define GL_SAMPLER_2D_RECT_SHADOW 0x8B64
#define GL_SAMPLER_BUFFER 0x8DC2
#define GL_INT_SAMPLER_2D_RECT 0x8DCD
#define GL_INT_SAMPLER_BUFFER 0x8DD0
#define GL_UNSIGNED_INT_SAMPLER_2D_RECT 0x8DD5
#define GL_UNSIGNED_INT_SAMPLER_BUFFER 0x8DD8
#define GL_TEXTURE_BUFFER 0x8C2A
#define GL_MAX_TEXTURE_BUFFER_SIZE 0x8C2B
#define GL_TEXTURE_BINDING_BUFFER 0x8C2C
#define GL_TEXTURE_BUFFER_DATA_STORE_BINDING 0x8C2D
#define GL_TEXTURE_RECTANGLE 0x84F5
#define GL_TEXTURE_BINDING_RECTANGLE 0x84F6
#define GL_PROXY_TEXTURE_RECTANGLE 0x84F7
#define GL_MAX_RECTANGLE_TEXTURE_SIZE 0x84F8
#define GL_R8_SNORM 0x8F94
#define GL_RG8_SNORM 0x8F95
#define GL_RGB8_SNORM 0x8F96
#define GL_RGBA8_SNORM 0x8F97
#define GL_R16_SNORM 0x8F98
#define GL_RG16_SNORM 0x8F99
#define GL_RGB16_SNORM 0x8F9A
#define GL_RGBA16_SNORM 0x8F9B
#define GL_SIGNED_NORMALIZED 0x8F9C
#define GL_PRIMITIVE_RESTART 0x8F9D
#define GL_PRIMITIVE_RESTART_INDEX 0x8F9E
#define GL_COPY_READ_BUFFER 0x8F36
#define GL_COPY_WRITE_BUFFER 0x8F37
#define GL_UNIFORM_BUFFER 0x8A11
#define GL_UNIFORM_BUFFER_BINDING 0x8A28
#define GL_UNIFORM_BUFFER_START 0x8A29
#define GL_UNIFORM_BUFFER_SIZE 0x8A2A
#define GL_MAX_VERTEX_UNIFORM_BLOCKS 0x8A2B
#define GL_MAX_GEOMETRY_UNIFORM_BLOCKS 0x8A2C
#define GL_MAX_FRAGMENT_UNIFORM_BLOCKS 0x8A2D
#define GL_MAX_COMBINED_UNIFORM_BLOCKS 0x8A2E
#define GL_MAX_UNIFORM_BUFFER_BINDINGS 0x8A2F
#define GL_MAX_UNIFORM_BLOCK_SIZE 0x8A30
#define GL_MAX_COMBINED_VERTEX_UNIFORM_COMPONENTS 0x8A31
#define GL_MAX_COMBINED_GEOMETRY_UNIFORM_COMPONENTS 0x8A32
#define GL_MAX_COMBINED_FRAGMENT_UNIFORM_COMPONENTS 0x8A33
#define GL_UNIFORM_BUFFER_OFFSET_ALIGNMENT 0x8A34
#define GL_ACTIVE_UNIFORM_BLOCK_MAX_NAME_LENGTH 0x8A35
#define GL_ACTIVE_UNIFORM_BLOCKS 0x8A36
#define GL_UNIFORM_TYPE 0x8A37
#define GL_UNIFORM_SIZE 0x8A38
#define GL_UNIFORM_NAME_LENGTH 0x8A39
#define GL_UNIFORM_BLOCK_INDEX 0x8A3A
#define GL_UNIFORM_OFFSET 0x8A3B
#define GL_UNIFORM_ARRAY_STRIDE 0x8A3C
#define GL_UNIFORM_MATRIX_STRIDE 0x8A3D
#define GL_UNIFORM_IS_ROW_MAJOR 0x8A3E
#define GL_UNIFORM_BLOCK_BINDING 0x8A3F
#define GL_UNIFORM_BLOCK_DATA_SIZE 0x8A40
#define GL_UNIFORM_BLOCK_NAME_LENGTH 0x8A41
#define GL_UNIFORM_BLOCK_ACTIVE_UNIFORMS 0x8A42
#define GL_UNIFORM_BLOCK_ACTIVE_UNIFORM_INDICES 0x8A43
#define GL_UNIFORM_BLOCK_REFERENCED_BY_VERTEX_SHADER 0x8A44
#define GL_UNIFORM_BLOCK_REFERENCED_BY_GEOMETRY_SHADER 0x8A45
#define GL_UNIFORM_BLOCK_REFERENCED_BY_FRAGMENT_SHADER 0x8A46
#define GL_INVALID_INDEX 0xFFFFFFFF

typedef void (*glDrawArraysInstanced_function)(GLenum mode, GLint first, GLsizei count, GLsizei instancecount);
glDrawArraysInstanced_function glDrawArraysInstanced;

typedef void (*glDrawElementsInstanced_function)(GLenum mode, GLsizei count, GLenum type, void * indices, GLsizei instancecount);
glDrawElementsInstanced_function glDrawElementsInstanced;

typedef void (*glTexBuffer_function)(GLenum target, GLenum internalformat, GLuint buffer);
glTexBuffer_function glTexBuffer;

typedef void (*glPrimitiveRestartIndex_function)(GLuint index);
glPrimitiveRestartIndex_function glPrimitiveRestartIndex;

typedef void (*glCopyBufferSubData_function)(GLenum readTarget, GLenum writeTarget, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size);
glCopyBufferSubData_function glCopyBufferSubData;

typedef void (*glGetUniformIndices_function)(GLuint program, GLsizei uniformCount, GLchar **uniformNames, GLuint *uniformIndices);
glGetUniformIndices_function glGetUniformIndices;

typedef void (*glGetActiveUniformsiv_function)(GLuint program, GLsizei uniformCount, GLuint *uniformIndices, GLenum pname, GLint *params);
glGetActiveUniformsiv_function glGetActiveUniformsiv;

typedef void (*glGetActiveUniformName_function)(GLuint program, GLuint uniformIndex, GLsizei bufSize, GLsizei *length, GLchar *uniformName);
glGetActiveUniformName_function glGetActiveUniformName;

typedef GLuint  (*glGetUniformBlockIndex_function)(GLuint program, GLchar *uniformBlockName);
glGetUniformBlockIndex_function glGetUniformBlockIndex;

typedef void (*glGetActiveUniformBlockiv_function)(GLuint program, GLuint uniformBlockIndex, GLenum pname, GLint *params);
glGetActiveUniformBlockiv_function glGetActiveUniformBlockiv;

typedef void (*glGetActiveUniformBlockName_function)(GLuint program, GLuint uniformBlockIndex, GLsizei bufSize, GLsizei *length, GLchar *uniformBlockName);
glGetActiveUniformBlockName_function glGetActiveUniformBlockName;

typedef void (*glUniformBlockBinding_function)(GLuint program, GLuint uniformBlockIndex, GLuint uniformBlockBinding);
glUniformBlockBinding_function glUniformBlockBinding;
#define GL_VERSION_3_2 1
#define GL_CONTEXT_CORE_PROFILE_BIT 0x00000001
#define GL_CONTEXT_COMPATIBILITY_PROFILE_BIT 0x00000002
#define GL_LINES_ADJACENCY 0x000A
#define GL_LINE_STRIP_ADJACENCY 0x000B
#define GL_TRIANGLES_ADJACENCY 0x000C
#define GL_TRIANGLE_STRIP_ADJACENCY 0x000D
#define GL_PROGRAM_POINT_SIZE 0x8642
#define GL_MAX_GEOMETRY_TEXTURE_IMAGE_UNITS 0x8C29
#define GL_FRAMEBUFFER_ATTACHMENT_LAYERED 0x8DA7
#define GL_FRAMEBUFFER_INCOMPLETE_LAYER_TARGETS 0x8DA8
#define GL_GEOMETRY_SHADER 0x8DD9
#define GL_GEOMETRY_VERTICES_OUT 0x8916
#define GL_GEOMETRY_INPUT_TYPE 0x8917
#define GL_GEOMETRY_OUTPUT_TYPE 0x8918
#define GL_MAX_GEOMETRY_UNIFORM_COMPONENTS 0x8DDF
#define GL_MAX_GEOMETRY_OUTPUT_VERTICES 0x8DE0
#define GL_MAX_GEOMETRY_TOTAL_OUTPUT_COMPONENTS 0x8DE1
#define GL_MAX_VERTEX_OUTPUT_COMPONENTS 0x9122
#define GL_MAX_GEOMETRY_INPUT_COMPONENTS 0x9123
#define GL_MAX_GEOMETRY_OUTPUT_COMPONENTS 0x9124
#define GL_MAX_FRAGMENT_INPUT_COMPONENTS 0x9125
#define GL_CONTEXT_PROFILE_MASK 0x9126
#define GL_DEPTH_CLAMP 0x864F
#define GL_QUADS_FOLLOW_PROVOKING_VERTEX_CONVENTION 0x8E4C
#define GL_FIRST_VERTEX_CONVENTION 0x8E4D
#define GL_LAST_VERTEX_CONVENTION 0x8E4E
#define GL_PROVOKING_VERTEX 0x8E4F
#define GL_TEXTURE_CUBE_MAP_SEAMLESS 0x884F
#define GL_MAX_SERVER_WAIT_TIMEOUT 0x9111
#define GL_OBJECT_TYPE 0x9112
#define GL_SYNC_CONDITION 0x9113
#define GL_SYNC_STATUS 0x9114
#define GL_SYNC_FLAGS 0x9115
#define GL_SYNC_FENCE 0x9116
#define GL_SYNC_GPU_COMMANDS_COMPLETE 0x9117
#define GL_UNSIGNALED 0x9118
#define GL_SIGNALED 0x9119
#define GL_ALREADY_SIGNALED 0x911A
#define GL_TIMEOUT_EXPIRED 0x911B
#define GL_CONDITION_SATISFIED 0x911C
#define GL_WAIT_FAILED 0x911D
#define GL_TIMEOUT_IGNORED 0xFFFFFFFFFFFFFFFF
#define GL_SYNC_FLUSH_COMMANDS_BIT 0x00000001
#define GL_SAMPLE_POSITION 0x8E50
#define GL_SAMPLE_MASK 0x8E51
#define GL_SAMPLE_MASK_VALUE 0x8E52
#define GL_MAX_SAMPLE_MASK_WORDS 0x8E59
#define GL_TEXTURE_2D_MULTISAMPLE 0x9100
#define GL_PROXY_TEXTURE_2D_MULTISAMPLE 0x9101
#define GL_TEXTURE_2D_MULTISAMPLE_ARRAY 0x9102
#define GL_PROXY_TEXTURE_2D_MULTISAMPLE_ARRAY 0x9103
#define GL_TEXTURE_BINDING_2D_MULTISAMPLE 0x9104
#define GL_TEXTURE_BINDING_2D_MULTISAMPLE_ARRAY 0x9105
#define GL_TEXTURE_SAMPLES 0x9106
#define GL_TEXTURE_FIXED_SAMPLE_LOCATIONS 0x9107
#define GL_SAMPLER_2D_MULTISAMPLE 0x9108
#define GL_INT_SAMPLER_2D_MULTISAMPLE 0x9109
#define GL_UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE 0x910A
#define GL_SAMPLER_2D_MULTISAMPLE_ARRAY 0x910B
#define GL_INT_SAMPLER_2D_MULTISAMPLE_ARRAY 0x910C
#define GL_UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE_ARRAY 0x910D
#define GL_MAX_COLOR_TEXTURE_SAMPLES 0x910E
#define GL_MAX_DEPTH_TEXTURE_SAMPLES 0x910F
#define GL_MAX_INTEGER_SAMPLES 0x9110

typedef void (*glDrawElementsBaseVertex_function)(GLenum mode, GLsizei count, GLenum type, void * indices, GLint basevertex);
glDrawElementsBaseVertex_function glDrawElementsBaseVertex;

typedef void (*glDrawRangeElementsBaseVertex_function)(GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, void * indices, GLint basevertex);
glDrawRangeElementsBaseVertex_function glDrawRangeElementsBaseVertex;

typedef void (*glDrawElementsInstancedBaseVertex_function)(GLenum mode, GLsizei count, GLenum type, void * indices, GLsizei instancecount, GLint basevertex);
glDrawElementsInstancedBaseVertex_function glDrawElementsInstancedBaseVertex;

typedef void (*glMultiDrawElementsBaseVertex_function)(GLenum mode, GLsizei *count, GLenum type, void * *indices, GLsizei drawcount, GLint *basevertex);
glMultiDrawElementsBaseVertex_function glMultiDrawElementsBaseVertex;

typedef void (*glProvokingVertex_function)(GLenum mode);
glProvokingVertex_function glProvokingVertex;

typedef GLsync  (*glFenceSync_function)(GLenum condition, GLbitfield flags);
glFenceSync_function glFenceSync;

typedef GLboolean  (*glIsSync_function)(GLsync sync);
glIsSync_function glIsSync;

typedef void (*glDeleteSync_function)(GLsync sync);
glDeleteSync_function glDeleteSync;

typedef GLenum  (*glClientWaitSync_function)(GLsync sync, GLbitfield flags, GLuint64 timeout);
glClientWaitSync_function glClientWaitSync;

typedef void (*glWaitSync_function)(GLsync sync, GLbitfield flags, GLuint64 timeout);
glWaitSync_function glWaitSync;

typedef void (*glGetInteger64v_function)(GLenum pname, GLint64 *data);
glGetInteger64v_function glGetInteger64v;

typedef void (*glGetSynciv_function)(GLsync sync, GLenum pname, GLsizei count, GLsizei *length, GLint *values);
glGetSynciv_function glGetSynciv;

typedef void (*glGetInteger64i_v_function)(GLenum target, GLuint index, GLint64 *data);
glGetInteger64i_v_function glGetInteger64i_v;

typedef void (*glGetBufferParameteri64v_function)(GLenum target, GLenum pname, GLint64 *params);
glGetBufferParameteri64v_function glGetBufferParameteri64v;

typedef void (*glFramebufferTexture_function)(GLenum target, GLenum attachment, GLuint texture, GLint level);
glFramebufferTexture_function glFramebufferTexture;

typedef void (*glTexImage2DMultisample_function)(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations);
glTexImage2DMultisample_function glTexImage2DMultisample;

typedef void (*glTexImage3DMultisample_function)(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations);
glTexImage3DMultisample_function glTexImage3DMultisample;

typedef void (*glGetMultisamplefv_function)(GLenum pname, GLuint index, GLfloat *val);
glGetMultisamplefv_function glGetMultisamplefv;

typedef void (*glSampleMaski_function)(GLuint maskNumber, GLbitfield mask);
glSampleMaski_function glSampleMaski;
#define GL_VERSION_3_3 1
#define GL_VERTEX_ATTRIB_ARRAY_DIVISOR 0x88FE
#define GL_SRC1_COLOR 0x88F9
#define GL_ONE_MINUS_SRC1_COLOR 0x88FA
#define GL_ONE_MINUS_SRC1_ALPHA 0x88FB
#define GL_MAX_DUAL_SOURCE_DRAW_BUFFERS 0x88FC
#define GL_ANY_SAMPLES_PASSED 0x8C2F
#define GL_SAMPLER_BINDING 0x8919
#define GL_RGB10_A2UI 0x906F
#define GL_TEXTURE_SWIZZLE_R 0x8E42
#define GL_TEXTURE_SWIZZLE_G 0x8E43
#define GL_TEXTURE_SWIZZLE_B 0x8E44
#define GL_TEXTURE_SWIZZLE_A 0x8E45
#define GL_TEXTURE_SWIZZLE_RGBA 0x8E46
#define GL_TIME_ELAPSED 0x88BF
#define GL_TIMESTAMP 0x8E28
#define GL_INT_2_10_10_10_REV 0x8D9F

typedef void (*glBindFragDataLocationIndexed_function)(GLuint program, GLuint colorNumber, GLuint index, GLchar *name);
glBindFragDataLocationIndexed_function glBindFragDataLocationIndexed;

typedef GLint  (*glGetFragDataIndex_function)(GLuint program, GLchar *name);
glGetFragDataIndex_function glGetFragDataIndex;

typedef void (*glGenSamplers_function)(GLsizei count, GLuint *samplers);
glGenSamplers_function glGenSamplers;

typedef void (*glDeleteSamplers_function)(GLsizei count, GLuint *samplers);
glDeleteSamplers_function glDeleteSamplers;

typedef GLboolean  (*glIsSampler_function)(GLuint sampler);
glIsSampler_function glIsSampler;

typedef void (*glBindSampler_function)(GLuint unit, GLuint sampler);
glBindSampler_function glBindSampler;

typedef void (*glSamplerParameteri_function)(GLuint sampler, GLenum pname, GLint param);
glSamplerParameteri_function glSamplerParameteri;

typedef void (*glSamplerParameteriv_function)(GLuint sampler, GLenum pname, GLint *param);
glSamplerParameteriv_function glSamplerParameteriv;

typedef void (*glSamplerParameterf_function)(GLuint sampler, GLenum pname, GLfloat param);
glSamplerParameterf_function glSamplerParameterf;

typedef void (*glSamplerParameterfv_function)(GLuint sampler, GLenum pname, GLfloat *param);
glSamplerParameterfv_function glSamplerParameterfv;

typedef void (*glSamplerParameterIiv_function)(GLuint sampler, GLenum pname, GLint *param);
glSamplerParameterIiv_function glSamplerParameterIiv;

typedef void (*glSamplerParameterIuiv_function)(GLuint sampler, GLenum pname, GLuint *param);
glSamplerParameterIuiv_function glSamplerParameterIuiv;

typedef void (*glGetSamplerParameteriv_function)(GLuint sampler, GLenum pname, GLint *params);
glGetSamplerParameteriv_function glGetSamplerParameteriv;

typedef void (*glGetSamplerParameterIiv_function)(GLuint sampler, GLenum pname, GLint *params);
glGetSamplerParameterIiv_function glGetSamplerParameterIiv;

typedef void (*glGetSamplerParameterfv_function)(GLuint sampler, GLenum pname, GLfloat *params);
glGetSamplerParameterfv_function glGetSamplerParameterfv;

typedef void (*glGetSamplerParameterIuiv_function)(GLuint sampler, GLenum pname, GLuint *params);
glGetSamplerParameterIuiv_function glGetSamplerParameterIuiv;

typedef void (*glQueryCounter_function)(GLuint id, GLenum target);
glQueryCounter_function glQueryCounter;

typedef void (*glGetQueryObjecti64v_function)(GLuint id, GLenum pname, GLint64 *params);
glGetQueryObjecti64v_function glGetQueryObjecti64v;

typedef void (*glGetQueryObjectui64v_function)(GLuint id, GLenum pname, GLuint64 *params);
glGetQueryObjectui64v_function glGetQueryObjectui64v;

typedef void (*glVertexAttribDivisor_function)(GLuint index, GLuint divisor);
glVertexAttribDivisor_function glVertexAttribDivisor;

typedef void (*glVertexAttribP1ui_function)(GLuint index, GLenum type, GLboolean normalized, GLuint value);
glVertexAttribP1ui_function glVertexAttribP1ui;

typedef void (*glVertexAttribP1uiv_function)(GLuint index, GLenum type, GLboolean normalized, GLuint *value);
glVertexAttribP1uiv_function glVertexAttribP1uiv;

typedef void (*glVertexAttribP2ui_function)(GLuint index, GLenum type, GLboolean normalized, GLuint value);
glVertexAttribP2ui_function glVertexAttribP2ui;

typedef void (*glVertexAttribP2uiv_function)(GLuint index, GLenum type, GLboolean normalized, GLuint *value);
glVertexAttribP2uiv_function glVertexAttribP2uiv;

typedef void (*glVertexAttribP3ui_function)(GLuint index, GLenum type, GLboolean normalized, GLuint value);
glVertexAttribP3ui_function glVertexAttribP3ui;

typedef void (*glVertexAttribP3uiv_function)(GLuint index, GLenum type, GLboolean normalized, GLuint *value);
glVertexAttribP3uiv_function glVertexAttribP3uiv;

typedef void (*glVertexAttribP4ui_function)(GLuint index, GLenum type, GLboolean normalized, GLuint value);
glVertexAttribP4ui_function glVertexAttribP4ui;

typedef void (*glVertexAttribP4uiv_function)(GLuint index, GLenum type, GLboolean normalized, GLuint *value);
glVertexAttribP4uiv_function glVertexAttribP4uiv;

typedef void (*glVertexP2ui_function)(GLenum type, GLuint value);
glVertexP2ui_function glVertexP2ui;

typedef void (*glVertexP2uiv_function)(GLenum type, GLuint *value);
glVertexP2uiv_function glVertexP2uiv;

typedef void (*glVertexP3ui_function)(GLenum type, GLuint value);
glVertexP3ui_function glVertexP3ui;

typedef void (*glVertexP3uiv_function)(GLenum type, GLuint *value);
glVertexP3uiv_function glVertexP3uiv;

typedef void (*glVertexP4ui_function)(GLenum type, GLuint value);
glVertexP4ui_function glVertexP4ui;

typedef void (*glVertexP4uiv_function)(GLenum type, GLuint *value);
glVertexP4uiv_function glVertexP4uiv;

typedef void (*glTexCoordP1ui_function)(GLenum type, GLuint coords);
glTexCoordP1ui_function glTexCoordP1ui;

typedef void (*glTexCoordP1uiv_function)(GLenum type, GLuint *coords);
glTexCoordP1uiv_function glTexCoordP1uiv;

typedef void (*glTexCoordP2ui_function)(GLenum type, GLuint coords);
glTexCoordP2ui_function glTexCoordP2ui;

typedef void (*glTexCoordP2uiv_function)(GLenum type, GLuint *coords);
glTexCoordP2uiv_function glTexCoordP2uiv;

typedef void (*glTexCoordP3ui_function)(GLenum type, GLuint coords);
glTexCoordP3ui_function glTexCoordP3ui;

typedef void (*glTexCoordP3uiv_function)(GLenum type, GLuint *coords);
glTexCoordP3uiv_function glTexCoordP3uiv;

typedef void (*glTexCoordP4ui_function)(GLenum type, GLuint coords);
glTexCoordP4ui_function glTexCoordP4ui;

typedef void (*glTexCoordP4uiv_function)(GLenum type, GLuint *coords);
glTexCoordP4uiv_function glTexCoordP4uiv;

typedef void (*glMultiTexCoordP1ui_function)(GLenum texture, GLenum type, GLuint coords);
glMultiTexCoordP1ui_function glMultiTexCoordP1ui;

typedef void (*glMultiTexCoordP1uiv_function)(GLenum texture, GLenum type, GLuint *coords);
glMultiTexCoordP1uiv_function glMultiTexCoordP1uiv;

typedef void (*glMultiTexCoordP2ui_function)(GLenum texture, GLenum type, GLuint coords);
glMultiTexCoordP2ui_function glMultiTexCoordP2ui;

typedef void (*glMultiTexCoordP2uiv_function)(GLenum texture, GLenum type, GLuint *coords);
glMultiTexCoordP2uiv_function glMultiTexCoordP2uiv;

typedef void (*glMultiTexCoordP3ui_function)(GLenum texture, GLenum type, GLuint coords);
glMultiTexCoordP3ui_function glMultiTexCoordP3ui;

typedef void (*glMultiTexCoordP3uiv_function)(GLenum texture, GLenum type, GLuint *coords);
glMultiTexCoordP3uiv_function glMultiTexCoordP3uiv;

typedef void (*glMultiTexCoordP4ui_function)(GLenum texture, GLenum type, GLuint coords);
glMultiTexCoordP4ui_function glMultiTexCoordP4ui;

typedef void (*glMultiTexCoordP4uiv_function)(GLenum texture, GLenum type, GLuint *coords);
glMultiTexCoordP4uiv_function glMultiTexCoordP4uiv;

typedef void (*glNormalP3ui_function)(GLenum type, GLuint coords);
glNormalP3ui_function glNormalP3ui;

typedef void (*glNormalP3uiv_function)(GLenum type, GLuint *coords);
glNormalP3uiv_function glNormalP3uiv;

typedef void (*glColorP3ui_function)(GLenum type, GLuint color);
glColorP3ui_function glColorP3ui;

typedef void (*glColorP3uiv_function)(GLenum type, GLuint *color);
glColorP3uiv_function glColorP3uiv;

typedef void (*glColorP4ui_function)(GLenum type, GLuint color);
glColorP4ui_function glColorP4ui;

typedef void (*glColorP4uiv_function)(GLenum type, GLuint *color);
glColorP4uiv_function glColorP4uiv;

typedef void (*glSecondaryColorP3ui_function)(GLenum type, GLuint color);
glSecondaryColorP3ui_function glSecondaryColorP3ui;

typedef void (*glSecondaryColorP3uiv_function)(GLenum type, GLuint *color);
glSecondaryColorP3uiv_function glSecondaryColorP3uiv;
#define GL_VERSION_4_0 1
#define GL_SAMPLE_SHADING 0x8C36
#define GL_MIN_SAMPLE_SHADING_VALUE 0x8C37
#define GL_MIN_PROGRAM_TEXTURE_GATHER_OFFSET 0x8E5E
#define GL_MAX_PROGRAM_TEXTURE_GATHER_OFFSET 0x8E5F
#define GL_TEXTURE_CUBE_MAP_ARRAY 0x9009
#define GL_TEXTURE_BINDING_CUBE_MAP_ARRAY 0x900A
#define GL_PROXY_TEXTURE_CUBE_MAP_ARRAY 0x900B
#define GL_SAMPLER_CUBE_MAP_ARRAY 0x900C
#define GL_SAMPLER_CUBE_MAP_ARRAY_SHADOW 0x900D
#define GL_INT_SAMPLER_CUBE_MAP_ARRAY 0x900E
#define GL_UNSIGNED_INT_SAMPLER_CUBE_MAP_ARRAY 0x900F
#define GL_DRAW_INDIRECT_BUFFER 0x8F3F
#define GL_DRAW_INDIRECT_BUFFER_BINDING 0x8F43
#define GL_GEOMETRY_SHADER_INVOCATIONS 0x887F
#define GL_MAX_GEOMETRY_SHADER_INVOCATIONS 0x8E5A
#define GL_MIN_FRAGMENT_INTERPOLATION_OFFSET 0x8E5B
#define GL_MAX_FRAGMENT_INTERPOLATION_OFFSET 0x8E5C
#define GL_FRAGMENT_INTERPOLATION_OFFSET_BITS 0x8E5D
#define GL_MAX_VERTEX_STREAMS 0x8E71
#define GL_DOUBLE_VEC2 0x8FFC
#define GL_DOUBLE_VEC3 0x8FFD
#define GL_DOUBLE_VEC4 0x8FFE
#define GL_DOUBLE_MAT2 0x8F46
#define GL_DOUBLE_MAT3 0x8F47
#define GL_DOUBLE_MAT4 0x8F48
#define GL_DOUBLE_MAT2x3 0x8F49
#define GL_DOUBLE_MAT2x4 0x8F4A
#define GL_DOUBLE_MAT3x2 0x8F4B
#define GL_DOUBLE_MAT3x4 0x8F4C
#define GL_DOUBLE_MAT4x2 0x8F4D
#define GL_DOUBLE_MAT4x3 0x8F4E
#define GL_ACTIVE_SUBROUTINES 0x8DE5
#define GL_ACTIVE_SUBROUTINE_UNIFORMS 0x8DE6
#define GL_ACTIVE_SUBROUTINE_UNIFORM_LOCATIONS 0x8E47
#define GL_ACTIVE_SUBROUTINE_MAX_LENGTH 0x8E48
#define GL_ACTIVE_SUBROUTINE_UNIFORM_MAX_LENGTH 0x8E49
#define GL_MAX_SUBROUTINES 0x8DE7
#define GL_MAX_SUBROUTINE_UNIFORM_LOCATIONS 0x8DE8
#define GL_NUM_COMPATIBLE_SUBROUTINES 0x8E4A
#define GL_COMPATIBLE_SUBROUTINES 0x8E4B
#define GL_PATCHES 0x000E
#define GL_PATCH_VERTICES 0x8E72
#define GL_PATCH_DEFAULT_INNER_LEVEL 0x8E73
#define GL_PATCH_DEFAULT_OUTER_LEVEL 0x8E74
#define GL_TESS_CONTROL_OUTPUT_VERTICES 0x8E75
#define GL_TESS_GEN_MODE 0x8E76
#define GL_TESS_GEN_SPACING 0x8E77
#define GL_TESS_GEN_VERTEX_ORDER 0x8E78
#define GL_TESS_GEN_POINT_MODE 0x8E79
#define GL_ISOLINES 0x8E7A
#define GL_FRACTIONAL_ODD 0x8E7B
#define GL_FRACTIONAL_EVEN 0x8E7C
#define GL_MAX_PATCH_VERTICES 0x8E7D
#define GL_MAX_TESS_GEN_LEVEL 0x8E7E
#define GL_MAX_TESS_CONTROL_UNIFORM_COMPONENTS 0x8E7F
#define GL_MAX_TESS_EVALUATION_UNIFORM_COMPONENTS 0x8E80
#define GL_MAX_TESS_CONTROL_TEXTURE_IMAGE_UNITS 0x8E81
#define GL_MAX_TESS_EVALUATION_TEXTURE_IMAGE_UNITS 0x8E82
#define GL_MAX_TESS_CONTROL_OUTPUT_COMPONENTS 0x8E83
#define GL_MAX_TESS_PATCH_COMPONENTS 0x8E84
#define GL_MAX_TESS_CONTROL_TOTAL_OUTPUT_COMPONENTS 0x8E85
#define GL_MAX_TESS_EVALUATION_OUTPUT_COMPONENTS 0x8E86
#define GL_MAX_TESS_CONTROL_UNIFORM_BLOCKS 0x8E89
#define GL_MAX_TESS_EVALUATION_UNIFORM_BLOCKS 0x8E8A
#define GL_MAX_TESS_CONTROL_INPUT_COMPONENTS 0x886C
#define GL_MAX_TESS_EVALUATION_INPUT_COMPONENTS 0x886D
#define GL_MAX_COMBINED_TESS_CONTROL_UNIFORM_COMPONENTS 0x8E1E
#define GL_MAX_COMBINED_TESS_EVALUATION_UNIFORM_COMPONENTS 0x8E1F
#define GL_UNIFORM_BLOCK_REFERENCED_BY_TESS_CONTROL_SHADER 0x84F0
#define GL_UNIFORM_BLOCK_REFERENCED_BY_TESS_EVALUATION_SHADER 0x84F1
#define GL_TESS_EVALUATION_SHADER 0x8E87
#define GL_TESS_CONTROL_SHADER 0x8E88
#define GL_TRANSFORM_FEEDBACK 0x8E22
#define GL_TRANSFORM_FEEDBACK_BUFFER_PAUSED 0x8E23
#define GL_TRANSFORM_FEEDBACK_BUFFER_ACTIVE 0x8E24
#define GL_TRANSFORM_FEEDBACK_BINDING 0x8E25
#define GL_MAX_TRANSFORM_FEEDBACK_BUFFERS 0x8E70

typedef void (*glMinSampleShading_function)(GLfloat value);
glMinSampleShading_function glMinSampleShading;

typedef void (*glBlendEquationi_function)(GLuint buf, GLenum mode);
glBlendEquationi_function glBlendEquationi;

typedef void (*glBlendEquationSeparatei_function)(GLuint buf, GLenum modeRGB, GLenum modeAlpha);
glBlendEquationSeparatei_function glBlendEquationSeparatei;

typedef void (*glBlendFunci_function)(GLuint buf, GLenum src, GLenum dst);
glBlendFunci_function glBlendFunci;

typedef void (*glBlendFuncSeparatei_function)(GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha);
glBlendFuncSeparatei_function glBlendFuncSeparatei;

typedef void (*glDrawArraysIndirect_function)(GLenum mode, void * indirect);
glDrawArraysIndirect_function glDrawArraysIndirect;

typedef void (*glDrawElementsIndirect_function)(GLenum mode, GLenum type, void * indirect);
glDrawElementsIndirect_function glDrawElementsIndirect;

typedef void (*glUniform1d_function)(GLint location, GLdouble x);
glUniform1d_function glUniform1d;

typedef void (*glUniform2d_function)(GLint location, GLdouble x, GLdouble y);
glUniform2d_function glUniform2d;

typedef void (*glUniform3d_function)(GLint location, GLdouble x, GLdouble y, GLdouble z);
glUniform3d_function glUniform3d;

typedef void (*glUniform4d_function)(GLint location, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
glUniform4d_function glUniform4d;

typedef void (*glUniform1dv_function)(GLint location, GLsizei count, GLdouble *value);
glUniform1dv_function glUniform1dv;

typedef void (*glUniform2dv_function)(GLint location, GLsizei count, GLdouble *value);
glUniform2dv_function glUniform2dv;

typedef void (*glUniform3dv_function)(GLint location, GLsizei count, GLdouble *value);
glUniform3dv_function glUniform3dv;

typedef void (*glUniform4dv_function)(GLint location, GLsizei count, GLdouble *value);
glUniform4dv_function glUniform4dv;

typedef void (*glUniformMatrix2dv_function)(GLint location, GLsizei count, GLboolean transpose, GLdouble *value);
glUniformMatrix2dv_function glUniformMatrix2dv;

typedef void (*glUniformMatrix3dv_function)(GLint location, GLsizei count, GLboolean transpose, GLdouble *value);
glUniformMatrix3dv_function glUniformMatrix3dv;

typedef void (*glUniformMatrix4dv_function)(GLint location, GLsizei count, GLboolean transpose, GLdouble *value);
glUniformMatrix4dv_function glUniformMatrix4dv;

typedef void (*glUniformMatrix2x3dv_function)(GLint location, GLsizei count, GLboolean transpose, GLdouble *value);
glUniformMatrix2x3dv_function glUniformMatrix2x3dv;

typedef void (*glUniformMatrix2x4dv_function)(GLint location, GLsizei count, GLboolean transpose, GLdouble *value);
glUniformMatrix2x4dv_function glUniformMatrix2x4dv;

typedef void (*glUniformMatrix3x2dv_function)(GLint location, GLsizei count, GLboolean transpose, GLdouble *value);
glUniformMatrix3x2dv_function glUniformMatrix3x2dv;

typedef void (*glUniformMatrix3x4dv_function)(GLint location, GLsizei count, GLboolean transpose, GLdouble *value);
glUniformMatrix3x4dv_function glUniformMatrix3x4dv;

typedef void (*glUniformMatrix4x2dv_function)(GLint location, GLsizei count, GLboolean transpose, GLdouble *value);
glUniformMatrix4x2dv_function glUniformMatrix4x2dv;

typedef void (*glUniformMatrix4x3dv_function)(GLint location, GLsizei count, GLboolean transpose, GLdouble *value);
glUniformMatrix4x3dv_function glUniformMatrix4x3dv;

typedef void (*glGetUniformdv_function)(GLuint program, GLint location, GLdouble *params);
glGetUniformdv_function glGetUniformdv;

typedef GLint  (*glGetSubroutineUniformLocation_function)(GLuint program, GLenum shadertype, GLchar *name);
glGetSubroutineUniformLocation_function glGetSubroutineUniformLocation;

typedef GLuint  (*glGetSubroutineIndex_function)(GLuint program, GLenum shadertype, GLchar *name);
glGetSubroutineIndex_function glGetSubroutineIndex;

typedef void (*glGetActiveSubroutineUniformiv_function)(GLuint program, GLenum shadertype, GLuint index, GLenum pname, GLint *values);
glGetActiveSubroutineUniformiv_function glGetActiveSubroutineUniformiv;

typedef void (*glGetActiveSubroutineUniformName_function)(GLuint program, GLenum shadertype, GLuint index, GLsizei bufSize, GLsizei *length, GLchar *name);
glGetActiveSubroutineUniformName_function glGetActiveSubroutineUniformName;

typedef void (*glGetActiveSubroutineName_function)(GLuint program, GLenum shadertype, GLuint index, GLsizei bufSize, GLsizei *length, GLchar *name);
glGetActiveSubroutineName_function glGetActiveSubroutineName;

typedef void (*glUniformSubroutinesuiv_function)(GLenum shadertype, GLsizei count, GLuint *indices);
glUniformSubroutinesuiv_function glUniformSubroutinesuiv;

typedef void (*glGetUniformSubroutineuiv_function)(GLenum shadertype, GLint location, GLuint *params);
glGetUniformSubroutineuiv_function glGetUniformSubroutineuiv;

typedef void (*glGetProgramStageiv_function)(GLuint program, GLenum shadertype, GLenum pname, GLint *values);
glGetProgramStageiv_function glGetProgramStageiv;

typedef void (*glPatchParameteri_function)(GLenum pname, GLint value);
glPatchParameteri_function glPatchParameteri;

typedef void (*glPatchParameterfv_function)(GLenum pname, GLfloat *values);
glPatchParameterfv_function glPatchParameterfv;

typedef void (*glBindTransformFeedback_function)(GLenum target, GLuint id);
glBindTransformFeedback_function glBindTransformFeedback;

typedef void (*glDeleteTransformFeedbacks_function)(GLsizei n, GLuint *ids);
glDeleteTransformFeedbacks_function glDeleteTransformFeedbacks;

typedef void (*glGenTransformFeedbacks_function)(GLsizei n, GLuint *ids);
glGenTransformFeedbacks_function glGenTransformFeedbacks;

typedef GLboolean  (*glIsTransformFeedback_function)(GLuint id);
glIsTransformFeedback_function glIsTransformFeedback;

typedef void (*glPauseTransformFeedback_function)();
glPauseTransformFeedback_function glPauseTransformFeedback;

typedef void (*glResumeTransformFeedback_function)();
glResumeTransformFeedback_function glResumeTransformFeedback;

typedef void (*glDrawTransformFeedback_function)(GLenum mode, GLuint id);
glDrawTransformFeedback_function glDrawTransformFeedback;

typedef void (*glDrawTransformFeedbackStream_function)(GLenum mode, GLuint id, GLuint stream);
glDrawTransformFeedbackStream_function glDrawTransformFeedbackStream;

typedef void (*glBeginQueryIndexed_function)(GLenum target, GLuint index, GLuint id);
glBeginQueryIndexed_function glBeginQueryIndexed;

typedef void (*glEndQueryIndexed_function)(GLenum target, GLuint index);
glEndQueryIndexed_function glEndQueryIndexed;

typedef void (*glGetQueryIndexediv_function)(GLenum target, GLuint index, GLenum pname, GLint *params);
glGetQueryIndexediv_function glGetQueryIndexediv;
#define GL_VERSION_4_1 1
#define GL_FIXED 0x140C
#define GL_IMPLEMENTATION_COLOR_READ_TYPE 0x8B9A
#define GL_IMPLEMENTATION_COLOR_READ_FORMAT 0x8B9B
#define GL_LOW_FLOAT 0x8DF0
#define GL_MEDIUM_FLOAT 0x8DF1
#define GL_HIGH_FLOAT 0x8DF2
#define GL_LOW_INT 0x8DF3
#define GL_MEDIUM_INT 0x8DF4
#define GL_HIGH_INT 0x8DF5
#define GL_SHADER_COMPILER 0x8DFA
#define GL_SHADER_BINARY_FORMATS 0x8DF8
#define GL_NUM_SHADER_BINARY_FORMATS 0x8DF9
#define GL_MAX_VERTEX_UNIFORM_VECTORS 0x8DFB
#define GL_MAX_VARYING_VECTORS 0x8DFC
#define GL_MAX_FRAGMENT_UNIFORM_VECTORS 0x8DFD
#define GL_RGB565 0x8D62
#define GL_PROGRAM_BINARY_RETRIEVABLE_HINT 0x8257
#define GL_PROGRAM_BINARY_LENGTH 0x8741
#define GL_NUM_PROGRAM_BINARY_FORMATS 0x87FE
#define GL_PROGRAM_BINARY_FORMATS 0x87FF
#define GL_VERTEX_SHADER_BIT 0x00000001
#define GL_FRAGMENT_SHADER_BIT 0x00000002
#define GL_GEOMETRY_SHADER_BIT 0x00000004
#define GL_TESS_CONTROL_SHADER_BIT 0x00000008
#define GL_TESS_EVALUATION_SHADER_BIT 0x00000010
#define GL_ALL_SHADER_BITS 0xFFFFFFFF
#define GL_PROGRAM_SEPARABLE 0x8258
#define GL_ACTIVE_PROGRAM 0x8259
#define GL_PROGRAM_PIPELINE_BINDING 0x825A
#define GL_MAX_VIEWPORTS 0x825B
#define GL_VIEWPORT_SUBPIXEL_BITS 0x825C
#define GL_VIEWPORT_BOUNDS_RANGE 0x825D
#define GL_LAYER_PROVOKING_VERTEX 0x825E
#define GL_VIEWPORT_INDEX_PROVOKING_VERTEX 0x825F
#define GL_UNDEFINED_VERTEX 0x8260

typedef void (*glReleaseShaderCompiler_function)();
glReleaseShaderCompiler_function glReleaseShaderCompiler;

typedef void (*glShaderBinary_function)(GLsizei count, GLuint *shaders, GLenum binaryFormat, void * binary, GLsizei length);
glShaderBinary_function glShaderBinary;

typedef void (*glGetShaderPrecisionFormat_function)(GLenum shadertype, GLenum precisiontype, GLint *range, GLint *precision);
glGetShaderPrecisionFormat_function glGetShaderPrecisionFormat;

typedef void (*glDepthRangef_function)(GLfloat n, GLfloat f);
glDepthRangef_function glDepthRangef;

typedef void (*glClearDepthf_function)(GLfloat d);
glClearDepthf_function glClearDepthf;

typedef void (*glGetProgramBinary_function)(GLuint program, GLsizei bufSize, GLsizei *length, GLenum *binaryFormat, void * binary);
glGetProgramBinary_function glGetProgramBinary;

typedef void (*glProgramBinary_function)(GLuint program, GLenum binaryFormat, void * binary, GLsizei length);
glProgramBinary_function glProgramBinary;

typedef void (*glProgramParameteri_function)(GLuint program, GLenum pname, GLint value);
glProgramParameteri_function glProgramParameteri;

typedef void (*glUseProgramStages_function)(GLuint pipeline, GLbitfield stages, GLuint program);
glUseProgramStages_function glUseProgramStages;

typedef void (*glActiveShaderProgram_function)(GLuint pipeline, GLuint program);
glActiveShaderProgram_function glActiveShaderProgram;

typedef GLuint  (*glCreateShaderProgramv_function)(GLenum type, GLsizei count, GLchar **strings);
glCreateShaderProgramv_function glCreateShaderProgramv;

typedef void (*glBindProgramPipeline_function)(GLuint pipeline);
glBindProgramPipeline_function glBindProgramPipeline;

typedef void (*glDeleteProgramPipelines_function)(GLsizei n, GLuint *pipelines);
glDeleteProgramPipelines_function glDeleteProgramPipelines;

typedef void (*glGenProgramPipelines_function)(GLsizei n, GLuint *pipelines);
glGenProgramPipelines_function glGenProgramPipelines;

typedef GLboolean  (*glIsProgramPipeline_function)(GLuint pipeline);
glIsProgramPipeline_function glIsProgramPipeline;

typedef void (*glGetProgramPipelineiv_function)(GLuint pipeline, GLenum pname, GLint *params);
glGetProgramPipelineiv_function glGetProgramPipelineiv;

typedef void (*glProgramUniform1i_function)(GLuint program, GLint location, GLint v0);
glProgramUniform1i_function glProgramUniform1i;

typedef void (*glProgramUniform1iv_function)(GLuint program, GLint location, GLsizei count, GLint *value);
glProgramUniform1iv_function glProgramUniform1iv;

typedef void (*glProgramUniform1f_function)(GLuint program, GLint location, GLfloat v0);
glProgramUniform1f_function glProgramUniform1f;

typedef void (*glProgramUniform1fv_function)(GLuint program, GLint location, GLsizei count, GLfloat *value);
glProgramUniform1fv_function glProgramUniform1fv;

typedef void (*glProgramUniform1d_function)(GLuint program, GLint location, GLdouble v0);
glProgramUniform1d_function glProgramUniform1d;

typedef void (*glProgramUniform1dv_function)(GLuint program, GLint location, GLsizei count, GLdouble *value);
glProgramUniform1dv_function glProgramUniform1dv;

typedef void (*glProgramUniform1ui_function)(GLuint program, GLint location, GLuint v0);
glProgramUniform1ui_function glProgramUniform1ui;

typedef void (*glProgramUniform1uiv_function)(GLuint program, GLint location, GLsizei count, GLuint *value);
glProgramUniform1uiv_function glProgramUniform1uiv;

typedef void (*glProgramUniform2i_function)(GLuint program, GLint location, GLint v0, GLint v1);
glProgramUniform2i_function glProgramUniform2i;

typedef void (*glProgramUniform2iv_function)(GLuint program, GLint location, GLsizei count, GLint *value);
glProgramUniform2iv_function glProgramUniform2iv;

typedef void (*glProgramUniform2f_function)(GLuint program, GLint location, GLfloat v0, GLfloat v1);
glProgramUniform2f_function glProgramUniform2f;

typedef void (*glProgramUniform2fv_function)(GLuint program, GLint location, GLsizei count, GLfloat *value);
glProgramUniform2fv_function glProgramUniform2fv;

typedef void (*glProgramUniform2d_function)(GLuint program, GLint location, GLdouble v0, GLdouble v1);
glProgramUniform2d_function glProgramUniform2d;

typedef void (*glProgramUniform2dv_function)(GLuint program, GLint location, GLsizei count, GLdouble *value);
glProgramUniform2dv_function glProgramUniform2dv;

typedef void (*glProgramUniform2ui_function)(GLuint program, GLint location, GLuint v0, GLuint v1);
glProgramUniform2ui_function glProgramUniform2ui;

typedef void (*glProgramUniform2uiv_function)(GLuint program, GLint location, GLsizei count, GLuint *value);
glProgramUniform2uiv_function glProgramUniform2uiv;

typedef void (*glProgramUniform3i_function)(GLuint program, GLint location, GLint v0, GLint v1, GLint v2);
glProgramUniform3i_function glProgramUniform3i;

typedef void (*glProgramUniform3iv_function)(GLuint program, GLint location, GLsizei count, GLint *value);
glProgramUniform3iv_function glProgramUniform3iv;

typedef void (*glProgramUniform3f_function)(GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2);
glProgramUniform3f_function glProgramUniform3f;

typedef void (*glProgramUniform3fv_function)(GLuint program, GLint location, GLsizei count, GLfloat *value);
glProgramUniform3fv_function glProgramUniform3fv;

typedef void (*glProgramUniform3d_function)(GLuint program, GLint location, GLdouble v0, GLdouble v1, GLdouble v2);
glProgramUniform3d_function glProgramUniform3d;

typedef void (*glProgramUniform3dv_function)(GLuint program, GLint location, GLsizei count, GLdouble *value);
glProgramUniform3dv_function glProgramUniform3dv;

typedef void (*glProgramUniform3ui_function)(GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2);
glProgramUniform3ui_function glProgramUniform3ui;

typedef void (*glProgramUniform3uiv_function)(GLuint program, GLint location, GLsizei count, GLuint *value);
glProgramUniform3uiv_function glProgramUniform3uiv;

typedef void (*glProgramUniform4i_function)(GLuint program, GLint location, GLint v0, GLint v1, GLint v2, GLint v3);
glProgramUniform4i_function glProgramUniform4i;

typedef void (*glProgramUniform4iv_function)(GLuint program, GLint location, GLsizei count, GLint *value);
glProgramUniform4iv_function glProgramUniform4iv;

typedef void (*glProgramUniform4f_function)(GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3);
glProgramUniform4f_function glProgramUniform4f;

typedef void (*glProgramUniform4fv_function)(GLuint program, GLint location, GLsizei count, GLfloat *value);
glProgramUniform4fv_function glProgramUniform4fv;

typedef void (*glProgramUniform4d_function)(GLuint program, GLint location, GLdouble v0, GLdouble v1, GLdouble v2, GLdouble v3);
glProgramUniform4d_function glProgramUniform4d;

typedef void (*glProgramUniform4dv_function)(GLuint program, GLint location, GLsizei count, GLdouble *value);
glProgramUniform4dv_function glProgramUniform4dv;

typedef void (*glProgramUniform4ui_function)(GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3);
glProgramUniform4ui_function glProgramUniform4ui;

typedef void (*glProgramUniform4uiv_function)(GLuint program, GLint location, GLsizei count, GLuint *value);
glProgramUniform4uiv_function glProgramUniform4uiv;

typedef void (*glProgramUniformMatrix2fv_function)(GLuint program, GLint location, GLsizei count, GLboolean transpose, GLfloat *value);
glProgramUniformMatrix2fv_function glProgramUniformMatrix2fv;

typedef void (*glProgramUniformMatrix3fv_function)(GLuint program, GLint location, GLsizei count, GLboolean transpose, GLfloat *value);
glProgramUniformMatrix3fv_function glProgramUniformMatrix3fv;

typedef void (*glProgramUniformMatrix4fv_function)(GLuint program, GLint location, GLsizei count, GLboolean transpose, GLfloat *value);
glProgramUniformMatrix4fv_function glProgramUniformMatrix4fv;

typedef void (*glProgramUniformMatrix2dv_function)(GLuint program, GLint location, GLsizei count, GLboolean transpose, GLdouble *value);
glProgramUniformMatrix2dv_function glProgramUniformMatrix2dv;

typedef void (*glProgramUniformMatrix3dv_function)(GLuint program, GLint location, GLsizei count, GLboolean transpose, GLdouble *value);
glProgramUniformMatrix3dv_function glProgramUniformMatrix3dv;

typedef void (*glProgramUniformMatrix4dv_function)(GLuint program, GLint location, GLsizei count, GLboolean transpose, GLdouble *value);
glProgramUniformMatrix4dv_function glProgramUniformMatrix4dv;

typedef void (*glProgramUniformMatrix2x3fv_function)(GLuint program, GLint location, GLsizei count, GLboolean transpose, GLfloat *value);
glProgramUniformMatrix2x3fv_function glProgramUniformMatrix2x3fv;

typedef void (*glProgramUniformMatrix3x2fv_function)(GLuint program, GLint location, GLsizei count, GLboolean transpose, GLfloat *value);
glProgramUniformMatrix3x2fv_function glProgramUniformMatrix3x2fv;

typedef void (*glProgramUniformMatrix2x4fv_function)(GLuint program, GLint location, GLsizei count, GLboolean transpose, GLfloat *value);
glProgramUniformMatrix2x4fv_function glProgramUniformMatrix2x4fv;

typedef void (*glProgramUniformMatrix4x2fv_function)(GLuint program, GLint location, GLsizei count, GLboolean transpose, GLfloat *value);
glProgramUniformMatrix4x2fv_function glProgramUniformMatrix4x2fv;

typedef void (*glProgramUniformMatrix3x4fv_function)(GLuint program, GLint location, GLsizei count, GLboolean transpose, GLfloat *value);
glProgramUniformMatrix3x4fv_function glProgramUniformMatrix3x4fv;

typedef void (*glProgramUniformMatrix4x3fv_function)(GLuint program, GLint location, GLsizei count, GLboolean transpose, GLfloat *value);
glProgramUniformMatrix4x3fv_function glProgramUniformMatrix4x3fv;

typedef void (*glProgramUniformMatrix2x3dv_function)(GLuint program, GLint location, GLsizei count, GLboolean transpose, GLdouble *value);
glProgramUniformMatrix2x3dv_function glProgramUniformMatrix2x3dv;

typedef void (*glProgramUniformMatrix3x2dv_function)(GLuint program, GLint location, GLsizei count, GLboolean transpose, GLdouble *value);
glProgramUniformMatrix3x2dv_function glProgramUniformMatrix3x2dv;

typedef void (*glProgramUniformMatrix2x4dv_function)(GLuint program, GLint location, GLsizei count, GLboolean transpose, GLdouble *value);
glProgramUniformMatrix2x4dv_function glProgramUniformMatrix2x4dv;

typedef void (*glProgramUniformMatrix4x2dv_function)(GLuint program, GLint location, GLsizei count, GLboolean transpose, GLdouble *value);
glProgramUniformMatrix4x2dv_function glProgramUniformMatrix4x2dv;

typedef void (*glProgramUniformMatrix3x4dv_function)(GLuint program, GLint location, GLsizei count, GLboolean transpose, GLdouble *value);
glProgramUniformMatrix3x4dv_function glProgramUniformMatrix3x4dv;

typedef void (*glProgramUniformMatrix4x3dv_function)(GLuint program, GLint location, GLsizei count, GLboolean transpose, GLdouble *value);
glProgramUniformMatrix4x3dv_function glProgramUniformMatrix4x3dv;

typedef void (*glValidateProgramPipeline_function)(GLuint pipeline);
glValidateProgramPipeline_function glValidateProgramPipeline;

typedef void (*glGetProgramPipelineInfoLog_function)(GLuint pipeline, GLsizei bufSize, GLsizei *length, GLchar *infoLog);
glGetProgramPipelineInfoLog_function glGetProgramPipelineInfoLog;

typedef void (*glVertexAttribL1d_function)(GLuint index, GLdouble x);
glVertexAttribL1d_function glVertexAttribL1d;

typedef void (*glVertexAttribL2d_function)(GLuint index, GLdouble x, GLdouble y);
glVertexAttribL2d_function glVertexAttribL2d;

typedef void (*glVertexAttribL3d_function)(GLuint index, GLdouble x, GLdouble y, GLdouble z);
glVertexAttribL3d_function glVertexAttribL3d;

typedef void (*glVertexAttribL4d_function)(GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
glVertexAttribL4d_function glVertexAttribL4d;

typedef void (*glVertexAttribL1dv_function)(GLuint index, GLdouble *v);
glVertexAttribL1dv_function glVertexAttribL1dv;

typedef void (*glVertexAttribL2dv_function)(GLuint index, GLdouble *v);
glVertexAttribL2dv_function glVertexAttribL2dv;

typedef void (*glVertexAttribL3dv_function)(GLuint index, GLdouble *v);
glVertexAttribL3dv_function glVertexAttribL3dv;

typedef void (*glVertexAttribL4dv_function)(GLuint index, GLdouble *v);
glVertexAttribL4dv_function glVertexAttribL4dv;

typedef void (*glVertexAttribLPointer_function)(GLuint index, GLint size, GLenum type, GLsizei stride, void * pointer);
glVertexAttribLPointer_function glVertexAttribLPointer;

typedef void (*glGetVertexAttribLdv_function)(GLuint index, GLenum pname, GLdouble *params);
glGetVertexAttribLdv_function glGetVertexAttribLdv;

typedef void (*glViewportArrayv_function)(GLuint first, GLsizei count, GLfloat *v);
glViewportArrayv_function glViewportArrayv;

typedef void (*glViewportIndexedf_function)(GLuint index, GLfloat x, GLfloat y, GLfloat w, GLfloat h);
glViewportIndexedf_function glViewportIndexedf;

typedef void (*glViewportIndexedfv_function)(GLuint index, GLfloat *v);
glViewportIndexedfv_function glViewportIndexedfv;

typedef void (*glScissorArrayv_function)(GLuint first, GLsizei count, GLint *v);
glScissorArrayv_function glScissorArrayv;

typedef void (*glScissorIndexed_function)(GLuint index, GLint left, GLint bottom, GLsizei width, GLsizei height);
glScissorIndexed_function glScissorIndexed;

typedef void (*glScissorIndexedv_function)(GLuint index, GLint *v);
glScissorIndexedv_function glScissorIndexedv;

typedef void (*glDepthRangeArrayv_function)(GLuint first, GLsizei count, GLdouble *v);
glDepthRangeArrayv_function glDepthRangeArrayv;

typedef void (*glDepthRangeIndexed_function)(GLuint index, GLdouble n, GLdouble f);
glDepthRangeIndexed_function glDepthRangeIndexed;

typedef void (*glGetFloati_v_function)(GLenum target, GLuint index, GLfloat *data);
glGetFloati_v_function glGetFloati_v;

typedef void (*glGetDoublei_v_function)(GLenum target, GLuint index, GLdouble *data);
glGetDoublei_v_function glGetDoublei_v;
#define GL_VERSION_4_2 1
#define GL_COPY_READ_BUFFER_BINDING 0x8F36
#define GL_COPY_WRITE_BUFFER_BINDING 0x8F37
#define GL_TRANSFORM_FEEDBACK_ACTIVE 0x8E24
#define GL_TRANSFORM_FEEDBACK_PAUSED 0x8E23
#define GL_UNPACK_COMPRESSED_BLOCK_WIDTH 0x9127
#define GL_UNPACK_COMPRESSED_BLOCK_HEIGHT 0x9128
#define GL_UNPACK_COMPRESSED_BLOCK_DEPTH 0x9129
#define GL_UNPACK_COMPRESSED_BLOCK_SIZE 0x912A
#define GL_PACK_COMPRESSED_BLOCK_WIDTH 0x912B
#define GL_PACK_COMPRESSED_BLOCK_HEIGHT 0x912C
#define GL_PACK_COMPRESSED_BLOCK_DEPTH 0x912D
#define GL_PACK_COMPRESSED_BLOCK_SIZE 0x912E
#define GL_NUM_SAMPLE_COUNTS 0x9380
#define GL_MIN_MAP_BUFFER_ALIGNMENT 0x90BC
#define GL_ATOMIC_COUNTER_BUFFER 0x92C0
#define GL_ATOMIC_COUNTER_BUFFER_BINDING 0x92C1
#define GL_ATOMIC_COUNTER_BUFFER_START 0x92C2
#define GL_ATOMIC_COUNTER_BUFFER_SIZE 0x92C3
#define GL_ATOMIC_COUNTER_BUFFER_DATA_SIZE 0x92C4
#define GL_ATOMIC_COUNTER_BUFFER_ACTIVE_ATOMIC_COUNTERS 0x92C5
#define GL_ATOMIC_COUNTER_BUFFER_ACTIVE_ATOMIC_COUNTER_INDICES 0x92C6
#define GL_ATOMIC_COUNTER_BUFFER_REFERENCED_BY_VERTEX_SHADER 0x92C7
#define GL_ATOMIC_COUNTER_BUFFER_REFERENCED_BY_TESS_CONTROL_SHADER 0x92C8
#define GL_ATOMIC_COUNTER_BUFFER_REFERENCED_BY_TESS_EVALUATION_SHADER 0x92C9
#define GL_ATOMIC_COUNTER_BUFFER_REFERENCED_BY_GEOMETRY_SHADER 0x92CA
#define GL_ATOMIC_COUNTER_BUFFER_REFERENCED_BY_FRAGMENT_SHADER 0x92CB
#define GL_MAX_VERTEX_ATOMIC_COUNTER_BUFFERS 0x92CC
#define GL_MAX_TESS_CONTROL_ATOMIC_COUNTER_BUFFERS 0x92CD
#define GL_MAX_TESS_EVALUATION_ATOMIC_COUNTER_BUFFERS 0x92CE
#define GL_MAX_GEOMETRY_ATOMIC_COUNTER_BUFFERS 0x92CF
#define GL_MAX_FRAGMENT_ATOMIC_COUNTER_BUFFERS 0x92D0
#define GL_MAX_COMBINED_ATOMIC_COUNTER_BUFFERS 0x92D1
#define GL_MAX_VERTEX_ATOMIC_COUNTERS 0x92D2
#define GL_MAX_TESS_CONTROL_ATOMIC_COUNTERS 0x92D3
#define GL_MAX_TESS_EVALUATION_ATOMIC_COUNTERS 0x92D4
#define GL_MAX_GEOMETRY_ATOMIC_COUNTERS 0x92D5
#define GL_MAX_FRAGMENT_ATOMIC_COUNTERS 0x92D6
#define GL_MAX_COMBINED_ATOMIC_COUNTERS 0x92D7
#define GL_MAX_ATOMIC_COUNTER_BUFFER_SIZE 0x92D8
#define GL_MAX_ATOMIC_COUNTER_BUFFER_BINDINGS 0x92DC
#define GL_ACTIVE_ATOMIC_COUNTER_BUFFERS 0x92D9
#define GL_UNIFORM_ATOMIC_COUNTER_BUFFER_INDEX 0x92DA
#define GL_UNSIGNED_INT_ATOMIC_COUNTER 0x92DB
#define GL_VERTEX_ATTRIB_ARRAY_BARRIER_BIT 0x00000001
#define GL_ELEMENT_ARRAY_BARRIER_BIT 0x00000002
#define GL_UNIFORM_BARRIER_BIT 0x00000004
#define GL_TEXTURE_FETCH_BARRIER_BIT 0x00000008
#define GL_SHADER_IMAGE_ACCESS_BARRIER_BIT 0x00000020
#define GL_COMMAND_BARRIER_BIT 0x00000040
#define GL_PIXEL_BUFFER_BARRIER_BIT 0x00000080
#define GL_TEXTURE_UPDATE_BARRIER_BIT 0x00000100
#define GL_BUFFER_UPDATE_BARRIER_BIT 0x00000200
#define GL_FRAMEBUFFER_BARRIER_BIT 0x00000400
#define GL_TRANSFORM_FEEDBACK_BARRIER_BIT 0x00000800
#define GL_ATOMIC_COUNTER_BARRIER_BIT 0x00001000
#define GL_ALL_BARRIER_BITS 0xFFFFFFFF
#define GL_MAX_IMAGE_UNITS 0x8F38
#define GL_MAX_COMBINED_IMAGE_UNITS_AND_FRAGMENT_OUTPUTS 0x8F39
#define GL_IMAGE_BINDING_NAME 0x8F3A
#define GL_IMAGE_BINDING_LEVEL 0x8F3B
#define GL_IMAGE_BINDING_LAYERED 0x8F3C
#define GL_IMAGE_BINDING_LAYER 0x8F3D
#define GL_IMAGE_BINDING_ACCESS 0x8F3E
#define GL_IMAGE_1D 0x904C
#define GL_IMAGE_2D 0x904D
#define GL_IMAGE_3D 0x904E
#define GL_IMAGE_2D_RECT 0x904F
#define GL_IMAGE_CUBE 0x9050
#define GL_IMAGE_BUFFER 0x9051
#define GL_IMAGE_1D_ARRAY 0x9052
#define GL_IMAGE_2D_ARRAY 0x9053
#define GL_IMAGE_CUBE_MAP_ARRAY 0x9054
#define GL_IMAGE_2D_MULTISAMPLE 0x9055
#define GL_IMAGE_2D_MULTISAMPLE_ARRAY 0x9056
#define GL_INT_IMAGE_1D 0x9057
#define GL_INT_IMAGE_2D 0x9058
#define GL_INT_IMAGE_3D 0x9059
#define GL_INT_IMAGE_2D_RECT 0x905A
#define GL_INT_IMAGE_CUBE 0x905B
#define GL_INT_IMAGE_BUFFER 0x905C
#define GL_INT_IMAGE_1D_ARRAY 0x905D
#define GL_INT_IMAGE_2D_ARRAY 0x905E
#define GL_INT_IMAGE_CUBE_MAP_ARRAY 0x905F
#define GL_INT_IMAGE_2D_MULTISAMPLE 0x9060
#define GL_INT_IMAGE_2D_MULTISAMPLE_ARRAY 0x9061
#define GL_UNSIGNED_INT_IMAGE_1D 0x9062
#define GL_UNSIGNED_INT_IMAGE_2D 0x9063
#define GL_UNSIGNED_INT_IMAGE_3D 0x9064
#define GL_UNSIGNED_INT_IMAGE_2D_RECT 0x9065
#define GL_UNSIGNED_INT_IMAGE_CUBE 0x9066
#define GL_UNSIGNED_INT_IMAGE_BUFFER 0x9067
#define GL_UNSIGNED_INT_IMAGE_1D_ARRAY 0x9068
#define GL_UNSIGNED_INT_IMAGE_2D_ARRAY 0x9069
#define GL_UNSIGNED_INT_IMAGE_CUBE_MAP_ARRAY 0x906A
#define GL_UNSIGNED_INT_IMAGE_2D_MULTISAMPLE 0x906B
#define GL_UNSIGNED_INT_IMAGE_2D_MULTISAMPLE_ARRAY 0x906C
#define GL_MAX_IMAGE_SAMPLES 0x906D
#define GL_IMAGE_BINDING_FORMAT 0x906E
#define GL_IMAGE_FORMAT_COMPATIBILITY_TYPE 0x90C7
#define GL_IMAGE_FORMAT_COMPATIBILITY_BY_SIZE 0x90C8
#define GL_IMAGE_FORMAT_COMPATIBILITY_BY_CLASS 0x90C9
#define GL_MAX_VERTEX_IMAGE_UNIFORMS 0x90CA
#define GL_MAX_TESS_CONTROL_IMAGE_UNIFORMS 0x90CB
#define GL_MAX_TESS_EVALUATION_IMAGE_UNIFORMS 0x90CC
#define GL_MAX_GEOMETRY_IMAGE_UNIFORMS 0x90CD
#define GL_MAX_FRAGMENT_IMAGE_UNIFORMS 0x90CE
#define GL_MAX_COMBINED_IMAGE_UNIFORMS 0x90CF
#define GL_COMPRESSED_RGBA_BPTC_UNORM 0x8E8C
#define GL_COMPRESSED_SRGB_ALPHA_BPTC_UNORM 0x8E8D
#define GL_COMPRESSED_RGB_BPTC_SIGNED_FLOAT 0x8E8E
#define GL_COMPRESSED_RGB_BPTC_UNSIGNED_FLOAT 0x8E8F
#define GL_TEXTURE_IMMUTABLE_FORMAT 0x912F

typedef void (*glDrawArraysInstancedBaseInstance_function)(GLenum mode, GLint first, GLsizei count, GLsizei instancecount, GLuint baseinstance);
glDrawArraysInstancedBaseInstance_function glDrawArraysInstancedBaseInstance;

typedef void (*glDrawElementsInstancedBaseInstance_function)(GLenum mode, GLsizei count, GLenum type, void * indices, GLsizei instancecount, GLuint baseinstance);
glDrawElementsInstancedBaseInstance_function glDrawElementsInstancedBaseInstance;

typedef void (*glDrawElementsInstancedBaseVertexBaseInstance_function)(GLenum mode, GLsizei count, GLenum type, void * indices, GLsizei instancecount, GLint basevertex, GLuint baseinstance);
glDrawElementsInstancedBaseVertexBaseInstance_function glDrawElementsInstancedBaseVertexBaseInstance;

typedef void (*glGetInternalformativ_function)(GLenum target, GLenum internalformat, GLenum pname, GLsizei count, GLint *params);
glGetInternalformativ_function glGetInternalformativ;

typedef void (*glGetActiveAtomicCounterBufferiv_function)(GLuint program, GLuint bufferIndex, GLenum pname, GLint *params);
glGetActiveAtomicCounterBufferiv_function glGetActiveAtomicCounterBufferiv;

typedef void (*glBindImageTexture_function)(GLuint unit, GLuint texture, GLint level, GLboolean layered, GLint layer, GLenum access, GLenum format);
glBindImageTexture_function glBindImageTexture;

typedef void (*glMemoryBarrier_function)(GLbitfield barriers);
glMemoryBarrier_function glMemoryBarrier;

typedef void (*glTexStorage1D_function)(GLenum target, GLsizei levels, GLenum internalformat, GLsizei width);
glTexStorage1D_function glTexStorage1D;

typedef void (*glTexStorage2D_function)(GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height);
glTexStorage2D_function glTexStorage2D;

typedef void (*glTexStorage3D_function)(GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth);
glTexStorage3D_function glTexStorage3D;

typedef void (*glDrawTransformFeedbackInstanced_function)(GLenum mode, GLuint id, GLsizei instancecount);
glDrawTransformFeedbackInstanced_function glDrawTransformFeedbackInstanced;

typedef void (*glDrawTransformFeedbackStreamInstanced_function)(GLenum mode, GLuint id, GLuint stream, GLsizei instancecount);
glDrawTransformFeedbackStreamInstanced_function glDrawTransformFeedbackStreamInstanced;
#define GL_VERSION_4_3 1

typedef void (*GLDEBUGPROC)(GLenum source, GLenum type, GLuint id, GLenum severity, GLsizei length, GLchar *message, void * userParam);
#define GL_NUM_SHADING_LANGUAGE_VERSIONS 0x82E9
#define GL_VERTEX_ATTRIB_ARRAY_LONG 0x874E
#define GL_COMPRESSED_RGB8_ETC2 0x9274
#define GL_COMPRESSED_SRGB8_ETC2 0x9275
#define GL_COMPRESSED_RGB8_PUNCHTHROUGH_ALPHA1_ETC2 0x9276
#define GL_COMPRESSED_SRGB8_PUNCHTHROUGH_ALPHA1_ETC2 0x9277
#define GL_COMPRESSED_RGBA8_ETC2_EAC 0x9278
#define GL_COMPRESSED_SRGB8_ALPHA8_ETC2_EAC 0x9279
#define GL_COMPRESSED_R11_EAC 0x9270
#define GL_COMPRESSED_SIGNED_R11_EAC 0x9271
#define GL_COMPRESSED_RG11_EAC 0x9272
#define GL_COMPRESSED_SIGNED_RG11_EAC 0x9273
#define GL_PRIMITIVE_RESTART_FIXED_INDEX 0x8D69
#define GL_ANY_SAMPLES_PASSED_CONSERVATIVE 0x8D6A
#define GL_MAX_ELEMENT_INDEX 0x8D6B
#define GL_COMPUTE_SHADER 0x91B9
#define GL_MAX_COMPUTE_UNIFORM_BLOCKS 0x91BB
#define GL_MAX_COMPUTE_TEXTURE_IMAGE_UNITS 0x91BC
#define GL_MAX_COMPUTE_IMAGE_UNIFORMS 0x91BD
#define GL_MAX_COMPUTE_SHARED_MEMORY_SIZE 0x8262
#define GL_MAX_COMPUTE_UNIFORM_COMPONENTS 0x8263
#define GL_MAX_COMPUTE_ATOMIC_COUNTER_BUFFERS 0x8264
#define GL_MAX_COMPUTE_ATOMIC_COUNTERS 0x8265
#define GL_MAX_COMBINED_COMPUTE_UNIFORM_COMPONENTS 0x8266
#define GL_MAX_COMPUTE_WORK_GROUP_INVOCATIONS 0x90EB
#define GL_MAX_COMPUTE_WORK_GROUP_COUNT 0x91BE
#define GL_MAX_COMPUTE_WORK_GROUP_SIZE 0x91BF
#define GL_COMPUTE_WORK_GROUP_SIZE 0x8267
#define GL_UNIFORM_BLOCK_REFERENCED_BY_COMPUTE_SHADER 0x90EC
#define GL_ATOMIC_COUNTER_BUFFER_REFERENCED_BY_COMPUTE_SHADER 0x90ED
#define GL_DISPATCH_INDIRECT_BUFFER 0x90EE
#define GL_DISPATCH_INDIRECT_BUFFER_BINDING 0x90EF
#define GL_COMPUTE_SHADER_BIT 0x00000020
#define GL_DEBUG_OUTPUT_SYNCHRONOUS 0x8242
#define GL_DEBUG_NEXT_LOGGED_MESSAGE_LENGTH 0x8243
#define GL_DEBUG_CALLBACK_FUNCTION 0x8244
#define GL_DEBUG_CALLBACK_USER_PARAM 0x8245
#define GL_DEBUG_SOURCE_API 0x8246
#define GL_DEBUG_SOURCE_WINDOW_SYSTEM 0x8247
#define GL_DEBUG_SOURCE_SHADER_COMPILER 0x8248
#define GL_DEBUG_SOURCE_THIRD_PARTY 0x8249
#define GL_DEBUG_SOURCE_APPLICATION 0x824A
#define GL_DEBUG_SOURCE_OTHER 0x824B
#define GL_DEBUG_TYPE_ERROR 0x824C
#define GL_DEBUG_TYPE_DEPRECATED_BEHAVIOR 0x824D
#define GL_DEBUG_TYPE_UNDEFINED_BEHAVIOR 0x824E
#define GL_DEBUG_TYPE_PORTABILITY 0x824F
#define GL_DEBUG_TYPE_PERFORMANCE 0x8250
#define GL_DEBUG_TYPE_OTHER 0x8251
#define GL_MAX_DEBUG_MESSAGE_LENGTH 0x9143
#define GL_MAX_DEBUG_LOGGED_MESSAGES 0x9144
#define GL_DEBUG_LOGGED_MESSAGES 0x9145
#define GL_DEBUG_SEVERITY_HIGH 0x9146
#define GL_DEBUG_SEVERITY_MEDIUM 0x9147
#define GL_DEBUG_SEVERITY_LOW 0x9148
#define GL_DEBUG_TYPE_MARKER 0x8268
#define GL_DEBUG_TYPE_PUSH_GROUP 0x8269
#define GL_DEBUG_TYPE_POP_GROUP 0x826A
#define GL_DEBUG_SEVERITY_NOTIFICATION 0x826B
#define GL_MAX_DEBUG_GROUP_STACK_DEPTH 0x826C
#define GL_DEBUG_GROUP_STACK_DEPTH 0x826D
#define GL_BUFFER 0x82E0
#define GL_SHADER 0x82E1
#define GL_PROGRAM 0x82E2
#define GL_QUERY 0x82E3
#define GL_PROGRAM_PIPELINE 0x82E4
#define GL_SAMPLER 0x82E6
#define GL_MAX_LABEL_LENGTH 0x82E8
#define GL_DEBUG_OUTPUT 0x92E0
#define GL_CONTEXT_FLAG_DEBUG_BIT 0x00000002
#define GL_MAX_UNIFORM_LOCATIONS 0x826E
#define GL_FRAMEBUFFER_DEFAULT_WIDTH 0x9310
#define GL_FRAMEBUFFER_DEFAULT_HEIGHT 0x9311
#define GL_FRAMEBUFFER_DEFAULT_LAYERS 0x9312
#define GL_FRAMEBUFFER_DEFAULT_SAMPLES 0x9313
#define GL_FRAMEBUFFER_DEFAULT_FIXED_SAMPLE_LOCATIONS 0x9314
#define GL_MAX_FRAMEBUFFER_WIDTH 0x9315
#define GL_MAX_FRAMEBUFFER_HEIGHT 0x9316
#define GL_MAX_FRAMEBUFFER_LAYERS 0x9317
#define GL_MAX_FRAMEBUFFER_SAMPLES 0x9318
#define GL_INTERNALFORMAT_SUPPORTED 0x826F
#define GL_INTERNALFORMAT_PREFERRED 0x8270
#define GL_INTERNALFORMAT_RED_SIZE 0x8271
#define GL_INTERNALFORMAT_GREEN_SIZE 0x8272
#define GL_INTERNALFORMAT_BLUE_SIZE 0x8273
#define GL_INTERNALFORMAT_ALPHA_SIZE 0x8274
#define GL_INTERNALFORMAT_DEPTH_SIZE 0x8275
#define GL_INTERNALFORMAT_STENCIL_SIZE 0x8276
#define GL_INTERNALFORMAT_SHARED_SIZE 0x8277
#define GL_INTERNALFORMAT_RED_TYPE 0x8278
#define GL_INTERNALFORMAT_GREEN_TYPE 0x8279
#define GL_INTERNALFORMAT_BLUE_TYPE 0x827A
#define GL_INTERNALFORMAT_ALPHA_TYPE 0x827B
#define GL_INTERNALFORMAT_DEPTH_TYPE 0x827C
#define GL_INTERNALFORMAT_STENCIL_TYPE 0x827D
#define GL_MAX_WIDTH 0x827E
#define GL_MAX_HEIGHT 0x827F
#define GL_MAX_DEPTH 0x8280
#define GL_MAX_LAYERS 0x8281
#define GL_MAX_COMBINED_DIMENSIONS 0x8282
#define GL_COLOR_COMPONENTS 0x8283
#define GL_DEPTH_COMPONENTS 0x8284
#define GL_STENCIL_COMPONENTS 0x8285
#define GL_COLOR_RENDERABLE 0x8286
#define GL_DEPTH_RENDERABLE 0x8287
#define GL_STENCIL_RENDERABLE 0x8288
#define GL_FRAMEBUFFER_RENDERABLE 0x8289
#define GL_FRAMEBUFFER_RENDERABLE_LAYERED 0x828A
#define GL_FRAMEBUFFER_BLEND 0x828B
#define GL_READ_PIXELS 0x828C
#define GL_READ_PIXELS_FORMAT 0x828D
#define GL_READ_PIXELS_TYPE 0x828E
#define GL_TEXTURE_IMAGE_FORMAT 0x828F
#define GL_TEXTURE_IMAGE_TYPE 0x8290
#define GL_GET_TEXTURE_IMAGE_FORMAT 0x8291
#define GL_GET_TEXTURE_IMAGE_TYPE 0x8292
#define GL_MIPMAP 0x8293
#define GL_MANUAL_GENERATE_MIPMAP 0x8294
#define GL_AUTO_GENERATE_MIPMAP 0x8295
#define GL_COLOR_ENCODING 0x8296
#define GL_SRGB_READ 0x8297
#define GL_SRGB_WRITE 0x8298
#define GL_FILTER 0x829A
#define GL_VERTEX_TEXTURE 0x829B
#define GL_TESS_CONTROL_TEXTURE 0x829C
#define GL_TESS_EVALUATION_TEXTURE 0x829D
#define GL_GEOMETRY_TEXTURE 0x829E
#define GL_FRAGMENT_TEXTURE 0x829F
#define GL_COMPUTE_TEXTURE 0x82A0
#define GL_TEXTURE_SHADOW 0x82A1
#define GL_TEXTURE_GATHER 0x82A2
#define GL_TEXTURE_GATHER_SHADOW 0x82A3
#define GL_SHADER_IMAGE_LOAD 0x82A4
#define GL_SHADER_IMAGE_STORE 0x82A5
#define GL_SHADER_IMAGE_ATOMIC 0x82A6
#define GL_IMAGE_TEXEL_SIZE 0x82A7
#define GL_IMAGE_COMPATIBILITY_CLASS 0x82A8
#define GL_IMAGE_PIXEL_FORMAT 0x82A9
#define GL_IMAGE_PIXEL_TYPE 0x82AA
#define GL_SIMULTANEOUS_TEXTURE_AND_DEPTH_TEST 0x82AC
#define GL_SIMULTANEOUS_TEXTURE_AND_STENCIL_TEST 0x82AD
#define GL_SIMULTANEOUS_TEXTURE_AND_DEPTH_WRITE 0x82AE
#define GL_SIMULTANEOUS_TEXTURE_AND_STENCIL_WRITE 0x82AF
#define GL_TEXTURE_COMPRESSED_BLOCK_WIDTH 0x82B1
#define GL_TEXTURE_COMPRESSED_BLOCK_HEIGHT 0x82B2
#define GL_TEXTURE_COMPRESSED_BLOCK_SIZE 0x82B3
#define GL_CLEAR_BUFFER 0x82B4
#define GL_TEXTURE_VIEW 0x82B5
#define GL_VIEW_COMPATIBILITY_CLASS 0x82B6
#define GL_FULL_SUPPORT 0x82B7
#define GL_CAVEAT_SUPPORT 0x82B8
#define GL_IMAGE_CLASS_4_X_32 0x82B9
#define GL_IMAGE_CLASS_2_X_32 0x82BA
#define GL_IMAGE_CLASS_1_X_32 0x82BB
#define GL_IMAGE_CLASS_4_X_16 0x82BC
#define GL_IMAGE_CLASS_2_X_16 0x82BD
#define GL_IMAGE_CLASS_1_X_16 0x82BE
#define GL_IMAGE_CLASS_4_X_8 0x82BF
#define GL_IMAGE_CLASS_2_X_8 0x82C0
#define GL_IMAGE_CLASS_1_X_8 0x82C1
#define GL_IMAGE_CLASS_11_11_10 0x82C2
#define GL_IMAGE_CLASS_10_10_10_2 0x82C3
#define GL_VIEW_CLASS_128_BITS 0x82C4
#define GL_VIEW_CLASS_96_BITS 0x82C5
#define GL_VIEW_CLASS_64_BITS 0x82C6
#define GL_VIEW_CLASS_48_BITS 0x82C7
#define GL_VIEW_CLASS_32_BITS 0x82C8
#define GL_VIEW_CLASS_24_BITS 0x82C9
#define GL_VIEW_CLASS_16_BITS 0x82CA
#define GL_VIEW_CLASS_8_BITS 0x82CB
#define GL_VIEW_CLASS_S3TC_DXT1_RGB 0x82CC
#define GL_VIEW_CLASS_S3TC_DXT1_RGBA 0x82CD
#define GL_VIEW_CLASS_S3TC_DXT3_RGBA 0x82CE
#define GL_VIEW_CLASS_S3TC_DXT5_RGBA 0x82CF
#define GL_VIEW_CLASS_RGTC1_RED 0x82D0
#define GL_VIEW_CLASS_RGTC2_RG 0x82D1
#define GL_VIEW_CLASS_BPTC_UNORM 0x82D2
#define GL_VIEW_CLASS_BPTC_FLOAT 0x82D3
#define GL_UNIFORM 0x92E1
#define GL_UNIFORM_BLOCK 0x92E2
#define GL_PROGRAM_INPUT 0x92E3
#define GL_PROGRAM_OUTPUT 0x92E4
#define GL_BUFFER_VARIABLE 0x92E5
#define GL_SHADER_STORAGE_BLOCK 0x92E6
#define GL_VERTEX_SUBROUTINE 0x92E8
#define GL_TESS_CONTROL_SUBROUTINE 0x92E9
#define GL_TESS_EVALUATION_SUBROUTINE 0x92EA
#define GL_GEOMETRY_SUBROUTINE 0x92EB
#define GL_FRAGMENT_SUBROUTINE 0x92EC
#define GL_COMPUTE_SUBROUTINE 0x92ED
#define GL_VERTEX_SUBROUTINE_UNIFORM 0x92EE
#define GL_TESS_CONTROL_SUBROUTINE_UNIFORM 0x92EF
#define GL_TESS_EVALUATION_SUBROUTINE_UNIFORM 0x92F0
#define GL_GEOMETRY_SUBROUTINE_UNIFORM 0x92F1
#define GL_FRAGMENT_SUBROUTINE_UNIFORM 0x92F2
#define GL_COMPUTE_SUBROUTINE_UNIFORM 0x92F3
#define GL_TRANSFORM_FEEDBACK_VARYING 0x92F4
#define GL_ACTIVE_RESOURCES 0x92F5
#define GL_MAX_NAME_LENGTH 0x92F6
#define GL_MAX_NUM_ACTIVE_VARIABLES 0x92F7
#define GL_MAX_NUM_COMPATIBLE_SUBROUTINES 0x92F8
#define GL_NAME_LENGTH 0x92F9
#define GL_TYPE 0x92FA
#define GL_ARRAY_SIZE 0x92FB
#define GL_OFFSET 0x92FC
#define GL_BLOCK_INDEX 0x92FD
#define GL_ARRAY_STRIDE 0x92FE
#define GL_MATRIX_STRIDE 0x92FF
#define GL_IS_ROW_MAJOR 0x9300
#define GL_ATOMIC_COUNTER_BUFFER_INDEX 0x9301
#define GL_BUFFER_BINDING 0x9302
#define GL_BUFFER_DATA_SIZE 0x9303
#define GL_NUM_ACTIVE_VARIABLES 0x9304
#define GL_ACTIVE_VARIABLES 0x9305
#define GL_REFERENCED_BY_VERTEX_SHADER 0x9306
#define GL_REFERENCED_BY_TESS_CONTROL_SHADER 0x9307
#define GL_REFERENCED_BY_TESS_EVALUATION_SHADER 0x9308
#define GL_REFERENCED_BY_GEOMETRY_SHADER 0x9309
#define GL_REFERENCED_BY_FRAGMENT_SHADER 0x930A
#define GL_REFERENCED_BY_COMPUTE_SHADER 0x930B
#define GL_TOP_LEVEL_ARRAY_SIZE 0x930C
#define GL_TOP_LEVEL_ARRAY_STRIDE 0x930D
#define GL_LOCATION 0x930E
#define GL_LOCATION_INDEX 0x930F
#define GL_IS_PER_PATCH 0x92E7
#define GL_SHADER_STORAGE_BUFFER 0x90D2
#define GL_SHADER_STORAGE_BUFFER_BINDING 0x90D3
#define GL_SHADER_STORAGE_BUFFER_START 0x90D4
#define GL_SHADER_STORAGE_BUFFER_SIZE 0x90D5
#define GL_MAX_VERTEX_SHADER_STORAGE_BLOCKS 0x90D6
#define GL_MAX_GEOMETRY_SHADER_STORAGE_BLOCKS 0x90D7
#define GL_MAX_TESS_CONTROL_SHADER_STORAGE_BLOCKS 0x90D8
#define GL_MAX_TESS_EVALUATION_SHADER_STORAGE_BLOCKS 0x90D9
#define GL_MAX_FRAGMENT_SHADER_STORAGE_BLOCKS 0x90DA
#define GL_MAX_COMPUTE_SHADER_STORAGE_BLOCKS 0x90DB
#define GL_MAX_COMBINED_SHADER_STORAGE_BLOCKS 0x90DC
#define GL_MAX_SHADER_STORAGE_BUFFER_BINDINGS 0x90DD
#define GL_MAX_SHADER_STORAGE_BLOCK_SIZE 0x90DE
#define GL_SHADER_STORAGE_BUFFER_OFFSET_ALIGNMENT 0x90DF
#define GL_SHADER_STORAGE_BARRIER_BIT 0x00002000
#define GL_MAX_COMBINED_SHADER_OUTPUT_RESOURCES 0x8F39
#define GL_DEPTH_STENCIL_TEXTURE_MODE 0x90EA
#define GL_TEXTURE_BUFFER_OFFSET 0x919D
#define GL_TEXTURE_BUFFER_SIZE 0x919E
#define GL_TEXTURE_BUFFER_OFFSET_ALIGNMENT 0x919F
#define GL_TEXTURE_VIEW_MIN_LEVEL 0x82DB
#define GL_TEXTURE_VIEW_NUM_LEVELS 0x82DC
#define GL_TEXTURE_VIEW_MIN_LAYER 0x82DD
#define GL_TEXTURE_VIEW_NUM_LAYERS 0x82DE
#define GL_TEXTURE_IMMUTABLE_LEVELS 0x82DF
#define GL_VERTEX_ATTRIB_BINDING 0x82D4
#define GL_VERTEX_ATTRIB_RELATIVE_OFFSET 0x82D5
#define GL_VERTEX_BINDING_DIVISOR 0x82D6
#define GL_VERTEX_BINDING_OFFSET 0x82D7
#define GL_VERTEX_BINDING_STRIDE 0x82D8
#define GL_MAX_VERTEX_ATTRIB_RELATIVE_OFFSET 0x82D9
#define GL_MAX_VERTEX_ATTRIB_BINDINGS 0x82DA
#define GL_VERTEX_BINDING_BUFFER 0x8F4F
#define GL_DISPLAY_LIST 0x82E7

typedef void (*glClearBufferData_function)(GLenum target, GLenum internalformat, GLenum format, GLenum type, void * data);
glClearBufferData_function glClearBufferData;

typedef void (*glClearBufferSubData_function)(GLenum target, GLenum internalformat, GLintptr offset, GLsizeiptr size, GLenum format, GLenum type, void * data);
glClearBufferSubData_function glClearBufferSubData;

typedef void (*glDispatchCompute_function)(GLuint num_groups_x, GLuint num_groups_y, GLuint num_groups_z);
glDispatchCompute_function glDispatchCompute;

typedef void (*glDispatchComputeIndirect_function)(GLintptr indirect);
glDispatchComputeIndirect_function glDispatchComputeIndirect;

typedef void (*glCopyImageSubData_function)(GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, GLuint dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei srcWidth, GLsizei srcHeight, GLsizei srcDepth);
glCopyImageSubData_function glCopyImageSubData;

typedef void (*glFramebufferParameteri_function)(GLenum target, GLenum pname, GLint param);
glFramebufferParameteri_function glFramebufferParameteri;

typedef void (*glGetFramebufferParameteriv_function)(GLenum target, GLenum pname, GLint *params);
glGetFramebufferParameteriv_function glGetFramebufferParameteriv;

typedef void (*glGetInternalformati64v_function)(GLenum target, GLenum internalformat, GLenum pname, GLsizei count, GLint64 *params);
glGetInternalformati64v_function glGetInternalformati64v;

typedef void (*glInvalidateTexSubImage_function)(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth);
glInvalidateTexSubImage_function glInvalidateTexSubImage;

typedef void (*glInvalidateTexImage_function)(GLuint texture, GLint level);
glInvalidateTexImage_function glInvalidateTexImage;

typedef void (*glInvalidateBufferSubData_function)(GLuint buffer, GLintptr offset, GLsizeiptr length);
glInvalidateBufferSubData_function glInvalidateBufferSubData;

typedef void (*glInvalidateBufferData_function)(GLuint buffer);
glInvalidateBufferData_function glInvalidateBufferData;

typedef void (*glInvalidateFramebuffer_function)(GLenum target, GLsizei numAttachments, GLenum *attachments);
glInvalidateFramebuffer_function glInvalidateFramebuffer;

typedef void (*glInvalidateSubFramebuffer_function)(GLenum target, GLsizei numAttachments, GLenum *attachments, GLint x, GLint y, GLsizei width, GLsizei height);
glInvalidateSubFramebuffer_function glInvalidateSubFramebuffer;

typedef void (*glMultiDrawArraysIndirect_function)(GLenum mode, void * indirect, GLsizei drawcount, GLsizei stride);
glMultiDrawArraysIndirect_function glMultiDrawArraysIndirect;

typedef void (*glMultiDrawElementsIndirect_function)(GLenum mode, GLenum type, void * indirect, GLsizei drawcount, GLsizei stride);
glMultiDrawElementsIndirect_function glMultiDrawElementsIndirect;

typedef void (*glGetProgramInterfaceiv_function)(GLuint program, GLenum programInterface, GLenum pname, GLint *params);
glGetProgramInterfaceiv_function glGetProgramInterfaceiv;

typedef GLuint  (*glGetProgramResourceIndex_function)(GLuint program, GLenum programInterface, GLchar *name);
glGetProgramResourceIndex_function glGetProgramResourceIndex;

typedef void (*glGetProgramResourceName_function)(GLuint program, GLenum programInterface, GLuint index, GLsizei bufSize, GLsizei *length, GLchar *name);
glGetProgramResourceName_function glGetProgramResourceName;

typedef void (*glGetProgramResourceiv_function)(GLuint program, GLenum programInterface, GLuint index, GLsizei propCount, GLenum *props, GLsizei count, GLsizei *length, GLint *params);
glGetProgramResourceiv_function glGetProgramResourceiv;

typedef GLint  (*glGetProgramResourceLocation_function)(GLuint program, GLenum programInterface, GLchar *name);
glGetProgramResourceLocation_function glGetProgramResourceLocation;

typedef GLint  (*glGetProgramResourceLocationIndex_function)(GLuint program, GLenum programInterface, GLchar *name);
glGetProgramResourceLocationIndex_function glGetProgramResourceLocationIndex;

typedef void (*glShaderStorageBlockBinding_function)(GLuint program, GLuint storageBlockIndex, GLuint storageBlockBinding);
glShaderStorageBlockBinding_function glShaderStorageBlockBinding;

typedef void (*glTexBufferRange_function)(GLenum target, GLenum internalformat, GLuint buffer, GLintptr offset, GLsizeiptr size);
glTexBufferRange_function glTexBufferRange;

typedef void (*glTexStorage2DMultisample_function)(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations);
glTexStorage2DMultisample_function glTexStorage2DMultisample;

typedef void (*glTexStorage3DMultisample_function)(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations);
glTexStorage3DMultisample_function glTexStorage3DMultisample;

typedef void (*glTextureView_function)(GLuint texture, GLenum target, GLuint origtexture, GLenum internalformat, GLuint minlevel, GLuint numlevels, GLuint minlayer, GLuint numlayers);
glTextureView_function glTextureView;

typedef void (*glBindVertexBuffer_function)(GLuint bindingindex, GLuint buffer, GLintptr offset, GLsizei stride);
glBindVertexBuffer_function glBindVertexBuffer;

typedef void (*glVertexAttribFormat_function)(GLuint attribindex, GLint size, GLenum type, GLboolean normalized, GLuint relativeoffset);
glVertexAttribFormat_function glVertexAttribFormat;

typedef void (*glVertexAttribIFormat_function)(GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset);
glVertexAttribIFormat_function glVertexAttribIFormat;

typedef void (*glVertexAttribLFormat_function)(GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset);
glVertexAttribLFormat_function glVertexAttribLFormat;

typedef void (*glVertexAttribBinding_function)(GLuint attribindex, GLuint bindingindex);
glVertexAttribBinding_function glVertexAttribBinding;

typedef void (*glVertexBindingDivisor_function)(GLuint bindingindex, GLuint divisor);
glVertexBindingDivisor_function glVertexBindingDivisor;

typedef void (*glDebugMessageControl_function)(GLenum source, GLenum type, GLenum severity, GLsizei count, GLuint *ids, GLboolean enabled);
glDebugMessageControl_function glDebugMessageControl;

typedef void (*glDebugMessageInsert_function)(GLenum source, GLenum type, GLuint id, GLenum severity, GLsizei length, GLchar *buf);
glDebugMessageInsert_function glDebugMessageInsert;

typedef void (*glDebugMessageCallback_function)(GLDEBUGPROC callback, void * userParam);
glDebugMessageCallback_function glDebugMessageCallback;

typedef GLuint  (*glGetDebugMessageLog_function)(GLuint count, GLsizei bufSize, GLenum *sources, GLenum *types, GLuint *ids, GLenum *severities, GLsizei *lengths, GLchar *messageLog);
glGetDebugMessageLog_function glGetDebugMessageLog;

typedef void (*glPushDebugGroup_function)(GLenum source, GLuint id, GLsizei length, GLchar *message);
glPushDebugGroup_function glPushDebugGroup;

typedef void (*glPopDebugGroup_function)();
glPopDebugGroup_function glPopDebugGroup;

typedef void (*glObjectLabel_function)(GLenum identifier, GLuint name, GLsizei length, GLchar *label);
glObjectLabel_function glObjectLabel;

typedef void (*glGetObjectLabel_function)(GLenum identifier, GLuint name, GLsizei bufSize, GLsizei *length, GLchar *label);
glGetObjectLabel_function glGetObjectLabel;

typedef void (*glObjectPtrLabel_function)(void * ptr, GLsizei length, GLchar *label);
glObjectPtrLabel_function glObjectPtrLabel;

typedef void (*glGetObjectPtrLabel_function)(void * ptr, GLsizei bufSize, GLsizei *length, GLchar *label);
glGetObjectPtrLabel_function glGetObjectPtrLabel;
#define GL_VERSION_4_4 1
#define GL_MAX_VERTEX_ATTRIB_STRIDE 0x82E5
#define GL_PRIMITIVE_RESTART_FOR_PATCHES_SUPPORTED 0x8221
#define GL_TEXTURE_BUFFER_BINDING 0x8C2A
#define GL_MAP_PERSISTENT_BIT 0x0040
#define GL_MAP_COHERENT_BIT 0x0080
#define GL_DYNAMIC_STORAGE_BIT 0x0100
#define GL_CLIENT_STORAGE_BIT 0x0200
#define GL_CLIENT_MAPPED_BUFFER_BARRIER_BIT 0x00004000
#define GL_BUFFER_IMMUTABLE_STORAGE 0x821F
#define GL_BUFFER_STORAGE_FLAGS 0x8220
#define GL_CLEAR_TEXTURE 0x9365
#define GL_LOCATION_COMPONENT 0x934A
#define GL_TRANSFORM_FEEDBACK_BUFFER_INDEX 0x934B
#define GL_TRANSFORM_FEEDBACK_BUFFER_STRIDE 0x934C
#define GL_QUERY_BUFFER 0x9192
#define GL_QUERY_BUFFER_BARRIER_BIT 0x00008000
#define GL_QUERY_BUFFER_BINDING 0x9193
#define GL_QUERY_RESULT_NO_WAIT 0x9194
#define GL_MIRROR_CLAMP_TO_EDGE 0x8743

typedef void (*glBufferStorage_function)(GLenum target, GLsizeiptr size, void * data, GLbitfield flags);
glBufferStorage_function glBufferStorage;

typedef void (*glClearTexImage_function)(GLuint texture, GLint level, GLenum format, GLenum type, void * data);
glClearTexImage_function glClearTexImage;

typedef void (*glClearTexSubImage_function)(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, void * data);
glClearTexSubImage_function glClearTexSubImage;

typedef void (*glBindBuffersBase_function)(GLenum target, GLuint first, GLsizei count, GLuint *buffers);
glBindBuffersBase_function glBindBuffersBase;

typedef void (*glBindBuffersRange_function)(GLenum target, GLuint first, GLsizei count, GLuint *buffers, GLintptr *offsets, GLsizeiptr *sizes);
glBindBuffersRange_function glBindBuffersRange;

typedef void (*glBindTextures_function)(GLuint first, GLsizei count, GLuint *textures);
glBindTextures_function glBindTextures;

typedef void (*glBindSamplers_function)(GLuint first, GLsizei count, GLuint *samplers);
glBindSamplers_function glBindSamplers;

typedef void (*glBindImageTextures_function)(GLuint first, GLsizei count, GLuint *textures);
glBindImageTextures_function glBindImageTextures;

typedef void (*glBindVertexBuffers_function)(GLuint first, GLsizei count, GLuint *buffers, GLintptr *offsets, GLsizei *strides);
glBindVertexBuffers_function glBindVertexBuffers;
#define GL_VERSION_4_5 1
#define GL_CONTEXT_LOST 0x0507
#define GL_NEGATIVE_ONE_TO_ONE 0x935E
#define GL_ZERO_TO_ONE 0x935F
#define GL_CLIP_ORIGIN 0x935C
#define GL_CLIP_DEPTH_MODE 0x935D
#define GL_QUERY_WAIT_INVERTED 0x8E17
#define GL_QUERY_NO_WAIT_INVERTED 0x8E18
#define GL_QUERY_BY_REGION_WAIT_INVERTED 0x8E19
#define GL_QUERY_BY_REGION_NO_WAIT_INVERTED 0x8E1A
#define GL_MAX_CULL_DISTANCES 0x82F9
#define GL_MAX_COMBINED_CLIP_AND_CULL_DISTANCES 0x82FA
#define GL_TEXTURE_TARGET 0x1006
#define GL_QUERY_TARGET 0x82EA
#define GL_GUILTY_CONTEXT_RESET 0x8253
#define GL_INNOCENT_CONTEXT_RESET 0x8254
#define GL_UNKNOWN_CONTEXT_RESET 0x8255
#define GL_RESET_NOTIFICATION_STRATEGY 0x8256
#define GL_LOSE_CONTEXT_ON_RESET 0x8252
#define GL_NO_RESET_NOTIFICATION 0x8261
#define GL_CONTEXT_FLAG_ROBUST_ACCESS_BIT 0x00000004
#define GL_COLOR_TABLE 0x80D0
#define GL_POST_CONVOLUTION_COLOR_TABLE 0x80D1
#define GL_POST_COLOR_MATRIX_COLOR_TABLE 0x80D2
#define GL_PROXY_COLOR_TABLE 0x80D3
#define GL_PROXY_POST_CONVOLUTION_COLOR_TABLE 0x80D4
#define GL_PROXY_POST_COLOR_MATRIX_COLOR_TABLE 0x80D5
#define GL_CONVOLUTION_1D 0x8010
#define GL_CONVOLUTION_2D 0x8011
#define GL_SEPARABLE_2D 0x8012
#define GL_HISTOGRAM 0x8024
#define GL_PROXY_HISTOGRAM 0x8025
#define GL_MINMAX 0x802E
#define GL_CONTEXT_RELEASE_BEHAVIOR 0x82FB
#define GL_CONTEXT_RELEASE_BEHAVIOR_FLUSH 0x82FC

typedef void (*glClipControl_function)(GLenum origin, GLenum depth);
glClipControl_function glClipControl;

typedef void (*glCreateTransformFeedbacks_function)(GLsizei n, GLuint *ids);
glCreateTransformFeedbacks_function glCreateTransformFeedbacks;

typedef void (*glTransformFeedbackBufferBase_function)(GLuint xfb, GLuint index, GLuint buffer);
glTransformFeedbackBufferBase_function glTransformFeedbackBufferBase;

typedef void (*glTransformFeedbackBufferRange_function)(GLuint xfb, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size);
glTransformFeedbackBufferRange_function glTransformFeedbackBufferRange;

typedef void (*glGetTransformFeedbackiv_function)(GLuint xfb, GLenum pname, GLint *param);
glGetTransformFeedbackiv_function glGetTransformFeedbackiv;

typedef void (*glGetTransformFeedbacki_v_function)(GLuint xfb, GLenum pname, GLuint index, GLint *param);
glGetTransformFeedbacki_v_function glGetTransformFeedbacki_v;

typedef void (*glGetTransformFeedbacki64_v_function)(GLuint xfb, GLenum pname, GLuint index, GLint64 *param);
glGetTransformFeedbacki64_v_function glGetTransformFeedbacki64_v;

typedef void (*glCreateBuffers_function)(GLsizei n, GLuint *buffers);
glCreateBuffers_function glCreateBuffers;

typedef void (*glNamedBufferStorage_function)(GLuint buffer, GLsizeiptr size, void * data, GLbitfield flags);
glNamedBufferStorage_function glNamedBufferStorage;

typedef void (*glNamedBufferData_function)(GLuint buffer, GLsizeiptr size, void * data, GLenum usage);
glNamedBufferData_function glNamedBufferData;

typedef void (*glNamedBufferSubData_function)(GLuint buffer, GLintptr offset, GLsizeiptr size, void * data);
glNamedBufferSubData_function glNamedBufferSubData;

typedef void (*glCopyNamedBufferSubData_function)(GLuint readBuffer, GLuint writeBuffer, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size);
glCopyNamedBufferSubData_function glCopyNamedBufferSubData;

typedef void (*glClearNamedBufferData_function)(GLuint buffer, GLenum internalformat, GLenum format, GLenum type, void * data);
glClearNamedBufferData_function glClearNamedBufferData;

typedef void (*glClearNamedBufferSubData_function)(GLuint buffer, GLenum internalformat, GLintptr offset, GLsizeiptr size, GLenum format, GLenum type, void * data);
glClearNamedBufferSubData_function glClearNamedBufferSubData;

typedef void *  (*glMapNamedBuffer_function)(GLuint buffer, GLenum access);
glMapNamedBuffer_function glMapNamedBuffer;

typedef void *  (*glMapNamedBufferRange_function)(GLuint buffer, GLintptr offset, GLsizeiptr length, GLbitfield access);
glMapNamedBufferRange_function glMapNamedBufferRange;

typedef GLboolean  (*glUnmapNamedBuffer_function)(GLuint buffer);
glUnmapNamedBuffer_function glUnmapNamedBuffer;

typedef void (*glFlushMappedNamedBufferRange_function)(GLuint buffer, GLintptr offset, GLsizeiptr length);
glFlushMappedNamedBufferRange_function glFlushMappedNamedBufferRange;

typedef void (*glGetNamedBufferParameteriv_function)(GLuint buffer, GLenum pname, GLint *params);
glGetNamedBufferParameteriv_function glGetNamedBufferParameteriv;

typedef void (*glGetNamedBufferParameteri64v_function)(GLuint buffer, GLenum pname, GLint64 *params);
glGetNamedBufferParameteri64v_function glGetNamedBufferParameteri64v;

typedef void (*glGetNamedBufferPointerv_function)(GLuint buffer, GLenum pname, void * *params);
glGetNamedBufferPointerv_function glGetNamedBufferPointerv;

typedef void (*glGetNamedBufferSubData_function)(GLuint buffer, GLintptr offset, GLsizeiptr size, void * data);
glGetNamedBufferSubData_function glGetNamedBufferSubData;

typedef void (*glCreateFramebuffers_function)(GLsizei n, GLuint *framebuffers);
glCreateFramebuffers_function glCreateFramebuffers;

typedef void (*glNamedFramebufferRenderbuffer_function)(GLuint framebuffer, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer);
glNamedFramebufferRenderbuffer_function glNamedFramebufferRenderbuffer;

typedef void (*glNamedFramebufferParameteri_function)(GLuint framebuffer, GLenum pname, GLint param);
glNamedFramebufferParameteri_function glNamedFramebufferParameteri;

typedef void (*glNamedFramebufferTexture_function)(GLuint framebuffer, GLenum attachment, GLuint texture, GLint level);
glNamedFramebufferTexture_function glNamedFramebufferTexture;

typedef void (*glNamedFramebufferTextureLayer_function)(GLuint framebuffer, GLenum attachment, GLuint texture, GLint level, GLint layer);
glNamedFramebufferTextureLayer_function glNamedFramebufferTextureLayer;

typedef void (*glNamedFramebufferDrawBuffer_function)(GLuint framebuffer, GLenum buf);
glNamedFramebufferDrawBuffer_function glNamedFramebufferDrawBuffer;

typedef void (*glNamedFramebufferDrawBuffers_function)(GLuint framebuffer, GLsizei n, GLenum *bufs);
glNamedFramebufferDrawBuffers_function glNamedFramebufferDrawBuffers;

typedef void (*glNamedFramebufferReadBuffer_function)(GLuint framebuffer, GLenum src);
glNamedFramebufferReadBuffer_function glNamedFramebufferReadBuffer;

typedef void (*glInvalidateNamedFramebufferData_function)(GLuint framebuffer, GLsizei numAttachments, GLenum *attachments);
glInvalidateNamedFramebufferData_function glInvalidateNamedFramebufferData;

typedef void (*glInvalidateNamedFramebufferSubData_function)(GLuint framebuffer, GLsizei numAttachments, GLenum *attachments, GLint x, GLint y, GLsizei width, GLsizei height);
glInvalidateNamedFramebufferSubData_function glInvalidateNamedFramebufferSubData;

typedef void (*glClearNamedFramebufferiv_function)(GLuint framebuffer, GLenum buffer, GLint drawbuffer, GLint *value);
glClearNamedFramebufferiv_function glClearNamedFramebufferiv;

typedef void (*glClearNamedFramebufferuiv_function)(GLuint framebuffer, GLenum buffer, GLint drawbuffer, GLuint *value);
glClearNamedFramebufferuiv_function glClearNamedFramebufferuiv;

typedef void (*glClearNamedFramebufferfv_function)(GLuint framebuffer, GLenum buffer, GLint drawbuffer, GLfloat *value);
glClearNamedFramebufferfv_function glClearNamedFramebufferfv;

typedef void (*glClearNamedFramebufferfi_function)(GLuint framebuffer, GLenum buffer, GLint drawbuffer, GLfloat depth, GLint stencil);
glClearNamedFramebufferfi_function glClearNamedFramebufferfi;

typedef void (*glBlitNamedFramebuffer_function)(GLuint readFramebuffer, GLuint drawFramebuffer, GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter);
glBlitNamedFramebuffer_function glBlitNamedFramebuffer;

typedef GLenum  (*glCheckNamedFramebufferStatus_function)(GLuint framebuffer, GLenum target);
glCheckNamedFramebufferStatus_function glCheckNamedFramebufferStatus;

typedef void (*glGetNamedFramebufferParameteriv_function)(GLuint framebuffer, GLenum pname, GLint *param);
glGetNamedFramebufferParameteriv_function glGetNamedFramebufferParameteriv;

typedef void (*glGetNamedFramebufferAttachmentParameteriv_function)(GLuint framebuffer, GLenum attachment, GLenum pname, GLint *params);
glGetNamedFramebufferAttachmentParameteriv_function glGetNamedFramebufferAttachmentParameteriv;

typedef void (*glCreateRenderbuffers_function)(GLsizei n, GLuint *renderbuffers);
glCreateRenderbuffers_function glCreateRenderbuffers;

typedef void (*glNamedRenderbufferStorage_function)(GLuint renderbuffer, GLenum internalformat, GLsizei width, GLsizei height);
glNamedRenderbufferStorage_function glNamedRenderbufferStorage;

typedef void (*glNamedRenderbufferStorageMultisample_function)(GLuint renderbuffer, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height);
glNamedRenderbufferStorageMultisample_function glNamedRenderbufferStorageMultisample;

typedef void (*glGetNamedRenderbufferParameteriv_function)(GLuint renderbuffer, GLenum pname, GLint *params);
glGetNamedRenderbufferParameteriv_function glGetNamedRenderbufferParameteriv;

typedef void (*glCreateTextures_function)(GLenum target, GLsizei n, GLuint *textures);
glCreateTextures_function glCreateTextures;

typedef void (*glTextureBuffer_function)(GLuint texture, GLenum internalformat, GLuint buffer);
glTextureBuffer_function glTextureBuffer;

typedef void (*glTextureBufferRange_function)(GLuint texture, GLenum internalformat, GLuint buffer, GLintptr offset, GLsizeiptr size);
glTextureBufferRange_function glTextureBufferRange;

typedef void (*glTextureStorage1D_function)(GLuint texture, GLsizei levels, GLenum internalformat, GLsizei width);
glTextureStorage1D_function glTextureStorage1D;

typedef void (*glTextureStorage2D_function)(GLuint texture, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height);
glTextureStorage2D_function glTextureStorage2D;

typedef void (*glTextureStorage3D_function)(GLuint texture, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth);
glTextureStorage3D_function glTextureStorage3D;

typedef void (*glTextureStorage2DMultisample_function)(GLuint texture, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations);
glTextureStorage2DMultisample_function glTextureStorage2DMultisample;

typedef void (*glTextureStorage3DMultisample_function)(GLuint texture, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations);
glTextureStorage3DMultisample_function glTextureStorage3DMultisample;

typedef void (*glTextureSubImage1D_function)(GLuint texture, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, void * pixels);
glTextureSubImage1D_function glTextureSubImage1D;

typedef void (*glTextureSubImage2D_function)(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, void * pixels);
glTextureSubImage2D_function glTextureSubImage2D;

typedef void (*glTextureSubImage3D_function)(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, void * pixels);
glTextureSubImage3D_function glTextureSubImage3D;

typedef void (*glCompressedTextureSubImage1D_function)(GLuint texture, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, void * data);
glCompressedTextureSubImage1D_function glCompressedTextureSubImage1D;

typedef void (*glCompressedTextureSubImage2D_function)(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, void * data);
glCompressedTextureSubImage2D_function glCompressedTextureSubImage2D;

typedef void (*glCompressedTextureSubImage3D_function)(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, void * data);
glCompressedTextureSubImage3D_function glCompressedTextureSubImage3D;

typedef void (*glCopyTextureSubImage1D_function)(GLuint texture, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width);
glCopyTextureSubImage1D_function glCopyTextureSubImage1D;

typedef void (*glCopyTextureSubImage2D_function)(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height);
glCopyTextureSubImage2D_function glCopyTextureSubImage2D;

typedef void (*glCopyTextureSubImage3D_function)(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height);
glCopyTextureSubImage3D_function glCopyTextureSubImage3D;

typedef void (*glTextureParameterf_function)(GLuint texture, GLenum pname, GLfloat param);
glTextureParameterf_function glTextureParameterf;

typedef void (*glTextureParameterfv_function)(GLuint texture, GLenum pname, GLfloat *param);
glTextureParameterfv_function glTextureParameterfv;

typedef void (*glTextureParameteri_function)(GLuint texture, GLenum pname, GLint param);
glTextureParameteri_function glTextureParameteri;

typedef void (*glTextureParameterIiv_function)(GLuint texture, GLenum pname, GLint *params);
glTextureParameterIiv_function glTextureParameterIiv;

typedef void (*glTextureParameterIuiv_function)(GLuint texture, GLenum pname, GLuint *params);
glTextureParameterIuiv_function glTextureParameterIuiv;

typedef void (*glTextureParameteriv_function)(GLuint texture, GLenum pname, GLint *param);
glTextureParameteriv_function glTextureParameteriv;

typedef void (*glGenerateTextureMipmap_function)(GLuint texture);
glGenerateTextureMipmap_function glGenerateTextureMipmap;

typedef void (*glBindTextureUnit_function)(GLuint unit, GLuint texture);
glBindTextureUnit_function glBindTextureUnit;

typedef void (*glGetTextureImage_function)(GLuint texture, GLint level, GLenum format, GLenum type, GLsizei bufSize, void * pixels);
glGetTextureImage_function glGetTextureImage;

typedef void (*glGetCompressedTextureImage_function)(GLuint texture, GLint level, GLsizei bufSize, void * pixels);
glGetCompressedTextureImage_function glGetCompressedTextureImage;

typedef void (*glGetTextureLevelParameterfv_function)(GLuint texture, GLint level, GLenum pname, GLfloat *params);
glGetTextureLevelParameterfv_function glGetTextureLevelParameterfv;

typedef void (*glGetTextureLevelParameteriv_function)(GLuint texture, GLint level, GLenum pname, GLint *params);
glGetTextureLevelParameteriv_function glGetTextureLevelParameteriv;

typedef void (*glGetTextureParameterfv_function)(GLuint texture, GLenum pname, GLfloat *params);
glGetTextureParameterfv_function glGetTextureParameterfv;

typedef void (*glGetTextureParameterIiv_function)(GLuint texture, GLenum pname, GLint *params);
glGetTextureParameterIiv_function glGetTextureParameterIiv;

typedef void (*glGetTextureParameterIuiv_function)(GLuint texture, GLenum pname, GLuint *params);
glGetTextureParameterIuiv_function glGetTextureParameterIuiv;

typedef void (*glGetTextureParameteriv_function)(GLuint texture, GLenum pname, GLint *params);
glGetTextureParameteriv_function glGetTextureParameteriv;

typedef void (*glCreateVertexArrays_function)(GLsizei n, GLuint *arrays);
glCreateVertexArrays_function glCreateVertexArrays;

typedef void (*glDisableVertexArrayAttrib_function)(GLuint vaobj, GLuint index);
glDisableVertexArrayAttrib_function glDisableVertexArrayAttrib;

typedef void (*glEnableVertexArrayAttrib_function)(GLuint vaobj, GLuint index);
glEnableVertexArrayAttrib_function glEnableVertexArrayAttrib;

typedef void (*glVertexArrayElementBuffer_function)(GLuint vaobj, GLuint buffer);
glVertexArrayElementBuffer_function glVertexArrayElementBuffer;

typedef void (*glVertexArrayVertexBuffer_function)(GLuint vaobj, GLuint bindingindex, GLuint buffer, GLintptr offset, GLsizei stride);
glVertexArrayVertexBuffer_function glVertexArrayVertexBuffer;

typedef void (*glVertexArrayVertexBuffers_function)(GLuint vaobj, GLuint first, GLsizei count, GLuint *buffers, GLintptr *offsets, GLsizei *strides);
glVertexArrayVertexBuffers_function glVertexArrayVertexBuffers;

typedef void (*glVertexArrayAttribBinding_function)(GLuint vaobj, GLuint attribindex, GLuint bindingindex);
glVertexArrayAttribBinding_function glVertexArrayAttribBinding;

typedef void (*glVertexArrayAttribFormat_function)(GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLboolean normalized, GLuint relativeoffset);
glVertexArrayAttribFormat_function glVertexArrayAttribFormat;

typedef void (*glVertexArrayAttribIFormat_function)(GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset);
glVertexArrayAttribIFormat_function glVertexArrayAttribIFormat;

typedef void (*glVertexArrayAttribLFormat_function)(GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset);
glVertexArrayAttribLFormat_function glVertexArrayAttribLFormat;

typedef void (*glVertexArrayBindingDivisor_function)(GLuint vaobj, GLuint bindingindex, GLuint divisor);
glVertexArrayBindingDivisor_function glVertexArrayBindingDivisor;

typedef void (*glGetVertexArrayiv_function)(GLuint vaobj, GLenum pname, GLint *param);
glGetVertexArrayiv_function glGetVertexArrayiv;

typedef void (*glGetVertexArrayIndexediv_function)(GLuint vaobj, GLuint index, GLenum pname, GLint *param);
glGetVertexArrayIndexediv_function glGetVertexArrayIndexediv;

typedef void (*glGetVertexArrayIndexed64iv_function)(GLuint vaobj, GLuint index, GLenum pname, GLint64 *param);
glGetVertexArrayIndexed64iv_function glGetVertexArrayIndexed64iv;

typedef void (*glCreateSamplers_function)(GLsizei n, GLuint *samplers);
glCreateSamplers_function glCreateSamplers;

typedef void (*glCreateProgramPipelines_function)(GLsizei n, GLuint *pipelines);
glCreateProgramPipelines_function glCreateProgramPipelines;

typedef void (*glCreateQueries_function)(GLenum target, GLsizei n, GLuint *ids);
glCreateQueries_function glCreateQueries;

typedef void (*glGetQueryBufferObjecti64v_function)(GLuint id, GLuint buffer, GLenum pname, GLintptr offset);
glGetQueryBufferObjecti64v_function glGetQueryBufferObjecti64v;

typedef void (*glGetQueryBufferObjectiv_function)(GLuint id, GLuint buffer, GLenum pname, GLintptr offset);
glGetQueryBufferObjectiv_function glGetQueryBufferObjectiv;

typedef void (*glGetQueryBufferObjectui64v_function)(GLuint id, GLuint buffer, GLenum pname, GLintptr offset);
glGetQueryBufferObjectui64v_function glGetQueryBufferObjectui64v;

typedef void (*glGetQueryBufferObjectuiv_function)(GLuint id, GLuint buffer, GLenum pname, GLintptr offset);
glGetQueryBufferObjectuiv_function glGetQueryBufferObjectuiv;

typedef void (*glMemoryBarrierByRegion_function)(GLbitfield barriers);
glMemoryBarrierByRegion_function glMemoryBarrierByRegion;

typedef void (*glGetTextureSubImage_function)(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, GLsizei bufSize, void * pixels);
glGetTextureSubImage_function glGetTextureSubImage;

typedef void (*glGetCompressedTextureSubImage_function)(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLsizei bufSize, void * pixels);
glGetCompressedTextureSubImage_function glGetCompressedTextureSubImage;

typedef GLenum  (*glGetGraphicsResetStatus_function)();
glGetGraphicsResetStatus_function glGetGraphicsResetStatus;

typedef void (*glGetnCompressedTexImage_function)(GLenum target, GLint lod, GLsizei bufSize, void * pixels);
glGetnCompressedTexImage_function glGetnCompressedTexImage;

typedef void (*glGetnTexImage_function)(GLenum target, GLint level, GLenum format, GLenum type, GLsizei bufSize, void * pixels);
glGetnTexImage_function glGetnTexImage;

typedef void (*glGetnUniformdv_function)(GLuint program, GLint location, GLsizei bufSize, GLdouble *params);
glGetnUniformdv_function glGetnUniformdv;

typedef void (*glGetnUniformfv_function)(GLuint program, GLint location, GLsizei bufSize, GLfloat *params);
glGetnUniformfv_function glGetnUniformfv;

typedef void (*glGetnUniformiv_function)(GLuint program, GLint location, GLsizei bufSize, GLint *params);
glGetnUniformiv_function glGetnUniformiv;

typedef void (*glGetnUniformuiv_function)(GLuint program, GLint location, GLsizei bufSize, GLuint *params);
glGetnUniformuiv_function glGetnUniformuiv;

typedef void (*glReadnPixels_function)(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLsizei bufSize, void * data);
glReadnPixels_function glReadnPixels;

typedef void (*glGetnMapdv_function)(GLenum target, GLenum query, GLsizei bufSize, GLdouble *v);
glGetnMapdv_function glGetnMapdv;

typedef void (*glGetnMapfv_function)(GLenum target, GLenum query, GLsizei bufSize, GLfloat *v);
glGetnMapfv_function glGetnMapfv;

typedef void (*glGetnMapiv_function)(GLenum target, GLenum query, GLsizei bufSize, GLint *v);
glGetnMapiv_function glGetnMapiv;

typedef void (*glGetnPixelMapfv_function)(GLenum map, GLsizei bufSize, GLfloat *values);
glGetnPixelMapfv_function glGetnPixelMapfv;

typedef void (*glGetnPixelMapuiv_function)(GLenum map, GLsizei bufSize, GLuint *values);
glGetnPixelMapuiv_function glGetnPixelMapuiv;

typedef void (*glGetnPixelMapusv_function)(GLenum map, GLsizei bufSize, GLushort *values);
glGetnPixelMapusv_function glGetnPixelMapusv;

typedef void (*glGetnPolygonStipple_function)(GLsizei bufSize, GLubyte *pattern);
glGetnPolygonStipple_function glGetnPolygonStipple;

typedef void (*glGetnColorTable_function)(GLenum target, GLenum format, GLenum type, GLsizei bufSize, void * table);
glGetnColorTable_function glGetnColorTable;

typedef void (*glGetnConvolutionFilter_function)(GLenum target, GLenum format, GLenum type, GLsizei bufSize, void * image);
glGetnConvolutionFilter_function glGetnConvolutionFilter;

typedef void (*glGetnSeparableFilter_function)(GLenum target, GLenum format, GLenum type, GLsizei rowBufSize, void * row, GLsizei columnBufSize, void * column, void * span);
glGetnSeparableFilter_function glGetnSeparableFilter;

typedef void (*glGetnHistogram_function)(GLenum target, GLboolean reset, GLenum format, GLenum type, GLsizei bufSize, void * values);
glGetnHistogram_function glGetnHistogram;

typedef void (*glGetnMinmax_function)(GLenum target, GLboolean reset, GLenum format, GLenum type, GLsizei bufSize, void * values);
glGetnMinmax_function glGetnMinmax;

typedef void (*glTextureBarrier_function)();
glTextureBarrier_function glTextureBarrier;
#define GL_VERSION_4_6 1
#define GL_SHADER_BINARY_FORMAT_SPIR_V 0x9551
#define GL_SPIR_V_BINARY 0x9552
#define GL_PARAMETER_BUFFER 0x80EE
#define GL_PARAMETER_BUFFER_BINDING 0x80EF
#define GL_CONTEXT_FLAG_NO_ERROR_BIT 0x00000008
#define GL_VERTICES_SUBMITTED 0x82EE
#define GL_PRIMITIVES_SUBMITTED 0x82EF
#define GL_VERTEX_SHADER_INVOCATIONS 0x82F0
#define GL_TESS_CONTROL_SHADER_PATCHES 0x82F1
#define GL_TESS_EVALUATION_SHADER_INVOCATIONS 0x82F2
#define GL_GEOMETRY_SHADER_PRIMITIVES_EMITTED 0x82F3
#define GL_FRAGMENT_SHADER_INVOCATIONS 0x82F4
#define GL_COMPUTE_SHADER_INVOCATIONS 0x82F5
#define GL_CLIPPING_INPUT_PRIMITIVES 0x82F6
#define GL_CLIPPING_OUTPUT_PRIMITIVES 0x82F7
#define GL_POLYGON_OFFSET_CLAMP 0x8E1B
#define GL_SPIR_V_EXTENSIONS 0x9553
#define GL_NUM_SPIR_V_EXTENSIONS 0x9554
#define GL_TEXTURE_MAX_ANISOTROPY 0x84FE
#define GL_MAX_TEXTURE_MAX_ANISOTROPY 0x84FF
#define GL_TRANSFORM_FEEDBACK_OVERFLOW 0x82EC
#define GL_TRANSFORM_FEEDBACK_STREAM_OVERFLOW 0x82ED

typedef void (*glSpecializeShader_function)(GLuint shader, GLchar *pEntryPoint, GLuint numSpecializationConstants, GLuint *pConstantIndex, GLuint *pConstantValue);
glSpecializeShader_function glSpecializeShader;

typedef void (*glMultiDrawArraysIndirectCount_function)(GLenum mode, void * indirect, GLintptr drawcount, GLsizei maxdrawcount, GLsizei stride);
glMultiDrawArraysIndirectCount_function glMultiDrawArraysIndirectCount;

typedef void (*glMultiDrawElementsIndirectCount_function)(GLenum mode, GLenum type, void * indirect, GLintptr drawcount, GLsizei maxdrawcount, GLsizei stride);
glMultiDrawElementsIndirectCount_function glMultiDrawElementsIndirectCount;

typedef void (*glPolygonOffsetClamp_function)(GLfloat factor, GLfloat units, GLfloat clamp);
glPolygonOffsetClamp_function glPolygonOffsetClamp;
#define GL_ARB_ES2_compatibility 1
#define GL_ARB_ES3_1_compatibility 1
#define GL_ARB_ES3_2_compatibility 1
#define GL_PRIMITIVE_BOUNDING_BOX_ARB 0x92BE
#define GL_MULTISAMPLE_LINE_WIDTH_RANGE_ARB 0x9381
#define GL_MULTISAMPLE_LINE_WIDTH_GRANULARITY_ARB 0x9382

typedef void (*glPrimitiveBoundingBoxARB_function)(GLfloat minX, GLfloat minY, GLfloat minZ, GLfloat minW, GLfloat maxX, GLfloat maxY, GLfloat maxZ, GLfloat maxW);
glPrimitiveBoundingBoxARB_function glPrimitiveBoundingBoxARB;
#define GL_ARB_ES3_compatibility 1
#define GL_ARB_arrays_of_arrays 1
#define GL_ARB_base_instance 1
#define GL_ARB_bindless_texture 1
#define GL_UNSIGNED_INT64_ARB 0x140F

typedef GLuint64  (*glGetTextureHandleARB_function)(GLuint texture);
glGetTextureHandleARB_function glGetTextureHandleARB;

typedef GLuint64  (*glGetTextureSamplerHandleARB_function)(GLuint texture, GLuint sampler);
glGetTextureSamplerHandleARB_function glGetTextureSamplerHandleARB;

typedef void (*glMakeTextureHandleResidentARB_function)(GLuint64 handle);
glMakeTextureHandleResidentARB_function glMakeTextureHandleResidentARB;

typedef void (*glMakeTextureHandleNonResidentARB_function)(GLuint64 handle);
glMakeTextureHandleNonResidentARB_function glMakeTextureHandleNonResidentARB;

typedef GLuint64  (*glGetImageHandleARB_function)(GLuint texture, GLint level, GLboolean layered, GLint layer, GLenum format);
glGetImageHandleARB_function glGetImageHandleARB;

typedef void (*glMakeImageHandleResidentARB_function)(GLuint64 handle, GLenum access);
glMakeImageHandleResidentARB_function glMakeImageHandleResidentARB;

typedef void (*glMakeImageHandleNonResidentARB_function)(GLuint64 handle);
glMakeImageHandleNonResidentARB_function glMakeImageHandleNonResidentARB;

typedef void (*glUniformHandleui64ARB_function)(GLint location, GLuint64 value);
glUniformHandleui64ARB_function glUniformHandleui64ARB;

typedef void (*glUniformHandleui64vARB_function)(GLint location, GLsizei count, GLuint64 *value);
glUniformHandleui64vARB_function glUniformHandleui64vARB;

typedef void (*glProgramUniformHandleui64ARB_function)(GLuint program, GLint location, GLuint64 value);
glProgramUniformHandleui64ARB_function glProgramUniformHandleui64ARB;

typedef void (*glProgramUniformHandleui64vARB_function)(GLuint program, GLint location, GLsizei count, GLuint64 *values);
glProgramUniformHandleui64vARB_function glProgramUniformHandleui64vARB;

typedef GLboolean  (*glIsTextureHandleResidentARB_function)(GLuint64 handle);
glIsTextureHandleResidentARB_function glIsTextureHandleResidentARB;

typedef GLboolean  (*glIsImageHandleResidentARB_function)(GLuint64 handle);
glIsImageHandleResidentARB_function glIsImageHandleResidentARB;

typedef void (*glVertexAttribL1ui64ARB_function)(GLuint index, GLuint64EXT x);
glVertexAttribL1ui64ARB_function glVertexAttribL1ui64ARB;

typedef void (*glVertexAttribL1ui64vARB_function)(GLuint index, GLuint64EXT *v);
glVertexAttribL1ui64vARB_function glVertexAttribL1ui64vARB;

typedef void (*glGetVertexAttribLui64vARB_function)(GLuint index, GLenum pname, GLuint64EXT *params);
glGetVertexAttribLui64vARB_function glGetVertexAttribLui64vARB;
#define GL_ARB_blend_func_extended 1
#define GL_ARB_buffer_storage 1
#define GL_ARB_cl_event 1
#define GL_SYNC_CL_EVENT_ARB 0x8240
#define GL_SYNC_CL_EVENT_COMPLETE_ARB 0x8241

typedef GLsync  (*glCreateSyncFromCLeventARB_function)(_cl_context *context, _cl_event *event, GLbitfield flags);
glCreateSyncFromCLeventARB_function glCreateSyncFromCLeventARB;
#define GL_ARB_clear_buffer_object 1
#define GL_ARB_clear_texture 1
#define GL_ARB_clip_control 1
#define GL_ARB_color_buffer_float 1
#define GL_RGBA_FLOAT_MODE_ARB 0x8820
#define GL_CLAMP_VERTEX_COLOR_ARB 0x891A
#define GL_CLAMP_FRAGMENT_COLOR_ARB 0x891B
#define GL_CLAMP_READ_COLOR_ARB 0x891C
#define GL_FIXED_ONLY_ARB 0x891D

typedef void (*glClampColorARB_function)(GLenum target, GLenum clamp);
glClampColorARB_function glClampColorARB;
#define GL_ARB_compatibility 1
#define GL_ARB_compressed_texture_pixel_storage 1
#define GL_ARB_compute_shader 1
#define GL_ARB_compute_variable_group_size 1
#define GL_MAX_COMPUTE_VARIABLE_GROUP_INVOCATIONS_ARB 0x9344
#define GL_MAX_COMPUTE_FIXED_GROUP_INVOCATIONS_ARB 0x90EB
#define GL_MAX_COMPUTE_VARIABLE_GROUP_SIZE_ARB 0x9345
#define GL_MAX_COMPUTE_FIXED_GROUP_SIZE_ARB 0x91BF

typedef void (*glDispatchComputeGroupSizeARB_function)(GLuint num_groups_x, GLuint num_groups_y, GLuint num_groups_z, GLuint group_size_x, GLuint group_size_y, GLuint group_size_z);
glDispatchComputeGroupSizeARB_function glDispatchComputeGroupSizeARB;
#define GL_ARB_conditional_render_inverted 1
#define GL_ARB_conservative_depth 1
#define GL_ARB_copy_buffer 1
#define GL_ARB_copy_image 1
#define GL_ARB_cull_distance 1
#define GL_ARB_debug_output 1

typedef void (*GLDEBUGPROCARB)(GLenum source, GLenum type, GLuint id, GLenum severity, GLsizei length, GLchar *message, void * userParam);
#define GL_DEBUG_OUTPUT_SYNCHRONOUS_ARB 0x8242
#define GL_DEBUG_NEXT_LOGGED_MESSAGE_LENGTH_ARB 0x8243
#define GL_DEBUG_CALLBACK_FUNCTION_ARB 0x8244
#define GL_DEBUG_CALLBACK_USER_PARAM_ARB 0x8245
#define GL_DEBUG_SOURCE_API_ARB 0x8246
#define GL_DEBUG_SOURCE_WINDOW_SYSTEM_ARB 0x8247
#define GL_DEBUG_SOURCE_SHADER_COMPILER_ARB 0x8248
#define GL_DEBUG_SOURCE_THIRD_PARTY_ARB 0x8249
#define GL_DEBUG_SOURCE_APPLICATION_ARB 0x824A
#define GL_DEBUG_SOURCE_OTHER_ARB 0x824B
#define GL_DEBUG_TYPE_ERROR_ARB 0x824C
#define GL_DEBUG_TYPE_DEPRECATED_BEHAVIOR_ARB 0x824D
#define GL_DEBUG_TYPE_UNDEFINED_BEHAVIOR_ARB 0x824E
#define GL_DEBUG_TYPE_PORTABILITY_ARB 0x824F
#define GL_DEBUG_TYPE_PERFORMANCE_ARB 0x8250
#define GL_DEBUG_TYPE_OTHER_ARB 0x8251
#define GL_MAX_DEBUG_MESSAGE_LENGTH_ARB 0x9143
#define GL_MAX_DEBUG_LOGGED_MESSAGES_ARB 0x9144
#define GL_DEBUG_LOGGED_MESSAGES_ARB 0x9145
#define GL_DEBUG_SEVERITY_HIGH_ARB 0x9146
#define GL_DEBUG_SEVERITY_MEDIUM_ARB 0x9147
#define GL_DEBUG_SEVERITY_LOW_ARB 0x9148

typedef void (*glDebugMessageControlARB_function)(GLenum source, GLenum type, GLenum severity, GLsizei count, GLuint *ids, GLboolean enabled);
glDebugMessageControlARB_function glDebugMessageControlARB;

typedef void (*glDebugMessageInsertARB_function)(GLenum source, GLenum type, GLuint id, GLenum severity, GLsizei length, GLchar *buf);
glDebugMessageInsertARB_function glDebugMessageInsertARB;

typedef void (*glDebugMessageCallbackARB_function)(GLDEBUGPROCARB callback, void * userParam);
glDebugMessageCallbackARB_function glDebugMessageCallbackARB;

typedef GLuint  (*glGetDebugMessageLogARB_function)(GLuint count, GLsizei bufSize, GLenum *sources, GLenum *types, GLuint *ids, GLenum *severities, GLsizei *lengths, GLchar *messageLog);
glGetDebugMessageLogARB_function glGetDebugMessageLogARB;
#define GL_ARB_depth_buffer_float 1
#define GL_ARB_depth_clamp 1
#define GL_ARB_depth_texture 1
#define GL_DEPTH_COMPONENT16_ARB 0x81A5
#define GL_DEPTH_COMPONENT24_ARB 0x81A6
#define GL_DEPTH_COMPONENT32_ARB 0x81A7
#define GL_TEXTURE_DEPTH_SIZE_ARB 0x884A
#define GL_DEPTH_TEXTURE_MODE_ARB 0x884B
#define GL_ARB_derivative_control 1
#define GL_ARB_direct_state_access 1
#define GL_ARB_draw_buffers 1
#define GL_MAX_DRAW_BUFFERS_ARB 0x8824
#define GL_DRAW_BUFFER0_ARB 0x8825
#define GL_DRAW_BUFFER1_ARB 0x8826
#define GL_DRAW_BUFFER2_ARB 0x8827
#define GL_DRAW_BUFFER3_ARB 0x8828
#define GL_DRAW_BUFFER4_ARB 0x8829
#define GL_DRAW_BUFFER5_ARB 0x882A
#define GL_DRAW_BUFFER6_ARB 0x882B
#define GL_DRAW_BUFFER7_ARB 0x882C
#define GL_DRAW_BUFFER8_ARB 0x882D
#define GL_DRAW_BUFFER9_ARB 0x882E
#define GL_DRAW_BUFFER10_ARB 0x882F
#define GL_DRAW_BUFFER11_ARB 0x8830
#define GL_DRAW_BUFFER12_ARB 0x8831
#define GL_DRAW_BUFFER13_ARB 0x8832
#define GL_DRAW_BUFFER14_ARB 0x8833
#define GL_DRAW_BUFFER15_ARB 0x8834

typedef void (*glDrawBuffersARB_function)(GLsizei n, GLenum *bufs);
glDrawBuffersARB_function glDrawBuffersARB;
#define GL_ARB_draw_buffers_blend 1

typedef void (*glBlendEquationiARB_function)(GLuint buf, GLenum mode);
glBlendEquationiARB_function glBlendEquationiARB;

typedef void (*glBlendEquationSeparateiARB_function)(GLuint buf, GLenum modeRGB, GLenum modeAlpha);
glBlendEquationSeparateiARB_function glBlendEquationSeparateiARB;

typedef void (*glBlendFunciARB_function)(GLuint buf, GLenum src, GLenum dst);
glBlendFunciARB_function glBlendFunciARB;

typedef void (*glBlendFuncSeparateiARB_function)(GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha);
glBlendFuncSeparateiARB_function glBlendFuncSeparateiARB;
#define GL_ARB_draw_elements_base_vertex 1
#define GL_ARB_draw_indirect 1
#define GL_ARB_draw_instanced 1

typedef void (*glDrawArraysInstancedARB_function)(GLenum mode, GLint first, GLsizei count, GLsizei primcount);
glDrawArraysInstancedARB_function glDrawArraysInstancedARB;

typedef void (*glDrawElementsInstancedARB_function)(GLenum mode, GLsizei count, GLenum type, void * indices, GLsizei primcount);
glDrawElementsInstancedARB_function glDrawElementsInstancedARB;
#define GL_ARB_enhanced_layouts 1
#define GL_ARB_explicit_attrib_location 1
#define GL_ARB_explicit_uniform_location 1
#define GL_ARB_fragment_coord_conventions 1
#define GL_ARB_fragment_layer_viewport 1
#define GL_ARB_fragment_program 1
#define GL_FRAGMENT_PROGRAM_ARB 0x8804
#define GL_PROGRAM_FORMAT_ASCII_ARB 0x8875
#define GL_PROGRAM_LENGTH_ARB 0x8627
#define GL_PROGRAM_FORMAT_ARB 0x8876
#define GL_PROGRAM_BINDING_ARB 0x8677
#define GL_PROGRAM_INSTRUCTIONS_ARB 0x88A0
#define GL_MAX_PROGRAM_INSTRUCTIONS_ARB 0x88A1
#define GL_PROGRAM_NATIVE_INSTRUCTIONS_ARB 0x88A2
#define GL_MAX_PROGRAM_NATIVE_INSTRUCTIONS_ARB 0x88A3
#define GL_PROGRAM_TEMPORARIES_ARB 0x88A4
#define GL_MAX_PROGRAM_TEMPORARIES_ARB 0x88A5
#define GL_PROGRAM_NATIVE_TEMPORARIES_ARB 0x88A6
#define GL_MAX_PROGRAM_NATIVE_TEMPORARIES_ARB 0x88A7
#define GL_PROGRAM_PARAMETERS_ARB 0x88A8
#define GL_MAX_PROGRAM_PARAMETERS_ARB 0x88A9
#define GL_PROGRAM_NATIVE_PARAMETERS_ARB 0x88AA
#define GL_MAX_PROGRAM_NATIVE_PARAMETERS_ARB 0x88AB
#define GL_PROGRAM_ATTRIBS_ARB 0x88AC
#define GL_MAX_PROGRAM_ATTRIBS_ARB 0x88AD
#define GL_PROGRAM_NATIVE_ATTRIBS_ARB 0x88AE
#define GL_MAX_PROGRAM_NATIVE_ATTRIBS_ARB 0x88AF
#define GL_MAX_PROGRAM_LOCAL_PARAMETERS_ARB 0x88B4
#define GL_MAX_PROGRAM_ENV_PARAMETERS_ARB 0x88B5
#define GL_PROGRAM_UNDER_NATIVE_LIMITS_ARB 0x88B6
#define GL_PROGRAM_ALU_INSTRUCTIONS_ARB 0x8805
#define GL_PROGRAM_TEX_INSTRUCTIONS_ARB 0x8806
#define GL_PROGRAM_TEX_INDIRECTIONS_ARB 0x8807
#define GL_PROGRAM_NATIVE_ALU_INSTRUCTIONS_ARB 0x8808
#define GL_PROGRAM_NATIVE_TEX_INSTRUCTIONS_ARB 0x8809
#define GL_PROGRAM_NATIVE_TEX_INDIRECTIONS_ARB 0x880A
#define GL_MAX_PROGRAM_ALU_INSTRUCTIONS_ARB 0x880B
#define GL_MAX_PROGRAM_TEX_INSTRUCTIONS_ARB 0x880C
#define GL_MAX_PROGRAM_TEX_INDIRECTIONS_ARB 0x880D
#define GL_MAX_PROGRAM_NATIVE_ALU_INSTRUCTIONS_ARB 0x880E
#define GL_MAX_PROGRAM_NATIVE_TEX_INSTRUCTIONS_ARB 0x880F
#define GL_MAX_PROGRAM_NATIVE_TEX_INDIRECTIONS_ARB 0x8810
#define GL_PROGRAM_STRING_ARB 0x8628
#define GL_PROGRAM_ERROR_POSITION_ARB 0x864B
#define GL_CURRENT_MATRIX_ARB 0x8641
#define GL_TRANSPOSE_CURRENT_MATRIX_ARB 0x88B7
#define GL_CURRENT_MATRIX_STACK_DEPTH_ARB 0x8640
#define GL_MAX_PROGRAM_MATRICES_ARB 0x862F
#define GL_MAX_PROGRAM_MATRIX_STACK_DEPTH_ARB 0x862E
#define GL_MAX_TEXTURE_COORDS_ARB 0x8871
#define GL_MAX_TEXTURE_IMAGE_UNITS_ARB 0x8872
#define GL_PROGRAM_ERROR_STRING_ARB 0x8874
#define GL_MATRIX0_ARB 0x88C0
#define GL_MATRIX1_ARB 0x88C1
#define GL_MATRIX2_ARB 0x88C2
#define GL_MATRIX3_ARB 0x88C3
#define GL_MATRIX4_ARB 0x88C4
#define GL_MATRIX5_ARB 0x88C5
#define GL_MATRIX6_ARB 0x88C6
#define GL_MATRIX7_ARB 0x88C7
#define GL_MATRIX8_ARB 0x88C8
#define GL_MATRIX9_ARB 0x88C9
#define GL_MATRIX10_ARB 0x88CA
#define GL_MATRIX11_ARB 0x88CB
#define GL_MATRIX12_ARB 0x88CC
#define GL_MATRIX13_ARB 0x88CD
#define GL_MATRIX14_ARB 0x88CE
#define GL_MATRIX15_ARB 0x88CF
#define GL_MATRIX16_ARB 0x88D0
#define GL_MATRIX17_ARB 0x88D1
#define GL_MATRIX18_ARB 0x88D2
#define GL_MATRIX19_ARB 0x88D3
#define GL_MATRIX20_ARB 0x88D4
#define GL_MATRIX21_ARB 0x88D5
#define GL_MATRIX22_ARB 0x88D6
#define GL_MATRIX23_ARB 0x88D7
#define GL_MATRIX24_ARB 0x88D8
#define GL_MATRIX25_ARB 0x88D9
#define GL_MATRIX26_ARB 0x88DA
#define GL_MATRIX27_ARB 0x88DB
#define GL_MATRIX28_ARB 0x88DC
#define GL_MATRIX29_ARB 0x88DD
#define GL_MATRIX30_ARB 0x88DE
#define GL_MATRIX31_ARB 0x88DF

typedef void (*glProgramStringARB_function)(GLenum target, GLenum format, GLsizei len, void * string);
glProgramStringARB_function glProgramStringARB;

typedef void (*glBindProgramARB_function)(GLenum target, GLuint program);
glBindProgramARB_function glBindProgramARB;

typedef void (*glDeleteProgramsARB_function)(GLsizei n, GLuint *programs);
glDeleteProgramsARB_function glDeleteProgramsARB;

typedef void (*glGenProgramsARB_function)(GLsizei n, GLuint *programs);
glGenProgramsARB_function glGenProgramsARB;

typedef void (*glProgramEnvParameter4dARB_function)(GLenum target, GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
glProgramEnvParameter4dARB_function glProgramEnvParameter4dARB;

typedef void (*glProgramEnvParameter4dvARB_function)(GLenum target, GLuint index, GLdouble *params);
glProgramEnvParameter4dvARB_function glProgramEnvParameter4dvARB;

typedef void (*glProgramEnvParameter4fARB_function)(GLenum target, GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
glProgramEnvParameter4fARB_function glProgramEnvParameter4fARB;

typedef void (*glProgramEnvParameter4fvARB_function)(GLenum target, GLuint index, GLfloat *params);
glProgramEnvParameter4fvARB_function glProgramEnvParameter4fvARB;

typedef void (*glProgramLocalParameter4dARB_function)(GLenum target, GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
glProgramLocalParameter4dARB_function glProgramLocalParameter4dARB;

typedef void (*glProgramLocalParameter4dvARB_function)(GLenum target, GLuint index, GLdouble *params);
glProgramLocalParameter4dvARB_function glProgramLocalParameter4dvARB;

typedef void (*glProgramLocalParameter4fARB_function)(GLenum target, GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
glProgramLocalParameter4fARB_function glProgramLocalParameter4fARB;

typedef void (*glProgramLocalParameter4fvARB_function)(GLenum target, GLuint index, GLfloat *params);
glProgramLocalParameter4fvARB_function glProgramLocalParameter4fvARB;

typedef void (*glGetProgramEnvParameterdvARB_function)(GLenum target, GLuint index, GLdouble *params);
glGetProgramEnvParameterdvARB_function glGetProgramEnvParameterdvARB;

typedef void (*glGetProgramEnvParameterfvARB_function)(GLenum target, GLuint index, GLfloat *params);
glGetProgramEnvParameterfvARB_function glGetProgramEnvParameterfvARB;

typedef void (*glGetProgramLocalParameterdvARB_function)(GLenum target, GLuint index, GLdouble *params);
glGetProgramLocalParameterdvARB_function glGetProgramLocalParameterdvARB;

typedef void (*glGetProgramLocalParameterfvARB_function)(GLenum target, GLuint index, GLfloat *params);
glGetProgramLocalParameterfvARB_function glGetProgramLocalParameterfvARB;

typedef void (*glGetProgramivARB_function)(GLenum target, GLenum pname, GLint *params);
glGetProgramivARB_function glGetProgramivARB;

typedef void (*glGetProgramStringARB_function)(GLenum target, GLenum pname, void * string);
glGetProgramStringARB_function glGetProgramStringARB;

typedef GLboolean  (*glIsProgramARB_function)(GLuint program);
glIsProgramARB_function glIsProgramARB;
#define GL_ARB_fragment_program_shadow 1
#define GL_ARB_fragment_shader 1
#define GL_FRAGMENT_SHADER_ARB 0x8B30
#define GL_MAX_FRAGMENT_UNIFORM_COMPONENTS_ARB 0x8B49
#define GL_FRAGMENT_SHADER_DERIVATIVE_HINT_ARB 0x8B8B
#define GL_ARB_fragment_shader_interlock 1
#define GL_ARB_framebuffer_no_attachments 1
#define GL_ARB_framebuffer_object 1
#define GL_ARB_framebuffer_sRGB 1
#define GL_ARB_geometry_shader4 1
#define GL_LINES_ADJACENCY_ARB 0x000A
#define GL_LINE_STRIP_ADJACENCY_ARB 0x000B
#define GL_TRIANGLES_ADJACENCY_ARB 0x000C
#define GL_TRIANGLE_STRIP_ADJACENCY_ARB 0x000D
#define GL_PROGRAM_POINT_SIZE_ARB 0x8642
#define GL_MAX_GEOMETRY_TEXTURE_IMAGE_UNITS_ARB 0x8C29
#define GL_FRAMEBUFFER_ATTACHMENT_LAYERED_ARB 0x8DA7
#define GL_FRAMEBUFFER_INCOMPLETE_LAYER_TARGETS_ARB 0x8DA8
#define GL_FRAMEBUFFER_INCOMPLETE_LAYER_COUNT_ARB 0x8DA9
#define GL_GEOMETRY_SHADER_ARB 0x8DD9
#define GL_GEOMETRY_VERTICES_OUT_ARB 0x8DDA
#define GL_GEOMETRY_INPUT_TYPE_ARB 0x8DDB
#define GL_GEOMETRY_OUTPUT_TYPE_ARB 0x8DDC
#define GL_MAX_GEOMETRY_VARYING_COMPONENTS_ARB 0x8DDD
#define GL_MAX_VERTEX_VARYING_COMPONENTS_ARB 0x8DDE
#define GL_MAX_GEOMETRY_UNIFORM_COMPONENTS_ARB 0x8DDF
#define GL_MAX_GEOMETRY_OUTPUT_VERTICES_ARB 0x8DE0
#define GL_MAX_GEOMETRY_TOTAL_OUTPUT_COMPONENTS_ARB 0x8DE1

typedef void (*glProgramParameteriARB_function)(GLuint program, GLenum pname, GLint value);
glProgramParameteriARB_function glProgramParameteriARB;

typedef void (*glFramebufferTextureARB_function)(GLenum target, GLenum attachment, GLuint texture, GLint level);
glFramebufferTextureARB_function glFramebufferTextureARB;

typedef void (*glFramebufferTextureLayerARB_function)(GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer);
glFramebufferTextureLayerARB_function glFramebufferTextureLayerARB;

typedef void (*glFramebufferTextureFaceARB_function)(GLenum target, GLenum attachment, GLuint texture, GLint level, GLenum face);
glFramebufferTextureFaceARB_function glFramebufferTextureFaceARB;
#define GL_ARB_get_program_binary 1
#define GL_ARB_get_texture_sub_image 1
#define GL_ARB_gl_spirv 1
#define GL_SHADER_BINARY_FORMAT_SPIR_V_ARB 0x9551
#define GL_SPIR_V_BINARY_ARB 0x9552

typedef void (*glSpecializeShaderARB_function)(GLuint shader, GLchar *pEntryPoint, GLuint numSpecializationConstants, GLuint *pConstantIndex, GLuint *pConstantValue);
glSpecializeShaderARB_function glSpecializeShaderARB;
#define GL_ARB_gpu_shader5 1
#define GL_ARB_gpu_shader_fp64 1
#define GL_ARB_gpu_shader_int64 1
#define GL_INT64_ARB 0x140E
#define GL_INT64_VEC2_ARB 0x8FE9
#define GL_INT64_VEC3_ARB 0x8FEA
#define GL_INT64_VEC4_ARB 0x8FEB
#define GL_UNSIGNED_INT64_VEC2_ARB 0x8FF5
#define GL_UNSIGNED_INT64_VEC3_ARB 0x8FF6
#define GL_UNSIGNED_INT64_VEC4_ARB 0x8FF7

typedef void (*glUniform1i64ARB_function)(GLint location, GLint64 x);
glUniform1i64ARB_function glUniform1i64ARB;

typedef void (*glUniform2i64ARB_function)(GLint location, GLint64 x, GLint64 y);
glUniform2i64ARB_function glUniform2i64ARB;

typedef void (*glUniform3i64ARB_function)(GLint location, GLint64 x, GLint64 y, GLint64 z);
glUniform3i64ARB_function glUniform3i64ARB;

typedef void (*glUniform4i64ARB_function)(GLint location, GLint64 x, GLint64 y, GLint64 z, GLint64 w);
glUniform4i64ARB_function glUniform4i64ARB;

typedef void (*glUniform1i64vARB_function)(GLint location, GLsizei count, GLint64 *value);
glUniform1i64vARB_function glUniform1i64vARB;

typedef void (*glUniform2i64vARB_function)(GLint location, GLsizei count, GLint64 *value);
glUniform2i64vARB_function glUniform2i64vARB;

typedef void (*glUniform3i64vARB_function)(GLint location, GLsizei count, GLint64 *value);
glUniform3i64vARB_function glUniform3i64vARB;

typedef void (*glUniform4i64vARB_function)(GLint location, GLsizei count, GLint64 *value);
glUniform4i64vARB_function glUniform4i64vARB;

typedef void (*glUniform1ui64ARB_function)(GLint location, GLuint64 x);
glUniform1ui64ARB_function glUniform1ui64ARB;

typedef void (*glUniform2ui64ARB_function)(GLint location, GLuint64 x, GLuint64 y);
glUniform2ui64ARB_function glUniform2ui64ARB;

typedef void (*glUniform3ui64ARB_function)(GLint location, GLuint64 x, GLuint64 y, GLuint64 z);
glUniform3ui64ARB_function glUniform3ui64ARB;

typedef void (*glUniform4ui64ARB_function)(GLint location, GLuint64 x, GLuint64 y, GLuint64 z, GLuint64 w);
glUniform4ui64ARB_function glUniform4ui64ARB;

typedef void (*glUniform1ui64vARB_function)(GLint location, GLsizei count, GLuint64 *value);
glUniform1ui64vARB_function glUniform1ui64vARB;

typedef void (*glUniform2ui64vARB_function)(GLint location, GLsizei count, GLuint64 *value);
glUniform2ui64vARB_function glUniform2ui64vARB;

typedef void (*glUniform3ui64vARB_function)(GLint location, GLsizei count, GLuint64 *value);
glUniform3ui64vARB_function glUniform3ui64vARB;

typedef void (*glUniform4ui64vARB_function)(GLint location, GLsizei count, GLuint64 *value);
glUniform4ui64vARB_function glUniform4ui64vARB;

typedef void (*glGetUniformi64vARB_function)(GLuint program, GLint location, GLint64 *params);
glGetUniformi64vARB_function glGetUniformi64vARB;

typedef void (*glGetUniformui64vARB_function)(GLuint program, GLint location, GLuint64 *params);
glGetUniformui64vARB_function glGetUniformui64vARB;

typedef void (*glGetnUniformi64vARB_function)(GLuint program, GLint location, GLsizei bufSize, GLint64 *params);
glGetnUniformi64vARB_function glGetnUniformi64vARB;

typedef void (*glGetnUniformui64vARB_function)(GLuint program, GLint location, GLsizei bufSize, GLuint64 *params);
glGetnUniformui64vARB_function glGetnUniformui64vARB;

typedef void (*glProgramUniform1i64ARB_function)(GLuint program, GLint location, GLint64 x);
glProgramUniform1i64ARB_function glProgramUniform1i64ARB;

typedef void (*glProgramUniform2i64ARB_function)(GLuint program, GLint location, GLint64 x, GLint64 y);
glProgramUniform2i64ARB_function glProgramUniform2i64ARB;

typedef void (*glProgramUniform3i64ARB_function)(GLuint program, GLint location, GLint64 x, GLint64 y, GLint64 z);
glProgramUniform3i64ARB_function glProgramUniform3i64ARB;

typedef void (*glProgramUniform4i64ARB_function)(GLuint program, GLint location, GLint64 x, GLint64 y, GLint64 z, GLint64 w);
glProgramUniform4i64ARB_function glProgramUniform4i64ARB;

typedef void (*glProgramUniform1i64vARB_function)(GLuint program, GLint location, GLsizei count, GLint64 *value);
glProgramUniform1i64vARB_function glProgramUniform1i64vARB;

typedef void (*glProgramUniform2i64vARB_function)(GLuint program, GLint location, GLsizei count, GLint64 *value);
glProgramUniform2i64vARB_function glProgramUniform2i64vARB;

typedef void (*glProgramUniform3i64vARB_function)(GLuint program, GLint location, GLsizei count, GLint64 *value);
glProgramUniform3i64vARB_function glProgramUniform3i64vARB;

typedef void (*glProgramUniform4i64vARB_function)(GLuint program, GLint location, GLsizei count, GLint64 *value);
glProgramUniform4i64vARB_function glProgramUniform4i64vARB;

typedef void (*glProgramUniform1ui64ARB_function)(GLuint program, GLint location, GLuint64 x);
glProgramUniform1ui64ARB_function glProgramUniform1ui64ARB;

typedef void (*glProgramUniform2ui64ARB_function)(GLuint program, GLint location, GLuint64 x, GLuint64 y);
glProgramUniform2ui64ARB_function glProgramUniform2ui64ARB;

typedef void (*glProgramUniform3ui64ARB_function)(GLuint program, GLint location, GLuint64 x, GLuint64 y, GLuint64 z);
glProgramUniform3ui64ARB_function glProgramUniform3ui64ARB;

typedef void (*glProgramUniform4ui64ARB_function)(GLuint program, GLint location, GLuint64 x, GLuint64 y, GLuint64 z, GLuint64 w);
glProgramUniform4ui64ARB_function glProgramUniform4ui64ARB;

typedef void (*glProgramUniform1ui64vARB_function)(GLuint program, GLint location, GLsizei count, GLuint64 *value);
glProgramUniform1ui64vARB_function glProgramUniform1ui64vARB;

typedef void (*glProgramUniform2ui64vARB_function)(GLuint program, GLint location, GLsizei count, GLuint64 *value);
glProgramUniform2ui64vARB_function glProgramUniform2ui64vARB;

typedef void (*glProgramUniform3ui64vARB_function)(GLuint program, GLint location, GLsizei count, GLuint64 *value);
glProgramUniform3ui64vARB_function glProgramUniform3ui64vARB;

typedef void (*glProgramUniform4ui64vARB_function)(GLuint program, GLint location, GLsizei count, GLuint64 *value);
glProgramUniform4ui64vARB_function glProgramUniform4ui64vARB;
#define GL_ARB_half_float_pixel 1
#define GL_HALF_FLOAT_ARB 0x140B
#define GL_ARB_half_float_vertex 1
#define GL_ARB_imaging 1
#define GL_CONVOLUTION_BORDER_MODE 0x8013
#define GL_CONVOLUTION_FILTER_SCALE 0x8014
#define GL_CONVOLUTION_FILTER_BIAS 0x8015
#define GL_REDUCE 0x8016
#define GL_CONVOLUTION_FORMAT 0x8017
#define GL_CONVOLUTION_WIDTH 0x8018
#define GL_CONVOLUTION_HEIGHT 0x8019
#define GL_MAX_CONVOLUTION_WIDTH 0x801A
#define GL_MAX_CONVOLUTION_HEIGHT 0x801B
#define GL_POST_CONVOLUTION_RED_SCALE 0x801C
#define GL_POST_CONVOLUTION_GREEN_SCALE 0x801D
#define GL_POST_CONVOLUTION_BLUE_SCALE 0x801E
#define GL_POST_CONVOLUTION_ALPHA_SCALE 0x801F
#define GL_POST_CONVOLUTION_RED_BIAS 0x8020
#define GL_POST_CONVOLUTION_GREEN_BIAS 0x8021
#define GL_POST_CONVOLUTION_BLUE_BIAS 0x8022
#define GL_POST_CONVOLUTION_ALPHA_BIAS 0x8023
#define GL_HISTOGRAM_WIDTH 0x8026
#define GL_HISTOGRAM_FORMAT 0x8027
#define GL_HISTOGRAM_RED_SIZE 0x8028
#define GL_HISTOGRAM_GREEN_SIZE 0x8029
#define GL_HISTOGRAM_BLUE_SIZE 0x802A
#define GL_HISTOGRAM_ALPHA_SIZE 0x802B
#define GL_HISTOGRAM_LUMINANCE_SIZE 0x802C
#define GL_HISTOGRAM_SINK 0x802D
#define GL_MINMAX_FORMAT 0x802F
#define GL_MINMAX_SINK 0x8030
#define GL_TABLE_TOO_LARGE 0x8031
#define GL_COLOR_MATRIX 0x80B1
#define GL_COLOR_MATRIX_STACK_DEPTH 0x80B2
#define GL_MAX_COLOR_MATRIX_STACK_DEPTH 0x80B3
#define GL_POST_COLOR_MATRIX_RED_SCALE 0x80B4
#define GL_POST_COLOR_MATRIX_GREEN_SCALE 0x80B5
#define GL_POST_COLOR_MATRIX_BLUE_SCALE 0x80B6
#define GL_POST_COLOR_MATRIX_ALPHA_SCALE 0x80B7
#define GL_POST_COLOR_MATRIX_RED_BIAS 0x80B8
#define GL_POST_COLOR_MATRIX_GREEN_BIAS 0x80B9
#define GL_POST_COLOR_MATRIX_BLUE_BIAS 0x80BA
#define GL_POST_COLOR_MATRIX_ALPHA_BIAS 0x80BB
#define GL_COLOR_TABLE_SCALE 0x80D6
#define GL_COLOR_TABLE_BIAS 0x80D7
#define GL_COLOR_TABLE_FORMAT 0x80D8
#define GL_COLOR_TABLE_WIDTH 0x80D9
#define GL_COLOR_TABLE_RED_SIZE 0x80DA
#define GL_COLOR_TABLE_GREEN_SIZE 0x80DB
#define GL_COLOR_TABLE_BLUE_SIZE 0x80DC
#define GL_COLOR_TABLE_ALPHA_SIZE 0x80DD
#define GL_COLOR_TABLE_LUMINANCE_SIZE 0x80DE
#define GL_COLOR_TABLE_INTENSITY_SIZE 0x80DF
#define GL_CONSTANT_BORDER 0x8151
#define GL_REPLICATE_BORDER 0x8153
#define GL_CONVOLUTION_BORDER_COLOR 0x8154

typedef void (*glColorTable_function)(GLenum target, GLenum internalformat, GLsizei width, GLenum format, GLenum type, void * table);
glColorTable_function glColorTable;

typedef void (*glColorTableParameterfv_function)(GLenum target, GLenum pname, GLfloat *params);
glColorTableParameterfv_function glColorTableParameterfv;

typedef void (*glColorTableParameteriv_function)(GLenum target, GLenum pname, GLint *params);
glColorTableParameteriv_function glColorTableParameteriv;

typedef void (*glCopyColorTable_function)(GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width);
glCopyColorTable_function glCopyColorTable;

typedef void (*glGetColorTable_function)(GLenum target, GLenum format, GLenum type, void * table);
glGetColorTable_function glGetColorTable;

typedef void (*glGetColorTableParameterfv_function)(GLenum target, GLenum pname, GLfloat *params);
glGetColorTableParameterfv_function glGetColorTableParameterfv;

typedef void (*glGetColorTableParameteriv_function)(GLenum target, GLenum pname, GLint *params);
glGetColorTableParameteriv_function glGetColorTableParameteriv;

typedef void (*glColorSubTable_function)(GLenum target, GLsizei start, GLsizei count, GLenum format, GLenum type, void * data);
glColorSubTable_function glColorSubTable;

typedef void (*glCopyColorSubTable_function)(GLenum target, GLsizei start, GLint x, GLint y, GLsizei width);
glCopyColorSubTable_function glCopyColorSubTable;

typedef void (*glConvolutionFilter1D_function)(GLenum target, GLenum internalformat, GLsizei width, GLenum format, GLenum type, void * image);
glConvolutionFilter1D_function glConvolutionFilter1D;

typedef void (*glConvolutionFilter2D_function)(GLenum target, GLenum internalformat, GLsizei width, GLsizei height, GLenum format, GLenum type, void * image);
glConvolutionFilter2D_function glConvolutionFilter2D;

typedef void (*glConvolutionParameterf_function)(GLenum target, GLenum pname, GLfloat params);
glConvolutionParameterf_function glConvolutionParameterf;

typedef void (*glConvolutionParameterfv_function)(GLenum target, GLenum pname, GLfloat *params);
glConvolutionParameterfv_function glConvolutionParameterfv;

typedef void (*glConvolutionParameteri_function)(GLenum target, GLenum pname, GLint params);
glConvolutionParameteri_function glConvolutionParameteri;

typedef void (*glConvolutionParameteriv_function)(GLenum target, GLenum pname, GLint *params);
glConvolutionParameteriv_function glConvolutionParameteriv;

typedef void (*glCopyConvolutionFilter1D_function)(GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width);
glCopyConvolutionFilter1D_function glCopyConvolutionFilter1D;

typedef void (*glCopyConvolutionFilter2D_function)(GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height);
glCopyConvolutionFilter2D_function glCopyConvolutionFilter2D;

typedef void (*glGetConvolutionFilter_function)(GLenum target, GLenum format, GLenum type, void * image);
glGetConvolutionFilter_function glGetConvolutionFilter;

typedef void (*glGetConvolutionParameterfv_function)(GLenum target, GLenum pname, GLfloat *params);
glGetConvolutionParameterfv_function glGetConvolutionParameterfv;

typedef void (*glGetConvolutionParameteriv_function)(GLenum target, GLenum pname, GLint *params);
glGetConvolutionParameteriv_function glGetConvolutionParameteriv;

typedef void (*glGetSeparableFilter_function)(GLenum target, GLenum format, GLenum type, void * row, void * column, void * span);
glGetSeparableFilter_function glGetSeparableFilter;

typedef void (*glSeparableFilter2D_function)(GLenum target, GLenum internalformat, GLsizei width, GLsizei height, GLenum format, GLenum type, void * row, void * column);
glSeparableFilter2D_function glSeparableFilter2D;

typedef void (*glGetHistogram_function)(GLenum target, GLboolean reset, GLenum format, GLenum type, void * values);
glGetHistogram_function glGetHistogram;

typedef void (*glGetHistogramParameterfv_function)(GLenum target, GLenum pname, GLfloat *params);
glGetHistogramParameterfv_function glGetHistogramParameterfv;

typedef void (*glGetHistogramParameteriv_function)(GLenum target, GLenum pname, GLint *params);
glGetHistogramParameteriv_function glGetHistogramParameteriv;

typedef void (*glGetMinmax_function)(GLenum target, GLboolean reset, GLenum format, GLenum type, void * values);
glGetMinmax_function glGetMinmax;

typedef void (*glGetMinmaxParameterfv_function)(GLenum target, GLenum pname, GLfloat *params);
glGetMinmaxParameterfv_function glGetMinmaxParameterfv;

typedef void (*glGetMinmaxParameteriv_function)(GLenum target, GLenum pname, GLint *params);
glGetMinmaxParameteriv_function glGetMinmaxParameteriv;

typedef void (*glHistogram_function)(GLenum target, GLsizei width, GLenum internalformat, GLboolean sink);
glHistogram_function glHistogram;

typedef void (*glMinmax_function)(GLenum target, GLenum internalformat, GLboolean sink);
glMinmax_function glMinmax;

typedef void (*glResetHistogram_function)(GLenum target);
glResetHistogram_function glResetHistogram;

typedef void (*glResetMinmax_function)(GLenum target);
glResetMinmax_function glResetMinmax;
#define GL_ARB_indirect_parameters 1
#define GL_PARAMETER_BUFFER_ARB 0x80EE
#define GL_PARAMETER_BUFFER_BINDING_ARB 0x80EF

typedef void (*glMultiDrawArraysIndirectCountARB_function)(GLenum mode, void * indirect, GLintptr drawcount, GLsizei maxdrawcount, GLsizei stride);
glMultiDrawArraysIndirectCountARB_function glMultiDrawArraysIndirectCountARB;

typedef void (*glMultiDrawElementsIndirectCountARB_function)(GLenum mode, GLenum type, void * indirect, GLintptr drawcount, GLsizei maxdrawcount, GLsizei stride);
glMultiDrawElementsIndirectCountARB_function glMultiDrawElementsIndirectCountARB;
#define GL_ARB_instanced_arrays 1
#define GL_VERTEX_ATTRIB_ARRAY_DIVISOR_ARB 0x88FE

typedef void (*glVertexAttribDivisorARB_function)(GLuint index, GLuint divisor);
glVertexAttribDivisorARB_function glVertexAttribDivisorARB;
#define GL_ARB_internalformat_query 1
#define GL_ARB_internalformat_query2 1
#define GL_SRGB_DECODE_ARB 0x8299
#define GL_VIEW_CLASS_EAC_R11 0x9383
#define GL_VIEW_CLASS_EAC_RG11 0x9384
#define GL_VIEW_CLASS_ETC2_RGB 0x9385
#define GL_VIEW_CLASS_ETC2_RGBA 0x9386
#define GL_VIEW_CLASS_ETC2_EAC_RGBA 0x9387
#define GL_VIEW_CLASS_ASTC_4x4_RGBA 0x9388
#define GL_VIEW_CLASS_ASTC_5x4_RGBA 0x9389
#define GL_VIEW_CLASS_ASTC_5x5_RGBA 0x938A
#define GL_VIEW_CLASS_ASTC_6x5_RGBA 0x938B
#define GL_VIEW_CLASS_ASTC_6x6_RGBA 0x938C
#define GL_VIEW_CLASS_ASTC_8x5_RGBA 0x938D
#define GL_VIEW_CLASS_ASTC_8x6_RGBA 0x938E
#define GL_VIEW_CLASS_ASTC_8x8_RGBA 0x938F
#define GL_VIEW_CLASS_ASTC_10x5_RGBA 0x9390
#define GL_VIEW_CLASS_ASTC_10x6_RGBA 0x9391
#define GL_VIEW_CLASS_ASTC_10x8_RGBA 0x9392
#define GL_VIEW_CLASS_ASTC_10x10_RGBA 0x9393
#define GL_VIEW_CLASS_ASTC_12x10_RGBA 0x9394
#define GL_VIEW_CLASS_ASTC_12x12_RGBA 0x9395
#define GL_ARB_invalidate_subdata 1
#define GL_ARB_map_buffer_alignment 1
#define GL_ARB_map_buffer_range 1
#define GL_ARB_matrix_palette 1
#define GL_MATRIX_PALETTE_ARB 0x8840
#define GL_MAX_MATRIX_PALETTE_STACK_DEPTH_ARB 0x8841
#define GL_MAX_PALETTE_MATRICES_ARB 0x8842
#define GL_CURRENT_PALETTE_MATRIX_ARB 0x8843
#define GL_MATRIX_INDEX_ARRAY_ARB 0x8844
#define GL_CURRENT_MATRIX_INDEX_ARB 0x8845
#define GL_MATRIX_INDEX_ARRAY_SIZE_ARB 0x8846
#define GL_MATRIX_INDEX_ARRAY_TYPE_ARB 0x8847
#define GL_MATRIX_INDEX_ARRAY_STRIDE_ARB 0x8848
#define GL_MATRIX_INDEX_ARRAY_POINTER_ARB 0x8849

typedef void (*glCurrentPaletteMatrixARB_function)(GLint index);
glCurrentPaletteMatrixARB_function glCurrentPaletteMatrixARB;

typedef void (*glMatrixIndexubvARB_function)(GLint size, GLubyte *indices);
glMatrixIndexubvARB_function glMatrixIndexubvARB;

typedef void (*glMatrixIndexusvARB_function)(GLint size, GLushort *indices);
glMatrixIndexusvARB_function glMatrixIndexusvARB;

typedef void (*glMatrixIndexuivARB_function)(GLint size, GLuint *indices);
glMatrixIndexuivARB_function glMatrixIndexuivARB;

typedef void (*glMatrixIndexPointerARB_function)(GLint size, GLenum type, GLsizei stride, void * pointer);
glMatrixIndexPointerARB_function glMatrixIndexPointerARB;
#define GL_ARB_multi_bind 1
#define GL_ARB_multi_draw_indirect 1
#define GL_ARB_multisample 1
#define GL_MULTISAMPLE_ARB 0x809D
#define GL_SAMPLE_ALPHA_TO_COVERAGE_ARB 0x809E
#define GL_SAMPLE_ALPHA_TO_ONE_ARB 0x809F
#define GL_SAMPLE_COVERAGE_ARB 0x80A0
#define GL_SAMPLE_BUFFERS_ARB 0x80A8
#define GL_SAMPLES_ARB 0x80A9
#define GL_SAMPLE_COVERAGE_VALUE_ARB 0x80AA
#define GL_SAMPLE_COVERAGE_INVERT_ARB 0x80AB
#define GL_MULTISAMPLE_BIT_ARB 0x20000000

typedef void (*glSampleCoverageARB_function)(GLfloat value, GLboolean invert);
glSampleCoverageARB_function glSampleCoverageARB;
#define GL_ARB_multitexture 1
#define GL_TEXTURE0_ARB 0x84C0
#define GL_TEXTURE1_ARB 0x84C1
#define GL_TEXTURE2_ARB 0x84C2
#define GL_TEXTURE3_ARB 0x84C3
#define GL_TEXTURE4_ARB 0x84C4
#define GL_TEXTURE5_ARB 0x84C5
#define GL_TEXTURE6_ARB 0x84C6
#define GL_TEXTURE7_ARB 0x84C7
#define GL_TEXTURE8_ARB 0x84C8
#define GL_TEXTURE9_ARB 0x84C9
#define GL_TEXTURE10_ARB 0x84CA
#define GL_TEXTURE11_ARB 0x84CB
#define GL_TEXTURE12_ARB 0x84CC
#define GL_TEXTURE13_ARB 0x84CD
#define GL_TEXTURE14_ARB 0x84CE
#define GL_TEXTURE15_ARB 0x84CF
#define GL_TEXTURE16_ARB 0x84D0
#define GL_TEXTURE17_ARB 0x84D1
#define GL_TEXTURE18_ARB 0x84D2
#define GL_TEXTURE19_ARB 0x84D3
#define GL_TEXTURE20_ARB 0x84D4
#define GL_TEXTURE21_ARB 0x84D5
#define GL_TEXTURE22_ARB 0x84D6
#define GL_TEXTURE23_ARB 0x84D7
#define GL_TEXTURE24_ARB 0x84D8
#define GL_TEXTURE25_ARB 0x84D9
#define GL_TEXTURE26_ARB 0x84DA
#define GL_TEXTURE27_ARB 0x84DB
#define GL_TEXTURE28_ARB 0x84DC
#define GL_TEXTURE29_ARB 0x84DD
#define GL_TEXTURE30_ARB 0x84DE
#define GL_TEXTURE31_ARB 0x84DF
#define GL_ACTIVE_TEXTURE_ARB 0x84E0
#define GL_CLIENT_ACTIVE_TEXTURE_ARB 0x84E1
#define GL_MAX_TEXTURE_UNITS_ARB 0x84E2

typedef void (*glActiveTextureARB_function)(GLenum texture);
glActiveTextureARB_function glActiveTextureARB;

typedef void (*glClientActiveTextureARB_function)(GLenum texture);
glClientActiveTextureARB_function glClientActiveTextureARB;

typedef void (*glMultiTexCoord1dARB_function)(GLenum target, GLdouble s);
glMultiTexCoord1dARB_function glMultiTexCoord1dARB;

typedef void (*glMultiTexCoord1dvARB_function)(GLenum target, GLdouble *v);
glMultiTexCoord1dvARB_function glMultiTexCoord1dvARB;

typedef void (*glMultiTexCoord1fARB_function)(GLenum target, GLfloat s);
glMultiTexCoord1fARB_function glMultiTexCoord1fARB;

typedef void (*glMultiTexCoord1fvARB_function)(GLenum target, GLfloat *v);
glMultiTexCoord1fvARB_function glMultiTexCoord1fvARB;

typedef void (*glMultiTexCoord1iARB_function)(GLenum target, GLint s);
glMultiTexCoord1iARB_function glMultiTexCoord1iARB;

typedef void (*glMultiTexCoord1ivARB_function)(GLenum target, GLint *v);
glMultiTexCoord1ivARB_function glMultiTexCoord1ivARB;

typedef void (*glMultiTexCoord1sARB_function)(GLenum target, GLshort s);
glMultiTexCoord1sARB_function glMultiTexCoord1sARB;

typedef void (*glMultiTexCoord1svARB_function)(GLenum target, GLshort *v);
glMultiTexCoord1svARB_function glMultiTexCoord1svARB;

typedef void (*glMultiTexCoord2dARB_function)(GLenum target, GLdouble s, GLdouble t);
glMultiTexCoord2dARB_function glMultiTexCoord2dARB;

typedef void (*glMultiTexCoord2dvARB_function)(GLenum target, GLdouble *v);
glMultiTexCoord2dvARB_function glMultiTexCoord2dvARB;

typedef void (*glMultiTexCoord2fARB_function)(GLenum target, GLfloat s, GLfloat t);
glMultiTexCoord2fARB_function glMultiTexCoord2fARB;

typedef void (*glMultiTexCoord2fvARB_function)(GLenum target, GLfloat *v);
glMultiTexCoord2fvARB_function glMultiTexCoord2fvARB;

typedef void (*glMultiTexCoord2iARB_function)(GLenum target, GLint s, GLint t);
glMultiTexCoord2iARB_function glMultiTexCoord2iARB;

typedef void (*glMultiTexCoord2ivARB_function)(GLenum target, GLint *v);
glMultiTexCoord2ivARB_function glMultiTexCoord2ivARB;

typedef void (*glMultiTexCoord2sARB_function)(GLenum target, GLshort s, GLshort t);
glMultiTexCoord2sARB_function glMultiTexCoord2sARB;

typedef void (*glMultiTexCoord2svARB_function)(GLenum target, GLshort *v);
glMultiTexCoord2svARB_function glMultiTexCoord2svARB;

typedef void (*glMultiTexCoord3dARB_function)(GLenum target, GLdouble s, GLdouble t, GLdouble r);
glMultiTexCoord3dARB_function glMultiTexCoord3dARB;

typedef void (*glMultiTexCoord3dvARB_function)(GLenum target, GLdouble *v);
glMultiTexCoord3dvARB_function glMultiTexCoord3dvARB;

typedef void (*glMultiTexCoord3fARB_function)(GLenum target, GLfloat s, GLfloat t, GLfloat r);
glMultiTexCoord3fARB_function glMultiTexCoord3fARB;

typedef void (*glMultiTexCoord3fvARB_function)(GLenum target, GLfloat *v);
glMultiTexCoord3fvARB_function glMultiTexCoord3fvARB;

typedef void (*glMultiTexCoord3iARB_function)(GLenum target, GLint s, GLint t, GLint r);
glMultiTexCoord3iARB_function glMultiTexCoord3iARB;

typedef void (*glMultiTexCoord3ivARB_function)(GLenum target, GLint *v);
glMultiTexCoord3ivARB_function glMultiTexCoord3ivARB;

typedef void (*glMultiTexCoord3sARB_function)(GLenum target, GLshort s, GLshort t, GLshort r);
glMultiTexCoord3sARB_function glMultiTexCoord3sARB;

typedef void (*glMultiTexCoord3svARB_function)(GLenum target, GLshort *v);
glMultiTexCoord3svARB_function glMultiTexCoord3svARB;

typedef void (*glMultiTexCoord4dARB_function)(GLenum target, GLdouble s, GLdouble t, GLdouble r, GLdouble q);
glMultiTexCoord4dARB_function glMultiTexCoord4dARB;

typedef void (*glMultiTexCoord4dvARB_function)(GLenum target, GLdouble *v);
glMultiTexCoord4dvARB_function glMultiTexCoord4dvARB;

typedef void (*glMultiTexCoord4fARB_function)(GLenum target, GLfloat s, GLfloat t, GLfloat r, GLfloat q);
glMultiTexCoord4fARB_function glMultiTexCoord4fARB;

typedef void (*glMultiTexCoord4fvARB_function)(GLenum target, GLfloat *v);
glMultiTexCoord4fvARB_function glMultiTexCoord4fvARB;

typedef void (*glMultiTexCoord4iARB_function)(GLenum target, GLint s, GLint t, GLint r, GLint q);
glMultiTexCoord4iARB_function glMultiTexCoord4iARB;

typedef void (*glMultiTexCoord4ivARB_function)(GLenum target, GLint *v);
glMultiTexCoord4ivARB_function glMultiTexCoord4ivARB;

typedef void (*glMultiTexCoord4sARB_function)(GLenum target, GLshort s, GLshort t, GLshort r, GLshort q);
glMultiTexCoord4sARB_function glMultiTexCoord4sARB;

typedef void (*glMultiTexCoord4svARB_function)(GLenum target, GLshort *v);
glMultiTexCoord4svARB_function glMultiTexCoord4svARB;
#define GL_ARB_occlusion_query 1
#define GL_QUERY_COUNTER_BITS_ARB 0x8864
#define GL_CURRENT_QUERY_ARB 0x8865
#define GL_QUERY_RESULT_ARB 0x8866
#define GL_QUERY_RESULT_AVAILABLE_ARB 0x8867
#define GL_SAMPLES_PASSED_ARB 0x8914

typedef void (*glGenQueriesARB_function)(GLsizei n, GLuint *ids);
glGenQueriesARB_function glGenQueriesARB;

typedef void (*glDeleteQueriesARB_function)(GLsizei n, GLuint *ids);
glDeleteQueriesARB_function glDeleteQueriesARB;

typedef GLboolean  (*glIsQueryARB_function)(GLuint id);
glIsQueryARB_function glIsQueryARB;

typedef void (*glBeginQueryARB_function)(GLenum target, GLuint id);
glBeginQueryARB_function glBeginQueryARB;

typedef void (*glEndQueryARB_function)(GLenum target);
glEndQueryARB_function glEndQueryARB;

typedef void (*glGetQueryivARB_function)(GLenum target, GLenum pname, GLint *params);
glGetQueryivARB_function glGetQueryivARB;

typedef void (*glGetQueryObjectivARB_function)(GLuint id, GLenum pname, GLint *params);
glGetQueryObjectivARB_function glGetQueryObjectivARB;

typedef void (*glGetQueryObjectuivARB_function)(GLuint id, GLenum pname, GLuint *params);
glGetQueryObjectuivARB_function glGetQueryObjectuivARB;
#define GL_ARB_occlusion_query2 1
#define GL_ARB_parallel_shader_compile 1
#define GL_MAX_SHADER_COMPILER_THREADS_ARB 0x91B0
#define GL_COMPLETION_STATUS_ARB 0x91B1

typedef void (*glMaxShaderCompilerThreadsARB_function)(GLuint count);
glMaxShaderCompilerThreadsARB_function glMaxShaderCompilerThreadsARB;
#define GL_ARB_pipeline_statistics_query 1
#define GL_VERTICES_SUBMITTED_ARB 0x82EE
#define GL_PRIMITIVES_SUBMITTED_ARB 0x82EF
#define GL_VERTEX_SHADER_INVOCATIONS_ARB 0x82F0
#define GL_TESS_CONTROL_SHADER_PATCHES_ARB 0x82F1
#define GL_TESS_EVALUATION_SHADER_INVOCATIONS_ARB 0x82F2
#define GL_GEOMETRY_SHADER_PRIMITIVES_EMITTED_ARB 0x82F3
#define GL_FRAGMENT_SHADER_INVOCATIONS_ARB 0x82F4
#define GL_COMPUTE_SHADER_INVOCATIONS_ARB 0x82F5
#define GL_CLIPPING_INPUT_PRIMITIVES_ARB 0x82F6
#define GL_CLIPPING_OUTPUT_PRIMITIVES_ARB 0x82F7
#define GL_ARB_pixel_buffer_object 1
#define GL_PIXEL_PACK_BUFFER_ARB 0x88EB
#define GL_PIXEL_UNPACK_BUFFER_ARB 0x88EC
#define GL_PIXEL_PACK_BUFFER_BINDING_ARB 0x88ED
#define GL_PIXEL_UNPACK_BUFFER_BINDING_ARB 0x88EF
#define GL_ARB_point_parameters 1
#define GL_POINT_SIZE_MIN_ARB 0x8126
#define GL_POINT_SIZE_MAX_ARB 0x8127
#define GL_POINT_FADE_THRESHOLD_SIZE_ARB 0x8128
#define GL_POINT_DISTANCE_ATTENUATION_ARB 0x8129

typedef void (*glPointParameterfARB_function)(GLenum pname, GLfloat param);
glPointParameterfARB_function glPointParameterfARB;

typedef void (*glPointParameterfvARB_function)(GLenum pname, GLfloat *params);
glPointParameterfvARB_function glPointParameterfvARB;
#define GL_ARB_point_sprite 1
#define GL_POINT_SPRITE_ARB 0x8861
#define GL_COORD_REPLACE_ARB 0x8862
#define GL_ARB_polygon_offset_clamp 1
#define GL_ARB_post_depth_coverage 1
#define GL_ARB_program_interface_query 1
#define GL_ARB_provoking_vertex 1
#define GL_ARB_query_buffer_object 1
#define GL_ARB_robust_buffer_access_behavior 1
#define GL_ARB_robustness 1
#define GL_CONTEXT_FLAG_ROBUST_ACCESS_BIT_ARB 0x00000004
#define GL_LOSE_CONTEXT_ON_RESET_ARB 0x8252
#define GL_GUILTY_CONTEXT_RESET_ARB 0x8253
#define GL_INNOCENT_CONTEXT_RESET_ARB 0x8254
#define GL_UNKNOWN_CONTEXT_RESET_ARB 0x8255
#define GL_RESET_NOTIFICATION_STRATEGY_ARB 0x8256
#define GL_NO_RESET_NOTIFICATION_ARB 0x8261

typedef GLenum  (*glGetGraphicsResetStatusARB_function)();
glGetGraphicsResetStatusARB_function glGetGraphicsResetStatusARB;

typedef void (*glGetnTexImageARB_function)(GLenum target, GLint level, GLenum format, GLenum type, GLsizei bufSize, void * img);
glGetnTexImageARB_function glGetnTexImageARB;

typedef void (*glReadnPixelsARB_function)(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLsizei bufSize, void * data);
glReadnPixelsARB_function glReadnPixelsARB;

typedef void (*glGetnCompressedTexImageARB_function)(GLenum target, GLint lod, GLsizei bufSize, void * img);
glGetnCompressedTexImageARB_function glGetnCompressedTexImageARB;

typedef void (*glGetnUniformfvARB_function)(GLuint program, GLint location, GLsizei bufSize, GLfloat *params);
glGetnUniformfvARB_function glGetnUniformfvARB;

typedef void (*glGetnUniformivARB_function)(GLuint program, GLint location, GLsizei bufSize, GLint *params);
glGetnUniformivARB_function glGetnUniformivARB;

typedef void (*glGetnUniformuivARB_function)(GLuint program, GLint location, GLsizei bufSize, GLuint *params);
glGetnUniformuivARB_function glGetnUniformuivARB;

typedef void (*glGetnUniformdvARB_function)(GLuint program, GLint location, GLsizei bufSize, GLdouble *params);
glGetnUniformdvARB_function glGetnUniformdvARB;

typedef void (*glGetnMapdvARB_function)(GLenum target, GLenum query, GLsizei bufSize, GLdouble *v);
glGetnMapdvARB_function glGetnMapdvARB;

typedef void (*glGetnMapfvARB_function)(GLenum target, GLenum query, GLsizei bufSize, GLfloat *v);
glGetnMapfvARB_function glGetnMapfvARB;

typedef void (*glGetnMapivARB_function)(GLenum target, GLenum query, GLsizei bufSize, GLint *v);
glGetnMapivARB_function glGetnMapivARB;

typedef void (*glGetnPixelMapfvARB_function)(GLenum map, GLsizei bufSize, GLfloat *values);
glGetnPixelMapfvARB_function glGetnPixelMapfvARB;

typedef void (*glGetnPixelMapuivARB_function)(GLenum map, GLsizei bufSize, GLuint *values);
glGetnPixelMapuivARB_function glGetnPixelMapuivARB;

typedef void (*glGetnPixelMapusvARB_function)(GLenum map, GLsizei bufSize, GLushort *values);
glGetnPixelMapusvARB_function glGetnPixelMapusvARB;

typedef void (*glGetnPolygonStippleARB_function)(GLsizei bufSize, GLubyte *pattern);
glGetnPolygonStippleARB_function glGetnPolygonStippleARB;

typedef void (*glGetnColorTableARB_function)(GLenum target, GLenum format, GLenum type, GLsizei bufSize, void * table);
glGetnColorTableARB_function glGetnColorTableARB;

typedef void (*glGetnConvolutionFilterARB_function)(GLenum target, GLenum format, GLenum type, GLsizei bufSize, void * image);
glGetnConvolutionFilterARB_function glGetnConvolutionFilterARB;

typedef void (*glGetnSeparableFilterARB_function)(GLenum target, GLenum format, GLenum type, GLsizei rowBufSize, void * row, GLsizei columnBufSize, void * column, void * span);
glGetnSeparableFilterARB_function glGetnSeparableFilterARB;

typedef void (*glGetnHistogramARB_function)(GLenum target, GLboolean reset, GLenum format, GLenum type, GLsizei bufSize, void * values);
glGetnHistogramARB_function glGetnHistogramARB;

typedef void (*glGetnMinmaxARB_function)(GLenum target, GLboolean reset, GLenum format, GLenum type, GLsizei bufSize, void * values);
glGetnMinmaxARB_function glGetnMinmaxARB;
#define GL_ARB_robustness_isolation 1
#define GL_ARB_sample_locations 1
#define GL_SAMPLE_LOCATION_SUBPIXEL_BITS_ARB 0x933D
#define GL_SAMPLE_LOCATION_PIXEL_GRID_WIDTH_ARB 0x933E
#define GL_SAMPLE_LOCATION_PIXEL_GRID_HEIGHT_ARB 0x933F
#define GL_PROGRAMMABLE_SAMPLE_LOCATION_TABLE_SIZE_ARB 0x9340
#define GL_SAMPLE_LOCATION_ARB 0x8E50
#define GL_PROGRAMMABLE_SAMPLE_LOCATION_ARB 0x9341
#define GL_FRAMEBUFFER_PROGRAMMABLE_SAMPLE_LOCATIONS_ARB 0x9342
#define GL_FRAMEBUFFER_SAMPLE_LOCATION_PIXEL_GRID_ARB 0x9343

typedef void (*glFramebufferSampleLocationsfvARB_function)(GLenum target, GLuint start, GLsizei count, GLfloat *v);
glFramebufferSampleLocationsfvARB_function glFramebufferSampleLocationsfvARB;

typedef void (*glNamedFramebufferSampleLocationsfvARB_function)(GLuint framebuffer, GLuint start, GLsizei count, GLfloat *v);
glNamedFramebufferSampleLocationsfvARB_function glNamedFramebufferSampleLocationsfvARB;

typedef void (*glEvaluateDepthValuesARB_function)();
glEvaluateDepthValuesARB_function glEvaluateDepthValuesARB;
#define GL_ARB_sample_shading 1
#define GL_SAMPLE_SHADING_ARB 0x8C36
#define GL_MIN_SAMPLE_SHADING_VALUE_ARB 0x8C37

typedef void (*glMinSampleShadingARB_function)(GLfloat value);
glMinSampleShadingARB_function glMinSampleShadingARB;
#define GL_ARB_sampler_objects 1
#define GL_ARB_seamless_cube_map 1
#define GL_ARB_seamless_cubemap_per_texture 1
#define GL_ARB_separate_shader_objects 1
#define GL_ARB_shader_atomic_counter_ops 1
#define GL_ARB_shader_atomic_counters 1
#define GL_ARB_shader_ballot 1
#define GL_ARB_shader_bit_encoding 1
#define GL_ARB_shader_clock 1
#define GL_ARB_shader_draw_parameters 1
#define GL_ARB_shader_group_vote 1
#define GL_ARB_shader_image_load_store 1
#define GL_ARB_shader_image_size 1
#define GL_ARB_shader_objects 1
#define GL_PROGRAM_OBJECT_ARB 0x8B40
#define GL_SHADER_OBJECT_ARB 0x8B48
#define GL_OBJECT_TYPE_ARB 0x8B4E
#define GL_OBJECT_SUBTYPE_ARB 0x8B4F
#define GL_FLOAT_VEC2_ARB 0x8B50
#define GL_FLOAT_VEC3_ARB 0x8B51
#define GL_FLOAT_VEC4_ARB 0x8B52
#define GL_INT_VEC2_ARB 0x8B53
#define GL_INT_VEC3_ARB 0x8B54
#define GL_INT_VEC4_ARB 0x8B55
#define GL_BOOL_ARB 0x8B56
#define GL_BOOL_VEC2_ARB 0x8B57
#define GL_BOOL_VEC3_ARB 0x8B58
#define GL_BOOL_VEC4_ARB 0x8B59
#define GL_FLOAT_MAT2_ARB 0x8B5A
#define GL_FLOAT_MAT3_ARB 0x8B5B
#define GL_FLOAT_MAT4_ARB 0x8B5C
#define GL_SAMPLER_1D_ARB 0x8B5D
#define GL_SAMPLER_2D_ARB 0x8B5E
#define GL_SAMPLER_3D_ARB 0x8B5F
#define GL_SAMPLER_CUBE_ARB 0x8B60
#define GL_SAMPLER_1D_SHADOW_ARB 0x8B61
#define GL_SAMPLER_2D_SHADOW_ARB 0x8B62
#define GL_SAMPLER_2D_RECT_ARB 0x8B63
#define GL_SAMPLER_2D_RECT_SHADOW_ARB 0x8B64
#define GL_OBJECT_DELETE_STATUS_ARB 0x8B80
#define GL_OBJECT_COMPILE_STATUS_ARB 0x8B81
#define GL_OBJECT_LINK_STATUS_ARB 0x8B82
#define GL_OBJECT_VALIDATE_STATUS_ARB 0x8B83
#define GL_OBJECT_INFO_LOG_LENGTH_ARB 0x8B84
#define GL_OBJECT_ATTACHED_OBJECTS_ARB 0x8B85
#define GL_OBJECT_ACTIVE_UNIFORMS_ARB 0x8B86
#define GL_OBJECT_ACTIVE_UNIFORM_MAX_LENGTH_ARB 0x8B87
#define GL_OBJECT_SHADER_SOURCE_LENGTH_ARB 0x8B88

typedef void (*glDeleteObjectARB_function)(GLhandleARB obj);
glDeleteObjectARB_function glDeleteObjectARB;

typedef GLhandleARB  (*glGetHandleARB_function)(GLenum pname);
glGetHandleARB_function glGetHandleARB;

typedef void (*glDetachObjectARB_function)(GLhandleARB containerObj, GLhandleARB attachedObj);
glDetachObjectARB_function glDetachObjectARB;

typedef GLhandleARB  (*glCreateShaderObjectARB_function)(GLenum shaderType);
glCreateShaderObjectARB_function glCreateShaderObjectARB;

typedef void (*glShaderSourceARB_function)(GLhandleARB shaderObj, GLsizei count, GLcharARB **string, GLint *length);
glShaderSourceARB_function glShaderSourceARB;

typedef void (*glCompileShaderARB_function)(GLhandleARB shaderObj);
glCompileShaderARB_function glCompileShaderARB;

typedef GLhandleARB  (*glCreateProgramObjectARB_function)();
glCreateProgramObjectARB_function glCreateProgramObjectARB;

typedef void (*glAttachObjectARB_function)(GLhandleARB containerObj, GLhandleARB obj);
glAttachObjectARB_function glAttachObjectARB;

typedef void (*glLinkProgramARB_function)(GLhandleARB programObj);
glLinkProgramARB_function glLinkProgramARB;

typedef void (*glUseProgramObjectARB_function)(GLhandleARB programObj);
glUseProgramObjectARB_function glUseProgramObjectARB;

typedef void (*glValidateProgramARB_function)(GLhandleARB programObj);
glValidateProgramARB_function glValidateProgramARB;

typedef void (*glUniform1fARB_function)(GLint location, GLfloat v0);
glUniform1fARB_function glUniform1fARB;

typedef void (*glUniform2fARB_function)(GLint location, GLfloat v0, GLfloat v1);
glUniform2fARB_function glUniform2fARB;

typedef void (*glUniform3fARB_function)(GLint location, GLfloat v0, GLfloat v1, GLfloat v2);
glUniform3fARB_function glUniform3fARB;

typedef void (*glUniform4fARB_function)(GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3);
glUniform4fARB_function glUniform4fARB;

typedef void (*glUniform1iARB_function)(GLint location, GLint v0);
glUniform1iARB_function glUniform1iARB;

typedef void (*glUniform2iARB_function)(GLint location, GLint v0, GLint v1);
glUniform2iARB_function glUniform2iARB;

typedef void (*glUniform3iARB_function)(GLint location, GLint v0, GLint v1, GLint v2);
glUniform3iARB_function glUniform3iARB;

typedef void (*glUniform4iARB_function)(GLint location, GLint v0, GLint v1, GLint v2, GLint v3);
glUniform4iARB_function glUniform4iARB;

typedef void (*glUniform1fvARB_function)(GLint location, GLsizei count, GLfloat *value);
glUniform1fvARB_function glUniform1fvARB;

typedef void (*glUniform2fvARB_function)(GLint location, GLsizei count, GLfloat *value);
glUniform2fvARB_function glUniform2fvARB;

typedef void (*glUniform3fvARB_function)(GLint location, GLsizei count, GLfloat *value);
glUniform3fvARB_function glUniform3fvARB;

typedef void (*glUniform4fvARB_function)(GLint location, GLsizei count, GLfloat *value);
glUniform4fvARB_function glUniform4fvARB;

typedef void (*glUniform1ivARB_function)(GLint location, GLsizei count, GLint *value);
glUniform1ivARB_function glUniform1ivARB;

typedef void (*glUniform2ivARB_function)(GLint location, GLsizei count, GLint *value);
glUniform2ivARB_function glUniform2ivARB;

typedef void (*glUniform3ivARB_function)(GLint location, GLsizei count, GLint *value);
glUniform3ivARB_function glUniform3ivARB;

typedef void (*glUniform4ivARB_function)(GLint location, GLsizei count, GLint *value);
glUniform4ivARB_function glUniform4ivARB;

typedef void (*glUniformMatrix2fvARB_function)(GLint location, GLsizei count, GLboolean transpose, GLfloat *value);
glUniformMatrix2fvARB_function glUniformMatrix2fvARB;

typedef void (*glUniformMatrix3fvARB_function)(GLint location, GLsizei count, GLboolean transpose, GLfloat *value);
glUniformMatrix3fvARB_function glUniformMatrix3fvARB;

typedef void (*glUniformMatrix4fvARB_function)(GLint location, GLsizei count, GLboolean transpose, GLfloat *value);
glUniformMatrix4fvARB_function glUniformMatrix4fvARB;

typedef void (*glGetObjectParameterfvARB_function)(GLhandleARB obj, GLenum pname, GLfloat *params);
glGetObjectParameterfvARB_function glGetObjectParameterfvARB;

typedef void (*glGetObjectParameterivARB_function)(GLhandleARB obj, GLenum pname, GLint *params);
glGetObjectParameterivARB_function glGetObjectParameterivARB;

typedef void (*glGetInfoLogARB_function)(GLhandleARB obj, GLsizei maxLength, GLsizei *length, GLcharARB *infoLog);
glGetInfoLogARB_function glGetInfoLogARB;

typedef void (*glGetAttachedObjectsARB_function)(GLhandleARB containerObj, GLsizei maxCount, GLsizei *count, GLhandleARB *obj);
glGetAttachedObjectsARB_function glGetAttachedObjectsARB;

typedef GLint  (*glGetUniformLocationARB_function)(GLhandleARB programObj, GLcharARB *name);
glGetUniformLocationARB_function glGetUniformLocationARB;

typedef void (*glGetActiveUniformARB_function)(GLhandleARB programObj, GLuint index, GLsizei maxLength, GLsizei *length, GLint *size, GLenum *type, GLcharARB *name);
glGetActiveUniformARB_function glGetActiveUniformARB;

typedef void (*glGetUniformfvARB_function)(GLhandleARB programObj, GLint location, GLfloat *params);
glGetUniformfvARB_function glGetUniformfvARB;

typedef void (*glGetUniformivARB_function)(GLhandleARB programObj, GLint location, GLint *params);
glGetUniformivARB_function glGetUniformivARB;

typedef void (*glGetShaderSourceARB_function)(GLhandleARB obj, GLsizei maxLength, GLsizei *length, GLcharARB *source);
glGetShaderSourceARB_function glGetShaderSourceARB;
#define GL_ARB_shader_precision 1
#define GL_ARB_shader_stencil_export 1
#define GL_ARB_shader_storage_buffer_object 1
#define GL_ARB_shader_subroutine 1
#define GL_ARB_shader_texture_image_samples 1
#define GL_ARB_shader_texture_lod 1
#define GL_ARB_shader_viewport_layer_array 1
#define GL_ARB_shading_language_100 1
#define GL_SHADING_LANGUAGE_VERSION_ARB 0x8B8C
#define GL_ARB_shading_language_420pack 1
#define GL_ARB_shading_language_include 1
#define GL_SHADER_INCLUDE_ARB 0x8DAE
#define GL_NAMED_STRING_LENGTH_ARB 0x8DE9
#define GL_NAMED_STRING_TYPE_ARB 0x8DEA

typedef void (*glNamedStringARB_function)(GLenum type, GLint namelen, GLchar *name, GLint stringlen, GLchar *string);
glNamedStringARB_function glNamedStringARB;

typedef void (*glDeleteNamedStringARB_function)(GLint namelen, GLchar *name);
glDeleteNamedStringARB_function glDeleteNamedStringARB;

typedef void (*glCompileShaderIncludeARB_function)(GLuint shader, GLsizei count, GLchar **path, GLint *length);
glCompileShaderIncludeARB_function glCompileShaderIncludeARB;

typedef GLboolean  (*glIsNamedStringARB_function)(GLint namelen, GLchar *name);
glIsNamedStringARB_function glIsNamedStringARB;

typedef void (*glGetNamedStringARB_function)(GLint namelen, GLchar *name, GLsizei bufSize, GLint *stringlen, GLchar *string);
glGetNamedStringARB_function glGetNamedStringARB;

typedef void (*glGetNamedStringivARB_function)(GLint namelen, GLchar *name, GLenum pname, GLint *params);
glGetNamedStringivARB_function glGetNamedStringivARB;
#define GL_ARB_shading_language_packing 1
#define GL_ARB_shadow 1
#define GL_TEXTURE_COMPARE_MODE_ARB 0x884C
#define GL_TEXTURE_COMPARE_FUNC_ARB 0x884D
#define GL_COMPARE_R_TO_TEXTURE_ARB 0x884E
#define GL_ARB_shadow_ambient 1
#define GL_TEXTURE_COMPARE_FAIL_VALUE_ARB 0x80BF
#define GL_ARB_sparse_buffer 1
#define GL_SPARSE_STORAGE_BIT_ARB 0x0400
#define GL_SPARSE_BUFFER_PAGE_SIZE_ARB 0x82F8

typedef void (*glBufferPageCommitmentARB_function)(GLenum target, GLintptr offset, GLsizeiptr size, GLboolean commit);
glBufferPageCommitmentARB_function glBufferPageCommitmentARB;

typedef void (*glNamedBufferPageCommitmentEXT_function)(GLuint buffer, GLintptr offset, GLsizeiptr size, GLboolean commit);
glNamedBufferPageCommitmentEXT_function glNamedBufferPageCommitmentEXT;

typedef void (*glNamedBufferPageCommitmentARB_function)(GLuint buffer, GLintptr offset, GLsizeiptr size, GLboolean commit);
glNamedBufferPageCommitmentARB_function glNamedBufferPageCommitmentARB;
#define GL_ARB_sparse_texture 1
#define GL_TEXTURE_SPARSE_ARB 0x91A6
#define GL_VIRTUAL_PAGE_SIZE_INDEX_ARB 0x91A7
#define GL_NUM_SPARSE_LEVELS_ARB 0x91AA
#define GL_NUM_VIRTUAL_PAGE_SIZES_ARB 0x91A8
#define GL_VIRTUAL_PAGE_SIZE_X_ARB 0x9195
#define GL_VIRTUAL_PAGE_SIZE_Y_ARB 0x9196
#define GL_VIRTUAL_PAGE_SIZE_Z_ARB 0x9197
#define GL_MAX_SPARSE_TEXTURE_SIZE_ARB 0x9198
#define GL_MAX_SPARSE_3D_TEXTURE_SIZE_ARB 0x9199
#define GL_MAX_SPARSE_ARRAY_TEXTURE_LAYERS_ARB 0x919A
#define GL_SPARSE_TEXTURE_FULL_ARRAY_CUBE_MIPMAPS_ARB 0x91A9

typedef void (*glTexPageCommitmentARB_function)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLboolean commit);
glTexPageCommitmentARB_function glTexPageCommitmentARB;
#define GL_ARB_sparse_texture2 1
#define GL_ARB_sparse_texture_clamp 1
#define GL_ARB_spirv_extensions 1
#define GL_ARB_stencil_texturing 1
#define GL_ARB_sync 1
#define GL_ARB_tessellation_shader 1
#define GL_ARB_texture_barrier 1
#define GL_ARB_texture_border_clamp 1
#define GL_CLAMP_TO_BORDER_ARB 0x812D
#define GL_ARB_texture_buffer_object 1
#define GL_TEXTURE_BUFFER_ARB 0x8C2A
#define GL_MAX_TEXTURE_BUFFER_SIZE_ARB 0x8C2B
#define GL_TEXTURE_BINDING_BUFFER_ARB 0x8C2C
#define GL_TEXTURE_BUFFER_DATA_STORE_BINDING_ARB 0x8C2D
#define GL_TEXTURE_BUFFER_FORMAT_ARB 0x8C2E

typedef void (*glTexBufferARB_function)(GLenum target, GLenum internalformat, GLuint buffer);
glTexBufferARB_function glTexBufferARB;
#define GL_ARB_texture_buffer_object_rgb32 1
#define GL_ARB_texture_buffer_range 1
#define GL_ARB_texture_compression 1
#define GL_COMPRESSED_ALPHA_ARB 0x84E9
#define GL_COMPRESSED_LUMINANCE_ARB 0x84EA
#define GL_COMPRESSED_LUMINANCE_ALPHA_ARB 0x84EB
#define GL_COMPRESSED_INTENSITY_ARB 0x84EC
#define GL_COMPRESSED_RGB_ARB 0x84ED
#define GL_COMPRESSED_RGBA_ARB 0x84EE
#define GL_TEXTURE_COMPRESSION_HINT_ARB 0x84EF
#define GL_TEXTURE_COMPRESSED_IMAGE_SIZE_ARB 0x86A0
#define GL_TEXTURE_COMPRESSED_ARB 0x86A1
#define GL_NUM_COMPRESSED_TEXTURE_FORMATS_ARB 0x86A2
#define GL_COMPRESSED_TEXTURE_FORMATS_ARB 0x86A3

typedef void (*glCompressedTexImage3DARB_function)(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, void * data);
glCompressedTexImage3DARB_function glCompressedTexImage3DARB;

typedef void (*glCompressedTexImage2DARB_function)(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, void * data);
glCompressedTexImage2DARB_function glCompressedTexImage2DARB;

typedef void (*glCompressedTexImage1DARB_function)(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, void * data);
glCompressedTexImage1DARB_function glCompressedTexImage1DARB;

typedef void (*glCompressedTexSubImage3DARB_function)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, void * data);
glCompressedTexSubImage3DARB_function glCompressedTexSubImage3DARB;

typedef void (*glCompressedTexSubImage2DARB_function)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, void * data);
glCompressedTexSubImage2DARB_function glCompressedTexSubImage2DARB;

typedef void (*glCompressedTexSubImage1DARB_function)(GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, void * data);
glCompressedTexSubImage1DARB_function glCompressedTexSubImage1DARB;

typedef void (*glGetCompressedTexImageARB_function)(GLenum target, GLint level, void * img);
glGetCompressedTexImageARB_function glGetCompressedTexImageARB;
#define GL_ARB_texture_compression_bptc 1
#define GL_COMPRESSED_RGBA_BPTC_UNORM_ARB 0x8E8C
#define GL_COMPRESSED_SRGB_ALPHA_BPTC_UNORM_ARB 0x8E8D
#define GL_COMPRESSED_RGB_BPTC_SIGNED_FLOAT_ARB 0x8E8E
#define GL_COMPRESSED_RGB_BPTC_UNSIGNED_FLOAT_ARB 0x8E8F
#define GL_ARB_texture_compression_rgtc 1
#define GL_ARB_texture_cube_map 1
#define GL_NORMAL_MAP_ARB 0x8511
#define GL_REFLECTION_MAP_ARB 0x8512
#define GL_TEXTURE_CUBE_MAP_ARB 0x8513
#define GL_TEXTURE_BINDING_CUBE_MAP_ARB 0x8514
#define GL_TEXTURE_CUBE_MAP_POSITIVE_X_ARB 0x8515
#define GL_TEXTURE_CUBE_MAP_NEGATIVE_X_ARB 0x8516
#define GL_TEXTURE_CUBE_MAP_POSITIVE_Y_ARB 0x8517
#define GL_TEXTURE_CUBE_MAP_NEGATIVE_Y_ARB 0x8518
#define GL_TEXTURE_CUBE_MAP_POSITIVE_Z_ARB 0x8519
#define GL_TEXTURE_CUBE_MAP_NEGATIVE_Z_ARB 0x851A
#define GL_PROXY_TEXTURE_CUBE_MAP_ARB 0x851B
#define GL_MAX_CUBE_MAP_TEXTURE_SIZE_ARB 0x851C
#define GL_ARB_texture_cube_map_array 1
#define GL_TEXTURE_CUBE_MAP_ARRAY_ARB 0x9009
#define GL_TEXTURE_BINDING_CUBE_MAP_ARRAY_ARB 0x900A
#define GL_PROXY_TEXTURE_CUBE_MAP_ARRAY_ARB 0x900B
#define GL_SAMPLER_CUBE_MAP_ARRAY_ARB 0x900C
#define GL_SAMPLER_CUBE_MAP_ARRAY_SHADOW_ARB 0x900D
#define GL_INT_SAMPLER_CUBE_MAP_ARRAY_ARB 0x900E
#define GL_UNSIGNED_INT_SAMPLER_CUBE_MAP_ARRAY_ARB 0x900F
#define GL_ARB_texture_env_add 1
#define GL_ARB_texture_env_combine 1
#define GL_COMBINE_ARB 0x8570
#define GL_COMBINE_RGB_ARB 0x8571
#define GL_COMBINE_ALPHA_ARB 0x8572
#define GL_SOURCE0_RGB_ARB 0x8580
#define GL_SOURCE1_RGB_ARB 0x8581
#define GL_SOURCE2_RGB_ARB 0x8582
#define GL_SOURCE0_ALPHA_ARB 0x8588
#define GL_SOURCE1_ALPHA_ARB 0x8589
#define GL_SOURCE2_ALPHA_ARB 0x858A
#define GL_OPERAND0_RGB_ARB 0x8590
#define GL_OPERAND1_RGB_ARB 0x8591
#define GL_OPERAND2_RGB_ARB 0x8592
#define GL_OPERAND0_ALPHA_ARB 0x8598
#define GL_OPERAND1_ALPHA_ARB 0x8599
#define GL_OPERAND2_ALPHA_ARB 0x859A
#define GL_RGB_SCALE_ARB 0x8573
#define GL_ADD_SIGNED_ARB 0x8574
#define GL_INTERPOLATE_ARB 0x8575
#define GL_SUBTRACT_ARB 0x84E7
#define GL_CONSTANT_ARB 0x8576
#define GL_PRIMARY_COLOR_ARB 0x8577
#define GL_PREVIOUS_ARB 0x8578
#define GL_ARB_texture_env_crossbar 1
#define GL_ARB_texture_env_dot3 1
#define GL_DOT3_RGB_ARB 0x86AE
#define GL_DOT3_RGBA_ARB 0x86AF
#define GL_ARB_texture_filter_anisotropic 1
#define GL_ARB_texture_filter_minmax 1
#define GL_TEXTURE_REDUCTION_MODE_ARB 0x9366
#define GL_WEIGHTED_AVERAGE_ARB 0x9367
#define GL_ARB_texture_float 1
#define GL_TEXTURE_RED_TYPE_ARB 0x8C10
#define GL_TEXTURE_GREEN_TYPE_ARB 0x8C11
#define GL_TEXTURE_BLUE_TYPE_ARB 0x8C12
#define GL_TEXTURE_ALPHA_TYPE_ARB 0x8C13
#define GL_TEXTURE_LUMINANCE_TYPE_ARB 0x8C14
#define GL_TEXTURE_INTENSITY_TYPE_ARB 0x8C15
#define GL_TEXTURE_DEPTH_TYPE_ARB 0x8C16
#define GL_UNSIGNED_NORMALIZED_ARB 0x8C17
#define GL_RGBA32F_ARB 0x8814
#define GL_RGB32F_ARB 0x8815
#define GL_ALPHA32F_ARB 0x8816
#define GL_INTENSITY32F_ARB 0x8817
#define GL_LUMINANCE32F_ARB 0x8818
#define GL_LUMINANCE_ALPHA32F_ARB 0x8819
#define GL_RGBA16F_ARB 0x881A
#define GL_RGB16F_ARB 0x881B
#define GL_ALPHA16F_ARB 0x881C
#define GL_INTENSITY16F_ARB 0x881D
#define GL_LUMINANCE16F_ARB 0x881E
#define GL_LUMINANCE_ALPHA16F_ARB 0x881F
#define GL_ARB_texture_gather 1
#define GL_MIN_PROGRAM_TEXTURE_GATHER_OFFSET_ARB 0x8E5E
#define GL_MAX_PROGRAM_TEXTURE_GATHER_OFFSET_ARB 0x8E5F
#define GL_MAX_PROGRAM_TEXTURE_GATHER_COMPONENTS_ARB 0x8F9F
#define GL_ARB_texture_mirror_clamp_to_edge 1
#define GL_ARB_texture_mirrored_repeat 1
#define GL_MIRRORED_REPEAT_ARB 0x8370
#define GL_ARB_texture_multisample 1
#define GL_ARB_texture_non_power_of_two 1
#define GL_ARB_texture_query_levels 1
#define GL_ARB_texture_query_lod 1
#define GL_ARB_texture_rectangle 1
#define GL_TEXTURE_RECTANGLE_ARB 0x84F5
#define GL_TEXTURE_BINDING_RECTANGLE_ARB 0x84F6
#define GL_PROXY_TEXTURE_RECTANGLE_ARB 0x84F7
#define GL_MAX_RECTANGLE_TEXTURE_SIZE_ARB 0x84F8
#define GL_ARB_texture_rg 1
#define GL_ARB_texture_rgb10_a2ui 1
#define GL_ARB_texture_stencil8 1
#define GL_ARB_texture_storage 1
#define GL_ARB_texture_storage_multisample 1
#define GL_ARB_texture_swizzle 1
#define GL_ARB_texture_view 1
#define GL_ARB_timer_query 1
#define GL_ARB_transform_feedback2 1
#define GL_ARB_transform_feedback3 1
#define GL_ARB_transform_feedback_instanced 1
#define GL_ARB_transform_feedback_overflow_query 1
#define GL_TRANSFORM_FEEDBACK_OVERFLOW_ARB 0x82EC
#define GL_TRANSFORM_FEEDBACK_STREAM_OVERFLOW_ARB 0x82ED
#define GL_ARB_transpose_matrix 1
#define GL_TRANSPOSE_MODELVIEW_MATRIX_ARB 0x84E3
#define GL_TRANSPOSE_PROJECTION_MATRIX_ARB 0x84E4
#define GL_TRANSPOSE_TEXTURE_MATRIX_ARB 0x84E5
#define GL_TRANSPOSE_COLOR_MATRIX_ARB 0x84E6

typedef void (*glLoadTransposeMatrixfARB_function)(GLfloat *m);
glLoadTransposeMatrixfARB_function glLoadTransposeMatrixfARB;

typedef void (*glLoadTransposeMatrixdARB_function)(GLdouble *m);
glLoadTransposeMatrixdARB_function glLoadTransposeMatrixdARB;

typedef void (*glMultTransposeMatrixfARB_function)(GLfloat *m);
glMultTransposeMatrixfARB_function glMultTransposeMatrixfARB;

typedef void (*glMultTransposeMatrixdARB_function)(GLdouble *m);
glMultTransposeMatrixdARB_function glMultTransposeMatrixdARB;
#define GL_ARB_uniform_buffer_object 1
#define GL_ARB_vertex_array_bgra 1
#define GL_ARB_vertex_array_object 1
#define GL_ARB_vertex_attrib_64bit 1
#define GL_ARB_vertex_attrib_binding 1
#define GL_ARB_vertex_blend 1
#define GL_MAX_VERTEX_UNITS_ARB 0x86A4
#define GL_ACTIVE_VERTEX_UNITS_ARB 0x86A5
#define GL_WEIGHT_SUM_UNITY_ARB 0x86A6
#define GL_VERTEX_BLEND_ARB 0x86A7
#define GL_CURRENT_WEIGHT_ARB 0x86A8
#define GL_WEIGHT_ARRAY_TYPE_ARB 0x86A9
#define GL_WEIGHT_ARRAY_STRIDE_ARB 0x86AA
#define GL_WEIGHT_ARRAY_SIZE_ARB 0x86AB
#define GL_WEIGHT_ARRAY_POINTER_ARB 0x86AC
#define GL_WEIGHT_ARRAY_ARB 0x86AD
#define GL_MODELVIEW0_ARB 0x1700
#define GL_MODELVIEW1_ARB 0x850A
#define GL_MODELVIEW2_ARB 0x8722
#define GL_MODELVIEW3_ARB 0x8723
#define GL_MODELVIEW4_ARB 0x8724
#define GL_MODELVIEW5_ARB 0x8725
#define GL_MODELVIEW6_ARB 0x8726
#define GL_MODELVIEW7_ARB 0x8727
#define GL_MODELVIEW8_ARB 0x8728
#define GL_MODELVIEW9_ARB 0x8729
#define GL_MODELVIEW10_ARB 0x872A
#define GL_MODELVIEW11_ARB 0x872B
#define GL_MODELVIEW12_ARB 0x872C
#define GL_MODELVIEW13_ARB 0x872D
#define GL_MODELVIEW14_ARB 0x872E
#define GL_MODELVIEW15_ARB 0x872F
#define GL_MODELVIEW16_ARB 0x8730
#define GL_MODELVIEW17_ARB 0x8731
#define GL_MODELVIEW18_ARB 0x8732
#define GL_MODELVIEW19_ARB 0x8733
#define GL_MODELVIEW20_ARB 0x8734
#define GL_MODELVIEW21_ARB 0x8735
#define GL_MODELVIEW22_ARB 0x8736
#define GL_MODELVIEW23_ARB 0x8737
#define GL_MODELVIEW24_ARB 0x8738
#define GL_MODELVIEW25_ARB 0x8739
#define GL_MODELVIEW26_ARB 0x873A
#define GL_MODELVIEW27_ARB 0x873B
#define GL_MODELVIEW28_ARB 0x873C
#define GL_MODELVIEW29_ARB 0x873D
#define GL_MODELVIEW30_ARB 0x873E
#define GL_MODELVIEW31_ARB 0x873F

typedef void (*glWeightbvARB_function)(GLint size, GLbyte *weights);
glWeightbvARB_function glWeightbvARB;

typedef void (*glWeightsvARB_function)(GLint size, GLshort *weights);
glWeightsvARB_function glWeightsvARB;

typedef void (*glWeightivARB_function)(GLint size, GLint *weights);
glWeightivARB_function glWeightivARB;

typedef void (*glWeightfvARB_function)(GLint size, GLfloat *weights);
glWeightfvARB_function glWeightfvARB;

typedef void (*glWeightdvARB_function)(GLint size, GLdouble *weights);
glWeightdvARB_function glWeightdvARB;

typedef void (*glWeightubvARB_function)(GLint size, GLubyte *weights);
glWeightubvARB_function glWeightubvARB;

typedef void (*glWeightusvARB_function)(GLint size, GLushort *weights);
glWeightusvARB_function glWeightusvARB;

typedef void (*glWeightuivARB_function)(GLint size, GLuint *weights);
glWeightuivARB_function glWeightuivARB;

typedef void (*glWeightPointerARB_function)(GLint size, GLenum type, GLsizei stride, void * pointer);
glWeightPointerARB_function glWeightPointerARB;

typedef void (*glVertexBlendARB_function)(GLint count);
glVertexBlendARB_function glVertexBlendARB;
#define GL_ARB_vertex_buffer_object 1
#define GL_BUFFER_SIZE_ARB 0x8764
#define GL_BUFFER_USAGE_ARB 0x8765
#define GL_ARRAY_BUFFER_ARB 0x8892
#define GL_ELEMENT_ARRAY_BUFFER_ARB 0x8893
#define GL_ARRAY_BUFFER_BINDING_ARB 0x8894
#define GL_ELEMENT_ARRAY_BUFFER_BINDING_ARB 0x8895
#define GL_VERTEX_ARRAY_BUFFER_BINDING_ARB 0x8896
#define GL_NORMAL_ARRAY_BUFFER_BINDING_ARB 0x8897
#define GL_COLOR_ARRAY_BUFFER_BINDING_ARB 0x8898
#define GL_INDEX_ARRAY_BUFFER_BINDING_ARB 0x8899
#define GL_TEXTURE_COORD_ARRAY_BUFFER_BINDING_ARB 0x889A
#define GL_EDGE_FLAG_ARRAY_BUFFER_BINDING_ARB 0x889B
#define GL_SECONDARY_COLOR_ARRAY_BUFFER_BINDING_ARB 0x889C
#define GL_FOG_COORDINATE_ARRAY_BUFFER_BINDING_ARB 0x889D
#define GL_WEIGHT_ARRAY_BUFFER_BINDING_ARB 0x889E
#define GL_VERTEX_ATTRIB_ARRAY_BUFFER_BINDING_ARB 0x889F
#define GL_READ_ONLY_ARB 0x88B8
#define GL_WRITE_ONLY_ARB 0x88B9
#define GL_READ_WRITE_ARB 0x88BA
#define GL_BUFFER_ACCESS_ARB 0x88BB
#define GL_BUFFER_MAPPED_ARB 0x88BC
#define GL_BUFFER_MAP_POINTER_ARB 0x88BD
#define GL_STREAM_DRAW_ARB 0x88E0
#define GL_STREAM_READ_ARB 0x88E1
#define GL_STREAM_COPY_ARB 0x88E2
#define GL_STATIC_DRAW_ARB 0x88E4
#define GL_STATIC_READ_ARB 0x88E5
#define GL_STATIC_COPY_ARB 0x88E6
#define GL_DYNAMIC_DRAW_ARB 0x88E8
#define GL_DYNAMIC_READ_ARB 0x88E9
#define GL_DYNAMIC_COPY_ARB 0x88EA

typedef void (*glBindBufferARB_function)(GLenum target, GLuint buffer);
glBindBufferARB_function glBindBufferARB;

typedef void (*glDeleteBuffersARB_function)(GLsizei n, GLuint *buffers);
glDeleteBuffersARB_function glDeleteBuffersARB;

typedef void (*glGenBuffersARB_function)(GLsizei n, GLuint *buffers);
glGenBuffersARB_function glGenBuffersARB;

typedef GLboolean  (*glIsBufferARB_function)(GLuint buffer);
glIsBufferARB_function glIsBufferARB;

typedef void (*glBufferDataARB_function)(GLenum target, GLsizeiptrARB size, void * data, GLenum usage);
glBufferDataARB_function glBufferDataARB;

typedef void (*glBufferSubDataARB_function)(GLenum target, GLintptrARB offset, GLsizeiptrARB size, void * data);
glBufferSubDataARB_function glBufferSubDataARB;

typedef void (*glGetBufferSubDataARB_function)(GLenum target, GLintptrARB offset, GLsizeiptrARB size, void * data);
glGetBufferSubDataARB_function glGetBufferSubDataARB;

typedef void *  (*glMapBufferARB_function)(GLenum target, GLenum access);
glMapBufferARB_function glMapBufferARB;

typedef GLboolean  (*glUnmapBufferARB_function)(GLenum target);
glUnmapBufferARB_function glUnmapBufferARB;

typedef void (*glGetBufferParameterivARB_function)(GLenum target, GLenum pname, GLint *params);
glGetBufferParameterivARB_function glGetBufferParameterivARB;

typedef void (*glGetBufferPointervARB_function)(GLenum target, GLenum pname, void * *params);
glGetBufferPointervARB_function glGetBufferPointervARB;
#define GL_ARB_vertex_program 1
#define GL_COLOR_SUM_ARB 0x8458
#define GL_VERTEX_PROGRAM_ARB 0x8620
#define GL_VERTEX_ATTRIB_ARRAY_ENABLED_ARB 0x8622
#define GL_VERTEX_ATTRIB_ARRAY_SIZE_ARB 0x8623
#define GL_VERTEX_ATTRIB_ARRAY_STRIDE_ARB 0x8624
#define GL_VERTEX_ATTRIB_ARRAY_TYPE_ARB 0x8625
#define GL_CURRENT_VERTEX_ATTRIB_ARB 0x8626
#define GL_VERTEX_PROGRAM_POINT_SIZE_ARB 0x8642
#define GL_VERTEX_PROGRAM_TWO_SIDE_ARB 0x8643
#define GL_VERTEX_ATTRIB_ARRAY_POINTER_ARB 0x8645
#define GL_MAX_VERTEX_ATTRIBS_ARB 0x8869
#define GL_VERTEX_ATTRIB_ARRAY_NORMALIZED_ARB 0x886A
#define GL_PROGRAM_ADDRESS_REGISTERS_ARB 0x88B0
#define GL_MAX_PROGRAM_ADDRESS_REGISTERS_ARB 0x88B1
#define GL_PROGRAM_NATIVE_ADDRESS_REGISTERS_ARB 0x88B2
#define GL_MAX_PROGRAM_NATIVE_ADDRESS_REGISTERS_ARB 0x88B3

typedef void (*glVertexAttrib1dARB_function)(GLuint index, GLdouble x);
glVertexAttrib1dARB_function glVertexAttrib1dARB;

typedef void (*glVertexAttrib1dvARB_function)(GLuint index, GLdouble *v);
glVertexAttrib1dvARB_function glVertexAttrib1dvARB;

typedef void (*glVertexAttrib1fARB_function)(GLuint index, GLfloat x);
glVertexAttrib1fARB_function glVertexAttrib1fARB;

typedef void (*glVertexAttrib1fvARB_function)(GLuint index, GLfloat *v);
glVertexAttrib1fvARB_function glVertexAttrib1fvARB;

typedef void (*glVertexAttrib1sARB_function)(GLuint index, GLshort x);
glVertexAttrib1sARB_function glVertexAttrib1sARB;

typedef void (*glVertexAttrib1svARB_function)(GLuint index, GLshort *v);
glVertexAttrib1svARB_function glVertexAttrib1svARB;

typedef void (*glVertexAttrib2dARB_function)(GLuint index, GLdouble x, GLdouble y);
glVertexAttrib2dARB_function glVertexAttrib2dARB;

typedef void (*glVertexAttrib2dvARB_function)(GLuint index, GLdouble *v);
glVertexAttrib2dvARB_function glVertexAttrib2dvARB;

typedef void (*glVertexAttrib2fARB_function)(GLuint index, GLfloat x, GLfloat y);
glVertexAttrib2fARB_function glVertexAttrib2fARB;

typedef void (*glVertexAttrib2fvARB_function)(GLuint index, GLfloat *v);
glVertexAttrib2fvARB_function glVertexAttrib2fvARB;

typedef void (*glVertexAttrib2sARB_function)(GLuint index, GLshort x, GLshort y);
glVertexAttrib2sARB_function glVertexAttrib2sARB;

typedef void (*glVertexAttrib2svARB_function)(GLuint index, GLshort *v);
glVertexAttrib2svARB_function glVertexAttrib2svARB;

typedef void (*glVertexAttrib3dARB_function)(GLuint index, GLdouble x, GLdouble y, GLdouble z);
glVertexAttrib3dARB_function glVertexAttrib3dARB;

typedef void (*glVertexAttrib3dvARB_function)(GLuint index, GLdouble *v);
glVertexAttrib3dvARB_function glVertexAttrib3dvARB;

typedef void (*glVertexAttrib3fARB_function)(GLuint index, GLfloat x, GLfloat y, GLfloat z);
glVertexAttrib3fARB_function glVertexAttrib3fARB;

typedef void (*glVertexAttrib3fvARB_function)(GLuint index, GLfloat *v);
glVertexAttrib3fvARB_function glVertexAttrib3fvARB;

typedef void (*glVertexAttrib3sARB_function)(GLuint index, GLshort x, GLshort y, GLshort z);
glVertexAttrib3sARB_function glVertexAttrib3sARB;

typedef void (*glVertexAttrib3svARB_function)(GLuint index, GLshort *v);
glVertexAttrib3svARB_function glVertexAttrib3svARB;

typedef void (*glVertexAttrib4NbvARB_function)(GLuint index, GLbyte *v);
glVertexAttrib4NbvARB_function glVertexAttrib4NbvARB;

typedef void (*glVertexAttrib4NivARB_function)(GLuint index, GLint *v);
glVertexAttrib4NivARB_function glVertexAttrib4NivARB;

typedef void (*glVertexAttrib4NsvARB_function)(GLuint index, GLshort *v);
glVertexAttrib4NsvARB_function glVertexAttrib4NsvARB;

typedef void (*glVertexAttrib4NubARB_function)(GLuint index, GLubyte x, GLubyte y, GLubyte z, GLubyte w);
glVertexAttrib4NubARB_function glVertexAttrib4NubARB;

typedef void (*glVertexAttrib4NubvARB_function)(GLuint index, GLubyte *v);
glVertexAttrib4NubvARB_function glVertexAttrib4NubvARB;

typedef void (*glVertexAttrib4NuivARB_function)(GLuint index, GLuint *v);
glVertexAttrib4NuivARB_function glVertexAttrib4NuivARB;

typedef void (*glVertexAttrib4NusvARB_function)(GLuint index, GLushort *v);
glVertexAttrib4NusvARB_function glVertexAttrib4NusvARB;

typedef void (*glVertexAttrib4bvARB_function)(GLuint index, GLbyte *v);
glVertexAttrib4bvARB_function glVertexAttrib4bvARB;

typedef void (*glVertexAttrib4dARB_function)(GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
glVertexAttrib4dARB_function glVertexAttrib4dARB;

typedef void (*glVertexAttrib4dvARB_function)(GLuint index, GLdouble *v);
glVertexAttrib4dvARB_function glVertexAttrib4dvARB;

typedef void (*glVertexAttrib4fARB_function)(GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
glVertexAttrib4fARB_function glVertexAttrib4fARB;

typedef void (*glVertexAttrib4fvARB_function)(GLuint index, GLfloat *v);
glVertexAttrib4fvARB_function glVertexAttrib4fvARB;

typedef void (*glVertexAttrib4ivARB_function)(GLuint index, GLint *v);
glVertexAttrib4ivARB_function glVertexAttrib4ivARB;

typedef void (*glVertexAttrib4sARB_function)(GLuint index, GLshort x, GLshort y, GLshort z, GLshort w);
glVertexAttrib4sARB_function glVertexAttrib4sARB;

typedef void (*glVertexAttrib4svARB_function)(GLuint index, GLshort *v);
glVertexAttrib4svARB_function glVertexAttrib4svARB;

typedef void (*glVertexAttrib4ubvARB_function)(GLuint index, GLubyte *v);
glVertexAttrib4ubvARB_function glVertexAttrib4ubvARB;

typedef void (*glVertexAttrib4uivARB_function)(GLuint index, GLuint *v);
glVertexAttrib4uivARB_function glVertexAttrib4uivARB;

typedef void (*glVertexAttrib4usvARB_function)(GLuint index, GLushort *v);
glVertexAttrib4usvARB_function glVertexAttrib4usvARB;

typedef void (*glVertexAttribPointerARB_function)(GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, void * pointer);
glVertexAttribPointerARB_function glVertexAttribPointerARB;

typedef void (*glEnableVertexAttribArrayARB_function)(GLuint index);
glEnableVertexAttribArrayARB_function glEnableVertexAttribArrayARB;

typedef void (*glDisableVertexAttribArrayARB_function)(GLuint index);
glDisableVertexAttribArrayARB_function glDisableVertexAttribArrayARB;

typedef void (*glGetVertexAttribdvARB_function)(GLuint index, GLenum pname, GLdouble *params);
glGetVertexAttribdvARB_function glGetVertexAttribdvARB;

typedef void (*glGetVertexAttribfvARB_function)(GLuint index, GLenum pname, GLfloat *params);
glGetVertexAttribfvARB_function glGetVertexAttribfvARB;

typedef void (*glGetVertexAttribivARB_function)(GLuint index, GLenum pname, GLint *params);
glGetVertexAttribivARB_function glGetVertexAttribivARB;

typedef void (*glGetVertexAttribPointervARB_function)(GLuint index, GLenum pname, void * *pointer);
glGetVertexAttribPointervARB_function glGetVertexAttribPointervARB;
#define GL_ARB_vertex_shader 1
#define GL_VERTEX_SHADER_ARB 0x8B31
#define GL_MAX_VERTEX_UNIFORM_COMPONENTS_ARB 0x8B4A
#define GL_MAX_VARYING_FLOATS_ARB 0x8B4B
#define GL_MAX_VERTEX_TEXTURE_IMAGE_UNITS_ARB 0x8B4C
#define GL_MAX_COMBINED_TEXTURE_IMAGE_UNITS_ARB 0x8B4D
#define GL_OBJECT_ACTIVE_ATTRIBUTES_ARB 0x8B89
#define GL_OBJECT_ACTIVE_ATTRIBUTE_MAX_LENGTH_ARB 0x8B8A

typedef void (*glBindAttribLocationARB_function)(GLhandleARB programObj, GLuint index, GLcharARB *name);
glBindAttribLocationARB_function glBindAttribLocationARB;

typedef void (*glGetActiveAttribARB_function)(GLhandleARB programObj, GLuint index, GLsizei maxLength, GLsizei *length, GLint *size, GLenum *type, GLcharARB *name);
glGetActiveAttribARB_function glGetActiveAttribARB;

typedef GLint  (*glGetAttribLocationARB_function)(GLhandleARB programObj, GLcharARB *name);
glGetAttribLocationARB_function glGetAttribLocationARB;
#define GL_ARB_vertex_type_10f_11f_11f_rev 1
#define GL_ARB_vertex_type_2_10_10_10_rev 1
#define GL_ARB_viewport_array 1

typedef void (*glDepthRangeArraydvNV_function)(GLuint first, GLsizei count, GLdouble *v);
glDepthRangeArraydvNV_function glDepthRangeArraydvNV;

typedef void (*glDepthRangeIndexeddNV_function)(GLuint index, GLdouble n, GLdouble f);
glDepthRangeIndexeddNV_function glDepthRangeIndexeddNV;
#define GL_ARB_window_pos 1

typedef void (*glWindowPos2dARB_function)(GLdouble x, GLdouble y);
glWindowPos2dARB_function glWindowPos2dARB;

typedef void (*glWindowPos2dvARB_function)(GLdouble *v);
glWindowPos2dvARB_function glWindowPos2dvARB;

typedef void (*glWindowPos2fARB_function)(GLfloat x, GLfloat y);
glWindowPos2fARB_function glWindowPos2fARB;

typedef void (*glWindowPos2fvARB_function)(GLfloat *v);
glWindowPos2fvARB_function glWindowPos2fvARB;

typedef void (*glWindowPos2iARB_function)(GLint x, GLint y);
glWindowPos2iARB_function glWindowPos2iARB;

typedef void (*glWindowPos2ivARB_function)(GLint *v);
glWindowPos2ivARB_function glWindowPos2ivARB;

typedef void (*glWindowPos2sARB_function)(GLshort x, GLshort y);
glWindowPos2sARB_function glWindowPos2sARB;

typedef void (*glWindowPos2svARB_function)(GLshort *v);
glWindowPos2svARB_function glWindowPos2svARB;

typedef void (*glWindowPos3dARB_function)(GLdouble x, GLdouble y, GLdouble z);
glWindowPos3dARB_function glWindowPos3dARB;

typedef void (*glWindowPos3dvARB_function)(GLdouble *v);
glWindowPos3dvARB_function glWindowPos3dvARB;

typedef void (*glWindowPos3fARB_function)(GLfloat x, GLfloat y, GLfloat z);
glWindowPos3fARB_function glWindowPos3fARB;

typedef void (*glWindowPos3fvARB_function)(GLfloat *v);
glWindowPos3fvARB_function glWindowPos3fvARB;

typedef void (*glWindowPos3iARB_function)(GLint x, GLint y, GLint z);
glWindowPos3iARB_function glWindowPos3iARB;

typedef void (*glWindowPos3ivARB_function)(GLint *v);
glWindowPos3ivARB_function glWindowPos3ivARB;

typedef void (*glWindowPos3sARB_function)(GLshort x, GLshort y, GLshort z);
glWindowPos3sARB_function glWindowPos3sARB;

typedef void (*glWindowPos3svARB_function)(GLshort *v);
glWindowPos3svARB_function glWindowPos3svARB;
#define GL_KHR_blend_equation_advanced 1
#define GL_MULTIPLY_KHR 0x9294
#define GL_SCREEN_KHR 0x9295
#define GL_OVERLAY_KHR 0x9296
#define GL_DARKEN_KHR 0x9297
#define GL_LIGHTEN_KHR 0x9298
#define GL_COLORDODGE_KHR 0x9299
#define GL_COLORBURN_KHR 0x929A
#define GL_HARDLIGHT_KHR 0x929B
#define GL_SOFTLIGHT_KHR 0x929C
#define GL_DIFFERENCE_KHR 0x929E
#define GL_EXCLUSION_KHR 0x92A0
#define GL_HSL_HUE_KHR 0x92AD
#define GL_HSL_SATURATION_KHR 0x92AE
#define GL_HSL_COLOR_KHR 0x92AF
#define GL_HSL_LUMINOSITY_KHR 0x92B0

typedef void (*glBlendBarrierKHR_function)();
glBlendBarrierKHR_function glBlendBarrierKHR;
#define GL_KHR_blend_equation_advanced_coherent 1
#define GL_BLEND_ADVANCED_COHERENT_KHR 0x9285
#define GL_KHR_context_flush_control 1
#define GL_KHR_debug 1
#define GL_KHR_no_error 1
#define GL_CONTEXT_FLAG_NO_ERROR_BIT_KHR 0x00000008
#define GL_KHR_parallel_shader_compile 1
#define GL_MAX_SHADER_COMPILER_THREADS_KHR 0x91B0
#define GL_COMPLETION_STATUS_KHR 0x91B1

typedef void (*glMaxShaderCompilerThreadsKHR_function)(GLuint count);
glMaxShaderCompilerThreadsKHR_function glMaxShaderCompilerThreadsKHR;
#define GL_KHR_robust_buffer_access_behavior 1
#define GL_KHR_robustness 1
#define GL_CONTEXT_ROBUST_ACCESS 0x90F3
#define GL_KHR_shader_subgroup 1
#define GL_SUBGROUP_SIZE_KHR 0x9532
#define GL_SUBGROUP_SUPPORTED_STAGES_KHR 0x9533
#define GL_SUBGROUP_SUPPORTED_FEATURES_KHR 0x9534
#define GL_SUBGROUP_QUAD_ALL_STAGES_KHR 0x9535
#define GL_SUBGROUP_FEATURE_BASIC_BIT_KHR 0x00000001
#define GL_SUBGROUP_FEATURE_VOTE_BIT_KHR 0x00000002
#define GL_SUBGROUP_FEATURE_ARITHMETIC_BIT_KHR 0x00000004
#define GL_SUBGROUP_FEATURE_BALLOT_BIT_KHR 0x00000008
#define GL_SUBGROUP_FEATURE_SHUFFLE_BIT_KHR 0x00000010
#define GL_SUBGROUP_FEATURE_SHUFFLE_RELATIVE_BIT_KHR 0x00000020
#define GL_SUBGROUP_FEATURE_CLUSTERED_BIT_KHR 0x00000040
#define GL_SUBGROUP_FEATURE_QUAD_BIT_KHR 0x00000080
#define GL_KHR_texture_compression_astc_hdr 1
#define GL_COMPRESSED_RGBA_ASTC_4x4_KHR 0x93B0
#define GL_COMPRESSED_RGBA_ASTC_5x4_KHR 0x93B1
#define GL_COMPRESSED_RGBA_ASTC_5x5_KHR 0x93B2
#define GL_COMPRESSED_RGBA_ASTC_6x5_KHR 0x93B3
#define GL_COMPRESSED_RGBA_ASTC_6x6_KHR 0x93B4
#define GL_COMPRESSED_RGBA_ASTC_8x5_KHR 0x93B5
#define GL_COMPRESSED_RGBA_ASTC_8x6_KHR 0x93B6
#define GL_COMPRESSED_RGBA_ASTC_8x8_KHR 0x93B7
#define GL_COMPRESSED_RGBA_ASTC_10x5_KHR 0x93B8
#define GL_COMPRESSED_RGBA_ASTC_10x6_KHR 0x93B9
#define GL_COMPRESSED_RGBA_ASTC_10x8_KHR 0x93BA
#define GL_COMPRESSED_RGBA_ASTC_10x10_KHR 0x93BB
#define GL_COMPRESSED_RGBA_ASTC_12x10_KHR 0x93BC
#define GL_COMPRESSED_RGBA_ASTC_12x12_KHR 0x93BD
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_4x4_KHR 0x93D0
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x4_KHR 0x93D1
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x5_KHR 0x93D2
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x5_KHR 0x93D3
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x6_KHR 0x93D4
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x5_KHR 0x93D5
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x6_KHR 0x93D6
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x8_KHR 0x93D7
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x5_KHR 0x93D8
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x6_KHR 0x93D9
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x8_KHR 0x93DA
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x10_KHR 0x93DB
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_12x10_KHR 0x93DC
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_12x12_KHR 0x93DD
#define GL_KHR_texture_compression_astc_ldr 1
#define GL_KHR_texture_compression_astc_sliced_3d 1
#define GL_OES_byte_coordinates 1

typedef void (*glMultiTexCoord1bOES_function)(GLenum texture, GLbyte s);
glMultiTexCoord1bOES_function glMultiTexCoord1bOES;

typedef void (*glMultiTexCoord1bvOES_function)(GLenum texture, GLbyte *coords);
glMultiTexCoord1bvOES_function glMultiTexCoord1bvOES;

typedef void (*glMultiTexCoord2bOES_function)(GLenum texture, GLbyte s, GLbyte t);
glMultiTexCoord2bOES_function glMultiTexCoord2bOES;

typedef void (*glMultiTexCoord2bvOES_function)(GLenum texture, GLbyte *coords);
glMultiTexCoord2bvOES_function glMultiTexCoord2bvOES;

typedef void (*glMultiTexCoord3bOES_function)(GLenum texture, GLbyte s, GLbyte t, GLbyte r);
glMultiTexCoord3bOES_function glMultiTexCoord3bOES;

typedef void (*glMultiTexCoord3bvOES_function)(GLenum texture, GLbyte *coords);
glMultiTexCoord3bvOES_function glMultiTexCoord3bvOES;

typedef void (*glMultiTexCoord4bOES_function)(GLenum texture, GLbyte s, GLbyte t, GLbyte r, GLbyte q);
glMultiTexCoord4bOES_function glMultiTexCoord4bOES;

typedef void (*glMultiTexCoord4bvOES_function)(GLenum texture, GLbyte *coords);
glMultiTexCoord4bvOES_function glMultiTexCoord4bvOES;

typedef void (*glTexCoord1bOES_function)(GLbyte s);
glTexCoord1bOES_function glTexCoord1bOES;

typedef void (*glTexCoord1bvOES_function)(GLbyte *coords);
glTexCoord1bvOES_function glTexCoord1bvOES;

typedef void (*glTexCoord2bOES_function)(GLbyte s, GLbyte t);
glTexCoord2bOES_function glTexCoord2bOES;

typedef void (*glTexCoord2bvOES_function)(GLbyte *coords);
glTexCoord2bvOES_function glTexCoord2bvOES;

typedef void (*glTexCoord3bOES_function)(GLbyte s, GLbyte t, GLbyte r);
glTexCoord3bOES_function glTexCoord3bOES;

typedef void (*glTexCoord3bvOES_function)(GLbyte *coords);
glTexCoord3bvOES_function glTexCoord3bvOES;

typedef void (*glTexCoord4bOES_function)(GLbyte s, GLbyte t, GLbyte r, GLbyte q);
glTexCoord4bOES_function glTexCoord4bOES;

typedef void (*glTexCoord4bvOES_function)(GLbyte *coords);
glTexCoord4bvOES_function glTexCoord4bvOES;

typedef void (*glVertex2bOES_function)(GLbyte x, GLbyte y);
glVertex2bOES_function glVertex2bOES;

typedef void (*glVertex2bvOES_function)(GLbyte *coords);
glVertex2bvOES_function glVertex2bvOES;

typedef void (*glVertex3bOES_function)(GLbyte x, GLbyte y, GLbyte z);
glVertex3bOES_function glVertex3bOES;

typedef void (*glVertex3bvOES_function)(GLbyte *coords);
glVertex3bvOES_function glVertex3bvOES;

typedef void (*glVertex4bOES_function)(GLbyte x, GLbyte y, GLbyte z, GLbyte w);
glVertex4bOES_function glVertex4bOES;

typedef void (*glVertex4bvOES_function)(GLbyte *coords);
glVertex4bvOES_function glVertex4bvOES;
#define GL_OES_compressed_paletted_texture 1
#define GL_PALETTE4_RGB8_OES 0x8B90
#define GL_PALETTE4_RGBA8_OES 0x8B91
#define GL_PALETTE4_R5_G6_B5_OES 0x8B92
#define GL_PALETTE4_RGBA4_OES 0x8B93
#define GL_PALETTE4_RGB5_A1_OES 0x8B94
#define GL_PALETTE8_RGB8_OES 0x8B95
#define GL_PALETTE8_RGBA8_OES 0x8B96
#define GL_PALETTE8_R5_G6_B5_OES 0x8B97
#define GL_PALETTE8_RGBA4_OES 0x8B98
#define GL_PALETTE8_RGB5_A1_OES 0x8B99
#define GL_OES_fixed_point 1
#define GL_FIXED_OES 0x140C

typedef void (*glAlphaFuncxOES_function)(GLenum func, GLfixed ref);
glAlphaFuncxOES_function glAlphaFuncxOES;

typedef void (*glClearColorxOES_function)(GLfixed red, GLfixed green, GLfixed blue, GLfixed alpha);
glClearColorxOES_function glClearColorxOES;

typedef void (*glClearDepthxOES_function)(GLfixed depth);
glClearDepthxOES_function glClearDepthxOES;

typedef void (*glClipPlanexOES_function)(GLenum plane, GLfixed *equation);
glClipPlanexOES_function glClipPlanexOES;

typedef void (*glColor4xOES_function)(GLfixed red, GLfixed green, GLfixed blue, GLfixed alpha);
glColor4xOES_function glColor4xOES;

typedef void (*glDepthRangexOES_function)(GLfixed n, GLfixed f);
glDepthRangexOES_function glDepthRangexOES;

typedef void (*glFogxOES_function)(GLenum pname, GLfixed param);
glFogxOES_function glFogxOES;

typedef void (*glFogxvOES_function)(GLenum pname, GLfixed *param);
glFogxvOES_function glFogxvOES;

typedef void (*glFrustumxOES_function)(GLfixed l, GLfixed r, GLfixed b, GLfixed t, GLfixed n, GLfixed f);
glFrustumxOES_function glFrustumxOES;

typedef void (*glGetClipPlanexOES_function)(GLenum plane, GLfixed *equation);
glGetClipPlanexOES_function glGetClipPlanexOES;

typedef void (*glGetFixedvOES_function)(GLenum pname, GLfixed *params);
glGetFixedvOES_function glGetFixedvOES;

typedef void (*glGetTexEnvxvOES_function)(GLenum target, GLenum pname, GLfixed *params);
glGetTexEnvxvOES_function glGetTexEnvxvOES;

typedef void (*glGetTexParameterxvOES_function)(GLenum target, GLenum pname, GLfixed *params);
glGetTexParameterxvOES_function glGetTexParameterxvOES;

typedef void (*glLightModelxOES_function)(GLenum pname, GLfixed param);
glLightModelxOES_function glLightModelxOES;

typedef void (*glLightModelxvOES_function)(GLenum pname, GLfixed *param);
glLightModelxvOES_function glLightModelxvOES;

typedef void (*glLightxOES_function)(GLenum light, GLenum pname, GLfixed param);
glLightxOES_function glLightxOES;

typedef void (*glLightxvOES_function)(GLenum light, GLenum pname, GLfixed *params);
glLightxvOES_function glLightxvOES;

typedef void (*glLineWidthxOES_function)(GLfixed width);
glLineWidthxOES_function glLineWidthxOES;

typedef void (*glLoadMatrixxOES_function)(GLfixed *m);
glLoadMatrixxOES_function glLoadMatrixxOES;

typedef void (*glMaterialxOES_function)(GLenum face, GLenum pname, GLfixed param);
glMaterialxOES_function glMaterialxOES;

typedef void (*glMaterialxvOES_function)(GLenum face, GLenum pname, GLfixed *param);
glMaterialxvOES_function glMaterialxvOES;

typedef void (*glMultMatrixxOES_function)(GLfixed *m);
glMultMatrixxOES_function glMultMatrixxOES;

typedef void (*glMultiTexCoord4xOES_function)(GLenum texture, GLfixed s, GLfixed t, GLfixed r, GLfixed q);
glMultiTexCoord4xOES_function glMultiTexCoord4xOES;

typedef void (*glNormal3xOES_function)(GLfixed nx, GLfixed ny, GLfixed nz);
glNormal3xOES_function glNormal3xOES;

typedef void (*glOrthoxOES_function)(GLfixed l, GLfixed r, GLfixed b, GLfixed t, GLfixed n, GLfixed f);
glOrthoxOES_function glOrthoxOES;

typedef void (*glPointParameterxvOES_function)(GLenum pname, GLfixed *params);
glPointParameterxvOES_function glPointParameterxvOES;

typedef void (*glPointSizexOES_function)(GLfixed size);
glPointSizexOES_function glPointSizexOES;

typedef void (*glPolygonOffsetxOES_function)(GLfixed factor, GLfixed units);
glPolygonOffsetxOES_function glPolygonOffsetxOES;

typedef void (*glRotatexOES_function)(GLfixed angle, GLfixed x, GLfixed y, GLfixed z);
glRotatexOES_function glRotatexOES;

typedef void (*glScalexOES_function)(GLfixed x, GLfixed y, GLfixed z);
glScalexOES_function glScalexOES;

typedef void (*glTexEnvxOES_function)(GLenum target, GLenum pname, GLfixed param);
glTexEnvxOES_function glTexEnvxOES;

typedef void (*glTexEnvxvOES_function)(GLenum target, GLenum pname, GLfixed *params);
glTexEnvxvOES_function glTexEnvxvOES;

typedef void (*glTexParameterxOES_function)(GLenum target, GLenum pname, GLfixed param);
glTexParameterxOES_function glTexParameterxOES;

typedef void (*glTexParameterxvOES_function)(GLenum target, GLenum pname, GLfixed *params);
glTexParameterxvOES_function glTexParameterxvOES;

typedef void (*glTranslatexOES_function)(GLfixed x, GLfixed y, GLfixed z);
glTranslatexOES_function glTranslatexOES;

typedef void (*glAccumxOES_function)(GLenum op, GLfixed value);
glAccumxOES_function glAccumxOES;

typedef void (*glBitmapxOES_function)(GLsizei width, GLsizei height, GLfixed xorig, GLfixed yorig, GLfixed xmove, GLfixed ymove, GLubyte *bitmap);
glBitmapxOES_function glBitmapxOES;

typedef void (*glBlendColorxOES_function)(GLfixed red, GLfixed green, GLfixed blue, GLfixed alpha);
glBlendColorxOES_function glBlendColorxOES;

typedef void (*glClearAccumxOES_function)(GLfixed red, GLfixed green, GLfixed blue, GLfixed alpha);
glClearAccumxOES_function glClearAccumxOES;

typedef void (*glColor3xOES_function)(GLfixed red, GLfixed green, GLfixed blue);
glColor3xOES_function glColor3xOES;

typedef void (*glColor3xvOES_function)(GLfixed *components);
glColor3xvOES_function glColor3xvOES;

typedef void (*glColor4xvOES_function)(GLfixed *components);
glColor4xvOES_function glColor4xvOES;

typedef void (*glConvolutionParameterxOES_function)(GLenum target, GLenum pname, GLfixed param);
glConvolutionParameterxOES_function glConvolutionParameterxOES;

typedef void (*glConvolutionParameterxvOES_function)(GLenum target, GLenum pname, GLfixed *params);
glConvolutionParameterxvOES_function glConvolutionParameterxvOES;

typedef void (*glEvalCoord1xOES_function)(GLfixed u);
glEvalCoord1xOES_function glEvalCoord1xOES;

typedef void (*glEvalCoord1xvOES_function)(GLfixed *coords);
glEvalCoord1xvOES_function glEvalCoord1xvOES;

typedef void (*glEvalCoord2xOES_function)(GLfixed u, GLfixed v);
glEvalCoord2xOES_function glEvalCoord2xOES;

typedef void (*glEvalCoord2xvOES_function)(GLfixed *coords);
glEvalCoord2xvOES_function glEvalCoord2xvOES;

typedef void (*glFeedbackBufferxOES_function)(GLsizei n, GLenum type, GLfixed *buffer);
glFeedbackBufferxOES_function glFeedbackBufferxOES;

typedef void (*glGetConvolutionParameterxvOES_function)(GLenum target, GLenum pname, GLfixed *params);
glGetConvolutionParameterxvOES_function glGetConvolutionParameterxvOES;

typedef void (*glGetHistogramParameterxvOES_function)(GLenum target, GLenum pname, GLfixed *params);
glGetHistogramParameterxvOES_function glGetHistogramParameterxvOES;

typedef void (*glGetLightxOES_function)(GLenum light, GLenum pname, GLfixed *params);
glGetLightxOES_function glGetLightxOES;

typedef void (*glGetMapxvOES_function)(GLenum target, GLenum query, GLfixed *v);
glGetMapxvOES_function glGetMapxvOES;

typedef void (*glGetMaterialxOES_function)(GLenum face, GLenum pname, GLfixed param);
glGetMaterialxOES_function glGetMaterialxOES;

typedef void (*glGetPixelMapxv_function)(GLenum map, GLint size, GLfixed *values);
glGetPixelMapxv_function glGetPixelMapxv;

typedef void (*glGetTexGenxvOES_function)(GLenum coord, GLenum pname, GLfixed *params);
glGetTexGenxvOES_function glGetTexGenxvOES;

typedef void (*glGetTexLevelParameterxvOES_function)(GLenum target, GLint level, GLenum pname, GLfixed *params);
glGetTexLevelParameterxvOES_function glGetTexLevelParameterxvOES;

typedef void (*glIndexxOES_function)(GLfixed component);
glIndexxOES_function glIndexxOES;

typedef void (*glIndexxvOES_function)(GLfixed *component);
glIndexxvOES_function glIndexxvOES;

typedef void (*glLoadTransposeMatrixxOES_function)(GLfixed *m);
glLoadTransposeMatrixxOES_function glLoadTransposeMatrixxOES;

typedef void (*glMap1xOES_function)(GLenum target, GLfixed u1, GLfixed u2, GLint stride, GLint order, GLfixed points);
glMap1xOES_function glMap1xOES;

typedef void (*glMap2xOES_function)(GLenum target, GLfixed u1, GLfixed u2, GLint ustride, GLint uorder, GLfixed v1, GLfixed v2, GLint vstride, GLint vorder, GLfixed points);
glMap2xOES_function glMap2xOES;

typedef void (*glMapGrid1xOES_function)(GLint n, GLfixed u1, GLfixed u2);
glMapGrid1xOES_function glMapGrid1xOES;

typedef void (*glMapGrid2xOES_function)(GLint n, GLfixed u1, GLfixed u2, GLfixed v1, GLfixed v2);
glMapGrid2xOES_function glMapGrid2xOES;

typedef void (*glMultTransposeMatrixxOES_function)(GLfixed *m);
glMultTransposeMatrixxOES_function glMultTransposeMatrixxOES;

typedef void (*glMultiTexCoord1xOES_function)(GLenum texture, GLfixed s);
glMultiTexCoord1xOES_function glMultiTexCoord1xOES;

typedef void (*glMultiTexCoord1xvOES_function)(GLenum texture, GLfixed *coords);
glMultiTexCoord1xvOES_function glMultiTexCoord1xvOES;

typedef void (*glMultiTexCoord2xOES_function)(GLenum texture, GLfixed s, GLfixed t);
glMultiTexCoord2xOES_function glMultiTexCoord2xOES;

typedef void (*glMultiTexCoord2xvOES_function)(GLenum texture, GLfixed *coords);
glMultiTexCoord2xvOES_function glMultiTexCoord2xvOES;

typedef void (*glMultiTexCoord3xOES_function)(GLenum texture, GLfixed s, GLfixed t, GLfixed r);
glMultiTexCoord3xOES_function glMultiTexCoord3xOES;

typedef void (*glMultiTexCoord3xvOES_function)(GLenum texture, GLfixed *coords);
glMultiTexCoord3xvOES_function glMultiTexCoord3xvOES;

typedef void (*glMultiTexCoord4xvOES_function)(GLenum texture, GLfixed *coords);
glMultiTexCoord4xvOES_function glMultiTexCoord4xvOES;

typedef void (*glNormal3xvOES_function)(GLfixed *coords);
glNormal3xvOES_function glNormal3xvOES;

typedef void (*glPassThroughxOES_function)(GLfixed token);
glPassThroughxOES_function glPassThroughxOES;

typedef void (*glPixelMapx_function)(GLenum map, GLint size, GLfixed *values);
glPixelMapx_function glPixelMapx;

typedef void (*glPixelStorex_function)(GLenum pname, GLfixed param);
glPixelStorex_function glPixelStorex;

typedef void (*glPixelTransferxOES_function)(GLenum pname, GLfixed param);
glPixelTransferxOES_function glPixelTransferxOES;

typedef void (*glPixelZoomxOES_function)(GLfixed xfactor, GLfixed yfactor);
glPixelZoomxOES_function glPixelZoomxOES;

typedef void (*glPrioritizeTexturesxOES_function)(GLsizei n, GLuint *textures, GLfixed *priorities);
glPrioritizeTexturesxOES_function glPrioritizeTexturesxOES;

typedef void (*glRasterPos2xOES_function)(GLfixed x, GLfixed y);
glRasterPos2xOES_function glRasterPos2xOES;

typedef void (*glRasterPos2xvOES_function)(GLfixed *coords);
glRasterPos2xvOES_function glRasterPos2xvOES;

typedef void (*glRasterPos3xOES_function)(GLfixed x, GLfixed y, GLfixed z);
glRasterPos3xOES_function glRasterPos3xOES;

typedef void (*glRasterPos3xvOES_function)(GLfixed *coords);
glRasterPos3xvOES_function glRasterPos3xvOES;

typedef void (*glRasterPos4xOES_function)(GLfixed x, GLfixed y, GLfixed z, GLfixed w);
glRasterPos4xOES_function glRasterPos4xOES;

typedef void (*glRasterPos4xvOES_function)(GLfixed *coords);
glRasterPos4xvOES_function glRasterPos4xvOES;

typedef void (*glRectxOES_function)(GLfixed x1, GLfixed y1, GLfixed x2, GLfixed y2);
glRectxOES_function glRectxOES;

typedef void (*glRectxvOES_function)(GLfixed *v1, GLfixed *v2);
glRectxvOES_function glRectxvOES;

typedef void (*glTexCoord1xOES_function)(GLfixed s);
glTexCoord1xOES_function glTexCoord1xOES;

typedef void (*glTexCoord1xvOES_function)(GLfixed *coords);
glTexCoord1xvOES_function glTexCoord1xvOES;

typedef void (*glTexCoord2xOES_function)(GLfixed s, GLfixed t);
glTexCoord2xOES_function glTexCoord2xOES;

typedef void (*glTexCoord2xvOES_function)(GLfixed *coords);
glTexCoord2xvOES_function glTexCoord2xvOES;

typedef void (*glTexCoord3xOES_function)(GLfixed s, GLfixed t, GLfixed r);
glTexCoord3xOES_function glTexCoord3xOES;

typedef void (*glTexCoord3xvOES_function)(GLfixed *coords);
glTexCoord3xvOES_function glTexCoord3xvOES;

typedef void (*glTexCoord4xOES_function)(GLfixed s, GLfixed t, GLfixed r, GLfixed q);
glTexCoord4xOES_function glTexCoord4xOES;

typedef void (*glTexCoord4xvOES_function)(GLfixed *coords);
glTexCoord4xvOES_function glTexCoord4xvOES;

typedef void (*glTexGenxOES_function)(GLenum coord, GLenum pname, GLfixed param);
glTexGenxOES_function glTexGenxOES;

typedef void (*glTexGenxvOES_function)(GLenum coord, GLenum pname, GLfixed *params);
glTexGenxvOES_function glTexGenxvOES;

typedef void (*glVertex2xOES_function)(GLfixed x);
glVertex2xOES_function glVertex2xOES;

typedef void (*glVertex2xvOES_function)(GLfixed *coords);
glVertex2xvOES_function glVertex2xvOES;

typedef void (*glVertex3xOES_function)(GLfixed x, GLfixed y);
glVertex3xOES_function glVertex3xOES;

typedef void (*glVertex3xvOES_function)(GLfixed *coords);
glVertex3xvOES_function glVertex3xvOES;

typedef void (*glVertex4xOES_function)(GLfixed x, GLfixed y, GLfixed z);
glVertex4xOES_function glVertex4xOES;

typedef void (*glVertex4xvOES_function)(GLfixed *coords);
glVertex4xvOES_function glVertex4xvOES;
#define GL_OES_query_matrix 1

typedef GLbitfield  (*glQueryMatrixxOES_function)(GLfixed *mantissa, GLint *exponent);
glQueryMatrixxOES_function glQueryMatrixxOES;
#define GL_OES_read_format 1
#define GL_IMPLEMENTATION_COLOR_READ_TYPE_OES 0x8B9A
#define GL_IMPLEMENTATION_COLOR_READ_FORMAT_OES 0x8B9B
#define GL_OES_single_precision 1

typedef void (*glClearDepthfOES_function)(GLclampf depth);
glClearDepthfOES_function glClearDepthfOES;

typedef void (*glClipPlanefOES_function)(GLenum plane, GLfloat *equation);
glClipPlanefOES_function glClipPlanefOES;

typedef void (*glDepthRangefOES_function)(GLclampf n, GLclampf f);
glDepthRangefOES_function glDepthRangefOES;

typedef void (*glFrustumfOES_function)(GLfloat l, GLfloat r, GLfloat b, GLfloat t, GLfloat n, GLfloat f);
glFrustumfOES_function glFrustumfOES;

typedef void (*glGetClipPlanefOES_function)(GLenum plane, GLfloat *equation);
glGetClipPlanefOES_function glGetClipPlanefOES;

typedef void (*glOrthofOES_function)(GLfloat l, GLfloat r, GLfloat b, GLfloat t, GLfloat n, GLfloat f);
glOrthofOES_function glOrthofOES;
#define GL_3DFX_multisample 1
#define GL_MULTISAMPLE_3DFX 0x86B2
#define GL_SAMPLE_BUFFERS_3DFX 0x86B3
#define GL_SAMPLES_3DFX 0x86B4
#define GL_MULTISAMPLE_BIT_3DFX 0x20000000
#define GL_3DFX_tbuffer 1

typedef void (*glTbufferMask3DFX_function)(GLuint mask);
glTbufferMask3DFX_function glTbufferMask3DFX;
#define GL_3DFX_texture_compression_FXT1 1
#define GL_COMPRESSED_RGB_FXT1_3DFX 0x86B0
#define GL_COMPRESSED_RGBA_FXT1_3DFX 0x86B1
#define GL_AMD_blend_minmax_factor 1
#define GL_FACTOR_MIN_AMD 0x901C
#define GL_FACTOR_MAX_AMD 0x901D
#define GL_AMD_conservative_depth 1
#define GL_AMD_debug_output 1

typedef void (*GLDEBUGPROCAMD)(GLuint id, GLenum category, GLenum severity, GLsizei length, GLchar *message, void * userParam);
#define GL_MAX_DEBUG_MESSAGE_LENGTH_AMD 0x9143
#define GL_MAX_DEBUG_LOGGED_MESSAGES_AMD 0x9144
#define GL_DEBUG_LOGGED_MESSAGES_AMD 0x9145
#define GL_DEBUG_SEVERITY_HIGH_AMD 0x9146
#define GL_DEBUG_SEVERITY_MEDIUM_AMD 0x9147
#define GL_DEBUG_SEVERITY_LOW_AMD 0x9148
#define GL_DEBUG_CATEGORY_API_ERROR_AMD 0x9149
#define GL_DEBUG_CATEGORY_WINDOW_SYSTEM_AMD 0x914A
#define GL_DEBUG_CATEGORY_DEPRECATION_AMD 0x914B
#define GL_DEBUG_CATEGORY_UNDEFINED_BEHAVIOR_AMD 0x914C
#define GL_DEBUG_CATEGORY_PERFORMANCE_AMD 0x914D
#define GL_DEBUG_CATEGORY_SHADER_COMPILER_AMD 0x914E
#define GL_DEBUG_CATEGORY_APPLICATION_AMD 0x914F
#define GL_DEBUG_CATEGORY_OTHER_AMD 0x9150

typedef void (*glDebugMessageEnableAMD_function)(GLenum category, GLenum severity, GLsizei count, GLuint *ids, GLboolean enabled);
glDebugMessageEnableAMD_function glDebugMessageEnableAMD;

typedef void (*glDebugMessageInsertAMD_function)(GLenum category, GLenum severity, GLuint id, GLsizei length, GLchar *buf);
glDebugMessageInsertAMD_function glDebugMessageInsertAMD;

typedef void (*glDebugMessageCallbackAMD_function)(GLDEBUGPROCAMD callback, void * userParam);
glDebugMessageCallbackAMD_function glDebugMessageCallbackAMD;

typedef GLuint  (*glGetDebugMessageLogAMD_function)(GLuint count, GLsizei bufSize, GLenum *categories, GLenum *severities, GLuint *ids, GLsizei *lengths, GLchar *message);
glGetDebugMessageLogAMD_function glGetDebugMessageLogAMD;
#define GL_AMD_depth_clamp_separate 1
#define GL_DEPTH_CLAMP_NEAR_AMD 0x901E
#define GL_DEPTH_CLAMP_FAR_AMD 0x901F
#define GL_AMD_draw_buffers_blend 1

typedef void (*glBlendFuncIndexedAMD_function)(GLuint buf, GLenum src, GLenum dst);
glBlendFuncIndexedAMD_function glBlendFuncIndexedAMD;

typedef void (*glBlendFuncSeparateIndexedAMD_function)(GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha);
glBlendFuncSeparateIndexedAMD_function glBlendFuncSeparateIndexedAMD;

typedef void (*glBlendEquationIndexedAMD_function)(GLuint buf, GLenum mode);
glBlendEquationIndexedAMD_function glBlendEquationIndexedAMD;

typedef void (*glBlendEquationSeparateIndexedAMD_function)(GLuint buf, GLenum modeRGB, GLenum modeAlpha);
glBlendEquationSeparateIndexedAMD_function glBlendEquationSeparateIndexedAMD;
#define GL_AMD_framebuffer_multisample_advanced 1
#define GL_RENDERBUFFER_STORAGE_SAMPLES_AMD 0x91B2
#define GL_MAX_COLOR_FRAMEBUFFER_SAMPLES_AMD 0x91B3
#define GL_MAX_COLOR_FRAMEBUFFER_STORAGE_SAMPLES_AMD 0x91B4
#define GL_MAX_DEPTH_STENCIL_FRAMEBUFFER_SAMPLES_AMD 0x91B5
#define GL_NUM_SUPPORTED_MULTISAMPLE_MODES_AMD 0x91B6
#define GL_SUPPORTED_MULTISAMPLE_MODES_AMD 0x91B7

typedef void (*glRenderbufferStorageMultisampleAdvancedAMD_function)(GLenum target, GLsizei samples, GLsizei storageSamples, GLenum internalformat, GLsizei width, GLsizei height);
glRenderbufferStorageMultisampleAdvancedAMD_function glRenderbufferStorageMultisampleAdvancedAMD;

typedef void (*glNamedRenderbufferStorageMultisampleAdvancedAMD_function)(GLuint renderbuffer, GLsizei samples, GLsizei storageSamples, GLenum internalformat, GLsizei width, GLsizei height);
glNamedRenderbufferStorageMultisampleAdvancedAMD_function glNamedRenderbufferStorageMultisampleAdvancedAMD;
#define GL_AMD_framebuffer_sample_positions 1
#define GL_SUBSAMPLE_DISTANCE_AMD 0x883F
#define GL_PIXELS_PER_SAMPLE_PATTERN_X_AMD 0x91AE
#define GL_PIXELS_PER_SAMPLE_PATTERN_Y_AMD 0x91AF
#define GL_ALL_PIXELS_AMD 0xFFFFFFFF

typedef void (*glFramebufferSamplePositionsfvAMD_function)(GLenum target, GLuint numsamples, GLuint pixelindex, GLfloat *values);
glFramebufferSamplePositionsfvAMD_function glFramebufferSamplePositionsfvAMD;

typedef void (*glNamedFramebufferSamplePositionsfvAMD_function)(GLuint framebuffer, GLuint numsamples, GLuint pixelindex, GLfloat *values);
glNamedFramebufferSamplePositionsfvAMD_function glNamedFramebufferSamplePositionsfvAMD;

typedef void (*glGetFramebufferParameterfvAMD_function)(GLenum target, GLenum pname, GLuint numsamples, GLuint pixelindex, GLsizei size, GLfloat *values);
glGetFramebufferParameterfvAMD_function glGetFramebufferParameterfvAMD;

typedef void (*glGetNamedFramebufferParameterfvAMD_function)(GLuint framebuffer, GLenum pname, GLuint numsamples, GLuint pixelindex, GLsizei size, GLfloat *values);
glGetNamedFramebufferParameterfvAMD_function glGetNamedFramebufferParameterfvAMD;
#define GL_AMD_gcn_shader 1
#define GL_AMD_gpu_shader_half_float 1
#define GL_FLOAT16_NV 0x8FF8
#define GL_FLOAT16_VEC2_NV 0x8FF9
#define GL_FLOAT16_VEC3_NV 0x8FFA
#define GL_FLOAT16_VEC4_NV 0x8FFB
#define GL_FLOAT16_MAT2_AMD 0x91C5
#define GL_FLOAT16_MAT3_AMD 0x91C6
#define GL_FLOAT16_MAT4_AMD 0x91C7
#define GL_FLOAT16_MAT2x3_AMD 0x91C8
#define GL_FLOAT16_MAT2x4_AMD 0x91C9
#define GL_FLOAT16_MAT3x2_AMD 0x91CA
#define GL_FLOAT16_MAT3x4_AMD 0x91CB
#define GL_FLOAT16_MAT4x2_AMD 0x91CC
#define GL_FLOAT16_MAT4x3_AMD 0x91CD
#define GL_AMD_gpu_shader_int16 1
#define GL_AMD_gpu_shader_int64 1
#define GL_INT64_NV 0x140E
#define GL_UNSIGNED_INT64_NV 0x140F
#define GL_INT8_NV 0x8FE0
#define GL_INT8_VEC2_NV 0x8FE1
#define GL_INT8_VEC3_NV 0x8FE2
#define GL_INT8_VEC4_NV 0x8FE3
#define GL_INT16_NV 0x8FE4
#define GL_INT16_VEC2_NV 0x8FE5
#define GL_INT16_VEC3_NV 0x8FE6
#define GL_INT16_VEC4_NV 0x8FE7
#define GL_INT64_VEC2_NV 0x8FE9
#define GL_INT64_VEC3_NV 0x8FEA
#define GL_INT64_VEC4_NV 0x8FEB
#define GL_UNSIGNED_INT8_NV 0x8FEC
#define GL_UNSIGNED_INT8_VEC2_NV 0x8FED
#define GL_UNSIGNED_INT8_VEC3_NV 0x8FEE
#define GL_UNSIGNED_INT8_VEC4_NV 0x8FEF
#define GL_UNSIGNED_INT16_NV 0x8FF0
#define GL_UNSIGNED_INT16_VEC2_NV 0x8FF1
#define GL_UNSIGNED_INT16_VEC3_NV 0x8FF2
#define GL_UNSIGNED_INT16_VEC4_NV 0x8FF3
#define GL_UNSIGNED_INT64_VEC2_NV 0x8FF5
#define GL_UNSIGNED_INT64_VEC3_NV 0x8FF6
#define GL_UNSIGNED_INT64_VEC4_NV 0x8FF7

typedef void (*glUniform1i64NV_function)(GLint location, GLint64EXT x);
glUniform1i64NV_function glUniform1i64NV;

typedef void (*glUniform2i64NV_function)(GLint location, GLint64EXT x, GLint64EXT y);
glUniform2i64NV_function glUniform2i64NV;

typedef void (*glUniform3i64NV_function)(GLint location, GLint64EXT x, GLint64EXT y, GLint64EXT z);
glUniform3i64NV_function glUniform3i64NV;

typedef void (*glUniform4i64NV_function)(GLint location, GLint64EXT x, GLint64EXT y, GLint64EXT z, GLint64EXT w);
glUniform4i64NV_function glUniform4i64NV;

typedef void (*glUniform1i64vNV_function)(GLint location, GLsizei count, GLint64EXT *value);
glUniform1i64vNV_function glUniform1i64vNV;

typedef void (*glUniform2i64vNV_function)(GLint location, GLsizei count, GLint64EXT *value);
glUniform2i64vNV_function glUniform2i64vNV;

typedef void (*glUniform3i64vNV_function)(GLint location, GLsizei count, GLint64EXT *value);
glUniform3i64vNV_function glUniform3i64vNV;

typedef void (*glUniform4i64vNV_function)(GLint location, GLsizei count, GLint64EXT *value);
glUniform4i64vNV_function glUniform4i64vNV;

typedef void (*glUniform1ui64NV_function)(GLint location, GLuint64EXT x);
glUniform1ui64NV_function glUniform1ui64NV;

typedef void (*glUniform2ui64NV_function)(GLint location, GLuint64EXT x, GLuint64EXT y);
glUniform2ui64NV_function glUniform2ui64NV;

typedef void (*glUniform3ui64NV_function)(GLint location, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z);
glUniform3ui64NV_function glUniform3ui64NV;

typedef void (*glUniform4ui64NV_function)(GLint location, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z, GLuint64EXT w);
glUniform4ui64NV_function glUniform4ui64NV;

typedef void (*glUniform1ui64vNV_function)(GLint location, GLsizei count, GLuint64EXT *value);
glUniform1ui64vNV_function glUniform1ui64vNV;

typedef void (*glUniform2ui64vNV_function)(GLint location, GLsizei count, GLuint64EXT *value);
glUniform2ui64vNV_function glUniform2ui64vNV;

typedef void (*glUniform3ui64vNV_function)(GLint location, GLsizei count, GLuint64EXT *value);
glUniform3ui64vNV_function glUniform3ui64vNV;

typedef void (*glUniform4ui64vNV_function)(GLint location, GLsizei count, GLuint64EXT *value);
glUniform4ui64vNV_function glUniform4ui64vNV;

typedef void (*glGetUniformi64vNV_function)(GLuint program, GLint location, GLint64EXT *params);
glGetUniformi64vNV_function glGetUniformi64vNV;

typedef void (*glGetUniformui64vNV_function)(GLuint program, GLint location, GLuint64EXT *params);
glGetUniformui64vNV_function glGetUniformui64vNV;

typedef void (*glProgramUniform1i64NV_function)(GLuint program, GLint location, GLint64EXT x);
glProgramUniform1i64NV_function glProgramUniform1i64NV;

typedef void (*glProgramUniform2i64NV_function)(GLuint program, GLint location, GLint64EXT x, GLint64EXT y);
glProgramUniform2i64NV_function glProgramUniform2i64NV;

typedef void (*glProgramUniform3i64NV_function)(GLuint program, GLint location, GLint64EXT x, GLint64EXT y, GLint64EXT z);
glProgramUniform3i64NV_function glProgramUniform3i64NV;

typedef void (*glProgramUniform4i64NV_function)(GLuint program, GLint location, GLint64EXT x, GLint64EXT y, GLint64EXT z, GLint64EXT w);
glProgramUniform4i64NV_function glProgramUniform4i64NV;

typedef void (*glProgramUniform1i64vNV_function)(GLuint program, GLint location, GLsizei count, GLint64EXT *value);
glProgramUniform1i64vNV_function glProgramUniform1i64vNV;

typedef void (*glProgramUniform2i64vNV_function)(GLuint program, GLint location, GLsizei count, GLint64EXT *value);
glProgramUniform2i64vNV_function glProgramUniform2i64vNV;

typedef void (*glProgramUniform3i64vNV_function)(GLuint program, GLint location, GLsizei count, GLint64EXT *value);
glProgramUniform3i64vNV_function glProgramUniform3i64vNV;

typedef void (*glProgramUniform4i64vNV_function)(GLuint program, GLint location, GLsizei count, GLint64EXT *value);
glProgramUniform4i64vNV_function glProgramUniform4i64vNV;

typedef void (*glProgramUniform1ui64NV_function)(GLuint program, GLint location, GLuint64EXT x);
glProgramUniform1ui64NV_function glProgramUniform1ui64NV;

typedef void (*glProgramUniform2ui64NV_function)(GLuint program, GLint location, GLuint64EXT x, GLuint64EXT y);
glProgramUniform2ui64NV_function glProgramUniform2ui64NV;

typedef void (*glProgramUniform3ui64NV_function)(GLuint program, GLint location, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z);
glProgramUniform3ui64NV_function glProgramUniform3ui64NV;

typedef void (*glProgramUniform4ui64NV_function)(GLuint program, GLint location, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z, GLuint64EXT w);
glProgramUniform4ui64NV_function glProgramUniform4ui64NV;

typedef void (*glProgramUniform1ui64vNV_function)(GLuint program, GLint location, GLsizei count, GLuint64EXT *value);
glProgramUniform1ui64vNV_function glProgramUniform1ui64vNV;

typedef void (*glProgramUniform2ui64vNV_function)(GLuint program, GLint location, GLsizei count, GLuint64EXT *value);
glProgramUniform2ui64vNV_function glProgramUniform2ui64vNV;

typedef void (*glProgramUniform3ui64vNV_function)(GLuint program, GLint location, GLsizei count, GLuint64EXT *value);
glProgramUniform3ui64vNV_function glProgramUniform3ui64vNV;

typedef void (*glProgramUniform4ui64vNV_function)(GLuint program, GLint location, GLsizei count, GLuint64EXT *value);
glProgramUniform4ui64vNV_function glProgramUniform4ui64vNV;
#define GL_AMD_interleaved_elements 1
#define GL_VERTEX_ELEMENT_SWIZZLE_AMD 0x91A4
#define GL_VERTEX_ID_SWIZZLE_AMD 0x91A5

typedef void (*glVertexAttribParameteriAMD_function)(GLuint index, GLenum pname, GLint param);
glVertexAttribParameteriAMD_function glVertexAttribParameteriAMD;
#define GL_AMD_multi_draw_indirect 1

typedef void (*glMultiDrawArraysIndirectAMD_function)(GLenum mode, void * indirect, GLsizei primcount, GLsizei stride);
glMultiDrawArraysIndirectAMD_function glMultiDrawArraysIndirectAMD;

typedef void (*glMultiDrawElementsIndirectAMD_function)(GLenum mode, GLenum type, void * indirect, GLsizei primcount, GLsizei stride);
glMultiDrawElementsIndirectAMD_function glMultiDrawElementsIndirectAMD;
#define GL_AMD_name_gen_delete 1
#define GL_DATA_BUFFER_AMD 0x9151
#define GL_PERFORMANCE_MONITOR_AMD 0x9152
#define GL_QUERY_OBJECT_AMD 0x9153
#define GL_VERTEX_ARRAY_OBJECT_AMD 0x9154
#define GL_SAMPLER_OBJECT_AMD 0x9155

typedef void (*glGenNamesAMD_function)(GLenum identifier, GLuint num, GLuint *names);
glGenNamesAMD_function glGenNamesAMD;

typedef void (*glDeleteNamesAMD_function)(GLenum identifier, GLuint num, GLuint *names);
glDeleteNamesAMD_function glDeleteNamesAMD;

typedef GLboolean  (*glIsNameAMD_function)(GLenum identifier, GLuint name);
glIsNameAMD_function glIsNameAMD;
#define GL_AMD_occlusion_query_event 1
#define GL_OCCLUSION_QUERY_EVENT_MASK_AMD 0x874F
#define GL_QUERY_DEPTH_PASS_EVENT_BIT_AMD 0x00000001
#define GL_QUERY_DEPTH_FAIL_EVENT_BIT_AMD 0x00000002
#define GL_QUERY_STENCIL_FAIL_EVENT_BIT_AMD 0x00000004
#define GL_QUERY_DEPTH_BOUNDS_FAIL_EVENT_BIT_AMD 0x00000008
#define GL_QUERY_ALL_EVENT_BITS_AMD 0xFFFFFFFF

typedef void (*glQueryObjectParameteruiAMD_function)(GLenum target, GLuint id, GLenum pname, GLuint param);
glQueryObjectParameteruiAMD_function glQueryObjectParameteruiAMD;
#define GL_AMD_performance_monitor 1
#define GL_COUNTER_TYPE_AMD 0x8BC0
#define GL_COUNTER_RANGE_AMD 0x8BC1
#define GL_UNSIGNED_INT64_AMD 0x8BC2
#define GL_PERCENTAGE_AMD 0x8BC3
#define GL_PERFMON_RESULT_AVAILABLE_AMD 0x8BC4
#define GL_PERFMON_RESULT_SIZE_AMD 0x8BC5
#define GL_PERFMON_RESULT_AMD 0x8BC6

typedef void (*glGetPerfMonitorGroupsAMD_function)(GLint *numGroups, GLsizei groupsSize, GLuint *groups);
glGetPerfMonitorGroupsAMD_function glGetPerfMonitorGroupsAMD;

typedef void (*glGetPerfMonitorCountersAMD_function)(GLuint group, GLint *numCounters, GLint *maxActiveCounters, GLsizei counterSize, GLuint *counters);
glGetPerfMonitorCountersAMD_function glGetPerfMonitorCountersAMD;

typedef void (*glGetPerfMonitorGroupStringAMD_function)(GLuint group, GLsizei bufSize, GLsizei *length, GLchar *groupString);
glGetPerfMonitorGroupStringAMD_function glGetPerfMonitorGroupStringAMD;

typedef void (*glGetPerfMonitorCounterStringAMD_function)(GLuint group, GLuint counter, GLsizei bufSize, GLsizei *length, GLchar *counterString);
glGetPerfMonitorCounterStringAMD_function glGetPerfMonitorCounterStringAMD;

typedef void (*glGetPerfMonitorCounterInfoAMD_function)(GLuint group, GLuint counter, GLenum pname, void * data);
glGetPerfMonitorCounterInfoAMD_function glGetPerfMonitorCounterInfoAMD;

typedef void (*glGenPerfMonitorsAMD_function)(GLsizei n, GLuint *monitors);
glGenPerfMonitorsAMD_function glGenPerfMonitorsAMD;

typedef void (*glDeletePerfMonitorsAMD_function)(GLsizei n, GLuint *monitors);
glDeletePerfMonitorsAMD_function glDeletePerfMonitorsAMD;

typedef void (*glSelectPerfMonitorCountersAMD_function)(GLuint monitor, GLboolean enable, GLuint group, GLint numCounters, GLuint *counterList);
glSelectPerfMonitorCountersAMD_function glSelectPerfMonitorCountersAMD;

typedef void (*glBeginPerfMonitorAMD_function)(GLuint monitor);
glBeginPerfMonitorAMD_function glBeginPerfMonitorAMD;

typedef void (*glEndPerfMonitorAMD_function)(GLuint monitor);
glEndPerfMonitorAMD_function glEndPerfMonitorAMD;

typedef void (*glGetPerfMonitorCounterDataAMD_function)(GLuint monitor, GLenum pname, GLsizei dataSize, GLuint *data, GLint *bytesWritten);
glGetPerfMonitorCounterDataAMD_function glGetPerfMonitorCounterDataAMD;
#define GL_AMD_pinned_memory 1
#define GL_EXTERNAL_VIRTUAL_MEMORY_BUFFER_AMD 0x9160
#define GL_AMD_query_buffer_object 1
#define GL_QUERY_BUFFER_AMD 0x9192
#define GL_QUERY_BUFFER_BINDING_AMD 0x9193
#define GL_QUERY_RESULT_NO_WAIT_AMD 0x9194
#define GL_AMD_sample_positions 1

typedef void (*glSetMultisamplefvAMD_function)(GLenum pname, GLuint index, GLfloat *val);
glSetMultisamplefvAMD_function glSetMultisamplefvAMD;
#define GL_AMD_seamless_cubemap_per_texture 1
#define GL_AMD_shader_atomic_counter_ops 1
#define GL_AMD_shader_ballot 1
#define GL_AMD_shader_explicit_vertex_parameter 1
#define GL_AMD_shader_gpu_shader_half_float_fetch 1
#define GL_AMD_shader_image_load_store_lod 1
#define GL_AMD_shader_stencil_export 1
#define GL_AMD_shader_trinary_minmax 1
#define GL_AMD_sparse_texture 1
#define GL_VIRTUAL_PAGE_SIZE_X_AMD 0x9195
#define GL_VIRTUAL_PAGE_SIZE_Y_AMD 0x9196
#define GL_VIRTUAL_PAGE_SIZE_Z_AMD 0x9197
#define GL_MAX_SPARSE_TEXTURE_SIZE_AMD 0x9198
#define GL_MAX_SPARSE_3D_TEXTURE_SIZE_AMD 0x9199
#define GL_MAX_SPARSE_ARRAY_TEXTURE_LAYERS 0x919A
#define GL_MIN_SPARSE_LEVEL_AMD 0x919B
#define GL_MIN_LOD_WARNING_AMD 0x919C
#define GL_TEXTURE_STORAGE_SPARSE_BIT_AMD 0x00000001

typedef void (*glTexStorageSparseAMD_function)(GLenum target, GLenum internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLsizei layers, GLbitfield flags);
glTexStorageSparseAMD_function glTexStorageSparseAMD;

typedef void (*glTextureStorageSparseAMD_function)(GLuint texture, GLenum target, GLenum internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLsizei layers, GLbitfield flags);
glTextureStorageSparseAMD_function glTextureStorageSparseAMD;
#define GL_AMD_stencil_operation_extended 1
#define GL_SET_AMD 0x874A
#define GL_REPLACE_VALUE_AMD 0x874B
#define GL_STENCIL_OP_VALUE_AMD 0x874C
#define GL_STENCIL_BACK_OP_VALUE_AMD 0x874D

typedef void (*glStencilOpValueAMD_function)(GLenum face, GLuint value);
glStencilOpValueAMD_function glStencilOpValueAMD;
#define GL_AMD_texture_gather_bias_lod 1
#define GL_AMD_texture_texture4 1
#define GL_AMD_transform_feedback3_lines_triangles 1
#define GL_AMD_transform_feedback4 1
#define GL_STREAM_RASTERIZATION_AMD 0x91A0
#define GL_AMD_vertex_shader_layer 1
#define GL_AMD_vertex_shader_tessellator 1
#define GL_SAMPLER_BUFFER_AMD 0x9001
#define GL_INT_SAMPLER_BUFFER_AMD 0x9002
#define GL_UNSIGNED_INT_SAMPLER_BUFFER_AMD 0x9003
#define GL_TESSELLATION_MODE_AMD 0x9004
#define GL_TESSELLATION_FACTOR_AMD 0x9005
#define GL_DISCRETE_AMD 0x9006
#define GL_CONTINUOUS_AMD 0x9007

typedef void (*glTessellationFactorAMD_function)(GLfloat factor);
glTessellationFactorAMD_function glTessellationFactorAMD;

typedef void (*glTessellationModeAMD_function)(GLenum mode);
glTessellationModeAMD_function glTessellationModeAMD;
#define GL_AMD_vertex_shader_viewport_index 1
#define GL_APPLE_aux_depth_stencil 1
#define GL_AUX_DEPTH_STENCIL_APPLE 0x8A14
#define GL_APPLE_client_storage 1
#define GL_UNPACK_CLIENT_STORAGE_APPLE 0x85B2
#define GL_APPLE_element_array 1
#define GL_ELEMENT_ARRAY_APPLE 0x8A0C
#define GL_ELEMENT_ARRAY_TYPE_APPLE 0x8A0D
#define GL_ELEMENT_ARRAY_POINTER_APPLE 0x8A0E

typedef void (*glElementPointerAPPLE_function)(GLenum type, void * pointer);
glElementPointerAPPLE_function glElementPointerAPPLE;

typedef void (*glDrawElementArrayAPPLE_function)(GLenum mode, GLint first, GLsizei count);
glDrawElementArrayAPPLE_function glDrawElementArrayAPPLE;

typedef void (*glDrawRangeElementArrayAPPLE_function)(GLenum mode, GLuint start, GLuint end, GLint first, GLsizei count);
glDrawRangeElementArrayAPPLE_function glDrawRangeElementArrayAPPLE;

typedef void (*glMultiDrawElementArrayAPPLE_function)(GLenum mode, GLint *first, GLsizei *count, GLsizei primcount);
glMultiDrawElementArrayAPPLE_function glMultiDrawElementArrayAPPLE;

typedef void (*glMultiDrawRangeElementArrayAPPLE_function)(GLenum mode, GLuint start, GLuint end, GLint *first, GLsizei *count, GLsizei primcount);
glMultiDrawRangeElementArrayAPPLE_function glMultiDrawRangeElementArrayAPPLE;
#define GL_APPLE_fence 1
#define GL_DRAW_PIXELS_APPLE 0x8A0A
#define GL_FENCE_APPLE 0x8A0B

typedef void (*glGenFencesAPPLE_function)(GLsizei n, GLuint *fences);
glGenFencesAPPLE_function glGenFencesAPPLE;

typedef void (*glDeleteFencesAPPLE_function)(GLsizei n, GLuint *fences);
glDeleteFencesAPPLE_function glDeleteFencesAPPLE;

typedef void (*glSetFenceAPPLE_function)(GLuint fence);
glSetFenceAPPLE_function glSetFenceAPPLE;

typedef GLboolean  (*glIsFenceAPPLE_function)(GLuint fence);
glIsFenceAPPLE_function glIsFenceAPPLE;

typedef GLboolean  (*glTestFenceAPPLE_function)(GLuint fence);
glTestFenceAPPLE_function glTestFenceAPPLE;

typedef void (*glFinishFenceAPPLE_function)(GLuint fence);
glFinishFenceAPPLE_function glFinishFenceAPPLE;

typedef GLboolean  (*glTestObjectAPPLE_function)(GLenum object, GLuint name);
glTestObjectAPPLE_function glTestObjectAPPLE;

typedef void (*glFinishObjectAPPLE_function)(GLenum object, GLint name);
glFinishObjectAPPLE_function glFinishObjectAPPLE;
#define GL_APPLE_float_pixels 1
#define GL_HALF_APPLE 0x140B
#define GL_RGBA_FLOAT32_APPLE 0x8814
#define GL_RGB_FLOAT32_APPLE 0x8815
#define GL_ALPHA_FLOAT32_APPLE 0x8816
#define GL_INTENSITY_FLOAT32_APPLE 0x8817
#define GL_LUMINANCE_FLOAT32_APPLE 0x8818
#define GL_LUMINANCE_ALPHA_FLOAT32_APPLE 0x8819
#define GL_RGBA_FLOAT16_APPLE 0x881A
#define GL_RGB_FLOAT16_APPLE 0x881B
#define GL_ALPHA_FLOAT16_APPLE 0x881C
#define GL_INTENSITY_FLOAT16_APPLE 0x881D
#define GL_LUMINANCE_FLOAT16_APPLE 0x881E
#define GL_LUMINANCE_ALPHA_FLOAT16_APPLE 0x881F
#define GL_COLOR_FLOAT_APPLE 0x8A0F
#define GL_APPLE_flush_buffer_range 1
#define GL_BUFFER_SERIALIZED_MODIFY_APPLE 0x8A12
#define GL_BUFFER_FLUSHING_UNMAP_APPLE 0x8A13

typedef void (*glBufferParameteriAPPLE_function)(GLenum target, GLenum pname, GLint param);
glBufferParameteriAPPLE_function glBufferParameteriAPPLE;

typedef void (*glFlushMappedBufferRangeAPPLE_function)(GLenum target, GLintptr offset, GLsizeiptr size);
glFlushMappedBufferRangeAPPLE_function glFlushMappedBufferRangeAPPLE;
#define GL_APPLE_object_purgeable 1
#define GL_BUFFER_OBJECT_APPLE 0x85B3
#define GL_RELEASED_APPLE 0x8A19
#define GL_VOLATILE_APPLE 0x8A1A
#define GL_RETAINED_APPLE 0x8A1B
#define GL_UNDEFINED_APPLE 0x8A1C
#define GL_PURGEABLE_APPLE 0x8A1D

typedef GLenum  (*glObjectPurgeableAPPLE_function)(GLenum objectType, GLuint name, GLenum option);
glObjectPurgeableAPPLE_function glObjectPurgeableAPPLE;

typedef GLenum  (*glObjectUnpurgeableAPPLE_function)(GLenum objectType, GLuint name, GLenum option);
glObjectUnpurgeableAPPLE_function glObjectUnpurgeableAPPLE;

typedef void (*glGetObjectParameterivAPPLE_function)(GLenum objectType, GLuint name, GLenum pname, GLint *params);
glGetObjectParameterivAPPLE_function glGetObjectParameterivAPPLE;
#define GL_APPLE_rgb_422 1
#define GL_RGB_422_APPLE 0x8A1F
#define GL_UNSIGNED_SHORT_8_8_APPLE 0x85BA
#define GL_UNSIGNED_SHORT_8_8_REV_APPLE 0x85BB
#define GL_RGB_RAW_422_APPLE 0x8A51
#define GL_APPLE_row_bytes 1
#define GL_PACK_ROW_BYTES_APPLE 0x8A15
#define GL_UNPACK_ROW_BYTES_APPLE 0x8A16
#define GL_APPLE_specular_vector 1
#define GL_LIGHT_MODEL_SPECULAR_VECTOR_APPLE 0x85B0
#define GL_APPLE_texture_range 1
#define GL_TEXTURE_RANGE_LENGTH_APPLE 0x85B7
#define GL_TEXTURE_RANGE_POINTER_APPLE 0x85B8
#define GL_TEXTURE_STORAGE_HINT_APPLE 0x85BC
#define GL_STORAGE_PRIVATE_APPLE 0x85BD
#define GL_STORAGE_CACHED_APPLE 0x85BE
#define GL_STORAGE_SHARED_APPLE 0x85BF

typedef void (*glTextureRangeAPPLE_function)(GLenum target, GLsizei length, void * pointer);
glTextureRangeAPPLE_function glTextureRangeAPPLE;

typedef void (*glGetTexParameterPointervAPPLE_function)(GLenum target, GLenum pname, void * *params);
glGetTexParameterPointervAPPLE_function glGetTexParameterPointervAPPLE;
#define GL_APPLE_transform_hint 1
#define GL_TRANSFORM_HINT_APPLE 0x85B1
#define GL_APPLE_vertex_array_object 1
#define GL_VERTEX_ARRAY_BINDING_APPLE 0x85B5

typedef void (*glBindVertexArrayAPPLE_function)(GLuint array);
glBindVertexArrayAPPLE_function glBindVertexArrayAPPLE;

typedef void (*glDeleteVertexArraysAPPLE_function)(GLsizei n, GLuint *arrays);
glDeleteVertexArraysAPPLE_function glDeleteVertexArraysAPPLE;

typedef void (*glGenVertexArraysAPPLE_function)(GLsizei n, GLuint *arrays);
glGenVertexArraysAPPLE_function glGenVertexArraysAPPLE;

typedef GLboolean  (*glIsVertexArrayAPPLE_function)(GLuint array);
glIsVertexArrayAPPLE_function glIsVertexArrayAPPLE;
#define GL_APPLE_vertex_array_range 1
#define GL_VERTEX_ARRAY_RANGE_APPLE 0x851D
#define GL_VERTEX_ARRAY_RANGE_LENGTH_APPLE 0x851E
#define GL_VERTEX_ARRAY_STORAGE_HINT_APPLE 0x851F
#define GL_VERTEX_ARRAY_RANGE_POINTER_APPLE 0x8521
#define GL_STORAGE_CLIENT_APPLE 0x85B4

typedef void (*glVertexArrayRangeAPPLE_function)(GLsizei length, void * pointer);
glVertexArrayRangeAPPLE_function glVertexArrayRangeAPPLE;

typedef void (*glFlushVertexArrayRangeAPPLE_function)(GLsizei length, void * pointer);
glFlushVertexArrayRangeAPPLE_function glFlushVertexArrayRangeAPPLE;

typedef void (*glVertexArrayParameteriAPPLE_function)(GLenum pname, GLint param);
glVertexArrayParameteriAPPLE_function glVertexArrayParameteriAPPLE;
#define GL_APPLE_vertex_program_evaluators 1
#define GL_VERTEX_ATTRIB_MAP1_APPLE 0x8A00
#define GL_VERTEX_ATTRIB_MAP2_APPLE 0x8A01
#define GL_VERTEX_ATTRIB_MAP1_SIZE_APPLE 0x8A02
#define GL_VERTEX_ATTRIB_MAP1_COEFF_APPLE 0x8A03
#define GL_VERTEX_ATTRIB_MAP1_ORDER_APPLE 0x8A04
#define GL_VERTEX_ATTRIB_MAP1_DOMAIN_APPLE 0x8A05
#define GL_VERTEX_ATTRIB_MAP2_SIZE_APPLE 0x8A06
#define GL_VERTEX_ATTRIB_MAP2_COEFF_APPLE 0x8A07
#define GL_VERTEX_ATTRIB_MAP2_ORDER_APPLE 0x8A08
#define GL_VERTEX_ATTRIB_MAP2_DOMAIN_APPLE 0x8A09

typedef void (*glEnableVertexAttribAPPLE_function)(GLuint index, GLenum pname);
glEnableVertexAttribAPPLE_function glEnableVertexAttribAPPLE;

typedef void (*glDisableVertexAttribAPPLE_function)(GLuint index, GLenum pname);
glDisableVertexAttribAPPLE_function glDisableVertexAttribAPPLE;

typedef GLboolean  (*glIsVertexAttribEnabledAPPLE_function)(GLuint index, GLenum pname);
glIsVertexAttribEnabledAPPLE_function glIsVertexAttribEnabledAPPLE;

typedef void (*glMapVertexAttrib1dAPPLE_function)(GLuint index, GLuint size, GLdouble u1, GLdouble u2, GLint stride, GLint order, GLdouble *points);
glMapVertexAttrib1dAPPLE_function glMapVertexAttrib1dAPPLE;

typedef void (*glMapVertexAttrib1fAPPLE_function)(GLuint index, GLuint size, GLfloat u1, GLfloat u2, GLint stride, GLint order, GLfloat *points);
glMapVertexAttrib1fAPPLE_function glMapVertexAttrib1fAPPLE;

typedef void (*glMapVertexAttrib2dAPPLE_function)(GLuint index, GLuint size, GLdouble u1, GLdouble u2, GLint ustride, GLint uorder, GLdouble v1, GLdouble v2, GLint vstride, GLint vorder, GLdouble *points);
glMapVertexAttrib2dAPPLE_function glMapVertexAttrib2dAPPLE;

typedef void (*glMapVertexAttrib2fAPPLE_function)(GLuint index, GLuint size, GLfloat u1, GLfloat u2, GLint ustride, GLint uorder, GLfloat v1, GLfloat v2, GLint vstride, GLint vorder, GLfloat *points);
glMapVertexAttrib2fAPPLE_function glMapVertexAttrib2fAPPLE;
#define GL_APPLE_ycbcr_422 1
#define GL_YCBCR_422_APPLE 0x85B9
#define GL_ATI_draw_buffers 1
#define GL_MAX_DRAW_BUFFERS_ATI 0x8824
#define GL_DRAW_BUFFER0_ATI 0x8825
#define GL_DRAW_BUFFER1_ATI 0x8826
#define GL_DRAW_BUFFER2_ATI 0x8827
#define GL_DRAW_BUFFER3_ATI 0x8828
#define GL_DRAW_BUFFER4_ATI 0x8829
#define GL_DRAW_BUFFER5_ATI 0x882A
#define GL_DRAW_BUFFER6_ATI 0x882B
#define GL_DRAW_BUFFER7_ATI 0x882C
#define GL_DRAW_BUFFER8_ATI 0x882D
#define GL_DRAW_BUFFER9_ATI 0x882E
#define GL_DRAW_BUFFER10_ATI 0x882F
#define GL_DRAW_BUFFER11_ATI 0x8830
#define GL_DRAW_BUFFER12_ATI 0x8831
#define GL_DRAW_BUFFER13_ATI 0x8832
#define GL_DRAW_BUFFER14_ATI 0x8833
#define GL_DRAW_BUFFER15_ATI 0x8834

typedef void (*glDrawBuffersATI_function)(GLsizei n, GLenum *bufs);
glDrawBuffersATI_function glDrawBuffersATI;
#define GL_ATI_element_array 1
#define GL_ELEMENT_ARRAY_ATI 0x8768
#define GL_ELEMENT_ARRAY_TYPE_ATI 0x8769
#define GL_ELEMENT_ARRAY_POINTER_ATI 0x876A

typedef void (*glElementPointerATI_function)(GLenum type, void * pointer);
glElementPointerATI_function glElementPointerATI;

typedef void (*glDrawElementArrayATI_function)(GLenum mode, GLsizei count);
glDrawElementArrayATI_function glDrawElementArrayATI;

typedef void (*glDrawRangeElementArrayATI_function)(GLenum mode, GLuint start, GLuint end, GLsizei count);
glDrawRangeElementArrayATI_function glDrawRangeElementArrayATI;
#define GL_ATI_envmap_bumpmap 1
#define GL_BUMP_ROT_MATRIX_ATI 0x8775
#define GL_BUMP_ROT_MATRIX_SIZE_ATI 0x8776
#define GL_BUMP_NUM_TEX_UNITS_ATI 0x8777
#define GL_BUMP_TEX_UNITS_ATI 0x8778
#define GL_DUDV_ATI 0x8779
#define GL_DU8DV8_ATI 0x877A
#define GL_BUMP_ENVMAP_ATI 0x877B
#define GL_BUMP_TARGET_ATI 0x877C

typedef void (*glTexBumpParameterivATI_function)(GLenum pname, GLint *param);
glTexBumpParameterivATI_function glTexBumpParameterivATI;

typedef void (*glTexBumpParameterfvATI_function)(GLenum pname, GLfloat *param);
glTexBumpParameterfvATI_function glTexBumpParameterfvATI;

typedef void (*glGetTexBumpParameterivATI_function)(GLenum pname, GLint *param);
glGetTexBumpParameterivATI_function glGetTexBumpParameterivATI;

typedef void (*glGetTexBumpParameterfvATI_function)(GLenum pname, GLfloat *param);
glGetTexBumpParameterfvATI_function glGetTexBumpParameterfvATI;
#define GL_ATI_fragment_shader 1
#define GL_FRAGMENT_SHADER_ATI 0x8920
#define GL_REG_0_ATI 0x8921
#define GL_REG_1_ATI 0x8922
#define GL_REG_2_ATI 0x8923
#define GL_REG_3_ATI 0x8924
#define GL_REG_4_ATI 0x8925
#define GL_REG_5_ATI 0x8926
#define GL_REG_6_ATI 0x8927
#define GL_REG_7_ATI 0x8928
#define GL_REG_8_ATI 0x8929
#define GL_REG_9_ATI 0x892A
#define GL_REG_10_ATI 0x892B
#define GL_REG_11_ATI 0x892C
#define GL_REG_12_ATI 0x892D
#define GL_REG_13_ATI 0x892E
#define GL_REG_14_ATI 0x892F
#define GL_REG_15_ATI 0x8930
#define GL_REG_16_ATI 0x8931
#define GL_REG_17_ATI 0x8932
#define GL_REG_18_ATI 0x8933
#define GL_REG_19_ATI 0x8934
#define GL_REG_20_ATI 0x8935
#define GL_REG_21_ATI 0x8936
#define GL_REG_22_ATI 0x8937
#define GL_REG_23_ATI 0x8938
#define GL_REG_24_ATI 0x8939
#define GL_REG_25_ATI 0x893A
#define GL_REG_26_ATI 0x893B
#define GL_REG_27_ATI 0x893C
#define GL_REG_28_ATI 0x893D
#define GL_REG_29_ATI 0x893E
#define GL_REG_30_ATI 0x893F
#define GL_REG_31_ATI 0x8940
#define GL_CON_0_ATI 0x8941
#define GL_CON_1_ATI 0x8942
#define GL_CON_2_ATI 0x8943
#define GL_CON_3_ATI 0x8944
#define GL_CON_4_ATI 0x8945
#define GL_CON_5_ATI 0x8946
#define GL_CON_6_ATI 0x8947
#define GL_CON_7_ATI 0x8948
#define GL_CON_8_ATI 0x8949
#define GL_CON_9_ATI 0x894A
#define GL_CON_10_ATI 0x894B
#define GL_CON_11_ATI 0x894C
#define GL_CON_12_ATI 0x894D
#define GL_CON_13_ATI 0x894E
#define GL_CON_14_ATI 0x894F
#define GL_CON_15_ATI 0x8950
#define GL_CON_16_ATI 0x8951
#define GL_CON_17_ATI 0x8952
#define GL_CON_18_ATI 0x8953
#define GL_CON_19_ATI 0x8954
#define GL_CON_20_ATI 0x8955
#define GL_CON_21_ATI 0x8956
#define GL_CON_22_ATI 0x8957
#define GL_CON_23_ATI 0x8958
#define GL_CON_24_ATI 0x8959
#define GL_CON_25_ATI 0x895A
#define GL_CON_26_ATI 0x895B
#define GL_CON_27_ATI 0x895C
#define GL_CON_28_ATI 0x895D
#define GL_CON_29_ATI 0x895E
#define GL_CON_30_ATI 0x895F
#define GL_CON_31_ATI 0x8960
#define GL_MOV_ATI 0x8961
#define GL_ADD_ATI 0x8963
#define GL_MUL_ATI 0x8964
#define GL_SUB_ATI 0x8965
#define GL_DOT3_ATI 0x8966
#define GL_DOT4_ATI 0x8967
#define GL_MAD_ATI 0x8968
#define GL_LERP_ATI 0x8969
#define GL_CND_ATI 0x896A
#define GL_CND0_ATI 0x896B
#define GL_DOT2_ADD_ATI 0x896C
#define GL_SECONDARY_INTERPOLATOR_ATI 0x896D
#define GL_NUM_FRAGMENT_REGISTERS_ATI 0x896E
#define GL_NUM_FRAGMENT_CONSTANTS_ATI 0x896F
#define GL_NUM_PASSES_ATI 0x8970
#define GL_NUM_INSTRUCTIONS_PER_PASS_ATI 0x8971
#define GL_NUM_INSTRUCTIONS_TOTAL_ATI 0x8972
#define GL_NUM_INPUT_INTERPOLATOR_COMPONENTS_ATI 0x8973
#define GL_NUM_LOOPBACK_COMPONENTS_ATI 0x8974
#define GL_COLOR_ALPHA_PAIRING_ATI 0x8975
#define GL_SWIZZLE_STR_ATI 0x8976
#define GL_SWIZZLE_STQ_ATI 0x8977
#define GL_SWIZZLE_STR_DR_ATI 0x8978
#define GL_SWIZZLE_STQ_DQ_ATI 0x8979
#define GL_SWIZZLE_STRQ_ATI 0x897A
#define GL_SWIZZLE_STRQ_DQ_ATI 0x897B
#define GL_RED_BIT_ATI 0x00000001
#define GL_GREEN_BIT_ATI 0x00000002
#define GL_BLUE_BIT_ATI 0x00000004
#define GL_2X_BIT_ATI 0x00000001
#define GL_4X_BIT_ATI 0x00000002
#define GL_8X_BIT_ATI 0x00000004
#define GL_HALF_BIT_ATI 0x00000008
#define GL_QUARTER_BIT_ATI 0x00000010
#define GL_EIGHTH_BIT_ATI 0x00000020
#define GL_SATURATE_BIT_ATI 0x00000040
#define GL_COMP_BIT_ATI 0x00000002
#define GL_NEGATE_BIT_ATI 0x00000004
#define GL_BIAS_BIT_ATI 0x00000008

typedef GLuint  (*glGenFragmentShadersATI_function)(GLuint range);
glGenFragmentShadersATI_function glGenFragmentShadersATI;

typedef void (*glBindFragmentShaderATI_function)(GLuint id);
glBindFragmentShaderATI_function glBindFragmentShaderATI;

typedef void (*glDeleteFragmentShaderATI_function)(GLuint id);
glDeleteFragmentShaderATI_function glDeleteFragmentShaderATI;

typedef void (*glBeginFragmentShaderATI_function)();
glBeginFragmentShaderATI_function glBeginFragmentShaderATI;

typedef void (*glEndFragmentShaderATI_function)();
glEndFragmentShaderATI_function glEndFragmentShaderATI;

typedef void (*glPassTexCoordATI_function)(GLuint dst, GLuint coord, GLenum swizzle);
glPassTexCoordATI_function glPassTexCoordATI;

typedef void (*glSampleMapATI_function)(GLuint dst, GLuint interp, GLenum swizzle);
glSampleMapATI_function glSampleMapATI;

typedef void (*glColorFragmentOp1ATI_function)(GLenum op, GLuint dst, GLuint dstMask, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod);
glColorFragmentOp1ATI_function glColorFragmentOp1ATI;

typedef void (*glColorFragmentOp2ATI_function)(GLenum op, GLuint dst, GLuint dstMask, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod, GLuint arg2, GLuint arg2Rep, GLuint arg2Mod);
glColorFragmentOp2ATI_function glColorFragmentOp2ATI;

typedef void (*glColorFragmentOp3ATI_function)(GLenum op, GLuint dst, GLuint dstMask, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod, GLuint arg2, GLuint arg2Rep, GLuint arg2Mod, GLuint arg3, GLuint arg3Rep, GLuint arg3Mod);
glColorFragmentOp3ATI_function glColorFragmentOp3ATI;

typedef void (*glAlphaFragmentOp1ATI_function)(GLenum op, GLuint dst, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod);
glAlphaFragmentOp1ATI_function glAlphaFragmentOp1ATI;

typedef void (*glAlphaFragmentOp2ATI_function)(GLenum op, GLuint dst, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod, GLuint arg2, GLuint arg2Rep, GLuint arg2Mod);
glAlphaFragmentOp2ATI_function glAlphaFragmentOp2ATI;

typedef void (*glAlphaFragmentOp3ATI_function)(GLenum op, GLuint dst, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod, GLuint arg2, GLuint arg2Rep, GLuint arg2Mod, GLuint arg3, GLuint arg3Rep, GLuint arg3Mod);
glAlphaFragmentOp3ATI_function glAlphaFragmentOp3ATI;

typedef void (*glSetFragmentShaderConstantATI_function)(GLuint dst, GLfloat *value);
glSetFragmentShaderConstantATI_function glSetFragmentShaderConstantATI;
#define GL_ATI_map_object_buffer 1

typedef void *  (*glMapObjectBufferATI_function)(GLuint buffer);
glMapObjectBufferATI_function glMapObjectBufferATI;

typedef void (*glUnmapObjectBufferATI_function)(GLuint buffer);
glUnmapObjectBufferATI_function glUnmapObjectBufferATI;
#define GL_ATI_meminfo 1
#define GL_VBO_FREE_MEMORY_ATI 0x87FB
#define GL_TEXTURE_FREE_MEMORY_ATI 0x87FC
#define GL_RENDERBUFFER_FREE_MEMORY_ATI 0x87FD
#define GL_ATI_pixel_format_float 1
#define GL_RGBA_FLOAT_MODE_ATI 0x8820
#define GL_COLOR_CLEAR_UNCLAMPED_VALUE_ATI 0x8835
#define GL_ATI_pn_triangles 1
#define GL_PN_TRIANGLES_ATI 0x87F0
#define GL_MAX_PN_TRIANGLES_TESSELATION_LEVEL_ATI 0x87F1
#define GL_PN_TRIANGLES_POINT_MODE_ATI 0x87F2
#define GL_PN_TRIANGLES_NORMAL_MODE_ATI 0x87F3
#define GL_PN_TRIANGLES_TESSELATION_LEVEL_ATI 0x87F4
#define GL_PN_TRIANGLES_POINT_MODE_LINEAR_ATI 0x87F5
#define GL_PN_TRIANGLES_POINT_MODE_CUBIC_ATI 0x87F6
#define GL_PN_TRIANGLES_NORMAL_MODE_LINEAR_ATI 0x87F7
#define GL_PN_TRIANGLES_NORMAL_MODE_QUADRATIC_ATI 0x87F8

typedef void (*glPNTrianglesiATI_function)(GLenum pname, GLint param);
glPNTrianglesiATI_function glPNTrianglesiATI;

typedef void (*glPNTrianglesfATI_function)(GLenum pname, GLfloat param);
glPNTrianglesfATI_function glPNTrianglesfATI;
#define GL_ATI_separate_stencil 1
#define GL_STENCIL_BACK_FUNC_ATI 0x8800
#define GL_STENCIL_BACK_FAIL_ATI 0x8801
#define GL_STENCIL_BACK_PASS_DEPTH_FAIL_ATI 0x8802
#define GL_STENCIL_BACK_PASS_DEPTH_PASS_ATI 0x8803

typedef void (*glStencilOpSeparateATI_function)(GLenum face, GLenum sfail, GLenum dpfail, GLenum dppass);
glStencilOpSeparateATI_function glStencilOpSeparateATI;

typedef void (*glStencilFuncSeparateATI_function)(GLenum frontfunc, GLenum backfunc, GLint ref, GLuint mask);
glStencilFuncSeparateATI_function glStencilFuncSeparateATI;
#define GL_ATI_text_fragment_shader 1
#define GL_TEXT_FRAGMENT_SHADER_ATI 0x8200
#define GL_ATI_texture_env_combine3 1
#define GL_MODULATE_ADD_ATI 0x8744
#define GL_MODULATE_SIGNED_ADD_ATI 0x8745
#define GL_MODULATE_SUBTRACT_ATI 0x8746
#define GL_ATI_texture_float 1
#define GL_RGBA_FLOAT32_ATI 0x8814
#define GL_RGB_FLOAT32_ATI 0x8815
#define GL_ALPHA_FLOAT32_ATI 0x8816
#define GL_INTENSITY_FLOAT32_ATI 0x8817
#define GL_LUMINANCE_FLOAT32_ATI 0x8818
#define GL_LUMINANCE_ALPHA_FLOAT32_ATI 0x8819
#define GL_RGBA_FLOAT16_ATI 0x881A
#define GL_RGB_FLOAT16_ATI 0x881B
#define GL_ALPHA_FLOAT16_ATI 0x881C
#define GL_INTENSITY_FLOAT16_ATI 0x881D
#define GL_LUMINANCE_FLOAT16_ATI 0x881E
#define GL_LUMINANCE_ALPHA_FLOAT16_ATI 0x881F
#define GL_ATI_texture_mirror_once 1
#define GL_MIRROR_CLAMP_ATI 0x8742
#define GL_MIRROR_CLAMP_TO_EDGE_ATI 0x8743
#define GL_ATI_vertex_array_object 1
#define GL_STATIC_ATI 0x8760
#define GL_DYNAMIC_ATI 0x8761
#define GL_PRESERVE_ATI 0x8762
#define GL_DISCARD_ATI 0x8763
#define GL_OBJECT_BUFFER_SIZE_ATI 0x8764
#define GL_OBJECT_BUFFER_USAGE_ATI 0x8765
#define GL_ARRAY_OBJECT_BUFFER_ATI 0x8766
#define GL_ARRAY_OBJECT_OFFSET_ATI 0x8767

typedef GLuint  (*glNewObjectBufferATI_function)(GLsizei size, void * pointer, GLenum usage);
glNewObjectBufferATI_function glNewObjectBufferATI;

typedef GLboolean  (*glIsObjectBufferATI_function)(GLuint buffer);
glIsObjectBufferATI_function glIsObjectBufferATI;

typedef void (*glUpdateObjectBufferATI_function)(GLuint buffer, GLuint offset, GLsizei size, void * pointer, GLenum preserve);
glUpdateObjectBufferATI_function glUpdateObjectBufferATI;

typedef void (*glGetObjectBufferfvATI_function)(GLuint buffer, GLenum pname, GLfloat *params);
glGetObjectBufferfvATI_function glGetObjectBufferfvATI;

typedef void (*glGetObjectBufferivATI_function)(GLuint buffer, GLenum pname, GLint *params);
glGetObjectBufferivATI_function glGetObjectBufferivATI;

typedef void (*glFreeObjectBufferATI_function)(GLuint buffer);
glFreeObjectBufferATI_function glFreeObjectBufferATI;

typedef void (*glArrayObjectATI_function)(GLenum array, GLint size, GLenum type, GLsizei stride, GLuint buffer, GLuint offset);
glArrayObjectATI_function glArrayObjectATI;

typedef void (*glGetArrayObjectfvATI_function)(GLenum array, GLenum pname, GLfloat *params);
glGetArrayObjectfvATI_function glGetArrayObjectfvATI;

typedef void (*glGetArrayObjectivATI_function)(GLenum array, GLenum pname, GLint *params);
glGetArrayObjectivATI_function glGetArrayObjectivATI;

typedef void (*glVariantArrayObjectATI_function)(GLuint id, GLenum type, GLsizei stride, GLuint buffer, GLuint offset);
glVariantArrayObjectATI_function glVariantArrayObjectATI;

typedef void (*glGetVariantArrayObjectfvATI_function)(GLuint id, GLenum pname, GLfloat *params);
glGetVariantArrayObjectfvATI_function glGetVariantArrayObjectfvATI;

typedef void (*glGetVariantArrayObjectivATI_function)(GLuint id, GLenum pname, GLint *params);
glGetVariantArrayObjectivATI_function glGetVariantArrayObjectivATI;
#define GL_ATI_vertex_attrib_array_object 1

typedef void (*glVertexAttribArrayObjectATI_function)(GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, GLuint buffer, GLuint offset);
glVertexAttribArrayObjectATI_function glVertexAttribArrayObjectATI;

typedef void (*glGetVertexAttribArrayObjectfvATI_function)(GLuint index, GLenum pname, GLfloat *params);
glGetVertexAttribArrayObjectfvATI_function glGetVertexAttribArrayObjectfvATI;

typedef void (*glGetVertexAttribArrayObjectivATI_function)(GLuint index, GLenum pname, GLint *params);
glGetVertexAttribArrayObjectivATI_function glGetVertexAttribArrayObjectivATI;
#define GL_ATI_vertex_streams 1
#define GL_MAX_VERTEX_STREAMS_ATI 0x876B
#define GL_VERTEX_STREAM0_ATI 0x876C
#define GL_VERTEX_STREAM1_ATI 0x876D
#define GL_VERTEX_STREAM2_ATI 0x876E
#define GL_VERTEX_STREAM3_ATI 0x876F
#define GL_VERTEX_STREAM4_ATI 0x8770
#define GL_VERTEX_STREAM5_ATI 0x8771
#define GL_VERTEX_STREAM6_ATI 0x8772
#define GL_VERTEX_STREAM7_ATI 0x8773
#define GL_VERTEX_SOURCE_ATI 0x8774

typedef void (*glVertexStream1sATI_function)(GLenum stream, GLshort x);
glVertexStream1sATI_function glVertexStream1sATI;

typedef void (*glVertexStream1svATI_function)(GLenum stream, GLshort *coords);
glVertexStream1svATI_function glVertexStream1svATI;

typedef void (*glVertexStream1iATI_function)(GLenum stream, GLint x);
glVertexStream1iATI_function glVertexStream1iATI;

typedef void (*glVertexStream1ivATI_function)(GLenum stream, GLint *coords);
glVertexStream1ivATI_function glVertexStream1ivATI;

typedef void (*glVertexStream1fATI_function)(GLenum stream, GLfloat x);
glVertexStream1fATI_function glVertexStream1fATI;

typedef void (*glVertexStream1fvATI_function)(GLenum stream, GLfloat *coords);
glVertexStream1fvATI_function glVertexStream1fvATI;

typedef void (*glVertexStream1dATI_function)(GLenum stream, GLdouble x);
glVertexStream1dATI_function glVertexStream1dATI;

typedef void (*glVertexStream1dvATI_function)(GLenum stream, GLdouble *coords);
glVertexStream1dvATI_function glVertexStream1dvATI;

typedef void (*glVertexStream2sATI_function)(GLenum stream, GLshort x, GLshort y);
glVertexStream2sATI_function glVertexStream2sATI;

typedef void (*glVertexStream2svATI_function)(GLenum stream, GLshort *coords);
glVertexStream2svATI_function glVertexStream2svATI;

typedef void (*glVertexStream2iATI_function)(GLenum stream, GLint x, GLint y);
glVertexStream2iATI_function glVertexStream2iATI;

typedef void (*glVertexStream2ivATI_function)(GLenum stream, GLint *coords);
glVertexStream2ivATI_function glVertexStream2ivATI;

typedef void (*glVertexStream2fATI_function)(GLenum stream, GLfloat x, GLfloat y);
glVertexStream2fATI_function glVertexStream2fATI;

typedef void (*glVertexStream2fvATI_function)(GLenum stream, GLfloat *coords);
glVertexStream2fvATI_function glVertexStream2fvATI;

typedef void (*glVertexStream2dATI_function)(GLenum stream, GLdouble x, GLdouble y);
glVertexStream2dATI_function glVertexStream2dATI;

typedef void (*glVertexStream2dvATI_function)(GLenum stream, GLdouble *coords);
glVertexStream2dvATI_function glVertexStream2dvATI;

typedef void (*glVertexStream3sATI_function)(GLenum stream, GLshort x, GLshort y, GLshort z);
glVertexStream3sATI_function glVertexStream3sATI;

typedef void (*glVertexStream3svATI_function)(GLenum stream, GLshort *coords);
glVertexStream3svATI_function glVertexStream3svATI;

typedef void (*glVertexStream3iATI_function)(GLenum stream, GLint x, GLint y, GLint z);
glVertexStream3iATI_function glVertexStream3iATI;

typedef void (*glVertexStream3ivATI_function)(GLenum stream, GLint *coords);
glVertexStream3ivATI_function glVertexStream3ivATI;

typedef void (*glVertexStream3fATI_function)(GLenum stream, GLfloat x, GLfloat y, GLfloat z);
glVertexStream3fATI_function glVertexStream3fATI;

typedef void (*glVertexStream3fvATI_function)(GLenum stream, GLfloat *coords);
glVertexStream3fvATI_function glVertexStream3fvATI;

typedef void (*glVertexStream3dATI_function)(GLenum stream, GLdouble x, GLdouble y, GLdouble z);
glVertexStream3dATI_function glVertexStream3dATI;

typedef void (*glVertexStream3dvATI_function)(GLenum stream, GLdouble *coords);
glVertexStream3dvATI_function glVertexStream3dvATI;

typedef void (*glVertexStream4sATI_function)(GLenum stream, GLshort x, GLshort y, GLshort z, GLshort w);
glVertexStream4sATI_function glVertexStream4sATI;

typedef void (*glVertexStream4svATI_function)(GLenum stream, GLshort *coords);
glVertexStream4svATI_function glVertexStream4svATI;

typedef void (*glVertexStream4iATI_function)(GLenum stream, GLint x, GLint y, GLint z, GLint w);
glVertexStream4iATI_function glVertexStream4iATI;

typedef void (*glVertexStream4ivATI_function)(GLenum stream, GLint *coords);
glVertexStream4ivATI_function glVertexStream4ivATI;

typedef void (*glVertexStream4fATI_function)(GLenum stream, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
glVertexStream4fATI_function glVertexStream4fATI;

typedef void (*glVertexStream4fvATI_function)(GLenum stream, GLfloat *coords);
glVertexStream4fvATI_function glVertexStream4fvATI;

typedef void (*glVertexStream4dATI_function)(GLenum stream, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
glVertexStream4dATI_function glVertexStream4dATI;

typedef void (*glVertexStream4dvATI_function)(GLenum stream, GLdouble *coords);
glVertexStream4dvATI_function glVertexStream4dvATI;

typedef void (*glNormalStream3bATI_function)(GLenum stream, GLbyte nx, GLbyte ny, GLbyte nz);
glNormalStream3bATI_function glNormalStream3bATI;

typedef void (*glNormalStream3bvATI_function)(GLenum stream, GLbyte *coords);
glNormalStream3bvATI_function glNormalStream3bvATI;

typedef void (*glNormalStream3sATI_function)(GLenum stream, GLshort nx, GLshort ny, GLshort nz);
glNormalStream3sATI_function glNormalStream3sATI;

typedef void (*glNormalStream3svATI_function)(GLenum stream, GLshort *coords);
glNormalStream3svATI_function glNormalStream3svATI;

typedef void (*glNormalStream3iATI_function)(GLenum stream, GLint nx, GLint ny, GLint nz);
glNormalStream3iATI_function glNormalStream3iATI;

typedef void (*glNormalStream3ivATI_function)(GLenum stream, GLint *coords);
glNormalStream3ivATI_function glNormalStream3ivATI;

typedef void (*glNormalStream3fATI_function)(GLenum stream, GLfloat nx, GLfloat ny, GLfloat nz);
glNormalStream3fATI_function glNormalStream3fATI;

typedef void (*glNormalStream3fvATI_function)(GLenum stream, GLfloat *coords);
glNormalStream3fvATI_function glNormalStream3fvATI;

typedef void (*glNormalStream3dATI_function)(GLenum stream, GLdouble nx, GLdouble ny, GLdouble nz);
glNormalStream3dATI_function glNormalStream3dATI;

typedef void (*glNormalStream3dvATI_function)(GLenum stream, GLdouble *coords);
glNormalStream3dvATI_function glNormalStream3dvATI;

typedef void (*glClientActiveVertexStreamATI_function)(GLenum stream);
glClientActiveVertexStreamATI_function glClientActiveVertexStreamATI;

typedef void (*glVertexBlendEnviATI_function)(GLenum pname, GLint param);
glVertexBlendEnviATI_function glVertexBlendEnviATI;

typedef void (*glVertexBlendEnvfATI_function)(GLenum pname, GLfloat param);
glVertexBlendEnvfATI_function glVertexBlendEnvfATI;
#define GL_EXT_422_pixels 1
#define GL_422_EXT 0x80CC
#define GL_422_REV_EXT 0x80CD
#define GL_422_AVERAGE_EXT 0x80CE
#define GL_422_REV_AVERAGE_EXT 0x80CF
#define GL_EXT_EGL_image_storage 1

typedef void (*glEGLImageTargetTexStorageEXT_function)(GLenum target, GLeglImageOES image, GLint *attrib_list);
glEGLImageTargetTexStorageEXT_function glEGLImageTargetTexStorageEXT;

typedef void (*glEGLImageTargetTextureStorageEXT_function)(GLuint texture, GLeglImageOES image, GLint *attrib_list);
glEGLImageTargetTextureStorageEXT_function glEGLImageTargetTextureStorageEXT;
#define GL_EXT_EGL_sync 1
#define GL_EXT_abgr 1
#define GL_ABGR_EXT 0x8000
#define GL_EXT_bindable_uniform 1
#define GL_MAX_VERTEX_BINDABLE_UNIFORMS_EXT 0x8DE2
#define GL_MAX_FRAGMENT_BINDABLE_UNIFORMS_EXT 0x8DE3
#define GL_MAX_GEOMETRY_BINDABLE_UNIFORMS_EXT 0x8DE4
#define GL_MAX_BINDABLE_UNIFORM_SIZE_EXT 0x8DED
#define GL_UNIFORM_BUFFER_EXT 0x8DEE
#define GL_UNIFORM_BUFFER_BINDING_EXT 0x8DEF

typedef void (*glUniformBufferEXT_function)(GLuint program, GLint location, GLuint buffer);
glUniformBufferEXT_function glUniformBufferEXT;

typedef GLint  (*glGetUniformBufferSizeEXT_function)(GLuint program, GLint location);
glGetUniformBufferSizeEXT_function glGetUniformBufferSizeEXT;

typedef GLintptr  (*glGetUniformOffsetEXT_function)(GLuint program, GLint location);
glGetUniformOffsetEXT_function glGetUniformOffsetEXT;
#define GL_EXT_blend_color 1
#define GL_CONSTANT_COLOR_EXT 0x8001
#define GL_ONE_MINUS_CONSTANT_COLOR_EXT 0x8002
#define GL_CONSTANT_ALPHA_EXT 0x8003
#define GL_ONE_MINUS_CONSTANT_ALPHA_EXT 0x8004
#define GL_BLEND_COLOR_EXT 0x8005

typedef void (*glBlendColorEXT_function)(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);
glBlendColorEXT_function glBlendColorEXT;
#define GL_EXT_blend_equation_separate 1
#define GL_BLEND_EQUATION_RGB_EXT 0x8009
#define GL_BLEND_EQUATION_ALPHA_EXT 0x883D

typedef void (*glBlendEquationSeparateEXT_function)(GLenum modeRGB, GLenum modeAlpha);
glBlendEquationSeparateEXT_function glBlendEquationSeparateEXT;
#define GL_EXT_blend_func_separate 1
#define GL_BLEND_DST_RGB_EXT 0x80C8
#define GL_BLEND_SRC_RGB_EXT 0x80C9
#define GL_BLEND_DST_ALPHA_EXT 0x80CA
#define GL_BLEND_SRC_ALPHA_EXT 0x80CB

typedef void (*glBlendFuncSeparateEXT_function)(GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha);
glBlendFuncSeparateEXT_function glBlendFuncSeparateEXT;
#define GL_EXT_blend_logic_op 1
#define GL_EXT_blend_minmax 1
#define GL_MIN_EXT 0x8007
#define GL_MAX_EXT 0x8008
#define GL_FUNC_ADD_EXT 0x8006
#define GL_BLEND_EQUATION_EXT 0x8009

typedef void (*glBlendEquationEXT_function)(GLenum mode);
glBlendEquationEXT_function glBlendEquationEXT;
#define GL_EXT_blend_subtract 1
#define GL_FUNC_SUBTRACT_EXT 0x800A
#define GL_FUNC_REVERSE_SUBTRACT_EXT 0x800B
#define GL_EXT_clip_volume_hint 1
#define GL_CLIP_VOLUME_CLIPPING_HINT_EXT 0x80F0
#define GL_EXT_cmyka 1
#define GL_CMYK_EXT 0x800C
#define GL_CMYKA_EXT 0x800D
#define GL_PACK_CMYK_HINT_EXT 0x800E
#define GL_UNPACK_CMYK_HINT_EXT 0x800F
#define GL_EXT_color_subtable 1

typedef void (*glColorSubTableEXT_function)(GLenum target, GLsizei start, GLsizei count, GLenum format, GLenum type, void * data);
glColorSubTableEXT_function glColorSubTableEXT;

typedef void (*glCopyColorSubTableEXT_function)(GLenum target, GLsizei start, GLint x, GLint y, GLsizei width);
glCopyColorSubTableEXT_function glCopyColorSubTableEXT;
#define GL_EXT_compiled_vertex_array 1
#define GL_ARRAY_ELEMENT_LOCK_FIRST_EXT 0x81A8
#define GL_ARRAY_ELEMENT_LOCK_COUNT_EXT 0x81A9

typedef void (*glLockArraysEXT_function)(GLint first, GLsizei count);
glLockArraysEXT_function glLockArraysEXT;

typedef void (*glUnlockArraysEXT_function)();
glUnlockArraysEXT_function glUnlockArraysEXT;
#define GL_EXT_convolution 1
#define GL_CONVOLUTION_1D_EXT 0x8010
#define GL_CONVOLUTION_2D_EXT 0x8011
#define GL_SEPARABLE_2D_EXT 0x8012
#define GL_CONVOLUTION_BORDER_MODE_EXT 0x8013
#define GL_CONVOLUTION_FILTER_SCALE_EXT 0x8014
#define GL_CONVOLUTION_FILTER_BIAS_EXT 0x8015
#define GL_REDUCE_EXT 0x8016
#define GL_CONVOLUTION_FORMAT_EXT 0x8017
#define GL_CONVOLUTION_WIDTH_EXT 0x8018
#define GL_CONVOLUTION_HEIGHT_EXT 0x8019
#define GL_MAX_CONVOLUTION_WIDTH_EXT 0x801A
#define GL_MAX_CONVOLUTION_HEIGHT_EXT 0x801B
#define GL_POST_CONVOLUTION_RED_SCALE_EXT 0x801C
#define GL_POST_CONVOLUTION_GREEN_SCALE_EXT 0x801D
#define GL_POST_CONVOLUTION_BLUE_SCALE_EXT 0x801E
#define GL_POST_CONVOLUTION_ALPHA_SCALE_EXT 0x801F
#define GL_POST_CONVOLUTION_RED_BIAS_EXT 0x8020
#define GL_POST_CONVOLUTION_GREEN_BIAS_EXT 0x8021
#define GL_POST_CONVOLUTION_BLUE_BIAS_EXT 0x8022
#define GL_POST_CONVOLUTION_ALPHA_BIAS_EXT 0x8023

typedef void (*glConvolutionFilter1DEXT_function)(GLenum target, GLenum internalformat, GLsizei width, GLenum format, GLenum type, void * image);
glConvolutionFilter1DEXT_function glConvolutionFilter1DEXT;

typedef void (*glConvolutionFilter2DEXT_function)(GLenum target, GLenum internalformat, GLsizei width, GLsizei height, GLenum format, GLenum type, void * image);
glConvolutionFilter2DEXT_function glConvolutionFilter2DEXT;

typedef void (*glConvolutionParameterfEXT_function)(GLenum target, GLenum pname, GLfloat params);
glConvolutionParameterfEXT_function glConvolutionParameterfEXT;

typedef void (*glConvolutionParameterfvEXT_function)(GLenum target, GLenum pname, GLfloat *params);
glConvolutionParameterfvEXT_function glConvolutionParameterfvEXT;

typedef void (*glConvolutionParameteriEXT_function)(GLenum target, GLenum pname, GLint params);
glConvolutionParameteriEXT_function glConvolutionParameteriEXT;

typedef void (*glConvolutionParameterivEXT_function)(GLenum target, GLenum pname, GLint *params);
glConvolutionParameterivEXT_function glConvolutionParameterivEXT;

typedef void (*glCopyConvolutionFilter1DEXT_function)(GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width);
glCopyConvolutionFilter1DEXT_function glCopyConvolutionFilter1DEXT;

typedef void (*glCopyConvolutionFilter2DEXT_function)(GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height);
glCopyConvolutionFilter2DEXT_function glCopyConvolutionFilter2DEXT;

typedef void (*glGetConvolutionFilterEXT_function)(GLenum target, GLenum format, GLenum type, void * image);
glGetConvolutionFilterEXT_function glGetConvolutionFilterEXT;

typedef void (*glGetConvolutionParameterfvEXT_function)(GLenum target, GLenum pname, GLfloat *params);
glGetConvolutionParameterfvEXT_function glGetConvolutionParameterfvEXT;

typedef void (*glGetConvolutionParameterivEXT_function)(GLenum target, GLenum pname, GLint *params);
glGetConvolutionParameterivEXT_function glGetConvolutionParameterivEXT;

typedef void (*glGetSeparableFilterEXT_function)(GLenum target, GLenum format, GLenum type, void * row, void * column, void * span);
glGetSeparableFilterEXT_function glGetSeparableFilterEXT;

typedef void (*glSeparableFilter2DEXT_function)(GLenum target, GLenum internalformat, GLsizei width, GLsizei height, GLenum format, GLenum type, void * row, void * column);
glSeparableFilter2DEXT_function glSeparableFilter2DEXT;
#define GL_EXT_coordinate_frame 1
#define GL_TANGENT_ARRAY_EXT 0x8439
#define GL_BINORMAL_ARRAY_EXT 0x843A
#define GL_CURRENT_TANGENT_EXT 0x843B
#define GL_CURRENT_BINORMAL_EXT 0x843C
#define GL_TANGENT_ARRAY_TYPE_EXT 0x843E
#define GL_TANGENT_ARRAY_STRIDE_EXT 0x843F
#define GL_BINORMAL_ARRAY_TYPE_EXT 0x8440
#define GL_BINORMAL_ARRAY_STRIDE_EXT 0x8441
#define GL_TANGENT_ARRAY_POINTER_EXT 0x8442
#define GL_BINORMAL_ARRAY_POINTER_EXT 0x8443
#define GL_MAP1_TANGENT_EXT 0x8444
#define GL_MAP2_TANGENT_EXT 0x8445
#define GL_MAP1_BINORMAL_EXT 0x8446
#define GL_MAP2_BINORMAL_EXT 0x8447

typedef void (*glTangent3bEXT_function)(GLbyte tx, GLbyte ty, GLbyte tz);
glTangent3bEXT_function glTangent3bEXT;

typedef void (*glTangent3bvEXT_function)(GLbyte *v);
glTangent3bvEXT_function glTangent3bvEXT;

typedef void (*glTangent3dEXT_function)(GLdouble tx, GLdouble ty, GLdouble tz);
glTangent3dEXT_function glTangent3dEXT;

typedef void (*glTangent3dvEXT_function)(GLdouble *v);
glTangent3dvEXT_function glTangent3dvEXT;

typedef void (*glTangent3fEXT_function)(GLfloat tx, GLfloat ty, GLfloat tz);
glTangent3fEXT_function glTangent3fEXT;

typedef void (*glTangent3fvEXT_function)(GLfloat *v);
glTangent3fvEXT_function glTangent3fvEXT;

typedef void (*glTangent3iEXT_function)(GLint tx, GLint ty, GLint tz);
glTangent3iEXT_function glTangent3iEXT;

typedef void (*glTangent3ivEXT_function)(GLint *v);
glTangent3ivEXT_function glTangent3ivEXT;

typedef void (*glTangent3sEXT_function)(GLshort tx, GLshort ty, GLshort tz);
glTangent3sEXT_function glTangent3sEXT;

typedef void (*glTangent3svEXT_function)(GLshort *v);
glTangent3svEXT_function glTangent3svEXT;

typedef void (*glBinormal3bEXT_function)(GLbyte bx, GLbyte by, GLbyte bz);
glBinormal3bEXT_function glBinormal3bEXT;

typedef void (*glBinormal3bvEXT_function)(GLbyte *v);
glBinormal3bvEXT_function glBinormal3bvEXT;

typedef void (*glBinormal3dEXT_function)(GLdouble bx, GLdouble by, GLdouble bz);
glBinormal3dEXT_function glBinormal3dEXT;

typedef void (*glBinormal3dvEXT_function)(GLdouble *v);
glBinormal3dvEXT_function glBinormal3dvEXT;

typedef void (*glBinormal3fEXT_function)(GLfloat bx, GLfloat by, GLfloat bz);
glBinormal3fEXT_function glBinormal3fEXT;

typedef void (*glBinormal3fvEXT_function)(GLfloat *v);
glBinormal3fvEXT_function glBinormal3fvEXT;

typedef void (*glBinormal3iEXT_function)(GLint bx, GLint by, GLint bz);
glBinormal3iEXT_function glBinormal3iEXT;

typedef void (*glBinormal3ivEXT_function)(GLint *v);
glBinormal3ivEXT_function glBinormal3ivEXT;

typedef void (*glBinormal3sEXT_function)(GLshort bx, GLshort by, GLshort bz);
glBinormal3sEXT_function glBinormal3sEXT;

typedef void (*glBinormal3svEXT_function)(GLshort *v);
glBinormal3svEXT_function glBinormal3svEXT;

typedef void (*glTangentPointerEXT_function)(GLenum type, GLsizei stride, void * pointer);
glTangentPointerEXT_function glTangentPointerEXT;

typedef void (*glBinormalPointerEXT_function)(GLenum type, GLsizei stride, void * pointer);
glBinormalPointerEXT_function glBinormalPointerEXT;
#define GL_EXT_copy_texture 1

typedef void (*glCopyTexImage1DEXT_function)(GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border);
glCopyTexImage1DEXT_function glCopyTexImage1DEXT;

typedef void (*glCopyTexImage2DEXT_function)(GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border);
glCopyTexImage2DEXT_function glCopyTexImage2DEXT;

typedef void (*glCopyTexSubImage1DEXT_function)(GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width);
glCopyTexSubImage1DEXT_function glCopyTexSubImage1DEXT;

typedef void (*glCopyTexSubImage2DEXT_function)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height);
glCopyTexSubImage2DEXT_function glCopyTexSubImage2DEXT;

typedef void (*glCopyTexSubImage3DEXT_function)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height);
glCopyTexSubImage3DEXT_function glCopyTexSubImage3DEXT;
#define GL_EXT_cull_vertex 1
#define GL_CULL_VERTEX_EXT 0x81AA
#define GL_CULL_VERTEX_EYE_POSITION_EXT 0x81AB
#define GL_CULL_VERTEX_OBJECT_POSITION_EXT 0x81AC

typedef void (*glCullParameterdvEXT_function)(GLenum pname, GLdouble *params);
glCullParameterdvEXT_function glCullParameterdvEXT;

typedef void (*glCullParameterfvEXT_function)(GLenum pname, GLfloat *params);
glCullParameterfvEXT_function glCullParameterfvEXT;
#define GL_EXT_debug_label 1
#define GL_PROGRAM_PIPELINE_OBJECT_EXT 0x8A4F
#define GL_PROGRAM_OBJECT_EXT 0x8B40
#define GL_SHADER_OBJECT_EXT 0x8B48
#define GL_BUFFER_OBJECT_EXT 0x9151
#define GL_QUERY_OBJECT_EXT 0x9153
#define GL_VERTEX_ARRAY_OBJECT_EXT 0x9154

typedef void (*glLabelObjectEXT_function)(GLenum type, GLuint object, GLsizei length, GLchar *label);
glLabelObjectEXT_function glLabelObjectEXT;

typedef void (*glGetObjectLabelEXT_function)(GLenum type, GLuint object, GLsizei bufSize, GLsizei *length, GLchar *label);
glGetObjectLabelEXT_function glGetObjectLabelEXT;
#define GL_EXT_debug_marker 1

typedef void (*glInsertEventMarkerEXT_function)(GLsizei length, GLchar *marker);
glInsertEventMarkerEXT_function glInsertEventMarkerEXT;

typedef void (*glPushGroupMarkerEXT_function)(GLsizei length, GLchar *marker);
glPushGroupMarkerEXT_function glPushGroupMarkerEXT;

typedef void (*glPopGroupMarkerEXT_function)();
glPopGroupMarkerEXT_function glPopGroupMarkerEXT;
#define GL_EXT_depth_bounds_test 1
#define GL_DEPTH_BOUNDS_TEST_EXT 0x8890
#define GL_DEPTH_BOUNDS_EXT 0x8891

typedef void (*glDepthBoundsEXT_function)(GLclampd zmin, GLclampd zmax);
glDepthBoundsEXT_function glDepthBoundsEXT;
#define GL_EXT_direct_state_access 1
#define GL_PROGRAM_MATRIX_EXT 0x8E2D
#define GL_TRANSPOSE_PROGRAM_MATRIX_EXT 0x8E2E
#define GL_PROGRAM_MATRIX_STACK_DEPTH_EXT 0x8E2F

typedef void (*glMatrixLoadfEXT_function)(GLenum mode, GLfloat *m);
glMatrixLoadfEXT_function glMatrixLoadfEXT;

typedef void (*glMatrixLoaddEXT_function)(GLenum mode, GLdouble *m);
glMatrixLoaddEXT_function glMatrixLoaddEXT;

typedef void (*glMatrixMultfEXT_function)(GLenum mode, GLfloat *m);
glMatrixMultfEXT_function glMatrixMultfEXT;

typedef void (*glMatrixMultdEXT_function)(GLenum mode, GLdouble *m);
glMatrixMultdEXT_function glMatrixMultdEXT;

typedef void (*glMatrixLoadIdentityEXT_function)(GLenum mode);
glMatrixLoadIdentityEXT_function glMatrixLoadIdentityEXT;

typedef void (*glMatrixRotatefEXT_function)(GLenum mode, GLfloat angle, GLfloat x, GLfloat y, GLfloat z);
glMatrixRotatefEXT_function glMatrixRotatefEXT;

typedef void (*glMatrixRotatedEXT_function)(GLenum mode, GLdouble angle, GLdouble x, GLdouble y, GLdouble z);
glMatrixRotatedEXT_function glMatrixRotatedEXT;

typedef void (*glMatrixScalefEXT_function)(GLenum mode, GLfloat x, GLfloat y, GLfloat z);
glMatrixScalefEXT_function glMatrixScalefEXT;

typedef void (*glMatrixScaledEXT_function)(GLenum mode, GLdouble x, GLdouble y, GLdouble z);
glMatrixScaledEXT_function glMatrixScaledEXT;

typedef void (*glMatrixTranslatefEXT_function)(GLenum mode, GLfloat x, GLfloat y, GLfloat z);
glMatrixTranslatefEXT_function glMatrixTranslatefEXT;

typedef void (*glMatrixTranslatedEXT_function)(GLenum mode, GLdouble x, GLdouble y, GLdouble z);
glMatrixTranslatedEXT_function glMatrixTranslatedEXT;

typedef void (*glMatrixFrustumEXT_function)(GLenum mode, GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar);
glMatrixFrustumEXT_function glMatrixFrustumEXT;

typedef void (*glMatrixOrthoEXT_function)(GLenum mode, GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar);
glMatrixOrthoEXT_function glMatrixOrthoEXT;

typedef void (*glMatrixPopEXT_function)(GLenum mode);
glMatrixPopEXT_function glMatrixPopEXT;

typedef void (*glMatrixPushEXT_function)(GLenum mode);
glMatrixPushEXT_function glMatrixPushEXT;

typedef void (*glClientAttribDefaultEXT_function)(GLbitfield mask);
glClientAttribDefaultEXT_function glClientAttribDefaultEXT;

typedef void (*glPushClientAttribDefaultEXT_function)(GLbitfield mask);
glPushClientAttribDefaultEXT_function glPushClientAttribDefaultEXT;

typedef void (*glTextureParameterfEXT_function)(GLuint texture, GLenum target, GLenum pname, GLfloat param);
glTextureParameterfEXT_function glTextureParameterfEXT;

typedef void (*glTextureParameterfvEXT_function)(GLuint texture, GLenum target, GLenum pname, GLfloat *params);
glTextureParameterfvEXT_function glTextureParameterfvEXT;

typedef void (*glTextureParameteriEXT_function)(GLuint texture, GLenum target, GLenum pname, GLint param);
glTextureParameteriEXT_function glTextureParameteriEXT;

typedef void (*glTextureParameterivEXT_function)(GLuint texture, GLenum target, GLenum pname, GLint *params);
glTextureParameterivEXT_function glTextureParameterivEXT;

typedef void (*glTextureImage1DEXT_function)(GLuint texture, GLenum target, GLint level, GLint internalformat, GLsizei width, GLint border, GLenum format, GLenum type, void * pixels);
glTextureImage1DEXT_function glTextureImage1DEXT;

typedef void (*glTextureImage2DEXT_function)(GLuint texture, GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, void * pixels);
glTextureImage2DEXT_function glTextureImage2DEXT;

typedef void (*glTextureSubImage1DEXT_function)(GLuint texture, GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, void * pixels);
glTextureSubImage1DEXT_function glTextureSubImage1DEXT;

typedef void (*glTextureSubImage2DEXT_function)(GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, void * pixels);
glTextureSubImage2DEXT_function glTextureSubImage2DEXT;

typedef void (*glCopyTextureImage1DEXT_function)(GLuint texture, GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border);
glCopyTextureImage1DEXT_function glCopyTextureImage1DEXT;

typedef void (*glCopyTextureImage2DEXT_function)(GLuint texture, GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border);
glCopyTextureImage2DEXT_function glCopyTextureImage2DEXT;

typedef void (*glCopyTextureSubImage1DEXT_function)(GLuint texture, GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width);
glCopyTextureSubImage1DEXT_function glCopyTextureSubImage1DEXT;

typedef void (*glCopyTextureSubImage2DEXT_function)(GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height);
glCopyTextureSubImage2DEXT_function glCopyTextureSubImage2DEXT;

typedef void (*glGetTextureImageEXT_function)(GLuint texture, GLenum target, GLint level, GLenum format, GLenum type, void * pixels);
glGetTextureImageEXT_function glGetTextureImageEXT;

typedef void (*glGetTextureParameterfvEXT_function)(GLuint texture, GLenum target, GLenum pname, GLfloat *params);
glGetTextureParameterfvEXT_function glGetTextureParameterfvEXT;

typedef void (*glGetTextureParameterivEXT_function)(GLuint texture, GLenum target, GLenum pname, GLint *params);
glGetTextureParameterivEXT_function glGetTextureParameterivEXT;

typedef void (*glGetTextureLevelParameterfvEXT_function)(GLuint texture, GLenum target, GLint level, GLenum pname, GLfloat *params);
glGetTextureLevelParameterfvEXT_function glGetTextureLevelParameterfvEXT;

typedef void (*glGetTextureLevelParameterivEXT_function)(GLuint texture, GLenum target, GLint level, GLenum pname, GLint *params);
glGetTextureLevelParameterivEXT_function glGetTextureLevelParameterivEXT;

typedef void (*glTextureImage3DEXT_function)(GLuint texture, GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, void * pixels);
glTextureImage3DEXT_function glTextureImage3DEXT;

typedef void (*glTextureSubImage3DEXT_function)(GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, void * pixels);
glTextureSubImage3DEXT_function glTextureSubImage3DEXT;

typedef void (*glCopyTextureSubImage3DEXT_function)(GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height);
glCopyTextureSubImage3DEXT_function glCopyTextureSubImage3DEXT;

typedef void (*glBindMultiTextureEXT_function)(GLenum texunit, GLenum target, GLuint texture);
glBindMultiTextureEXT_function glBindMultiTextureEXT;

typedef void (*glMultiTexCoordPointerEXT_function)(GLenum texunit, GLint size, GLenum type, GLsizei stride, void * pointer);
glMultiTexCoordPointerEXT_function glMultiTexCoordPointerEXT;

typedef void (*glMultiTexEnvfEXT_function)(GLenum texunit, GLenum target, GLenum pname, GLfloat param);
glMultiTexEnvfEXT_function glMultiTexEnvfEXT;

typedef void (*glMultiTexEnvfvEXT_function)(GLenum texunit, GLenum target, GLenum pname, GLfloat *params);
glMultiTexEnvfvEXT_function glMultiTexEnvfvEXT;

typedef void (*glMultiTexEnviEXT_function)(GLenum texunit, GLenum target, GLenum pname, GLint param);
glMultiTexEnviEXT_function glMultiTexEnviEXT;

typedef void (*glMultiTexEnvivEXT_function)(GLenum texunit, GLenum target, GLenum pname, GLint *params);
glMultiTexEnvivEXT_function glMultiTexEnvivEXT;

typedef void (*glMultiTexGendEXT_function)(GLenum texunit, GLenum coord, GLenum pname, GLdouble param);
glMultiTexGendEXT_function glMultiTexGendEXT;

typedef void (*glMultiTexGendvEXT_function)(GLenum texunit, GLenum coord, GLenum pname, GLdouble *params);
glMultiTexGendvEXT_function glMultiTexGendvEXT;

typedef void (*glMultiTexGenfEXT_function)(GLenum texunit, GLenum coord, GLenum pname, GLfloat param);
glMultiTexGenfEXT_function glMultiTexGenfEXT;

typedef void (*glMultiTexGenfvEXT_function)(GLenum texunit, GLenum coord, GLenum pname, GLfloat *params);
glMultiTexGenfvEXT_function glMultiTexGenfvEXT;

typedef void (*glMultiTexGeniEXT_function)(GLenum texunit, GLenum coord, GLenum pname, GLint param);
glMultiTexGeniEXT_function glMultiTexGeniEXT;

typedef void (*glMultiTexGenivEXT_function)(GLenum texunit, GLenum coord, GLenum pname, GLint *params);
glMultiTexGenivEXT_function glMultiTexGenivEXT;

typedef void (*glGetMultiTexEnvfvEXT_function)(GLenum texunit, GLenum target, GLenum pname, GLfloat *params);
glGetMultiTexEnvfvEXT_function glGetMultiTexEnvfvEXT;

typedef void (*glGetMultiTexEnvivEXT_function)(GLenum texunit, GLenum target, GLenum pname, GLint *params);
glGetMultiTexEnvivEXT_function glGetMultiTexEnvivEXT;

typedef void (*glGetMultiTexGendvEXT_function)(GLenum texunit, GLenum coord, GLenum pname, GLdouble *params);
glGetMultiTexGendvEXT_function glGetMultiTexGendvEXT;

typedef void (*glGetMultiTexGenfvEXT_function)(GLenum texunit, GLenum coord, GLenum pname, GLfloat *params);
glGetMultiTexGenfvEXT_function glGetMultiTexGenfvEXT;

typedef void (*glGetMultiTexGenivEXT_function)(GLenum texunit, GLenum coord, GLenum pname, GLint *params);
glGetMultiTexGenivEXT_function glGetMultiTexGenivEXT;

typedef void (*glMultiTexParameteriEXT_function)(GLenum texunit, GLenum target, GLenum pname, GLint param);
glMultiTexParameteriEXT_function glMultiTexParameteriEXT;

typedef void (*glMultiTexParameterivEXT_function)(GLenum texunit, GLenum target, GLenum pname, GLint *params);
glMultiTexParameterivEXT_function glMultiTexParameterivEXT;

typedef void (*glMultiTexParameterfEXT_function)(GLenum texunit, GLenum target, GLenum pname, GLfloat param);
glMultiTexParameterfEXT_function glMultiTexParameterfEXT;

typedef void (*glMultiTexParameterfvEXT_function)(GLenum texunit, GLenum target, GLenum pname, GLfloat *params);
glMultiTexParameterfvEXT_function glMultiTexParameterfvEXT;

typedef void (*glMultiTexImage1DEXT_function)(GLenum texunit, GLenum target, GLint level, GLint internalformat, GLsizei width, GLint border, GLenum format, GLenum type, void * pixels);
glMultiTexImage1DEXT_function glMultiTexImage1DEXT;

typedef void (*glMultiTexImage2DEXT_function)(GLenum texunit, GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, void * pixels);
glMultiTexImage2DEXT_function glMultiTexImage2DEXT;

typedef void (*glMultiTexSubImage1DEXT_function)(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, void * pixels);
glMultiTexSubImage1DEXT_function glMultiTexSubImage1DEXT;

typedef void (*glMultiTexSubImage2DEXT_function)(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, void * pixels);
glMultiTexSubImage2DEXT_function glMultiTexSubImage2DEXT;

typedef void (*glCopyMultiTexImage1DEXT_function)(GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border);
glCopyMultiTexImage1DEXT_function glCopyMultiTexImage1DEXT;

typedef void (*glCopyMultiTexImage2DEXT_function)(GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border);
glCopyMultiTexImage2DEXT_function glCopyMultiTexImage2DEXT;

typedef void (*glCopyMultiTexSubImage1DEXT_function)(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width);
glCopyMultiTexSubImage1DEXT_function glCopyMultiTexSubImage1DEXT;

typedef void (*glCopyMultiTexSubImage2DEXT_function)(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height);
glCopyMultiTexSubImage2DEXT_function glCopyMultiTexSubImage2DEXT;

typedef void (*glGetMultiTexImageEXT_function)(GLenum texunit, GLenum target, GLint level, GLenum format, GLenum type, void * pixels);
glGetMultiTexImageEXT_function glGetMultiTexImageEXT;

typedef void (*glGetMultiTexParameterfvEXT_function)(GLenum texunit, GLenum target, GLenum pname, GLfloat *params);
glGetMultiTexParameterfvEXT_function glGetMultiTexParameterfvEXT;

typedef void (*glGetMultiTexParameterivEXT_function)(GLenum texunit, GLenum target, GLenum pname, GLint *params);
glGetMultiTexParameterivEXT_function glGetMultiTexParameterivEXT;

typedef void (*glGetMultiTexLevelParameterfvEXT_function)(GLenum texunit, GLenum target, GLint level, GLenum pname, GLfloat *params);
glGetMultiTexLevelParameterfvEXT_function glGetMultiTexLevelParameterfvEXT;

typedef void (*glGetMultiTexLevelParameterivEXT_function)(GLenum texunit, GLenum target, GLint level, GLenum pname, GLint *params);
glGetMultiTexLevelParameterivEXT_function glGetMultiTexLevelParameterivEXT;

typedef void (*glMultiTexImage3DEXT_function)(GLenum texunit, GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, void * pixels);
glMultiTexImage3DEXT_function glMultiTexImage3DEXT;

typedef void (*glMultiTexSubImage3DEXT_function)(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, void * pixels);
glMultiTexSubImage3DEXT_function glMultiTexSubImage3DEXT;

typedef void (*glCopyMultiTexSubImage3DEXT_function)(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height);
glCopyMultiTexSubImage3DEXT_function glCopyMultiTexSubImage3DEXT;

typedef void (*glEnableClientStateIndexedEXT_function)(GLenum array, GLuint index);
glEnableClientStateIndexedEXT_function glEnableClientStateIndexedEXT;

typedef void (*glDisableClientStateIndexedEXT_function)(GLenum array, GLuint index);
glDisableClientStateIndexedEXT_function glDisableClientStateIndexedEXT;

typedef void (*glGetFloatIndexedvEXT_function)(GLenum target, GLuint index, GLfloat *data);
glGetFloatIndexedvEXT_function glGetFloatIndexedvEXT;

typedef void (*glGetDoubleIndexedvEXT_function)(GLenum target, GLuint index, GLdouble *data);
glGetDoubleIndexedvEXT_function glGetDoubleIndexedvEXT;

typedef void (*glGetPointerIndexedvEXT_function)(GLenum target, GLuint index, void * *data);
glGetPointerIndexedvEXT_function glGetPointerIndexedvEXT;

typedef void (*glEnableIndexedEXT_function)(GLenum target, GLuint index);
glEnableIndexedEXT_function glEnableIndexedEXT;

typedef void (*glDisableIndexedEXT_function)(GLenum target, GLuint index);
glDisableIndexedEXT_function glDisableIndexedEXT;

typedef GLboolean  (*glIsEnabledIndexedEXT_function)(GLenum target, GLuint index);
glIsEnabledIndexedEXT_function glIsEnabledIndexedEXT;

typedef void (*glGetIntegerIndexedvEXT_function)(GLenum target, GLuint index, GLint *data);
glGetIntegerIndexedvEXT_function glGetIntegerIndexedvEXT;

typedef void (*glGetBooleanIndexedvEXT_function)(GLenum target, GLuint index, GLboolean *data);
glGetBooleanIndexedvEXT_function glGetBooleanIndexedvEXT;

typedef void (*glCompressedTextureImage3DEXT_function)(GLuint texture, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, void * bits);
glCompressedTextureImage3DEXT_function glCompressedTextureImage3DEXT;

typedef void (*glCompressedTextureImage2DEXT_function)(GLuint texture, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, void * bits);
glCompressedTextureImage2DEXT_function glCompressedTextureImage2DEXT;

typedef void (*glCompressedTextureImage1DEXT_function)(GLuint texture, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, void * bits);
glCompressedTextureImage1DEXT_function glCompressedTextureImage1DEXT;

typedef void (*glCompressedTextureSubImage3DEXT_function)(GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, void * bits);
glCompressedTextureSubImage3DEXT_function glCompressedTextureSubImage3DEXT;

typedef void (*glCompressedTextureSubImage2DEXT_function)(GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, void * bits);
glCompressedTextureSubImage2DEXT_function glCompressedTextureSubImage2DEXT;

typedef void (*glCompressedTextureSubImage1DEXT_function)(GLuint texture, GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, void * bits);
glCompressedTextureSubImage1DEXT_function glCompressedTextureSubImage1DEXT;

typedef void (*glGetCompressedTextureImageEXT_function)(GLuint texture, GLenum target, GLint lod, void * img);
glGetCompressedTextureImageEXT_function glGetCompressedTextureImageEXT;

typedef void (*glCompressedMultiTexImage3DEXT_function)(GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, void * bits);
glCompressedMultiTexImage3DEXT_function glCompressedMultiTexImage3DEXT;

typedef void (*glCompressedMultiTexImage2DEXT_function)(GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, void * bits);
glCompressedMultiTexImage2DEXT_function glCompressedMultiTexImage2DEXT;

typedef void (*glCompressedMultiTexImage1DEXT_function)(GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, void * bits);
glCompressedMultiTexImage1DEXT_function glCompressedMultiTexImage1DEXT;

typedef void (*glCompressedMultiTexSubImage3DEXT_function)(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, void * bits);
glCompressedMultiTexSubImage3DEXT_function glCompressedMultiTexSubImage3DEXT;

typedef void (*glCompressedMultiTexSubImage2DEXT_function)(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, void * bits);
glCompressedMultiTexSubImage2DEXT_function glCompressedMultiTexSubImage2DEXT;

typedef void (*glCompressedMultiTexSubImage1DEXT_function)(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, void * bits);
glCompressedMultiTexSubImage1DEXT_function glCompressedMultiTexSubImage1DEXT;

typedef void (*glGetCompressedMultiTexImageEXT_function)(GLenum texunit, GLenum target, GLint lod, void * img);
glGetCompressedMultiTexImageEXT_function glGetCompressedMultiTexImageEXT;

typedef void (*glMatrixLoadTransposefEXT_function)(GLenum mode, GLfloat *m);
glMatrixLoadTransposefEXT_function glMatrixLoadTransposefEXT;

typedef void (*glMatrixLoadTransposedEXT_function)(GLenum mode, GLdouble *m);
glMatrixLoadTransposedEXT_function glMatrixLoadTransposedEXT;

typedef void (*glMatrixMultTransposefEXT_function)(GLenum mode, GLfloat *m);
glMatrixMultTransposefEXT_function glMatrixMultTransposefEXT;

typedef void (*glMatrixMultTransposedEXT_function)(GLenum mode, GLdouble *m);
glMatrixMultTransposedEXT_function glMatrixMultTransposedEXT;

typedef void (*glNamedBufferDataEXT_function)(GLuint buffer, GLsizeiptr size, void * data, GLenum usage);
glNamedBufferDataEXT_function glNamedBufferDataEXT;

typedef void (*glNamedBufferSubDataEXT_function)(GLuint buffer, GLintptr offset, GLsizeiptr size, void * data);
glNamedBufferSubDataEXT_function glNamedBufferSubDataEXT;

typedef void *  (*glMapNamedBufferEXT_function)(GLuint buffer, GLenum access);
glMapNamedBufferEXT_function glMapNamedBufferEXT;

typedef GLboolean  (*glUnmapNamedBufferEXT_function)(GLuint buffer);
glUnmapNamedBufferEXT_function glUnmapNamedBufferEXT;

typedef void (*glGetNamedBufferParameterivEXT_function)(GLuint buffer, GLenum pname, GLint *params);
glGetNamedBufferParameterivEXT_function glGetNamedBufferParameterivEXT;

typedef void (*glGetNamedBufferPointervEXT_function)(GLuint buffer, GLenum pname, void * *params);
glGetNamedBufferPointervEXT_function glGetNamedBufferPointervEXT;

typedef void (*glGetNamedBufferSubDataEXT_function)(GLuint buffer, GLintptr offset, GLsizeiptr size, void * data);
glGetNamedBufferSubDataEXT_function glGetNamedBufferSubDataEXT;

typedef void (*glProgramUniform1fEXT_function)(GLuint program, GLint location, GLfloat v0);
glProgramUniform1fEXT_function glProgramUniform1fEXT;

typedef void (*glProgramUniform2fEXT_function)(GLuint program, GLint location, GLfloat v0, GLfloat v1);
glProgramUniform2fEXT_function glProgramUniform2fEXT;

typedef void (*glProgramUniform3fEXT_function)(GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2);
glProgramUniform3fEXT_function glProgramUniform3fEXT;

typedef void (*glProgramUniform4fEXT_function)(GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3);
glProgramUniform4fEXT_function glProgramUniform4fEXT;

typedef void (*glProgramUniform1iEXT_function)(GLuint program, GLint location, GLint v0);
glProgramUniform1iEXT_function glProgramUniform1iEXT;

typedef void (*glProgramUniform2iEXT_function)(GLuint program, GLint location, GLint v0, GLint v1);
glProgramUniform2iEXT_function glProgramUniform2iEXT;

typedef void (*glProgramUniform3iEXT_function)(GLuint program, GLint location, GLint v0, GLint v1, GLint v2);
glProgramUniform3iEXT_function glProgramUniform3iEXT;

typedef void (*glProgramUniform4iEXT_function)(GLuint program, GLint location, GLint v0, GLint v1, GLint v2, GLint v3);
glProgramUniform4iEXT_function glProgramUniform4iEXT;

typedef void (*glProgramUniform1fvEXT_function)(GLuint program, GLint location, GLsizei count, GLfloat *value);
glProgramUniform1fvEXT_function glProgramUniform1fvEXT;

typedef void (*glProgramUniform2fvEXT_function)(GLuint program, GLint location, GLsizei count, GLfloat *value);
glProgramUniform2fvEXT_function glProgramUniform2fvEXT;

typedef void (*glProgramUniform3fvEXT_function)(GLuint program, GLint location, GLsizei count, GLfloat *value);
glProgramUniform3fvEXT_function glProgramUniform3fvEXT;

typedef void (*glProgramUniform4fvEXT_function)(GLuint program, GLint location, GLsizei count, GLfloat *value);
glProgramUniform4fvEXT_function glProgramUniform4fvEXT;

typedef void (*glProgramUniform1ivEXT_function)(GLuint program, GLint location, GLsizei count, GLint *value);
glProgramUniform1ivEXT_function glProgramUniform1ivEXT;

typedef void (*glProgramUniform2ivEXT_function)(GLuint program, GLint location, GLsizei count, GLint *value);
glProgramUniform2ivEXT_function glProgramUniform2ivEXT;

typedef void (*glProgramUniform3ivEXT_function)(GLuint program, GLint location, GLsizei count, GLint *value);
glProgramUniform3ivEXT_function glProgramUniform3ivEXT;

typedef void (*glProgramUniform4ivEXT_function)(GLuint program, GLint location, GLsizei count, GLint *value);
glProgramUniform4ivEXT_function glProgramUniform4ivEXT;

typedef void (*glProgramUniformMatrix2fvEXT_function)(GLuint program, GLint location, GLsizei count, GLboolean transpose, GLfloat *value);
glProgramUniformMatrix2fvEXT_function glProgramUniformMatrix2fvEXT;

typedef void (*glProgramUniformMatrix3fvEXT_function)(GLuint program, GLint location, GLsizei count, GLboolean transpose, GLfloat *value);
glProgramUniformMatrix3fvEXT_function glProgramUniformMatrix3fvEXT;

typedef void (*glProgramUniformMatrix4fvEXT_function)(GLuint program, GLint location, GLsizei count, GLboolean transpose, GLfloat *value);
glProgramUniformMatrix4fvEXT_function glProgramUniformMatrix4fvEXT;

typedef void (*glProgramUniformMatrix2x3fvEXT_function)(GLuint program, GLint location, GLsizei count, GLboolean transpose, GLfloat *value);
glProgramUniformMatrix2x3fvEXT_function glProgramUniformMatrix2x3fvEXT;

typedef void (*glProgramUniformMatrix3x2fvEXT_function)(GLuint program, GLint location, GLsizei count, GLboolean transpose, GLfloat *value);
glProgramUniformMatrix3x2fvEXT_function glProgramUniformMatrix3x2fvEXT;

typedef void (*glProgramUniformMatrix2x4fvEXT_function)(GLuint program, GLint location, GLsizei count, GLboolean transpose, GLfloat *value);
glProgramUniformMatrix2x4fvEXT_function glProgramUniformMatrix2x4fvEXT;

typedef void (*glProgramUniformMatrix4x2fvEXT_function)(GLuint program, GLint location, GLsizei count, GLboolean transpose, GLfloat *value);
glProgramUniformMatrix4x2fvEXT_function glProgramUniformMatrix4x2fvEXT;

typedef void (*glProgramUniformMatrix3x4fvEXT_function)(GLuint program, GLint location, GLsizei count, GLboolean transpose, GLfloat *value);
glProgramUniformMatrix3x4fvEXT_function glProgramUniformMatrix3x4fvEXT;

typedef void (*glProgramUniformMatrix4x3fvEXT_function)(GLuint program, GLint location, GLsizei count, GLboolean transpose, GLfloat *value);
glProgramUniformMatrix4x3fvEXT_function glProgramUniformMatrix4x3fvEXT;

typedef void (*glTextureBufferEXT_function)(GLuint texture, GLenum target, GLenum internalformat, GLuint buffer);
glTextureBufferEXT_function glTextureBufferEXT;

typedef void (*glMultiTexBufferEXT_function)(GLenum texunit, GLenum target, GLenum internalformat, GLuint buffer);
glMultiTexBufferEXT_function glMultiTexBufferEXT;

typedef void (*glTextureParameterIivEXT_function)(GLuint texture, GLenum target, GLenum pname, GLint *params);
glTextureParameterIivEXT_function glTextureParameterIivEXT;

typedef void (*glTextureParameterIuivEXT_function)(GLuint texture, GLenum target, GLenum pname, GLuint *params);
glTextureParameterIuivEXT_function glTextureParameterIuivEXT;

typedef void (*glGetTextureParameterIivEXT_function)(GLuint texture, GLenum target, GLenum pname, GLint *params);
glGetTextureParameterIivEXT_function glGetTextureParameterIivEXT;

typedef void (*glGetTextureParameterIuivEXT_function)(GLuint texture, GLenum target, GLenum pname, GLuint *params);
glGetTextureParameterIuivEXT_function glGetTextureParameterIuivEXT;

typedef void (*glMultiTexParameterIivEXT_function)(GLenum texunit, GLenum target, GLenum pname, GLint *params);
glMultiTexParameterIivEXT_function glMultiTexParameterIivEXT;

typedef void (*glMultiTexParameterIuivEXT_function)(GLenum texunit, GLenum target, GLenum pname, GLuint *params);
glMultiTexParameterIuivEXT_function glMultiTexParameterIuivEXT;

typedef void (*glGetMultiTexParameterIivEXT_function)(GLenum texunit, GLenum target, GLenum pname, GLint *params);
glGetMultiTexParameterIivEXT_function glGetMultiTexParameterIivEXT;

typedef void (*glGetMultiTexParameterIuivEXT_function)(GLenum texunit, GLenum target, GLenum pname, GLuint *params);
glGetMultiTexParameterIuivEXT_function glGetMultiTexParameterIuivEXT;

typedef void (*glProgramUniform1uiEXT_function)(GLuint program, GLint location, GLuint v0);
glProgramUniform1uiEXT_function glProgramUniform1uiEXT;

typedef void (*glProgramUniform2uiEXT_function)(GLuint program, GLint location, GLuint v0, GLuint v1);
glProgramUniform2uiEXT_function glProgramUniform2uiEXT;

typedef void (*glProgramUniform3uiEXT_function)(GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2);
glProgramUniform3uiEXT_function glProgramUniform3uiEXT;

typedef void (*glProgramUniform4uiEXT_function)(GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3);
glProgramUniform4uiEXT_function glProgramUniform4uiEXT;

typedef void (*glProgramUniform1uivEXT_function)(GLuint program, GLint location, GLsizei count, GLuint *value);
glProgramUniform1uivEXT_function glProgramUniform1uivEXT;

typedef void (*glProgramUniform2uivEXT_function)(GLuint program, GLint location, GLsizei count, GLuint *value);
glProgramUniform2uivEXT_function glProgramUniform2uivEXT;

typedef void (*glProgramUniform3uivEXT_function)(GLuint program, GLint location, GLsizei count, GLuint *value);
glProgramUniform3uivEXT_function glProgramUniform3uivEXT;

typedef void (*glProgramUniform4uivEXT_function)(GLuint program, GLint location, GLsizei count, GLuint *value);
glProgramUniform4uivEXT_function glProgramUniform4uivEXT;

typedef void (*glNamedProgramLocalParameters4fvEXT_function)(GLuint program, GLenum target, GLuint index, GLsizei count, GLfloat *params);
glNamedProgramLocalParameters4fvEXT_function glNamedProgramLocalParameters4fvEXT;

typedef void (*glNamedProgramLocalParameterI4iEXT_function)(GLuint program, GLenum target, GLuint index, GLint x, GLint y, GLint z, GLint w);
glNamedProgramLocalParameterI4iEXT_function glNamedProgramLocalParameterI4iEXT;

typedef void (*glNamedProgramLocalParameterI4ivEXT_function)(GLuint program, GLenum target, GLuint index, GLint *params);
glNamedProgramLocalParameterI4ivEXT_function glNamedProgramLocalParameterI4ivEXT;

typedef void (*glNamedProgramLocalParametersI4ivEXT_function)(GLuint program, GLenum target, GLuint index, GLsizei count, GLint *params);
glNamedProgramLocalParametersI4ivEXT_function glNamedProgramLocalParametersI4ivEXT;

typedef void (*glNamedProgramLocalParameterI4uiEXT_function)(GLuint program, GLenum target, GLuint index, GLuint x, GLuint y, GLuint z, GLuint w);
glNamedProgramLocalParameterI4uiEXT_function glNamedProgramLocalParameterI4uiEXT;

typedef void (*glNamedProgramLocalParameterI4uivEXT_function)(GLuint program, GLenum target, GLuint index, GLuint *params);
glNamedProgramLocalParameterI4uivEXT_function glNamedProgramLocalParameterI4uivEXT;

typedef void (*glNamedProgramLocalParametersI4uivEXT_function)(GLuint program, GLenum target, GLuint index, GLsizei count, GLuint *params);
glNamedProgramLocalParametersI4uivEXT_function glNamedProgramLocalParametersI4uivEXT;

typedef void (*glGetNamedProgramLocalParameterIivEXT_function)(GLuint program, GLenum target, GLuint index, GLint *params);
glGetNamedProgramLocalParameterIivEXT_function glGetNamedProgramLocalParameterIivEXT;

typedef void (*glGetNamedProgramLocalParameterIuivEXT_function)(GLuint program, GLenum target, GLuint index, GLuint *params);
glGetNamedProgramLocalParameterIuivEXT_function glGetNamedProgramLocalParameterIuivEXT;

typedef void (*glEnableClientStateiEXT_function)(GLenum array, GLuint index);
glEnableClientStateiEXT_function glEnableClientStateiEXT;

typedef void (*glDisableClientStateiEXT_function)(GLenum array, GLuint index);
glDisableClientStateiEXT_function glDisableClientStateiEXT;

typedef void (*glGetFloati_vEXT_function)(GLenum pname, GLuint index, GLfloat *params);
glGetFloati_vEXT_function glGetFloati_vEXT;

typedef void (*glGetDoublei_vEXT_function)(GLenum pname, GLuint index, GLdouble *params);
glGetDoublei_vEXT_function glGetDoublei_vEXT;

typedef void (*glGetPointeri_vEXT_function)(GLenum pname, GLuint index, void * *params);
glGetPointeri_vEXT_function glGetPointeri_vEXT;

typedef void (*glNamedProgramStringEXT_function)(GLuint program, GLenum target, GLenum format, GLsizei len, void * string);
glNamedProgramStringEXT_function glNamedProgramStringEXT;

typedef void (*glNamedProgramLocalParameter4dEXT_function)(GLuint program, GLenum target, GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
glNamedProgramLocalParameter4dEXT_function glNamedProgramLocalParameter4dEXT;

typedef void (*glNamedProgramLocalParameter4dvEXT_function)(GLuint program, GLenum target, GLuint index, GLdouble *params);
glNamedProgramLocalParameter4dvEXT_function glNamedProgramLocalParameter4dvEXT;

typedef void (*glNamedProgramLocalParameter4fEXT_function)(GLuint program, GLenum target, GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
glNamedProgramLocalParameter4fEXT_function glNamedProgramLocalParameter4fEXT;

typedef void (*glNamedProgramLocalParameter4fvEXT_function)(GLuint program, GLenum target, GLuint index, GLfloat *params);
glNamedProgramLocalParameter4fvEXT_function glNamedProgramLocalParameter4fvEXT;

typedef void (*glGetNamedProgramLocalParameterdvEXT_function)(GLuint program, GLenum target, GLuint index, GLdouble *params);
glGetNamedProgramLocalParameterdvEXT_function glGetNamedProgramLocalParameterdvEXT;

typedef void (*glGetNamedProgramLocalParameterfvEXT_function)(GLuint program, GLenum target, GLuint index, GLfloat *params);
glGetNamedProgramLocalParameterfvEXT_function glGetNamedProgramLocalParameterfvEXT;

typedef void (*glGetNamedProgramivEXT_function)(GLuint program, GLenum target, GLenum pname, GLint *params);
glGetNamedProgramivEXT_function glGetNamedProgramivEXT;

typedef void (*glGetNamedProgramStringEXT_function)(GLuint program, GLenum target, GLenum pname, void * string);
glGetNamedProgramStringEXT_function glGetNamedProgramStringEXT;

typedef void (*glNamedRenderbufferStorageEXT_function)(GLuint renderbuffer, GLenum internalformat, GLsizei width, GLsizei height);
glNamedRenderbufferStorageEXT_function glNamedRenderbufferStorageEXT;

typedef void (*glGetNamedRenderbufferParameterivEXT_function)(GLuint renderbuffer, GLenum pname, GLint *params);
glGetNamedRenderbufferParameterivEXT_function glGetNamedRenderbufferParameterivEXT;

typedef void (*glNamedRenderbufferStorageMultisampleEXT_function)(GLuint renderbuffer, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height);
glNamedRenderbufferStorageMultisampleEXT_function glNamedRenderbufferStorageMultisampleEXT;

typedef void (*glNamedRenderbufferStorageMultisampleCoverageEXT_function)(GLuint renderbuffer, GLsizei coverageSamples, GLsizei colorSamples, GLenum internalformat, GLsizei width, GLsizei height);
glNamedRenderbufferStorageMultisampleCoverageEXT_function glNamedRenderbufferStorageMultisampleCoverageEXT;

typedef GLenum  (*glCheckNamedFramebufferStatusEXT_function)(GLuint framebuffer, GLenum target);
glCheckNamedFramebufferStatusEXT_function glCheckNamedFramebufferStatusEXT;

typedef void (*glNamedFramebufferTexture1DEXT_function)(GLuint framebuffer, GLenum attachment, GLenum textarget, GLuint texture, GLint level);
glNamedFramebufferTexture1DEXT_function glNamedFramebufferTexture1DEXT;

typedef void (*glNamedFramebufferTexture2DEXT_function)(GLuint framebuffer, GLenum attachment, GLenum textarget, GLuint texture, GLint level);
glNamedFramebufferTexture2DEXT_function glNamedFramebufferTexture2DEXT;

typedef void (*glNamedFramebufferTexture3DEXT_function)(GLuint framebuffer, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint zoffset);
glNamedFramebufferTexture3DEXT_function glNamedFramebufferTexture3DEXT;

typedef void (*glNamedFramebufferRenderbufferEXT_function)(GLuint framebuffer, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer);
glNamedFramebufferRenderbufferEXT_function glNamedFramebufferRenderbufferEXT;

typedef void (*glGetNamedFramebufferAttachmentParameterivEXT_function)(GLuint framebuffer, GLenum attachment, GLenum pname, GLint *params);
glGetNamedFramebufferAttachmentParameterivEXT_function glGetNamedFramebufferAttachmentParameterivEXT;

typedef void (*glGenerateTextureMipmapEXT_function)(GLuint texture, GLenum target);
glGenerateTextureMipmapEXT_function glGenerateTextureMipmapEXT;

typedef void (*glGenerateMultiTexMipmapEXT_function)(GLenum texunit, GLenum target);
glGenerateMultiTexMipmapEXT_function glGenerateMultiTexMipmapEXT;

typedef void (*glFramebufferDrawBufferEXT_function)(GLuint framebuffer, GLenum mode);
glFramebufferDrawBufferEXT_function glFramebufferDrawBufferEXT;

typedef void (*glFramebufferDrawBuffersEXT_function)(GLuint framebuffer, GLsizei n, GLenum *bufs);
glFramebufferDrawBuffersEXT_function glFramebufferDrawBuffersEXT;

typedef void (*glFramebufferReadBufferEXT_function)(GLuint framebuffer, GLenum mode);
glFramebufferReadBufferEXT_function glFramebufferReadBufferEXT;

typedef void (*glGetFramebufferParameterivEXT_function)(GLuint framebuffer, GLenum pname, GLint *params);
glGetFramebufferParameterivEXT_function glGetFramebufferParameterivEXT;

typedef void (*glNamedCopyBufferSubDataEXT_function)(GLuint readBuffer, GLuint writeBuffer, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size);
glNamedCopyBufferSubDataEXT_function glNamedCopyBufferSubDataEXT;

typedef void (*glNamedFramebufferTextureEXT_function)(GLuint framebuffer, GLenum attachment, GLuint texture, GLint level);
glNamedFramebufferTextureEXT_function glNamedFramebufferTextureEXT;

typedef void (*glNamedFramebufferTextureLayerEXT_function)(GLuint framebuffer, GLenum attachment, GLuint texture, GLint level, GLint layer);
glNamedFramebufferTextureLayerEXT_function glNamedFramebufferTextureLayerEXT;

typedef void (*glNamedFramebufferTextureFaceEXT_function)(GLuint framebuffer, GLenum attachment, GLuint texture, GLint level, GLenum face);
glNamedFramebufferTextureFaceEXT_function glNamedFramebufferTextureFaceEXT;

typedef void (*glTextureRenderbufferEXT_function)(GLuint texture, GLenum target, GLuint renderbuffer);
glTextureRenderbufferEXT_function glTextureRenderbufferEXT;

typedef void (*glMultiTexRenderbufferEXT_function)(GLenum texunit, GLenum target, GLuint renderbuffer);
glMultiTexRenderbufferEXT_function glMultiTexRenderbufferEXT;

typedef void (*glVertexArrayVertexOffsetEXT_function)(GLuint vaobj, GLuint buffer, GLint size, GLenum type, GLsizei stride, GLintptr offset);
glVertexArrayVertexOffsetEXT_function glVertexArrayVertexOffsetEXT;

typedef void (*glVertexArrayColorOffsetEXT_function)(GLuint vaobj, GLuint buffer, GLint size, GLenum type, GLsizei stride, GLintptr offset);
glVertexArrayColorOffsetEXT_function glVertexArrayColorOffsetEXT;

typedef void (*glVertexArrayEdgeFlagOffsetEXT_function)(GLuint vaobj, GLuint buffer, GLsizei stride, GLintptr offset);
glVertexArrayEdgeFlagOffsetEXT_function glVertexArrayEdgeFlagOffsetEXT;

typedef void (*glVertexArrayIndexOffsetEXT_function)(GLuint vaobj, GLuint buffer, GLenum type, GLsizei stride, GLintptr offset);
glVertexArrayIndexOffsetEXT_function glVertexArrayIndexOffsetEXT;

typedef void (*glVertexArrayNormalOffsetEXT_function)(GLuint vaobj, GLuint buffer, GLenum type, GLsizei stride, GLintptr offset);
glVertexArrayNormalOffsetEXT_function glVertexArrayNormalOffsetEXT;

typedef void (*glVertexArrayTexCoordOffsetEXT_function)(GLuint vaobj, GLuint buffer, GLint size, GLenum type, GLsizei stride, GLintptr offset);
glVertexArrayTexCoordOffsetEXT_function glVertexArrayTexCoordOffsetEXT;

typedef void (*glVertexArrayMultiTexCoordOffsetEXT_function)(GLuint vaobj, GLuint buffer, GLenum texunit, GLint size, GLenum type, GLsizei stride, GLintptr offset);
glVertexArrayMultiTexCoordOffsetEXT_function glVertexArrayMultiTexCoordOffsetEXT;

typedef void (*glVertexArrayFogCoordOffsetEXT_function)(GLuint vaobj, GLuint buffer, GLenum type, GLsizei stride, GLintptr offset);
glVertexArrayFogCoordOffsetEXT_function glVertexArrayFogCoordOffsetEXT;

typedef void (*glVertexArraySecondaryColorOffsetEXT_function)(GLuint vaobj, GLuint buffer, GLint size, GLenum type, GLsizei stride, GLintptr offset);
glVertexArraySecondaryColorOffsetEXT_function glVertexArraySecondaryColorOffsetEXT;

typedef void (*glVertexArrayVertexAttribOffsetEXT_function)(GLuint vaobj, GLuint buffer, GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, GLintptr offset);
glVertexArrayVertexAttribOffsetEXT_function glVertexArrayVertexAttribOffsetEXT;

typedef void (*glVertexArrayVertexAttribIOffsetEXT_function)(GLuint vaobj, GLuint buffer, GLuint index, GLint size, GLenum type, GLsizei stride, GLintptr offset);
glVertexArrayVertexAttribIOffsetEXT_function glVertexArrayVertexAttribIOffsetEXT;

typedef void (*glEnableVertexArrayEXT_function)(GLuint vaobj, GLenum array);
glEnableVertexArrayEXT_function glEnableVertexArrayEXT;

typedef void (*glDisableVertexArrayEXT_function)(GLuint vaobj, GLenum array);
glDisableVertexArrayEXT_function glDisableVertexArrayEXT;

typedef void (*glEnableVertexArrayAttribEXT_function)(GLuint vaobj, GLuint index);
glEnableVertexArrayAttribEXT_function glEnableVertexArrayAttribEXT;

typedef void (*glDisableVertexArrayAttribEXT_function)(GLuint vaobj, GLuint index);
glDisableVertexArrayAttribEXT_function glDisableVertexArrayAttribEXT;

typedef void (*glGetVertexArrayIntegervEXT_function)(GLuint vaobj, GLenum pname, GLint *param);
glGetVertexArrayIntegervEXT_function glGetVertexArrayIntegervEXT;

typedef void (*glGetVertexArrayPointervEXT_function)(GLuint vaobj, GLenum pname, void * *param);
glGetVertexArrayPointervEXT_function glGetVertexArrayPointervEXT;

typedef void (*glGetVertexArrayIntegeri_vEXT_function)(GLuint vaobj, GLuint index, GLenum pname, GLint *param);
glGetVertexArrayIntegeri_vEXT_function glGetVertexArrayIntegeri_vEXT;

typedef void (*glGetVertexArrayPointeri_vEXT_function)(GLuint vaobj, GLuint index, GLenum pname, void * *param);
glGetVertexArrayPointeri_vEXT_function glGetVertexArrayPointeri_vEXT;

typedef void *  (*glMapNamedBufferRangeEXT_function)(GLuint buffer, GLintptr offset, GLsizeiptr length, GLbitfield access);
glMapNamedBufferRangeEXT_function glMapNamedBufferRangeEXT;

typedef void (*glFlushMappedNamedBufferRangeEXT_function)(GLuint buffer, GLintptr offset, GLsizeiptr length);
glFlushMappedNamedBufferRangeEXT_function glFlushMappedNamedBufferRangeEXT;

typedef void (*glNamedBufferStorageEXT_function)(GLuint buffer, GLsizeiptr size, void * data, GLbitfield flags);
glNamedBufferStorageEXT_function glNamedBufferStorageEXT;

typedef void (*glClearNamedBufferDataEXT_function)(GLuint buffer, GLenum internalformat, GLenum format, GLenum type, void * data);
glClearNamedBufferDataEXT_function glClearNamedBufferDataEXT;

typedef void (*glClearNamedBufferSubDataEXT_function)(GLuint buffer, GLenum internalformat, GLsizeiptr offset, GLsizeiptr size, GLenum format, GLenum type, void * data);
glClearNamedBufferSubDataEXT_function glClearNamedBufferSubDataEXT;

typedef void (*glNamedFramebufferParameteriEXT_function)(GLuint framebuffer, GLenum pname, GLint param);
glNamedFramebufferParameteriEXT_function glNamedFramebufferParameteriEXT;

typedef void (*glGetNamedFramebufferParameterivEXT_function)(GLuint framebuffer, GLenum pname, GLint *params);
glGetNamedFramebufferParameterivEXT_function glGetNamedFramebufferParameterivEXT;

typedef void (*glProgramUniform1dEXT_function)(GLuint program, GLint location, GLdouble x);
glProgramUniform1dEXT_function glProgramUniform1dEXT;

typedef void (*glProgramUniform2dEXT_function)(GLuint program, GLint location, GLdouble x, GLdouble y);
glProgramUniform2dEXT_function glProgramUniform2dEXT;

typedef void (*glProgramUniform3dEXT_function)(GLuint program, GLint location, GLdouble x, GLdouble y, GLdouble z);
glProgramUniform3dEXT_function glProgramUniform3dEXT;

typedef void (*glProgramUniform4dEXT_function)(GLuint program, GLint location, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
glProgramUniform4dEXT_function glProgramUniform4dEXT;

typedef void (*glProgramUniform1dvEXT_function)(GLuint program, GLint location, GLsizei count, GLdouble *value);
glProgramUniform1dvEXT_function glProgramUniform1dvEXT;

typedef void (*glProgramUniform2dvEXT_function)(GLuint program, GLint location, GLsizei count, GLdouble *value);
glProgramUniform2dvEXT_function glProgramUniform2dvEXT;

typedef void (*glProgramUniform3dvEXT_function)(GLuint program, GLint location, GLsizei count, GLdouble *value);
glProgramUniform3dvEXT_function glProgramUniform3dvEXT;

typedef void (*glProgramUniform4dvEXT_function)(GLuint program, GLint location, GLsizei count, GLdouble *value);
glProgramUniform4dvEXT_function glProgramUniform4dvEXT;

typedef void (*glProgramUniformMatrix2dvEXT_function)(GLuint program, GLint location, GLsizei count, GLboolean transpose, GLdouble *value);
glProgramUniformMatrix2dvEXT_function glProgramUniformMatrix2dvEXT;

typedef void (*glProgramUniformMatrix3dvEXT_function)(GLuint program, GLint location, GLsizei count, GLboolean transpose, GLdouble *value);
glProgramUniformMatrix3dvEXT_function glProgramUniformMatrix3dvEXT;

typedef void (*glProgramUniformMatrix4dvEXT_function)(GLuint program, GLint location, GLsizei count, GLboolean transpose, GLdouble *value);
glProgramUniformMatrix4dvEXT_function glProgramUniformMatrix4dvEXT;

typedef void (*glProgramUniformMatrix2x3dvEXT_function)(GLuint program, GLint location, GLsizei count, GLboolean transpose, GLdouble *value);
glProgramUniformMatrix2x3dvEXT_function glProgramUniformMatrix2x3dvEXT;

typedef void (*glProgramUniformMatrix2x4dvEXT_function)(GLuint program, GLint location, GLsizei count, GLboolean transpose, GLdouble *value);
glProgramUniformMatrix2x4dvEXT_function glProgramUniformMatrix2x4dvEXT;

typedef void (*glProgramUniformMatrix3x2dvEXT_function)(GLuint program, GLint location, GLsizei count, GLboolean transpose, GLdouble *value);
glProgramUniformMatrix3x2dvEXT_function glProgramUniformMatrix3x2dvEXT;

typedef void (*glProgramUniformMatrix3x4dvEXT_function)(GLuint program, GLint location, GLsizei count, GLboolean transpose, GLdouble *value);
glProgramUniformMatrix3x4dvEXT_function glProgramUniformMatrix3x4dvEXT;

typedef void (*glProgramUniformMatrix4x2dvEXT_function)(GLuint program, GLint location, GLsizei count, GLboolean transpose, GLdouble *value);
glProgramUniformMatrix4x2dvEXT_function glProgramUniformMatrix4x2dvEXT;

typedef void (*glProgramUniformMatrix4x3dvEXT_function)(GLuint program, GLint location, GLsizei count, GLboolean transpose, GLdouble *value);
glProgramUniformMatrix4x3dvEXT_function glProgramUniformMatrix4x3dvEXT;

typedef void (*glTextureBufferRangeEXT_function)(GLuint texture, GLenum target, GLenum internalformat, GLuint buffer, GLintptr offset, GLsizeiptr size);
glTextureBufferRangeEXT_function glTextureBufferRangeEXT;

typedef void (*glTextureStorage1DEXT_function)(GLuint texture, GLenum target, GLsizei levels, GLenum internalformat, GLsizei width);
glTextureStorage1DEXT_function glTextureStorage1DEXT;

typedef void (*glTextureStorage2DEXT_function)(GLuint texture, GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height);
glTextureStorage2DEXT_function glTextureStorage2DEXT;

typedef void (*glTextureStorage3DEXT_function)(GLuint texture, GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth);
glTextureStorage3DEXT_function glTextureStorage3DEXT;

typedef void (*glTextureStorage2DMultisampleEXT_function)(GLuint texture, GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations);
glTextureStorage2DMultisampleEXT_function glTextureStorage2DMultisampleEXT;

typedef void (*glTextureStorage3DMultisampleEXT_function)(GLuint texture, GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations);
glTextureStorage3DMultisampleEXT_function glTextureStorage3DMultisampleEXT;

typedef void (*glVertexArrayBindVertexBufferEXT_function)(GLuint vaobj, GLuint bindingindex, GLuint buffer, GLintptr offset, GLsizei stride);
glVertexArrayBindVertexBufferEXT_function glVertexArrayBindVertexBufferEXT;

typedef void (*glVertexArrayVertexAttribFormatEXT_function)(GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLboolean normalized, GLuint relativeoffset);
glVertexArrayVertexAttribFormatEXT_function glVertexArrayVertexAttribFormatEXT;

typedef void (*glVertexArrayVertexAttribIFormatEXT_function)(GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset);
glVertexArrayVertexAttribIFormatEXT_function glVertexArrayVertexAttribIFormatEXT;

typedef void (*glVertexArrayVertexAttribLFormatEXT_function)(GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset);
glVertexArrayVertexAttribLFormatEXT_function glVertexArrayVertexAttribLFormatEXT;

typedef void (*glVertexArrayVertexAttribBindingEXT_function)(GLuint vaobj, GLuint attribindex, GLuint bindingindex);
glVertexArrayVertexAttribBindingEXT_function glVertexArrayVertexAttribBindingEXT;

typedef void (*glVertexArrayVertexBindingDivisorEXT_function)(GLuint vaobj, GLuint bindingindex, GLuint divisor);
glVertexArrayVertexBindingDivisorEXT_function glVertexArrayVertexBindingDivisorEXT;

typedef void (*glVertexArrayVertexAttribLOffsetEXT_function)(GLuint vaobj, GLuint buffer, GLuint index, GLint size, GLenum type, GLsizei stride, GLintptr offset);
glVertexArrayVertexAttribLOffsetEXT_function glVertexArrayVertexAttribLOffsetEXT;

typedef void (*glTexturePageCommitmentEXT_function)(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLboolean commit);
glTexturePageCommitmentEXT_function glTexturePageCommitmentEXT;

typedef void (*glVertexArrayVertexAttribDivisorEXT_function)(GLuint vaobj, GLuint index, GLuint divisor);
glVertexArrayVertexAttribDivisorEXT_function glVertexArrayVertexAttribDivisorEXT;
#define GL_EXT_draw_buffers2 1

typedef void (*glColorMaskIndexedEXT_function)(GLuint index, GLboolean r, GLboolean g, GLboolean b, GLboolean a);
glColorMaskIndexedEXT_function glColorMaskIndexedEXT;
#define GL_EXT_draw_instanced 1

typedef void (*glDrawArraysInstancedEXT_function)(GLenum mode, GLint start, GLsizei count, GLsizei primcount);
glDrawArraysInstancedEXT_function glDrawArraysInstancedEXT;

typedef void (*glDrawElementsInstancedEXT_function)(GLenum mode, GLsizei count, GLenum type, void * indices, GLsizei primcount);
glDrawElementsInstancedEXT_function glDrawElementsInstancedEXT;
#define GL_EXT_draw_range_elements 1
#define GL_MAX_ELEMENTS_VERTICES_EXT 0x80E8
#define GL_MAX_ELEMENTS_INDICES_EXT 0x80E9

typedef void (*glDrawRangeElementsEXT_function)(GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, void * indices);
glDrawRangeElementsEXT_function glDrawRangeElementsEXT;
#define GL_EXT_external_buffer 1

typedef void (*glBufferStorageExternalEXT_function)(GLenum target, GLintptr offset, GLsizeiptr size, GLeglClientBufferEXT clientBuffer, GLbitfield flags);
glBufferStorageExternalEXT_function glBufferStorageExternalEXT;

typedef void (*glNamedBufferStorageExternalEXT_function)(GLuint buffer, GLintptr offset, GLsizeiptr size, GLeglClientBufferEXT clientBuffer, GLbitfield flags);
glNamedBufferStorageExternalEXT_function glNamedBufferStorageExternalEXT;
#define GL_EXT_fog_coord 1
#define GL_FOG_COORDINATE_SOURCE_EXT 0x8450
#define GL_FOG_COORDINATE_EXT 0x8451
#define GL_FRAGMENT_DEPTH_EXT 0x8452
#define GL_CURRENT_FOG_COORDINATE_EXT 0x8453
#define GL_FOG_COORDINATE_ARRAY_TYPE_EXT 0x8454
#define GL_FOG_COORDINATE_ARRAY_STRIDE_EXT 0x8455
#define GL_FOG_COORDINATE_ARRAY_POINTER_EXT 0x8456
#define GL_FOG_COORDINATE_ARRAY_EXT 0x8457

typedef void (*glFogCoordfEXT_function)(GLfloat coord);
glFogCoordfEXT_function glFogCoordfEXT;

typedef void (*glFogCoordfvEXT_function)(GLfloat *coord);
glFogCoordfvEXT_function glFogCoordfvEXT;

typedef void (*glFogCoorddEXT_function)(GLdouble coord);
glFogCoorddEXT_function glFogCoorddEXT;

typedef void (*glFogCoorddvEXT_function)(GLdouble *coord);
glFogCoorddvEXT_function glFogCoorddvEXT;

typedef void (*glFogCoordPointerEXT_function)(GLenum type, GLsizei stride, void * pointer);
glFogCoordPointerEXT_function glFogCoordPointerEXT;
#define GL_EXT_framebuffer_blit 1
#define GL_READ_FRAMEBUFFER_EXT 0x8CA8
#define GL_DRAW_FRAMEBUFFER_EXT 0x8CA9
#define GL_DRAW_FRAMEBUFFER_BINDING_EXT 0x8CA6
#define GL_READ_FRAMEBUFFER_BINDING_EXT 0x8CAA

typedef void (*glBlitFramebufferEXT_function)(GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter);
glBlitFramebufferEXT_function glBlitFramebufferEXT;
#define GL_EXT_framebuffer_blit_layers 1

typedef void (*glBlitFramebufferLayersEXT_function)(GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter);
glBlitFramebufferLayersEXT_function glBlitFramebufferLayersEXT;

typedef void (*glBlitFramebufferLayerEXT_function)(GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint srcLayer, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLint dstLayer, GLbitfield mask, GLenum filter);
glBlitFramebufferLayerEXT_function glBlitFramebufferLayerEXT;
#define GL_EXT_framebuffer_multisample 1
#define GL_RENDERBUFFER_SAMPLES_EXT 0x8CAB
#define GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_EXT 0x8D56
#define GL_MAX_SAMPLES_EXT 0x8D57

typedef void (*glRenderbufferStorageMultisampleEXT_function)(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height);
glRenderbufferStorageMultisampleEXT_function glRenderbufferStorageMultisampleEXT;
#define GL_EXT_framebuffer_multisample_blit_scaled 1
#define GL_SCALED_RESOLVE_FASTEST_EXT 0x90BA
#define GL_SCALED_RESOLVE_NICEST_EXT 0x90BB
#define GL_EXT_framebuffer_object 1
#define GL_INVALID_FRAMEBUFFER_OPERATION_EXT 0x0506
#define GL_MAX_RENDERBUFFER_SIZE_EXT 0x84E8
#define GL_FRAMEBUFFER_BINDING_EXT 0x8CA6
#define GL_RENDERBUFFER_BINDING_EXT 0x8CA7
#define GL_FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE_EXT 0x8CD0
#define GL_FRAMEBUFFER_ATTACHMENT_OBJECT_NAME_EXT 0x8CD1
#define GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL_EXT 0x8CD2
#define GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE_EXT 0x8CD3
#define GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_3D_ZOFFSET_EXT 0x8CD4
#define GL_FRAMEBUFFER_COMPLETE_EXT 0x8CD5
#define GL_FRAMEBUFFER_INCOMPLETE_ATTACHMENT_EXT 0x8CD6
#define GL_FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT_EXT 0x8CD7
#define GL_FRAMEBUFFER_INCOMPLETE_DIMENSIONS_EXT 0x8CD9
#define GL_FRAMEBUFFER_INCOMPLETE_FORMATS_EXT 0x8CDA
#define GL_FRAMEBUFFER_INCOMPLETE_DRAW_BUFFER_EXT 0x8CDB
#define GL_FRAMEBUFFER_INCOMPLETE_READ_BUFFER_EXT 0x8CDC
#define GL_FRAMEBUFFER_UNSUPPORTED_EXT 0x8CDD
#define GL_MAX_COLOR_ATTACHMENTS_EXT 0x8CDF
#define GL_COLOR_ATTACHMENT0_EXT 0x8CE0
#define GL_COLOR_ATTACHMENT1_EXT 0x8CE1
#define GL_COLOR_ATTACHMENT2_EXT 0x8CE2
#define GL_COLOR_ATTACHMENT3_EXT 0x8CE3
#define GL_COLOR_ATTACHMENT4_EXT 0x8CE4
#define GL_COLOR_ATTACHMENT5_EXT 0x8CE5
#define GL_COLOR_ATTACHMENT6_EXT 0x8CE6
#define GL_COLOR_ATTACHMENT7_EXT 0x8CE7
#define GL_COLOR_ATTACHMENT8_EXT 0x8CE8
#define GL_COLOR_ATTACHMENT9_EXT 0x8CE9
#define GL_COLOR_ATTACHMENT10_EXT 0x8CEA
#define GL_COLOR_ATTACHMENT11_EXT 0x8CEB
#define GL_COLOR_ATTACHMENT12_EXT 0x8CEC
#define GL_COLOR_ATTACHMENT13_EXT 0x8CED
#define GL_COLOR_ATTACHMENT14_EXT 0x8CEE
#define GL_COLOR_ATTACHMENT15_EXT 0x8CEF
#define GL_DEPTH_ATTACHMENT_EXT 0x8D00
#define GL_STENCIL_ATTACHMENT_EXT 0x8D20
#define GL_FRAMEBUFFER_EXT 0x8D40
#define GL_RENDERBUFFER_EXT 0x8D41
#define GL_RENDERBUFFER_WIDTH_EXT 0x8D42
#define GL_RENDERBUFFER_HEIGHT_EXT 0x8D43
#define GL_RENDERBUFFER_INTERNAL_FORMAT_EXT 0x8D44
#define GL_STENCIL_INDEX1_EXT 0x8D46
#define GL_STENCIL_INDEX4_EXT 0x8D47
#define GL_STENCIL_INDEX8_EXT 0x8D48
#define GL_STENCIL_INDEX16_EXT 0x8D49
#define GL_RENDERBUFFER_RED_SIZE_EXT 0x8D50
#define GL_RENDERBUFFER_GREEN_SIZE_EXT 0x8D51
#define GL_RENDERBUFFER_BLUE_SIZE_EXT 0x8D52
#define GL_RENDERBUFFER_ALPHA_SIZE_EXT 0x8D53
#define GL_RENDERBUFFER_DEPTH_SIZE_EXT 0x8D54
#define GL_RENDERBUFFER_STENCIL_SIZE_EXT 0x8D55

typedef GLboolean  (*glIsRenderbufferEXT_function)(GLuint renderbuffer);
glIsRenderbufferEXT_function glIsRenderbufferEXT;

typedef void (*glBindRenderbufferEXT_function)(GLenum target, GLuint renderbuffer);
glBindRenderbufferEXT_function glBindRenderbufferEXT;

typedef void (*glDeleteRenderbuffersEXT_function)(GLsizei n, GLuint *renderbuffers);
glDeleteRenderbuffersEXT_function glDeleteRenderbuffersEXT;

typedef void (*glGenRenderbuffersEXT_function)(GLsizei n, GLuint *renderbuffers);
glGenRenderbuffersEXT_function glGenRenderbuffersEXT;

typedef void (*glRenderbufferStorageEXT_function)(GLenum target, GLenum internalformat, GLsizei width, GLsizei height);
glRenderbufferStorageEXT_function glRenderbufferStorageEXT;

typedef void (*glGetRenderbufferParameterivEXT_function)(GLenum target, GLenum pname, GLint *params);
glGetRenderbufferParameterivEXT_function glGetRenderbufferParameterivEXT;

typedef GLboolean  (*glIsFramebufferEXT_function)(GLuint framebuffer);
glIsFramebufferEXT_function glIsFramebufferEXT;

typedef void (*glBindFramebufferEXT_function)(GLenum target, GLuint framebuffer);
glBindFramebufferEXT_function glBindFramebufferEXT;

typedef void (*glDeleteFramebuffersEXT_function)(GLsizei n, GLuint *framebuffers);
glDeleteFramebuffersEXT_function glDeleteFramebuffersEXT;

typedef void (*glGenFramebuffersEXT_function)(GLsizei n, GLuint *framebuffers);
glGenFramebuffersEXT_function glGenFramebuffersEXT;

typedef GLenum  (*glCheckFramebufferStatusEXT_function)(GLenum target);
glCheckFramebufferStatusEXT_function glCheckFramebufferStatusEXT;

typedef void (*glFramebufferTexture1DEXT_function)(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level);
glFramebufferTexture1DEXT_function glFramebufferTexture1DEXT;

typedef void (*glFramebufferTexture2DEXT_function)(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level);
glFramebufferTexture2DEXT_function glFramebufferTexture2DEXT;

typedef void (*glFramebufferTexture3DEXT_function)(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint zoffset);
glFramebufferTexture3DEXT_function glFramebufferTexture3DEXT;

typedef void (*glFramebufferRenderbufferEXT_function)(GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer);
glFramebufferRenderbufferEXT_function glFramebufferRenderbufferEXT;

typedef void (*glGetFramebufferAttachmentParameterivEXT_function)(GLenum target, GLenum attachment, GLenum pname, GLint *params);
glGetFramebufferAttachmentParameterivEXT_function glGetFramebufferAttachmentParameterivEXT;

typedef void (*glGenerateMipmapEXT_function)(GLenum target);
glGenerateMipmapEXT_function glGenerateMipmapEXT;
#define GL_EXT_framebuffer_sRGB 1
#define GL_FRAMEBUFFER_SRGB_EXT 0x8DB9
#define GL_FRAMEBUFFER_SRGB_CAPABLE_EXT 0x8DBA
#define GL_EXT_geometry_shader4 1
#define GL_GEOMETRY_SHADER_EXT 0x8DD9
#define GL_GEOMETRY_VERTICES_OUT_EXT 0x8DDA
#define GL_GEOMETRY_INPUT_TYPE_EXT 0x8DDB
#define GL_GEOMETRY_OUTPUT_TYPE_EXT 0x8DDC
#define GL_MAX_GEOMETRY_TEXTURE_IMAGE_UNITS_EXT 0x8C29
#define GL_MAX_GEOMETRY_VARYING_COMPONENTS_EXT 0x8DDD
#define GL_MAX_VERTEX_VARYING_COMPONENTS_EXT 0x8DDE
#define GL_MAX_VARYING_COMPONENTS_EXT 0x8B4B
#define GL_MAX_GEOMETRY_UNIFORM_COMPONENTS_EXT 0x8DDF
#define GL_MAX_GEOMETRY_OUTPUT_VERTICES_EXT 0x8DE0
#define GL_MAX_GEOMETRY_TOTAL_OUTPUT_COMPONENTS_EXT 0x8DE1
#define GL_LINES_ADJACENCY_EXT 0x000A
#define GL_LINE_STRIP_ADJACENCY_EXT 0x000B
#define GL_TRIANGLES_ADJACENCY_EXT 0x000C
#define GL_TRIANGLE_STRIP_ADJACENCY_EXT 0x000D
#define GL_FRAMEBUFFER_INCOMPLETE_LAYER_TARGETS_EXT 0x8DA8
#define GL_FRAMEBUFFER_INCOMPLETE_LAYER_COUNT_EXT 0x8DA9
#define GL_FRAMEBUFFER_ATTACHMENT_LAYERED_EXT 0x8DA7
#define GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LAYER_EXT 0x8CD4
#define GL_PROGRAM_POINT_SIZE_EXT 0x8642

typedef void (*glProgramParameteriEXT_function)(GLuint program, GLenum pname, GLint value);
glProgramParameteriEXT_function glProgramParameteriEXT;
#define GL_EXT_gpu_program_parameters 1

typedef void (*glProgramEnvParameters4fvEXT_function)(GLenum target, GLuint index, GLsizei count, GLfloat *params);
glProgramEnvParameters4fvEXT_function glProgramEnvParameters4fvEXT;

typedef void (*glProgramLocalParameters4fvEXT_function)(GLenum target, GLuint index, GLsizei count, GLfloat *params);
glProgramLocalParameters4fvEXT_function glProgramLocalParameters4fvEXT;
#define GL_EXT_gpu_shader4 1
#define GL_SAMPLER_1D_ARRAY_EXT 0x8DC0
#define GL_SAMPLER_2D_ARRAY_EXT 0x8DC1
#define GL_SAMPLER_BUFFER_EXT 0x8DC2
#define GL_SAMPLER_1D_ARRAY_SHADOW_EXT 0x8DC3
#define GL_SAMPLER_2D_ARRAY_SHADOW_EXT 0x8DC4
#define GL_SAMPLER_CUBE_SHADOW_EXT 0x8DC5
#define GL_UNSIGNED_INT_VEC2_EXT 0x8DC6
#define GL_UNSIGNED_INT_VEC3_EXT 0x8DC7
#define GL_UNSIGNED_INT_VEC4_EXT 0x8DC8
#define GL_INT_SAMPLER_1D_EXT 0x8DC9
#define GL_INT_SAMPLER_2D_EXT 0x8DCA
#define GL_INT_SAMPLER_3D_EXT 0x8DCB
#define GL_INT_SAMPLER_CUBE_EXT 0x8DCC
#define GL_INT_SAMPLER_2D_RECT_EXT 0x8DCD
#define GL_INT_SAMPLER_1D_ARRAY_EXT 0x8DCE
#define GL_INT_SAMPLER_2D_ARRAY_EXT 0x8DCF
#define GL_INT_SAMPLER_BUFFER_EXT 0x8DD0
#define GL_UNSIGNED_INT_SAMPLER_1D_EXT 0x8DD1
#define GL_UNSIGNED_INT_SAMPLER_2D_EXT 0x8DD2
#define GL_UNSIGNED_INT_SAMPLER_3D_EXT 0x8DD3
#define GL_UNSIGNED_INT_SAMPLER_CUBE_EXT 0x8DD4
#define GL_UNSIGNED_INT_SAMPLER_2D_RECT_EXT 0x8DD5
#define GL_UNSIGNED_INT_SAMPLER_1D_ARRAY_EXT 0x8DD6
#define GL_UNSIGNED_INT_SAMPLER_2D_ARRAY_EXT 0x8DD7
#define GL_UNSIGNED_INT_SAMPLER_BUFFER_EXT 0x8DD8
#define GL_MIN_PROGRAM_TEXEL_OFFSET_EXT 0x8904
#define GL_MAX_PROGRAM_TEXEL_OFFSET_EXT 0x8905
#define GL_VERTEX_ATTRIB_ARRAY_INTEGER_EXT 0x88FD

typedef void (*glGetUniformuivEXT_function)(GLuint program, GLint location, GLuint *params);
glGetUniformuivEXT_function glGetUniformuivEXT;

typedef void (*glBindFragDataLocationEXT_function)(GLuint program, GLuint color, GLchar *name);
glBindFragDataLocationEXT_function glBindFragDataLocationEXT;

typedef GLint  (*glGetFragDataLocationEXT_function)(GLuint program, GLchar *name);
glGetFragDataLocationEXT_function glGetFragDataLocationEXT;

typedef void (*glUniform1uiEXT_function)(GLint location, GLuint v0);
glUniform1uiEXT_function glUniform1uiEXT;

typedef void (*glUniform2uiEXT_function)(GLint location, GLuint v0, GLuint v1);
glUniform2uiEXT_function glUniform2uiEXT;

typedef void (*glUniform3uiEXT_function)(GLint location, GLuint v0, GLuint v1, GLuint v2);
glUniform3uiEXT_function glUniform3uiEXT;

typedef void (*glUniform4uiEXT_function)(GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3);
glUniform4uiEXT_function glUniform4uiEXT;

typedef void (*glUniform1uivEXT_function)(GLint location, GLsizei count, GLuint *value);
glUniform1uivEXT_function glUniform1uivEXT;

typedef void (*glUniform2uivEXT_function)(GLint location, GLsizei count, GLuint *value);
glUniform2uivEXT_function glUniform2uivEXT;

typedef void (*glUniform3uivEXT_function)(GLint location, GLsizei count, GLuint *value);
glUniform3uivEXT_function glUniform3uivEXT;

typedef void (*glUniform4uivEXT_function)(GLint location, GLsizei count, GLuint *value);
glUniform4uivEXT_function glUniform4uivEXT;

typedef void (*glVertexAttribI1iEXT_function)(GLuint index, GLint x);
glVertexAttribI1iEXT_function glVertexAttribI1iEXT;

typedef void (*glVertexAttribI2iEXT_function)(GLuint index, GLint x, GLint y);
glVertexAttribI2iEXT_function glVertexAttribI2iEXT;

typedef void (*glVertexAttribI3iEXT_function)(GLuint index, GLint x, GLint y, GLint z);
glVertexAttribI3iEXT_function glVertexAttribI3iEXT;

typedef void (*glVertexAttribI4iEXT_function)(GLuint index, GLint x, GLint y, GLint z, GLint w);
glVertexAttribI4iEXT_function glVertexAttribI4iEXT;

typedef void (*glVertexAttribI1uiEXT_function)(GLuint index, GLuint x);
glVertexAttribI1uiEXT_function glVertexAttribI1uiEXT;

typedef void (*glVertexAttribI2uiEXT_function)(GLuint index, GLuint x, GLuint y);
glVertexAttribI2uiEXT_function glVertexAttribI2uiEXT;

typedef void (*glVertexAttribI3uiEXT_function)(GLuint index, GLuint x, GLuint y, GLuint z);
glVertexAttribI3uiEXT_function glVertexAttribI3uiEXT;

typedef void (*glVertexAttribI4uiEXT_function)(GLuint index, GLuint x, GLuint y, GLuint z, GLuint w);
glVertexAttribI4uiEXT_function glVertexAttribI4uiEXT;

typedef void (*glVertexAttribI1ivEXT_function)(GLuint index, GLint *v);
glVertexAttribI1ivEXT_function glVertexAttribI1ivEXT;

typedef void (*glVertexAttribI2ivEXT_function)(GLuint index, GLint *v);
glVertexAttribI2ivEXT_function glVertexAttribI2ivEXT;

typedef void (*glVertexAttribI3ivEXT_function)(GLuint index, GLint *v);
glVertexAttribI3ivEXT_function glVertexAttribI3ivEXT;

typedef void (*glVertexAttribI4ivEXT_function)(GLuint index, GLint *v);
glVertexAttribI4ivEXT_function glVertexAttribI4ivEXT;

typedef void (*glVertexAttribI1uivEXT_function)(GLuint index, GLuint *v);
glVertexAttribI1uivEXT_function glVertexAttribI1uivEXT;

typedef void (*glVertexAttribI2uivEXT_function)(GLuint index, GLuint *v);
glVertexAttribI2uivEXT_function glVertexAttribI2uivEXT;

typedef void (*glVertexAttribI3uivEXT_function)(GLuint index, GLuint *v);
glVertexAttribI3uivEXT_function glVertexAttribI3uivEXT;

typedef void (*glVertexAttribI4uivEXT_function)(GLuint index, GLuint *v);
glVertexAttribI4uivEXT_function glVertexAttribI4uivEXT;

typedef void (*glVertexAttribI4bvEXT_function)(GLuint index, GLbyte *v);
glVertexAttribI4bvEXT_function glVertexAttribI4bvEXT;

typedef void (*glVertexAttribI4svEXT_function)(GLuint index, GLshort *v);
glVertexAttribI4svEXT_function glVertexAttribI4svEXT;

typedef void (*glVertexAttribI4ubvEXT_function)(GLuint index, GLubyte *v);
glVertexAttribI4ubvEXT_function glVertexAttribI4ubvEXT;

typedef void (*glVertexAttribI4usvEXT_function)(GLuint index, GLushort *v);
glVertexAttribI4usvEXT_function glVertexAttribI4usvEXT;

typedef void (*glVertexAttribIPointerEXT_function)(GLuint index, GLint size, GLenum type, GLsizei stride, void * pointer);
glVertexAttribIPointerEXT_function glVertexAttribIPointerEXT;

typedef void (*glGetVertexAttribIivEXT_function)(GLuint index, GLenum pname, GLint *params);
glGetVertexAttribIivEXT_function glGetVertexAttribIivEXT;

typedef void (*glGetVertexAttribIuivEXT_function)(GLuint index, GLenum pname, GLuint *params);
glGetVertexAttribIuivEXT_function glGetVertexAttribIuivEXT;
#define GL_EXT_histogram 1
#define GL_HISTOGRAM_EXT 0x8024
#define GL_PROXY_HISTOGRAM_EXT 0x8025
#define GL_HISTOGRAM_WIDTH_EXT 0x8026
#define GL_HISTOGRAM_FORMAT_EXT 0x8027
#define GL_HISTOGRAM_RED_SIZE_EXT 0x8028
#define GL_HISTOGRAM_GREEN_SIZE_EXT 0x8029
#define GL_HISTOGRAM_BLUE_SIZE_EXT 0x802A
#define GL_HISTOGRAM_ALPHA_SIZE_EXT 0x802B
#define GL_HISTOGRAM_LUMINANCE_SIZE_EXT 0x802C
#define GL_HISTOGRAM_SINK_EXT 0x802D
#define GL_MINMAX_EXT 0x802E
#define GL_MINMAX_FORMAT_EXT 0x802F
#define GL_MINMAX_SINK_EXT 0x8030
#define GL_TABLE_TOO_LARGE_EXT 0x8031

typedef void (*glGetHistogramEXT_function)(GLenum target, GLboolean reset, GLenum format, GLenum type, void * values);
glGetHistogramEXT_function glGetHistogramEXT;

typedef void (*glGetHistogramParameterfvEXT_function)(GLenum target, GLenum pname, GLfloat *params);
glGetHistogramParameterfvEXT_function glGetHistogramParameterfvEXT;

typedef void (*glGetHistogramParameterivEXT_function)(GLenum target, GLenum pname, GLint *params);
glGetHistogramParameterivEXT_function glGetHistogramParameterivEXT;

typedef void (*glGetMinmaxEXT_function)(GLenum target, GLboolean reset, GLenum format, GLenum type, void * values);
glGetMinmaxEXT_function glGetMinmaxEXT;

typedef void (*glGetMinmaxParameterfvEXT_function)(GLenum target, GLenum pname, GLfloat *params);
glGetMinmaxParameterfvEXT_function glGetMinmaxParameterfvEXT;

typedef void (*glGetMinmaxParameterivEXT_function)(GLenum target, GLenum pname, GLint *params);
glGetMinmaxParameterivEXT_function glGetMinmaxParameterivEXT;

typedef void (*glHistogramEXT_function)(GLenum target, GLsizei width, GLenum internalformat, GLboolean sink);
glHistogramEXT_function glHistogramEXT;

typedef void (*glMinmaxEXT_function)(GLenum target, GLenum internalformat, GLboolean sink);
glMinmaxEXT_function glMinmaxEXT;

typedef void (*glResetHistogramEXT_function)(GLenum target);
glResetHistogramEXT_function glResetHistogramEXT;

typedef void (*glResetMinmaxEXT_function)(GLenum target);
glResetMinmaxEXT_function glResetMinmaxEXT;
#define GL_EXT_index_array_formats 1
#define GL_IUI_V2F_EXT 0x81AD
#define GL_IUI_V3F_EXT 0x81AE
#define GL_IUI_N3F_V2F_EXT 0x81AF
#define GL_IUI_N3F_V3F_EXT 0x81B0
#define GL_T2F_IUI_V2F_EXT 0x81B1
#define GL_T2F_IUI_V3F_EXT 0x81B2
#define GL_T2F_IUI_N3F_V2F_EXT 0x81B3
#define GL_T2F_IUI_N3F_V3F_EXT 0x81B4
#define GL_EXT_index_func 1
#define GL_INDEX_TEST_EXT 0x81B5
#define GL_INDEX_TEST_FUNC_EXT 0x81B6
#define GL_INDEX_TEST_REF_EXT 0x81B7

typedef void (*glIndexFuncEXT_function)(GLenum func, GLclampf ref);
glIndexFuncEXT_function glIndexFuncEXT;
#define GL_EXT_index_material 1
#define GL_INDEX_MATERIAL_EXT 0x81B8
#define GL_INDEX_MATERIAL_PARAMETER_EXT 0x81B9
#define GL_INDEX_MATERIAL_FACE_EXT 0x81BA

typedef void (*glIndexMaterialEXT_function)(GLenum face, GLenum mode);
glIndexMaterialEXT_function glIndexMaterialEXT;
#define GL_EXT_index_texture 1
#define GL_EXT_light_texture 1
#define GL_FRAGMENT_MATERIAL_EXT 0x8349
#define GL_FRAGMENT_NORMAL_EXT 0x834A
#define GL_FRAGMENT_COLOR_EXT 0x834C
#define GL_ATTENUATION_EXT 0x834D
#define GL_SHADOW_ATTENUATION_EXT 0x834E
#define GL_TEXTURE_APPLICATION_MODE_EXT 0x834F
#define GL_TEXTURE_LIGHT_EXT 0x8350
#define GL_TEXTURE_MATERIAL_FACE_EXT 0x8351
#define GL_TEXTURE_MATERIAL_PARAMETER_EXT 0x8352

typedef void (*glApplyTextureEXT_function)(GLenum mode);
glApplyTextureEXT_function glApplyTextureEXT;

typedef void (*glTextureLightEXT_function)(GLenum pname);
glTextureLightEXT_function glTextureLightEXT;

typedef void (*glTextureMaterialEXT_function)(GLenum face, GLenum mode);
glTextureMaterialEXT_function glTextureMaterialEXT;
#define GL_EXT_memory_object 1
#define GL_TEXTURE_TILING_EXT 0x9580
#define GL_DEDICATED_MEMORY_OBJECT_EXT 0x9581
#define GL_PROTECTED_MEMORY_OBJECT_EXT 0x959B
#define GL_NUM_TILING_TYPES_EXT 0x9582
#define GL_TILING_TYPES_EXT 0x9583
#define GL_OPTIMAL_TILING_EXT 0x9584
#define GL_LINEAR_TILING_EXT 0x9585
#define GL_NUM_DEVICE_UUIDS_EXT 0x9596
#define GL_DEVICE_UUID_EXT 0x9597
#define GL_DRIVER_UUID_EXT 0x9598
#define GL_UUID_SIZE_EXT 16

typedef void (*glGetUnsignedBytevEXT_function)(GLenum pname, GLubyte *data);
glGetUnsignedBytevEXT_function glGetUnsignedBytevEXT;

typedef void (*glGetUnsignedBytei_vEXT_function)(GLenum target, GLuint index, GLubyte *data);
glGetUnsignedBytei_vEXT_function glGetUnsignedBytei_vEXT;

typedef void (*glDeleteMemoryObjectsEXT_function)(GLsizei n, GLuint *memoryObjects);
glDeleteMemoryObjectsEXT_function glDeleteMemoryObjectsEXT;

typedef GLboolean  (*glIsMemoryObjectEXT_function)(GLuint memoryObject);
glIsMemoryObjectEXT_function glIsMemoryObjectEXT;

typedef void (*glCreateMemoryObjectsEXT_function)(GLsizei n, GLuint *memoryObjects);
glCreateMemoryObjectsEXT_function glCreateMemoryObjectsEXT;

typedef void (*glMemoryObjectParameterivEXT_function)(GLuint memoryObject, GLenum pname, GLint *params);
glMemoryObjectParameterivEXT_function glMemoryObjectParameterivEXT;

typedef void (*glGetMemoryObjectParameterivEXT_function)(GLuint memoryObject, GLenum pname, GLint *params);
glGetMemoryObjectParameterivEXT_function glGetMemoryObjectParameterivEXT;

typedef void (*glTexStorageMem2DEXT_function)(GLenum target, GLsizei levels, GLenum internalFormat, GLsizei width, GLsizei height, GLuint memory, GLuint64 offset);
glTexStorageMem2DEXT_function glTexStorageMem2DEXT;

typedef void (*glTexStorageMem2DMultisampleEXT_function)(GLenum target, GLsizei samples, GLenum internalFormat, GLsizei width, GLsizei height, GLboolean fixedSampleLocations, GLuint memory, GLuint64 offset);
glTexStorageMem2DMultisampleEXT_function glTexStorageMem2DMultisampleEXT;

typedef void (*glTexStorageMem3DEXT_function)(GLenum target, GLsizei levels, GLenum internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLuint memory, GLuint64 offset);
glTexStorageMem3DEXT_function glTexStorageMem3DEXT;

typedef void (*glTexStorageMem3DMultisampleEXT_function)(GLenum target, GLsizei samples, GLenum internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedSampleLocations, GLuint memory, GLuint64 offset);
glTexStorageMem3DMultisampleEXT_function glTexStorageMem3DMultisampleEXT;

typedef void (*glBufferStorageMemEXT_function)(GLenum target, GLsizeiptr size, GLuint memory, GLuint64 offset);
glBufferStorageMemEXT_function glBufferStorageMemEXT;

typedef void (*glTextureStorageMem2DEXT_function)(GLuint texture, GLsizei levels, GLenum internalFormat, GLsizei width, GLsizei height, GLuint memory, GLuint64 offset);
glTextureStorageMem2DEXT_function glTextureStorageMem2DEXT;

typedef void (*glTextureStorageMem2DMultisampleEXT_function)(GLuint texture, GLsizei samples, GLenum internalFormat, GLsizei width, GLsizei height, GLboolean fixedSampleLocations, GLuint memory, GLuint64 offset);
glTextureStorageMem2DMultisampleEXT_function glTextureStorageMem2DMultisampleEXT;

typedef void (*glTextureStorageMem3DEXT_function)(GLuint texture, GLsizei levels, GLenum internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLuint memory, GLuint64 offset);
glTextureStorageMem3DEXT_function glTextureStorageMem3DEXT;

typedef void (*glTextureStorageMem3DMultisampleEXT_function)(GLuint texture, GLsizei samples, GLenum internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedSampleLocations, GLuint memory, GLuint64 offset);
glTextureStorageMem3DMultisampleEXT_function glTextureStorageMem3DMultisampleEXT;

typedef void (*glNamedBufferStorageMemEXT_function)(GLuint buffer, GLsizeiptr size, GLuint memory, GLuint64 offset);
glNamedBufferStorageMemEXT_function glNamedBufferStorageMemEXT;

typedef void (*glTexStorageMem1DEXT_function)(GLenum target, GLsizei levels, GLenum internalFormat, GLsizei width, GLuint memory, GLuint64 offset);
glTexStorageMem1DEXT_function glTexStorageMem1DEXT;

typedef void (*glTextureStorageMem1DEXT_function)(GLuint texture, GLsizei levels, GLenum internalFormat, GLsizei width, GLuint memory, GLuint64 offset);
glTextureStorageMem1DEXT_function glTextureStorageMem1DEXT;
#define GL_EXT_memory_object_fd 1
#define GL_HANDLE_TYPE_OPAQUE_FD_EXT 0x9586

typedef void (*glImportMemoryFdEXT_function)(GLuint memory, GLuint64 size, GLenum handleType, GLint fd);
glImportMemoryFdEXT_function glImportMemoryFdEXT;
#define GL_EXT_memory_object_win32 1
#define GL_HANDLE_TYPE_OPAQUE_WIN32_EXT 0x9587
#define GL_HANDLE_TYPE_OPAQUE_WIN32_KMT_EXT 0x9588
#define GL_DEVICE_LUID_EXT 0x9599
#define GL_DEVICE_NODE_MASK_EXT 0x959A
#define GL_LUID_SIZE_EXT 8
#define GL_HANDLE_TYPE_D3D12_TILEPOOL_EXT 0x9589
#define GL_HANDLE_TYPE_D3D12_RESOURCE_EXT 0x958A
#define GL_HANDLE_TYPE_D3D11_IMAGE_EXT 0x958B
#define GL_HANDLE_TYPE_D3D11_IMAGE_KMT_EXT 0x958C

typedef void (*glImportMemoryWin32HandleEXT_function)(GLuint memory, GLuint64 size, GLenum handleType, void * handle);
glImportMemoryWin32HandleEXT_function glImportMemoryWin32HandleEXT;

typedef void (*glImportMemoryWin32NameEXT_function)(GLuint memory, GLuint64 size, GLenum handleType, void * name);
glImportMemoryWin32NameEXT_function glImportMemoryWin32NameEXT;
#define GL_EXT_misc_attribute 1
#define GL_EXT_multi_draw_arrays 1

typedef void (*glMultiDrawArraysEXT_function)(GLenum mode, GLint *first, GLsizei *count, GLsizei primcount);
glMultiDrawArraysEXT_function glMultiDrawArraysEXT;

typedef void (*glMultiDrawElementsEXT_function)(GLenum mode, GLsizei *count, GLenum type, void * *indices, GLsizei primcount);
glMultiDrawElementsEXT_function glMultiDrawElementsEXT;
#define GL_EXT_multisample 1
#define GL_MULTISAMPLE_EXT 0x809D
#define GL_SAMPLE_ALPHA_TO_MASK_EXT 0x809E
#define GL_SAMPLE_ALPHA_TO_ONE_EXT 0x809F
#define GL_SAMPLE_MASK_EXT 0x80A0
#define GL_1PASS_EXT 0x80A1
#define GL_2PASS_0_EXT 0x80A2
#define GL_2PASS_1_EXT 0x80A3
#define GL_4PASS_0_EXT 0x80A4
#define GL_4PASS_1_EXT 0x80A5
#define GL_4PASS_2_EXT 0x80A6
#define GL_4PASS_3_EXT 0x80A7
#define GL_SAMPLE_BUFFERS_EXT 0x80A8
#define GL_SAMPLES_EXT 0x80A9
#define GL_SAMPLE_MASK_VALUE_EXT 0x80AA
#define GL_SAMPLE_MASK_INVERT_EXT 0x80AB
#define GL_SAMPLE_PATTERN_EXT 0x80AC
#define GL_MULTISAMPLE_BIT_EXT 0x20000000

typedef void (*glSampleMaskEXT_function)(GLclampf value, GLboolean invert);
glSampleMaskEXT_function glSampleMaskEXT;

typedef void (*glSamplePatternEXT_function)(GLenum pattern);
glSamplePatternEXT_function glSamplePatternEXT;
#define GL_EXT_multiview_tessellation_geometry_shader 1
#define GL_EXT_multiview_texture_multisample 1
#define GL_EXT_multiview_timer_query 1
#define GL_EXT_packed_depth_stencil 1
#define GL_DEPTH_STENCIL_EXT 0x84F9
#define GL_UNSIGNED_INT_24_8_EXT 0x84FA
#define GL_DEPTH24_STENCIL8_EXT 0x88F0
#define GL_TEXTURE_STENCIL_SIZE_EXT 0x88F1
#define GL_EXT_packed_float 1
#define GL_R11F_G11F_B10F_EXT 0x8C3A
#define GL_UNSIGNED_INT_10F_11F_11F_REV_EXT 0x8C3B
#define GL_RGBA_SIGNED_COMPONENTS_EXT 0x8C3C
#define GL_EXT_packed_pixels 1
#define GL_UNSIGNED_BYTE_3_3_2_EXT 0x8032
#define GL_UNSIGNED_SHORT_4_4_4_4_EXT 0x8033
#define GL_UNSIGNED_SHORT_5_5_5_1_EXT 0x8034
#define GL_UNSIGNED_INT_8_8_8_8_EXT 0x8035
#define GL_UNSIGNED_INT_10_10_10_2_EXT 0x8036
#define GL_TEXTURE_INDEX_SIZE_EXT 0x80ED

typedef void (*glColorTableEXT_function)(GLenum target, GLenum internalFormat, GLsizei width, GLenum format, GLenum type, void * table);
glColorTableEXT_function glColorTableEXT;

typedef void (*glGetColorTableEXT_function)(GLenum target, GLenum format, GLenum type, void * data);
glGetColorTableEXT_function glGetColorTableEXT;

typedef void (*glGetColorTableParameterivEXT_function)(GLenum target, GLenum pname, GLint *params);
glGetColorTableParameterivEXT_function glGetColorTableParameterivEXT;

typedef void (*glGetColorTableParameterfvEXT_function)(GLenum target, GLenum pname, GLfloat *params);
glGetColorTableParameterfvEXT_function glGetColorTableParameterfvEXT;
#define GL_EXT_pixel_buffer_object 1
#define GL_PIXEL_PACK_BUFFER_EXT 0x88EB
#define GL_PIXEL_UNPACK_BUFFER_EXT 0x88EC
#define GL_PIXEL_PACK_BUFFER_BINDING_EXT 0x88ED
#define GL_PIXEL_UNPACK_BUFFER_BINDING_EXT 0x88EF
#define GL_EXT_pixel_transform 1
#define GL_PIXEL_TRANSFORM_2D_EXT 0x8330
#define GL_PIXEL_MAG_FILTER_EXT 0x8331
#define GL_PIXEL_MIN_FILTER_EXT 0x8332
#define GL_PIXEL_CUBIC_WEIGHT_EXT 0x8333
#define GL_CUBIC_EXT 0x8334
#define GL_AVERAGE_EXT 0x8335
#define GL_PIXEL_TRANSFORM_2D_STACK_DEPTH_EXT 0x8336
#define GL_MAX_PIXEL_TRANSFORM_2D_STACK_DEPTH_EXT 0x8337
#define GL_PIXEL_TRANSFORM_2D_MATRIX_EXT 0x8338

typedef void (*glPixelTransformParameteriEXT_function)(GLenum target, GLenum pname, GLint param);
glPixelTransformParameteriEXT_function glPixelTransformParameteriEXT;

typedef void (*glPixelTransformParameterfEXT_function)(GLenum target, GLenum pname, GLfloat param);
glPixelTransformParameterfEXT_function glPixelTransformParameterfEXT;

typedef void (*glPixelTransformParameterivEXT_function)(GLenum target, GLenum pname, GLint *params);
glPixelTransformParameterivEXT_function glPixelTransformParameterivEXT;

typedef void (*glPixelTransformParameterfvEXT_function)(GLenum target, GLenum pname, GLfloat *params);
glPixelTransformParameterfvEXT_function glPixelTransformParameterfvEXT;

typedef void (*glGetPixelTransformParameterivEXT_function)(GLenum target, GLenum pname, GLint *params);
glGetPixelTransformParameterivEXT_function glGetPixelTransformParameterivEXT;

typedef void (*glGetPixelTransformParameterfvEXT_function)(GLenum target, GLenum pname, GLfloat *params);
glGetPixelTransformParameterfvEXT_function glGetPixelTransformParameterfvEXT;
#define GL_EXT_pixel_transform_color_table 1
#define GL_EXT_point_parameters 1
#define GL_POINT_SIZE_MIN_EXT 0x8126
#define GL_POINT_SIZE_MAX_EXT 0x8127
#define GL_POINT_FADE_THRESHOLD_SIZE_EXT 0x8128
#define GL_DISTANCE_ATTENUATION_EXT 0x8129

typedef void (*glPointParameterfEXT_function)(GLenum pname, GLfloat param);
glPointParameterfEXT_function glPointParameterfEXT;

typedef void (*glPointParameterfvEXT_function)(GLenum pname, GLfloat *params);
glPointParameterfvEXT_function glPointParameterfvEXT;
#define GL_EXT_polygon_offset 1
#define GL_POLYGON_OFFSET_EXT 0x8037
#define GL_POLYGON_OFFSET_FACTOR_EXT 0x8038
#define GL_POLYGON_OFFSET_BIAS_EXT 0x8039

typedef void (*glPolygonOffsetEXT_function)(GLfloat factor, GLfloat bias);
glPolygonOffsetEXT_function glPolygonOffsetEXT;
#define GL_EXT_polygon_offset_clamp 1
#define GL_POLYGON_OFFSET_CLAMP_EXT 0x8E1B

typedef void (*glPolygonOffsetClampEXT_function)(GLfloat factor, GLfloat units, GLfloat clamp);
glPolygonOffsetClampEXT_function glPolygonOffsetClampEXT;
#define GL_EXT_post_depth_coverage 1
#define GL_EXT_provoking_vertex 1
#define GL_QUADS_FOLLOW_PROVOKING_VERTEX_CONVENTION_EXT 0x8E4C
#define GL_FIRST_VERTEX_CONVENTION_EXT 0x8E4D
#define GL_LAST_VERTEX_CONVENTION_EXT 0x8E4E
#define GL_PROVOKING_VERTEX_EXT 0x8E4F

typedef void (*glProvokingVertexEXT_function)(GLenum mode);
glProvokingVertexEXT_function glProvokingVertexEXT;
#define GL_EXT_raster_multisample 1
#define GL_RASTER_MULTISAMPLE_EXT 0x9327
#define GL_RASTER_SAMPLES_EXT 0x9328
#define GL_MAX_RASTER_SAMPLES_EXT 0x9329
#define GL_RASTER_FIXED_SAMPLE_LOCATIONS_EXT 0x932A
#define GL_MULTISAMPLE_RASTERIZATION_ALLOWED_EXT 0x932B
#define GL_EFFECTIVE_RASTER_SAMPLES_EXT 0x932C

typedef void (*glRasterSamplesEXT_function)(GLuint samples, GLboolean fixedsamplelocations);
glRasterSamplesEXT_function glRasterSamplesEXT;
#define GL_EXT_rescale_normal 1
#define GL_RESCALE_NORMAL_EXT 0x803A
#define GL_EXT_secondary_color 1
#define GL_COLOR_SUM_EXT 0x8458
#define GL_CURRENT_SECONDARY_COLOR_EXT 0x8459
#define GL_SECONDARY_COLOR_ARRAY_SIZE_EXT 0x845A
#define GL_SECONDARY_COLOR_ARRAY_TYPE_EXT 0x845B
#define GL_SECONDARY_COLOR_ARRAY_STRIDE_EXT 0x845C
#define GL_SECONDARY_COLOR_ARRAY_POINTER_EXT 0x845D
#define GL_SECONDARY_COLOR_ARRAY_EXT 0x845E

typedef void (*glSecondaryColor3bEXT_function)(GLbyte red, GLbyte green, GLbyte blue);
glSecondaryColor3bEXT_function glSecondaryColor3bEXT;

typedef void (*glSecondaryColor3bvEXT_function)(GLbyte *v);
glSecondaryColor3bvEXT_function glSecondaryColor3bvEXT;

typedef void (*glSecondaryColor3dEXT_function)(GLdouble red, GLdouble green, GLdouble blue);
glSecondaryColor3dEXT_function glSecondaryColor3dEXT;

typedef void (*glSecondaryColor3dvEXT_function)(GLdouble *v);
glSecondaryColor3dvEXT_function glSecondaryColor3dvEXT;

typedef void (*glSecondaryColor3fEXT_function)(GLfloat red, GLfloat green, GLfloat blue);
glSecondaryColor3fEXT_function glSecondaryColor3fEXT;

typedef void (*glSecondaryColor3fvEXT_function)(GLfloat *v);
glSecondaryColor3fvEXT_function glSecondaryColor3fvEXT;

typedef void (*glSecondaryColor3iEXT_function)(GLint red, GLint green, GLint blue);
glSecondaryColor3iEXT_function glSecondaryColor3iEXT;

typedef void (*glSecondaryColor3ivEXT_function)(GLint *v);
glSecondaryColor3ivEXT_function glSecondaryColor3ivEXT;

typedef void (*glSecondaryColor3sEXT_function)(GLshort red, GLshort green, GLshort blue);
glSecondaryColor3sEXT_function glSecondaryColor3sEXT;

typedef void (*glSecondaryColor3svEXT_function)(GLshort *v);
glSecondaryColor3svEXT_function glSecondaryColor3svEXT;

typedef void (*glSecondaryColor3ubEXT_function)(GLubyte red, GLubyte green, GLubyte blue);
glSecondaryColor3ubEXT_function glSecondaryColor3ubEXT;

typedef void (*glSecondaryColor3ubvEXT_function)(GLubyte *v);
glSecondaryColor3ubvEXT_function glSecondaryColor3ubvEXT;

typedef void (*glSecondaryColor3uiEXT_function)(GLuint red, GLuint green, GLuint blue);
glSecondaryColor3uiEXT_function glSecondaryColor3uiEXT;

typedef void (*glSecondaryColor3uivEXT_function)(GLuint *v);
glSecondaryColor3uivEXT_function glSecondaryColor3uivEXT;

typedef void (*glSecondaryColor3usEXT_function)(GLushort red, GLushort green, GLushort blue);
glSecondaryColor3usEXT_function glSecondaryColor3usEXT;

typedef void (*glSecondaryColor3usvEXT_function)(GLushort *v);
glSecondaryColor3usvEXT_function glSecondaryColor3usvEXT;

typedef void (*glSecondaryColorPointerEXT_function)(GLint size, GLenum type, GLsizei stride, void * pointer);
glSecondaryColorPointerEXT_function glSecondaryColorPointerEXT;
#define GL_EXT_semaphore 1
#define GL_LAYOUT_GENERAL_EXT 0x958D
#define GL_LAYOUT_COLOR_ATTACHMENT_EXT 0x958E
#define GL_LAYOUT_DEPTH_STENCIL_ATTACHMENT_EXT 0x958F
#define GL_LAYOUT_DEPTH_STENCIL_READ_ONLY_EXT 0x9590
#define GL_LAYOUT_SHADER_READ_ONLY_EXT 0x9591
#define GL_LAYOUT_TRANSFER_SRC_EXT 0x9592
#define GL_LAYOUT_TRANSFER_DST_EXT 0x9593
#define GL_LAYOUT_DEPTH_READ_ONLY_STENCIL_ATTACHMENT_EXT 0x9530
#define GL_LAYOUT_DEPTH_ATTACHMENT_STENCIL_READ_ONLY_EXT 0x9531

typedef void (*glGenSemaphoresEXT_function)(GLsizei n, GLuint *semaphores);
glGenSemaphoresEXT_function glGenSemaphoresEXT;

typedef void (*glDeleteSemaphoresEXT_function)(GLsizei n, GLuint *semaphores);
glDeleteSemaphoresEXT_function glDeleteSemaphoresEXT;

typedef GLboolean  (*glIsSemaphoreEXT_function)(GLuint semaphore);
glIsSemaphoreEXT_function glIsSemaphoreEXT;

typedef void (*glSemaphoreParameterui64vEXT_function)(GLuint semaphore, GLenum pname, GLuint64 *params);
glSemaphoreParameterui64vEXT_function glSemaphoreParameterui64vEXT;

typedef void (*glGetSemaphoreParameterui64vEXT_function)(GLuint semaphore, GLenum pname, GLuint64 *params);
glGetSemaphoreParameterui64vEXT_function glGetSemaphoreParameterui64vEXT;

typedef void (*glWaitSemaphoreEXT_function)(GLuint semaphore, GLuint numBufferBarriers, GLuint *buffers, GLuint numTextureBarriers, GLuint *textures, GLenum *srcLayouts);
glWaitSemaphoreEXT_function glWaitSemaphoreEXT;

typedef void (*glSignalSemaphoreEXT_function)(GLuint semaphore, GLuint numBufferBarriers, GLuint *buffers, GLuint numTextureBarriers, GLuint *textures, GLenum *dstLayouts);
glSignalSemaphoreEXT_function glSignalSemaphoreEXT;
#define GL_EXT_semaphore_fd 1

typedef void (*glImportSemaphoreFdEXT_function)(GLuint semaphore, GLenum handleType, GLint fd);
glImportSemaphoreFdEXT_function glImportSemaphoreFdEXT;
#define GL_EXT_semaphore_win32 1
#define GL_HANDLE_TYPE_D3D12_FENCE_EXT 0x9594
#define GL_D3D12_FENCE_VALUE_EXT 0x9595

typedef void (*glImportSemaphoreWin32HandleEXT_function)(GLuint semaphore, GLenum handleType, void * handle);
glImportSemaphoreWin32HandleEXT_function glImportSemaphoreWin32HandleEXT;

typedef void (*glImportSemaphoreWin32NameEXT_function)(GLuint semaphore, GLenum handleType, void * name);
glImportSemaphoreWin32NameEXT_function glImportSemaphoreWin32NameEXT;
#define GL_EXT_separate_shader_objects 1
#define GL_ACTIVE_PROGRAM_EXT 0x8B8D

typedef void (*glUseShaderProgramEXT_function)(GLenum type, GLuint program);
glUseShaderProgramEXT_function glUseShaderProgramEXT;

typedef void (*glActiveProgramEXT_function)(GLuint program);
glActiveProgramEXT_function glActiveProgramEXT;

typedef GLuint  (*glCreateShaderProgramEXT_function)(GLenum type, GLchar *string);
glCreateShaderProgramEXT_function glCreateShaderProgramEXT;
#define GL_EXT_separate_specular_color 1
#define GL_LIGHT_MODEL_COLOR_CONTROL_EXT 0x81F8
#define GL_SINGLE_COLOR_EXT 0x81F9
#define GL_SEPARATE_SPECULAR_COLOR_EXT 0x81FA
#define GL_EXT_shader_framebuffer_fetch 1
#define GL_FRAGMENT_SHADER_DISCARDS_SAMPLES_EXT 0x8A52
#define GL_EXT_shader_framebuffer_fetch_non_coherent 1

typedef void (*glFramebufferFetchBarrierEXT_function)();
glFramebufferFetchBarrierEXT_function glFramebufferFetchBarrierEXT;
#define GL_EXT_shader_image_load_formatted 1
#define GL_EXT_shader_image_load_store 1
#define GL_MAX_IMAGE_UNITS_EXT 0x8F38
#define GL_MAX_COMBINED_IMAGE_UNITS_AND_FRAGMENT_OUTPUTS_EXT 0x8F39
#define GL_IMAGE_BINDING_NAME_EXT 0x8F3A
#define GL_IMAGE_BINDING_LEVEL_EXT 0x8F3B
#define GL_IMAGE_BINDING_LAYERED_EXT 0x8F3C
#define GL_IMAGE_BINDING_LAYER_EXT 0x8F3D
#define GL_IMAGE_BINDING_ACCESS_EXT 0x8F3E
#define GL_IMAGE_1D_EXT 0x904C
#define GL_IMAGE_2D_EXT 0x904D
#define GL_IMAGE_3D_EXT 0x904E
#define GL_IMAGE_2D_RECT_EXT 0x904F
#define GL_IMAGE_CUBE_EXT 0x9050
#define GL_IMAGE_BUFFER_EXT 0x9051
#define GL_IMAGE_1D_ARRAY_EXT 0x9052
#define GL_IMAGE_2D_ARRAY_EXT 0x9053
#define GL_IMAGE_CUBE_MAP_ARRAY_EXT 0x9054
#define GL_IMAGE_2D_MULTISAMPLE_EXT 0x9055
#define GL_IMAGE_2D_MULTISAMPLE_ARRAY_EXT 0x9056
#define GL_INT_IMAGE_1D_EXT 0x9057
#define GL_INT_IMAGE_2D_EXT 0x9058
#define GL_INT_IMAGE_3D_EXT 0x9059
#define GL_INT_IMAGE_2D_RECT_EXT 0x905A
#define GL_INT_IMAGE_CUBE_EXT 0x905B
#define GL_INT_IMAGE_BUFFER_EXT 0x905C
#define GL_INT_IMAGE_1D_ARRAY_EXT 0x905D
#define GL_INT_IMAGE_2D_ARRAY_EXT 0x905E
#define GL_INT_IMAGE_CUBE_MAP_ARRAY_EXT 0x905F
#define GL_INT_IMAGE_2D_MULTISAMPLE_EXT 0x9060
#define GL_INT_IMAGE_2D_MULTISAMPLE_ARRAY_EXT 0x9061
#define GL_UNSIGNED_INT_IMAGE_1D_EXT 0x9062
#define GL_UNSIGNED_INT_IMAGE_2D_EXT 0x9063
#define GL_UNSIGNED_INT_IMAGE_3D_EXT 0x9064
#define GL_UNSIGNED_INT_IMAGE_2D_RECT_EXT 0x9065
#define GL_UNSIGNED_INT_IMAGE_CUBE_EXT 0x9066
#define GL_UNSIGNED_INT_IMAGE_BUFFER_EXT 0x9067
#define GL_UNSIGNED_INT_IMAGE_1D_ARRAY_EXT 0x9068
#define GL_UNSIGNED_INT_IMAGE_2D_ARRAY_EXT 0x9069
#define GL_UNSIGNED_INT_IMAGE_CUBE_MAP_ARRAY_EXT 0x906A
#define GL_UNSIGNED_INT_IMAGE_2D_MULTISAMPLE_EXT 0x906B
#define GL_UNSIGNED_INT_IMAGE_2D_MULTISAMPLE_ARRAY_EXT 0x906C
#define GL_MAX_IMAGE_SAMPLES_EXT 0x906D
#define GL_IMAGE_BINDING_FORMAT_EXT 0x906E
#define GL_VERTEX_ATTRIB_ARRAY_BARRIER_BIT_EXT 0x00000001
#define GL_ELEMENT_ARRAY_BARRIER_BIT_EXT 0x00000002
#define GL_UNIFORM_BARRIER_BIT_EXT 0x00000004
#define GL_TEXTURE_FETCH_BARRIER_BIT_EXT 0x00000008
#define GL_SHADER_IMAGE_ACCESS_BARRIER_BIT_EXT 0x00000020
#define GL_COMMAND_BARRIER_BIT_EXT 0x00000040
#define GL_PIXEL_BUFFER_BARRIER_BIT_EXT 0x00000080
#define GL_TEXTURE_UPDATE_BARRIER_BIT_EXT 0x00000100
#define GL_BUFFER_UPDATE_BARRIER_BIT_EXT 0x00000200
#define GL_FRAMEBUFFER_BARRIER_BIT_EXT 0x00000400
#define GL_TRANSFORM_FEEDBACK_BARRIER_BIT_EXT 0x00000800
#define GL_ATOMIC_COUNTER_BARRIER_BIT_EXT 0x00001000
#define GL_ALL_BARRIER_BITS_EXT 0xFFFFFFFF

typedef void (*glBindImageTextureEXT_function)(GLuint index, GLuint texture, GLint level, GLboolean layered, GLint layer, GLenum access, GLint format);
glBindImageTextureEXT_function glBindImageTextureEXT;

typedef void (*glMemoryBarrierEXT_function)(GLbitfield barriers);
glMemoryBarrierEXT_function glMemoryBarrierEXT;
#define GL_EXT_shader_integer_mix 1
#define GL_EXT_shader_samples_identical 1
#define GL_EXT_shadow_funcs 1
#define GL_EXT_shared_texture_palette 1
#define GL_SHARED_TEXTURE_PALETTE_EXT 0x81FB
#define GL_EXT_sparse_texture2 1
#define GL_EXT_stencil_clear_tag 1
#define GL_STENCIL_TAG_BITS_EXT 0x88F2
#define GL_STENCIL_CLEAR_TAG_VALUE_EXT 0x88F3

typedef void (*glStencilClearTagEXT_function)(GLsizei stencilTagBits, GLuint stencilClearTag);
glStencilClearTagEXT_function glStencilClearTagEXT;
#define GL_EXT_stencil_two_side 1
#define GL_STENCIL_TEST_TWO_SIDE_EXT 0x8910
#define GL_ACTIVE_STENCIL_FACE_EXT 0x8911

typedef void (*glActiveStencilFaceEXT_function)(GLenum face);
glActiveStencilFaceEXT_function glActiveStencilFaceEXT;
#define GL_EXT_stencil_wrap 1
#define GL_INCR_WRAP_EXT 0x8507
#define GL_DECR_WRAP_EXT 0x8508
#define GL_EXT_subtexture 1

typedef void (*glTexSubImage1DEXT_function)(GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, void * pixels);
glTexSubImage1DEXT_function glTexSubImage1DEXT;

typedef void (*glTexSubImage2DEXT_function)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, void * pixels);
glTexSubImage2DEXT_function glTexSubImage2DEXT;
#define GL_EXT_texture 1
#define GL_ALPHA4_EXT 0x803B
#define GL_ALPHA8_EXT 0x803C
#define GL_ALPHA12_EXT 0x803D
#define GL_ALPHA16_EXT 0x803E
#define GL_LUMINANCE4_EXT 0x803F
#define GL_LUMINANCE8_EXT 0x8040
#define GL_LUMINANCE12_EXT 0x8041
#define GL_LUMINANCE16_EXT 0x8042
#define GL_LUMINANCE4_ALPHA4_EXT 0x8043
#define GL_LUMINANCE6_ALPHA2_EXT 0x8044
#define GL_LUMINANCE8_ALPHA8_EXT 0x8045
#define GL_LUMINANCE12_ALPHA4_EXT 0x8046
#define GL_LUMINANCE12_ALPHA12_EXT 0x8047
#define GL_LUMINANCE16_ALPHA16_EXT 0x8048
#define GL_INTENSITY_EXT 0x8049
#define GL_INTENSITY4_EXT 0x804A
#define GL_INTENSITY8_EXT 0x804B
#define GL_INTENSITY12_EXT 0x804C
#define GL_INTENSITY16_EXT 0x804D
#define GL_RGB2_EXT 0x804E
#define GL_RGB4_EXT 0x804F
#define GL_RGB5_EXT 0x8050
#define GL_RGB8_EXT 0x8051
#define GL_RGB10_EXT 0x8052
#define GL_RGB12_EXT 0x8053
#define GL_RGB16_EXT 0x8054
#define GL_RGBA2_EXT 0x8055
#define GL_RGBA4_EXT 0x8056
#define GL_RGB5_A1_EXT 0x8057
#define GL_RGBA8_EXT 0x8058
#define GL_RGB10_A2_EXT 0x8059
#define GL_RGBA12_EXT 0x805A
#define GL_RGBA16_EXT 0x805B
#define GL_TEXTURE_RED_SIZE_EXT 0x805C
#define GL_TEXTURE_GREEN_SIZE_EXT 0x805D
#define GL_TEXTURE_BLUE_SIZE_EXT 0x805E
#define GL_TEXTURE_ALPHA_SIZE_EXT 0x805F
#define GL_TEXTURE_LUMINANCE_SIZE_EXT 0x8060
#define GL_TEXTURE_INTENSITY_SIZE_EXT 0x8061
#define GL_REPLACE_EXT 0x8062
#define GL_PROXY_TEXTURE_1D_EXT 0x8063
#define GL_PROXY_TEXTURE_2D_EXT 0x8064
#define GL_TEXTURE_TOO_LARGE_EXT 0x8065
#define GL_EXT_texture3D 1
#define GL_PACK_SKIP_IMAGES_EXT 0x806B
#define GL_PACK_IMAGE_HEIGHT_EXT 0x806C
#define GL_UNPACK_SKIP_IMAGES_EXT 0x806D
#define GL_UNPACK_IMAGE_HEIGHT_EXT 0x806E
#define GL_TEXTURE_3D_EXT 0x806F
#define GL_PROXY_TEXTURE_3D_EXT 0x8070
#define GL_TEXTURE_DEPTH_EXT 0x8071
#define GL_TEXTURE_WRAP_R_EXT 0x8072
#define GL_MAX_3D_TEXTURE_SIZE_EXT 0x8073

typedef void (*glTexImage3DEXT_function)(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, void * pixels);
glTexImage3DEXT_function glTexImage3DEXT;

typedef void (*glTexSubImage3DEXT_function)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, void * pixels);
glTexSubImage3DEXT_function glTexSubImage3DEXT;
#define GL_EXT_texture_array 1
#define GL_TEXTURE_1D_ARRAY_EXT 0x8C18
#define GL_PROXY_TEXTURE_1D_ARRAY_EXT 0x8C19
#define GL_TEXTURE_2D_ARRAY_EXT 0x8C1A
#define GL_PROXY_TEXTURE_2D_ARRAY_EXT 0x8C1B
#define GL_TEXTURE_BINDING_1D_ARRAY_EXT 0x8C1C
#define GL_TEXTURE_BINDING_2D_ARRAY_EXT 0x8C1D
#define GL_MAX_ARRAY_TEXTURE_LAYERS_EXT 0x88FF
#define GL_COMPARE_REF_DEPTH_TO_TEXTURE_EXT 0x884E

typedef void (*glFramebufferTextureLayerEXT_function)(GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer);
glFramebufferTextureLayerEXT_function glFramebufferTextureLayerEXT;
#define GL_EXT_texture_buffer_object 1
#define GL_TEXTURE_BUFFER_EXT 0x8C2A
#define GL_MAX_TEXTURE_BUFFER_SIZE_EXT 0x8C2B
#define GL_TEXTURE_BINDING_BUFFER_EXT 0x8C2C
#define GL_TEXTURE_BUFFER_DATA_STORE_BINDING_EXT 0x8C2D
#define GL_TEXTURE_BUFFER_FORMAT_EXT 0x8C2E

typedef void (*glTexBufferEXT_function)(GLenum target, GLenum internalformat, GLuint buffer);
glTexBufferEXT_function glTexBufferEXT;
#define GL_EXT_texture_compression_latc 1
#define GL_COMPRESSED_LUMINANCE_LATC1_EXT 0x8C70
#define GL_COMPRESSED_SIGNED_LUMINANCE_LATC1_EXT 0x8C71
#define GL_COMPRESSED_LUMINANCE_ALPHA_LATC2_EXT 0x8C72
#define GL_COMPRESSED_SIGNED_LUMINANCE_ALPHA_LATC2_EXT 0x8C73
#define GL_EXT_texture_compression_rgtc 1
#define GL_COMPRESSED_RED_RGTC1_EXT 0x8DBB
#define GL_COMPRESSED_SIGNED_RED_RGTC1_EXT 0x8DBC
#define GL_COMPRESSED_RED_GREEN_RGTC2_EXT 0x8DBD
#define GL_COMPRESSED_SIGNED_RED_GREEN_RGTC2_EXT 0x8DBE
#define GL_EXT_texture_compression_s3tc 1
#define GL_COMPRESSED_RGB_S3TC_DXT1_EXT 0x83F0
#define GL_COMPRESSED_RGBA_S3TC_DXT1_EXT 0x83F1
#define GL_COMPRESSED_RGBA_S3TC_DXT3_EXT 0x83F2
#define GL_COMPRESSED_RGBA_S3TC_DXT5_EXT 0x83F3
#define GL_EXT_texture_cube_map 1
#define GL_NORMAL_MAP_EXT 0x8511
#define GL_REFLECTION_MAP_EXT 0x8512
#define GL_TEXTURE_CUBE_MAP_EXT 0x8513
#define GL_TEXTURE_BINDING_CUBE_MAP_EXT 0x8514
#define GL_TEXTURE_CUBE_MAP_POSITIVE_X_EXT 0x8515
#define GL_TEXTURE_CUBE_MAP_NEGATIVE_X_EXT 0x8516
#define GL_TEXTURE_CUBE_MAP_POSITIVE_Y_EXT 0x8517
#define GL_TEXTURE_CUBE_MAP_NEGATIVE_Y_EXT 0x8518
#define GL_TEXTURE_CUBE_MAP_POSITIVE_Z_EXT 0x8519
#define GL_TEXTURE_CUBE_MAP_NEGATIVE_Z_EXT 0x851A
#define GL_PROXY_TEXTURE_CUBE_MAP_EXT 0x851B
#define GL_MAX_CUBE_MAP_TEXTURE_SIZE_EXT 0x851C
#define GL_EXT_texture_env_add 1
#define GL_EXT_texture_env_combine 1
#define GL_COMBINE_EXT 0x8570
#define GL_COMBINE_RGB_EXT 0x8571
#define GL_COMBINE_ALPHA_EXT 0x8572
#define GL_RGB_SCALE_EXT 0x8573
#define GL_ADD_SIGNED_EXT 0x8574
#define GL_INTERPOLATE_EXT 0x8575
#define GL_CONSTANT_EXT 0x8576
#define GL_PRIMARY_COLOR_EXT 0x8577
#define GL_PREVIOUS_EXT 0x8578
#define GL_SOURCE0_RGB_EXT 0x8580
#define GL_SOURCE1_RGB_EXT 0x8581
#define GL_SOURCE2_RGB_EXT 0x8582
#define GL_SOURCE0_ALPHA_EXT 0x8588
#define GL_SOURCE1_ALPHA_EXT 0x8589
#define GL_SOURCE2_ALPHA_EXT 0x858A
#define GL_OPERAND0_RGB_EXT 0x8590
#define GL_OPERAND1_RGB_EXT 0x8591
#define GL_OPERAND2_RGB_EXT 0x8592
#define GL_OPERAND0_ALPHA_EXT 0x8598
#define GL_OPERAND1_ALPHA_EXT 0x8599
#define GL_OPERAND2_ALPHA_EXT 0x859A
#define GL_EXT_texture_env_dot3 1
#define GL_DOT3_RGB_EXT 0x8740
#define GL_DOT3_RGBA_EXT 0x8741
#define GL_EXT_texture_filter_anisotropic 1
#define GL_TEXTURE_MAX_ANISOTROPY_EXT 0x84FE
#define GL_MAX_TEXTURE_MAX_ANISOTROPY_EXT 0x84FF
#define GL_EXT_texture_filter_minmax 1
#define GL_TEXTURE_REDUCTION_MODE_EXT 0x9366
#define GL_WEIGHTED_AVERAGE_EXT 0x9367
#define GL_EXT_texture_integer 1
#define GL_RGBA32UI_EXT 0x8D70
#define GL_RGB32UI_EXT 0x8D71
#define GL_ALPHA32UI_EXT 0x8D72
#define GL_INTENSITY32UI_EXT 0x8D73
#define GL_LUMINANCE32UI_EXT 0x8D74
#define GL_LUMINANCE_ALPHA32UI_EXT 0x8D75
#define GL_RGBA16UI_EXT 0x8D76
#define GL_RGB16UI_EXT 0x8D77
#define GL_ALPHA16UI_EXT 0x8D78
#define GL_INTENSITY16UI_EXT 0x8D79
#define GL_LUMINANCE16UI_EXT 0x8D7A
#define GL_LUMINANCE_ALPHA16UI_EXT 0x8D7B
#define GL_RGBA8UI_EXT 0x8D7C
#define GL_RGB8UI_EXT 0x8D7D
#define GL_ALPHA8UI_EXT 0x8D7E
#define GL_INTENSITY8UI_EXT 0x8D7F
#define GL_LUMINANCE8UI_EXT 0x8D80
#define GL_LUMINANCE_ALPHA8UI_EXT 0x8D81
#define GL_RGBA32I_EXT 0x8D82
#define GL_RGB32I_EXT 0x8D83
#define GL_ALPHA32I_EXT 0x8D84
#define GL_INTENSITY32I_EXT 0x8D85
#define GL_LUMINANCE32I_EXT 0x8D86
#define GL_LUMINANCE_ALPHA32I_EXT 0x8D87
#define GL_RGBA16I_EXT 0x8D88
#define GL_RGB16I_EXT 0x8D89
#define GL_ALPHA16I_EXT 0x8D8A
#define GL_INTENSITY16I_EXT 0x8D8B
#define GL_LUMINANCE16I_EXT 0x8D8C
#define GL_LUMINANCE_ALPHA16I_EXT 0x8D8D
#define GL_RGBA8I_EXT 0x8D8E
#define GL_RGB8I_EXT 0x8D8F
#define GL_ALPHA8I_EXT 0x8D90
#define GL_INTENSITY8I_EXT 0x8D91
#define GL_LUMINANCE8I_EXT 0x8D92
#define GL_LUMINANCE_ALPHA8I_EXT 0x8D93
#define GL_RED_INTEGER_EXT 0x8D94
#define GL_GREEN_INTEGER_EXT 0x8D95
#define GL_BLUE_INTEGER_EXT 0x8D96
#define GL_ALPHA_INTEGER_EXT 0x8D97
#define GL_RGB_INTEGER_EXT 0x8D98
#define GL_RGBA_INTEGER_EXT 0x8D99
#define GL_BGR_INTEGER_EXT 0x8D9A
#define GL_BGRA_INTEGER_EXT 0x8D9B
#define GL_LUMINANCE_INTEGER_EXT 0x8D9C
#define GL_LUMINANCE_ALPHA_INTEGER_EXT 0x8D9D
#define GL_RGBA_INTEGER_MODE_EXT 0x8D9E

typedef void (*glTexParameterIivEXT_function)(GLenum target, GLenum pname, GLint *params);
glTexParameterIivEXT_function glTexParameterIivEXT;

typedef void (*glTexParameterIuivEXT_function)(GLenum target, GLenum pname, GLuint *params);
glTexParameterIuivEXT_function glTexParameterIuivEXT;

typedef void (*glGetTexParameterIivEXT_function)(GLenum target, GLenum pname, GLint *params);
glGetTexParameterIivEXT_function glGetTexParameterIivEXT;

typedef void (*glGetTexParameterIuivEXT_function)(GLenum target, GLenum pname, GLuint *params);
glGetTexParameterIuivEXT_function glGetTexParameterIuivEXT;

typedef void (*glClearColorIiEXT_function)(GLint red, GLint green, GLint blue, GLint alpha);
glClearColorIiEXT_function glClearColorIiEXT;

typedef void (*glClearColorIuiEXT_function)(GLuint red, GLuint green, GLuint blue, GLuint alpha);
glClearColorIuiEXT_function glClearColorIuiEXT;
#define GL_EXT_texture_lod_bias 1
#define GL_MAX_TEXTURE_LOD_BIAS_EXT 0x84FD
#define GL_TEXTURE_FILTER_CONTROL_EXT 0x8500
#define GL_TEXTURE_LOD_BIAS_EXT 0x8501
#define GL_EXT_texture_mirror_clamp 1
#define GL_MIRROR_CLAMP_EXT 0x8742
#define GL_MIRROR_CLAMP_TO_EDGE_EXT 0x8743
#define GL_MIRROR_CLAMP_TO_BORDER_EXT 0x8912
#define GL_EXT_texture_object 1
#define GL_TEXTURE_PRIORITY_EXT 0x8066
#define GL_TEXTURE_RESIDENT_EXT 0x8067
#define GL_TEXTURE_1D_BINDING_EXT 0x8068
#define GL_TEXTURE_2D_BINDING_EXT 0x8069
#define GL_TEXTURE_3D_BINDING_EXT 0x806A

typedef GLboolean  (*glAreTexturesResidentEXT_function)(GLsizei n, GLuint *textures, GLboolean *residences);
glAreTexturesResidentEXT_function glAreTexturesResidentEXT;

typedef void (*glBindTextureEXT_function)(GLenum target, GLuint texture);
glBindTextureEXT_function glBindTextureEXT;

typedef void (*glDeleteTexturesEXT_function)(GLsizei n, GLuint *textures);
glDeleteTexturesEXT_function glDeleteTexturesEXT;

typedef void (*glGenTexturesEXT_function)(GLsizei n, GLuint *textures);
glGenTexturesEXT_function glGenTexturesEXT;

typedef GLboolean  (*glIsTextureEXT_function)(GLuint texture);
glIsTextureEXT_function glIsTextureEXT;

typedef void (*glPrioritizeTexturesEXT_function)(GLsizei n, GLuint *textures, GLclampf *priorities);
glPrioritizeTexturesEXT_function glPrioritizeTexturesEXT;
#define GL_EXT_texture_perturb_normal 1
#define GL_PERTURB_EXT 0x85AE
#define GL_TEXTURE_NORMAL_EXT 0x85AF

typedef void (*glTextureNormalEXT_function)(GLenum mode);
glTextureNormalEXT_function glTextureNormalEXT;
#define GL_EXT_texture_sRGB 1
#define GL_SRGB_EXT 0x8C40
#define GL_SRGB8_EXT 0x8C41
#define GL_SRGB_ALPHA_EXT 0x8C42
#define GL_SRGB8_ALPHA8_EXT 0x8C43
#define GL_SLUMINANCE_ALPHA_EXT 0x8C44
#define GL_SLUMINANCE8_ALPHA8_EXT 0x8C45
#define GL_SLUMINANCE_EXT 0x8C46
#define GL_SLUMINANCE8_EXT 0x8C47
#define GL_COMPRESSED_SRGB_EXT 0x8C48
#define GL_COMPRESSED_SRGB_ALPHA_EXT 0x8C49
#define GL_COMPRESSED_SLUMINANCE_EXT 0x8C4A
#define GL_COMPRESSED_SLUMINANCE_ALPHA_EXT 0x8C4B
#define GL_COMPRESSED_SRGB_S3TC_DXT1_EXT 0x8C4C
#define GL_COMPRESSED_SRGB_ALPHA_S3TC_DXT1_EXT 0x8C4D
#define GL_COMPRESSED_SRGB_ALPHA_S3TC_DXT3_EXT 0x8C4E
#define GL_COMPRESSED_SRGB_ALPHA_S3TC_DXT5_EXT 0x8C4F
#define GL_EXT_texture_sRGB_R8 1
#define GL_SR8_EXT 0x8FBD
#define GL_EXT_texture_sRGB_RG8 1
#define GL_SRG8_EXT 0x8FBE
#define GL_EXT_texture_sRGB_decode 1
#define GL_TEXTURE_SRGB_DECODE_EXT 0x8A48
#define GL_DECODE_EXT 0x8A49
#define GL_SKIP_DECODE_EXT 0x8A4A
#define GL_EXT_texture_shadow_lod 1
#define GL_EXT_texture_shared_exponent 1
#define GL_RGB9_E5_EXT 0x8C3D
#define GL_UNSIGNED_INT_5_9_9_9_REV_EXT 0x8C3E
#define GL_TEXTURE_SHARED_SIZE_EXT 0x8C3F
#define GL_EXT_texture_snorm 1
#define GL_ALPHA_SNORM 0x9010
#define GL_LUMINANCE_SNORM 0x9011
#define GL_LUMINANCE_ALPHA_SNORM 0x9012
#define GL_INTENSITY_SNORM 0x9013
#define GL_ALPHA8_SNORM 0x9014
#define GL_LUMINANCE8_SNORM 0x9015
#define GL_LUMINANCE8_ALPHA8_SNORM 0x9016
#define GL_INTENSITY8_SNORM 0x9017
#define GL_ALPHA16_SNORM 0x9018
#define GL_LUMINANCE16_SNORM 0x9019
#define GL_LUMINANCE16_ALPHA16_SNORM 0x901A
#define GL_INTENSITY16_SNORM 0x901B
#define GL_RED_SNORM 0x8F90
#define GL_RG_SNORM 0x8F91
#define GL_RGB_SNORM 0x8F92
#define GL_RGBA_SNORM 0x8F93
#define GL_EXT_texture_storage 1
#define GL_TEXTURE_IMMUTABLE_FORMAT_EXT 0x912F
#define GL_RGBA32F_EXT 0x8814
#define GL_RGB32F_EXT 0x8815
#define GL_ALPHA32F_EXT 0x8816
#define GL_LUMINANCE32F_EXT 0x8818
#define GL_LUMINANCE_ALPHA32F_EXT 0x8819
#define GL_RGBA16F_EXT 0x881A
#define GL_RGB16F_EXT 0x881B
#define GL_ALPHA16F_EXT 0x881C
#define GL_LUMINANCE16F_EXT 0x881E
#define GL_LUMINANCE_ALPHA16F_EXT 0x881F
#define GL_BGRA8_EXT 0x93A1
#define GL_R8_EXT 0x8229
#define GL_RG8_EXT 0x822B
#define GL_R32F_EXT 0x822E
#define GL_RG32F_EXT 0x8230
#define GL_R16F_EXT 0x822D
#define GL_RG16F_EXT 0x822F

typedef void (*glTexStorage1DEXT_function)(GLenum target, GLsizei levels, GLenum internalformat, GLsizei width);
glTexStorage1DEXT_function glTexStorage1DEXT;

typedef void (*glTexStorage2DEXT_function)(GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height);
glTexStorage2DEXT_function glTexStorage2DEXT;

typedef void (*glTexStorage3DEXT_function)(GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth);
glTexStorage3DEXT_function glTexStorage3DEXT;
#define GL_EXT_texture_swizzle 1
#define GL_TEXTURE_SWIZZLE_R_EXT 0x8E42
#define GL_TEXTURE_SWIZZLE_G_EXT 0x8E43
#define GL_TEXTURE_SWIZZLE_B_EXT 0x8E44
#define GL_TEXTURE_SWIZZLE_A_EXT 0x8E45
#define GL_TEXTURE_SWIZZLE_RGBA_EXT 0x8E46
#define GL_EXT_timer_query 1
#define GL_TIME_ELAPSED_EXT 0x88BF

typedef void (*glGetQueryObjecti64vEXT_function)(GLuint id, GLenum pname, GLint64 *params);
glGetQueryObjecti64vEXT_function glGetQueryObjecti64vEXT;

typedef void (*glGetQueryObjectui64vEXT_function)(GLuint id, GLenum pname, GLuint64 *params);
glGetQueryObjectui64vEXT_function glGetQueryObjectui64vEXT;
#define GL_EXT_transform_feedback 1
#define GL_TRANSFORM_FEEDBACK_BUFFER_EXT 0x8C8E
#define GL_TRANSFORM_FEEDBACK_BUFFER_START_EXT 0x8C84
#define GL_TRANSFORM_FEEDBACK_BUFFER_SIZE_EXT 0x8C85
#define GL_TRANSFORM_FEEDBACK_BUFFER_BINDING_EXT 0x8C8F
#define GL_INTERLEAVED_ATTRIBS_EXT 0x8C8C
#define GL_SEPARATE_ATTRIBS_EXT 0x8C8D
#define GL_PRIMITIVES_GENERATED_EXT 0x8C87
#define GL_TRANSFORM_FEEDBACK_PRIMITIVES_WRITTEN_EXT 0x8C88
#define GL_RASTERIZER_DISCARD_EXT 0x8C89
#define GL_MAX_TRANSFORM_FEEDBACK_INTERLEAVED_COMPONENTS_EXT 0x8C8A
#define GL_MAX_TRANSFORM_FEEDBACK_SEPARATE_ATTRIBS_EXT 0x8C8B
#define GL_MAX_TRANSFORM_FEEDBACK_SEPARATE_COMPONENTS_EXT 0x8C80
#define GL_TRANSFORM_FEEDBACK_VARYINGS_EXT 0x8C83
#define GL_TRANSFORM_FEEDBACK_BUFFER_MODE_EXT 0x8C7F
#define GL_TRANSFORM_FEEDBACK_VARYING_MAX_LENGTH_EXT 0x8C76

typedef void (*glBeginTransformFeedbackEXT_function)(GLenum primitiveMode);
glBeginTransformFeedbackEXT_function glBeginTransformFeedbackEXT;

typedef void (*glEndTransformFeedbackEXT_function)();
glEndTransformFeedbackEXT_function glEndTransformFeedbackEXT;

typedef void (*glBindBufferRangeEXT_function)(GLenum target, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size);
glBindBufferRangeEXT_function glBindBufferRangeEXT;

typedef void (*glBindBufferOffsetEXT_function)(GLenum target, GLuint index, GLuint buffer, GLintptr offset);
glBindBufferOffsetEXT_function glBindBufferOffsetEXT;

typedef void (*glBindBufferBaseEXT_function)(GLenum target, GLuint index, GLuint buffer);
glBindBufferBaseEXT_function glBindBufferBaseEXT;

typedef void (*glTransformFeedbackVaryingsEXT_function)(GLuint program, GLsizei count, GLchar **varyings, GLenum bufferMode);
glTransformFeedbackVaryingsEXT_function glTransformFeedbackVaryingsEXT;

typedef void (*glGetTransformFeedbackVaryingEXT_function)(GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLsizei *size, GLenum *type, GLchar *name);
glGetTransformFeedbackVaryingEXT_function glGetTransformFeedbackVaryingEXT;

typedef void (*glArrayElementEXT_function)(GLint i);
glArrayElementEXT_function glArrayElementEXT;

typedef void (*glColorPointerEXT_function)(GLint size, GLenum type, GLsizei stride, GLsizei count, void * pointer);
glColorPointerEXT_function glColorPointerEXT;

typedef void (*glDrawArraysEXT_function)(GLenum mode, GLint first, GLsizei count);
glDrawArraysEXT_function glDrawArraysEXT;

typedef void (*glEdgeFlagPointerEXT_function)(GLsizei stride, GLsizei count, GLboolean *pointer);
glEdgeFlagPointerEXT_function glEdgeFlagPointerEXT;

typedef void (*glGetPointervEXT_function)(GLenum pname, void * *params);
glGetPointervEXT_function glGetPointervEXT;

typedef void (*glIndexPointerEXT_function)(GLenum type, GLsizei stride, GLsizei count, void * pointer);
glIndexPointerEXT_function glIndexPointerEXT;

typedef void (*glNormalPointerEXT_function)(GLenum type, GLsizei stride, GLsizei count, void * pointer);
glNormalPointerEXT_function glNormalPointerEXT;

typedef void (*glTexCoordPointerEXT_function)(GLint size, GLenum type, GLsizei stride, GLsizei count, void * pointer);
glTexCoordPointerEXT_function glTexCoordPointerEXT;

typedef void (*glVertexPointerEXT_function)(GLint size, GLenum type, GLsizei stride, GLsizei count, void * pointer);
glVertexPointerEXT_function glVertexPointerEXT;
#define GL_EXT_vertex_array_bgra 1
#define GL_EXT_vertex_attrib_64bit 1
#define GL_DOUBLE_VEC2_EXT 0x8FFC
#define GL_DOUBLE_VEC3_EXT 0x8FFD
#define GL_DOUBLE_VEC4_EXT 0x8FFE
#define GL_DOUBLE_MAT2_EXT 0x8F46
#define GL_DOUBLE_MAT3_EXT 0x8F47
#define GL_DOUBLE_MAT4_EXT 0x8F48
#define GL_DOUBLE_MAT2x3_EXT 0x8F49
#define GL_DOUBLE_MAT2x4_EXT 0x8F4A
#define GL_DOUBLE_MAT3x2_EXT 0x8F4B
#define GL_DOUBLE_MAT3x4_EXT 0x8F4C
#define GL_DOUBLE_MAT4x2_EXT 0x8F4D
#define GL_DOUBLE_MAT4x3_EXT 0x8F4E

typedef void (*glVertexAttribL1dEXT_function)(GLuint index, GLdouble x);
glVertexAttribL1dEXT_function glVertexAttribL1dEXT;

typedef void (*glVertexAttribL2dEXT_function)(GLuint index, GLdouble x, GLdouble y);
glVertexAttribL2dEXT_function glVertexAttribL2dEXT;

typedef void (*glVertexAttribL3dEXT_function)(GLuint index, GLdouble x, GLdouble y, GLdouble z);
glVertexAttribL3dEXT_function glVertexAttribL3dEXT;

typedef void (*glVertexAttribL4dEXT_function)(GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
glVertexAttribL4dEXT_function glVertexAttribL4dEXT;

typedef void (*glVertexAttribL1dvEXT_function)(GLuint index, GLdouble *v);
glVertexAttribL1dvEXT_function glVertexAttribL1dvEXT;

typedef void (*glVertexAttribL2dvEXT_function)(GLuint index, GLdouble *v);
glVertexAttribL2dvEXT_function glVertexAttribL2dvEXT;

typedef void (*glVertexAttribL3dvEXT_function)(GLuint index, GLdouble *v);
glVertexAttribL3dvEXT_function glVertexAttribL3dvEXT;

typedef void (*glVertexAttribL4dvEXT_function)(GLuint index, GLdouble *v);
glVertexAttribL4dvEXT_function glVertexAttribL4dvEXT;

typedef void (*glVertexAttribLPointerEXT_function)(GLuint index, GLint size, GLenum type, GLsizei stride, void * pointer);
glVertexAttribLPointerEXT_function glVertexAttribLPointerEXT;

typedef void (*glGetVertexAttribLdvEXT_function)(GLuint index, GLenum pname, GLdouble *params);
glGetVertexAttribLdvEXT_function glGetVertexAttribLdvEXT;
#define GL_EXT_vertex_shader 1
#define GL_VERTEX_SHADER_EXT 0x8780
#define GL_VERTEX_SHADER_BINDING_EXT 0x8781
#define GL_OP_INDEX_EXT 0x8782
#define GL_OP_NEGATE_EXT 0x8783
#define GL_OP_DOT3_EXT 0x8784
#define GL_OP_DOT4_EXT 0x8785
#define GL_OP_MUL_EXT 0x8786
#define GL_OP_ADD_EXT 0x8787
#define GL_OP_MADD_EXT 0x8788
#define GL_OP_FRAC_EXT 0x8789
#define GL_OP_MAX_EXT 0x878A
#define GL_OP_MIN_EXT 0x878B
#define GL_OP_SET_GE_EXT 0x878C
#define GL_OP_SET_LT_EXT 0x878D
#define GL_OP_CLAMP_EXT 0x878E
#define GL_OP_FLOOR_EXT 0x878F
#define GL_OP_ROUND_EXT 0x8790
#define GL_OP_EXP_BASE_2_EXT 0x8791
#define GL_OP_LOG_BASE_2_EXT 0x8792
#define GL_OP_POWER_EXT 0x8793
#define GL_OP_RECIP_EXT 0x8794
#define GL_OP_RECIP_SQRT_EXT 0x8795
#define GL_OP_SUB_EXT 0x8796
#define GL_OP_CROSS_PRODUCT_EXT 0x8797
#define GL_OP_MULTIPLY_MATRIX_EXT 0x8798
#define GL_OP_MOV_EXT 0x8799
#define GL_OUTPUT_VERTEX_EXT 0x879A
#define GL_OUTPUT_COLOR0_EXT 0x879B
#define GL_OUTPUT_COLOR1_EXT 0x879C
#define GL_OUTPUT_TEXTURE_COORD0_EXT 0x879D
#define GL_OUTPUT_TEXTURE_COORD1_EXT 0x879E
#define GL_OUTPUT_TEXTURE_COORD2_EXT 0x879F
#define GL_OUTPUT_TEXTURE_COORD3_EXT 0x87A0
#define GL_OUTPUT_TEXTURE_COORD4_EXT 0x87A1
#define GL_OUTPUT_TEXTURE_COORD5_EXT 0x87A2
#define GL_OUTPUT_TEXTURE_COORD6_EXT 0x87A3
#define GL_OUTPUT_TEXTURE_COORD7_EXT 0x87A4
#define GL_OUTPUT_TEXTURE_COORD8_EXT 0x87A5
#define GL_OUTPUT_TEXTURE_COORD9_EXT 0x87A6
#define GL_OUTPUT_TEXTURE_COORD10_EXT 0x87A7
#define GL_OUTPUT_TEXTURE_COORD11_EXT 0x87A8
#define GL_OUTPUT_TEXTURE_COORD12_EXT 0x87A9
#define GL_OUTPUT_TEXTURE_COORD13_EXT 0x87AA
#define GL_OUTPUT_TEXTURE_COORD14_EXT 0x87AB
#define GL_OUTPUT_TEXTURE_COORD15_EXT 0x87AC
#define GL_OUTPUT_TEXTURE_COORD16_EXT 0x87AD
#define GL_OUTPUT_TEXTURE_COORD17_EXT 0x87AE
#define GL_OUTPUT_TEXTURE_COORD18_EXT 0x87AF
#define GL_OUTPUT_TEXTURE_COORD19_EXT 0x87B0
#define GL_OUTPUT_TEXTURE_COORD20_EXT 0x87B1
#define GL_OUTPUT_TEXTURE_COORD21_EXT 0x87B2
#define GL_OUTPUT_TEXTURE_COORD22_EXT 0x87B3
#define GL_OUTPUT_TEXTURE_COORD23_EXT 0x87B4
#define GL_OUTPUT_TEXTURE_COORD24_EXT 0x87B5
#define GL_OUTPUT_TEXTURE_COORD25_EXT 0x87B6
#define GL_OUTPUT_TEXTURE_COORD26_EXT 0x87B7
#define GL_OUTPUT_TEXTURE_COORD27_EXT 0x87B8
#define GL_OUTPUT_TEXTURE_COORD28_EXT 0x87B9
#define GL_OUTPUT_TEXTURE_COORD29_EXT 0x87BA
#define GL_OUTPUT_TEXTURE_COORD30_EXT 0x87BB
#define GL_OUTPUT_TEXTURE_COORD31_EXT 0x87BC
#define GL_OUTPUT_FOG_EXT 0x87BD
#define GL_SCALAR_EXT 0x87BE
#define GL_VECTOR_EXT 0x87BF
#define GL_MATRIX_EXT 0x87C0
#define GL_VARIANT_EXT 0x87C1
#define GL_INVARIANT_EXT 0x87C2
#define GL_LOCAL_CONSTANT_EXT 0x87C3
#define GL_LOCAL_EXT 0x87C4
#define GL_MAX_VERTEX_SHADER_INSTRUCTIONS_EXT 0x87C5
#define GL_MAX_VERTEX_SHADER_VARIANTS_EXT 0x87C6
#define GL_MAX_VERTEX_SHADER_INVARIANTS_EXT 0x87C7
#define GL_MAX_VERTEX_SHADER_LOCAL_CONSTANTS_EXT 0x87C8
#define GL_MAX_VERTEX_SHADER_LOCALS_EXT 0x87C9
#define GL_MAX_OPTIMIZED_VERTEX_SHADER_INSTRUCTIONS_EXT 0x87CA
#define GL_MAX_OPTIMIZED_VERTEX_SHADER_VARIANTS_EXT 0x87CB
#define GL_MAX_OPTIMIZED_VERTEX_SHADER_LOCAL_CONSTANTS_EXT 0x87CC
#define GL_MAX_OPTIMIZED_VERTEX_SHADER_INVARIANTS_EXT 0x87CD
#define GL_MAX_OPTIMIZED_VERTEX_SHADER_LOCALS_EXT 0x87CE
#define GL_VERTEX_SHADER_INSTRUCTIONS_EXT 0x87CF
#define GL_VERTEX_SHADER_VARIANTS_EXT 0x87D0
#define GL_VERTEX_SHADER_INVARIANTS_EXT 0x87D1
#define GL_VERTEX_SHADER_LOCAL_CONSTANTS_EXT 0x87D2
#define GL_VERTEX_SHADER_LOCALS_EXT 0x87D3
#define GL_VERTEX_SHADER_OPTIMIZED_EXT 0x87D4
#define GL_X_EXT 0x87D5
#define GL_Y_EXT 0x87D6
#define GL_Z_EXT 0x87D7
#define GL_W_EXT 0x87D8
#define GL_NEGATIVE_X_EXT 0x87D9
#define GL_NEGATIVE_Y_EXT 0x87DA
#define GL_NEGATIVE_Z_EXT 0x87DB
#define GL_NEGATIVE_W_EXT 0x87DC
#define GL_ZERO_EXT 0x87DD
#define GL_ONE_EXT 0x87DE
#define GL_NEGATIVE_ONE_EXT 0x87DF
#define GL_NORMALIZED_RANGE_EXT 0x87E0
#define GL_FULL_RANGE_EXT 0x87E1
#define GL_CURRENT_VERTEX_EXT 0x87E2
#define GL_MVP_MATRIX_EXT 0x87E3
#define GL_VARIANT_VALUE_EXT 0x87E4
#define GL_VARIANT_DATATYPE_EXT 0x87E5
#define GL_VARIANT_ARRAY_STRIDE_EXT 0x87E6
#define GL_VARIANT_ARRAY_TYPE_EXT 0x87E7
#define GL_VARIANT_ARRAY_EXT 0x87E8
#define GL_VARIANT_ARRAY_POINTER_EXT 0x87E9
#define GL_INVARIANT_VALUE_EXT 0x87EA
#define GL_INVARIANT_DATATYPE_EXT 0x87EB
#define GL_LOCAL_CONSTANT_VALUE_EXT 0x87EC
#define GL_LOCAL_CONSTANT_DATATYPE_EXT 0x87ED

typedef void (*glBeginVertexShaderEXT_function)();
glBeginVertexShaderEXT_function glBeginVertexShaderEXT;

typedef void (*glEndVertexShaderEXT_function)();
glEndVertexShaderEXT_function glEndVertexShaderEXT;

typedef void (*glBindVertexShaderEXT_function)(GLuint id);
glBindVertexShaderEXT_function glBindVertexShaderEXT;

typedef GLuint  (*glGenVertexShadersEXT_function)(GLuint range);
glGenVertexShadersEXT_function glGenVertexShadersEXT;

typedef void (*glDeleteVertexShaderEXT_function)(GLuint id);
glDeleteVertexShaderEXT_function glDeleteVertexShaderEXT;

typedef void (*glShaderOp1EXT_function)(GLenum op, GLuint res, GLuint arg1);
glShaderOp1EXT_function glShaderOp1EXT;

typedef void (*glShaderOp2EXT_function)(GLenum op, GLuint res, GLuint arg1, GLuint arg2);
glShaderOp2EXT_function glShaderOp2EXT;

typedef void (*glShaderOp3EXT_function)(GLenum op, GLuint res, GLuint arg1, GLuint arg2, GLuint arg3);
glShaderOp3EXT_function glShaderOp3EXT;

typedef void (*glSwizzleEXT_function)(GLuint res, GLuint in, GLenum outX, GLenum outY, GLenum outZ, GLenum outW);
glSwizzleEXT_function glSwizzleEXT;

typedef void (*glWriteMaskEXT_function)(GLuint res, GLuint in, GLenum outX, GLenum outY, GLenum outZ, GLenum outW);
glWriteMaskEXT_function glWriteMaskEXT;

typedef void (*glInsertComponentEXT_function)(GLuint res, GLuint src, GLuint num);
glInsertComponentEXT_function glInsertComponentEXT;

typedef void (*glExtractComponentEXT_function)(GLuint res, GLuint src, GLuint num);
glExtractComponentEXT_function glExtractComponentEXT;

typedef GLuint  (*glGenSymbolsEXT_function)(GLenum datatype, GLenum storagetype, GLenum range, GLuint components);
glGenSymbolsEXT_function glGenSymbolsEXT;

typedef void (*glSetInvariantEXT_function)(GLuint id, GLenum type, void * addr);
glSetInvariantEXT_function glSetInvariantEXT;

typedef void (*glSetLocalConstantEXT_function)(GLuint id, GLenum type, void * addr);
glSetLocalConstantEXT_function glSetLocalConstantEXT;

typedef void (*glVariantbvEXT_function)(GLuint id, GLbyte *addr);
glVariantbvEXT_function glVariantbvEXT;

typedef void (*glVariantsvEXT_function)(GLuint id, GLshort *addr);
glVariantsvEXT_function glVariantsvEXT;

typedef void (*glVariantivEXT_function)(GLuint id, GLint *addr);
glVariantivEXT_function glVariantivEXT;

typedef void (*glVariantfvEXT_function)(GLuint id, GLfloat *addr);
glVariantfvEXT_function glVariantfvEXT;

typedef void (*glVariantdvEXT_function)(GLuint id, GLdouble *addr);
glVariantdvEXT_function glVariantdvEXT;

typedef void (*glVariantubvEXT_function)(GLuint id, GLubyte *addr);
glVariantubvEXT_function glVariantubvEXT;

typedef void (*glVariantusvEXT_function)(GLuint id, GLushort *addr);
glVariantusvEXT_function glVariantusvEXT;

typedef void (*glVariantuivEXT_function)(GLuint id, GLuint *addr);
glVariantuivEXT_function glVariantuivEXT;

typedef void (*glVariantPointerEXT_function)(GLuint id, GLenum type, GLuint stride, void * addr);
glVariantPointerEXT_function glVariantPointerEXT;

typedef void (*glEnableVariantClientStateEXT_function)(GLuint id);
glEnableVariantClientStateEXT_function glEnableVariantClientStateEXT;

typedef void (*glDisableVariantClientStateEXT_function)(GLuint id);
glDisableVariantClientStateEXT_function glDisableVariantClientStateEXT;

typedef GLuint  (*glBindLightParameterEXT_function)(GLenum light, GLenum value);
glBindLightParameterEXT_function glBindLightParameterEXT;

typedef GLuint  (*glBindMaterialParameterEXT_function)(GLenum face, GLenum value);
glBindMaterialParameterEXT_function glBindMaterialParameterEXT;

typedef GLuint  (*glBindTexGenParameterEXT_function)(GLenum unit, GLenum coord, GLenum value);
glBindTexGenParameterEXT_function glBindTexGenParameterEXT;

typedef GLuint  (*glBindTextureUnitParameterEXT_function)(GLenum unit, GLenum value);
glBindTextureUnitParameterEXT_function glBindTextureUnitParameterEXT;

typedef GLuint  (*glBindParameterEXT_function)(GLenum value);
glBindParameterEXT_function glBindParameterEXT;

typedef GLboolean  (*glIsVariantEnabledEXT_function)(GLuint id, GLenum cap);
glIsVariantEnabledEXT_function glIsVariantEnabledEXT;

typedef void (*glGetVariantBooleanvEXT_function)(GLuint id, GLenum value, GLboolean *data);
glGetVariantBooleanvEXT_function glGetVariantBooleanvEXT;

typedef void (*glGetVariantIntegervEXT_function)(GLuint id, GLenum value, GLint *data);
glGetVariantIntegervEXT_function glGetVariantIntegervEXT;

typedef void (*glGetVariantFloatvEXT_function)(GLuint id, GLenum value, GLfloat *data);
glGetVariantFloatvEXT_function glGetVariantFloatvEXT;

typedef void (*glGetVariantPointervEXT_function)(GLuint id, GLenum value, void * *data);
glGetVariantPointervEXT_function glGetVariantPointervEXT;

typedef void (*glGetInvariantBooleanvEXT_function)(GLuint id, GLenum value, GLboolean *data);
glGetInvariantBooleanvEXT_function glGetInvariantBooleanvEXT;

typedef void (*glGetInvariantIntegervEXT_function)(GLuint id, GLenum value, GLint *data);
glGetInvariantIntegervEXT_function glGetInvariantIntegervEXT;

typedef void (*glGetInvariantFloatvEXT_function)(GLuint id, GLenum value, GLfloat *data);
glGetInvariantFloatvEXT_function glGetInvariantFloatvEXT;

typedef void (*glGetLocalConstantBooleanvEXT_function)(GLuint id, GLenum value, GLboolean *data);
glGetLocalConstantBooleanvEXT_function glGetLocalConstantBooleanvEXT;

typedef void (*glGetLocalConstantIntegervEXT_function)(GLuint id, GLenum value, GLint *data);
glGetLocalConstantIntegervEXT_function glGetLocalConstantIntegervEXT;

typedef void (*glGetLocalConstantFloatvEXT_function)(GLuint id, GLenum value, GLfloat *data);
glGetLocalConstantFloatvEXT_function glGetLocalConstantFloatvEXT;
#define GL_EXT_vertex_weighting 1
#define GL_MODELVIEW0_STACK_DEPTH_EXT 0x0BA3
#define GL_MODELVIEW1_STACK_DEPTH_EXT 0x8502
#define GL_MODELVIEW0_MATRIX_EXT 0x0BA6
#define GL_MODELVIEW1_MATRIX_EXT 0x8506
#define GL_VERTEX_WEIGHTING_EXT 0x8509
#define GL_MODELVIEW0_EXT 0x1700
#define GL_MODELVIEW1_EXT 0x850A
#define GL_CURRENT_VERTEX_WEIGHT_EXT 0x850B
#define GL_VERTEX_WEIGHT_ARRAY_EXT 0x850C
#define GL_VERTEX_WEIGHT_ARRAY_SIZE_EXT 0x850D
#define GL_VERTEX_WEIGHT_ARRAY_TYPE_EXT 0x850E
#define GL_VERTEX_WEIGHT_ARRAY_STRIDE_EXT 0x850F
#define GL_VERTEX_WEIGHT_ARRAY_POINTER_EXT 0x8510

typedef void (*glVertexWeightfEXT_function)(GLfloat weight);
glVertexWeightfEXT_function glVertexWeightfEXT;

typedef void (*glVertexWeightfvEXT_function)(GLfloat *weight);
glVertexWeightfvEXT_function glVertexWeightfvEXT;

typedef void (*glVertexWeightPointerEXT_function)(GLint size, GLenum type, GLsizei stride, void * pointer);
glVertexWeightPointerEXT_function glVertexWeightPointerEXT;
#define GL_EXT_win32_keyed_mutex 1

typedef GLboolean  (*glAcquireKeyedMutexWin32EXT_function)(GLuint memory, GLuint64 key, GLuint timeout);
glAcquireKeyedMutexWin32EXT_function glAcquireKeyedMutexWin32EXT;

typedef GLboolean  (*glReleaseKeyedMutexWin32EXT_function)(GLuint memory, GLuint64 key);
glReleaseKeyedMutexWin32EXT_function glReleaseKeyedMutexWin32EXT;
#define GL_EXT_window_rectangles 1
#define GL_INCLUSIVE_EXT 0x8F10
#define GL_EXCLUSIVE_EXT 0x8F11
#define GL_WINDOW_RECTANGLE_EXT 0x8F12
#define GL_WINDOW_RECTANGLE_MODE_EXT 0x8F13
#define GL_MAX_WINDOW_RECTANGLES_EXT 0x8F14
#define GL_NUM_WINDOW_RECTANGLES_EXT 0x8F15

typedef void (*glWindowRectanglesEXT_function)(GLenum mode, GLsizei count, GLint *box);
glWindowRectanglesEXT_function glWindowRectanglesEXT;
#define GL_EXT_x11_sync_object 1
#define GL_SYNC_X11_FENCE_EXT 0x90E1

typedef GLsync  (*glImportSyncEXT_function)(GLenum external_sync_type, GLintptr external_sync, GLbitfield flags);
glImportSyncEXT_function glImportSyncEXT;
#define GL_GREMEDY_frame_terminator 1

typedef void (*glFrameTerminatorGREMEDY_function)();
glFrameTerminatorGREMEDY_function glFrameTerminatorGREMEDY;
#define GL_GREMEDY_string_marker 1

typedef void (*glStringMarkerGREMEDY_function)(GLsizei len, void * string);
glStringMarkerGREMEDY_function glStringMarkerGREMEDY;
#define GL_HP_convolution_border_modes 1
#define GL_IGNORE_BORDER_HP 0x8150
#define GL_CONSTANT_BORDER_HP 0x8151
#define GL_REPLICATE_BORDER_HP 0x8153
#define GL_CONVOLUTION_BORDER_COLOR_HP 0x8154
#define GL_HP_image_transform 1
#define GL_IMAGE_SCALE_X_HP 0x8155
#define GL_IMAGE_SCALE_Y_HP 0x8156
#define GL_IMAGE_TRANSLATE_X_HP 0x8157
#define GL_IMAGE_TRANSLATE_Y_HP 0x8158
#define GL_IMAGE_ROTATE_ANGLE_HP 0x8159
#define GL_IMAGE_ROTATE_ORIGIN_X_HP 0x815A
#define GL_IMAGE_ROTATE_ORIGIN_Y_HP 0x815B
#define GL_IMAGE_MAG_FILTER_HP 0x815C
#define GL_IMAGE_MIN_FILTER_HP 0x815D
#define GL_IMAGE_CUBIC_WEIGHT_HP 0x815E
#define GL_CUBIC_HP 0x815F
#define GL_AVERAGE_HP 0x8160
#define GL_IMAGE_TRANSFORM_2D_HP 0x8161
#define GL_POST_IMAGE_TRANSFORM_COLOR_TABLE_HP 0x8162
#define GL_PROXY_POST_IMAGE_TRANSFORM_COLOR_TABLE_HP 0x8163

typedef void (*glImageTransformParameteriHP_function)(GLenum target, GLenum pname, GLint param);
glImageTransformParameteriHP_function glImageTransformParameteriHP;

typedef void (*glImageTransformParameterfHP_function)(GLenum target, GLenum pname, GLfloat param);
glImageTransformParameterfHP_function glImageTransformParameterfHP;

typedef void (*glImageTransformParameterivHP_function)(GLenum target, GLenum pname, GLint *params);
glImageTransformParameterivHP_function glImageTransformParameterivHP;

typedef void (*glImageTransformParameterfvHP_function)(GLenum target, GLenum pname, GLfloat *params);
glImageTransformParameterfvHP_function glImageTransformParameterfvHP;

typedef void (*glGetImageTransformParameterivHP_function)(GLenum target, GLenum pname, GLint *params);
glGetImageTransformParameterivHP_function glGetImageTransformParameterivHP;

typedef void (*glGetImageTransformParameterfvHP_function)(GLenum target, GLenum pname, GLfloat *params);
glGetImageTransformParameterfvHP_function glGetImageTransformParameterfvHP;
#define GL_HP_occlusion_test 1
#define GL_OCCLUSION_TEST_HP 0x8165
#define GL_OCCLUSION_TEST_RESULT_HP 0x8166
#define GL_HP_texture_lighting 1
#define GL_TEXTURE_LIGHTING_MODE_HP 0x8167
#define GL_TEXTURE_POST_SPECULAR_HP 0x8168
#define GL_TEXTURE_PRE_SPECULAR_HP 0x8169
#define GL_IBM_cull_vertex 1
#define GL_CULL_VERTEX_IBM 103050
#define GL_IBM_multimode_draw_arrays 1

typedef void (*glMultiModeDrawArraysIBM_function)(GLenum *mode, GLint *first, GLsizei *count, GLsizei primcount, GLint modestride);
glMultiModeDrawArraysIBM_function glMultiModeDrawArraysIBM;

typedef void (*glMultiModeDrawElementsIBM_function)(GLenum *mode, GLsizei *count, GLenum type, void * *indices, GLsizei primcount, GLint modestride);
glMultiModeDrawElementsIBM_function glMultiModeDrawElementsIBM;
#define GL_IBM_rasterpos_clip 1
#define GL_RASTER_POSITION_UNCLIPPED_IBM 0x19262
#define GL_IBM_static_data 1
#define GL_ALL_STATIC_DATA_IBM 103060
#define GL_STATIC_VERTEX_ARRAY_IBM 103061

typedef void (*glFlushStaticDataIBM_function)(GLenum target);
glFlushStaticDataIBM_function glFlushStaticDataIBM;
#define GL_IBM_texture_mirrored_repeat 1
#define GL_MIRRORED_REPEAT_IBM 0x8370
#define GL_IBM_vertex_array_lists 1
#define GL_VERTEX_ARRAY_LIST_IBM 103070
#define GL_NORMAL_ARRAY_LIST_IBM 103071
#define GL_COLOR_ARRAY_LIST_IBM 103072
#define GL_INDEX_ARRAY_LIST_IBM 103073
#define GL_TEXTURE_COORD_ARRAY_LIST_IBM 103074
#define GL_EDGE_FLAG_ARRAY_LIST_IBM 103075
#define GL_FOG_COORDINATE_ARRAY_LIST_IBM 103076
#define GL_SECONDARY_COLOR_ARRAY_LIST_IBM 103077
#define GL_VERTEX_ARRAY_LIST_STRIDE_IBM 103080
#define GL_NORMAL_ARRAY_LIST_STRIDE_IBM 103081
#define GL_COLOR_ARRAY_LIST_STRIDE_IBM 103082
#define GL_INDEX_ARRAY_LIST_STRIDE_IBM 103083
#define GL_TEXTURE_COORD_ARRAY_LIST_STRIDE_IBM 103084
#define GL_EDGE_FLAG_ARRAY_LIST_STRIDE_IBM 103085
#define GL_FOG_COORDINATE_ARRAY_LIST_STRIDE_IBM 103086
#define GL_SECONDARY_COLOR_ARRAY_LIST_STRIDE_IBM 103087

typedef void (*glColorPointerListIBM_function)(GLint size, GLenum type, GLint stride, void * *pointer, GLint ptrstride);
glColorPointerListIBM_function glColorPointerListIBM;

typedef void (*glSecondaryColorPointerListIBM_function)(GLint size, GLenum type, GLint stride, void * *pointer, GLint ptrstride);
glSecondaryColorPointerListIBM_function glSecondaryColorPointerListIBM;

typedef void (*glEdgeFlagPointerListIBM_function)(GLint stride, GLboolean **pointer, GLint ptrstride);
glEdgeFlagPointerListIBM_function glEdgeFlagPointerListIBM;

typedef void (*glFogCoordPointerListIBM_function)(GLenum type, GLint stride, void * *pointer, GLint ptrstride);
glFogCoordPointerListIBM_function glFogCoordPointerListIBM;

typedef void (*glIndexPointerListIBM_function)(GLenum type, GLint stride, void * *pointer, GLint ptrstride);
glIndexPointerListIBM_function glIndexPointerListIBM;

typedef void (*glNormalPointerListIBM_function)(GLenum type, GLint stride, void * *pointer, GLint ptrstride);
glNormalPointerListIBM_function glNormalPointerListIBM;

typedef void (*glTexCoordPointerListIBM_function)(GLint size, GLenum type, GLint stride, void * *pointer, GLint ptrstride);
glTexCoordPointerListIBM_function glTexCoordPointerListIBM;

typedef void (*glVertexPointerListIBM_function)(GLint size, GLenum type, GLint stride, void * *pointer, GLint ptrstride);
glVertexPointerListIBM_function glVertexPointerListIBM;
#define GL_INGR_blend_func_separate 1

typedef void (*glBlendFuncSeparateINGR_function)(GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha);
glBlendFuncSeparateINGR_function glBlendFuncSeparateINGR;
#define GL_INGR_color_clamp 1
#define GL_RED_MIN_CLAMP_INGR 0x8560
#define GL_GREEN_MIN_CLAMP_INGR 0x8561
#define GL_BLUE_MIN_CLAMP_INGR 0x8562
#define GL_ALPHA_MIN_CLAMP_INGR 0x8563
#define GL_RED_MAX_CLAMP_INGR 0x8564
#define GL_GREEN_MAX_CLAMP_INGR 0x8565
#define GL_BLUE_MAX_CLAMP_INGR 0x8566
#define GL_ALPHA_MAX_CLAMP_INGR 0x8567
#define GL_INGR_interlace_read 1
#define GL_INTERLACE_READ_INGR 0x8568
#define GL_INTEL_blackhole_render 1
#define GL_BLACKHOLE_RENDER_INTEL 0x83FC
#define GL_INTEL_conservative_rasterization 1
#define GL_CONSERVATIVE_RASTERIZATION_INTEL 0x83FE
#define GL_INTEL_fragment_shader_ordering 1
#define GL_INTEL_framebuffer_CMAA 1

typedef void (*glApplyFramebufferAttachmentCMAAINTEL_function)();
glApplyFramebufferAttachmentCMAAINTEL_function glApplyFramebufferAttachmentCMAAINTEL;
#define GL_INTEL_map_texture 1
#define GL_TEXTURE_MEMORY_LAYOUT_INTEL 0x83FF
#define GL_LAYOUT_DEFAULT_INTEL 0
#define GL_LAYOUT_LINEAR_INTEL 1
#define GL_LAYOUT_LINEAR_CPU_CACHED_INTEL 2

typedef void (*glSyncTextureINTEL_function)(GLuint texture);
glSyncTextureINTEL_function glSyncTextureINTEL;

typedef void (*glUnmapTexture2DINTEL_function)(GLuint texture, GLint level);
glUnmapTexture2DINTEL_function glUnmapTexture2DINTEL;

typedef void *  (*glMapTexture2DINTEL_function)(GLuint texture, GLint level, GLbitfield access, GLint *stride, GLenum *layout);
glMapTexture2DINTEL_function glMapTexture2DINTEL;
#define GL_INTEL_parallel_arrays 1
#define GL_PARALLEL_ARRAYS_INTEL 0x83F4
#define GL_VERTEX_ARRAY_PARALLEL_POINTERS_INTEL 0x83F5
#define GL_NORMAL_ARRAY_PARALLEL_POINTERS_INTEL 0x83F6
#define GL_COLOR_ARRAY_PARALLEL_POINTERS_INTEL 0x83F7
#define GL_TEXTURE_COORD_ARRAY_PARALLEL_POINTERS_INTEL 0x83F8

typedef void (*glVertexPointervINTEL_function)(GLint size, GLenum type, void * *pointer);
glVertexPointervINTEL_function glVertexPointervINTEL;

typedef void (*glNormalPointervINTEL_function)(GLenum type, void * *pointer);
glNormalPointervINTEL_function glNormalPointervINTEL;

typedef void (*glColorPointervINTEL_function)(GLint size, GLenum type, void * *pointer);
glColorPointervINTEL_function glColorPointervINTEL;

typedef void (*glTexCoordPointervINTEL_function)(GLint size, GLenum type, void * *pointer);
glTexCoordPointervINTEL_function glTexCoordPointervINTEL;
#define GL_INTEL_performance_query 1
#define GL_PERFQUERY_SINGLE_CONTEXT_INTEL 0x00000000
#define GL_PERFQUERY_GLOBAL_CONTEXT_INTEL 0x00000001
#define GL_PERFQUERY_WAIT_INTEL 0x83FB
#define GL_PERFQUERY_FLUSH_INTEL 0x83FA
#define GL_PERFQUERY_DONOT_FLUSH_INTEL 0x83F9
#define GL_PERFQUERY_COUNTER_EVENT_INTEL 0x94F0
#define GL_PERFQUERY_COUNTER_DURATION_NORM_INTEL 0x94F1
#define GL_PERFQUERY_COUNTER_DURATION_RAW_INTEL 0x94F2
#define GL_PERFQUERY_COUNTER_THROUGHPUT_INTEL 0x94F3
#define GL_PERFQUERY_COUNTER_RAW_INTEL 0x94F4
#define GL_PERFQUERY_COUNTER_TIMESTAMP_INTEL 0x94F5
#define GL_PERFQUERY_COUNTER_DATA_UINT32_INTEL 0x94F8
#define GL_PERFQUERY_COUNTER_DATA_UINT64_INTEL 0x94F9
#define GL_PERFQUERY_COUNTER_DATA_FLOAT_INTEL 0x94FA
#define GL_PERFQUERY_COUNTER_DATA_DOUBLE_INTEL 0x94FB
#define GL_PERFQUERY_COUNTER_DATA_BOOL32_INTEL 0x94FC
#define GL_PERFQUERY_QUERY_NAME_LENGTH_MAX_INTEL 0x94FD
#define GL_PERFQUERY_COUNTER_NAME_LENGTH_MAX_INTEL 0x94FE
#define GL_PERFQUERY_COUNTER_DESC_LENGTH_MAX_INTEL 0x94FF
#define GL_PERFQUERY_GPA_EXTENDED_COUNTERS_INTEL 0x9500

typedef void (*glBeginPerfQueryINTEL_function)(GLuint queryHandle);
glBeginPerfQueryINTEL_function glBeginPerfQueryINTEL;

typedef void (*glCreatePerfQueryINTEL_function)(GLuint queryId, GLuint *queryHandle);
glCreatePerfQueryINTEL_function glCreatePerfQueryINTEL;

typedef void (*glDeletePerfQueryINTEL_function)(GLuint queryHandle);
glDeletePerfQueryINTEL_function glDeletePerfQueryINTEL;

typedef void (*glEndPerfQueryINTEL_function)(GLuint queryHandle);
glEndPerfQueryINTEL_function glEndPerfQueryINTEL;

typedef void (*glGetFirstPerfQueryIdINTEL_function)(GLuint *queryId);
glGetFirstPerfQueryIdINTEL_function glGetFirstPerfQueryIdINTEL;

typedef void (*glGetNextPerfQueryIdINTEL_function)(GLuint queryId, GLuint *nextQueryId);
glGetNextPerfQueryIdINTEL_function glGetNextPerfQueryIdINTEL;

typedef void (*glGetPerfCounterInfoINTEL_function)(GLuint queryId, GLuint counterId, GLuint counterNameLength, GLchar *counterName, GLuint counterDescLength, GLchar *counterDesc, GLuint *counterOffset, GLuint *counterDataSize, GLuint *counterTypeEnum, GLuint *counterDataTypeEnum, GLuint64 *rawCounterMaxValue);
glGetPerfCounterInfoINTEL_function glGetPerfCounterInfoINTEL;

typedef void (*glGetPerfQueryDataINTEL_function)(GLuint queryHandle, GLuint flags, GLsizei dataSize, void * data, GLuint *bytesWritten);
glGetPerfQueryDataINTEL_function glGetPerfQueryDataINTEL;

typedef void (*glGetPerfQueryIdByNameINTEL_function)(GLchar *queryName, GLuint *queryId);
glGetPerfQueryIdByNameINTEL_function glGetPerfQueryIdByNameINTEL;

typedef void (*glGetPerfQueryInfoINTEL_function)(GLuint queryId, GLuint queryNameLength, GLchar *queryName, GLuint *dataSize, GLuint *noCounters, GLuint *noInstances, GLuint *capsMask);
glGetPerfQueryInfoINTEL_function glGetPerfQueryInfoINTEL;
#define GL_MESAX_texture_stack 1
#define GL_TEXTURE_1D_STACK_MESAX 0x8759
#define GL_TEXTURE_2D_STACK_MESAX 0x875A
#define GL_PROXY_TEXTURE_1D_STACK_MESAX 0x875B
#define GL_PROXY_TEXTURE_2D_STACK_MESAX 0x875C
#define GL_TEXTURE_1D_STACK_BINDING_MESAX 0x875D
#define GL_TEXTURE_2D_STACK_BINDING_MESAX 0x875E
#define GL_MESA_framebuffer_flip_x 1
#define GL_FRAMEBUFFER_FLIP_X_MESA 0x8BBC
#define GL_MESA_framebuffer_flip_y 1
#define GL_FRAMEBUFFER_FLIP_Y_MESA 0x8BBB

typedef void (*glFramebufferParameteriMESA_function)(GLenum target, GLenum pname, GLint param);
glFramebufferParameteriMESA_function glFramebufferParameteriMESA;

typedef void (*glGetFramebufferParameterivMESA_function)(GLenum target, GLenum pname, GLint *params);
glGetFramebufferParameterivMESA_function glGetFramebufferParameterivMESA;
#define GL_MESA_framebuffer_swap_xy 1
#define GL_FRAMEBUFFER_SWAP_XY_MESA 0x8BBD
#define GL_MESA_pack_invert 1
#define GL_PACK_INVERT_MESA 0x8758
#define GL_MESA_program_binary_formats 1
#define GL_PROGRAM_BINARY_FORMAT_MESA 0x875F
#define GL_MESA_resize_buffers 1

typedef void (*glResizeBuffersMESA_function)();
glResizeBuffersMESA_function glResizeBuffersMESA;
#define GL_MESA_shader_integer_functions 1
#define GL_MESA_tile_raster_order 1
#define GL_TILE_RASTER_ORDER_FIXED_MESA 0x8BB8
#define GL_TILE_RASTER_ORDER_INCREASING_X_MESA 0x8BB9
#define GL_TILE_RASTER_ORDER_INCREASING_Y_MESA 0x8BBA
#define GL_MESA_window_pos 1

typedef void (*glWindowPos2dMESA_function)(GLdouble x, GLdouble y);
glWindowPos2dMESA_function glWindowPos2dMESA;

typedef void (*glWindowPos2dvMESA_function)(GLdouble *v);
glWindowPos2dvMESA_function glWindowPos2dvMESA;

typedef void (*glWindowPos2fMESA_function)(GLfloat x, GLfloat y);
glWindowPos2fMESA_function glWindowPos2fMESA;

typedef void (*glWindowPos2fvMESA_function)(GLfloat *v);
glWindowPos2fvMESA_function glWindowPos2fvMESA;

typedef void (*glWindowPos2iMESA_function)(GLint x, GLint y);
glWindowPos2iMESA_function glWindowPos2iMESA;

typedef void (*glWindowPos2ivMESA_function)(GLint *v);
glWindowPos2ivMESA_function glWindowPos2ivMESA;

typedef void (*glWindowPos2sMESA_function)(GLshort x, GLshort y);
glWindowPos2sMESA_function glWindowPos2sMESA;

typedef void (*glWindowPos2svMESA_function)(GLshort *v);
glWindowPos2svMESA_function glWindowPos2svMESA;

typedef void (*glWindowPos3dMESA_function)(GLdouble x, GLdouble y, GLdouble z);
glWindowPos3dMESA_function glWindowPos3dMESA;

typedef void (*glWindowPos3dvMESA_function)(GLdouble *v);
glWindowPos3dvMESA_function glWindowPos3dvMESA;

typedef void (*glWindowPos3fMESA_function)(GLfloat x, GLfloat y, GLfloat z);
glWindowPos3fMESA_function glWindowPos3fMESA;

typedef void (*glWindowPos3fvMESA_function)(GLfloat *v);
glWindowPos3fvMESA_function glWindowPos3fvMESA;

typedef void (*glWindowPos3iMESA_function)(GLint x, GLint y, GLint z);
glWindowPos3iMESA_function glWindowPos3iMESA;

typedef void (*glWindowPos3ivMESA_function)(GLint *v);
glWindowPos3ivMESA_function glWindowPos3ivMESA;

typedef void (*glWindowPos3sMESA_function)(GLshort x, GLshort y, GLshort z);
glWindowPos3sMESA_function glWindowPos3sMESA;

typedef void (*glWindowPos3svMESA_function)(GLshort *v);
glWindowPos3svMESA_function glWindowPos3svMESA;

typedef void (*glWindowPos4dMESA_function)(GLdouble x, GLdouble y, GLdouble z, GLdouble w);
glWindowPos4dMESA_function glWindowPos4dMESA;

typedef void (*glWindowPos4dvMESA_function)(GLdouble *v);
glWindowPos4dvMESA_function glWindowPos4dvMESA;

typedef void (*glWindowPos4fMESA_function)(GLfloat x, GLfloat y, GLfloat z, GLfloat w);
glWindowPos4fMESA_function glWindowPos4fMESA;

typedef void (*glWindowPos4fvMESA_function)(GLfloat *v);
glWindowPos4fvMESA_function glWindowPos4fvMESA;

typedef void (*glWindowPos4iMESA_function)(GLint x, GLint y, GLint z, GLint w);
glWindowPos4iMESA_function glWindowPos4iMESA;

typedef void (*glWindowPos4ivMESA_function)(GLint *v);
glWindowPos4ivMESA_function glWindowPos4ivMESA;

typedef void (*glWindowPos4sMESA_function)(GLshort x, GLshort y, GLshort z, GLshort w);
glWindowPos4sMESA_function glWindowPos4sMESA;

typedef void (*glWindowPos4svMESA_function)(GLshort *v);
glWindowPos4svMESA_function glWindowPos4svMESA;
#define GL_MESA_ycbcr_texture 1
#define GL_UNSIGNED_SHORT_8_8_MESA 0x85BA
#define GL_UNSIGNED_SHORT_8_8_REV_MESA 0x85BB
#define GL_YCBCR_MESA 0x8757
#define GL_NVX_blend_equation_advanced_multi_draw_buffers 1
#define GL_NVX_conditional_render 1

typedef void (*glBeginConditionalRenderNVX_function)(GLuint id);
glBeginConditionalRenderNVX_function glBeginConditionalRenderNVX;

typedef void (*glEndConditionalRenderNVX_function)();
glEndConditionalRenderNVX_function glEndConditionalRenderNVX;
#define GL_NVX_gpu_memory_info 1
#define GL_GPU_MEMORY_INFO_DEDICATED_VIDMEM_NVX 0x9047
#define GL_GPU_MEMORY_INFO_TOTAL_AVAILABLE_MEMORY_NVX 0x9048
#define GL_GPU_MEMORY_INFO_CURRENT_AVAILABLE_VIDMEM_NVX 0x9049
#define GL_GPU_MEMORY_INFO_EVICTION_COUNT_NVX 0x904A
#define GL_GPU_MEMORY_INFO_EVICTED_MEMORY_NVX 0x904B
#define GL_NVX_gpu_multicast2 1
#define GL_UPLOAD_GPU_MASK_NVX 0x954A

typedef void (*glUploadGpuMaskNVX_function)(GLbitfield mask);
glUploadGpuMaskNVX_function glUploadGpuMaskNVX;

typedef void (*glMulticastViewportArrayvNVX_function)(GLuint gpu, GLuint first, GLsizei count, GLfloat *v);
glMulticastViewportArrayvNVX_function glMulticastViewportArrayvNVX;

typedef void (*glMulticastViewportPositionWScaleNVX_function)(GLuint gpu, GLuint index, GLfloat xcoeff, GLfloat ycoeff);
glMulticastViewportPositionWScaleNVX_function glMulticastViewportPositionWScaleNVX;

typedef void (*glMulticastScissorArrayvNVX_function)(GLuint gpu, GLuint first, GLsizei count, GLint *v);
glMulticastScissorArrayvNVX_function glMulticastScissorArrayvNVX;

typedef GLuint  (*glAsyncCopyBufferSubDataNVX_function)(GLsizei waitSemaphoreCount, GLuint *waitSemaphoreArray, GLuint64 *fenceValueArray, GLuint readGpu, GLbitfield writeGpuMask, GLuint readBuffer, GLuint writeBuffer, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size, GLsizei signalSemaphoreCount, GLuint *signalSemaphoreArray, GLuint64 *signalValueArray);
glAsyncCopyBufferSubDataNVX_function glAsyncCopyBufferSubDataNVX;

typedef GLuint  (*glAsyncCopyImageSubDataNVX_function)(GLsizei waitSemaphoreCount, GLuint *waitSemaphoreArray, GLuint64 *waitValueArray, GLuint srcGpu, GLbitfield dstGpuMask, GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, GLuint dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei srcWidth, GLsizei srcHeight, GLsizei srcDepth, GLsizei signalSemaphoreCount, GLuint *signalSemaphoreArray, GLuint64 *signalValueArray);
glAsyncCopyImageSubDataNVX_function glAsyncCopyImageSubDataNVX;
#define GL_NVX_linked_gpu_multicast 1
#define GL_LGPU_SEPARATE_STORAGE_BIT_NVX 0x0800
#define GL_MAX_LGPU_GPUS_NVX 0x92BA

typedef void (*glLGPUNamedBufferSubDataNVX_function)(GLbitfield gpuMask, GLuint buffer, GLintptr offset, GLsizeiptr size, void * data);
glLGPUNamedBufferSubDataNVX_function glLGPUNamedBufferSubDataNVX;

typedef void (*glLGPUCopyImageSubDataNVX_function)(GLuint sourceGpu, GLbitfield destinationGpuMask, GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX, GLint srxY, GLint srcZ, GLuint dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei width, GLsizei height, GLsizei depth);
glLGPUCopyImageSubDataNVX_function glLGPUCopyImageSubDataNVX;

typedef void (*glLGPUInterlockNVX_function)();
glLGPUInterlockNVX_function glLGPUInterlockNVX;
#define GL_NVX_progress_fence 1

typedef GLuint  (*glCreateProgressFenceNVX_function)();
glCreateProgressFenceNVX_function glCreateProgressFenceNVX;

typedef void (*glSignalSemaphoreui64NVX_function)(GLuint signalGpu, GLsizei fenceObjectCount, GLuint *semaphoreArray, GLuint64 *fenceValueArray);
glSignalSemaphoreui64NVX_function glSignalSemaphoreui64NVX;

typedef void (*glWaitSemaphoreui64NVX_function)(GLuint waitGpu, GLsizei fenceObjectCount, GLuint *semaphoreArray, GLuint64 *fenceValueArray);
glWaitSemaphoreui64NVX_function glWaitSemaphoreui64NVX;

typedef void (*glClientWaitSemaphoreui64NVX_function)(GLsizei fenceObjectCount, GLuint *semaphoreArray, GLuint64 *fenceValueArray);
glClientWaitSemaphoreui64NVX_function glClientWaitSemaphoreui64NVX;
#define GL_NV_alpha_to_coverage_dither_control 1
#define GL_ALPHA_TO_COVERAGE_DITHER_DEFAULT_NV 0x934D
#define GL_ALPHA_TO_COVERAGE_DITHER_ENABLE_NV 0x934E
#define GL_ALPHA_TO_COVERAGE_DITHER_DISABLE_NV 0x934F
#define GL_ALPHA_TO_COVERAGE_DITHER_MODE_NV 0x92BF

typedef void (*glAlphaToCoverageDitherControlNV_function)(GLenum mode);
glAlphaToCoverageDitherControlNV_function glAlphaToCoverageDitherControlNV;
#define GL_NV_bindless_multi_draw_indirect 1

typedef void (*glMultiDrawArraysIndirectBindlessNV_function)(GLenum mode, void * indirect, GLsizei drawCount, GLsizei stride, GLint vertexBufferCount);
glMultiDrawArraysIndirectBindlessNV_function glMultiDrawArraysIndirectBindlessNV;

typedef void (*glMultiDrawElementsIndirectBindlessNV_function)(GLenum mode, GLenum type, void * indirect, GLsizei drawCount, GLsizei stride, GLint vertexBufferCount);
glMultiDrawElementsIndirectBindlessNV_function glMultiDrawElementsIndirectBindlessNV;
#define GL_NV_bindless_multi_draw_indirect_count 1

typedef void (*glMultiDrawArraysIndirectBindlessCountNV_function)(GLenum mode, void * indirect, GLsizei drawCount, GLsizei maxDrawCount, GLsizei stride, GLint vertexBufferCount);
glMultiDrawArraysIndirectBindlessCountNV_function glMultiDrawArraysIndirectBindlessCountNV;

typedef void (*glMultiDrawElementsIndirectBindlessCountNV_function)(GLenum mode, GLenum type, void * indirect, GLsizei drawCount, GLsizei maxDrawCount, GLsizei stride, GLint vertexBufferCount);
glMultiDrawElementsIndirectBindlessCountNV_function glMultiDrawElementsIndirectBindlessCountNV;
#define GL_NV_bindless_texture 1

typedef GLuint64  (*glGetTextureHandleNV_function)(GLuint texture);
glGetTextureHandleNV_function glGetTextureHandleNV;

typedef GLuint64  (*glGetTextureSamplerHandleNV_function)(GLuint texture, GLuint sampler);
glGetTextureSamplerHandleNV_function glGetTextureSamplerHandleNV;

typedef void (*glMakeTextureHandleResidentNV_function)(GLuint64 handle);
glMakeTextureHandleResidentNV_function glMakeTextureHandleResidentNV;

typedef void (*glMakeTextureHandleNonResidentNV_function)(GLuint64 handle);
glMakeTextureHandleNonResidentNV_function glMakeTextureHandleNonResidentNV;

typedef GLuint64  (*glGetImageHandleNV_function)(GLuint texture, GLint level, GLboolean layered, GLint layer, GLenum format);
glGetImageHandleNV_function glGetImageHandleNV;

typedef void (*glMakeImageHandleResidentNV_function)(GLuint64 handle, GLenum access);
glMakeImageHandleResidentNV_function glMakeImageHandleResidentNV;

typedef void (*glMakeImageHandleNonResidentNV_function)(GLuint64 handle);
glMakeImageHandleNonResidentNV_function glMakeImageHandleNonResidentNV;

typedef void (*glUniformHandleui64NV_function)(GLint location, GLuint64 value);
glUniformHandleui64NV_function glUniformHandleui64NV;

typedef void (*glUniformHandleui64vNV_function)(GLint location, GLsizei count, GLuint64 *value);
glUniformHandleui64vNV_function glUniformHandleui64vNV;

typedef void (*glProgramUniformHandleui64NV_function)(GLuint program, GLint location, GLuint64 value);
glProgramUniformHandleui64NV_function glProgramUniformHandleui64NV;

typedef void (*glProgramUniformHandleui64vNV_function)(GLuint program, GLint location, GLsizei count, GLuint64 *values);
glProgramUniformHandleui64vNV_function glProgramUniformHandleui64vNV;

typedef GLboolean  (*glIsTextureHandleResidentNV_function)(GLuint64 handle);
glIsTextureHandleResidentNV_function glIsTextureHandleResidentNV;

typedef GLboolean  (*glIsImageHandleResidentNV_function)(GLuint64 handle);
glIsImageHandleResidentNV_function glIsImageHandleResidentNV;
#define GL_NV_blend_equation_advanced 1
#define GL_BLEND_OVERLAP_NV 0x9281
#define GL_BLEND_PREMULTIPLIED_SRC_NV 0x9280
#define GL_BLUE_NV 0x1905
#define GL_COLORBURN_NV 0x929A
#define GL_COLORDODGE_NV 0x9299
#define GL_CONJOINT_NV 0x9284
#define GL_CONTRAST_NV 0x92A1
#define GL_DARKEN_NV 0x9297
#define GL_DIFFERENCE_NV 0x929E
#define GL_DISJOINT_NV 0x9283
#define GL_DST_ATOP_NV 0x928F
#define GL_DST_IN_NV 0x928B
#define GL_DST_NV 0x9287
#define GL_DST_OUT_NV 0x928D
#define GL_DST_OVER_NV 0x9289
#define GL_EXCLUSION_NV 0x92A0
#define GL_GREEN_NV 0x1904
#define GL_HARDLIGHT_NV 0x929B
#define GL_HARDMIX_NV 0x92A9
#define GL_HSL_COLOR_NV 0x92AF
#define GL_HSL_HUE_NV 0x92AD
#define GL_HSL_LUMINOSITY_NV 0x92B0
#define GL_HSL_SATURATION_NV 0x92AE
#define GL_INVERT_OVG_NV 0x92B4
#define GL_INVERT_RGB_NV 0x92A3
#define GL_LIGHTEN_NV 0x9298
#define GL_LINEARBURN_NV 0x92A5
#define GL_LINEARDODGE_NV 0x92A4
#define GL_LINEARLIGHT_NV 0x92A7
#define GL_MINUS_CLAMPED_NV 0x92B3
#define GL_MINUS_NV 0x929F
#define GL_MULTIPLY_NV 0x9294
#define GL_OVERLAY_NV 0x9296
#define GL_PINLIGHT_NV 0x92A8
#define GL_PLUS_CLAMPED_ALPHA_NV 0x92B2
#define GL_PLUS_CLAMPED_NV 0x92B1
#define GL_PLUS_DARKER_NV 0x9292
#define GL_PLUS_NV 0x9291
#define GL_RED_NV 0x1903
#define GL_SCREEN_NV 0x9295
#define GL_SOFTLIGHT_NV 0x929C
#define GL_SRC_ATOP_NV 0x928E
#define GL_SRC_IN_NV 0x928A
#define GL_SRC_NV 0x9286
#define GL_SRC_OUT_NV 0x928C
#define GL_SRC_OVER_NV 0x9288
#define GL_UNCORRELATED_NV 0x9282
#define GL_VIVIDLIGHT_NV 0x92A6
#define GL_XOR_NV 0x1506

typedef void (*glBlendParameteriNV_function)(GLenum pname, GLint value);
glBlendParameteriNV_function glBlendParameteriNV;

typedef void (*glBlendBarrierNV_function)();
glBlendBarrierNV_function glBlendBarrierNV;
#define GL_NV_blend_equation_advanced_coherent 1
#define GL_BLEND_ADVANCED_COHERENT_NV 0x9285
#define GL_NV_blend_minmax_factor 1
#define GL_NV_blend_square 1
#define GL_NV_clip_space_w_scaling 1
#define GL_VIEWPORT_POSITION_W_SCALE_NV 0x937C
#define GL_VIEWPORT_POSITION_W_SCALE_X_COEFF_NV 0x937D
#define GL_VIEWPORT_POSITION_W_SCALE_Y_COEFF_NV 0x937E

typedef void (*glViewportPositionWScaleNV_function)(GLuint index, GLfloat xcoeff, GLfloat ycoeff);
glViewportPositionWScaleNV_function glViewportPositionWScaleNV;
#define GL_NV_command_list 1
#define GL_TERMINATE_SEQUENCE_COMMAND_NV 0x0000
#define GL_NOP_COMMAND_NV 0x0001
#define GL_DRAW_ELEMENTS_COMMAND_NV 0x0002
#define GL_DRAW_ARRAYS_COMMAND_NV 0x0003
#define GL_DRAW_ELEMENTS_STRIP_COMMAND_NV 0x0004
#define GL_DRAW_ARRAYS_STRIP_COMMAND_NV 0x0005
#define GL_DRAW_ELEMENTS_INSTANCED_COMMAND_NV 0x0006
#define GL_DRAW_ARRAYS_INSTANCED_COMMAND_NV 0x0007
#define GL_ELEMENT_ADDRESS_COMMAND_NV 0x0008
#define GL_ATTRIBUTE_ADDRESS_COMMAND_NV 0x0009
#define GL_UNIFORM_ADDRESS_COMMAND_NV 0x000A
#define GL_BLEND_COLOR_COMMAND_NV 0x000B
#define GL_STENCIL_REF_COMMAND_NV 0x000C
#define GL_LINE_WIDTH_COMMAND_NV 0x000D
#define GL_POLYGON_OFFSET_COMMAND_NV 0x000E
#define GL_ALPHA_REF_COMMAND_NV 0x000F
#define GL_VIEWPORT_COMMAND_NV 0x0010
#define GL_SCISSOR_COMMAND_NV 0x0011
#define GL_FRONT_FACE_COMMAND_NV 0x0012

typedef void (*glCreateStatesNV_function)(GLsizei n, GLuint *states);
glCreateStatesNV_function glCreateStatesNV;

typedef void (*glDeleteStatesNV_function)(GLsizei n, GLuint *states);
glDeleteStatesNV_function glDeleteStatesNV;

typedef GLboolean  (*glIsStateNV_function)(GLuint state);
glIsStateNV_function glIsStateNV;

typedef void (*glStateCaptureNV_function)(GLuint state, GLenum mode);
glStateCaptureNV_function glStateCaptureNV;

typedef GLuint  (*glGetCommandHeaderNV_function)(GLenum tokenID, GLuint size);
glGetCommandHeaderNV_function glGetCommandHeaderNV;

typedef GLushort  (*glGetStageIndexNV_function)(GLenum shadertype);
glGetStageIndexNV_function glGetStageIndexNV;

typedef void (*glDrawCommandsNV_function)(GLenum primitiveMode, GLuint buffer, GLintptr *indirects, GLsizei *sizes, GLuint count);
glDrawCommandsNV_function glDrawCommandsNV;

typedef void (*glDrawCommandsAddressNV_function)(GLenum primitiveMode, GLuint64 *indirects, GLsizei *sizes, GLuint count);
glDrawCommandsAddressNV_function glDrawCommandsAddressNV;

typedef void (*glDrawCommandsStatesNV_function)(GLuint buffer, GLintptr *indirects, GLsizei *sizes, GLuint *states, GLuint *fbos, GLuint count);
glDrawCommandsStatesNV_function glDrawCommandsStatesNV;

typedef void (*glDrawCommandsStatesAddressNV_function)(GLuint64 *indirects, GLsizei *sizes, GLuint *states, GLuint *fbos, GLuint count);
glDrawCommandsStatesAddressNV_function glDrawCommandsStatesAddressNV;

typedef void (*glCreateCommandListsNV_function)(GLsizei n, GLuint *lists);
glCreateCommandListsNV_function glCreateCommandListsNV;

typedef void (*glDeleteCommandListsNV_function)(GLsizei n, GLuint *lists);
glDeleteCommandListsNV_function glDeleteCommandListsNV;

typedef GLboolean  (*glIsCommandListNV_function)(GLuint list);
glIsCommandListNV_function glIsCommandListNV;

typedef void (*glListDrawCommandsStatesClientNV_function)(GLuint list, GLuint segment, void * *indirects, GLsizei *sizes, GLuint *states, GLuint *fbos, GLuint count);
glListDrawCommandsStatesClientNV_function glListDrawCommandsStatesClientNV;

typedef void (*glCommandListSegmentsNV_function)(GLuint list, GLuint segments);
glCommandListSegmentsNV_function glCommandListSegmentsNV;

typedef void (*glCompileCommandListNV_function)(GLuint list);
glCompileCommandListNV_function glCompileCommandListNV;

typedef void (*glCallCommandListNV_function)(GLuint list);
glCallCommandListNV_function glCallCommandListNV;
#define GL_NV_compute_program5 1
#define GL_COMPUTE_PROGRAM_NV 0x90FB
#define GL_COMPUTE_PROGRAM_PARAMETER_BUFFER_NV 0x90FC
#define GL_NV_compute_shader_derivatives 1
#define GL_NV_conditional_render 1
#define GL_QUERY_WAIT_NV 0x8E13
#define GL_QUERY_NO_WAIT_NV 0x8E14
#define GL_QUERY_BY_REGION_WAIT_NV 0x8E15
#define GL_QUERY_BY_REGION_NO_WAIT_NV 0x8E16

typedef void (*glBeginConditionalRenderNV_function)(GLuint id, GLenum mode);
glBeginConditionalRenderNV_function glBeginConditionalRenderNV;

typedef void (*glEndConditionalRenderNV_function)();
glEndConditionalRenderNV_function glEndConditionalRenderNV;
#define GL_NV_conservative_raster 1
#define GL_CONSERVATIVE_RASTERIZATION_NV 0x9346
#define GL_SUBPIXEL_PRECISION_BIAS_X_BITS_NV 0x9347
#define GL_SUBPIXEL_PRECISION_BIAS_Y_BITS_NV 0x9348
#define GL_MAX_SUBPIXEL_PRECISION_BIAS_BITS_NV 0x9349

typedef void (*glSubpixelPrecisionBiasNV_function)(GLuint xbits, GLuint ybits);
glSubpixelPrecisionBiasNV_function glSubpixelPrecisionBiasNV;
#define GL_NV_conservative_raster_dilate 1
#define GL_CONSERVATIVE_RASTER_DILATE_NV 0x9379
#define GL_CONSERVATIVE_RASTER_DILATE_RANGE_NV 0x937A
#define GL_CONSERVATIVE_RASTER_DILATE_GRANULARITY_NV 0x937B

typedef void (*glConservativeRasterParameterfNV_function)(GLenum pname, GLfloat value);
glConservativeRasterParameterfNV_function glConservativeRasterParameterfNV;
#define GL_NV_conservative_raster_pre_snap 1
#define GL_CONSERVATIVE_RASTER_MODE_PRE_SNAP_NV 0x9550
#define GL_NV_conservative_raster_pre_snap_triangles 1
#define GL_CONSERVATIVE_RASTER_MODE_NV 0x954D
#define GL_CONSERVATIVE_RASTER_MODE_POST_SNAP_NV 0x954E
#define GL_CONSERVATIVE_RASTER_MODE_PRE_SNAP_TRIANGLES_NV 0x954F

typedef void (*glConservativeRasterParameteriNV_function)(GLenum pname, GLint param);
glConservativeRasterParameteriNV_function glConservativeRasterParameteriNV;
#define GL_NV_conservative_raster_underestimation 1
#define GL_NV_copy_depth_to_color 1
#define GL_DEPTH_STENCIL_TO_RGBA_NV 0x886E
#define GL_DEPTH_STENCIL_TO_BGRA_NV 0x886F
#define GL_NV_copy_image 1

typedef void (*glCopyImageSubDataNV_function)(GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, GLuint dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei width, GLsizei height, GLsizei depth);
glCopyImageSubDataNV_function glCopyImageSubDataNV;
#define GL_NV_deep_texture3D 1
#define GL_MAX_DEEP_3D_TEXTURE_WIDTH_HEIGHT_NV 0x90D0
#define GL_MAX_DEEP_3D_TEXTURE_DEPTH_NV 0x90D1
#define GL_NV_depth_buffer_float 1
#define GL_DEPTH_COMPONENT32F_NV 0x8DAB
#define GL_DEPTH32F_STENCIL8_NV 0x8DAC
#define GL_FLOAT_32_UNSIGNED_INT_24_8_REV_NV 0x8DAD
#define GL_DEPTH_BUFFER_FLOAT_MODE_NV 0x8DAF

typedef void (*glDepthRangedNV_function)(GLdouble zNear, GLdouble zFar);
glDepthRangedNV_function glDepthRangedNV;

typedef void (*glClearDepthdNV_function)(GLdouble depth);
glClearDepthdNV_function glClearDepthdNV;

typedef void (*glDepthBoundsdNV_function)(GLdouble zmin, GLdouble zmax);
glDepthBoundsdNV_function glDepthBoundsdNV;
#define GL_NV_depth_clamp 1
#define GL_DEPTH_CLAMP_NV 0x864F
#define GL_NV_draw_texture 1

typedef void (*glDrawTextureNV_function)(GLuint texture, GLuint sampler, GLfloat x0, GLfloat y0, GLfloat x1, GLfloat y1, GLfloat z, GLfloat s0, GLfloat t0, GLfloat s1, GLfloat t1);
glDrawTextureNV_function glDrawTextureNV;
#define GL_NV_draw_vulkan_image 1

typedef void (*GLVULKANPROCNV)();

typedef void (*glDrawVkImageNV_function)(GLuint64 vkImage, GLuint sampler, GLfloat x0, GLfloat y0, GLfloat x1, GLfloat y1, GLfloat z, GLfloat s0, GLfloat t0, GLfloat s1, GLfloat t1);
glDrawVkImageNV_function glDrawVkImageNV;

typedef GLVULKANPROCNV  (*glGetVkProcAddrNV_function)(GLchar *name);
glGetVkProcAddrNV_function glGetVkProcAddrNV;

typedef void (*glWaitVkSemaphoreNV_function)(GLuint64 vkSemaphore);
glWaitVkSemaphoreNV_function glWaitVkSemaphoreNV;

typedef void (*glSignalVkSemaphoreNV_function)(GLuint64 vkSemaphore);
glSignalVkSemaphoreNV_function glSignalVkSemaphoreNV;

typedef void (*glSignalVkFenceNV_function)(GLuint64 vkFence);
glSignalVkFenceNV_function glSignalVkFenceNV;
#define GL_NV_evaluators 1
#define GL_EVAL_2D_NV 0x86C0
#define GL_EVAL_TRIANGULAR_2D_NV 0x86C1
#define GL_MAP_TESSELLATION_NV 0x86C2
#define GL_MAP_ATTRIB_U_ORDER_NV 0x86C3
#define GL_MAP_ATTRIB_V_ORDER_NV 0x86C4
#define GL_EVAL_FRACTIONAL_TESSELLATION_NV 0x86C5
#define GL_EVAL_VERTEX_ATTRIB0_NV 0x86C6
#define GL_EVAL_VERTEX_ATTRIB1_NV 0x86C7
#define GL_EVAL_VERTEX_ATTRIB2_NV 0x86C8
#define GL_EVAL_VERTEX_ATTRIB3_NV 0x86C9
#define GL_EVAL_VERTEX_ATTRIB4_NV 0x86CA
#define GL_EVAL_VERTEX_ATTRIB5_NV 0x86CB
#define GL_EVAL_VERTEX_ATTRIB6_NV 0x86CC
#define GL_EVAL_VERTEX_ATTRIB7_NV 0x86CD
#define GL_EVAL_VERTEX_ATTRIB8_NV 0x86CE
#define GL_EVAL_VERTEX_ATTRIB9_NV 0x86CF
#define GL_EVAL_VERTEX_ATTRIB10_NV 0x86D0
#define GL_EVAL_VERTEX_ATTRIB11_NV 0x86D1
#define GL_EVAL_VERTEX_ATTRIB12_NV 0x86D2
#define GL_EVAL_VERTEX_ATTRIB13_NV 0x86D3
#define GL_EVAL_VERTEX_ATTRIB14_NV 0x86D4
#define GL_EVAL_VERTEX_ATTRIB15_NV 0x86D5
#define GL_MAX_MAP_TESSELLATION_NV 0x86D6
#define GL_MAX_RATIONAL_EVAL_ORDER_NV 0x86D7

typedef void (*glMapControlPointsNV_function)(GLenum target, GLuint index, GLenum type, GLsizei ustride, GLsizei vstride, GLint uorder, GLint vorder, GLboolean packed, void * points);
glMapControlPointsNV_function glMapControlPointsNV;

typedef void (*glMapParameterivNV_function)(GLenum target, GLenum pname, GLint *params);
glMapParameterivNV_function glMapParameterivNV;

typedef void (*glMapParameterfvNV_function)(GLenum target, GLenum pname, GLfloat *params);
glMapParameterfvNV_function glMapParameterfvNV;

typedef void (*glGetMapControlPointsNV_function)(GLenum target, GLuint index, GLenum type, GLsizei ustride, GLsizei vstride, GLboolean packed, void * points);
glGetMapControlPointsNV_function glGetMapControlPointsNV;

typedef void (*glGetMapParameterivNV_function)(GLenum target, GLenum pname, GLint *params);
glGetMapParameterivNV_function glGetMapParameterivNV;

typedef void (*glGetMapParameterfvNV_function)(GLenum target, GLenum pname, GLfloat *params);
glGetMapParameterfvNV_function glGetMapParameterfvNV;

typedef void (*glGetMapAttribParameterivNV_function)(GLenum target, GLuint index, GLenum pname, GLint *params);
glGetMapAttribParameterivNV_function glGetMapAttribParameterivNV;

typedef void (*glGetMapAttribParameterfvNV_function)(GLenum target, GLuint index, GLenum pname, GLfloat *params);
glGetMapAttribParameterfvNV_function glGetMapAttribParameterfvNV;

typedef void (*glEvalMapsNV_function)(GLenum target, GLenum mode);
glEvalMapsNV_function glEvalMapsNV;
#define GL_NV_explicit_multisample 1
#define GL_SAMPLE_POSITION_NV 0x8E50
#define GL_SAMPLE_MASK_NV 0x8E51
#define GL_SAMPLE_MASK_VALUE_NV 0x8E52
#define GL_TEXTURE_BINDING_RENDERBUFFER_NV 0x8E53
#define GL_TEXTURE_RENDERBUFFER_DATA_STORE_BINDING_NV 0x8E54
#define GL_TEXTURE_RENDERBUFFER_NV 0x8E55
#define GL_SAMPLER_RENDERBUFFER_NV 0x8E56
#define GL_INT_SAMPLER_RENDERBUFFER_NV 0x8E57
#define GL_UNSIGNED_INT_SAMPLER_RENDERBUFFER_NV 0x8E58
#define GL_MAX_SAMPLE_MASK_WORDS_NV 0x8E59

typedef void (*glGetMultisamplefvNV_function)(GLenum pname, GLuint index, GLfloat *val);
glGetMultisamplefvNV_function glGetMultisamplefvNV;

typedef void (*glSampleMaskIndexedNV_function)(GLuint index, GLbitfield mask);
glSampleMaskIndexedNV_function glSampleMaskIndexedNV;

typedef void (*glTexRenderbufferNV_function)(GLenum target, GLuint renderbuffer);
glTexRenderbufferNV_function glTexRenderbufferNV;
#define GL_NV_fence 1
#define GL_ALL_COMPLETED_NV 0x84F2
#define GL_FENCE_STATUS_NV 0x84F3
#define GL_FENCE_CONDITION_NV 0x84F4

typedef void (*glDeleteFencesNV_function)(GLsizei n, GLuint *fences);
glDeleteFencesNV_function glDeleteFencesNV;

typedef void (*glGenFencesNV_function)(GLsizei n, GLuint *fences);
glGenFencesNV_function glGenFencesNV;

typedef GLboolean  (*glIsFenceNV_function)(GLuint fence);
glIsFenceNV_function glIsFenceNV;

typedef GLboolean  (*glTestFenceNV_function)(GLuint fence);
glTestFenceNV_function glTestFenceNV;

typedef void (*glGetFenceivNV_function)(GLuint fence, GLenum pname, GLint *params);
glGetFenceivNV_function glGetFenceivNV;

typedef void (*glFinishFenceNV_function)(GLuint fence);
glFinishFenceNV_function glFinishFenceNV;

typedef void (*glSetFenceNV_function)(GLuint fence, GLenum condition);
glSetFenceNV_function glSetFenceNV;
#define GL_NV_fill_rectangle 1
#define GL_FILL_RECTANGLE_NV 0x933C
#define GL_NV_float_buffer 1
#define GL_FLOAT_R_NV 0x8880
#define GL_FLOAT_RG_NV 0x8881
#define GL_FLOAT_RGB_NV 0x8882
#define GL_FLOAT_RGBA_NV 0x8883
#define GL_FLOAT_R16_NV 0x8884
#define GL_FLOAT_R32_NV 0x8885
#define GL_FLOAT_RG16_NV 0x8886
#define GL_FLOAT_RG32_NV 0x8887
#define GL_FLOAT_RGB16_NV 0x8888
#define GL_FLOAT_RGB32_NV 0x8889
#define GL_FLOAT_RGBA16_NV 0x888A
#define GL_FLOAT_RGBA32_NV 0x888B
#define GL_TEXTURE_FLOAT_COMPONENTS_NV 0x888C
#define GL_FLOAT_CLEAR_COLOR_VALUE_NV 0x888D
#define GL_FLOAT_RGBA_MODE_NV 0x888E
#define GL_NV_fog_distance 1
#define GL_FOG_DISTANCE_MODE_NV 0x855A
#define GL_EYE_RADIAL_NV 0x855B
#define GL_EYE_PLANE_ABSOLUTE_NV 0x855C
#define GL_NV_fragment_coverage_to_color 1
#define GL_FRAGMENT_COVERAGE_TO_COLOR_NV 0x92DD
#define GL_FRAGMENT_COVERAGE_COLOR_NV 0x92DE

typedef void (*glFragmentCoverageColorNV_function)(GLuint color);
glFragmentCoverageColorNV_function glFragmentCoverageColorNV;
#define GL_NV_fragment_program 1
#define GL_MAX_FRAGMENT_PROGRAM_LOCAL_PARAMETERS_NV 0x8868
#define GL_FRAGMENT_PROGRAM_NV 0x8870
#define GL_MAX_TEXTURE_COORDS_NV 0x8871
#define GL_MAX_TEXTURE_IMAGE_UNITS_NV 0x8872
#define GL_FRAGMENT_PROGRAM_BINDING_NV 0x8873
#define GL_PROGRAM_ERROR_STRING_NV 0x8874

typedef void (*glProgramNamedParameter4fNV_function)(GLuint id, GLsizei len, GLubyte *name, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
glProgramNamedParameter4fNV_function glProgramNamedParameter4fNV;

typedef void (*glProgramNamedParameter4fvNV_function)(GLuint id, GLsizei len, GLubyte *name, GLfloat *v);
glProgramNamedParameter4fvNV_function glProgramNamedParameter4fvNV;

typedef void (*glProgramNamedParameter4dNV_function)(GLuint id, GLsizei len, GLubyte *name, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
glProgramNamedParameter4dNV_function glProgramNamedParameter4dNV;

typedef void (*glProgramNamedParameter4dvNV_function)(GLuint id, GLsizei len, GLubyte *name, GLdouble *v);
glProgramNamedParameter4dvNV_function glProgramNamedParameter4dvNV;

typedef void (*glGetProgramNamedParameterfvNV_function)(GLuint id, GLsizei len, GLubyte *name, GLfloat *params);
glGetProgramNamedParameterfvNV_function glGetProgramNamedParameterfvNV;

typedef void (*glGetProgramNamedParameterdvNV_function)(GLuint id, GLsizei len, GLubyte *name, GLdouble *params);
glGetProgramNamedParameterdvNV_function glGetProgramNamedParameterdvNV;
#define GL_NV_fragment_program2 1
#define GL_MAX_PROGRAM_EXEC_INSTRUCTIONS_NV 0x88F4
#define GL_MAX_PROGRAM_CALL_DEPTH_NV 0x88F5
#define GL_MAX_PROGRAM_IF_DEPTH_NV 0x88F6
#define GL_MAX_PROGRAM_LOOP_DEPTH_NV 0x88F7
#define GL_MAX_PROGRAM_LOOP_COUNT_NV 0x88F8
#define GL_NV_fragment_program4 1
#define GL_NV_fragment_program_option 1
#define GL_NV_fragment_shader_barycentric 1
#define GL_NV_fragment_shader_interlock 1
#define GL_NV_framebuffer_mixed_samples 1
#define GL_COVERAGE_MODULATION_TABLE_NV 0x9331
#define GL_COLOR_SAMPLES_NV 0x8E20
#define GL_DEPTH_SAMPLES_NV 0x932D
#define GL_STENCIL_SAMPLES_NV 0x932E
#define GL_MIXED_DEPTH_SAMPLES_SUPPORTED_NV 0x932F
#define GL_MIXED_STENCIL_SAMPLES_SUPPORTED_NV 0x9330
#define GL_COVERAGE_MODULATION_NV 0x9332
#define GL_COVERAGE_MODULATION_TABLE_SIZE_NV 0x9333

typedef void (*glCoverageModulationTableNV_function)(GLsizei n, GLfloat *v);
glCoverageModulationTableNV_function glCoverageModulationTableNV;

typedef void (*glGetCoverageModulationTableNV_function)(GLsizei bufSize, GLfloat *v);
glGetCoverageModulationTableNV_function glGetCoverageModulationTableNV;

typedef void (*glCoverageModulationNV_function)(GLenum components);
glCoverageModulationNV_function glCoverageModulationNV;
#define GL_NV_framebuffer_multisample_coverage 1
#define GL_RENDERBUFFER_COVERAGE_SAMPLES_NV 0x8CAB
#define GL_RENDERBUFFER_COLOR_SAMPLES_NV 0x8E10
#define GL_MAX_MULTISAMPLE_COVERAGE_MODES_NV 0x8E11
#define GL_MULTISAMPLE_COVERAGE_MODES_NV 0x8E12

typedef void (*glRenderbufferStorageMultisampleCoverageNV_function)(GLenum target, GLsizei coverageSamples, GLsizei colorSamples, GLenum internalformat, GLsizei width, GLsizei height);
glRenderbufferStorageMultisampleCoverageNV_function glRenderbufferStorageMultisampleCoverageNV;
#define GL_NV_geometry_program4 1
#define GL_GEOMETRY_PROGRAM_NV 0x8C26
#define GL_MAX_PROGRAM_OUTPUT_VERTICES_NV 0x8C27
#define GL_MAX_PROGRAM_TOTAL_OUTPUT_COMPONENTS_NV 0x8C28

typedef void (*glProgramVertexLimitNV_function)(GLenum target, GLint limit);
glProgramVertexLimitNV_function glProgramVertexLimitNV;

typedef void (*glFramebufferTextureEXT_function)(GLenum target, GLenum attachment, GLuint texture, GLint level);
glFramebufferTextureEXT_function glFramebufferTextureEXT;

typedef void (*glFramebufferTextureFaceEXT_function)(GLenum target, GLenum attachment, GLuint texture, GLint level, GLenum face);
glFramebufferTextureFaceEXT_function glFramebufferTextureFaceEXT;
#define GL_NV_geometry_shader4 1
#define GL_NV_geometry_shader_passthrough 1
#define GL_NV_gpu_multicast 1
#define GL_PER_GPU_STORAGE_BIT_NV 0x0800
#define GL_MULTICAST_GPUS_NV 0x92BA
#define GL_RENDER_GPU_MASK_NV 0x9558
#define GL_PER_GPU_STORAGE_NV 0x9548
#define GL_MULTICAST_PROGRAMMABLE_SAMPLE_LOCATION_NV 0x9549

typedef void (*glRenderGpuMaskNV_function)(GLbitfield mask);
glRenderGpuMaskNV_function glRenderGpuMaskNV;

typedef void (*glMulticastBufferSubDataNV_function)(GLbitfield gpuMask, GLuint buffer, GLintptr offset, GLsizeiptr size, void * data);
glMulticastBufferSubDataNV_function glMulticastBufferSubDataNV;

typedef void (*glMulticastCopyBufferSubDataNV_function)(GLuint readGpu, GLbitfield writeGpuMask, GLuint readBuffer, GLuint writeBuffer, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size);
glMulticastCopyBufferSubDataNV_function glMulticastCopyBufferSubDataNV;

typedef void (*glMulticastCopyImageSubDataNV_function)(GLuint srcGpu, GLbitfield dstGpuMask, GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, GLuint dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei srcWidth, GLsizei srcHeight, GLsizei srcDepth);
glMulticastCopyImageSubDataNV_function glMulticastCopyImageSubDataNV;

typedef void (*glMulticastBlitFramebufferNV_function)(GLuint srcGpu, GLuint dstGpu, GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter);
glMulticastBlitFramebufferNV_function glMulticastBlitFramebufferNV;

typedef void (*glMulticastFramebufferSampleLocationsfvNV_function)(GLuint gpu, GLuint framebuffer, GLuint start, GLsizei count, GLfloat *v);
glMulticastFramebufferSampleLocationsfvNV_function glMulticastFramebufferSampleLocationsfvNV;

typedef void (*glMulticastBarrierNV_function)();
glMulticastBarrierNV_function glMulticastBarrierNV;

typedef void (*glMulticastWaitSyncNV_function)(GLuint signalGpu, GLbitfield waitGpuMask);
glMulticastWaitSyncNV_function glMulticastWaitSyncNV;

typedef void (*glMulticastGetQueryObjectivNV_function)(GLuint gpu, GLuint id, GLenum pname, GLint *params);
glMulticastGetQueryObjectivNV_function glMulticastGetQueryObjectivNV;

typedef void (*glMulticastGetQueryObjectuivNV_function)(GLuint gpu, GLuint id, GLenum pname, GLuint *params);
glMulticastGetQueryObjectuivNV_function glMulticastGetQueryObjectuivNV;

typedef void (*glMulticastGetQueryObjecti64vNV_function)(GLuint gpu, GLuint id, GLenum pname, GLint64 *params);
glMulticastGetQueryObjecti64vNV_function glMulticastGetQueryObjecti64vNV;

typedef void (*glMulticastGetQueryObjectui64vNV_function)(GLuint gpu, GLuint id, GLenum pname, GLuint64 *params);
glMulticastGetQueryObjectui64vNV_function glMulticastGetQueryObjectui64vNV;
#define GL_NV_gpu_program4 1
#define GL_MIN_PROGRAM_TEXEL_OFFSET_NV 0x8904
#define GL_MAX_PROGRAM_TEXEL_OFFSET_NV 0x8905
#define GL_PROGRAM_ATTRIB_COMPONENTS_NV 0x8906
#define GL_PROGRAM_RESULT_COMPONENTS_NV 0x8907
#define GL_MAX_PROGRAM_ATTRIB_COMPONENTS_NV 0x8908
#define GL_MAX_PROGRAM_RESULT_COMPONENTS_NV 0x8909
#define GL_MAX_PROGRAM_GENERIC_ATTRIBS_NV 0x8DA5
#define GL_MAX_PROGRAM_GENERIC_RESULTS_NV 0x8DA6

typedef void (*glProgramLocalParameterI4iNV_function)(GLenum target, GLuint index, GLint x, GLint y, GLint z, GLint w);
glProgramLocalParameterI4iNV_function glProgramLocalParameterI4iNV;

typedef void (*glProgramLocalParameterI4ivNV_function)(GLenum target, GLuint index, GLint *params);
glProgramLocalParameterI4ivNV_function glProgramLocalParameterI4ivNV;

typedef void (*glProgramLocalParametersI4ivNV_function)(GLenum target, GLuint index, GLsizei count, GLint *params);
glProgramLocalParametersI4ivNV_function glProgramLocalParametersI4ivNV;

typedef void (*glProgramLocalParameterI4uiNV_function)(GLenum target, GLuint index, GLuint x, GLuint y, GLuint z, GLuint w);
glProgramLocalParameterI4uiNV_function glProgramLocalParameterI4uiNV;

typedef void (*glProgramLocalParameterI4uivNV_function)(GLenum target, GLuint index, GLuint *params);
glProgramLocalParameterI4uivNV_function glProgramLocalParameterI4uivNV;

typedef void (*glProgramLocalParametersI4uivNV_function)(GLenum target, GLuint index, GLsizei count, GLuint *params);
glProgramLocalParametersI4uivNV_function glProgramLocalParametersI4uivNV;

typedef void (*glProgramEnvParameterI4iNV_function)(GLenum target, GLuint index, GLint x, GLint y, GLint z, GLint w);
glProgramEnvParameterI4iNV_function glProgramEnvParameterI4iNV;

typedef void (*glProgramEnvParameterI4ivNV_function)(GLenum target, GLuint index, GLint *params);
glProgramEnvParameterI4ivNV_function glProgramEnvParameterI4ivNV;

typedef void (*glProgramEnvParametersI4ivNV_function)(GLenum target, GLuint index, GLsizei count, GLint *params);
glProgramEnvParametersI4ivNV_function glProgramEnvParametersI4ivNV;

typedef void (*glProgramEnvParameterI4uiNV_function)(GLenum target, GLuint index, GLuint x, GLuint y, GLuint z, GLuint w);
glProgramEnvParameterI4uiNV_function glProgramEnvParameterI4uiNV;

typedef void (*glProgramEnvParameterI4uivNV_function)(GLenum target, GLuint index, GLuint *params);
glProgramEnvParameterI4uivNV_function glProgramEnvParameterI4uivNV;

typedef void (*glProgramEnvParametersI4uivNV_function)(GLenum target, GLuint index, GLsizei count, GLuint *params);
glProgramEnvParametersI4uivNV_function glProgramEnvParametersI4uivNV;

typedef void (*glGetProgramLocalParameterIivNV_function)(GLenum target, GLuint index, GLint *params);
glGetProgramLocalParameterIivNV_function glGetProgramLocalParameterIivNV;

typedef void (*glGetProgramLocalParameterIuivNV_function)(GLenum target, GLuint index, GLuint *params);
glGetProgramLocalParameterIuivNV_function glGetProgramLocalParameterIuivNV;

typedef void (*glGetProgramEnvParameterIivNV_function)(GLenum target, GLuint index, GLint *params);
glGetProgramEnvParameterIivNV_function glGetProgramEnvParameterIivNV;

typedef void (*glGetProgramEnvParameterIuivNV_function)(GLenum target, GLuint index, GLuint *params);
glGetProgramEnvParameterIuivNV_function glGetProgramEnvParameterIuivNV;
#define GL_NV_gpu_program5 1
#define GL_MAX_GEOMETRY_PROGRAM_INVOCATIONS_NV 0x8E5A
#define GL_MIN_FRAGMENT_INTERPOLATION_OFFSET_NV 0x8E5B
#define GL_MAX_FRAGMENT_INTERPOLATION_OFFSET_NV 0x8E5C
#define GL_FRAGMENT_PROGRAM_INTERPOLATION_OFFSET_BITS_NV 0x8E5D
#define GL_MIN_PROGRAM_TEXTURE_GATHER_OFFSET_NV 0x8E5E
#define GL_MAX_PROGRAM_TEXTURE_GATHER_OFFSET_NV 0x8E5F
#define GL_MAX_PROGRAM_SUBROUTINE_PARAMETERS_NV 0x8F44
#define GL_MAX_PROGRAM_SUBROUTINE_NUM_NV 0x8F45

typedef void (*glProgramSubroutineParametersuivNV_function)(GLenum target, GLsizei count, GLuint *params);
glProgramSubroutineParametersuivNV_function glProgramSubroutineParametersuivNV;

typedef void (*glGetProgramSubroutineParameteruivNV_function)(GLenum target, GLuint index, GLuint *param);
glGetProgramSubroutineParameteruivNV_function glGetProgramSubroutineParameteruivNV;
#define GL_NV_gpu_program5_mem_extended 1
#define GL_NV_gpu_shader5 1
#define GL_NV_half_float 1
#define GL_HALF_FLOAT_NV 0x140B

typedef void (*glVertex2hNV_function)(GLhalfNV x, GLhalfNV y);
glVertex2hNV_function glVertex2hNV;

typedef void (*glVertex2hvNV_function)(GLhalfNV *v);
glVertex2hvNV_function glVertex2hvNV;

typedef void (*glVertex3hNV_function)(GLhalfNV x, GLhalfNV y, GLhalfNV z);
glVertex3hNV_function glVertex3hNV;

typedef void (*glVertex3hvNV_function)(GLhalfNV *v);
glVertex3hvNV_function glVertex3hvNV;

typedef void (*glVertex4hNV_function)(GLhalfNV x, GLhalfNV y, GLhalfNV z, GLhalfNV w);
glVertex4hNV_function glVertex4hNV;

typedef void (*glVertex4hvNV_function)(GLhalfNV *v);
glVertex4hvNV_function glVertex4hvNV;

typedef void (*glNormal3hNV_function)(GLhalfNV nx, GLhalfNV ny, GLhalfNV nz);
glNormal3hNV_function glNormal3hNV;

typedef void (*glNormal3hvNV_function)(GLhalfNV *v);
glNormal3hvNV_function glNormal3hvNV;

typedef void (*glColor3hNV_function)(GLhalfNV red, GLhalfNV green, GLhalfNV blue);
glColor3hNV_function glColor3hNV;

typedef void (*glColor3hvNV_function)(GLhalfNV *v);
glColor3hvNV_function glColor3hvNV;

typedef void (*glColor4hNV_function)(GLhalfNV red, GLhalfNV green, GLhalfNV blue, GLhalfNV alpha);
glColor4hNV_function glColor4hNV;

typedef void (*glColor4hvNV_function)(GLhalfNV *v);
glColor4hvNV_function glColor4hvNV;

typedef void (*glTexCoord1hNV_function)(GLhalfNV s);
glTexCoord1hNV_function glTexCoord1hNV;

typedef void (*glTexCoord1hvNV_function)(GLhalfNV *v);
glTexCoord1hvNV_function glTexCoord1hvNV;

typedef void (*glTexCoord2hNV_function)(GLhalfNV s, GLhalfNV t);
glTexCoord2hNV_function glTexCoord2hNV;

typedef void (*glTexCoord2hvNV_function)(GLhalfNV *v);
glTexCoord2hvNV_function glTexCoord2hvNV;

typedef void (*glTexCoord3hNV_function)(GLhalfNV s, GLhalfNV t, GLhalfNV r);
glTexCoord3hNV_function glTexCoord3hNV;

typedef void (*glTexCoord3hvNV_function)(GLhalfNV *v);
glTexCoord3hvNV_function glTexCoord3hvNV;

typedef void (*glTexCoord4hNV_function)(GLhalfNV s, GLhalfNV t, GLhalfNV r, GLhalfNV q);
glTexCoord4hNV_function glTexCoord4hNV;

typedef void (*glTexCoord4hvNV_function)(GLhalfNV *v);
glTexCoord4hvNV_function glTexCoord4hvNV;

typedef void (*glMultiTexCoord1hNV_function)(GLenum target, GLhalfNV s);
glMultiTexCoord1hNV_function glMultiTexCoord1hNV;

typedef void (*glMultiTexCoord1hvNV_function)(GLenum target, GLhalfNV *v);
glMultiTexCoord1hvNV_function glMultiTexCoord1hvNV;

typedef void (*glMultiTexCoord2hNV_function)(GLenum target, GLhalfNV s, GLhalfNV t);
glMultiTexCoord2hNV_function glMultiTexCoord2hNV;

typedef void (*glMultiTexCoord2hvNV_function)(GLenum target, GLhalfNV *v);
glMultiTexCoord2hvNV_function glMultiTexCoord2hvNV;

typedef void (*glMultiTexCoord3hNV_function)(GLenum target, GLhalfNV s, GLhalfNV t, GLhalfNV r);
glMultiTexCoord3hNV_function glMultiTexCoord3hNV;

typedef void (*glMultiTexCoord3hvNV_function)(GLenum target, GLhalfNV *v);
glMultiTexCoord3hvNV_function glMultiTexCoord3hvNV;

typedef void (*glMultiTexCoord4hNV_function)(GLenum target, GLhalfNV s, GLhalfNV t, GLhalfNV r, GLhalfNV q);
glMultiTexCoord4hNV_function glMultiTexCoord4hNV;

typedef void (*glMultiTexCoord4hvNV_function)(GLenum target, GLhalfNV *v);
glMultiTexCoord4hvNV_function glMultiTexCoord4hvNV;

typedef void (*glVertexAttrib1hNV_function)(GLuint index, GLhalfNV x);
glVertexAttrib1hNV_function glVertexAttrib1hNV;

typedef void (*glVertexAttrib1hvNV_function)(GLuint index, GLhalfNV *v);
glVertexAttrib1hvNV_function glVertexAttrib1hvNV;

typedef void (*glVertexAttrib2hNV_function)(GLuint index, GLhalfNV x, GLhalfNV y);
glVertexAttrib2hNV_function glVertexAttrib2hNV;

typedef void (*glVertexAttrib2hvNV_function)(GLuint index, GLhalfNV *v);
glVertexAttrib2hvNV_function glVertexAttrib2hvNV;

typedef void (*glVertexAttrib3hNV_function)(GLuint index, GLhalfNV x, GLhalfNV y, GLhalfNV z);
glVertexAttrib3hNV_function glVertexAttrib3hNV;

typedef void (*glVertexAttrib3hvNV_function)(GLuint index, GLhalfNV *v);
glVertexAttrib3hvNV_function glVertexAttrib3hvNV;

typedef void (*glVertexAttrib4hNV_function)(GLuint index, GLhalfNV x, GLhalfNV y, GLhalfNV z, GLhalfNV w);
glVertexAttrib4hNV_function glVertexAttrib4hNV;

typedef void (*glVertexAttrib4hvNV_function)(GLuint index, GLhalfNV *v);
glVertexAttrib4hvNV_function glVertexAttrib4hvNV;

typedef void (*glVertexAttribs1hvNV_function)(GLuint index, GLsizei n, GLhalfNV *v);
glVertexAttribs1hvNV_function glVertexAttribs1hvNV;

typedef void (*glVertexAttribs2hvNV_function)(GLuint index, GLsizei n, GLhalfNV *v);
glVertexAttribs2hvNV_function glVertexAttribs2hvNV;

typedef void (*glVertexAttribs3hvNV_function)(GLuint index, GLsizei n, GLhalfNV *v);
glVertexAttribs3hvNV_function glVertexAttribs3hvNV;

typedef void (*glVertexAttribs4hvNV_function)(GLuint index, GLsizei n, GLhalfNV *v);
glVertexAttribs4hvNV_function glVertexAttribs4hvNV;

typedef void (*glFogCoordhNV_function)(GLhalfNV fog);
glFogCoordhNV_function glFogCoordhNV;

typedef void (*glFogCoordhvNV_function)(GLhalfNV *fog);
glFogCoordhvNV_function glFogCoordhvNV;

typedef void (*glSecondaryColor3hNV_function)(GLhalfNV red, GLhalfNV green, GLhalfNV blue);
glSecondaryColor3hNV_function glSecondaryColor3hNV;

typedef void (*glSecondaryColor3hvNV_function)(GLhalfNV *v);
glSecondaryColor3hvNV_function glSecondaryColor3hvNV;

typedef void (*glVertexWeighthNV_function)(GLhalfNV weight);
glVertexWeighthNV_function glVertexWeighthNV;

typedef void (*glVertexWeighthvNV_function)(GLhalfNV *weight);
glVertexWeighthvNV_function glVertexWeighthvNV;
#define GL_NV_internalformat_sample_query 1
#define GL_MULTISAMPLES_NV 0x9371
#define GL_SUPERSAMPLE_SCALE_X_NV 0x9372
#define GL_SUPERSAMPLE_SCALE_Y_NV 0x9373
#define GL_CONFORMANT_NV 0x9374

typedef void (*glGetInternalformatSampleivNV_function)(GLenum target, GLenum internalformat, GLsizei samples, GLenum pname, GLsizei count, GLint *params);
glGetInternalformatSampleivNV_function glGetInternalformatSampleivNV;
#define GL_NV_light_max_exponent 1
#define GL_MAX_SHININESS_NV 0x8504
#define GL_MAX_SPOT_EXPONENT_NV 0x8505
#define GL_NV_memory_attachment 1
#define GL_ATTACHED_MEMORY_OBJECT_NV 0x95A4
#define GL_ATTACHED_MEMORY_OFFSET_NV 0x95A5
#define GL_MEMORY_ATTACHABLE_ALIGNMENT_NV 0x95A6
#define GL_MEMORY_ATTACHABLE_SIZE_NV 0x95A7
#define GL_MEMORY_ATTACHABLE_NV 0x95A8
#define GL_DETACHED_MEMORY_INCARNATION_NV 0x95A9
#define GL_DETACHED_TEXTURES_NV 0x95AA
#define GL_DETACHED_BUFFERS_NV 0x95AB
#define GL_MAX_DETACHED_TEXTURES_NV 0x95AC
#define GL_MAX_DETACHED_BUFFERS_NV 0x95AD

typedef void (*glGetMemoryObjectDetachedResourcesuivNV_function)(GLuint memory, GLenum pname, GLint first, GLsizei count, GLuint *params);
glGetMemoryObjectDetachedResourcesuivNV_function glGetMemoryObjectDetachedResourcesuivNV;

typedef void (*glResetMemoryObjectParameterNV_function)(GLuint memory, GLenum pname);
glResetMemoryObjectParameterNV_function glResetMemoryObjectParameterNV;

typedef void (*glTexAttachMemoryNV_function)(GLenum target, GLuint memory, GLuint64 offset);
glTexAttachMemoryNV_function glTexAttachMemoryNV;

typedef void (*glBufferAttachMemoryNV_function)(GLenum target, GLuint memory, GLuint64 offset);
glBufferAttachMemoryNV_function glBufferAttachMemoryNV;

typedef void (*glTextureAttachMemoryNV_function)(GLuint texture, GLuint memory, GLuint64 offset);
glTextureAttachMemoryNV_function glTextureAttachMemoryNV;

typedef void (*glNamedBufferAttachMemoryNV_function)(GLuint buffer, GLuint memory, GLuint64 offset);
glNamedBufferAttachMemoryNV_function glNamedBufferAttachMemoryNV;
#define GL_NV_memory_object_sparse 1

typedef void (*glBufferPageCommitmentMemNV_function)(GLenum target, GLintptr offset, GLsizeiptr size, GLuint memory, GLuint64 memOffset, GLboolean commit);
glBufferPageCommitmentMemNV_function glBufferPageCommitmentMemNV;

typedef void (*glTexPageCommitmentMemNV_function)(GLenum target, GLint layer, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLuint memory, GLuint64 offset, GLboolean commit);
glTexPageCommitmentMemNV_function glTexPageCommitmentMemNV;

typedef void (*glNamedBufferPageCommitmentMemNV_function)(GLuint buffer, GLintptr offset, GLsizeiptr size, GLuint memory, GLuint64 memOffset, GLboolean commit);
glNamedBufferPageCommitmentMemNV_function glNamedBufferPageCommitmentMemNV;

typedef void (*glTexturePageCommitmentMemNV_function)(GLuint texture, GLint layer, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLuint memory, GLuint64 offset, GLboolean commit);
glTexturePageCommitmentMemNV_function glTexturePageCommitmentMemNV;
#define GL_NV_mesh_shader 1
#define GL_MESH_SHADER_NV 0x9559
#define GL_TASK_SHADER_NV 0x955A
#define GL_MAX_MESH_UNIFORM_BLOCKS_NV 0x8E60
#define GL_MAX_MESH_TEXTURE_IMAGE_UNITS_NV 0x8E61
#define GL_MAX_MESH_IMAGE_UNIFORMS_NV 0x8E62
#define GL_MAX_MESH_UNIFORM_COMPONENTS_NV 0x8E63
#define GL_MAX_MESH_ATOMIC_COUNTER_BUFFERS_NV 0x8E64
#define GL_MAX_MESH_ATOMIC_COUNTERS_NV 0x8E65
#define GL_MAX_MESH_SHADER_STORAGE_BLOCKS_NV 0x8E66
#define GL_MAX_COMBINED_MESH_UNIFORM_COMPONENTS_NV 0x8E67
#define GL_MAX_TASK_UNIFORM_BLOCKS_NV 0x8E68
#define GL_MAX_TASK_TEXTURE_IMAGE_UNITS_NV 0x8E69
#define GL_MAX_TASK_IMAGE_UNIFORMS_NV 0x8E6A
#define GL_MAX_TASK_UNIFORM_COMPONENTS_NV 0x8E6B
#define GL_MAX_TASK_ATOMIC_COUNTER_BUFFERS_NV 0x8E6C
#define GL_MAX_TASK_ATOMIC_COUNTERS_NV 0x8E6D
#define GL_MAX_TASK_SHADER_STORAGE_BLOCKS_NV 0x8E6E
#define GL_MAX_COMBINED_TASK_UNIFORM_COMPONENTS_NV 0x8E6F
#define GL_MAX_MESH_WORK_GROUP_INVOCATIONS_NV 0x95A2
#define GL_MAX_TASK_WORK_GROUP_INVOCATIONS_NV 0x95A3
#define GL_MAX_MESH_TOTAL_MEMORY_SIZE_NV 0x9536
#define GL_MAX_TASK_TOTAL_MEMORY_SIZE_NV 0x9537
#define GL_MAX_MESH_OUTPUT_VERTICES_NV 0x9538
#define GL_MAX_MESH_OUTPUT_PRIMITIVES_NV 0x9539
#define GL_MAX_TASK_OUTPUT_COUNT_NV 0x953A
#define GL_MAX_DRAW_MESH_TASKS_COUNT_NV 0x953D
#define GL_MAX_MESH_VIEWS_NV 0x9557
#define GL_MESH_OUTPUT_PER_VERTEX_GRANULARITY_NV 0x92DF
#define GL_MESH_OUTPUT_PER_PRIMITIVE_GRANULARITY_NV 0x9543
#define GL_MAX_MESH_WORK_GROUP_SIZE_NV 0x953B
#define GL_MAX_TASK_WORK_GROUP_SIZE_NV 0x953C
#define GL_MESH_WORK_GROUP_SIZE_NV 0x953E
#define GL_TASK_WORK_GROUP_SIZE_NV 0x953F
#define GL_MESH_VERTICES_OUT_NV 0x9579
#define GL_MESH_PRIMITIVES_OUT_NV 0x957A
#define GL_MESH_OUTPUT_TYPE_NV 0x957B
#define GL_UNIFORM_BLOCK_REFERENCED_BY_MESH_SHADER_NV 0x959C
#define GL_UNIFORM_BLOCK_REFERENCED_BY_TASK_SHADER_NV 0x959D
#define GL_REFERENCED_BY_MESH_SHADER_NV 0x95A0
#define GL_REFERENCED_BY_TASK_SHADER_NV 0x95A1
#define GL_MESH_SHADER_BIT_NV 0x00000040
#define GL_TASK_SHADER_BIT_NV 0x00000080
#define GL_MESH_SUBROUTINE_NV 0x957C
#define GL_TASK_SUBROUTINE_NV 0x957D
#define GL_MESH_SUBROUTINE_UNIFORM_NV 0x957E
#define GL_TASK_SUBROUTINE_UNIFORM_NV 0x957F
#define GL_ATOMIC_COUNTER_BUFFER_REFERENCED_BY_MESH_SHADER_NV 0x959E
#define GL_ATOMIC_COUNTER_BUFFER_REFERENCED_BY_TASK_SHADER_NV 0x959F

typedef void (*glDrawMeshTasksNV_function)(GLuint first, GLuint count);
glDrawMeshTasksNV_function glDrawMeshTasksNV;

typedef void (*glDrawMeshTasksIndirectNV_function)(GLintptr indirect);
glDrawMeshTasksIndirectNV_function glDrawMeshTasksIndirectNV;

typedef void (*glMultiDrawMeshTasksIndirectNV_function)(GLintptr indirect, GLsizei drawcount, GLsizei stride);
glMultiDrawMeshTasksIndirectNV_function glMultiDrawMeshTasksIndirectNV;

typedef void (*glMultiDrawMeshTasksIndirectCountNV_function)(GLintptr indirect, GLintptr drawcount, GLsizei maxdrawcount, GLsizei stride);
glMultiDrawMeshTasksIndirectCountNV_function glMultiDrawMeshTasksIndirectCountNV;
#define GL_NV_multisample_coverage 1
#define GL_NV_multisample_filter_hint 1
#define GL_MULTISAMPLE_FILTER_HINT_NV 0x8534
#define GL_NV_occlusion_query 1
#define GL_PIXEL_COUNTER_BITS_NV 0x8864
#define GL_CURRENT_OCCLUSION_QUERY_ID_NV 0x8865
#define GL_PIXEL_COUNT_NV 0x8866
#define GL_PIXEL_COUNT_AVAILABLE_NV 0x8867

typedef void (*glGenOcclusionQueriesNV_function)(GLsizei n, GLuint *ids);
glGenOcclusionQueriesNV_function glGenOcclusionQueriesNV;

typedef void (*glDeleteOcclusionQueriesNV_function)(GLsizei n, GLuint *ids);
glDeleteOcclusionQueriesNV_function glDeleteOcclusionQueriesNV;

typedef GLboolean  (*glIsOcclusionQueryNV_function)(GLuint id);
glIsOcclusionQueryNV_function glIsOcclusionQueryNV;

typedef void (*glBeginOcclusionQueryNV_function)(GLuint id);
glBeginOcclusionQueryNV_function glBeginOcclusionQueryNV;

typedef void (*glEndOcclusionQueryNV_function)();
glEndOcclusionQueryNV_function glEndOcclusionQueryNV;

typedef void (*glGetOcclusionQueryivNV_function)(GLuint id, GLenum pname, GLint *params);
glGetOcclusionQueryivNV_function glGetOcclusionQueryivNV;

typedef void (*glGetOcclusionQueryuivNV_function)(GLuint id, GLenum pname, GLuint *params);
glGetOcclusionQueryuivNV_function glGetOcclusionQueryuivNV;
#define GL_NV_packed_depth_stencil 1
#define GL_DEPTH_STENCIL_NV 0x84F9
#define GL_UNSIGNED_INT_24_8_NV 0x84FA
#define GL_NV_parameter_buffer_object 1
#define GL_MAX_PROGRAM_PARAMETER_BUFFER_BINDINGS_NV 0x8DA0
#define GL_MAX_PROGRAM_PARAMETER_BUFFER_SIZE_NV 0x8DA1
#define GL_VERTEX_PROGRAM_PARAMETER_BUFFER_NV 0x8DA2
#define GL_GEOMETRY_PROGRAM_PARAMETER_BUFFER_NV 0x8DA3
#define GL_FRAGMENT_PROGRAM_PARAMETER_BUFFER_NV 0x8DA4

typedef void (*glProgramBufferParametersfvNV_function)(GLenum target, GLuint bindingIndex, GLuint wordIndex, GLsizei count, GLfloat *params);
glProgramBufferParametersfvNV_function glProgramBufferParametersfvNV;

typedef void (*glProgramBufferParametersIivNV_function)(GLenum target, GLuint bindingIndex, GLuint wordIndex, GLsizei count, GLint *params);
glProgramBufferParametersIivNV_function glProgramBufferParametersIivNV;

typedef void (*glProgramBufferParametersIuivNV_function)(GLenum target, GLuint bindingIndex, GLuint wordIndex, GLsizei count, GLuint *params);
glProgramBufferParametersIuivNV_function glProgramBufferParametersIuivNV;
#define GL_NV_parameter_buffer_object2 1
#define GL_NV_path_rendering 1
#define GL_PATH_FORMAT_SVG_NV 0x9070
#define GL_PATH_FORMAT_PS_NV 0x9071
#define GL_STANDARD_FONT_NAME_NV 0x9072
#define GL_SYSTEM_FONT_NAME_NV 0x9073
#define GL_FILE_NAME_NV 0x9074
#define GL_PATH_STROKE_WIDTH_NV 0x9075
#define GL_PATH_END_CAPS_NV 0x9076
#define GL_PATH_INITIAL_END_CAP_NV 0x9077
#define GL_PATH_TERMINAL_END_CAP_NV 0x9078
#define GL_PATH_JOIN_STYLE_NV 0x9079
#define GL_PATH_MITER_LIMIT_NV 0x907A
#define GL_PATH_DASH_CAPS_NV 0x907B
#define GL_PATH_INITIAL_DASH_CAP_NV 0x907C
#define GL_PATH_TERMINAL_DASH_CAP_NV 0x907D
#define GL_PATH_DASH_OFFSET_NV 0x907E
#define GL_PATH_CLIENT_LENGTH_NV 0x907F
#define GL_PATH_FILL_MODE_NV 0x9080
#define GL_PATH_FILL_MASK_NV 0x9081
#define GL_PATH_FILL_COVER_MODE_NV 0x9082
#define GL_PATH_STROKE_COVER_MODE_NV 0x9083
#define GL_PATH_STROKE_MASK_NV 0x9084
#define GL_COUNT_UP_NV 0x9088
#define GL_COUNT_DOWN_NV 0x9089
#define GL_PATH_OBJECT_BOUNDING_BOX_NV 0x908A
#define GL_CONVEX_HULL_NV 0x908B
#define GL_BOUNDING_BOX_NV 0x908D
#define GL_TRANSLATE_X_NV 0x908E
#define GL_TRANSLATE_Y_NV 0x908F
#define GL_TRANSLATE_2D_NV 0x9090
#define GL_TRANSLATE_3D_NV 0x9091
#define GL_AFFINE_2D_NV 0x9092
#define GL_AFFINE_3D_NV 0x9094
#define GL_TRANSPOSE_AFFINE_2D_NV 0x9096
#define GL_TRANSPOSE_AFFINE_3D_NV 0x9098
#define GL_UTF8_NV 0x909A
#define GL_UTF16_NV 0x909B
#define GL_BOUNDING_BOX_OF_BOUNDING_BOXES_NV 0x909C
#define GL_PATH_COMMAND_COUNT_NV 0x909D
#define GL_PATH_COORD_COUNT_NV 0x909E
#define GL_PATH_DASH_ARRAY_COUNT_NV 0x909F
#define GL_PATH_COMPUTED_LENGTH_NV 0x90A0
#define GL_PATH_FILL_BOUNDING_BOX_NV 0x90A1
#define GL_PATH_STROKE_BOUNDING_BOX_NV 0x90A2
#define GL_SQUARE_NV 0x90A3
#define GL_ROUND_NV 0x90A4
#define GL_TRIANGULAR_NV 0x90A5
#define GL_BEVEL_NV 0x90A6
#define GL_MITER_REVERT_NV 0x90A7
#define GL_MITER_TRUNCATE_NV 0x90A8
#define GL_SKIP_MISSING_GLYPH_NV 0x90A9
#define GL_USE_MISSING_GLYPH_NV 0x90AA
#define GL_PATH_ERROR_POSITION_NV 0x90AB
#define GL_ACCUM_ADJACENT_PAIRS_NV 0x90AD
#define GL_ADJACENT_PAIRS_NV 0x90AE
#define GL_FIRST_TO_REST_NV 0x90AF
#define GL_PATH_GEN_MODE_NV 0x90B0
#define GL_PATH_GEN_COEFF_NV 0x90B1
#define GL_PATH_GEN_COMPONENTS_NV 0x90B3
#define GL_PATH_STENCIL_FUNC_NV 0x90B7
#define GL_PATH_STENCIL_REF_NV 0x90B8
#define GL_PATH_STENCIL_VALUE_MASK_NV 0x90B9
#define GL_PATH_STENCIL_DEPTH_OFFSET_FACTOR_NV 0x90BD
#define GL_PATH_STENCIL_DEPTH_OFFSET_UNITS_NV 0x90BE
#define GL_PATH_COVER_DEPTH_FUNC_NV 0x90BF
#define GL_PATH_DASH_OFFSET_RESET_NV 0x90B4
#define GL_MOVE_TO_RESETS_NV 0x90B5
#define GL_MOVE_TO_CONTINUES_NV 0x90B6
#define GL_CLOSE_PATH_NV 0x00
#define GL_MOVE_TO_NV 0x02
#define GL_RELATIVE_MOVE_TO_NV 0x03
#define GL_LINE_TO_NV 0x04
#define GL_RELATIVE_LINE_TO_NV 0x05
#define GL_HORIZONTAL_LINE_TO_NV 0x06
#define GL_RELATIVE_HORIZONTAL_LINE_TO_NV 0x07
#define GL_VERTICAL_LINE_TO_NV 0x08
#define GL_RELATIVE_VERTICAL_LINE_TO_NV 0x09
#define GL_QUADRATIC_CURVE_TO_NV 0x0A
#define GL_RELATIVE_QUADRATIC_CURVE_TO_NV 0x0B
#define GL_CUBIC_CURVE_TO_NV 0x0C
#define GL_RELATIVE_CUBIC_CURVE_TO_NV 0x0D
#define GL_SMOOTH_QUADRATIC_CURVE_TO_NV 0x0E
#define GL_RELATIVE_SMOOTH_QUADRATIC_CURVE_TO_NV 0x0F
#define GL_SMOOTH_CUBIC_CURVE_TO_NV 0x10
#define GL_RELATIVE_SMOOTH_CUBIC_CURVE_TO_NV 0x11
#define GL_SMALL_CCW_ARC_TO_NV 0x12
#define GL_RELATIVE_SMALL_CCW_ARC_TO_NV 0x13
#define GL_SMALL_CW_ARC_TO_NV 0x14
#define GL_RELATIVE_SMALL_CW_ARC_TO_NV 0x15
#define GL_LARGE_CCW_ARC_TO_NV 0x16
#define GL_RELATIVE_LARGE_CCW_ARC_TO_NV 0x17
#define GL_LARGE_CW_ARC_TO_NV 0x18
#define GL_RELATIVE_LARGE_CW_ARC_TO_NV 0x19
#define GL_RESTART_PATH_NV 0xF0
#define GL_DUP_FIRST_CUBIC_CURVE_TO_NV 0xF2
#define GL_DUP_LAST_CUBIC_CURVE_TO_NV 0xF4
#define GL_RECT_NV 0xF6
#define GL_CIRCULAR_CCW_ARC_TO_NV 0xF8
#define GL_CIRCULAR_CW_ARC_TO_NV 0xFA
#define GL_CIRCULAR_TANGENT_ARC_TO_NV 0xFC
#define GL_ARC_TO_NV 0xFE
#define GL_RELATIVE_ARC_TO_NV 0xFF
#define GL_BOLD_BIT_NV 0x01
#define GL_ITALIC_BIT_NV 0x02
#define GL_GLYPH_WIDTH_BIT_NV 0x01
#define GL_GLYPH_HEIGHT_BIT_NV 0x02
#define GL_GLYPH_HORIZONTAL_BEARING_X_BIT_NV 0x04
#define GL_GLYPH_HORIZONTAL_BEARING_Y_BIT_NV 0x08
#define GL_GLYPH_HORIZONTAL_BEARING_ADVANCE_BIT_NV 0x10
#define GL_GLYPH_VERTICAL_BEARING_X_BIT_NV 0x20
#define GL_GLYPH_VERTICAL_BEARING_Y_BIT_NV 0x40
#define GL_GLYPH_VERTICAL_BEARING_ADVANCE_BIT_NV 0x80
#define GL_GLYPH_HAS_KERNING_BIT_NV 0x100
#define GL_FONT_X_MIN_BOUNDS_BIT_NV 0x00010000
#define GL_FONT_Y_MIN_BOUNDS_BIT_NV 0x00020000
#define GL_FONT_X_MAX_BOUNDS_BIT_NV 0x00040000
#define GL_FONT_Y_MAX_BOUNDS_BIT_NV 0x00080000
#define GL_FONT_UNITS_PER_EM_BIT_NV 0x00100000
#define GL_FONT_ASCENDER_BIT_NV 0x00200000
#define GL_FONT_DESCENDER_BIT_NV 0x00400000
#define GL_FONT_HEIGHT_BIT_NV 0x00800000
#define GL_FONT_MAX_ADVANCE_WIDTH_BIT_NV 0x01000000
#define GL_FONT_MAX_ADVANCE_HEIGHT_BIT_NV 0x02000000
#define GL_FONT_UNDERLINE_POSITION_BIT_NV 0x04000000
#define GL_FONT_UNDERLINE_THICKNESS_BIT_NV 0x08000000
#define GL_FONT_HAS_KERNING_BIT_NV 0x10000000
#define GL_ROUNDED_RECT_NV 0xE8
#define GL_RELATIVE_ROUNDED_RECT_NV 0xE9
#define GL_ROUNDED_RECT2_NV 0xEA
#define GL_RELATIVE_ROUNDED_RECT2_NV 0xEB
#define GL_ROUNDED_RECT4_NV 0xEC
#define GL_RELATIVE_ROUNDED_RECT4_NV 0xED
#define GL_ROUNDED_RECT8_NV 0xEE
#define GL_RELATIVE_ROUNDED_RECT8_NV 0xEF
#define GL_RELATIVE_RECT_NV 0xF7
#define GL_FONT_GLYPHS_AVAILABLE_NV 0x9368
#define GL_FONT_TARGET_UNAVAILABLE_NV 0x9369
#define GL_FONT_UNAVAILABLE_NV 0x936A
#define GL_FONT_UNINTELLIGIBLE_NV 0x936B
#define GL_CONIC_CURVE_TO_NV 0x1A
#define GL_RELATIVE_CONIC_CURVE_TO_NV 0x1B
#define GL_FONT_NUM_GLYPH_INDICES_BIT_NV 0x20000000
#define GL_STANDARD_FONT_FORMAT_NV 0x936C
#define GL_2_BYTES_NV 0x1407
#define GL_3_BYTES_NV 0x1408
#define GL_4_BYTES_NV 0x1409
#define GL_EYE_LINEAR_NV 0x2400
#define GL_OBJECT_LINEAR_NV 0x2401
#define GL_CONSTANT_NV 0x8576
#define GL_PATH_FOG_GEN_MODE_NV 0x90AC
#define GL_PRIMARY_COLOR_NV 0x852C
#define GL_SECONDARY_COLOR_NV 0x852D
#define GL_PATH_GEN_COLOR_FORMAT_NV 0x90B2
#define GL_PATH_PROJECTION_NV 0x1701
#define GL_PATH_MODELVIEW_NV 0x1700
#define GL_PATH_MODELVIEW_STACK_DEPTH_NV 0x0BA3
#define GL_PATH_MODELVIEW_MATRIX_NV 0x0BA6
#define GL_PATH_MAX_MODELVIEW_STACK_DEPTH_NV 0x0D36
#define GL_PATH_TRANSPOSE_MODELVIEW_MATRIX_NV 0x84E3
#define GL_PATH_PROJECTION_STACK_DEPTH_NV 0x0BA4
#define GL_PATH_PROJECTION_MATRIX_NV 0x0BA7
#define GL_PATH_MAX_PROJECTION_STACK_DEPTH_NV 0x0D38
#define GL_PATH_TRANSPOSE_PROJECTION_MATRIX_NV 0x84E4
#define GL_FRAGMENT_INPUT_NV 0x936D

typedef GLuint  (*glGenPathsNV_function)(GLsizei range);
glGenPathsNV_function glGenPathsNV;

typedef void (*glDeletePathsNV_function)(GLuint path, GLsizei range);
glDeletePathsNV_function glDeletePathsNV;

typedef GLboolean  (*glIsPathNV_function)(GLuint path);
glIsPathNV_function glIsPathNV;

typedef void (*glPathCommandsNV_function)(GLuint path, GLsizei numCommands, GLubyte *commands, GLsizei numCoords, GLenum coordType, void * coords);
glPathCommandsNV_function glPathCommandsNV;

typedef void (*glPathCoordsNV_function)(GLuint path, GLsizei numCoords, GLenum coordType, void * coords);
glPathCoordsNV_function glPathCoordsNV;

typedef void (*glPathSubCommandsNV_function)(GLuint path, GLsizei commandStart, GLsizei commandsToDelete, GLsizei numCommands, GLubyte *commands, GLsizei numCoords, GLenum coordType, void * coords);
glPathSubCommandsNV_function glPathSubCommandsNV;

typedef void (*glPathSubCoordsNV_function)(GLuint path, GLsizei coordStart, GLsizei numCoords, GLenum coordType, void * coords);
glPathSubCoordsNV_function glPathSubCoordsNV;

typedef void (*glPathStringNV_function)(GLuint path, GLenum format, GLsizei length, void * pathString);
glPathStringNV_function glPathStringNV;

typedef void (*glPathGlyphsNV_function)(GLuint firstPathName, GLenum fontTarget, void * fontName, GLbitfield fontStyle, GLsizei numGlyphs, GLenum type, void * charcodes, GLenum handleMissingGlyphs, GLuint pathParameterTemplate, GLfloat emScale);
glPathGlyphsNV_function glPathGlyphsNV;

typedef void (*glPathGlyphRangeNV_function)(GLuint firstPathName, GLenum fontTarget, void * fontName, GLbitfield fontStyle, GLuint firstGlyph, GLsizei numGlyphs, GLenum handleMissingGlyphs, GLuint pathParameterTemplate, GLfloat emScale);
glPathGlyphRangeNV_function glPathGlyphRangeNV;

typedef void (*glWeightPathsNV_function)(GLuint resultPath, GLsizei numPaths, GLuint *paths, GLfloat *weights);
glWeightPathsNV_function glWeightPathsNV;

typedef void (*glCopyPathNV_function)(GLuint resultPath, GLuint srcPath);
glCopyPathNV_function glCopyPathNV;

typedef void (*glInterpolatePathsNV_function)(GLuint resultPath, GLuint pathA, GLuint pathB, GLfloat weight);
glInterpolatePathsNV_function glInterpolatePathsNV;

typedef void (*glTransformPathNV_function)(GLuint resultPath, GLuint srcPath, GLenum transformType, GLfloat *transformValues);
glTransformPathNV_function glTransformPathNV;

typedef void (*glPathParameterivNV_function)(GLuint path, GLenum pname, GLint *value);
glPathParameterivNV_function glPathParameterivNV;

typedef void (*glPathParameteriNV_function)(GLuint path, GLenum pname, GLint value);
glPathParameteriNV_function glPathParameteriNV;

typedef void (*glPathParameterfvNV_function)(GLuint path, GLenum pname, GLfloat *value);
glPathParameterfvNV_function glPathParameterfvNV;

typedef void (*glPathParameterfNV_function)(GLuint path, GLenum pname, GLfloat value);
glPathParameterfNV_function glPathParameterfNV;

typedef void (*glPathDashArrayNV_function)(GLuint path, GLsizei dashCount, GLfloat *dashArray);
glPathDashArrayNV_function glPathDashArrayNV;

typedef void (*glPathStencilFuncNV_function)(GLenum func, GLint ref, GLuint mask);
glPathStencilFuncNV_function glPathStencilFuncNV;

typedef void (*glPathStencilDepthOffsetNV_function)(GLfloat factor, GLfloat units);
glPathStencilDepthOffsetNV_function glPathStencilDepthOffsetNV;

typedef void (*glStencilFillPathNV_function)(GLuint path, GLenum fillMode, GLuint mask);
glStencilFillPathNV_function glStencilFillPathNV;

typedef void (*glStencilStrokePathNV_function)(GLuint path, GLint reference, GLuint mask);
glStencilStrokePathNV_function glStencilStrokePathNV;

typedef void (*glStencilFillPathInstancedNV_function)(GLsizei numPaths, GLenum pathNameType, void * paths, GLuint pathBase, GLenum fillMode, GLuint mask, GLenum transformType, GLfloat *transformValues);
glStencilFillPathInstancedNV_function glStencilFillPathInstancedNV;

typedef void (*glStencilStrokePathInstancedNV_function)(GLsizei numPaths, GLenum pathNameType, void * paths, GLuint pathBase, GLint reference, GLuint mask, GLenum transformType, GLfloat *transformValues);
glStencilStrokePathInstancedNV_function glStencilStrokePathInstancedNV;

typedef void (*glPathCoverDepthFuncNV_function)(GLenum func);
glPathCoverDepthFuncNV_function glPathCoverDepthFuncNV;

typedef void (*glCoverFillPathNV_function)(GLuint path, GLenum coverMode);
glCoverFillPathNV_function glCoverFillPathNV;

typedef void (*glCoverStrokePathNV_function)(GLuint path, GLenum coverMode);
glCoverStrokePathNV_function glCoverStrokePathNV;

typedef void (*glCoverFillPathInstancedNV_function)(GLsizei numPaths, GLenum pathNameType, void * paths, GLuint pathBase, GLenum coverMode, GLenum transformType, GLfloat *transformValues);
glCoverFillPathInstancedNV_function glCoverFillPathInstancedNV;

typedef void (*glCoverStrokePathInstancedNV_function)(GLsizei numPaths, GLenum pathNameType, void * paths, GLuint pathBase, GLenum coverMode, GLenum transformType, GLfloat *transformValues);
glCoverStrokePathInstancedNV_function glCoverStrokePathInstancedNV;

typedef void (*glGetPathParameterivNV_function)(GLuint path, GLenum pname, GLint *value);
glGetPathParameterivNV_function glGetPathParameterivNV;

typedef void (*glGetPathParameterfvNV_function)(GLuint path, GLenum pname, GLfloat *value);
glGetPathParameterfvNV_function glGetPathParameterfvNV;

typedef void (*glGetPathCommandsNV_function)(GLuint path, GLubyte *commands);
glGetPathCommandsNV_function glGetPathCommandsNV;

typedef void (*glGetPathCoordsNV_function)(GLuint path, GLfloat *coords);
glGetPathCoordsNV_function glGetPathCoordsNV;

typedef void (*glGetPathDashArrayNV_function)(GLuint path, GLfloat *dashArray);
glGetPathDashArrayNV_function glGetPathDashArrayNV;

typedef void (*glGetPathMetricsNV_function)(GLbitfield metricQueryMask, GLsizei numPaths, GLenum pathNameType, void * paths, GLuint pathBase, GLsizei stride, GLfloat *metrics);
glGetPathMetricsNV_function glGetPathMetricsNV;

typedef void (*glGetPathMetricRangeNV_function)(GLbitfield metricQueryMask, GLuint firstPathName, GLsizei numPaths, GLsizei stride, GLfloat *metrics);
glGetPathMetricRangeNV_function glGetPathMetricRangeNV;

typedef void (*glGetPathSpacingNV_function)(GLenum pathListMode, GLsizei numPaths, GLenum pathNameType, void * paths, GLuint pathBase, GLfloat advanceScale, GLfloat kerningScale, GLenum transformType, GLfloat *returnedSpacing);
glGetPathSpacingNV_function glGetPathSpacingNV;

typedef GLboolean  (*glIsPointInFillPathNV_function)(GLuint path, GLuint mask, GLfloat x, GLfloat y);
glIsPointInFillPathNV_function glIsPointInFillPathNV;

typedef GLboolean  (*glIsPointInStrokePathNV_function)(GLuint path, GLfloat x, GLfloat y);
glIsPointInStrokePathNV_function glIsPointInStrokePathNV;

typedef GLfloat  (*glGetPathLengthNV_function)(GLuint path, GLsizei startSegment, GLsizei numSegments);
glGetPathLengthNV_function glGetPathLengthNV;

typedef GLboolean  (*glPointAlongPathNV_function)(GLuint path, GLsizei startSegment, GLsizei numSegments, GLfloat distance, GLfloat *x, GLfloat *y, GLfloat *tangentX, GLfloat *tangentY);
glPointAlongPathNV_function glPointAlongPathNV;

typedef void (*glMatrixLoad3x2fNV_function)(GLenum matrixMode, GLfloat *m);
glMatrixLoad3x2fNV_function glMatrixLoad3x2fNV;

typedef void (*glMatrixLoad3x3fNV_function)(GLenum matrixMode, GLfloat *m);
glMatrixLoad3x3fNV_function glMatrixLoad3x3fNV;

typedef void (*glMatrixLoadTranspose3x3fNV_function)(GLenum matrixMode, GLfloat *m);
glMatrixLoadTranspose3x3fNV_function glMatrixLoadTranspose3x3fNV;

typedef void (*glMatrixMult3x2fNV_function)(GLenum matrixMode, GLfloat *m);
glMatrixMult3x2fNV_function glMatrixMult3x2fNV;

typedef void (*glMatrixMult3x3fNV_function)(GLenum matrixMode, GLfloat *m);
glMatrixMult3x3fNV_function glMatrixMult3x3fNV;

typedef void (*glMatrixMultTranspose3x3fNV_function)(GLenum matrixMode, GLfloat *m);
glMatrixMultTranspose3x3fNV_function glMatrixMultTranspose3x3fNV;

typedef void (*glStencilThenCoverFillPathNV_function)(GLuint path, GLenum fillMode, GLuint mask, GLenum coverMode);
glStencilThenCoverFillPathNV_function glStencilThenCoverFillPathNV;

typedef void (*glStencilThenCoverStrokePathNV_function)(GLuint path, GLint reference, GLuint mask, GLenum coverMode);
glStencilThenCoverStrokePathNV_function glStencilThenCoverStrokePathNV;

typedef void (*glStencilThenCoverFillPathInstancedNV_function)(GLsizei numPaths, GLenum pathNameType, void * paths, GLuint pathBase, GLenum fillMode, GLuint mask, GLenum coverMode, GLenum transformType, GLfloat *transformValues);
glStencilThenCoverFillPathInstancedNV_function glStencilThenCoverFillPathInstancedNV;

typedef void (*glStencilThenCoverStrokePathInstancedNV_function)(GLsizei numPaths, GLenum pathNameType, void * paths, GLuint pathBase, GLint reference, GLuint mask, GLenum coverMode, GLenum transformType, GLfloat *transformValues);
glStencilThenCoverStrokePathInstancedNV_function glStencilThenCoverStrokePathInstancedNV;

typedef GLenum  (*glPathGlyphIndexRangeNV_function)(GLenum fontTarget, void * fontName, GLbitfield fontStyle, GLuint pathParameterTemplate, GLfloat emScale, GLuint *baseAndCount);
glPathGlyphIndexRangeNV_function glPathGlyphIndexRangeNV;

typedef GLenum  (*glPathGlyphIndexArrayNV_function)(GLuint firstPathName, GLenum fontTarget, void * fontName, GLbitfield fontStyle, GLuint firstGlyphIndex, GLsizei numGlyphs, GLuint pathParameterTemplate, GLfloat emScale);
glPathGlyphIndexArrayNV_function glPathGlyphIndexArrayNV;

typedef GLenum  (*glPathMemoryGlyphIndexArrayNV_function)(GLuint firstPathName, GLenum fontTarget, GLsizeiptr fontSize, void * fontData, GLsizei faceIndex, GLuint firstGlyphIndex, GLsizei numGlyphs, GLuint pathParameterTemplate, GLfloat emScale);
glPathMemoryGlyphIndexArrayNV_function glPathMemoryGlyphIndexArrayNV;

typedef void (*glProgramPathFragmentInputGenNV_function)(GLuint program, GLint location, GLenum genMode, GLint components, GLfloat *coeffs);
glProgramPathFragmentInputGenNV_function glProgramPathFragmentInputGenNV;

typedef void (*glGetProgramResourcefvNV_function)(GLuint program, GLenum programInterface, GLuint index, GLsizei propCount, GLenum *props, GLsizei count, GLsizei *length, GLfloat *params);
glGetProgramResourcefvNV_function glGetProgramResourcefvNV;

typedef void (*glPathColorGenNV_function)(GLenum color, GLenum genMode, GLenum colorFormat, GLfloat *coeffs);
glPathColorGenNV_function glPathColorGenNV;

typedef void (*glPathTexGenNV_function)(GLenum texCoordSet, GLenum genMode, GLint components, GLfloat *coeffs);
glPathTexGenNV_function glPathTexGenNV;

typedef void (*glPathFogGenNV_function)(GLenum genMode);
glPathFogGenNV_function glPathFogGenNV;

typedef void (*glGetPathColorGenivNV_function)(GLenum color, GLenum pname, GLint *value);
glGetPathColorGenivNV_function glGetPathColorGenivNV;

typedef void (*glGetPathColorGenfvNV_function)(GLenum color, GLenum pname, GLfloat *value);
glGetPathColorGenfvNV_function glGetPathColorGenfvNV;

typedef void (*glGetPathTexGenivNV_function)(GLenum texCoordSet, GLenum pname, GLint *value);
glGetPathTexGenivNV_function glGetPathTexGenivNV;

typedef void (*glGetPathTexGenfvNV_function)(GLenum texCoordSet, GLenum pname, GLfloat *value);
glGetPathTexGenfvNV_function glGetPathTexGenfvNV;
#define GL_NV_path_rendering_shared_edge 1
#define GL_SHARED_EDGE_NV 0xC0
#define GL_NV_pixel_data_range 1
#define GL_WRITE_PIXEL_DATA_RANGE_NV 0x8878
#define GL_READ_PIXEL_DATA_RANGE_NV 0x8879
#define GL_WRITE_PIXEL_DATA_RANGE_LENGTH_NV 0x887A
#define GL_READ_PIXEL_DATA_RANGE_LENGTH_NV 0x887B
#define GL_WRITE_PIXEL_DATA_RANGE_POINTER_NV 0x887C
#define GL_READ_PIXEL_DATA_RANGE_POINTER_NV 0x887D

typedef void (*glPixelDataRangeNV_function)(GLenum target, GLsizei length, void * pointer);
glPixelDataRangeNV_function glPixelDataRangeNV;

typedef void (*glFlushPixelDataRangeNV_function)(GLenum target);
glFlushPixelDataRangeNV_function glFlushPixelDataRangeNV;
#define GL_NV_point_sprite 1
#define GL_POINT_SPRITE_NV 0x8861
#define GL_COORD_REPLACE_NV 0x8862
#define GL_POINT_SPRITE_R_MODE_NV 0x8863

typedef void (*glPointParameteriNV_function)(GLenum pname, GLint param);
glPointParameteriNV_function glPointParameteriNV;

typedef void (*glPointParameterivNV_function)(GLenum pname, GLint *params);
glPointParameterivNV_function glPointParameterivNV;
#define GL_NV_present_video 1
#define GL_FRAME_NV 0x8E26
#define GL_FIELDS_NV 0x8E27
#define GL_CURRENT_TIME_NV 0x8E28
#define GL_NUM_FILL_STREAMS_NV 0x8E29
#define GL_PRESENT_TIME_NV 0x8E2A
#define GL_PRESENT_DURATION_NV 0x8E2B

typedef void (*glPresentFrameKeyedNV_function)(GLuint video_slot, GLuint64EXT minPresentTime, GLuint beginPresentTimeId, GLuint presentDurationId, GLenum type, GLenum target0, GLuint fill0, GLuint key0, GLenum target1, GLuint fill1, GLuint key1);
glPresentFrameKeyedNV_function glPresentFrameKeyedNV;

typedef void (*glPresentFrameDualFillNV_function)(GLuint video_slot, GLuint64EXT minPresentTime, GLuint beginPresentTimeId, GLuint presentDurationId, GLenum type, GLenum target0, GLuint fill0, GLenum target1, GLuint fill1, GLenum target2, GLuint fill2, GLenum target3, GLuint fill3);
glPresentFrameDualFillNV_function glPresentFrameDualFillNV;

typedef void (*glGetVideoivNV_function)(GLuint video_slot, GLenum pname, GLint *params);
glGetVideoivNV_function glGetVideoivNV;

typedef void (*glGetVideouivNV_function)(GLuint video_slot, GLenum pname, GLuint *params);
glGetVideouivNV_function glGetVideouivNV;

typedef void (*glGetVideoi64vNV_function)(GLuint video_slot, GLenum pname, GLint64EXT *params);
glGetVideoi64vNV_function glGetVideoi64vNV;

typedef void (*glGetVideoui64vNV_function)(GLuint video_slot, GLenum pname, GLuint64EXT *params);
glGetVideoui64vNV_function glGetVideoui64vNV;
#define GL_NV_primitive_restart 1
#define GL_PRIMITIVE_RESTART_NV 0x8558
#define GL_PRIMITIVE_RESTART_INDEX_NV 0x8559

typedef void (*glPrimitiveRestartNV_function)();
glPrimitiveRestartNV_function glPrimitiveRestartNV;

typedef void (*glPrimitiveRestartIndexNV_function)(GLuint index);
glPrimitiveRestartIndexNV_function glPrimitiveRestartIndexNV;
#define GL_NV_primitive_shading_rate 1
#define GL_SHADING_RATE_IMAGE_PER_PRIMITIVE_NV 0x95B1
#define GL_SHADING_RATE_IMAGE_PALETTE_COUNT_NV 0x95B2
#define GL_NV_query_resource 1
#define GL_QUERY_RESOURCE_TYPE_VIDMEM_ALLOC_NV 0x9540
#define GL_QUERY_RESOURCE_MEMTYPE_VIDMEM_NV 0x9542
#define GL_QUERY_RESOURCE_SYS_RESERVED_NV 0x9544
#define GL_QUERY_RESOURCE_TEXTURE_NV 0x9545
#define GL_QUERY_RESOURCE_RENDERBUFFER_NV 0x9546
#define GL_QUERY_RESOURCE_BUFFEROBJECT_NV 0x9547

typedef GLint  (*glQueryResourceNV_function)(GLenum queryType, GLint tagId, GLuint count, GLint *buffer);
glQueryResourceNV_function glQueryResourceNV;
#define GL_NV_query_resource_tag 1

typedef void (*glGenQueryResourceTagNV_function)(GLsizei n, GLint *tagIds);
glGenQueryResourceTagNV_function glGenQueryResourceTagNV;

typedef void (*glDeleteQueryResourceTagNV_function)(GLsizei n, GLint *tagIds);
glDeleteQueryResourceTagNV_function glDeleteQueryResourceTagNV;

typedef void (*glQueryResourceTagNV_function)(GLint tagId, GLchar *tagString);
glQueryResourceTagNV_function glQueryResourceTagNV;
#define GL_NV_register_combiners 1
#define GL_REGISTER_COMBINERS_NV 0x8522
#define GL_VARIABLE_A_NV 0x8523
#define GL_VARIABLE_B_NV 0x8524
#define GL_VARIABLE_C_NV 0x8525
#define GL_VARIABLE_D_NV 0x8526
#define GL_VARIABLE_E_NV 0x8527
#define GL_VARIABLE_F_NV 0x8528
#define GL_VARIABLE_G_NV 0x8529
#define GL_CONSTANT_COLOR0_NV 0x852A
#define GL_CONSTANT_COLOR1_NV 0x852B
#define GL_SPARE0_NV 0x852E
#define GL_SPARE1_NV 0x852F
#define GL_DISCARD_NV 0x8530
#define GL_E_TIMES_F_NV 0x8531
#define GL_SPARE0_PLUS_SECONDARY_COLOR_NV 0x8532
#define GL_UNSIGNED_IDENTITY_NV 0x8536
#define GL_UNSIGNED_INVERT_NV 0x8537
#define GL_EXPAND_NORMAL_NV 0x8538
#define GL_EXPAND_NEGATE_NV 0x8539
#define GL_HALF_BIAS_NORMAL_NV 0x853A
#define GL_HALF_BIAS_NEGATE_NV 0x853B
#define GL_SIGNED_IDENTITY_NV 0x853C
#define GL_SIGNED_NEGATE_NV 0x853D
#define GL_SCALE_BY_TWO_NV 0x853E
#define GL_SCALE_BY_FOUR_NV 0x853F
#define GL_SCALE_BY_ONE_HALF_NV 0x8540
#define GL_BIAS_BY_NEGATIVE_ONE_HALF_NV 0x8541
#define GL_COMBINER_INPUT_NV 0x8542
#define GL_COMBINER_MAPPING_NV 0x8543
#define GL_COMBINER_COMPONENT_USAGE_NV 0x8544
#define GL_COMBINER_AB_DOT_PRODUCT_NV 0x8545
#define GL_COMBINER_CD_DOT_PRODUCT_NV 0x8546
#define GL_COMBINER_MUX_SUM_NV 0x8547
#define GL_COMBINER_SCALE_NV 0x8548
#define GL_COMBINER_BIAS_NV 0x8549
#define GL_COMBINER_AB_OUTPUT_NV 0x854A
#define GL_COMBINER_CD_OUTPUT_NV 0x854B
#define GL_COMBINER_SUM_OUTPUT_NV 0x854C
#define GL_MAX_GENERAL_COMBINERS_NV 0x854D
#define GL_NUM_GENERAL_COMBINERS_NV 0x854E
#define GL_COLOR_SUM_CLAMP_NV 0x854F
#define GL_COMBINER0_NV 0x8550
#define GL_COMBINER1_NV 0x8551
#define GL_COMBINER2_NV 0x8552
#define GL_COMBINER3_NV 0x8553
#define GL_COMBINER4_NV 0x8554
#define GL_COMBINER5_NV 0x8555
#define GL_COMBINER6_NV 0x8556
#define GL_COMBINER7_NV 0x8557

typedef void (*glCombinerParameterfvNV_function)(GLenum pname, GLfloat *params);
glCombinerParameterfvNV_function glCombinerParameterfvNV;

typedef void (*glCombinerParameterfNV_function)(GLenum pname, GLfloat param);
glCombinerParameterfNV_function glCombinerParameterfNV;

typedef void (*glCombinerParameterivNV_function)(GLenum pname, GLint *params);
glCombinerParameterivNV_function glCombinerParameterivNV;

typedef void (*glCombinerParameteriNV_function)(GLenum pname, GLint param);
glCombinerParameteriNV_function glCombinerParameteriNV;

typedef void (*glCombinerInputNV_function)(GLenum stage, GLenum portion, GLenum variable, GLenum input, GLenum mapping, GLenum componentUsage);
glCombinerInputNV_function glCombinerInputNV;

typedef void (*glCombinerOutputNV_function)(GLenum stage, GLenum portion, GLenum abOutput, GLenum cdOutput, GLenum sumOutput, GLenum scale, GLenum bias, GLboolean abDotProduct, GLboolean cdDotProduct, GLboolean muxSum);
glCombinerOutputNV_function glCombinerOutputNV;

typedef void (*glFinalCombinerInputNV_function)(GLenum variable, GLenum input, GLenum mapping, GLenum componentUsage);
glFinalCombinerInputNV_function glFinalCombinerInputNV;

typedef void (*glGetCombinerInputParameterfvNV_function)(GLenum stage, GLenum portion, GLenum variable, GLenum pname, GLfloat *params);
glGetCombinerInputParameterfvNV_function glGetCombinerInputParameterfvNV;

typedef void (*glGetCombinerInputParameterivNV_function)(GLenum stage, GLenum portion, GLenum variable, GLenum pname, GLint *params);
glGetCombinerInputParameterivNV_function glGetCombinerInputParameterivNV;

typedef void (*glGetCombinerOutputParameterfvNV_function)(GLenum stage, GLenum portion, GLenum pname, GLfloat *params);
glGetCombinerOutputParameterfvNV_function glGetCombinerOutputParameterfvNV;

typedef void (*glGetCombinerOutputParameterivNV_function)(GLenum stage, GLenum portion, GLenum pname, GLint *params);
glGetCombinerOutputParameterivNV_function glGetCombinerOutputParameterivNV;

typedef void (*glGetFinalCombinerInputParameterfvNV_function)(GLenum variable, GLenum pname, GLfloat *params);
glGetFinalCombinerInputParameterfvNV_function glGetFinalCombinerInputParameterfvNV;

typedef void (*glGetFinalCombinerInputParameterivNV_function)(GLenum variable, GLenum pname, GLint *params);
glGetFinalCombinerInputParameterivNV_function glGetFinalCombinerInputParameterivNV;
#define GL_NV_register_combiners2 1
#define GL_PER_STAGE_CONSTANTS_NV 0x8535

typedef void (*glCombinerStageParameterfvNV_function)(GLenum stage, GLenum pname, GLfloat *params);
glCombinerStageParameterfvNV_function glCombinerStageParameterfvNV;

typedef void (*glGetCombinerStageParameterfvNV_function)(GLenum stage, GLenum pname, GLfloat *params);
glGetCombinerStageParameterfvNV_function glGetCombinerStageParameterfvNV;
#define GL_NV_representative_fragment_test 1
#define GL_REPRESENTATIVE_FRAGMENT_TEST_NV 0x937F
#define GL_NV_robustness_video_memory_purge 1
#define GL_PURGED_CONTEXT_RESET_NV 0x92BB
#define GL_NV_sample_locations 1
#define GL_SAMPLE_LOCATION_SUBPIXEL_BITS_NV 0x933D
#define GL_SAMPLE_LOCATION_PIXEL_GRID_WIDTH_NV 0x933E
#define GL_SAMPLE_LOCATION_PIXEL_GRID_HEIGHT_NV 0x933F
#define GL_PROGRAMMABLE_SAMPLE_LOCATION_TABLE_SIZE_NV 0x9340
#define GL_SAMPLE_LOCATION_NV 0x8E50
#define GL_PROGRAMMABLE_SAMPLE_LOCATION_NV 0x9341
#define GL_FRAMEBUFFER_PROGRAMMABLE_SAMPLE_LOCATIONS_NV 0x9342
#define GL_FRAMEBUFFER_SAMPLE_LOCATION_PIXEL_GRID_NV 0x9343

typedef void (*glFramebufferSampleLocationsfvNV_function)(GLenum target, GLuint start, GLsizei count, GLfloat *v);
glFramebufferSampleLocationsfvNV_function glFramebufferSampleLocationsfvNV;

typedef void (*glNamedFramebufferSampleLocationsfvNV_function)(GLuint framebuffer, GLuint start, GLsizei count, GLfloat *v);
glNamedFramebufferSampleLocationsfvNV_function glNamedFramebufferSampleLocationsfvNV;

typedef void (*glResolveDepthValuesNV_function)();
glResolveDepthValuesNV_function glResolveDepthValuesNV;
#define GL_NV_sample_mask_override_coverage 1
#define GL_NV_scissor_exclusive 1
#define GL_SCISSOR_TEST_EXCLUSIVE_NV 0x9555
#define GL_SCISSOR_BOX_EXCLUSIVE_NV 0x9556

typedef void (*glScissorExclusiveNV_function)(GLint x, GLint y, GLsizei width, GLsizei height);
glScissorExclusiveNV_function glScissorExclusiveNV;

typedef void (*glScissorExclusiveArrayvNV_function)(GLuint first, GLsizei count, GLint *v);
glScissorExclusiveArrayvNV_function glScissorExclusiveArrayvNV;
#define GL_NV_shader_atomic_counters 1
#define GL_NV_shader_atomic_float 1
#define GL_NV_shader_atomic_float64 1
#define GL_NV_shader_atomic_fp16_vector 1
#define GL_NV_shader_atomic_int64 1
#define GL_NV_shader_buffer_load 1
#define GL_BUFFER_GPU_ADDRESS_NV 0x8F1D
#define GL_GPU_ADDRESS_NV 0x8F34
#define GL_MAX_SHADER_BUFFER_ADDRESS_NV 0x8F35

typedef void (*glMakeBufferResidentNV_function)(GLenum target, GLenum access);
glMakeBufferResidentNV_function glMakeBufferResidentNV;

typedef void (*glMakeBufferNonResidentNV_function)(GLenum target);
glMakeBufferNonResidentNV_function glMakeBufferNonResidentNV;

typedef GLboolean  (*glIsBufferResidentNV_function)(GLenum target);
glIsBufferResidentNV_function glIsBufferResidentNV;

typedef void (*glMakeNamedBufferResidentNV_function)(GLuint buffer, GLenum access);
glMakeNamedBufferResidentNV_function glMakeNamedBufferResidentNV;

typedef void (*glMakeNamedBufferNonResidentNV_function)(GLuint buffer);
glMakeNamedBufferNonResidentNV_function glMakeNamedBufferNonResidentNV;

typedef GLboolean  (*glIsNamedBufferResidentNV_function)(GLuint buffer);
glIsNamedBufferResidentNV_function glIsNamedBufferResidentNV;

typedef void (*glGetBufferParameterui64vNV_function)(GLenum target, GLenum pname, GLuint64EXT *params);
glGetBufferParameterui64vNV_function glGetBufferParameterui64vNV;

typedef void (*glGetNamedBufferParameterui64vNV_function)(GLuint buffer, GLenum pname, GLuint64EXT *params);
glGetNamedBufferParameterui64vNV_function glGetNamedBufferParameterui64vNV;

typedef void (*glGetIntegerui64vNV_function)(GLenum value, GLuint64EXT *result);
glGetIntegerui64vNV_function glGetIntegerui64vNV;

typedef void (*glUniformui64NV_function)(GLint location, GLuint64EXT value);
glUniformui64NV_function glUniformui64NV;

typedef void (*glUniformui64vNV_function)(GLint location, GLsizei count, GLuint64EXT *value);
glUniformui64vNV_function glUniformui64vNV;

typedef void (*glProgramUniformui64NV_function)(GLuint program, GLint location, GLuint64EXT value);
glProgramUniformui64NV_function glProgramUniformui64NV;

typedef void (*glProgramUniformui64vNV_function)(GLuint program, GLint location, GLsizei count, GLuint64EXT *value);
glProgramUniformui64vNV_function glProgramUniformui64vNV;
#define GL_NV_shader_buffer_store 1
#define GL_SHADER_GLOBAL_ACCESS_BARRIER_BIT_NV 0x00000010
#define GL_NV_shader_storage_buffer_object 1
#define GL_NV_shader_subgroup_partitioned 1
#define GL_SUBGROUP_FEATURE_PARTITIONED_BIT_NV 0x00000100
#define GL_NV_shader_texture_footprint 1
#define GL_NV_shader_thread_group 1
#define GL_WARP_SIZE_NV 0x9339
#define GL_WARPS_PER_SM_NV 0x933A
#define GL_SM_COUNT_NV 0x933B
#define GL_NV_shader_thread_shuffle 1
#define GL_NV_shading_rate_image 1
#define GL_SHADING_RATE_IMAGE_NV 0x9563
#define GL_SHADING_RATE_NO_INVOCATIONS_NV 0x9564
#define GL_SHADING_RATE_1_INVOCATION_PER_PIXEL_NV 0x9565
#define GL_SHADING_RATE_1_INVOCATION_PER_1X2_PIXELS_NV 0x9566
#define GL_SHADING_RATE_1_INVOCATION_PER_2X1_PIXELS_NV 0x9567
#define GL_SHADING_RATE_1_INVOCATION_PER_2X2_PIXELS_NV 0x9568
#define GL_SHADING_RATE_1_INVOCATION_PER_2X4_PIXELS_NV 0x9569
#define GL_SHADING_RATE_1_INVOCATION_PER_4X2_PIXELS_NV 0x956A
#define GL_SHADING_RATE_1_INVOCATION_PER_4X4_PIXELS_NV 0x956B
#define GL_SHADING_RATE_2_INVOCATIONS_PER_PIXEL_NV 0x956C
#define GL_SHADING_RATE_4_INVOCATIONS_PER_PIXEL_NV 0x956D
#define GL_SHADING_RATE_8_INVOCATIONS_PER_PIXEL_NV 0x956E
#define GL_SHADING_RATE_16_INVOCATIONS_PER_PIXEL_NV 0x956F
#define GL_SHADING_RATE_IMAGE_BINDING_NV 0x955B
#define GL_SHADING_RATE_IMAGE_TEXEL_WIDTH_NV 0x955C
#define GL_SHADING_RATE_IMAGE_TEXEL_HEIGHT_NV 0x955D
#define GL_SHADING_RATE_IMAGE_PALETTE_SIZE_NV 0x955E
#define GL_MAX_COARSE_FRAGMENT_SAMPLES_NV 0x955F
#define GL_SHADING_RATE_SAMPLE_ORDER_DEFAULT_NV 0x95AE
#define GL_SHADING_RATE_SAMPLE_ORDER_PIXEL_MAJOR_NV 0x95AF
#define GL_SHADING_RATE_SAMPLE_ORDER_SAMPLE_MAJOR_NV 0x95B0

typedef void (*glBindShadingRateImageNV_function)(GLuint texture);
glBindShadingRateImageNV_function glBindShadingRateImageNV;

typedef void (*glGetShadingRateImagePaletteNV_function)(GLuint viewport, GLuint entry, GLenum *rate);
glGetShadingRateImagePaletteNV_function glGetShadingRateImagePaletteNV;

typedef void (*glGetShadingRateSampleLocationivNV_function)(GLenum rate, GLuint samples, GLuint index, GLint *location);
glGetShadingRateSampleLocationivNV_function glGetShadingRateSampleLocationivNV;

typedef void (*glShadingRateImageBarrierNV_function)(GLboolean synchronize);
glShadingRateImageBarrierNV_function glShadingRateImageBarrierNV;

typedef void (*glShadingRateImagePaletteNV_function)(GLuint viewport, GLuint first, GLsizei count, GLenum *rates);
glShadingRateImagePaletteNV_function glShadingRateImagePaletteNV;

typedef void (*glShadingRateSampleOrderNV_function)(GLenum order);
glShadingRateSampleOrderNV_function glShadingRateSampleOrderNV;

typedef void (*glShadingRateSampleOrderCustomNV_function)(GLenum rate, GLuint samples, GLint *locations);
glShadingRateSampleOrderCustomNV_function glShadingRateSampleOrderCustomNV;
#define GL_NV_stereo_view_rendering 1
#define GL_NV_tessellation_program5 1
#define GL_MAX_PROGRAM_PATCH_ATTRIBS_NV 0x86D8
#define GL_TESS_CONTROL_PROGRAM_NV 0x891E
#define GL_TESS_EVALUATION_PROGRAM_NV 0x891F
#define GL_TESS_CONTROL_PROGRAM_PARAMETER_BUFFER_NV 0x8C74
#define GL_TESS_EVALUATION_PROGRAM_PARAMETER_BUFFER_NV 0x8C75
#define GL_NV_texgen_emboss 1
#define GL_EMBOSS_LIGHT_NV 0x855D
#define GL_EMBOSS_CONSTANT_NV 0x855E
#define GL_EMBOSS_MAP_NV 0x855F
#define GL_NV_texgen_reflection 1
#define GL_NORMAL_MAP_NV 0x8511
#define GL_REFLECTION_MAP_NV 0x8512
#define GL_NV_texture_barrier 1

typedef void (*glTextureBarrierNV_function)();
glTextureBarrierNV_function glTextureBarrierNV;
#define GL_NV_texture_compression_vtc 1
#define GL_NV_texture_env_combine4 1
#define GL_COMBINE4_NV 0x8503
#define GL_SOURCE3_RGB_NV 0x8583
#define GL_SOURCE3_ALPHA_NV 0x858B
#define GL_OPERAND3_RGB_NV 0x8593
#define GL_OPERAND3_ALPHA_NV 0x859B
#define GL_NV_texture_expand_normal 1
#define GL_TEXTURE_UNSIGNED_REMAP_MODE_NV 0x888F
#define GL_NV_texture_multisample 1
#define GL_TEXTURE_COVERAGE_SAMPLES_NV 0x9045
#define GL_TEXTURE_COLOR_SAMPLES_NV 0x9046

typedef void (*glTexImage2DMultisampleCoverageNV_function)(GLenum target, GLsizei coverageSamples, GLsizei colorSamples, GLint internalFormat, GLsizei width, GLsizei height, GLboolean fixedSampleLocations);
glTexImage2DMultisampleCoverageNV_function glTexImage2DMultisampleCoverageNV;

typedef void (*glTexImage3DMultisampleCoverageNV_function)(GLenum target, GLsizei coverageSamples, GLsizei colorSamples, GLint internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedSampleLocations);
glTexImage3DMultisampleCoverageNV_function glTexImage3DMultisampleCoverageNV;

typedef void (*glTextureImage2DMultisampleNV_function)(GLuint texture, GLenum target, GLsizei samples, GLint internalFormat, GLsizei width, GLsizei height, GLboolean fixedSampleLocations);
glTextureImage2DMultisampleNV_function glTextureImage2DMultisampleNV;

typedef void (*glTextureImage3DMultisampleNV_function)(GLuint texture, GLenum target, GLsizei samples, GLint internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedSampleLocations);
glTextureImage3DMultisampleNV_function glTextureImage3DMultisampleNV;

typedef void (*glTextureImage2DMultisampleCoverageNV_function)(GLuint texture, GLenum target, GLsizei coverageSamples, GLsizei colorSamples, GLint internalFormat, GLsizei width, GLsizei height, GLboolean fixedSampleLocations);
glTextureImage2DMultisampleCoverageNV_function glTextureImage2DMultisampleCoverageNV;

typedef void (*glTextureImage3DMultisampleCoverageNV_function)(GLuint texture, GLenum target, GLsizei coverageSamples, GLsizei colorSamples, GLint internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedSampleLocations);
glTextureImage3DMultisampleCoverageNV_function glTextureImage3DMultisampleCoverageNV;
#define GL_NV_texture_rectangle 1
#define GL_TEXTURE_RECTANGLE_NV 0x84F5
#define GL_TEXTURE_BINDING_RECTANGLE_NV 0x84F6
#define GL_PROXY_TEXTURE_RECTANGLE_NV 0x84F7
#define GL_MAX_RECTANGLE_TEXTURE_SIZE_NV 0x84F8
#define GL_NV_texture_rectangle_compressed 1
#define GL_NV_texture_shader 1
#define GL_OFFSET_TEXTURE_RECTANGLE_NV 0x864C
#define GL_OFFSET_TEXTURE_RECTANGLE_SCALE_NV 0x864D
#define GL_DOT_PRODUCT_TEXTURE_RECTANGLE_NV 0x864E
#define GL_RGBA_UNSIGNED_DOT_PRODUCT_MAPPING_NV 0x86D9
#define GL_UNSIGNED_INT_S8_S8_8_8_NV 0x86DA
#define GL_UNSIGNED_INT_8_8_S8_S8_REV_NV 0x86DB
#define GL_DSDT_MAG_INTENSITY_NV 0x86DC
#define GL_SHADER_CONSISTENT_NV 0x86DD
#define GL_TEXTURE_SHADER_NV 0x86DE
#define GL_SHADER_OPERATION_NV 0x86DF
#define GL_CULL_MODES_NV 0x86E0
#define GL_OFFSET_TEXTURE_MATRIX_NV 0x86E1
#define GL_OFFSET_TEXTURE_SCALE_NV 0x86E2
#define GL_OFFSET_TEXTURE_BIAS_NV 0x86E3
#define GL_OFFSET_TEXTURE_2D_MATRIX_NV 0x86E1
#define GL_OFFSET_TEXTURE_2D_SCALE_NV 0x86E2
#define GL_OFFSET_TEXTURE_2D_BIAS_NV 0x86E3
#define GL_PREVIOUS_TEXTURE_INPUT_NV 0x86E4
#define GL_CONST_EYE_NV 0x86E5
#define GL_PASS_THROUGH_NV 0x86E6
#define GL_CULL_FRAGMENT_NV 0x86E7
#define GL_OFFSET_TEXTURE_2D_NV 0x86E8
#define GL_DEPENDENT_AR_TEXTURE_2D_NV 0x86E9
#define GL_DEPENDENT_GB_TEXTURE_2D_NV 0x86EA
#define GL_DOT_PRODUCT_NV 0x86EC
#define GL_DOT_PRODUCT_DEPTH_REPLACE_NV 0x86ED
#define GL_DOT_PRODUCT_TEXTURE_2D_NV 0x86EE
#define GL_DOT_PRODUCT_TEXTURE_CUBE_MAP_NV 0x86F0
#define GL_DOT_PRODUCT_DIFFUSE_CUBE_MAP_NV 0x86F1
#define GL_DOT_PRODUCT_REFLECT_CUBE_MAP_NV 0x86F2
#define GL_DOT_PRODUCT_CONST_EYE_REFLECT_CUBE_MAP_NV 0x86F3
#define GL_HILO_NV 0x86F4
#define GL_DSDT_NV 0x86F5
#define GL_DSDT_MAG_NV 0x86F6
#define GL_DSDT_MAG_VIB_NV 0x86F7
#define GL_HILO16_NV 0x86F8
#define GL_SIGNED_HILO_NV 0x86F9
#define GL_SIGNED_HILO16_NV 0x86FA
#define GL_SIGNED_RGBA_NV 0x86FB
#define GL_SIGNED_RGBA8_NV 0x86FC
#define GL_SIGNED_RGB_NV 0x86FE
#define GL_SIGNED_RGB8_NV 0x86FF
#define GL_SIGNED_LUMINANCE_NV 0x8701
#define GL_SIGNED_LUMINANCE8_NV 0x8702
#define GL_SIGNED_LUMINANCE_ALPHA_NV 0x8703
#define GL_SIGNED_LUMINANCE8_ALPHA8_NV 0x8704
#define GL_SIGNED_ALPHA_NV 0x8705
#define GL_SIGNED_ALPHA8_NV 0x8706
#define GL_SIGNED_INTENSITY_NV 0x8707
#define GL_SIGNED_INTENSITY8_NV 0x8708
#define GL_DSDT8_NV 0x8709
#define GL_DSDT8_MAG8_NV 0x870A
#define GL_DSDT8_MAG8_INTENSITY8_NV 0x870B
#define GL_SIGNED_RGB_UNSIGNED_ALPHA_NV 0x870C
#define GL_SIGNED_RGB8_UNSIGNED_ALPHA8_NV 0x870D
#define GL_HI_SCALE_NV 0x870E
#define GL_LO_SCALE_NV 0x870F
#define GL_DS_SCALE_NV 0x8710
#define GL_DT_SCALE_NV 0x8711
#define GL_MAGNITUDE_SCALE_NV 0x8712
#define GL_VIBRANCE_SCALE_NV 0x8713
#define GL_HI_BIAS_NV 0x8714
#define GL_LO_BIAS_NV 0x8715
#define GL_DS_BIAS_NV 0x8716
#define GL_DT_BIAS_NV 0x8717
#define GL_MAGNITUDE_BIAS_NV 0x8718
#define GL_VIBRANCE_BIAS_NV 0x8719
#define GL_TEXTURE_BORDER_VALUES_NV 0x871A
#define GL_TEXTURE_HI_SIZE_NV 0x871B
#define GL_TEXTURE_LO_SIZE_NV 0x871C
#define GL_TEXTURE_DS_SIZE_NV 0x871D
#define GL_TEXTURE_DT_SIZE_NV 0x871E
#define GL_TEXTURE_MAG_SIZE_NV 0x871F
#define GL_NV_texture_shader2 1
#define GL_DOT_PRODUCT_TEXTURE_3D_NV 0x86EF
#define GL_NV_texture_shader3 1
#define GL_OFFSET_PROJECTIVE_TEXTURE_2D_NV 0x8850
#define GL_OFFSET_PROJECTIVE_TEXTURE_2D_SCALE_NV 0x8851
#define GL_OFFSET_PROJECTIVE_TEXTURE_RECTANGLE_NV 0x8852
#define GL_OFFSET_PROJECTIVE_TEXTURE_RECTANGLE_SCALE_NV 0x8853
#define GL_OFFSET_HILO_TEXTURE_2D_NV 0x8854
#define GL_OFFSET_HILO_TEXTURE_RECTANGLE_NV 0x8855
#define GL_OFFSET_HILO_PROJECTIVE_TEXTURE_2D_NV 0x8856
#define GL_OFFSET_HILO_PROJECTIVE_TEXTURE_RECTANGLE_NV 0x8857
#define GL_DEPENDENT_HILO_TEXTURE_2D_NV 0x8858
#define GL_DEPENDENT_RGB_TEXTURE_3D_NV 0x8859
#define GL_DEPENDENT_RGB_TEXTURE_CUBE_MAP_NV 0x885A
#define GL_DOT_PRODUCT_PASS_THROUGH_NV 0x885B
#define GL_DOT_PRODUCT_TEXTURE_1D_NV 0x885C
#define GL_DOT_PRODUCT_AFFINE_DEPTH_REPLACE_NV 0x885D
#define GL_HILO8_NV 0x885E
#define GL_SIGNED_HILO8_NV 0x885F
#define GL_FORCE_BLUE_TO_ONE_NV 0x8860
#define GL_NV_timeline_semaphore 1
#define GL_TIMELINE_SEMAPHORE_VALUE_NV 0x9595
#define GL_SEMAPHORE_TYPE_NV 0x95B3
#define GL_SEMAPHORE_TYPE_BINARY_NV 0x95B4
#define GL_SEMAPHORE_TYPE_TIMELINE_NV 0x95B5
#define GL_MAX_TIMELINE_SEMAPHORE_VALUE_DIFFERENCE_NV 0x95B6

typedef void (*glCreateSemaphoresNV_function)(GLsizei n, GLuint *semaphores);
glCreateSemaphoresNV_function glCreateSemaphoresNV;

typedef void (*glSemaphoreParameterivNV_function)(GLuint semaphore, GLenum pname, GLint *params);
glSemaphoreParameterivNV_function glSemaphoreParameterivNV;

typedef void (*glGetSemaphoreParameterivNV_function)(GLuint semaphore, GLenum pname, GLint *params);
glGetSemaphoreParameterivNV_function glGetSemaphoreParameterivNV;
#define GL_NV_transform_feedback 1
#define GL_BACK_PRIMARY_COLOR_NV 0x8C77
#define GL_BACK_SECONDARY_COLOR_NV 0x8C78
#define GL_TEXTURE_COORD_NV 0x8C79
#define GL_CLIP_DISTANCE_NV 0x8C7A
#define GL_VERTEX_ID_NV 0x8C7B
#define GL_PRIMITIVE_ID_NV 0x8C7C
#define GL_GENERIC_ATTRIB_NV 0x8C7D
#define GL_TRANSFORM_FEEDBACK_ATTRIBS_NV 0x8C7E
#define GL_TRANSFORM_FEEDBACK_BUFFER_MODE_NV 0x8C7F
#define GL_MAX_TRANSFORM_FEEDBACK_SEPARATE_COMPONENTS_NV 0x8C80
#define GL_ACTIVE_VARYINGS_NV 0x8C81
#define GL_ACTIVE_VARYING_MAX_LENGTH_NV 0x8C82
#define GL_TRANSFORM_FEEDBACK_VARYINGS_NV 0x8C83
#define GL_TRANSFORM_FEEDBACK_BUFFER_START_NV 0x8C84
#define GL_TRANSFORM_FEEDBACK_BUFFER_SIZE_NV 0x8C85
#define GL_TRANSFORM_FEEDBACK_RECORD_NV 0x8C86
#define GL_PRIMITIVES_GENERATED_NV 0x8C87
#define GL_TRANSFORM_FEEDBACK_PRIMITIVES_WRITTEN_NV 0x8C88
#define GL_RASTERIZER_DISCARD_NV 0x8C89
#define GL_MAX_TRANSFORM_FEEDBACK_INTERLEAVED_COMPONENTS_NV 0x8C8A
#define GL_MAX_TRANSFORM_FEEDBACK_SEPARATE_ATTRIBS_NV 0x8C8B
#define GL_INTERLEAVED_ATTRIBS_NV 0x8C8C
#define GL_SEPARATE_ATTRIBS_NV 0x8C8D
#define GL_TRANSFORM_FEEDBACK_BUFFER_NV 0x8C8E
#define GL_TRANSFORM_FEEDBACK_BUFFER_BINDING_NV 0x8C8F
#define GL_LAYER_NV 0x8DAA
#define GL_NEXT_BUFFER_NV -2
#define GL_SKIP_COMPONENTS4_NV -3
#define GL_SKIP_COMPONENTS3_NV -4
#define GL_SKIP_COMPONENTS2_NV -5
#define GL_SKIP_COMPONENTS1_NV -6

typedef void (*glBeginTransformFeedbackNV_function)(GLenum primitiveMode);
glBeginTransformFeedbackNV_function glBeginTransformFeedbackNV;

typedef void (*glEndTransformFeedbackNV_function)();
glEndTransformFeedbackNV_function glEndTransformFeedbackNV;

typedef void (*glTransformFeedbackAttribsNV_function)(GLsizei count, GLint *attribs, GLenum bufferMode);
glTransformFeedbackAttribsNV_function glTransformFeedbackAttribsNV;

typedef void (*glBindBufferRangeNV_function)(GLenum target, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size);
glBindBufferRangeNV_function glBindBufferRangeNV;

typedef void (*glBindBufferOffsetNV_function)(GLenum target, GLuint index, GLuint buffer, GLintptr offset);
glBindBufferOffsetNV_function glBindBufferOffsetNV;

typedef void (*glBindBufferBaseNV_function)(GLenum target, GLuint index, GLuint buffer);
glBindBufferBaseNV_function glBindBufferBaseNV;

typedef void (*glTransformFeedbackVaryingsNV_function)(GLuint program, GLsizei count, GLint *locations, GLenum bufferMode);
glTransformFeedbackVaryingsNV_function glTransformFeedbackVaryingsNV;

typedef void (*glActiveVaryingNV_function)(GLuint program, GLchar *name);
glActiveVaryingNV_function glActiveVaryingNV;

typedef GLint  (*glGetVaryingLocationNV_function)(GLuint program, GLchar *name);
glGetVaryingLocationNV_function glGetVaryingLocationNV;

typedef void (*glGetActiveVaryingNV_function)(GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLsizei *size, GLenum *type, GLchar *name);
glGetActiveVaryingNV_function glGetActiveVaryingNV;

typedef void (*glGetTransformFeedbackVaryingNV_function)(GLuint program, GLuint index, GLint *location);
glGetTransformFeedbackVaryingNV_function glGetTransformFeedbackVaryingNV;

typedef void (*glTransformFeedbackStreamAttribsNV_function)(GLsizei count, GLint *attribs, GLsizei nbuffers, GLint *bufstreams, GLenum bufferMode);
glTransformFeedbackStreamAttribsNV_function glTransformFeedbackStreamAttribsNV;
#define GL_NV_transform_feedback2 1
#define GL_TRANSFORM_FEEDBACK_NV 0x8E22
#define GL_TRANSFORM_FEEDBACK_BUFFER_PAUSED_NV 0x8E23
#define GL_TRANSFORM_FEEDBACK_BUFFER_ACTIVE_NV 0x8E24
#define GL_TRANSFORM_FEEDBACK_BINDING_NV 0x8E25

typedef void (*glBindTransformFeedbackNV_function)(GLenum target, GLuint id);
glBindTransformFeedbackNV_function glBindTransformFeedbackNV;

typedef void (*glDeleteTransformFeedbacksNV_function)(GLsizei n, GLuint *ids);
glDeleteTransformFeedbacksNV_function glDeleteTransformFeedbacksNV;

typedef void (*glGenTransformFeedbacksNV_function)(GLsizei n, GLuint *ids);
glGenTransformFeedbacksNV_function glGenTransformFeedbacksNV;

typedef GLboolean  (*glIsTransformFeedbackNV_function)(GLuint id);
glIsTransformFeedbackNV_function glIsTransformFeedbackNV;

typedef void (*glPauseTransformFeedbackNV_function)();
glPauseTransformFeedbackNV_function glPauseTransformFeedbackNV;

typedef void (*glResumeTransformFeedbackNV_function)();
glResumeTransformFeedbackNV_function glResumeTransformFeedbackNV;

typedef void (*glDrawTransformFeedbackNV_function)(GLenum mode, GLuint id);
glDrawTransformFeedbackNV_function glDrawTransformFeedbackNV;
#define GL_NV_uniform_buffer_std430_layout 1
#define GL_NV_uniform_buffer_unified_memory 1
#define GL_UNIFORM_BUFFER_UNIFIED_NV 0x936E
#define GL_UNIFORM_BUFFER_ADDRESS_NV 0x936F
#define GL_UNIFORM_BUFFER_LENGTH_NV 0x9370
#define GL_NV_vdpau_interop 1
#define GL_SURFACE_STATE_NV 0x86EB
#define GL_SURFACE_REGISTERED_NV 0x86FD
#define GL_SURFACE_MAPPED_NV 0x8700
#define GL_WRITE_DISCARD_NV 0x88BE

typedef void (*glVDPAUInitNV_function)(void * vdpDevice, void * getProcAddress);
glVDPAUInitNV_function glVDPAUInitNV;

typedef void (*glVDPAUFiniNV_function)();
glVDPAUFiniNV_function glVDPAUFiniNV;

typedef GLvdpauSurfaceNV  (*glVDPAURegisterVideoSurfaceNV_function)(void * vdpSurface, GLenum target, GLsizei numTextureNames, GLuint *textureNames);
glVDPAURegisterVideoSurfaceNV_function glVDPAURegisterVideoSurfaceNV;

typedef GLvdpauSurfaceNV  (*glVDPAURegisterOutputSurfaceNV_function)(void * vdpSurface, GLenum target, GLsizei numTextureNames, GLuint *textureNames);
glVDPAURegisterOutputSurfaceNV_function glVDPAURegisterOutputSurfaceNV;

typedef GLboolean  (*glVDPAUIsSurfaceNV_function)(GLvdpauSurfaceNV surface);
glVDPAUIsSurfaceNV_function glVDPAUIsSurfaceNV;

typedef void (*glVDPAUUnregisterSurfaceNV_function)(GLvdpauSurfaceNV surface);
glVDPAUUnregisterSurfaceNV_function glVDPAUUnregisterSurfaceNV;

typedef void (*glVDPAUGetSurfaceivNV_function)(GLvdpauSurfaceNV surface, GLenum pname, GLsizei count, GLsizei *length, GLint *values);
glVDPAUGetSurfaceivNV_function glVDPAUGetSurfaceivNV;

typedef void (*glVDPAUSurfaceAccessNV_function)(GLvdpauSurfaceNV surface, GLenum access);
glVDPAUSurfaceAccessNV_function glVDPAUSurfaceAccessNV;

typedef void (*glVDPAUMapSurfacesNV_function)(GLsizei numSurfaces, GLvdpauSurfaceNV *surfaces);
glVDPAUMapSurfacesNV_function glVDPAUMapSurfacesNV;

typedef void (*glVDPAUUnmapSurfacesNV_function)(GLsizei numSurface, GLvdpauSurfaceNV *surfaces);
glVDPAUUnmapSurfacesNV_function glVDPAUUnmapSurfacesNV;
#define GL_NV_vdpau_interop2 1

typedef GLvdpauSurfaceNV  (*glVDPAURegisterVideoSurfaceWithPictureStructureNV_function)(void * vdpSurface, GLenum target, GLsizei numTextureNames, GLuint *textureNames, GLboolean isFrameStructure);
glVDPAURegisterVideoSurfaceWithPictureStructureNV_function glVDPAURegisterVideoSurfaceWithPictureStructureNV;
#define GL_NV_vertex_array_range 1
#define GL_VERTEX_ARRAY_RANGE_NV 0x851D
#define GL_VERTEX_ARRAY_RANGE_LENGTH_NV 0x851E
#define GL_VERTEX_ARRAY_RANGE_VALID_NV 0x851F
#define GL_MAX_VERTEX_ARRAY_RANGE_ELEMENT_NV 0x8520
#define GL_VERTEX_ARRAY_RANGE_POINTER_NV 0x8521

typedef void (*glFlushVertexArrayRangeNV_function)();
glFlushVertexArrayRangeNV_function glFlushVertexArrayRangeNV;

typedef void (*glVertexArrayRangeNV_function)(GLsizei length, void * pointer);
glVertexArrayRangeNV_function glVertexArrayRangeNV;
#define GL_NV_vertex_array_range2 1
#define GL_VERTEX_ARRAY_RANGE_WITHOUT_FLUSH_NV 0x8533
#define GL_NV_vertex_attrib_integer_64bit 1

typedef void (*glVertexAttribL1i64NV_function)(GLuint index, GLint64EXT x);
glVertexAttribL1i64NV_function glVertexAttribL1i64NV;

typedef void (*glVertexAttribL2i64NV_function)(GLuint index, GLint64EXT x, GLint64EXT y);
glVertexAttribL2i64NV_function glVertexAttribL2i64NV;

typedef void (*glVertexAttribL3i64NV_function)(GLuint index, GLint64EXT x, GLint64EXT y, GLint64EXT z);
glVertexAttribL3i64NV_function glVertexAttribL3i64NV;

typedef void (*glVertexAttribL4i64NV_function)(GLuint index, GLint64EXT x, GLint64EXT y, GLint64EXT z, GLint64EXT w);
glVertexAttribL4i64NV_function glVertexAttribL4i64NV;

typedef void (*glVertexAttribL1i64vNV_function)(GLuint index, GLint64EXT *v);
glVertexAttribL1i64vNV_function glVertexAttribL1i64vNV;

typedef void (*glVertexAttribL2i64vNV_function)(GLuint index, GLint64EXT *v);
glVertexAttribL2i64vNV_function glVertexAttribL2i64vNV;

typedef void (*glVertexAttribL3i64vNV_function)(GLuint index, GLint64EXT *v);
glVertexAttribL3i64vNV_function glVertexAttribL3i64vNV;

typedef void (*glVertexAttribL4i64vNV_function)(GLuint index, GLint64EXT *v);
glVertexAttribL4i64vNV_function glVertexAttribL4i64vNV;

typedef void (*glVertexAttribL1ui64NV_function)(GLuint index, GLuint64EXT x);
glVertexAttribL1ui64NV_function glVertexAttribL1ui64NV;

typedef void (*glVertexAttribL2ui64NV_function)(GLuint index, GLuint64EXT x, GLuint64EXT y);
glVertexAttribL2ui64NV_function glVertexAttribL2ui64NV;

typedef void (*glVertexAttribL3ui64NV_function)(GLuint index, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z);
glVertexAttribL3ui64NV_function glVertexAttribL3ui64NV;

typedef void (*glVertexAttribL4ui64NV_function)(GLuint index, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z, GLuint64EXT w);
glVertexAttribL4ui64NV_function glVertexAttribL4ui64NV;

typedef void (*glVertexAttribL1ui64vNV_function)(GLuint index, GLuint64EXT *v);
glVertexAttribL1ui64vNV_function glVertexAttribL1ui64vNV;

typedef void (*glVertexAttribL2ui64vNV_function)(GLuint index, GLuint64EXT *v);
glVertexAttribL2ui64vNV_function glVertexAttribL2ui64vNV;

typedef void (*glVertexAttribL3ui64vNV_function)(GLuint index, GLuint64EXT *v);
glVertexAttribL3ui64vNV_function glVertexAttribL3ui64vNV;

typedef void (*glVertexAttribL4ui64vNV_function)(GLuint index, GLuint64EXT *v);
glVertexAttribL4ui64vNV_function glVertexAttribL4ui64vNV;

typedef void (*glGetVertexAttribLi64vNV_function)(GLuint index, GLenum pname, GLint64EXT *params);
glGetVertexAttribLi64vNV_function glGetVertexAttribLi64vNV;

typedef void (*glGetVertexAttribLui64vNV_function)(GLuint index, GLenum pname, GLuint64EXT *params);
glGetVertexAttribLui64vNV_function glGetVertexAttribLui64vNV;

typedef void (*glVertexAttribLFormatNV_function)(GLuint index, GLint size, GLenum type, GLsizei stride);
glVertexAttribLFormatNV_function glVertexAttribLFormatNV;
#define GL_NV_vertex_buffer_unified_memory 1
#define GL_VERTEX_ATTRIB_ARRAY_UNIFIED_NV 0x8F1E
#define GL_ELEMENT_ARRAY_UNIFIED_NV 0x8F1F
#define GL_VERTEX_ATTRIB_ARRAY_ADDRESS_NV 0x8F20
#define GL_VERTEX_ARRAY_ADDRESS_NV 0x8F21
#define GL_NORMAL_ARRAY_ADDRESS_NV 0x8F22
#define GL_COLOR_ARRAY_ADDRESS_NV 0x8F23
#define GL_INDEX_ARRAY_ADDRESS_NV 0x8F24
#define GL_TEXTURE_COORD_ARRAY_ADDRESS_NV 0x8F25
#define GL_EDGE_FLAG_ARRAY_ADDRESS_NV 0x8F26
#define GL_SECONDARY_COLOR_ARRAY_ADDRESS_NV 0x8F27
#define GL_FOG_COORD_ARRAY_ADDRESS_NV 0x8F28
#define GL_ELEMENT_ARRAY_ADDRESS_NV 0x8F29
#define GL_VERTEX_ATTRIB_ARRAY_LENGTH_NV 0x8F2A
#define GL_VERTEX_ARRAY_LENGTH_NV 0x8F2B
#define GL_NORMAL_ARRAY_LENGTH_NV 0x8F2C
#define GL_COLOR_ARRAY_LENGTH_NV 0x8F2D
#define GL_INDEX_ARRAY_LENGTH_NV 0x8F2E
#define GL_TEXTURE_COORD_ARRAY_LENGTH_NV 0x8F2F
#define GL_EDGE_FLAG_ARRAY_LENGTH_NV 0x8F30
#define GL_SECONDARY_COLOR_ARRAY_LENGTH_NV 0x8F31
#define GL_FOG_COORD_ARRAY_LENGTH_NV 0x8F32
#define GL_ELEMENT_ARRAY_LENGTH_NV 0x8F33
#define GL_DRAW_INDIRECT_UNIFIED_NV 0x8F40
#define GL_DRAW_INDIRECT_ADDRESS_NV 0x8F41
#define GL_DRAW_INDIRECT_LENGTH_NV 0x8F42

typedef void (*glBufferAddressRangeNV_function)(GLenum pname, GLuint index, GLuint64EXT address, GLsizeiptr length);
glBufferAddressRangeNV_function glBufferAddressRangeNV;

typedef void (*glVertexFormatNV_function)(GLint size, GLenum type, GLsizei stride);
glVertexFormatNV_function glVertexFormatNV;

typedef void (*glNormalFormatNV_function)(GLenum type, GLsizei stride);
glNormalFormatNV_function glNormalFormatNV;

typedef void (*glColorFormatNV_function)(GLint size, GLenum type, GLsizei stride);
glColorFormatNV_function glColorFormatNV;

typedef void (*glIndexFormatNV_function)(GLenum type, GLsizei stride);
glIndexFormatNV_function glIndexFormatNV;

typedef void (*glTexCoordFormatNV_function)(GLint size, GLenum type, GLsizei stride);
glTexCoordFormatNV_function glTexCoordFormatNV;

typedef void (*glEdgeFlagFormatNV_function)(GLsizei stride);
glEdgeFlagFormatNV_function glEdgeFlagFormatNV;

typedef void (*glSecondaryColorFormatNV_function)(GLint size, GLenum type, GLsizei stride);
glSecondaryColorFormatNV_function glSecondaryColorFormatNV;

typedef void (*glFogCoordFormatNV_function)(GLenum type, GLsizei stride);
glFogCoordFormatNV_function glFogCoordFormatNV;

typedef void (*glVertexAttribFormatNV_function)(GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride);
glVertexAttribFormatNV_function glVertexAttribFormatNV;

typedef void (*glVertexAttribIFormatNV_function)(GLuint index, GLint size, GLenum type, GLsizei stride);
glVertexAttribIFormatNV_function glVertexAttribIFormatNV;

typedef void (*glGetIntegerui64i_vNV_function)(GLenum value, GLuint index, GLuint64EXT *result);
glGetIntegerui64i_vNV_function glGetIntegerui64i_vNV;
#define GL_NV_vertex_program 1
#define GL_VERTEX_PROGRAM_NV 0x8620
#define GL_VERTEX_STATE_PROGRAM_NV 0x8621
#define GL_ATTRIB_ARRAY_SIZE_NV 0x8623
#define GL_ATTRIB_ARRAY_STRIDE_NV 0x8624
#define GL_ATTRIB_ARRAY_TYPE_NV 0x8625
#define GL_CURRENT_ATTRIB_NV 0x8626
#define GL_PROGRAM_LENGTH_NV 0x8627
#define GL_PROGRAM_STRING_NV 0x8628
#define GL_MODELVIEW_PROJECTION_NV 0x8629
#define GL_IDENTITY_NV 0x862A
#define GL_INVERSE_NV 0x862B
#define GL_TRANSPOSE_NV 0x862C
#define GL_INVERSE_TRANSPOSE_NV 0x862D
#define GL_MAX_TRACK_MATRIX_STACK_DEPTH_NV 0x862E
#define GL_MAX_TRACK_MATRICES_NV 0x862F
#define GL_MATRIX0_NV 0x8630
#define GL_MATRIX1_NV 0x8631
#define GL_MATRIX2_NV 0x8632
#define GL_MATRIX3_NV 0x8633
#define GL_MATRIX4_NV 0x8634
#define GL_MATRIX5_NV 0x8635
#define GL_MATRIX6_NV 0x8636
#define GL_MATRIX7_NV 0x8637
#define GL_CURRENT_MATRIX_STACK_DEPTH_NV 0x8640
#define GL_CURRENT_MATRIX_NV 0x8641
#define GL_VERTEX_PROGRAM_POINT_SIZE_NV 0x8642
#define GL_VERTEX_PROGRAM_TWO_SIDE_NV 0x8643
#define GL_PROGRAM_PARAMETER_NV 0x8644
#define GL_ATTRIB_ARRAY_POINTER_NV 0x8645
#define GL_PROGRAM_TARGET_NV 0x8646
#define GL_PROGRAM_RESIDENT_NV 0x8647
#define GL_TRACK_MATRIX_NV 0x8648
#define GL_TRACK_MATRIX_TRANSFORM_NV 0x8649
#define GL_VERTEX_PROGRAM_BINDING_NV 0x864A
#define GL_PROGRAM_ERROR_POSITION_NV 0x864B
#define GL_VERTEX_ATTRIB_ARRAY0_NV 0x8650
#define GL_VERTEX_ATTRIB_ARRAY1_NV 0x8651
#define GL_VERTEX_ATTRIB_ARRAY2_NV 0x8652
#define GL_VERTEX_ATTRIB_ARRAY3_NV 0x8653
#define GL_VERTEX_ATTRIB_ARRAY4_NV 0x8654
#define GL_VERTEX_ATTRIB_ARRAY5_NV 0x8655
#define GL_VERTEX_ATTRIB_ARRAY6_NV 0x8656
#define GL_VERTEX_ATTRIB_ARRAY7_NV 0x8657
#define GL_VERTEX_ATTRIB_ARRAY8_NV 0x8658
#define GL_VERTEX_ATTRIB_ARRAY9_NV 0x8659
#define GL_VERTEX_ATTRIB_ARRAY10_NV 0x865A
#define GL_VERTEX_ATTRIB_ARRAY11_NV 0x865B
#define GL_VERTEX_ATTRIB_ARRAY12_NV 0x865C
#define GL_VERTEX_ATTRIB_ARRAY13_NV 0x865D
#define GL_VERTEX_ATTRIB_ARRAY14_NV 0x865E
#define GL_VERTEX_ATTRIB_ARRAY15_NV 0x865F
#define GL_MAP1_VERTEX_ATTRIB0_4_NV 0x8660
#define GL_MAP1_VERTEX_ATTRIB1_4_NV 0x8661
#define GL_MAP1_VERTEX_ATTRIB2_4_NV 0x8662
#define GL_MAP1_VERTEX_ATTRIB3_4_NV 0x8663
#define GL_MAP1_VERTEX_ATTRIB4_4_NV 0x8664
#define GL_MAP1_VERTEX_ATTRIB5_4_NV 0x8665
#define GL_MAP1_VERTEX_ATTRIB6_4_NV 0x8666
#define GL_MAP1_VERTEX_ATTRIB7_4_NV 0x8667
#define GL_MAP1_VERTEX_ATTRIB8_4_NV 0x8668
#define GL_MAP1_VERTEX_ATTRIB9_4_NV 0x8669
#define GL_MAP1_VERTEX_ATTRIB10_4_NV 0x866A
#define GL_MAP1_VERTEX_ATTRIB11_4_NV 0x866B
#define GL_MAP1_VERTEX_ATTRIB12_4_NV 0x866C
#define GL_MAP1_VERTEX_ATTRIB13_4_NV 0x866D
#define GL_MAP1_VERTEX_ATTRIB14_4_NV 0x866E
#define GL_MAP1_VERTEX_ATTRIB15_4_NV 0x866F
#define GL_MAP2_VERTEX_ATTRIB0_4_NV 0x8670
#define GL_MAP2_VERTEX_ATTRIB1_4_NV 0x8671
#define GL_MAP2_VERTEX_ATTRIB2_4_NV 0x8672
#define GL_MAP2_VERTEX_ATTRIB3_4_NV 0x8673
#define GL_MAP2_VERTEX_ATTRIB4_4_NV 0x8674
#define GL_MAP2_VERTEX_ATTRIB5_4_NV 0x8675
#define GL_MAP2_VERTEX_ATTRIB6_4_NV 0x8676
#define GL_MAP2_VERTEX_ATTRIB7_4_NV 0x8677
#define GL_MAP2_VERTEX_ATTRIB8_4_NV 0x8678
#define GL_MAP2_VERTEX_ATTRIB9_4_NV 0x8679
#define GL_MAP2_VERTEX_ATTRIB10_4_NV 0x867A
#define GL_MAP2_VERTEX_ATTRIB11_4_NV 0x867B
#define GL_MAP2_VERTEX_ATTRIB12_4_NV 0x867C
#define GL_MAP2_VERTEX_ATTRIB13_4_NV 0x867D
#define GL_MAP2_VERTEX_ATTRIB14_4_NV 0x867E
#define GL_MAP2_VERTEX_ATTRIB15_4_NV 0x867F

typedef GLboolean  (*glAreProgramsResidentNV_function)(GLsizei n, GLuint *programs, GLboolean *residences);
glAreProgramsResidentNV_function glAreProgramsResidentNV;

typedef void (*glBindProgramNV_function)(GLenum target, GLuint id);
glBindProgramNV_function glBindProgramNV;

typedef void (*glDeleteProgramsNV_function)(GLsizei n, GLuint *programs);
glDeleteProgramsNV_function glDeleteProgramsNV;

typedef void (*glExecuteProgramNV_function)(GLenum target, GLuint id, GLfloat *params);
glExecuteProgramNV_function glExecuteProgramNV;

typedef void (*glGenProgramsNV_function)(GLsizei n, GLuint *programs);
glGenProgramsNV_function glGenProgramsNV;

typedef void (*glGetProgramParameterdvNV_function)(GLenum target, GLuint index, GLenum pname, GLdouble *params);
glGetProgramParameterdvNV_function glGetProgramParameterdvNV;

typedef void (*glGetProgramParameterfvNV_function)(GLenum target, GLuint index, GLenum pname, GLfloat *params);
glGetProgramParameterfvNV_function glGetProgramParameterfvNV;

typedef void (*glGetProgramivNV_function)(GLuint id, GLenum pname, GLint *params);
glGetProgramivNV_function glGetProgramivNV;

typedef void (*glGetProgramStringNV_function)(GLuint id, GLenum pname, GLubyte *program);
glGetProgramStringNV_function glGetProgramStringNV;

typedef void (*glGetTrackMatrixivNV_function)(GLenum target, GLuint address, GLenum pname, GLint *params);
glGetTrackMatrixivNV_function glGetTrackMatrixivNV;

typedef void (*glGetVertexAttribdvNV_function)(GLuint index, GLenum pname, GLdouble *params);
glGetVertexAttribdvNV_function glGetVertexAttribdvNV;

typedef void (*glGetVertexAttribfvNV_function)(GLuint index, GLenum pname, GLfloat *params);
glGetVertexAttribfvNV_function glGetVertexAttribfvNV;

typedef void (*glGetVertexAttribivNV_function)(GLuint index, GLenum pname, GLint *params);
glGetVertexAttribivNV_function glGetVertexAttribivNV;

typedef void (*glGetVertexAttribPointervNV_function)(GLuint index, GLenum pname, void * *pointer);
glGetVertexAttribPointervNV_function glGetVertexAttribPointervNV;

typedef GLboolean  (*glIsProgramNV_function)(GLuint id);
glIsProgramNV_function glIsProgramNV;

typedef void (*glLoadProgramNV_function)(GLenum target, GLuint id, GLsizei len, GLubyte *program);
glLoadProgramNV_function glLoadProgramNV;

typedef void (*glProgramParameter4dNV_function)(GLenum target, GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
glProgramParameter4dNV_function glProgramParameter4dNV;

typedef void (*glProgramParameter4dvNV_function)(GLenum target, GLuint index, GLdouble *v);
glProgramParameter4dvNV_function glProgramParameter4dvNV;

typedef void (*glProgramParameter4fNV_function)(GLenum target, GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
glProgramParameter4fNV_function glProgramParameter4fNV;

typedef void (*glProgramParameter4fvNV_function)(GLenum target, GLuint index, GLfloat *v);
glProgramParameter4fvNV_function glProgramParameter4fvNV;

typedef void (*glProgramParameters4dvNV_function)(GLenum target, GLuint index, GLsizei count, GLdouble *v);
glProgramParameters4dvNV_function glProgramParameters4dvNV;

typedef void (*glProgramParameters4fvNV_function)(GLenum target, GLuint index, GLsizei count, GLfloat *v);
glProgramParameters4fvNV_function glProgramParameters4fvNV;

typedef void (*glRequestResidentProgramsNV_function)(GLsizei n, GLuint *programs);
glRequestResidentProgramsNV_function glRequestResidentProgramsNV;

typedef void (*glTrackMatrixNV_function)(GLenum target, GLuint address, GLenum matrix, GLenum transform);
glTrackMatrixNV_function glTrackMatrixNV;

typedef void (*glVertexAttribPointerNV_function)(GLuint index, GLint fsize, GLenum type, GLsizei stride, void * pointer);
glVertexAttribPointerNV_function glVertexAttribPointerNV;

typedef void (*glVertexAttrib1dNV_function)(GLuint index, GLdouble x);
glVertexAttrib1dNV_function glVertexAttrib1dNV;

typedef void (*glVertexAttrib1dvNV_function)(GLuint index, GLdouble *v);
glVertexAttrib1dvNV_function glVertexAttrib1dvNV;

typedef void (*glVertexAttrib1fNV_function)(GLuint index, GLfloat x);
glVertexAttrib1fNV_function glVertexAttrib1fNV;

typedef void (*glVertexAttrib1fvNV_function)(GLuint index, GLfloat *v);
glVertexAttrib1fvNV_function glVertexAttrib1fvNV;

typedef void (*glVertexAttrib1sNV_function)(GLuint index, GLshort x);
glVertexAttrib1sNV_function glVertexAttrib1sNV;

typedef void (*glVertexAttrib1svNV_function)(GLuint index, GLshort *v);
glVertexAttrib1svNV_function glVertexAttrib1svNV;

typedef void (*glVertexAttrib2dNV_function)(GLuint index, GLdouble x, GLdouble y);
glVertexAttrib2dNV_function glVertexAttrib2dNV;

typedef void (*glVertexAttrib2dvNV_function)(GLuint index, GLdouble *v);
glVertexAttrib2dvNV_function glVertexAttrib2dvNV;

typedef void (*glVertexAttrib2fNV_function)(GLuint index, GLfloat x, GLfloat y);
glVertexAttrib2fNV_function glVertexAttrib2fNV;

typedef void (*glVertexAttrib2fvNV_function)(GLuint index, GLfloat *v);
glVertexAttrib2fvNV_function glVertexAttrib2fvNV;

typedef void (*glVertexAttrib2sNV_function)(GLuint index, GLshort x, GLshort y);
glVertexAttrib2sNV_function glVertexAttrib2sNV;

typedef void (*glVertexAttrib2svNV_function)(GLuint index, GLshort *v);
glVertexAttrib2svNV_function glVertexAttrib2svNV;

typedef void (*glVertexAttrib3dNV_function)(GLuint index, GLdouble x, GLdouble y, GLdouble z);
glVertexAttrib3dNV_function glVertexAttrib3dNV;

typedef void (*glVertexAttrib3dvNV_function)(GLuint index, GLdouble *v);
glVertexAttrib3dvNV_function glVertexAttrib3dvNV;

typedef void (*glVertexAttrib3fNV_function)(GLuint index, GLfloat x, GLfloat y, GLfloat z);
glVertexAttrib3fNV_function glVertexAttrib3fNV;

typedef void (*glVertexAttrib3fvNV_function)(GLuint index, GLfloat *v);
glVertexAttrib3fvNV_function glVertexAttrib3fvNV;

typedef void (*glVertexAttrib3sNV_function)(GLuint index, GLshort x, GLshort y, GLshort z);
glVertexAttrib3sNV_function glVertexAttrib3sNV;

typedef void (*glVertexAttrib3svNV_function)(GLuint index, GLshort *v);
glVertexAttrib3svNV_function glVertexAttrib3svNV;

typedef void (*glVertexAttrib4dNV_function)(GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
glVertexAttrib4dNV_function glVertexAttrib4dNV;

typedef void (*glVertexAttrib4dvNV_function)(GLuint index, GLdouble *v);
glVertexAttrib4dvNV_function glVertexAttrib4dvNV;

typedef void (*glVertexAttrib4fNV_function)(GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
glVertexAttrib4fNV_function glVertexAttrib4fNV;

typedef void (*glVertexAttrib4fvNV_function)(GLuint index, GLfloat *v);
glVertexAttrib4fvNV_function glVertexAttrib4fvNV;

typedef void (*glVertexAttrib4sNV_function)(GLuint index, GLshort x, GLshort y, GLshort z, GLshort w);
glVertexAttrib4sNV_function glVertexAttrib4sNV;

typedef void (*glVertexAttrib4svNV_function)(GLuint index, GLshort *v);
glVertexAttrib4svNV_function glVertexAttrib4svNV;

typedef void (*glVertexAttrib4ubNV_function)(GLuint index, GLubyte x, GLubyte y, GLubyte z, GLubyte w);
glVertexAttrib4ubNV_function glVertexAttrib4ubNV;

typedef void (*glVertexAttrib4ubvNV_function)(GLuint index, GLubyte *v);
glVertexAttrib4ubvNV_function glVertexAttrib4ubvNV;

typedef void (*glVertexAttribs1dvNV_function)(GLuint index, GLsizei count, GLdouble *v);
glVertexAttribs1dvNV_function glVertexAttribs1dvNV;

typedef void (*glVertexAttribs1fvNV_function)(GLuint index, GLsizei count, GLfloat *v);
glVertexAttribs1fvNV_function glVertexAttribs1fvNV;

typedef void (*glVertexAttribs1svNV_function)(GLuint index, GLsizei count, GLshort *v);
glVertexAttribs1svNV_function glVertexAttribs1svNV;

typedef void (*glVertexAttribs2dvNV_function)(GLuint index, GLsizei count, GLdouble *v);
glVertexAttribs2dvNV_function glVertexAttribs2dvNV;

typedef void (*glVertexAttribs2fvNV_function)(GLuint index, GLsizei count, GLfloat *v);
glVertexAttribs2fvNV_function glVertexAttribs2fvNV;

typedef void (*glVertexAttribs2svNV_function)(GLuint index, GLsizei count, GLshort *v);
glVertexAttribs2svNV_function glVertexAttribs2svNV;

typedef void (*glVertexAttribs3dvNV_function)(GLuint index, GLsizei count, GLdouble *v);
glVertexAttribs3dvNV_function glVertexAttribs3dvNV;

typedef void (*glVertexAttribs3fvNV_function)(GLuint index, GLsizei count, GLfloat *v);
glVertexAttribs3fvNV_function glVertexAttribs3fvNV;

typedef void (*glVertexAttribs3svNV_function)(GLuint index, GLsizei count, GLshort *v);
glVertexAttribs3svNV_function glVertexAttribs3svNV;

typedef void (*glVertexAttribs4dvNV_function)(GLuint index, GLsizei count, GLdouble *v);
glVertexAttribs4dvNV_function glVertexAttribs4dvNV;

typedef void (*glVertexAttribs4fvNV_function)(GLuint index, GLsizei count, GLfloat *v);
glVertexAttribs4fvNV_function glVertexAttribs4fvNV;

typedef void (*glVertexAttribs4svNV_function)(GLuint index, GLsizei count, GLshort *v);
glVertexAttribs4svNV_function glVertexAttribs4svNV;

typedef void (*glVertexAttribs4ubvNV_function)(GLuint index, GLsizei count, GLubyte *v);
glVertexAttribs4ubvNV_function glVertexAttribs4ubvNV;
#define GL_NV_vertex_program1_1 1
#define GL_NV_vertex_program2 1
#define GL_NV_vertex_program2_option 1
#define GL_NV_vertex_program3 1
#define GL_NV_vertex_program4 1
#define GL_VERTEX_ATTRIB_ARRAY_INTEGER_NV 0x88FD
#define GL_NV_video_capture 1
#define GL_VIDEO_BUFFER_NV 0x9020
#define GL_VIDEO_BUFFER_BINDING_NV 0x9021
#define GL_FIELD_UPPER_NV 0x9022
#define GL_FIELD_LOWER_NV 0x9023
#define GL_NUM_VIDEO_CAPTURE_STREAMS_NV 0x9024
#define GL_NEXT_VIDEO_CAPTURE_BUFFER_STATUS_NV 0x9025
#define GL_VIDEO_CAPTURE_TO_422_SUPPORTED_NV 0x9026
#define GL_LAST_VIDEO_CAPTURE_STATUS_NV 0x9027
#define GL_VIDEO_BUFFER_PITCH_NV 0x9028
#define GL_VIDEO_COLOR_CONVERSION_MATRIX_NV 0x9029
#define GL_VIDEO_COLOR_CONVERSION_MAX_NV 0x902A
#define GL_VIDEO_COLOR_CONVERSION_MIN_NV 0x902B
#define GL_VIDEO_COLOR_CONVERSION_OFFSET_NV 0x902C
#define GL_VIDEO_BUFFER_INTERNAL_FORMAT_NV 0x902D
#define GL_PARTIAL_SUCCESS_NV 0x902E
#define GL_SUCCESS_NV 0x902F
#define GL_FAILURE_NV 0x9030
#define GL_YCBYCR8_422_NV 0x9031
#define GL_YCBAYCR8A_4224_NV 0x9032
#define GL_Z6Y10Z6CB10Z6Y10Z6CR10_422_NV 0x9033
#define GL_Z6Y10Z6CB10Z6A10Z6Y10Z6CR10Z6A10_4224_NV 0x9034
#define GL_Z4Y12Z4CB12Z4Y12Z4CR12_422_NV 0x9035
#define GL_Z4Y12Z4CB12Z4A12Z4Y12Z4CR12Z4A12_4224_NV 0x9036
#define GL_Z4Y12Z4CB12Z4CR12_444_NV 0x9037
#define GL_VIDEO_CAPTURE_FRAME_WIDTH_NV 0x9038
#define GL_VIDEO_CAPTURE_FRAME_HEIGHT_NV 0x9039
#define GL_VIDEO_CAPTURE_FIELD_UPPER_HEIGHT_NV 0x903A
#define GL_VIDEO_CAPTURE_FIELD_LOWER_HEIGHT_NV 0x903B
#define GL_VIDEO_CAPTURE_SURFACE_ORIGIN_NV 0x903C

typedef void (*glBeginVideoCaptureNV_function)(GLuint video_capture_slot);
glBeginVideoCaptureNV_function glBeginVideoCaptureNV;

typedef void (*glBindVideoCaptureStreamBufferNV_function)(GLuint video_capture_slot, GLuint stream, GLenum frame_region, GLintptrARB offset);
glBindVideoCaptureStreamBufferNV_function glBindVideoCaptureStreamBufferNV;

typedef void (*glBindVideoCaptureStreamTextureNV_function)(GLuint video_capture_slot, GLuint stream, GLenum frame_region, GLenum target, GLuint texture);
glBindVideoCaptureStreamTextureNV_function glBindVideoCaptureStreamTextureNV;

typedef void (*glEndVideoCaptureNV_function)(GLuint video_capture_slot);
glEndVideoCaptureNV_function glEndVideoCaptureNV;

typedef void (*glGetVideoCaptureivNV_function)(GLuint video_capture_slot, GLenum pname, GLint *params);
glGetVideoCaptureivNV_function glGetVideoCaptureivNV;

typedef void (*glGetVideoCaptureStreamivNV_function)(GLuint video_capture_slot, GLuint stream, GLenum pname, GLint *params);
glGetVideoCaptureStreamivNV_function glGetVideoCaptureStreamivNV;

typedef void (*glGetVideoCaptureStreamfvNV_function)(GLuint video_capture_slot, GLuint stream, GLenum pname, GLfloat *params);
glGetVideoCaptureStreamfvNV_function glGetVideoCaptureStreamfvNV;

typedef void (*glGetVideoCaptureStreamdvNV_function)(GLuint video_capture_slot, GLuint stream, GLenum pname, GLdouble *params);
glGetVideoCaptureStreamdvNV_function glGetVideoCaptureStreamdvNV;

typedef GLenum  (*glVideoCaptureNV_function)(GLuint video_capture_slot, GLuint *sequence_num, GLuint64EXT *capture_time);
glVideoCaptureNV_function glVideoCaptureNV;

typedef void (*glVideoCaptureStreamParameterivNV_function)(GLuint video_capture_slot, GLuint stream, GLenum pname, GLint *params);
glVideoCaptureStreamParameterivNV_function glVideoCaptureStreamParameterivNV;

typedef void (*glVideoCaptureStreamParameterfvNV_function)(GLuint video_capture_slot, GLuint stream, GLenum pname, GLfloat *params);
glVideoCaptureStreamParameterfvNV_function glVideoCaptureStreamParameterfvNV;

typedef void (*glVideoCaptureStreamParameterdvNV_function)(GLuint video_capture_slot, GLuint stream, GLenum pname, GLdouble *params);
glVideoCaptureStreamParameterdvNV_function glVideoCaptureStreamParameterdvNV;
#define GL_NV_viewport_array2 1
#define GL_NV_viewport_swizzle 1
#define GL_VIEWPORT_SWIZZLE_POSITIVE_X_NV 0x9350
#define GL_VIEWPORT_SWIZZLE_NEGATIVE_X_NV 0x9351
#define GL_VIEWPORT_SWIZZLE_POSITIVE_Y_NV 0x9352
#define GL_VIEWPORT_SWIZZLE_NEGATIVE_Y_NV 0x9353
#define GL_VIEWPORT_SWIZZLE_POSITIVE_Z_NV 0x9354
#define GL_VIEWPORT_SWIZZLE_NEGATIVE_Z_NV 0x9355
#define GL_VIEWPORT_SWIZZLE_POSITIVE_W_NV 0x9356
#define GL_VIEWPORT_SWIZZLE_NEGATIVE_W_NV 0x9357
#define GL_VIEWPORT_SWIZZLE_X_NV 0x9358
#define GL_VIEWPORT_SWIZZLE_Y_NV 0x9359
#define GL_VIEWPORT_SWIZZLE_Z_NV 0x935A
#define GL_VIEWPORT_SWIZZLE_W_NV 0x935B

typedef void (*glViewportSwizzleNV_function)(GLuint index, GLenum swizzlex, GLenum swizzley, GLenum swizzlez, GLenum swizzlew);
glViewportSwizzleNV_function glViewportSwizzleNV;
#define GL_OML_interlace 1
#define GL_INTERLACE_OML 0x8980
#define GL_INTERLACE_READ_OML 0x8981
#define GL_OML_resample 1
#define GL_PACK_RESAMPLE_OML 0x8984
#define GL_UNPACK_RESAMPLE_OML 0x8985
#define GL_RESAMPLE_REPLICATE_OML 0x8986
#define GL_RESAMPLE_ZERO_FILL_OML 0x8987
#define GL_RESAMPLE_AVERAGE_OML 0x8988
#define GL_RESAMPLE_DECIMATE_OML 0x8989
#define GL_OML_subsample 1
#define GL_FORMAT_SUBSAMPLE_24_24_OML 0x8982
#define GL_FORMAT_SUBSAMPLE_244_244_OML 0x8983
#define GL_OVR_multiview 1
#define GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_NUM_VIEWS_OVR 0x9630
#define GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_BASE_VIEW_INDEX_OVR 0x9632
#define GL_MAX_VIEWS_OVR 0x9631
#define GL_FRAMEBUFFER_INCOMPLETE_VIEW_TARGETS_OVR 0x9633

typedef void (*glFramebufferTextureMultiviewOVR_function)(GLenum target, GLenum attachment, GLuint texture, GLint level, GLint baseViewIndex, GLsizei numViews);
glFramebufferTextureMultiviewOVR_function glFramebufferTextureMultiviewOVR;
#define GL_OVR_multiview2 1
#define GL_PGI_misc_hints 1
#define GL_PREFER_DOUBLEBUFFER_HINT_PGI 0x1A1F8
#define GL_CONSERVE_MEMORY_HINT_PGI 0x1A1FD
#define GL_RECLAIM_MEMORY_HINT_PGI 0x1A1FE
#define GL_NATIVE_GRAPHICS_HANDLE_PGI 0x1A202
#define GL_NATIVE_GRAPHICS_BEGIN_HINT_PGI 0x1A203
#define GL_NATIVE_GRAPHICS_END_HINT_PGI 0x1A204
#define GL_ALWAYS_FAST_HINT_PGI 0x1A20C
#define GL_ALWAYS_SOFT_HINT_PGI 0x1A20D
#define GL_ALLOW_DRAW_OBJ_HINT_PGI 0x1A20E
#define GL_ALLOW_DRAW_WIN_HINT_PGI 0x1A20F
#define GL_ALLOW_DRAW_FRG_HINT_PGI 0x1A210
#define GL_ALLOW_DRAW_MEM_HINT_PGI 0x1A211
#define GL_STRICT_DEPTHFUNC_HINT_PGI 0x1A216
#define GL_STRICT_LIGHTING_HINT_PGI 0x1A217
#define GL_STRICT_SCISSOR_HINT_PGI 0x1A218
#define GL_FULL_STIPPLE_HINT_PGI 0x1A219
#define GL_CLIP_NEAR_HINT_PGI 0x1A220
#define GL_CLIP_FAR_HINT_PGI 0x1A221
#define GL_WIDE_LINE_HINT_PGI 0x1A222
#define GL_BACK_NORMALS_HINT_PGI 0x1A223

typedef void (*glHintPGI_function)(GLenum target, GLint mode);
glHintPGI_function glHintPGI;
#define GL_PGI_vertex_hints 1
#define GL_VERTEX_DATA_HINT_PGI 0x1A22A
#define GL_VERTEX_CONSISTENT_HINT_PGI 0x1A22B
#define GL_MATERIAL_SIDE_HINT_PGI 0x1A22C
#define GL_MAX_VERTEX_HINT_PGI 0x1A22D
#define GL_COLOR3_BIT_PGI 0x00010000
#define GL_COLOR4_BIT_PGI 0x00020000
#define GL_EDGEFLAG_BIT_PGI 0x00040000
#define GL_INDEX_BIT_PGI 0x00080000
#define GL_MAT_AMBIENT_BIT_PGI 0x00100000
#define GL_MAT_AMBIENT_AND_DIFFUSE_BIT_PGI 0x00200000
#define GL_MAT_DIFFUSE_BIT_PGI 0x00400000
#define GL_MAT_EMISSION_BIT_PGI 0x00800000
#define GL_MAT_COLOR_INDEXES_BIT_PGI 0x01000000
#define GL_MAT_SHININESS_BIT_PGI 0x02000000
#define GL_MAT_SPECULAR_BIT_PGI 0x04000000
#define GL_NORMAL_BIT_PGI 0x08000000
#define GL_TEXCOORD1_BIT_PGI 0x10000000
#define GL_TEXCOORD2_BIT_PGI 0x20000000
#define GL_TEXCOORD3_BIT_PGI 0x40000000
#define GL_TEXCOORD4_BIT_PGI 0x80000000
#define GL_VERTEX23_BIT_PGI 0x00000004
#define GL_VERTEX4_BIT_PGI 0x00000008
#define GL_REND_screen_coordinates 1
#define GL_SCREEN_COORDINATES_REND 0x8490
#define GL_INVERTED_SCREEN_W_REND 0x8491
#define GL_S3_s3tc 1
#define GL_RGB_S3TC 0x83A0
#define GL_RGB4_S3TC 0x83A1
#define GL_RGBA_S3TC 0x83A2
#define GL_RGBA4_S3TC 0x83A3
#define GL_RGBA_DXT5_S3TC 0x83A4
#define GL_RGBA4_DXT5_S3TC 0x83A5
#define GL_SGIS_detail_texture 1
#define GL_DETAIL_TEXTURE_2D_SGIS 0x8095
#define GL_DETAIL_TEXTURE_2D_BINDING_SGIS 0x8096
#define GL_LINEAR_DETAIL_SGIS 0x8097
#define GL_LINEAR_DETAIL_ALPHA_SGIS 0x8098
#define GL_LINEAR_DETAIL_COLOR_SGIS 0x8099
#define GL_DETAIL_TEXTURE_LEVEL_SGIS 0x809A
#define GL_DETAIL_TEXTURE_MODE_SGIS 0x809B
#define GL_DETAIL_TEXTURE_FUNC_POINTS_SGIS 0x809C

typedef void (*glDetailTexFuncSGIS_function)(GLenum target, GLsizei n, GLfloat *points);
glDetailTexFuncSGIS_function glDetailTexFuncSGIS;

typedef void (*glGetDetailTexFuncSGIS_function)(GLenum target, GLfloat *points);
glGetDetailTexFuncSGIS_function glGetDetailTexFuncSGIS;
#define GL_SGIS_fog_function 1
#define GL_FOG_FUNC_SGIS 0x812A
#define GL_FOG_FUNC_POINTS_SGIS 0x812B
#define GL_MAX_FOG_FUNC_POINTS_SGIS 0x812C

typedef void (*glFogFuncSGIS_function)(GLsizei n, GLfloat *points);
glFogFuncSGIS_function glFogFuncSGIS;

typedef void (*glGetFogFuncSGIS_function)(GLfloat *points);
glGetFogFuncSGIS_function glGetFogFuncSGIS;
#define GL_SGIS_generate_mipmap 1
#define GL_GENERATE_MIPMAP_SGIS 0x8191
#define GL_GENERATE_MIPMAP_HINT_SGIS 0x8192
#define GL_SGIS_multisample 1
#define GL_MULTISAMPLE_SGIS 0x809D
#define GL_SAMPLE_ALPHA_TO_MASK_SGIS 0x809E
#define GL_SAMPLE_ALPHA_TO_ONE_SGIS 0x809F
#define GL_SAMPLE_MASK_SGIS 0x80A0
#define GL_1PASS_SGIS 0x80A1
#define GL_2PASS_0_SGIS 0x80A2
#define GL_2PASS_1_SGIS 0x80A3
#define GL_4PASS_0_SGIS 0x80A4
#define GL_4PASS_1_SGIS 0x80A5
#define GL_4PASS_2_SGIS 0x80A6
#define GL_4PASS_3_SGIS 0x80A7
#define GL_SAMPLE_BUFFERS_SGIS 0x80A8
#define GL_SAMPLES_SGIS 0x80A9
#define GL_SAMPLE_MASK_VALUE_SGIS 0x80AA
#define GL_SAMPLE_MASK_INVERT_SGIS 0x80AB
#define GL_SAMPLE_PATTERN_SGIS 0x80AC

typedef void (*glSampleMaskSGIS_function)(GLclampf value, GLboolean invert);
glSampleMaskSGIS_function glSampleMaskSGIS;

typedef void (*glSamplePatternSGIS_function)(GLenum pattern);
glSamplePatternSGIS_function glSamplePatternSGIS;
#define GL_SGIS_pixel_texture 1
#define GL_PIXEL_TEXTURE_SGIS 0x8353
#define GL_PIXEL_FRAGMENT_RGB_SOURCE_SGIS 0x8354
#define GL_PIXEL_FRAGMENT_ALPHA_SOURCE_SGIS 0x8355
#define GL_PIXEL_GROUP_COLOR_SGIS 0x8356

typedef void (*glPixelTexGenParameteriSGIS_function)(GLenum pname, GLint param);
glPixelTexGenParameteriSGIS_function glPixelTexGenParameteriSGIS;

typedef void (*glPixelTexGenParameterivSGIS_function)(GLenum pname, GLint *params);
glPixelTexGenParameterivSGIS_function glPixelTexGenParameterivSGIS;

typedef void (*glPixelTexGenParameterfSGIS_function)(GLenum pname, GLfloat param);
glPixelTexGenParameterfSGIS_function glPixelTexGenParameterfSGIS;

typedef void (*glPixelTexGenParameterfvSGIS_function)(GLenum pname, GLfloat *params);
glPixelTexGenParameterfvSGIS_function glPixelTexGenParameterfvSGIS;

typedef void (*glGetPixelTexGenParameterivSGIS_function)(GLenum pname, GLint *params);
glGetPixelTexGenParameterivSGIS_function glGetPixelTexGenParameterivSGIS;

typedef void (*glGetPixelTexGenParameterfvSGIS_function)(GLenum pname, GLfloat *params);
glGetPixelTexGenParameterfvSGIS_function glGetPixelTexGenParameterfvSGIS;
#define GL_SGIS_point_line_texgen 1
#define GL_EYE_DISTANCE_TO_POINT_SGIS 0x81F0
#define GL_OBJECT_DISTANCE_TO_POINT_SGIS 0x81F1
#define GL_EYE_DISTANCE_TO_LINE_SGIS 0x81F2
#define GL_OBJECT_DISTANCE_TO_LINE_SGIS 0x81F3
#define GL_EYE_POINT_SGIS 0x81F4
#define GL_OBJECT_POINT_SGIS 0x81F5
#define GL_EYE_LINE_SGIS 0x81F6
#define GL_OBJECT_LINE_SGIS 0x81F7
#define GL_SGIS_point_parameters 1
#define GL_POINT_SIZE_MIN_SGIS 0x8126
#define GL_POINT_SIZE_MAX_SGIS 0x8127
#define GL_POINT_FADE_THRESHOLD_SIZE_SGIS 0x8128
#define GL_DISTANCE_ATTENUATION_SGIS 0x8129

typedef void (*glPointParameterfSGIS_function)(GLenum pname, GLfloat param);
glPointParameterfSGIS_function glPointParameterfSGIS;

typedef void (*glPointParameterfvSGIS_function)(GLenum pname, GLfloat *params);
glPointParameterfvSGIS_function glPointParameterfvSGIS;
#define GL_SGIS_sharpen_texture 1
#define GL_LINEAR_SHARPEN_SGIS 0x80AD
#define GL_LINEAR_SHARPEN_ALPHA_SGIS 0x80AE
#define GL_LINEAR_SHARPEN_COLOR_SGIS 0x80AF
#define GL_SHARPEN_TEXTURE_FUNC_POINTS_SGIS 0x80B0

typedef void (*glSharpenTexFuncSGIS_function)(GLenum target, GLsizei n, GLfloat *points);
glSharpenTexFuncSGIS_function glSharpenTexFuncSGIS;

typedef void (*glGetSharpenTexFuncSGIS_function)(GLenum target, GLfloat *points);
glGetSharpenTexFuncSGIS_function glGetSharpenTexFuncSGIS;
#define GL_SGIS_texture4D 1
#define GL_PACK_SKIP_VOLUMES_SGIS 0x8130
#define GL_PACK_IMAGE_DEPTH_SGIS 0x8131
#define GL_UNPACK_SKIP_VOLUMES_SGIS 0x8132
#define GL_UNPACK_IMAGE_DEPTH_SGIS 0x8133
#define GL_TEXTURE_4D_SGIS 0x8134
#define GL_PROXY_TEXTURE_4D_SGIS 0x8135
#define GL_TEXTURE_4DSIZE_SGIS 0x8136
#define GL_TEXTURE_WRAP_Q_SGIS 0x8137
#define GL_MAX_4D_TEXTURE_SIZE_SGIS 0x8138
#define GL_TEXTURE_4D_BINDING_SGIS 0x814F

typedef void (*glTexImage4DSGIS_function)(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLsizei size4d, GLint border, GLenum format, GLenum type, void * pixels);
glTexImage4DSGIS_function glTexImage4DSGIS;

typedef void (*glTexSubImage4DSGIS_function)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint woffset, GLsizei width, GLsizei height, GLsizei depth, GLsizei size4d, GLenum format, GLenum type, void * pixels);
glTexSubImage4DSGIS_function glTexSubImage4DSGIS;
#define GL_SGIS_texture_border_clamp 1
#define GL_CLAMP_TO_BORDER_SGIS 0x812D
#define GL_SGIS_texture_color_mask 1
#define GL_TEXTURE_COLOR_WRITEMASK_SGIS 0x81EF

typedef void (*glTextureColorMaskSGIS_function)(GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha);
glTextureColorMaskSGIS_function glTextureColorMaskSGIS;
#define GL_SGIS_texture_edge_clamp 1
#define GL_CLAMP_TO_EDGE_SGIS 0x812F
#define GL_SGIS_texture_filter4 1
#define GL_FILTER4_SGIS 0x8146
#define GL_TEXTURE_FILTER4_SIZE_SGIS 0x8147

typedef void (*glGetTexFilterFuncSGIS_function)(GLenum target, GLenum filter, GLfloat *weights);
glGetTexFilterFuncSGIS_function glGetTexFilterFuncSGIS;

typedef void (*glTexFilterFuncSGIS_function)(GLenum target, GLenum filter, GLsizei n, GLfloat *weights);
glTexFilterFuncSGIS_function glTexFilterFuncSGIS;
#define GL_SGIS_texture_lod 1
#define GL_TEXTURE_MIN_LOD_SGIS 0x813A
#define GL_TEXTURE_MAX_LOD_SGIS 0x813B
#define GL_TEXTURE_BASE_LEVEL_SGIS 0x813C
#define GL_TEXTURE_MAX_LEVEL_SGIS 0x813D
#define GL_SGIS_texture_select 1
#define GL_DUAL_ALPHA4_SGIS 0x8110
#define GL_DUAL_ALPHA8_SGIS 0x8111
#define GL_DUAL_ALPHA12_SGIS 0x8112
#define GL_DUAL_ALPHA16_SGIS 0x8113
#define GL_DUAL_LUMINANCE4_SGIS 0x8114
#define GL_DUAL_LUMINANCE8_SGIS 0x8115
#define GL_DUAL_LUMINANCE12_SGIS 0x8116
#define GL_DUAL_LUMINANCE16_SGIS 0x8117
#define GL_DUAL_INTENSITY4_SGIS 0x8118
#define GL_DUAL_INTENSITY8_SGIS 0x8119
#define GL_DUAL_INTENSITY12_SGIS 0x811A
#define GL_DUAL_INTENSITY16_SGIS 0x811B
#define GL_DUAL_LUMINANCE_ALPHA4_SGIS 0x811C
#define GL_DUAL_LUMINANCE_ALPHA8_SGIS 0x811D
#define GL_QUAD_ALPHA4_SGIS 0x811E
#define GL_QUAD_ALPHA8_SGIS 0x811F
#define GL_QUAD_LUMINANCE4_SGIS 0x8120
#define GL_QUAD_LUMINANCE8_SGIS 0x8121
#define GL_QUAD_INTENSITY4_SGIS 0x8122
#define GL_QUAD_INTENSITY8_SGIS 0x8123
#define GL_DUAL_TEXTURE_SELECT_SGIS 0x8124
#define GL_QUAD_TEXTURE_SELECT_SGIS 0x8125
#define GL_SGIX_async 1
#define GL_ASYNC_MARKER_SGIX 0x8329

typedef void (*glAsyncMarkerSGIX_function)(GLuint marker);
glAsyncMarkerSGIX_function glAsyncMarkerSGIX;

typedef GLint  (*glFinishAsyncSGIX_function)(GLuint *markerp);
glFinishAsyncSGIX_function glFinishAsyncSGIX;

typedef GLint  (*glPollAsyncSGIX_function)(GLuint *markerp);
glPollAsyncSGIX_function glPollAsyncSGIX;

typedef GLuint  (*glGenAsyncMarkersSGIX_function)(GLsizei range);
glGenAsyncMarkersSGIX_function glGenAsyncMarkersSGIX;

typedef void (*glDeleteAsyncMarkersSGIX_function)(GLuint marker, GLsizei range);
glDeleteAsyncMarkersSGIX_function glDeleteAsyncMarkersSGIX;

typedef GLboolean  (*glIsAsyncMarkerSGIX_function)(GLuint marker);
glIsAsyncMarkerSGIX_function glIsAsyncMarkerSGIX;
#define GL_SGIX_async_histogram 1
#define GL_ASYNC_HISTOGRAM_SGIX 0x832C
#define GL_MAX_ASYNC_HISTOGRAM_SGIX 0x832D
#define GL_SGIX_async_pixel 1
#define GL_ASYNC_TEX_IMAGE_SGIX 0x835C
#define GL_ASYNC_DRAW_PIXELS_SGIX 0x835D
#define GL_ASYNC_READ_PIXELS_SGIX 0x835E
#define GL_MAX_ASYNC_TEX_IMAGE_SGIX 0x835F
#define GL_MAX_ASYNC_DRAW_PIXELS_SGIX 0x8360
#define GL_MAX_ASYNC_READ_PIXELS_SGIX 0x8361
#define GL_SGIX_blend_alpha_minmax 1
#define GL_ALPHA_MIN_SGIX 0x8320
#define GL_ALPHA_MAX_SGIX 0x8321
#define GL_SGIX_calligraphic_fragment 1
#define GL_CALLIGRAPHIC_FRAGMENT_SGIX 0x8183
#define GL_SGIX_clipmap 1
#define GL_LINEAR_CLIPMAP_LINEAR_SGIX 0x8170
#define GL_TEXTURE_CLIPMAP_CENTER_SGIX 0x8171
#define GL_TEXTURE_CLIPMAP_FRAME_SGIX 0x8172
#define GL_TEXTURE_CLIPMAP_OFFSET_SGIX 0x8173
#define GL_TEXTURE_CLIPMAP_VIRTUAL_DEPTH_SGIX 0x8174
#define GL_TEXTURE_CLIPMAP_LOD_OFFSET_SGIX 0x8175
#define GL_TEXTURE_CLIPMAP_DEPTH_SGIX 0x8176
#define GL_MAX_CLIPMAP_DEPTH_SGIX 0x8177
#define GL_MAX_CLIPMAP_VIRTUAL_DEPTH_SGIX 0x8178
#define GL_NEAREST_CLIPMAP_NEAREST_SGIX 0x844D
#define GL_NEAREST_CLIPMAP_LINEAR_SGIX 0x844E
#define GL_LINEAR_CLIPMAP_NEAREST_SGIX 0x844F
#define GL_SGIX_convolution_accuracy 1
#define GL_CONVOLUTION_HINT_SGIX 0x8316
#define GL_SGIX_depth_pass_instrument 1
#define GL_SGIX_depth_texture 1
#define GL_DEPTH_COMPONENT16_SGIX 0x81A5
#define GL_DEPTH_COMPONENT24_SGIX 0x81A6
#define GL_DEPTH_COMPONENT32_SGIX 0x81A7
#define GL_SGIX_flush_raster 1

typedef void (*glFlushRasterSGIX_function)();
glFlushRasterSGIX_function glFlushRasterSGIX;
#define GL_SGIX_fog_offset 1
#define GL_FOG_OFFSET_SGIX 0x8198
#define GL_FOG_OFFSET_VALUE_SGIX 0x8199
#define GL_SGIX_fragment_lighting 1
#define GL_FRAGMENT_LIGHTING_SGIX 0x8400
#define GL_FRAGMENT_COLOR_MATERIAL_SGIX 0x8401
#define GL_FRAGMENT_COLOR_MATERIAL_FACE_SGIX 0x8402
#define GL_FRAGMENT_COLOR_MATERIAL_PARAMETER_SGIX 0x8403
#define GL_MAX_FRAGMENT_LIGHTS_SGIX 0x8404
#define GL_MAX_ACTIVE_LIGHTS_SGIX 0x8405
#define GL_CURRENT_RASTER_NORMAL_SGIX 0x8406
#define GL_LIGHT_ENV_MODE_SGIX 0x8407
#define GL_FRAGMENT_LIGHT_MODEL_LOCAL_VIEWER_SGIX 0x8408
#define GL_FRAGMENT_LIGHT_MODEL_TWO_SIDE_SGIX 0x8409
#define GL_FRAGMENT_LIGHT_MODEL_AMBIENT_SGIX 0x840A
#define GL_FRAGMENT_LIGHT_MODEL_NORMAL_INTERPOLATION_SGIX 0x840B
#define GL_FRAGMENT_LIGHT0_SGIX 0x840C
#define GL_FRAGMENT_LIGHT1_SGIX 0x840D
#define GL_FRAGMENT_LIGHT2_SGIX 0x840E
#define GL_FRAGMENT_LIGHT3_SGIX 0x840F
#define GL_FRAGMENT_LIGHT4_SGIX 0x8410
#define GL_FRAGMENT_LIGHT5_SGIX 0x8411
#define GL_FRAGMENT_LIGHT6_SGIX 0x8412
#define GL_FRAGMENT_LIGHT7_SGIX 0x8413

typedef void (*glFragmentColorMaterialSGIX_function)(GLenum face, GLenum mode);
glFragmentColorMaterialSGIX_function glFragmentColorMaterialSGIX;

typedef void (*glFragmentLightfSGIX_function)(GLenum light, GLenum pname, GLfloat param);
glFragmentLightfSGIX_function glFragmentLightfSGIX;

typedef void (*glFragmentLightfvSGIX_function)(GLenum light, GLenum pname, GLfloat *params);
glFragmentLightfvSGIX_function glFragmentLightfvSGIX;

typedef void (*glFragmentLightiSGIX_function)(GLenum light, GLenum pname, GLint param);
glFragmentLightiSGIX_function glFragmentLightiSGIX;

typedef void (*glFragmentLightivSGIX_function)(GLenum light, GLenum pname, GLint *params);
glFragmentLightivSGIX_function glFragmentLightivSGIX;

typedef void (*glFragmentLightModelfSGIX_function)(GLenum pname, GLfloat param);
glFragmentLightModelfSGIX_function glFragmentLightModelfSGIX;

typedef void (*glFragmentLightModelfvSGIX_function)(GLenum pname, GLfloat *params);
glFragmentLightModelfvSGIX_function glFragmentLightModelfvSGIX;

typedef void (*glFragmentLightModeliSGIX_function)(GLenum pname, GLint param);
glFragmentLightModeliSGIX_function glFragmentLightModeliSGIX;

typedef void (*glFragmentLightModelivSGIX_function)(GLenum pname, GLint *params);
glFragmentLightModelivSGIX_function glFragmentLightModelivSGIX;

typedef void (*glFragmentMaterialfSGIX_function)(GLenum face, GLenum pname, GLfloat param);
glFragmentMaterialfSGIX_function glFragmentMaterialfSGIX;

typedef void (*glFragmentMaterialfvSGIX_function)(GLenum face, GLenum pname, GLfloat *params);
glFragmentMaterialfvSGIX_function glFragmentMaterialfvSGIX;

typedef void (*glFragmentMaterialiSGIX_function)(GLenum face, GLenum pname, GLint param);
glFragmentMaterialiSGIX_function glFragmentMaterialiSGIX;

typedef void (*glFragmentMaterialivSGIX_function)(GLenum face, GLenum pname, GLint *params);
glFragmentMaterialivSGIX_function glFragmentMaterialivSGIX;

typedef void (*glGetFragmentLightfvSGIX_function)(GLenum light, GLenum pname, GLfloat *params);
glGetFragmentLightfvSGIX_function glGetFragmentLightfvSGIX;

typedef void (*glGetFragmentLightivSGIX_function)(GLenum light, GLenum pname, GLint *params);
glGetFragmentLightivSGIX_function glGetFragmentLightivSGIX;

typedef void (*glGetFragmentMaterialfvSGIX_function)(GLenum face, GLenum pname, GLfloat *params);
glGetFragmentMaterialfvSGIX_function glGetFragmentMaterialfvSGIX;

typedef void (*glGetFragmentMaterialivSGIX_function)(GLenum face, GLenum pname, GLint *params);
glGetFragmentMaterialivSGIX_function glGetFragmentMaterialivSGIX;

typedef void (*glLightEnviSGIX_function)(GLenum pname, GLint param);
glLightEnviSGIX_function glLightEnviSGIX;
#define GL_SGIX_framezoom 1
#define GL_FRAMEZOOM_SGIX 0x818B
#define GL_FRAMEZOOM_FACTOR_SGIX 0x818C
#define GL_MAX_FRAMEZOOM_FACTOR_SGIX 0x818D

typedef void (*glFrameZoomSGIX_function)(GLint factor);
glFrameZoomSGIX_function glFrameZoomSGIX;
#define GL_SGIX_igloo_interface 1

typedef void (*glIglooInterfaceSGIX_function)(GLenum pname, void * params);
glIglooInterfaceSGIX_function glIglooInterfaceSGIX;
#define GL_SGIX_instruments 1
#define GL_INSTRUMENT_BUFFER_POINTER_SGIX 0x8180
#define GL_INSTRUMENT_MEASUREMENTS_SGIX 0x8181

typedef GLint  (*glGetInstrumentsSGIX_function)();
glGetInstrumentsSGIX_function glGetInstrumentsSGIX;

typedef void (*glInstrumentsBufferSGIX_function)(GLsizei size, GLint *buffer);
glInstrumentsBufferSGIX_function glInstrumentsBufferSGIX;

typedef GLint  (*glPollInstrumentsSGIX_function)(GLint *marker_p);
glPollInstrumentsSGIX_function glPollInstrumentsSGIX;

typedef void (*glReadInstrumentsSGIX_function)(GLint marker);
glReadInstrumentsSGIX_function glReadInstrumentsSGIX;

typedef void (*glStartInstrumentsSGIX_function)();
glStartInstrumentsSGIX_function glStartInstrumentsSGIX;

typedef void (*glStopInstrumentsSGIX_function)(GLint marker);
glStopInstrumentsSGIX_function glStopInstrumentsSGIX;
#define GL_SGIX_interlace 1
#define GL_INTERLACE_SGIX 0x8094
#define GL_SGIX_ir_instrument1 1
#define GL_IR_INSTRUMENT1_SGIX 0x817F
#define GL_SGIX_list_priority 1
#define GL_LIST_PRIORITY_SGIX 0x8182

typedef void (*glGetListParameterfvSGIX_function)(GLuint list, GLenum pname, GLfloat *params);
glGetListParameterfvSGIX_function glGetListParameterfvSGIX;

typedef void (*glGetListParameterivSGIX_function)(GLuint list, GLenum pname, GLint *params);
glGetListParameterivSGIX_function glGetListParameterivSGIX;

typedef void (*glListParameterfSGIX_function)(GLuint list, GLenum pname, GLfloat param);
glListParameterfSGIX_function glListParameterfSGIX;

typedef void (*glListParameterfvSGIX_function)(GLuint list, GLenum pname, GLfloat *params);
glListParameterfvSGIX_function glListParameterfvSGIX;

typedef void (*glListParameteriSGIX_function)(GLuint list, GLenum pname, GLint param);
glListParameteriSGIX_function glListParameteriSGIX;

typedef void (*glListParameterivSGIX_function)(GLuint list, GLenum pname, GLint *params);
glListParameterivSGIX_function glListParameterivSGIX;
#define GL_SGIX_pixel_texture 1
#define GL_PIXEL_TEX_GEN_SGIX 0x8139
#define GL_PIXEL_TEX_GEN_MODE_SGIX 0x832B

typedef void (*glPixelTexGenSGIX_function)(GLenum mode);
glPixelTexGenSGIX_function glPixelTexGenSGIX;
#define GL_SGIX_pixel_tiles 1
#define GL_PIXEL_TILE_BEST_ALIGNMENT_SGIX 0x813E
#define GL_PIXEL_TILE_CACHE_INCREMENT_SGIX 0x813F
#define GL_PIXEL_TILE_WIDTH_SGIX 0x8140
#define GL_PIXEL_TILE_HEIGHT_SGIX 0x8141
#define GL_PIXEL_TILE_GRID_WIDTH_SGIX 0x8142
#define GL_PIXEL_TILE_GRID_HEIGHT_SGIX 0x8143
#define GL_PIXEL_TILE_GRID_DEPTH_SGIX 0x8144
#define GL_PIXEL_TILE_CACHE_SIZE_SGIX 0x8145
#define GL_SGIX_polynomial_ffd 1
#define GL_TEXTURE_DEFORMATION_BIT_SGIX 0x00000001
#define GL_GEOMETRY_DEFORMATION_BIT_SGIX 0x00000002
#define GL_GEOMETRY_DEFORMATION_SGIX 0x8194
#define GL_TEXTURE_DEFORMATION_SGIX 0x8195
#define GL_DEFORMATIONS_MASK_SGIX 0x8196
#define GL_MAX_DEFORMATION_ORDER_SGIX 0x8197

typedef void (*glDeformationMap3dSGIX_function)(GLenum target, GLdouble u1, GLdouble u2, GLint ustride, GLint uorder, GLdouble v1, GLdouble v2, GLint vstride, GLint vorder, GLdouble w1, GLdouble w2, GLint wstride, GLint worder, GLdouble *points);
glDeformationMap3dSGIX_function glDeformationMap3dSGIX;

typedef void (*glDeformationMap3fSGIX_function)(GLenum target, GLfloat u1, GLfloat u2, GLint ustride, GLint uorder, GLfloat v1, GLfloat v2, GLint vstride, GLint vorder, GLfloat w1, GLfloat w2, GLint wstride, GLint worder, GLfloat *points);
glDeformationMap3fSGIX_function glDeformationMap3fSGIX;

typedef void (*glDeformSGIX_function)(GLbitfield mask);
glDeformSGIX_function glDeformSGIX;

typedef void (*glLoadIdentityDeformationMapSGIX_function)(GLbitfield mask);
glLoadIdentityDeformationMapSGIX_function glLoadIdentityDeformationMapSGIX;
#define GL_SGIX_reference_plane 1
#define GL_REFERENCE_PLANE_SGIX 0x817D
#define GL_REFERENCE_PLANE_EQUATION_SGIX 0x817E

typedef void (*glReferencePlaneSGIX_function)(GLdouble *equation);
glReferencePlaneSGIX_function glReferencePlaneSGIX;
#define GL_SGIX_resample 1
#define GL_PACK_RESAMPLE_SGIX 0x842E
#define GL_UNPACK_RESAMPLE_SGIX 0x842F
#define GL_RESAMPLE_REPLICATE_SGIX 0x8433
#define GL_RESAMPLE_ZERO_FILL_SGIX 0x8434
#define GL_RESAMPLE_DECIMATE_SGIX 0x8430
#define GL_SGIX_scalebias_hint 1
#define GL_SCALEBIAS_HINT_SGIX 0x8322
#define GL_SGIX_shadow 1
#define GL_TEXTURE_COMPARE_SGIX 0x819A
#define GL_TEXTURE_COMPARE_OPERATOR_SGIX 0x819B
#define GL_TEXTURE_LEQUAL_R_SGIX 0x819C
#define GL_TEXTURE_GEQUAL_R_SGIX 0x819D
#define GL_SGIX_shadow_ambient 1
#define GL_SHADOW_AMBIENT_SGIX 0x80BF
#define GL_SGIX_sprite 1
#define GL_SPRITE_SGIX 0x8148
#define GL_SPRITE_MODE_SGIX 0x8149
#define GL_SPRITE_AXIS_SGIX 0x814A
#define GL_SPRITE_TRANSLATION_SGIX 0x814B
#define GL_SPRITE_AXIAL_SGIX 0x814C
#define GL_SPRITE_OBJECT_ALIGNED_SGIX 0x814D
#define GL_SPRITE_EYE_ALIGNED_SGIX 0x814E

typedef void (*glSpriteParameterfSGIX_function)(GLenum pname, GLfloat param);
glSpriteParameterfSGIX_function glSpriteParameterfSGIX;

typedef void (*glSpriteParameterfvSGIX_function)(GLenum pname, GLfloat *params);
glSpriteParameterfvSGIX_function glSpriteParameterfvSGIX;

typedef void (*glSpriteParameteriSGIX_function)(GLenum pname, GLint param);
glSpriteParameteriSGIX_function glSpriteParameteriSGIX;

typedef void (*glSpriteParameterivSGIX_function)(GLenum pname, GLint *params);
glSpriteParameterivSGIX_function glSpriteParameterivSGIX;
#define GL_SGIX_subsample 1
#define GL_PACK_SUBSAMPLE_RATE_SGIX 0x85A0
#define GL_UNPACK_SUBSAMPLE_RATE_SGIX 0x85A1
#define GL_PIXEL_SUBSAMPLE_4444_SGIX 0x85A2
#define GL_PIXEL_SUBSAMPLE_2424_SGIX 0x85A3
#define GL_PIXEL_SUBSAMPLE_4242_SGIX 0x85A4
#define GL_SGIX_tag_sample_buffer 1

typedef void (*glTagSampleBufferSGIX_function)();
glTagSampleBufferSGIX_function glTagSampleBufferSGIX;
#define GL_SGIX_texture_add_env 1
#define GL_TEXTURE_ENV_BIAS_SGIX 0x80BE
#define GL_SGIX_texture_coordinate_clamp 1
#define GL_TEXTURE_MAX_CLAMP_S_SGIX 0x8369
#define GL_TEXTURE_MAX_CLAMP_T_SGIX 0x836A
#define GL_TEXTURE_MAX_CLAMP_R_SGIX 0x836B
#define GL_SGIX_texture_lod_bias 1
#define GL_TEXTURE_LOD_BIAS_S_SGIX 0x818E
#define GL_TEXTURE_LOD_BIAS_T_SGIX 0x818F
#define GL_TEXTURE_LOD_BIAS_R_SGIX 0x8190
#define GL_SGIX_texture_multi_buffer 1
#define GL_TEXTURE_MULTI_BUFFER_HINT_SGIX 0x812E
#define GL_SGIX_texture_scale_bias 1
#define GL_POST_TEXTURE_FILTER_BIAS_SGIX 0x8179
#define GL_POST_TEXTURE_FILTER_SCALE_SGIX 0x817A
#define GL_POST_TEXTURE_FILTER_BIAS_RANGE_SGIX 0x817B
#define GL_POST_TEXTURE_FILTER_SCALE_RANGE_SGIX 0x817C
#define GL_SGIX_vertex_preclip 1
#define GL_VERTEX_PRECLIP_SGIX 0x83EE
#define GL_VERTEX_PRECLIP_HINT_SGIX 0x83EF
#define GL_SGIX_ycrcb 1
#define GL_YCRCB_422_SGIX 0x81BB
#define GL_YCRCB_444_SGIX 0x81BC
#define GL_SGIX_ycrcb_subsample 1
#define GL_SGIX_ycrcba 1
#define GL_YCRCB_SGIX 0x8318
#define GL_YCRCBA_SGIX 0x8319
#define GL_SGI_color_matrix 1
#define GL_COLOR_MATRIX_SGI 0x80B1
#define GL_COLOR_MATRIX_STACK_DEPTH_SGI 0x80B2
#define GL_MAX_COLOR_MATRIX_STACK_DEPTH_SGI 0x80B3
#define GL_POST_COLOR_MATRIX_RED_SCALE_SGI 0x80B4
#define GL_POST_COLOR_MATRIX_GREEN_SCALE_SGI 0x80B5
#define GL_POST_COLOR_MATRIX_BLUE_SCALE_SGI 0x80B6
#define GL_POST_COLOR_MATRIX_ALPHA_SCALE_SGI 0x80B7
#define GL_POST_COLOR_MATRIX_RED_BIAS_SGI 0x80B8
#define GL_POST_COLOR_MATRIX_GREEN_BIAS_SGI 0x80B9
#define GL_POST_COLOR_MATRIX_BLUE_BIAS_SGI 0x80BA
#define GL_POST_COLOR_MATRIX_ALPHA_BIAS_SGI 0x80BB
#define GL_SGI_color_table 1
#define GL_COLOR_TABLE_SGI 0x80D0
#define GL_POST_CONVOLUTION_COLOR_TABLE_SGI 0x80D1
#define GL_POST_COLOR_MATRIX_COLOR_TABLE_SGI 0x80D2
#define GL_PROXY_COLOR_TABLE_SGI 0x80D3
#define GL_PROXY_POST_CONVOLUTION_COLOR_TABLE_SGI 0x80D4
#define GL_PROXY_POST_COLOR_MATRIX_COLOR_TABLE_SGI 0x80D5
#define GL_COLOR_TABLE_SCALE_SGI 0x80D6
#define GL_COLOR_TABLE_BIAS_SGI 0x80D7
#define GL_COLOR_TABLE_FORMAT_SGI 0x80D8
#define GL_COLOR_TABLE_WIDTH_SGI 0x80D9
#define GL_COLOR_TABLE_RED_SIZE_SGI 0x80DA
#define GL_COLOR_TABLE_GREEN_SIZE_SGI 0x80DB
#define GL_COLOR_TABLE_BLUE_SIZE_SGI 0x80DC
#define GL_COLOR_TABLE_ALPHA_SIZE_SGI 0x80DD
#define GL_COLOR_TABLE_LUMINANCE_SIZE_SGI 0x80DE
#define GL_COLOR_TABLE_INTENSITY_SIZE_SGI 0x80DF

typedef void (*glColorTableSGI_function)(GLenum target, GLenum internalformat, GLsizei width, GLenum format, GLenum type, void * table);
glColorTableSGI_function glColorTableSGI;

typedef void (*glColorTableParameterfvSGI_function)(GLenum target, GLenum pname, GLfloat *params);
glColorTableParameterfvSGI_function glColorTableParameterfvSGI;

typedef void (*glColorTableParameterivSGI_function)(GLenum target, GLenum pname, GLint *params);
glColorTableParameterivSGI_function glColorTableParameterivSGI;

typedef void (*glCopyColorTableSGI_function)(GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width);
glCopyColorTableSGI_function glCopyColorTableSGI;

typedef void (*glGetColorTableSGI_function)(GLenum target, GLenum format, GLenum type, void * table);
glGetColorTableSGI_function glGetColorTableSGI;

typedef void (*glGetColorTableParameterfvSGI_function)(GLenum target, GLenum pname, GLfloat *params);
glGetColorTableParameterfvSGI_function glGetColorTableParameterfvSGI;

typedef void (*glGetColorTableParameterivSGI_function)(GLenum target, GLenum pname, GLint *params);
glGetColorTableParameterivSGI_function glGetColorTableParameterivSGI;
#define GL_SGI_texture_color_table 1
#define GL_TEXTURE_COLOR_TABLE_SGI 0x80BC
#define GL_PROXY_TEXTURE_COLOR_TABLE_SGI 0x80BD
#define GL_SUNX_constant_data 1
#define GL_UNPACK_CONSTANT_DATA_SUNX 0x81D5
#define GL_TEXTURE_CONSTANT_DATA_SUNX 0x81D6

typedef void (*glFinishTextureSUNX_function)();
glFinishTextureSUNX_function glFinishTextureSUNX;
#define GL_SUN_convolution_border_modes 1
#define GL_WRAP_BORDER_SUN 0x81D4
#define GL_SUN_global_alpha 1
#define GL_GLOBAL_ALPHA_SUN 0x81D9
#define GL_GLOBAL_ALPHA_FACTOR_SUN 0x81DA

typedef void (*glGlobalAlphaFactorbSUN_function)(GLbyte factor);
glGlobalAlphaFactorbSUN_function glGlobalAlphaFactorbSUN;

typedef void (*glGlobalAlphaFactorsSUN_function)(GLshort factor);
glGlobalAlphaFactorsSUN_function glGlobalAlphaFactorsSUN;

typedef void (*glGlobalAlphaFactoriSUN_function)(GLint factor);
glGlobalAlphaFactoriSUN_function glGlobalAlphaFactoriSUN;

typedef void (*glGlobalAlphaFactorfSUN_function)(GLfloat factor);
glGlobalAlphaFactorfSUN_function glGlobalAlphaFactorfSUN;

typedef void (*glGlobalAlphaFactordSUN_function)(GLdouble factor);
glGlobalAlphaFactordSUN_function glGlobalAlphaFactordSUN;

typedef void (*glGlobalAlphaFactorubSUN_function)(GLubyte factor);
glGlobalAlphaFactorubSUN_function glGlobalAlphaFactorubSUN;

typedef void (*glGlobalAlphaFactorusSUN_function)(GLushort factor);
glGlobalAlphaFactorusSUN_function glGlobalAlphaFactorusSUN;

typedef void (*glGlobalAlphaFactoruiSUN_function)(GLuint factor);
glGlobalAlphaFactoruiSUN_function glGlobalAlphaFactoruiSUN;
#define GL_SUN_mesh_array 1
#define GL_QUAD_MESH_SUN 0x8614
#define GL_TRIANGLE_MESH_SUN 0x8615

typedef void (*glDrawMeshArraysSUN_function)(GLenum mode, GLint first, GLsizei count, GLsizei width);
glDrawMeshArraysSUN_function glDrawMeshArraysSUN;
#define GL_SUN_slice_accum 1
#define GL_SLICE_ACCUM_SUN 0x85CC
#define GL_SUN_triangle_list 1
#define GL_RESTART_SUN 0x0001
#define GL_REPLACE_MIDDLE_SUN 0x0002
#define GL_REPLACE_OLDEST_SUN 0x0003
#define GL_TRIANGLE_LIST_SUN 0x81D7
#define GL_REPLACEMENT_CODE_SUN 0x81D8
#define GL_REPLACEMENT_CODE_ARRAY_SUN 0x85C0
#define GL_REPLACEMENT_CODE_ARRAY_TYPE_SUN 0x85C1
#define GL_REPLACEMENT_CODE_ARRAY_STRIDE_SUN 0x85C2
#define GL_REPLACEMENT_CODE_ARRAY_POINTER_SUN 0x85C3
#define GL_R1UI_V3F_SUN 0x85C4
#define GL_R1UI_C4UB_V3F_SUN 0x85C5
#define GL_R1UI_C3F_V3F_SUN 0x85C6
#define GL_R1UI_N3F_V3F_SUN 0x85C7
#define GL_R1UI_C4F_N3F_V3F_SUN 0x85C8
#define GL_R1UI_T2F_V3F_SUN 0x85C9
#define GL_R1UI_T2F_N3F_V3F_SUN 0x85CA
#define GL_R1UI_T2F_C4F_N3F_V3F_SUN 0x85CB

typedef void (*glReplacementCodeuiSUN_function)(GLuint code);
glReplacementCodeuiSUN_function glReplacementCodeuiSUN;

typedef void (*glReplacementCodeusSUN_function)(GLushort code);
glReplacementCodeusSUN_function glReplacementCodeusSUN;

typedef void (*glReplacementCodeubSUN_function)(GLubyte code);
glReplacementCodeubSUN_function glReplacementCodeubSUN;

typedef void (*glReplacementCodeuivSUN_function)(GLuint *code);
glReplacementCodeuivSUN_function glReplacementCodeuivSUN;

typedef void (*glReplacementCodeusvSUN_function)(GLushort *code);
glReplacementCodeusvSUN_function glReplacementCodeusvSUN;

typedef void (*glReplacementCodeubvSUN_function)(GLubyte *code);
glReplacementCodeubvSUN_function glReplacementCodeubvSUN;

typedef void (*glReplacementCodePointerSUN_function)(GLenum type, GLsizei stride, void * *pointer);
glReplacementCodePointerSUN_function glReplacementCodePointerSUN;
#define GL_SUN_vertex 1

typedef void (*glColor4ubVertex2fSUN_function)(GLubyte r, GLubyte g, GLubyte b, GLubyte a, GLfloat x, GLfloat y);
glColor4ubVertex2fSUN_function glColor4ubVertex2fSUN;

typedef void (*glColor4ubVertex2fvSUN_function)(GLubyte *c, GLfloat *v);
glColor4ubVertex2fvSUN_function glColor4ubVertex2fvSUN;

typedef void (*glColor4ubVertex3fSUN_function)(GLubyte r, GLubyte g, GLubyte b, GLubyte a, GLfloat x, GLfloat y, GLfloat z);
glColor4ubVertex3fSUN_function glColor4ubVertex3fSUN;

typedef void (*glColor4ubVertex3fvSUN_function)(GLubyte *c, GLfloat *v);
glColor4ubVertex3fvSUN_function glColor4ubVertex3fvSUN;

typedef void (*glColor3fVertex3fSUN_function)(GLfloat r, GLfloat g, GLfloat b, GLfloat x, GLfloat y, GLfloat z);
glColor3fVertex3fSUN_function glColor3fVertex3fSUN;

typedef void (*glColor3fVertex3fvSUN_function)(GLfloat *c, GLfloat *v);
glColor3fVertex3fvSUN_function glColor3fVertex3fvSUN;

typedef void (*glNormal3fVertex3fSUN_function)(GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z);
glNormal3fVertex3fSUN_function glNormal3fVertex3fSUN;

typedef void (*glNormal3fVertex3fvSUN_function)(GLfloat *n, GLfloat *v);
glNormal3fVertex3fvSUN_function glNormal3fVertex3fvSUN;

typedef void (*glColor4fNormal3fVertex3fSUN_function)(GLfloat r, GLfloat g, GLfloat b, GLfloat a, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z);
glColor4fNormal3fVertex3fSUN_function glColor4fNormal3fVertex3fSUN;

typedef void (*glColor4fNormal3fVertex3fvSUN_function)(GLfloat *c, GLfloat *n, GLfloat *v);
glColor4fNormal3fVertex3fvSUN_function glColor4fNormal3fVertex3fvSUN;

typedef void (*glTexCoord2fVertex3fSUN_function)(GLfloat s, GLfloat t, GLfloat x, GLfloat y, GLfloat z);
glTexCoord2fVertex3fSUN_function glTexCoord2fVertex3fSUN;

typedef void (*glTexCoord2fVertex3fvSUN_function)(GLfloat *tc, GLfloat *v);
glTexCoord2fVertex3fvSUN_function glTexCoord2fVertex3fvSUN;

typedef void (*glTexCoord4fVertex4fSUN_function)(GLfloat s, GLfloat t, GLfloat p, GLfloat q, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
glTexCoord4fVertex4fSUN_function glTexCoord4fVertex4fSUN;

typedef void (*glTexCoord4fVertex4fvSUN_function)(GLfloat *tc, GLfloat *v);
glTexCoord4fVertex4fvSUN_function glTexCoord4fVertex4fvSUN;

typedef void (*glTexCoord2fColor4ubVertex3fSUN_function)(GLfloat s, GLfloat t, GLubyte r, GLubyte g, GLubyte b, GLubyte a, GLfloat x, GLfloat y, GLfloat z);
glTexCoord2fColor4ubVertex3fSUN_function glTexCoord2fColor4ubVertex3fSUN;

typedef void (*glTexCoord2fColor4ubVertex3fvSUN_function)(GLfloat *tc, GLubyte *c, GLfloat *v);
glTexCoord2fColor4ubVertex3fvSUN_function glTexCoord2fColor4ubVertex3fvSUN;

typedef void (*glTexCoord2fColor3fVertex3fSUN_function)(GLfloat s, GLfloat t, GLfloat r, GLfloat g, GLfloat b, GLfloat x, GLfloat y, GLfloat z);
glTexCoord2fColor3fVertex3fSUN_function glTexCoord2fColor3fVertex3fSUN;

typedef void (*glTexCoord2fColor3fVertex3fvSUN_function)(GLfloat *tc, GLfloat *c, GLfloat *v);
glTexCoord2fColor3fVertex3fvSUN_function glTexCoord2fColor3fVertex3fvSUN;

typedef void (*glTexCoord2fNormal3fVertex3fSUN_function)(GLfloat s, GLfloat t, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z);
glTexCoord2fNormal3fVertex3fSUN_function glTexCoord2fNormal3fVertex3fSUN;

typedef void (*glTexCoord2fNormal3fVertex3fvSUN_function)(GLfloat *tc, GLfloat *n, GLfloat *v);
glTexCoord2fNormal3fVertex3fvSUN_function glTexCoord2fNormal3fVertex3fvSUN;

typedef void (*glTexCoord2fColor4fNormal3fVertex3fSUN_function)(GLfloat s, GLfloat t, GLfloat r, GLfloat g, GLfloat b, GLfloat a, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z);
glTexCoord2fColor4fNormal3fVertex3fSUN_function glTexCoord2fColor4fNormal3fVertex3fSUN;

typedef void (*glTexCoord2fColor4fNormal3fVertex3fvSUN_function)(GLfloat *tc, GLfloat *c, GLfloat *n, GLfloat *v);
glTexCoord2fColor4fNormal3fVertex3fvSUN_function glTexCoord2fColor4fNormal3fVertex3fvSUN;

typedef void (*glTexCoord4fColor4fNormal3fVertex4fSUN_function)(GLfloat s, GLfloat t, GLfloat p, GLfloat q, GLfloat r, GLfloat g, GLfloat b, GLfloat a, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
glTexCoord4fColor4fNormal3fVertex4fSUN_function glTexCoord4fColor4fNormal3fVertex4fSUN;

typedef void (*glTexCoord4fColor4fNormal3fVertex4fvSUN_function)(GLfloat *tc, GLfloat *c, GLfloat *n, GLfloat *v);
glTexCoord4fColor4fNormal3fVertex4fvSUN_function glTexCoord4fColor4fNormal3fVertex4fvSUN;

typedef void (*glReplacementCodeuiVertex3fSUN_function)(GLuint rc, GLfloat x, GLfloat y, GLfloat z);
glReplacementCodeuiVertex3fSUN_function glReplacementCodeuiVertex3fSUN;

typedef void (*glReplacementCodeuiVertex3fvSUN_function)(GLuint *rc, GLfloat *v);
glReplacementCodeuiVertex3fvSUN_function glReplacementCodeuiVertex3fvSUN;

typedef void (*glReplacementCodeuiColor4ubVertex3fSUN_function)(GLuint rc, GLubyte r, GLubyte g, GLubyte b, GLubyte a, GLfloat x, GLfloat y, GLfloat z);
glReplacementCodeuiColor4ubVertex3fSUN_function glReplacementCodeuiColor4ubVertex3fSUN;

typedef void (*glReplacementCodeuiColor4ubVertex3fvSUN_function)(GLuint *rc, GLubyte *c, GLfloat *v);
glReplacementCodeuiColor4ubVertex3fvSUN_function glReplacementCodeuiColor4ubVertex3fvSUN;

typedef void (*glReplacementCodeuiColor3fVertex3fSUN_function)(GLuint rc, GLfloat r, GLfloat g, GLfloat b, GLfloat x, GLfloat y, GLfloat z);
glReplacementCodeuiColor3fVertex3fSUN_function glReplacementCodeuiColor3fVertex3fSUN;

typedef void (*glReplacementCodeuiColor3fVertex3fvSUN_function)(GLuint *rc, GLfloat *c, GLfloat *v);
glReplacementCodeuiColor3fVertex3fvSUN_function glReplacementCodeuiColor3fVertex3fvSUN;

typedef void (*glReplacementCodeuiNormal3fVertex3fSUN_function)(GLuint rc, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z);
glReplacementCodeuiNormal3fVertex3fSUN_function glReplacementCodeuiNormal3fVertex3fSUN;

typedef void (*glReplacementCodeuiNormal3fVertex3fvSUN_function)(GLuint *rc, GLfloat *n, GLfloat *v);
glReplacementCodeuiNormal3fVertex3fvSUN_function glReplacementCodeuiNormal3fVertex3fvSUN;

typedef void (*glReplacementCodeuiColor4fNormal3fVertex3fSUN_function)(GLuint rc, GLfloat r, GLfloat g, GLfloat b, GLfloat a, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z);
glReplacementCodeuiColor4fNormal3fVertex3fSUN_function glReplacementCodeuiColor4fNormal3fVertex3fSUN;

typedef void (*glReplacementCodeuiColor4fNormal3fVertex3fvSUN_function)(GLuint *rc, GLfloat *c, GLfloat *n, GLfloat *v);
glReplacementCodeuiColor4fNormal3fVertex3fvSUN_function glReplacementCodeuiColor4fNormal3fVertex3fvSUN;

typedef void (*glReplacementCodeuiTexCoord2fVertex3fSUN_function)(GLuint rc, GLfloat s, GLfloat t, GLfloat x, GLfloat y, GLfloat z);
glReplacementCodeuiTexCoord2fVertex3fSUN_function glReplacementCodeuiTexCoord2fVertex3fSUN;

typedef void (*glReplacementCodeuiTexCoord2fVertex3fvSUN_function)(GLuint *rc, GLfloat *tc, GLfloat *v);
glReplacementCodeuiTexCoord2fVertex3fvSUN_function glReplacementCodeuiTexCoord2fVertex3fvSUN;

typedef void (*glReplacementCodeuiTexCoord2fNormal3fVertex3fSUN_function)(GLuint rc, GLfloat s, GLfloat t, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z);
glReplacementCodeuiTexCoord2fNormal3fVertex3fSUN_function glReplacementCodeuiTexCoord2fNormal3fVertex3fSUN;

typedef void (*glReplacementCodeuiTexCoord2fNormal3fVertex3fvSUN_function)(GLuint *rc, GLfloat *tc, GLfloat *n, GLfloat *v);
glReplacementCodeuiTexCoord2fNormal3fVertex3fvSUN_function glReplacementCodeuiTexCoord2fNormal3fVertex3fvSUN;

typedef void (*glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fSUN_function)(GLuint rc, GLfloat s, GLfloat t, GLfloat r, GLfloat g, GLfloat b, GLfloat a, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z);
glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fSUN_function glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fSUN;

typedef void (*glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fvSUN_function)(GLuint *rc, GLfloat *tc, GLfloat *c, GLfloat *n, GLfloat *v);
glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fvSUN_function glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fvSUN;
#define GL_WIN_phong_shading 1
#define GL_WIN_specular_fog 1
#ifdef __cplusplus
}
#endif


#endif
