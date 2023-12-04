#if !defined mo_gl_bindings_h
#define mo_gl_bindings_h

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

typedef void (*mogl_function_glDrawRangeElements)(GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, void * indices);
mogl_function_glDrawRangeElements glDrawRangeElements;

typedef void (*mogl_function_glTexImage3D)(GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, void * pixels);
mogl_function_glTexImage3D glTexImage3D;

typedef void (*mogl_function_glTexSubImage3D)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, void * pixels);
mogl_function_glTexSubImage3D glTexSubImage3D;

typedef void (*mogl_function_glCopyTexSubImage3D)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height);
mogl_function_glCopyTexSubImage3D glCopyTexSubImage3D;
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

typedef void (*mogl_function_glActiveTexture)(GLenum texture);
mogl_function_glActiveTexture glActiveTexture;

typedef void (*mogl_function_glSampleCoverage)(GLfloat value, GLboolean invert);
mogl_function_glSampleCoverage glSampleCoverage;

typedef void (*mogl_function_glCompressedTexImage3D)(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, void * data);
mogl_function_glCompressedTexImage3D glCompressedTexImage3D;

typedef void (*mogl_function_glCompressedTexImage2D)(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, void * data);
mogl_function_glCompressedTexImage2D glCompressedTexImage2D;

typedef void (*mogl_function_glCompressedTexImage1D)(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, void * data);
mogl_function_glCompressedTexImage1D glCompressedTexImage1D;

typedef void (*mogl_function_glCompressedTexSubImage3D)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, void * data);
mogl_function_glCompressedTexSubImage3D glCompressedTexSubImage3D;

typedef void (*mogl_function_glCompressedTexSubImage2D)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, void * data);
mogl_function_glCompressedTexSubImage2D glCompressedTexSubImage2D;

typedef void (*mogl_function_glCompressedTexSubImage1D)(GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, void * data);
mogl_function_glCompressedTexSubImage1D glCompressedTexSubImage1D;

typedef void (*mogl_function_glGetCompressedTexImage)(GLenum target, GLint level, void * img);
mogl_function_glGetCompressedTexImage glGetCompressedTexImage;

typedef void (*mogl_function_glClientActiveTexture)(GLenum texture);
mogl_function_glClientActiveTexture glClientActiveTexture;

typedef void (*mogl_function_glMultiTexCoord1d)(GLenum target, GLdouble s);
mogl_function_glMultiTexCoord1d glMultiTexCoord1d;

typedef void (*mogl_function_glMultiTexCoord1dv)(GLenum target, GLdouble *v);
mogl_function_glMultiTexCoord1dv glMultiTexCoord1dv;

typedef void (*mogl_function_glMultiTexCoord1f)(GLenum target, GLfloat s);
mogl_function_glMultiTexCoord1f glMultiTexCoord1f;

typedef void (*mogl_function_glMultiTexCoord1fv)(GLenum target, GLfloat *v);
mogl_function_glMultiTexCoord1fv glMultiTexCoord1fv;

typedef void (*mogl_function_glMultiTexCoord1i)(GLenum target, GLint s);
mogl_function_glMultiTexCoord1i glMultiTexCoord1i;

typedef void (*mogl_function_glMultiTexCoord1iv)(GLenum target, GLint *v);
mogl_function_glMultiTexCoord1iv glMultiTexCoord1iv;

typedef void (*mogl_function_glMultiTexCoord1s)(GLenum target, GLshort s);
mogl_function_glMultiTexCoord1s glMultiTexCoord1s;

typedef void (*mogl_function_glMultiTexCoord1sv)(GLenum target, GLshort *v);
mogl_function_glMultiTexCoord1sv glMultiTexCoord1sv;

typedef void (*mogl_function_glMultiTexCoord2d)(GLenum target, GLdouble s, GLdouble t);
mogl_function_glMultiTexCoord2d glMultiTexCoord2d;

typedef void (*mogl_function_glMultiTexCoord2dv)(GLenum target, GLdouble *v);
mogl_function_glMultiTexCoord2dv glMultiTexCoord2dv;

typedef void (*mogl_function_glMultiTexCoord2f)(GLenum target, GLfloat s, GLfloat t);
mogl_function_glMultiTexCoord2f glMultiTexCoord2f;

typedef void (*mogl_function_glMultiTexCoord2fv)(GLenum target, GLfloat *v);
mogl_function_glMultiTexCoord2fv glMultiTexCoord2fv;

typedef void (*mogl_function_glMultiTexCoord2i)(GLenum target, GLint s, GLint t);
mogl_function_glMultiTexCoord2i glMultiTexCoord2i;

typedef void (*mogl_function_glMultiTexCoord2iv)(GLenum target, GLint *v);
mogl_function_glMultiTexCoord2iv glMultiTexCoord2iv;

typedef void (*mogl_function_glMultiTexCoord2s)(GLenum target, GLshort s, GLshort t);
mogl_function_glMultiTexCoord2s glMultiTexCoord2s;

typedef void (*mogl_function_glMultiTexCoord2sv)(GLenum target, GLshort *v);
mogl_function_glMultiTexCoord2sv glMultiTexCoord2sv;

typedef void (*mogl_function_glMultiTexCoord3d)(GLenum target, GLdouble s, GLdouble t, GLdouble r);
mogl_function_glMultiTexCoord3d glMultiTexCoord3d;

typedef void (*mogl_function_glMultiTexCoord3dv)(GLenum target, GLdouble *v);
mogl_function_glMultiTexCoord3dv glMultiTexCoord3dv;

typedef void (*mogl_function_glMultiTexCoord3f)(GLenum target, GLfloat s, GLfloat t, GLfloat r);
mogl_function_glMultiTexCoord3f glMultiTexCoord3f;

typedef void (*mogl_function_glMultiTexCoord3fv)(GLenum target, GLfloat *v);
mogl_function_glMultiTexCoord3fv glMultiTexCoord3fv;

typedef void (*mogl_function_glMultiTexCoord3i)(GLenum target, GLint s, GLint t, GLint r);
mogl_function_glMultiTexCoord3i glMultiTexCoord3i;

typedef void (*mogl_function_glMultiTexCoord3iv)(GLenum target, GLint *v);
mogl_function_glMultiTexCoord3iv glMultiTexCoord3iv;

typedef void (*mogl_function_glMultiTexCoord3s)(GLenum target, GLshort s, GLshort t, GLshort r);
mogl_function_glMultiTexCoord3s glMultiTexCoord3s;

typedef void (*mogl_function_glMultiTexCoord3sv)(GLenum target, GLshort *v);
mogl_function_glMultiTexCoord3sv glMultiTexCoord3sv;

typedef void (*mogl_function_glMultiTexCoord4d)(GLenum target, GLdouble s, GLdouble t, GLdouble r, GLdouble q);
mogl_function_glMultiTexCoord4d glMultiTexCoord4d;

typedef void (*mogl_function_glMultiTexCoord4dv)(GLenum target, GLdouble *v);
mogl_function_glMultiTexCoord4dv glMultiTexCoord4dv;

typedef void (*mogl_function_glMultiTexCoord4f)(GLenum target, GLfloat s, GLfloat t, GLfloat r, GLfloat q);
mogl_function_glMultiTexCoord4f glMultiTexCoord4f;

typedef void (*mogl_function_glMultiTexCoord4fv)(GLenum target, GLfloat *v);
mogl_function_glMultiTexCoord4fv glMultiTexCoord4fv;

typedef void (*mogl_function_glMultiTexCoord4i)(GLenum target, GLint s, GLint t, GLint r, GLint q);
mogl_function_glMultiTexCoord4i glMultiTexCoord4i;

typedef void (*mogl_function_glMultiTexCoord4iv)(GLenum target, GLint *v);
mogl_function_glMultiTexCoord4iv glMultiTexCoord4iv;

typedef void (*mogl_function_glMultiTexCoord4s)(GLenum target, GLshort s, GLshort t, GLshort r, GLshort q);
mogl_function_glMultiTexCoord4s glMultiTexCoord4s;

typedef void (*mogl_function_glMultiTexCoord4sv)(GLenum target, GLshort *v);
mogl_function_glMultiTexCoord4sv glMultiTexCoord4sv;

typedef void (*mogl_function_glLoadTransposeMatrixf)(GLfloat *m);
mogl_function_glLoadTransposeMatrixf glLoadTransposeMatrixf;

typedef void (*mogl_function_glLoadTransposeMatrixd)(GLdouble *m);
mogl_function_glLoadTransposeMatrixd glLoadTransposeMatrixd;

typedef void (*mogl_function_glMultTransposeMatrixf)(GLfloat *m);
mogl_function_glMultTransposeMatrixf glMultTransposeMatrixf;

typedef void (*mogl_function_glMultTransposeMatrixd)(GLdouble *m);
mogl_function_glMultTransposeMatrixd glMultTransposeMatrixd;
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

typedef void (*mogl_function_glBlendFuncSeparate)(GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha);
mogl_function_glBlendFuncSeparate glBlendFuncSeparate;

typedef void (*mogl_function_glMultiDrawArrays)(GLenum mode, GLint *first, GLsizei *count, GLsizei drawcount);
mogl_function_glMultiDrawArrays glMultiDrawArrays;

typedef void (*mogl_function_glMultiDrawElements)(GLenum mode, GLsizei *count, GLenum type, void * *indices, GLsizei drawcount);
mogl_function_glMultiDrawElements glMultiDrawElements;

typedef void (*mogl_function_glPointParameterf)(GLenum pname, GLfloat param);
mogl_function_glPointParameterf glPointParameterf;

typedef void (*mogl_function_glPointParameterfv)(GLenum pname, GLfloat *params);
mogl_function_glPointParameterfv glPointParameterfv;

typedef void (*mogl_function_glPointParameteri)(GLenum pname, GLint param);
mogl_function_glPointParameteri glPointParameteri;

typedef void (*mogl_function_glPointParameteriv)(GLenum pname, GLint *params);
mogl_function_glPointParameteriv glPointParameteriv;

typedef void (*mogl_function_glFogCoordf)(GLfloat coord);
mogl_function_glFogCoordf glFogCoordf;

typedef void (*mogl_function_glFogCoordfv)(GLfloat *coord);
mogl_function_glFogCoordfv glFogCoordfv;

typedef void (*mogl_function_glFogCoordd)(GLdouble coord);
mogl_function_glFogCoordd glFogCoordd;

typedef void (*mogl_function_glFogCoorddv)(GLdouble *coord);
mogl_function_glFogCoorddv glFogCoorddv;

typedef void (*mogl_function_glFogCoordPointer)(GLenum type, GLsizei stride, void * pointer);
mogl_function_glFogCoordPointer glFogCoordPointer;

typedef void (*mogl_function_glSecondaryColor3b)(GLbyte red, GLbyte green, GLbyte blue);
mogl_function_glSecondaryColor3b glSecondaryColor3b;

typedef void (*mogl_function_glSecondaryColor3bv)(GLbyte *v);
mogl_function_glSecondaryColor3bv glSecondaryColor3bv;

typedef void (*mogl_function_glSecondaryColor3d)(GLdouble red, GLdouble green, GLdouble blue);
mogl_function_glSecondaryColor3d glSecondaryColor3d;

typedef void (*mogl_function_glSecondaryColor3dv)(GLdouble *v);
mogl_function_glSecondaryColor3dv glSecondaryColor3dv;

typedef void (*mogl_function_glSecondaryColor3f)(GLfloat red, GLfloat green, GLfloat blue);
mogl_function_glSecondaryColor3f glSecondaryColor3f;

typedef void (*mogl_function_glSecondaryColor3fv)(GLfloat *v);
mogl_function_glSecondaryColor3fv glSecondaryColor3fv;

typedef void (*mogl_function_glSecondaryColor3i)(GLint red, GLint green, GLint blue);
mogl_function_glSecondaryColor3i glSecondaryColor3i;

typedef void (*mogl_function_glSecondaryColor3iv)(GLint *v);
mogl_function_glSecondaryColor3iv glSecondaryColor3iv;

typedef void (*mogl_function_glSecondaryColor3s)(GLshort red, GLshort green, GLshort blue);
mogl_function_glSecondaryColor3s glSecondaryColor3s;

typedef void (*mogl_function_glSecondaryColor3sv)(GLshort *v);
mogl_function_glSecondaryColor3sv glSecondaryColor3sv;

typedef void (*mogl_function_glSecondaryColor3ub)(GLubyte red, GLubyte green, GLubyte blue);
mogl_function_glSecondaryColor3ub glSecondaryColor3ub;

typedef void (*mogl_function_glSecondaryColor3ubv)(GLubyte *v);
mogl_function_glSecondaryColor3ubv glSecondaryColor3ubv;

typedef void (*mogl_function_glSecondaryColor3ui)(GLuint red, GLuint green, GLuint blue);
mogl_function_glSecondaryColor3ui glSecondaryColor3ui;

typedef void (*mogl_function_glSecondaryColor3uiv)(GLuint *v);
mogl_function_glSecondaryColor3uiv glSecondaryColor3uiv;

typedef void (*mogl_function_glSecondaryColor3us)(GLushort red, GLushort green, GLushort blue);
mogl_function_glSecondaryColor3us glSecondaryColor3us;

typedef void (*mogl_function_glSecondaryColor3usv)(GLushort *v);
mogl_function_glSecondaryColor3usv glSecondaryColor3usv;

typedef void (*mogl_function_glSecondaryColorPointer)(GLint size, GLenum type, GLsizei stride, void * pointer);
mogl_function_glSecondaryColorPointer glSecondaryColorPointer;

typedef void (*mogl_function_glWindowPos2d)(GLdouble x, GLdouble y);
mogl_function_glWindowPos2d glWindowPos2d;

typedef void (*mogl_function_glWindowPos2dv)(GLdouble *v);
mogl_function_glWindowPos2dv glWindowPos2dv;

typedef void (*mogl_function_glWindowPos2f)(GLfloat x, GLfloat y);
mogl_function_glWindowPos2f glWindowPos2f;

typedef void (*mogl_function_glWindowPos2fv)(GLfloat *v);
mogl_function_glWindowPos2fv glWindowPos2fv;

typedef void (*mogl_function_glWindowPos2i)(GLint x, GLint y);
mogl_function_glWindowPos2i glWindowPos2i;

typedef void (*mogl_function_glWindowPos2iv)(GLint *v);
mogl_function_glWindowPos2iv glWindowPos2iv;

typedef void (*mogl_function_glWindowPos2s)(GLshort x, GLshort y);
mogl_function_glWindowPos2s glWindowPos2s;

typedef void (*mogl_function_glWindowPos2sv)(GLshort *v);
mogl_function_glWindowPos2sv glWindowPos2sv;

typedef void (*mogl_function_glWindowPos3d)(GLdouble x, GLdouble y, GLdouble z);
mogl_function_glWindowPos3d glWindowPos3d;

typedef void (*mogl_function_glWindowPos3dv)(GLdouble *v);
mogl_function_glWindowPos3dv glWindowPos3dv;

typedef void (*mogl_function_glWindowPos3f)(GLfloat x, GLfloat y, GLfloat z);
mogl_function_glWindowPos3f glWindowPos3f;

typedef void (*mogl_function_glWindowPos3fv)(GLfloat *v);
mogl_function_glWindowPos3fv glWindowPos3fv;

typedef void (*mogl_function_glWindowPos3i)(GLint x, GLint y, GLint z);
mogl_function_glWindowPos3i glWindowPos3i;

typedef void (*mogl_function_glWindowPos3iv)(GLint *v);
mogl_function_glWindowPos3iv glWindowPos3iv;

typedef void (*mogl_function_glWindowPos3s)(GLshort x, GLshort y, GLshort z);
mogl_function_glWindowPos3s glWindowPos3s;

typedef void (*mogl_function_glWindowPos3sv)(GLshort *v);
mogl_function_glWindowPos3sv glWindowPos3sv;

typedef void (*mogl_function_glBlendColor)(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);
mogl_function_glBlendColor glBlendColor;

typedef void (*mogl_function_glBlendEquation)(GLenum mode);
mogl_function_glBlendEquation glBlendEquation;
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

typedef void (*mogl_function_glGenQueries)(GLsizei n, GLuint *ids);
mogl_function_glGenQueries glGenQueries;

typedef void (*mogl_function_glDeleteQueries)(GLsizei n, GLuint *ids);
mogl_function_glDeleteQueries glDeleteQueries;

typedef GLboolean  (*mogl_function_glIsQuery)(GLuint id);
mogl_function_glIsQuery glIsQuery;

typedef void (*mogl_function_glBeginQuery)(GLenum target, GLuint id);
mogl_function_glBeginQuery glBeginQuery;

typedef void (*mogl_function_glEndQuery)(GLenum target);
mogl_function_glEndQuery glEndQuery;

typedef void (*mogl_function_glGetQueryiv)(GLenum target, GLenum pname, GLint *params);
mogl_function_glGetQueryiv glGetQueryiv;

typedef void (*mogl_function_glGetQueryObjectiv)(GLuint id, GLenum pname, GLint *params);
mogl_function_glGetQueryObjectiv glGetQueryObjectiv;

typedef void (*mogl_function_glGetQueryObjectuiv)(GLuint id, GLenum pname, GLuint *params);
mogl_function_glGetQueryObjectuiv glGetQueryObjectuiv;

typedef void (*mogl_function_glBindBuffer)(GLenum target, GLuint buffer);
mogl_function_glBindBuffer glBindBuffer;

typedef void (*mogl_function_glDeleteBuffers)(GLsizei n, GLuint *buffers);
mogl_function_glDeleteBuffers glDeleteBuffers;

typedef void (*mogl_function_glGenBuffers)(GLsizei n, GLuint *buffers);
mogl_function_glGenBuffers glGenBuffers;

typedef GLboolean  (*mogl_function_glIsBuffer)(GLuint buffer);
mogl_function_glIsBuffer glIsBuffer;

typedef void (*mogl_function_glBufferData)(GLenum target, GLsizeiptr size, void * data, GLenum usage);
mogl_function_glBufferData glBufferData;

typedef void (*mogl_function_glBufferSubData)(GLenum target, GLintptr offset, GLsizeiptr size, void * data);
mogl_function_glBufferSubData glBufferSubData;

typedef void (*mogl_function_glGetBufferSubData)(GLenum target, GLintptr offset, GLsizeiptr size, void * data);
mogl_function_glGetBufferSubData glGetBufferSubData;

typedef void *  (*mogl_function_glMapBuffer)(GLenum target, GLenum access);
mogl_function_glMapBuffer glMapBuffer;

typedef GLboolean  (*mogl_function_glUnmapBuffer)(GLenum target);
mogl_function_glUnmapBuffer glUnmapBuffer;

typedef void (*mogl_function_glGetBufferParameteriv)(GLenum target, GLenum pname, GLint *params);
mogl_function_glGetBufferParameteriv glGetBufferParameteriv;

typedef void (*mogl_function_glGetBufferPointerv)(GLenum target, GLenum pname, void * *params);
mogl_function_glGetBufferPointerv glGetBufferPointerv;
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

typedef void (*mogl_function_glBlendEquationSeparate)(GLenum modeRGB, GLenum modeAlpha);
mogl_function_glBlendEquationSeparate glBlendEquationSeparate;

typedef void (*mogl_function_glDrawBuffers)(GLsizei n, GLenum *bufs);
mogl_function_glDrawBuffers glDrawBuffers;

typedef void (*mogl_function_glStencilOpSeparate)(GLenum face, GLenum sfail, GLenum dpfail, GLenum dppass);
mogl_function_glStencilOpSeparate glStencilOpSeparate;

typedef void (*mogl_function_glStencilFuncSeparate)(GLenum face, GLenum func, GLint ref, GLuint mask);
mogl_function_glStencilFuncSeparate glStencilFuncSeparate;

typedef void (*mogl_function_glStencilMaskSeparate)(GLenum face, GLuint mask);
mogl_function_glStencilMaskSeparate glStencilMaskSeparate;

typedef void (*mogl_function_glAttachShader)(GLuint program, GLuint shader);
mogl_function_glAttachShader glAttachShader;

typedef void (*mogl_function_glBindAttribLocation)(GLuint program, GLuint index, GLchar *name);
mogl_function_glBindAttribLocation glBindAttribLocation;

typedef void (*mogl_function_glCompileShader)(GLuint shader);
mogl_function_glCompileShader glCompileShader;

typedef GLuint  (*mogl_function_glCreateProgram)();
mogl_function_glCreateProgram glCreateProgram;

typedef GLuint  (*mogl_function_glCreateShader)(GLenum type);
mogl_function_glCreateShader glCreateShader;

typedef void (*mogl_function_glDeleteProgram)(GLuint program);
mogl_function_glDeleteProgram glDeleteProgram;

typedef void (*mogl_function_glDeleteShader)(GLuint shader);
mogl_function_glDeleteShader glDeleteShader;

typedef void (*mogl_function_glDetachShader)(GLuint program, GLuint shader);
mogl_function_glDetachShader glDetachShader;

typedef void (*mogl_function_glDisableVertexAttribArray)(GLuint index);
mogl_function_glDisableVertexAttribArray glDisableVertexAttribArray;

typedef void (*mogl_function_glEnableVertexAttribArray)(GLuint index);
mogl_function_glEnableVertexAttribArray glEnableVertexAttribArray;

typedef void (*mogl_function_glGetActiveAttrib)(GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLint *size, GLenum *type, GLchar *name);
mogl_function_glGetActiveAttrib glGetActiveAttrib;

typedef void (*mogl_function_glGetActiveUniform)(GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLint *size, GLenum *type, GLchar *name);
mogl_function_glGetActiveUniform glGetActiveUniform;

typedef void (*mogl_function_glGetAttachedShaders)(GLuint program, GLsizei maxCount, GLsizei *count, GLuint *shaders);
mogl_function_glGetAttachedShaders glGetAttachedShaders;

typedef GLint  (*mogl_function_glGetAttribLocation)(GLuint program, GLchar *name);
mogl_function_glGetAttribLocation glGetAttribLocation;

typedef void (*mogl_function_glGetProgramiv)(GLuint program, GLenum pname, GLint *params);
mogl_function_glGetProgramiv glGetProgramiv;

typedef void (*mogl_function_glGetProgramInfoLog)(GLuint program, GLsizei bufSize, GLsizei *length, GLchar *infoLog);
mogl_function_glGetProgramInfoLog glGetProgramInfoLog;

typedef void (*mogl_function_glGetShaderiv)(GLuint shader, GLenum pname, GLint *params);
mogl_function_glGetShaderiv glGetShaderiv;

typedef void (*mogl_function_glGetShaderInfoLog)(GLuint shader, GLsizei bufSize, GLsizei *length, GLchar *infoLog);
mogl_function_glGetShaderInfoLog glGetShaderInfoLog;

typedef void (*mogl_function_glGetShaderSource)(GLuint shader, GLsizei bufSize, GLsizei *length, GLchar *source);
mogl_function_glGetShaderSource glGetShaderSource;

typedef GLint  (*mogl_function_glGetUniformLocation)(GLuint program, GLchar *name);
mogl_function_glGetUniformLocation glGetUniformLocation;

typedef void (*mogl_function_glGetUniformfv)(GLuint program, GLint location, GLfloat *params);
mogl_function_glGetUniformfv glGetUniformfv;

typedef void (*mogl_function_glGetUniformiv)(GLuint program, GLint location, GLint *params);
mogl_function_glGetUniformiv glGetUniformiv;

typedef void (*mogl_function_glGetVertexAttribdv)(GLuint index, GLenum pname, GLdouble *params);
mogl_function_glGetVertexAttribdv glGetVertexAttribdv;

typedef void (*mogl_function_glGetVertexAttribfv)(GLuint index, GLenum pname, GLfloat *params);
mogl_function_glGetVertexAttribfv glGetVertexAttribfv;

typedef void (*mogl_function_glGetVertexAttribiv)(GLuint index, GLenum pname, GLint *params);
mogl_function_glGetVertexAttribiv glGetVertexAttribiv;

typedef void (*mogl_function_glGetVertexAttribPointerv)(GLuint index, GLenum pname, void * *pointer);
mogl_function_glGetVertexAttribPointerv glGetVertexAttribPointerv;

typedef GLboolean  (*mogl_function_glIsProgram)(GLuint program);
mogl_function_glIsProgram glIsProgram;

typedef GLboolean  (*mogl_function_glIsShader)(GLuint shader);
mogl_function_glIsShader glIsShader;

typedef void (*mogl_function_glLinkProgram)(GLuint program);
mogl_function_glLinkProgram glLinkProgram;

typedef void (*mogl_function_glShaderSource)(GLuint shader, GLsizei count, GLchar **string, GLint *length);
mogl_function_glShaderSource glShaderSource;

typedef void (*mogl_function_glUseProgram)(GLuint program);
mogl_function_glUseProgram glUseProgram;

typedef void (*mogl_function_glUniform1f)(GLint location, GLfloat v0);
mogl_function_glUniform1f glUniform1f;

typedef void (*mogl_function_glUniform2f)(GLint location, GLfloat v0, GLfloat v1);
mogl_function_glUniform2f glUniform2f;

typedef void (*mogl_function_glUniform3f)(GLint location, GLfloat v0, GLfloat v1, GLfloat v2);
mogl_function_glUniform3f glUniform3f;

typedef void (*mogl_function_glUniform4f)(GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3);
mogl_function_glUniform4f glUniform4f;

typedef void (*mogl_function_glUniform1i)(GLint location, GLint v0);
mogl_function_glUniform1i glUniform1i;

typedef void (*mogl_function_glUniform2i)(GLint location, GLint v0, GLint v1);
mogl_function_glUniform2i glUniform2i;

typedef void (*mogl_function_glUniform3i)(GLint location, GLint v0, GLint v1, GLint v2);
mogl_function_glUniform3i glUniform3i;

typedef void (*mogl_function_glUniform4i)(GLint location, GLint v0, GLint v1, GLint v2, GLint v3);
mogl_function_glUniform4i glUniform4i;

typedef void (*mogl_function_glUniform1fv)(GLint location, GLsizei count, GLfloat *value);
mogl_function_glUniform1fv glUniform1fv;

typedef void (*mogl_function_glUniform2fv)(GLint location, GLsizei count, GLfloat *value);
mogl_function_glUniform2fv glUniform2fv;

typedef void (*mogl_function_glUniform3fv)(GLint location, GLsizei count, GLfloat *value);
mogl_function_glUniform3fv glUniform3fv;

typedef void (*mogl_function_glUniform4fv)(GLint location, GLsizei count, GLfloat *value);
mogl_function_glUniform4fv glUniform4fv;

typedef void (*mogl_function_glUniform1iv)(GLint location, GLsizei count, GLint *value);
mogl_function_glUniform1iv glUniform1iv;

typedef void (*mogl_function_glUniform2iv)(GLint location, GLsizei count, GLint *value);
mogl_function_glUniform2iv glUniform2iv;

typedef void (*mogl_function_glUniform3iv)(GLint location, GLsizei count, GLint *value);
mogl_function_glUniform3iv glUniform3iv;

typedef void (*mogl_function_glUniform4iv)(GLint location, GLsizei count, GLint *value);
mogl_function_glUniform4iv glUniform4iv;

typedef void (*mogl_function_glUniformMatrix2fv)(GLint location, GLsizei count, GLboolean transpose, GLfloat *value);
mogl_function_glUniformMatrix2fv glUniformMatrix2fv;

typedef void (*mogl_function_glUniformMatrix3fv)(GLint location, GLsizei count, GLboolean transpose, GLfloat *value);
mogl_function_glUniformMatrix3fv glUniformMatrix3fv;

typedef void (*mogl_function_glUniformMatrix4fv)(GLint location, GLsizei count, GLboolean transpose, GLfloat *value);
mogl_function_glUniformMatrix4fv glUniformMatrix4fv;

typedef void (*mogl_function_glValidateProgram)(GLuint program);
mogl_function_glValidateProgram glValidateProgram;

typedef void (*mogl_function_glVertexAttrib1d)(GLuint index, GLdouble x);
mogl_function_glVertexAttrib1d glVertexAttrib1d;

typedef void (*mogl_function_glVertexAttrib1dv)(GLuint index, GLdouble *v);
mogl_function_glVertexAttrib1dv glVertexAttrib1dv;

typedef void (*mogl_function_glVertexAttrib1f)(GLuint index, GLfloat x);
mogl_function_glVertexAttrib1f glVertexAttrib1f;

typedef void (*mogl_function_glVertexAttrib1fv)(GLuint index, GLfloat *v);
mogl_function_glVertexAttrib1fv glVertexAttrib1fv;

typedef void (*mogl_function_glVertexAttrib1s)(GLuint index, GLshort x);
mogl_function_glVertexAttrib1s glVertexAttrib1s;

typedef void (*mogl_function_glVertexAttrib1sv)(GLuint index, GLshort *v);
mogl_function_glVertexAttrib1sv glVertexAttrib1sv;

typedef void (*mogl_function_glVertexAttrib2d)(GLuint index, GLdouble x, GLdouble y);
mogl_function_glVertexAttrib2d glVertexAttrib2d;

typedef void (*mogl_function_glVertexAttrib2dv)(GLuint index, GLdouble *v);
mogl_function_glVertexAttrib2dv glVertexAttrib2dv;

typedef void (*mogl_function_glVertexAttrib2f)(GLuint index, GLfloat x, GLfloat y);
mogl_function_glVertexAttrib2f glVertexAttrib2f;

typedef void (*mogl_function_glVertexAttrib2fv)(GLuint index, GLfloat *v);
mogl_function_glVertexAttrib2fv glVertexAttrib2fv;

typedef void (*mogl_function_glVertexAttrib2s)(GLuint index, GLshort x, GLshort y);
mogl_function_glVertexAttrib2s glVertexAttrib2s;

typedef void (*mogl_function_glVertexAttrib2sv)(GLuint index, GLshort *v);
mogl_function_glVertexAttrib2sv glVertexAttrib2sv;

typedef void (*mogl_function_glVertexAttrib3d)(GLuint index, GLdouble x, GLdouble y, GLdouble z);
mogl_function_glVertexAttrib3d glVertexAttrib3d;

typedef void (*mogl_function_glVertexAttrib3dv)(GLuint index, GLdouble *v);
mogl_function_glVertexAttrib3dv glVertexAttrib3dv;

typedef void (*mogl_function_glVertexAttrib3f)(GLuint index, GLfloat x, GLfloat y, GLfloat z);
mogl_function_glVertexAttrib3f glVertexAttrib3f;

typedef void (*mogl_function_glVertexAttrib3fv)(GLuint index, GLfloat *v);
mogl_function_glVertexAttrib3fv glVertexAttrib3fv;

typedef void (*mogl_function_glVertexAttrib3s)(GLuint index, GLshort x, GLshort y, GLshort z);
mogl_function_glVertexAttrib3s glVertexAttrib3s;

typedef void (*mogl_function_glVertexAttrib3sv)(GLuint index, GLshort *v);
mogl_function_glVertexAttrib3sv glVertexAttrib3sv;

typedef void (*mogl_function_glVertexAttrib4Nbv)(GLuint index, GLbyte *v);
mogl_function_glVertexAttrib4Nbv glVertexAttrib4Nbv;

typedef void (*mogl_function_glVertexAttrib4Niv)(GLuint index, GLint *v);
mogl_function_glVertexAttrib4Niv glVertexAttrib4Niv;

typedef void (*mogl_function_glVertexAttrib4Nsv)(GLuint index, GLshort *v);
mogl_function_glVertexAttrib4Nsv glVertexAttrib4Nsv;

typedef void (*mogl_function_glVertexAttrib4Nub)(GLuint index, GLubyte x, GLubyte y, GLubyte z, GLubyte w);
mogl_function_glVertexAttrib4Nub glVertexAttrib4Nub;

typedef void (*mogl_function_glVertexAttrib4Nubv)(GLuint index, GLubyte *v);
mogl_function_glVertexAttrib4Nubv glVertexAttrib4Nubv;

typedef void (*mogl_function_glVertexAttrib4Nuiv)(GLuint index, GLuint *v);
mogl_function_glVertexAttrib4Nuiv glVertexAttrib4Nuiv;

typedef void (*mogl_function_glVertexAttrib4Nusv)(GLuint index, GLushort *v);
mogl_function_glVertexAttrib4Nusv glVertexAttrib4Nusv;

typedef void (*mogl_function_glVertexAttrib4bv)(GLuint index, GLbyte *v);
mogl_function_glVertexAttrib4bv glVertexAttrib4bv;

typedef void (*mogl_function_glVertexAttrib4d)(GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
mogl_function_glVertexAttrib4d glVertexAttrib4d;

typedef void (*mogl_function_glVertexAttrib4dv)(GLuint index, GLdouble *v);
mogl_function_glVertexAttrib4dv glVertexAttrib4dv;

typedef void (*mogl_function_glVertexAttrib4f)(GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
mogl_function_glVertexAttrib4f glVertexAttrib4f;

typedef void (*mogl_function_glVertexAttrib4fv)(GLuint index, GLfloat *v);
mogl_function_glVertexAttrib4fv glVertexAttrib4fv;

typedef void (*mogl_function_glVertexAttrib4iv)(GLuint index, GLint *v);
mogl_function_glVertexAttrib4iv glVertexAttrib4iv;

typedef void (*mogl_function_glVertexAttrib4s)(GLuint index, GLshort x, GLshort y, GLshort z, GLshort w);
mogl_function_glVertexAttrib4s glVertexAttrib4s;

typedef void (*mogl_function_glVertexAttrib4sv)(GLuint index, GLshort *v);
mogl_function_glVertexAttrib4sv glVertexAttrib4sv;

typedef void (*mogl_function_glVertexAttrib4ubv)(GLuint index, GLubyte *v);
mogl_function_glVertexAttrib4ubv glVertexAttrib4ubv;

typedef void (*mogl_function_glVertexAttrib4uiv)(GLuint index, GLuint *v);
mogl_function_glVertexAttrib4uiv glVertexAttrib4uiv;

typedef void (*mogl_function_glVertexAttrib4usv)(GLuint index, GLushort *v);
mogl_function_glVertexAttrib4usv glVertexAttrib4usv;

typedef void (*mogl_function_glVertexAttribPointer)(GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, void * pointer);
mogl_function_glVertexAttribPointer glVertexAttribPointer;
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

typedef void (*mogl_function_glUniformMatrix2x3fv)(GLint location, GLsizei count, GLboolean transpose, GLfloat *value);
mogl_function_glUniformMatrix2x3fv glUniformMatrix2x3fv;

typedef void (*mogl_function_glUniformMatrix3x2fv)(GLint location, GLsizei count, GLboolean transpose, GLfloat *value);
mogl_function_glUniformMatrix3x2fv glUniformMatrix3x2fv;

typedef void (*mogl_function_glUniformMatrix2x4fv)(GLint location, GLsizei count, GLboolean transpose, GLfloat *value);
mogl_function_glUniformMatrix2x4fv glUniformMatrix2x4fv;

typedef void (*mogl_function_glUniformMatrix4x2fv)(GLint location, GLsizei count, GLboolean transpose, GLfloat *value);
mogl_function_glUniformMatrix4x2fv glUniformMatrix4x2fv;

typedef void (*mogl_function_glUniformMatrix3x4fv)(GLint location, GLsizei count, GLboolean transpose, GLfloat *value);
mogl_function_glUniformMatrix3x4fv glUniformMatrix3x4fv;

typedef void (*mogl_function_glUniformMatrix4x3fv)(GLint location, GLsizei count, GLboolean transpose, GLfloat *value);
mogl_function_glUniformMatrix4x3fv glUniformMatrix4x3fv;
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

typedef void (*mogl_function_glColorMaski)(GLuint index, GLboolean r, GLboolean g, GLboolean b, GLboolean a);
mogl_function_glColorMaski glColorMaski;

typedef void (*mogl_function_glGetBooleani_v)(GLenum target, GLuint index, GLboolean *data);
mogl_function_glGetBooleani_v glGetBooleani_v;

typedef void (*mogl_function_glGetIntegeri_v)(GLenum target, GLuint index, GLint *data);
mogl_function_glGetIntegeri_v glGetIntegeri_v;

typedef void (*mogl_function_glEnablei)(GLenum target, GLuint index);
mogl_function_glEnablei glEnablei;

typedef void (*mogl_function_glDisablei)(GLenum target, GLuint index);
mogl_function_glDisablei glDisablei;

typedef GLboolean  (*mogl_function_glIsEnabledi)(GLenum target, GLuint index);
mogl_function_glIsEnabledi glIsEnabledi;

typedef void (*mogl_function_glBeginTransformFeedback)(GLenum primitiveMode);
mogl_function_glBeginTransformFeedback glBeginTransformFeedback;

typedef void (*mogl_function_glEndTransformFeedback)();
mogl_function_glEndTransformFeedback glEndTransformFeedback;

typedef void (*mogl_function_glBindBufferRange)(GLenum target, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size);
mogl_function_glBindBufferRange glBindBufferRange;

typedef void (*mogl_function_glBindBufferBase)(GLenum target, GLuint index, GLuint buffer);
mogl_function_glBindBufferBase glBindBufferBase;

typedef void (*mogl_function_glTransformFeedbackVaryings)(GLuint program, GLsizei count, GLchar **varyings, GLenum bufferMode);
mogl_function_glTransformFeedbackVaryings glTransformFeedbackVaryings;

typedef void (*mogl_function_glGetTransformFeedbackVarying)(GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLsizei *size, GLenum *type, GLchar *name);
mogl_function_glGetTransformFeedbackVarying glGetTransformFeedbackVarying;

typedef void (*mogl_function_glClampColor)(GLenum target, GLenum clamp);
mogl_function_glClampColor glClampColor;

typedef void (*mogl_function_glBeginConditionalRender)(GLuint id, GLenum mode);
mogl_function_glBeginConditionalRender glBeginConditionalRender;

typedef void (*mogl_function_glEndConditionalRender)();
mogl_function_glEndConditionalRender glEndConditionalRender;

typedef void (*mogl_function_glVertexAttribIPointer)(GLuint index, GLint size, GLenum type, GLsizei stride, void * pointer);
mogl_function_glVertexAttribIPointer glVertexAttribIPointer;

typedef void (*mogl_function_glGetVertexAttribIiv)(GLuint index, GLenum pname, GLint *params);
mogl_function_glGetVertexAttribIiv glGetVertexAttribIiv;

typedef void (*mogl_function_glGetVertexAttribIuiv)(GLuint index, GLenum pname, GLuint *params);
mogl_function_glGetVertexAttribIuiv glGetVertexAttribIuiv;

typedef void (*mogl_function_glVertexAttribI1i)(GLuint index, GLint x);
mogl_function_glVertexAttribI1i glVertexAttribI1i;

typedef void (*mogl_function_glVertexAttribI2i)(GLuint index, GLint x, GLint y);
mogl_function_glVertexAttribI2i glVertexAttribI2i;

typedef void (*mogl_function_glVertexAttribI3i)(GLuint index, GLint x, GLint y, GLint z);
mogl_function_glVertexAttribI3i glVertexAttribI3i;

typedef void (*mogl_function_glVertexAttribI4i)(GLuint index, GLint x, GLint y, GLint z, GLint w);
mogl_function_glVertexAttribI4i glVertexAttribI4i;

typedef void (*mogl_function_glVertexAttribI1ui)(GLuint index, GLuint x);
mogl_function_glVertexAttribI1ui glVertexAttribI1ui;

typedef void (*mogl_function_glVertexAttribI2ui)(GLuint index, GLuint x, GLuint y);
mogl_function_glVertexAttribI2ui glVertexAttribI2ui;

typedef void (*mogl_function_glVertexAttribI3ui)(GLuint index, GLuint x, GLuint y, GLuint z);
mogl_function_glVertexAttribI3ui glVertexAttribI3ui;

typedef void (*mogl_function_glVertexAttribI4ui)(GLuint index, GLuint x, GLuint y, GLuint z, GLuint w);
mogl_function_glVertexAttribI4ui glVertexAttribI4ui;

typedef void (*mogl_function_glVertexAttribI1iv)(GLuint index, GLint *v);
mogl_function_glVertexAttribI1iv glVertexAttribI1iv;

typedef void (*mogl_function_glVertexAttribI2iv)(GLuint index, GLint *v);
mogl_function_glVertexAttribI2iv glVertexAttribI2iv;

typedef void (*mogl_function_glVertexAttribI3iv)(GLuint index, GLint *v);
mogl_function_glVertexAttribI3iv glVertexAttribI3iv;

typedef void (*mogl_function_glVertexAttribI4iv)(GLuint index, GLint *v);
mogl_function_glVertexAttribI4iv glVertexAttribI4iv;

typedef void (*mogl_function_glVertexAttribI1uiv)(GLuint index, GLuint *v);
mogl_function_glVertexAttribI1uiv glVertexAttribI1uiv;

typedef void (*mogl_function_glVertexAttribI2uiv)(GLuint index, GLuint *v);
mogl_function_glVertexAttribI2uiv glVertexAttribI2uiv;

typedef void (*mogl_function_glVertexAttribI3uiv)(GLuint index, GLuint *v);
mogl_function_glVertexAttribI3uiv glVertexAttribI3uiv;

typedef void (*mogl_function_glVertexAttribI4uiv)(GLuint index, GLuint *v);
mogl_function_glVertexAttribI4uiv glVertexAttribI4uiv;

typedef void (*mogl_function_glVertexAttribI4bv)(GLuint index, GLbyte *v);
mogl_function_glVertexAttribI4bv glVertexAttribI4bv;

typedef void (*mogl_function_glVertexAttribI4sv)(GLuint index, GLshort *v);
mogl_function_glVertexAttribI4sv glVertexAttribI4sv;

typedef void (*mogl_function_glVertexAttribI4ubv)(GLuint index, GLubyte *v);
mogl_function_glVertexAttribI4ubv glVertexAttribI4ubv;

typedef void (*mogl_function_glVertexAttribI4usv)(GLuint index, GLushort *v);
mogl_function_glVertexAttribI4usv glVertexAttribI4usv;

typedef void (*mogl_function_glGetUniformuiv)(GLuint program, GLint location, GLuint *params);
mogl_function_glGetUniformuiv glGetUniformuiv;

typedef void (*mogl_function_glBindFragDataLocation)(GLuint program, GLuint color, GLchar *name);
mogl_function_glBindFragDataLocation glBindFragDataLocation;

typedef GLint  (*mogl_function_glGetFragDataLocation)(GLuint program, GLchar *name);
mogl_function_glGetFragDataLocation glGetFragDataLocation;

typedef void (*mogl_function_glUniform1ui)(GLint location, GLuint v0);
mogl_function_glUniform1ui glUniform1ui;

typedef void (*mogl_function_glUniform2ui)(GLint location, GLuint v0, GLuint v1);
mogl_function_glUniform2ui glUniform2ui;

typedef void (*mogl_function_glUniform3ui)(GLint location, GLuint v0, GLuint v1, GLuint v2);
mogl_function_glUniform3ui glUniform3ui;

typedef void (*mogl_function_glUniform4ui)(GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3);
mogl_function_glUniform4ui glUniform4ui;

typedef void (*mogl_function_glUniform1uiv)(GLint location, GLsizei count, GLuint *value);
mogl_function_glUniform1uiv glUniform1uiv;

typedef void (*mogl_function_glUniform2uiv)(GLint location, GLsizei count, GLuint *value);
mogl_function_glUniform2uiv glUniform2uiv;

typedef void (*mogl_function_glUniform3uiv)(GLint location, GLsizei count, GLuint *value);
mogl_function_glUniform3uiv glUniform3uiv;

typedef void (*mogl_function_glUniform4uiv)(GLint location, GLsizei count, GLuint *value);
mogl_function_glUniform4uiv glUniform4uiv;

typedef void (*mogl_function_glTexParameterIiv)(GLenum target, GLenum pname, GLint *params);
mogl_function_glTexParameterIiv glTexParameterIiv;

typedef void (*mogl_function_glTexParameterIuiv)(GLenum target, GLenum pname, GLuint *params);
mogl_function_glTexParameterIuiv glTexParameterIuiv;

typedef void (*mogl_function_glGetTexParameterIiv)(GLenum target, GLenum pname, GLint *params);
mogl_function_glGetTexParameterIiv glGetTexParameterIiv;

typedef void (*mogl_function_glGetTexParameterIuiv)(GLenum target, GLenum pname, GLuint *params);
mogl_function_glGetTexParameterIuiv glGetTexParameterIuiv;

typedef void (*mogl_function_glClearBufferiv)(GLenum buffer, GLint drawbuffer, GLint *value);
mogl_function_glClearBufferiv glClearBufferiv;

typedef void (*mogl_function_glClearBufferuiv)(GLenum buffer, GLint drawbuffer, GLuint *value);
mogl_function_glClearBufferuiv glClearBufferuiv;

typedef void (*mogl_function_glClearBufferfv)(GLenum buffer, GLint drawbuffer, GLfloat *value);
mogl_function_glClearBufferfv glClearBufferfv;

typedef void (*mogl_function_glClearBufferfi)(GLenum buffer, GLint drawbuffer, GLfloat depth, GLint stencil);
mogl_function_glClearBufferfi glClearBufferfi;

typedef GLubyte * (*mogl_function_glGetStringi)(GLenum name, GLuint index);
mogl_function_glGetStringi glGetStringi;

typedef GLboolean  (*mogl_function_glIsRenderbuffer)(GLuint renderbuffer);
mogl_function_glIsRenderbuffer glIsRenderbuffer;

typedef void (*mogl_function_glBindRenderbuffer)(GLenum target, GLuint renderbuffer);
mogl_function_glBindRenderbuffer glBindRenderbuffer;

typedef void (*mogl_function_glDeleteRenderbuffers)(GLsizei n, GLuint *renderbuffers);
mogl_function_glDeleteRenderbuffers glDeleteRenderbuffers;

typedef void (*mogl_function_glGenRenderbuffers)(GLsizei n, GLuint *renderbuffers);
mogl_function_glGenRenderbuffers glGenRenderbuffers;

typedef void (*mogl_function_glRenderbufferStorage)(GLenum target, GLenum internalformat, GLsizei width, GLsizei height);
mogl_function_glRenderbufferStorage glRenderbufferStorage;

typedef void (*mogl_function_glGetRenderbufferParameteriv)(GLenum target, GLenum pname, GLint *params);
mogl_function_glGetRenderbufferParameteriv glGetRenderbufferParameteriv;

typedef GLboolean  (*mogl_function_glIsFramebuffer)(GLuint framebuffer);
mogl_function_glIsFramebuffer glIsFramebuffer;

typedef void (*mogl_function_glBindFramebuffer)(GLenum target, GLuint framebuffer);
mogl_function_glBindFramebuffer glBindFramebuffer;

typedef void (*mogl_function_glDeleteFramebuffers)(GLsizei n, GLuint *framebuffers);
mogl_function_glDeleteFramebuffers glDeleteFramebuffers;

typedef void (*mogl_function_glGenFramebuffers)(GLsizei n, GLuint *framebuffers);
mogl_function_glGenFramebuffers glGenFramebuffers;

typedef GLenum  (*mogl_function_glCheckFramebufferStatus)(GLenum target);
mogl_function_glCheckFramebufferStatus glCheckFramebufferStatus;

typedef void (*mogl_function_glFramebufferTexture1D)(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level);
mogl_function_glFramebufferTexture1D glFramebufferTexture1D;

typedef void (*mogl_function_glFramebufferTexture2D)(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level);
mogl_function_glFramebufferTexture2D glFramebufferTexture2D;

typedef void (*mogl_function_glFramebufferTexture3D)(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint zoffset);
mogl_function_glFramebufferTexture3D glFramebufferTexture3D;

typedef void (*mogl_function_glFramebufferRenderbuffer)(GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer);
mogl_function_glFramebufferRenderbuffer glFramebufferRenderbuffer;

typedef void (*mogl_function_glGetFramebufferAttachmentParameteriv)(GLenum target, GLenum attachment, GLenum pname, GLint *params);
mogl_function_glGetFramebufferAttachmentParameteriv glGetFramebufferAttachmentParameteriv;

typedef void (*mogl_function_glGenerateMipmap)(GLenum target);
mogl_function_glGenerateMipmap glGenerateMipmap;

typedef void (*mogl_function_glBlitFramebuffer)(GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter);
mogl_function_glBlitFramebuffer glBlitFramebuffer;

typedef void (*mogl_function_glRenderbufferStorageMultisample)(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height);
mogl_function_glRenderbufferStorageMultisample glRenderbufferStorageMultisample;

typedef void (*mogl_function_glFramebufferTextureLayer)(GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer);
mogl_function_glFramebufferTextureLayer glFramebufferTextureLayer;

typedef void *  (*mogl_function_glMapBufferRange)(GLenum target, GLintptr offset, GLsizeiptr length, GLbitfield access);
mogl_function_glMapBufferRange glMapBufferRange;

typedef void (*mogl_function_glFlushMappedBufferRange)(GLenum target, GLintptr offset, GLsizeiptr length);
mogl_function_glFlushMappedBufferRange glFlushMappedBufferRange;

typedef void (*mogl_function_glBindVertexArray)(GLuint array);
mogl_function_glBindVertexArray glBindVertexArray;

typedef void (*mogl_function_glDeleteVertexArrays)(GLsizei n, GLuint *arrays);
mogl_function_glDeleteVertexArrays glDeleteVertexArrays;

typedef void (*mogl_function_glGenVertexArrays)(GLsizei n, GLuint *arrays);
mogl_function_glGenVertexArrays glGenVertexArrays;

typedef GLboolean  (*mogl_function_glIsVertexArray)(GLuint array);
mogl_function_glIsVertexArray glIsVertexArray;
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

typedef void (*mogl_function_glDrawArraysInstanced)(GLenum mode, GLint first, GLsizei count, GLsizei instancecount);
mogl_function_glDrawArraysInstanced glDrawArraysInstanced;

typedef void (*mogl_function_glDrawElementsInstanced)(GLenum mode, GLsizei count, GLenum type, void * indices, GLsizei instancecount);
mogl_function_glDrawElementsInstanced glDrawElementsInstanced;

typedef void (*mogl_function_glTexBuffer)(GLenum target, GLenum internalformat, GLuint buffer);
mogl_function_glTexBuffer glTexBuffer;

typedef void (*mogl_function_glPrimitiveRestartIndex)(GLuint index);
mogl_function_glPrimitiveRestartIndex glPrimitiveRestartIndex;

typedef void (*mogl_function_glCopyBufferSubData)(GLenum readTarget, GLenum writeTarget, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size);
mogl_function_glCopyBufferSubData glCopyBufferSubData;

typedef void (*mogl_function_glGetUniformIndices)(GLuint program, GLsizei uniformCount, GLchar **uniformNames, GLuint *uniformIndices);
mogl_function_glGetUniformIndices glGetUniformIndices;

typedef void (*mogl_function_glGetActiveUniformsiv)(GLuint program, GLsizei uniformCount, GLuint *uniformIndices, GLenum pname, GLint *params);
mogl_function_glGetActiveUniformsiv glGetActiveUniformsiv;

typedef void (*mogl_function_glGetActiveUniformName)(GLuint program, GLuint uniformIndex, GLsizei bufSize, GLsizei *length, GLchar *uniformName);
mogl_function_glGetActiveUniformName glGetActiveUniformName;

typedef GLuint  (*mogl_function_glGetUniformBlockIndex)(GLuint program, GLchar *uniformBlockName);
mogl_function_glGetUniformBlockIndex glGetUniformBlockIndex;

typedef void (*mogl_function_glGetActiveUniformBlockiv)(GLuint program, GLuint uniformBlockIndex, GLenum pname, GLint *params);
mogl_function_glGetActiveUniformBlockiv glGetActiveUniformBlockiv;

typedef void (*mogl_function_glGetActiveUniformBlockName)(GLuint program, GLuint uniformBlockIndex, GLsizei bufSize, GLsizei *length, GLchar *uniformBlockName);
mogl_function_glGetActiveUniformBlockName glGetActiveUniformBlockName;

typedef void (*mogl_function_glUniformBlockBinding)(GLuint program, GLuint uniformBlockIndex, GLuint uniformBlockBinding);
mogl_function_glUniformBlockBinding glUniformBlockBinding;
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

typedef void (*mogl_function_glDrawElementsBaseVertex)(GLenum mode, GLsizei count, GLenum type, void * indices, GLint basevertex);
mogl_function_glDrawElementsBaseVertex glDrawElementsBaseVertex;

typedef void (*mogl_function_glDrawRangeElementsBaseVertex)(GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, void * indices, GLint basevertex);
mogl_function_glDrawRangeElementsBaseVertex glDrawRangeElementsBaseVertex;

typedef void (*mogl_function_glDrawElementsInstancedBaseVertex)(GLenum mode, GLsizei count, GLenum type, void * indices, GLsizei instancecount, GLint basevertex);
mogl_function_glDrawElementsInstancedBaseVertex glDrawElementsInstancedBaseVertex;

typedef void (*mogl_function_glMultiDrawElementsBaseVertex)(GLenum mode, GLsizei *count, GLenum type, void * *indices, GLsizei drawcount, GLint *basevertex);
mogl_function_glMultiDrawElementsBaseVertex glMultiDrawElementsBaseVertex;

typedef void (*mogl_function_glProvokingVertex)(GLenum mode);
mogl_function_glProvokingVertex glProvokingVertex;

typedef GLsync  (*mogl_function_glFenceSync)(GLenum condition, GLbitfield flags);
mogl_function_glFenceSync glFenceSync;

typedef GLboolean  (*mogl_function_glIsSync)(GLsync sync);
mogl_function_glIsSync glIsSync;

typedef void (*mogl_function_glDeleteSync)(GLsync sync);
mogl_function_glDeleteSync glDeleteSync;

typedef GLenum  (*mogl_function_glClientWaitSync)(GLsync sync, GLbitfield flags, GLuint64 timeout);
mogl_function_glClientWaitSync glClientWaitSync;

typedef void (*mogl_function_glWaitSync)(GLsync sync, GLbitfield flags, GLuint64 timeout);
mogl_function_glWaitSync glWaitSync;

typedef void (*mogl_function_glGetInteger64v)(GLenum pname, GLint64 *data);
mogl_function_glGetInteger64v glGetInteger64v;

typedef void (*mogl_function_glGetSynciv)(GLsync sync, GLenum pname, GLsizei count, GLsizei *length, GLint *values);
mogl_function_glGetSynciv glGetSynciv;

typedef void (*mogl_function_glGetInteger64i_v)(GLenum target, GLuint index, GLint64 *data);
mogl_function_glGetInteger64i_v glGetInteger64i_v;

typedef void (*mogl_function_glGetBufferParameteri64v)(GLenum target, GLenum pname, GLint64 *params);
mogl_function_glGetBufferParameteri64v glGetBufferParameteri64v;

typedef void (*mogl_function_glFramebufferTexture)(GLenum target, GLenum attachment, GLuint texture, GLint level);
mogl_function_glFramebufferTexture glFramebufferTexture;

typedef void (*mogl_function_glTexImage2DMultisample)(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations);
mogl_function_glTexImage2DMultisample glTexImage2DMultisample;

typedef void (*mogl_function_glTexImage3DMultisample)(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations);
mogl_function_glTexImage3DMultisample glTexImage3DMultisample;

typedef void (*mogl_function_glGetMultisamplefv)(GLenum pname, GLuint index, GLfloat *val);
mogl_function_glGetMultisamplefv glGetMultisamplefv;

typedef void (*mogl_function_glSampleMaski)(GLuint maskNumber, GLbitfield mask);
mogl_function_glSampleMaski glSampleMaski;
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

typedef void (*mogl_function_glBindFragDataLocationIndexed)(GLuint program, GLuint colorNumber, GLuint index, GLchar *name);
mogl_function_glBindFragDataLocationIndexed glBindFragDataLocationIndexed;

typedef GLint  (*mogl_function_glGetFragDataIndex)(GLuint program, GLchar *name);
mogl_function_glGetFragDataIndex glGetFragDataIndex;

typedef void (*mogl_function_glGenSamplers)(GLsizei count, GLuint *samplers);
mogl_function_glGenSamplers glGenSamplers;

typedef void (*mogl_function_glDeleteSamplers)(GLsizei count, GLuint *samplers);
mogl_function_glDeleteSamplers glDeleteSamplers;

typedef GLboolean  (*mogl_function_glIsSampler)(GLuint sampler);
mogl_function_glIsSampler glIsSampler;

typedef void (*mogl_function_glBindSampler)(GLuint unit, GLuint sampler);
mogl_function_glBindSampler glBindSampler;

typedef void (*mogl_function_glSamplerParameteri)(GLuint sampler, GLenum pname, GLint param);
mogl_function_glSamplerParameteri glSamplerParameteri;

typedef void (*mogl_function_glSamplerParameteriv)(GLuint sampler, GLenum pname, GLint *param);
mogl_function_glSamplerParameteriv glSamplerParameteriv;

typedef void (*mogl_function_glSamplerParameterf)(GLuint sampler, GLenum pname, GLfloat param);
mogl_function_glSamplerParameterf glSamplerParameterf;

typedef void (*mogl_function_glSamplerParameterfv)(GLuint sampler, GLenum pname, GLfloat *param);
mogl_function_glSamplerParameterfv glSamplerParameterfv;

typedef void (*mogl_function_glSamplerParameterIiv)(GLuint sampler, GLenum pname, GLint *param);
mogl_function_glSamplerParameterIiv glSamplerParameterIiv;

typedef void (*mogl_function_glSamplerParameterIuiv)(GLuint sampler, GLenum pname, GLuint *param);
mogl_function_glSamplerParameterIuiv glSamplerParameterIuiv;

typedef void (*mogl_function_glGetSamplerParameteriv)(GLuint sampler, GLenum pname, GLint *params);
mogl_function_glGetSamplerParameteriv glGetSamplerParameteriv;

typedef void (*mogl_function_glGetSamplerParameterIiv)(GLuint sampler, GLenum pname, GLint *params);
mogl_function_glGetSamplerParameterIiv glGetSamplerParameterIiv;

typedef void (*mogl_function_glGetSamplerParameterfv)(GLuint sampler, GLenum pname, GLfloat *params);
mogl_function_glGetSamplerParameterfv glGetSamplerParameterfv;

typedef void (*mogl_function_glGetSamplerParameterIuiv)(GLuint sampler, GLenum pname, GLuint *params);
mogl_function_glGetSamplerParameterIuiv glGetSamplerParameterIuiv;

typedef void (*mogl_function_glQueryCounter)(GLuint id, GLenum target);
mogl_function_glQueryCounter glQueryCounter;

typedef void (*mogl_function_glGetQueryObjecti64v)(GLuint id, GLenum pname, GLint64 *params);
mogl_function_glGetQueryObjecti64v glGetQueryObjecti64v;

typedef void (*mogl_function_glGetQueryObjectui64v)(GLuint id, GLenum pname, GLuint64 *params);
mogl_function_glGetQueryObjectui64v glGetQueryObjectui64v;

typedef void (*mogl_function_glVertexAttribDivisor)(GLuint index, GLuint divisor);
mogl_function_glVertexAttribDivisor glVertexAttribDivisor;

typedef void (*mogl_function_glVertexAttribP1ui)(GLuint index, GLenum type, GLboolean normalized, GLuint value);
mogl_function_glVertexAttribP1ui glVertexAttribP1ui;

typedef void (*mogl_function_glVertexAttribP1uiv)(GLuint index, GLenum type, GLboolean normalized, GLuint *value);
mogl_function_glVertexAttribP1uiv glVertexAttribP1uiv;

typedef void (*mogl_function_glVertexAttribP2ui)(GLuint index, GLenum type, GLboolean normalized, GLuint value);
mogl_function_glVertexAttribP2ui glVertexAttribP2ui;

typedef void (*mogl_function_glVertexAttribP2uiv)(GLuint index, GLenum type, GLboolean normalized, GLuint *value);
mogl_function_glVertexAttribP2uiv glVertexAttribP2uiv;

typedef void (*mogl_function_glVertexAttribP3ui)(GLuint index, GLenum type, GLboolean normalized, GLuint value);
mogl_function_glVertexAttribP3ui glVertexAttribP3ui;

typedef void (*mogl_function_glVertexAttribP3uiv)(GLuint index, GLenum type, GLboolean normalized, GLuint *value);
mogl_function_glVertexAttribP3uiv glVertexAttribP3uiv;

typedef void (*mogl_function_glVertexAttribP4ui)(GLuint index, GLenum type, GLboolean normalized, GLuint value);
mogl_function_glVertexAttribP4ui glVertexAttribP4ui;

typedef void (*mogl_function_glVertexAttribP4uiv)(GLuint index, GLenum type, GLboolean normalized, GLuint *value);
mogl_function_glVertexAttribP4uiv glVertexAttribP4uiv;

typedef void (*mogl_function_glVertexP2ui)(GLenum type, GLuint value);
mogl_function_glVertexP2ui glVertexP2ui;

typedef void (*mogl_function_glVertexP2uiv)(GLenum type, GLuint *value);
mogl_function_glVertexP2uiv glVertexP2uiv;

typedef void (*mogl_function_glVertexP3ui)(GLenum type, GLuint value);
mogl_function_glVertexP3ui glVertexP3ui;

typedef void (*mogl_function_glVertexP3uiv)(GLenum type, GLuint *value);
mogl_function_glVertexP3uiv glVertexP3uiv;

typedef void (*mogl_function_glVertexP4ui)(GLenum type, GLuint value);
mogl_function_glVertexP4ui glVertexP4ui;

typedef void (*mogl_function_glVertexP4uiv)(GLenum type, GLuint *value);
mogl_function_glVertexP4uiv glVertexP4uiv;

typedef void (*mogl_function_glTexCoordP1ui)(GLenum type, GLuint coords);
mogl_function_glTexCoordP1ui glTexCoordP1ui;

typedef void (*mogl_function_glTexCoordP1uiv)(GLenum type, GLuint *coords);
mogl_function_glTexCoordP1uiv glTexCoordP1uiv;

typedef void (*mogl_function_glTexCoordP2ui)(GLenum type, GLuint coords);
mogl_function_glTexCoordP2ui glTexCoordP2ui;

typedef void (*mogl_function_glTexCoordP2uiv)(GLenum type, GLuint *coords);
mogl_function_glTexCoordP2uiv glTexCoordP2uiv;

typedef void (*mogl_function_glTexCoordP3ui)(GLenum type, GLuint coords);
mogl_function_glTexCoordP3ui glTexCoordP3ui;

typedef void (*mogl_function_glTexCoordP3uiv)(GLenum type, GLuint *coords);
mogl_function_glTexCoordP3uiv glTexCoordP3uiv;

typedef void (*mogl_function_glTexCoordP4ui)(GLenum type, GLuint coords);
mogl_function_glTexCoordP4ui glTexCoordP4ui;

typedef void (*mogl_function_glTexCoordP4uiv)(GLenum type, GLuint *coords);
mogl_function_glTexCoordP4uiv glTexCoordP4uiv;

typedef void (*mogl_function_glMultiTexCoordP1ui)(GLenum texture, GLenum type, GLuint coords);
mogl_function_glMultiTexCoordP1ui glMultiTexCoordP1ui;

typedef void (*mogl_function_glMultiTexCoordP1uiv)(GLenum texture, GLenum type, GLuint *coords);
mogl_function_glMultiTexCoordP1uiv glMultiTexCoordP1uiv;

typedef void (*mogl_function_glMultiTexCoordP2ui)(GLenum texture, GLenum type, GLuint coords);
mogl_function_glMultiTexCoordP2ui glMultiTexCoordP2ui;

typedef void (*mogl_function_glMultiTexCoordP2uiv)(GLenum texture, GLenum type, GLuint *coords);
mogl_function_glMultiTexCoordP2uiv glMultiTexCoordP2uiv;

typedef void (*mogl_function_glMultiTexCoordP3ui)(GLenum texture, GLenum type, GLuint coords);
mogl_function_glMultiTexCoordP3ui glMultiTexCoordP3ui;

typedef void (*mogl_function_glMultiTexCoordP3uiv)(GLenum texture, GLenum type, GLuint *coords);
mogl_function_glMultiTexCoordP3uiv glMultiTexCoordP3uiv;

typedef void (*mogl_function_glMultiTexCoordP4ui)(GLenum texture, GLenum type, GLuint coords);
mogl_function_glMultiTexCoordP4ui glMultiTexCoordP4ui;

typedef void (*mogl_function_glMultiTexCoordP4uiv)(GLenum texture, GLenum type, GLuint *coords);
mogl_function_glMultiTexCoordP4uiv glMultiTexCoordP4uiv;

typedef void (*mogl_function_glNormalP3ui)(GLenum type, GLuint coords);
mogl_function_glNormalP3ui glNormalP3ui;

typedef void (*mogl_function_glNormalP3uiv)(GLenum type, GLuint *coords);
mogl_function_glNormalP3uiv glNormalP3uiv;

typedef void (*mogl_function_glColorP3ui)(GLenum type, GLuint color);
mogl_function_glColorP3ui glColorP3ui;

typedef void (*mogl_function_glColorP3uiv)(GLenum type, GLuint *color);
mogl_function_glColorP3uiv glColorP3uiv;

typedef void (*mogl_function_glColorP4ui)(GLenum type, GLuint color);
mogl_function_glColorP4ui glColorP4ui;

typedef void (*mogl_function_glColorP4uiv)(GLenum type, GLuint *color);
mogl_function_glColorP4uiv glColorP4uiv;

typedef void (*mogl_function_glSecondaryColorP3ui)(GLenum type, GLuint color);
mogl_function_glSecondaryColorP3ui glSecondaryColorP3ui;

typedef void (*mogl_function_glSecondaryColorP3uiv)(GLenum type, GLuint *color);
mogl_function_glSecondaryColorP3uiv glSecondaryColorP3uiv;
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

typedef void (*mogl_function_glMinSampleShading)(GLfloat value);
mogl_function_glMinSampleShading glMinSampleShading;

typedef void (*mogl_function_glBlendEquationi)(GLuint buf, GLenum mode);
mogl_function_glBlendEquationi glBlendEquationi;

typedef void (*mogl_function_glBlendEquationSeparatei)(GLuint buf, GLenum modeRGB, GLenum modeAlpha);
mogl_function_glBlendEquationSeparatei glBlendEquationSeparatei;

typedef void (*mogl_function_glBlendFunci)(GLuint buf, GLenum src, GLenum dst);
mogl_function_glBlendFunci glBlendFunci;

typedef void (*mogl_function_glBlendFuncSeparatei)(GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha);
mogl_function_glBlendFuncSeparatei glBlendFuncSeparatei;

typedef void (*mogl_function_glDrawArraysIndirect)(GLenum mode, void * indirect);
mogl_function_glDrawArraysIndirect glDrawArraysIndirect;

typedef void (*mogl_function_glDrawElementsIndirect)(GLenum mode, GLenum type, void * indirect);
mogl_function_glDrawElementsIndirect glDrawElementsIndirect;

typedef void (*mogl_function_glUniform1d)(GLint location, GLdouble x);
mogl_function_glUniform1d glUniform1d;

typedef void (*mogl_function_glUniform2d)(GLint location, GLdouble x, GLdouble y);
mogl_function_glUniform2d glUniform2d;

typedef void (*mogl_function_glUniform3d)(GLint location, GLdouble x, GLdouble y, GLdouble z);
mogl_function_glUniform3d glUniform3d;

typedef void (*mogl_function_glUniform4d)(GLint location, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
mogl_function_glUniform4d glUniform4d;

typedef void (*mogl_function_glUniform1dv)(GLint location, GLsizei count, GLdouble *value);
mogl_function_glUniform1dv glUniform1dv;

typedef void (*mogl_function_glUniform2dv)(GLint location, GLsizei count, GLdouble *value);
mogl_function_glUniform2dv glUniform2dv;

typedef void (*mogl_function_glUniform3dv)(GLint location, GLsizei count, GLdouble *value);
mogl_function_glUniform3dv glUniform3dv;

typedef void (*mogl_function_glUniform4dv)(GLint location, GLsizei count, GLdouble *value);
mogl_function_glUniform4dv glUniform4dv;

typedef void (*mogl_function_glUniformMatrix2dv)(GLint location, GLsizei count, GLboolean transpose, GLdouble *value);
mogl_function_glUniformMatrix2dv glUniformMatrix2dv;

typedef void (*mogl_function_glUniformMatrix3dv)(GLint location, GLsizei count, GLboolean transpose, GLdouble *value);
mogl_function_glUniformMatrix3dv glUniformMatrix3dv;

typedef void (*mogl_function_glUniformMatrix4dv)(GLint location, GLsizei count, GLboolean transpose, GLdouble *value);
mogl_function_glUniformMatrix4dv glUniformMatrix4dv;

typedef void (*mogl_function_glUniformMatrix2x3dv)(GLint location, GLsizei count, GLboolean transpose, GLdouble *value);
mogl_function_glUniformMatrix2x3dv glUniformMatrix2x3dv;

typedef void (*mogl_function_glUniformMatrix2x4dv)(GLint location, GLsizei count, GLboolean transpose, GLdouble *value);
mogl_function_glUniformMatrix2x4dv glUniformMatrix2x4dv;

typedef void (*mogl_function_glUniformMatrix3x2dv)(GLint location, GLsizei count, GLboolean transpose, GLdouble *value);
mogl_function_glUniformMatrix3x2dv glUniformMatrix3x2dv;

typedef void (*mogl_function_glUniformMatrix3x4dv)(GLint location, GLsizei count, GLboolean transpose, GLdouble *value);
mogl_function_glUniformMatrix3x4dv glUniformMatrix3x4dv;

typedef void (*mogl_function_glUniformMatrix4x2dv)(GLint location, GLsizei count, GLboolean transpose, GLdouble *value);
mogl_function_glUniformMatrix4x2dv glUniformMatrix4x2dv;

typedef void (*mogl_function_glUniformMatrix4x3dv)(GLint location, GLsizei count, GLboolean transpose, GLdouble *value);
mogl_function_glUniformMatrix4x3dv glUniformMatrix4x3dv;

typedef void (*mogl_function_glGetUniformdv)(GLuint program, GLint location, GLdouble *params);
mogl_function_glGetUniformdv glGetUniformdv;

typedef GLint  (*mogl_function_glGetSubroutineUniformLocation)(GLuint program, GLenum shadertype, GLchar *name);
mogl_function_glGetSubroutineUniformLocation glGetSubroutineUniformLocation;

typedef GLuint  (*mogl_function_glGetSubroutineIndex)(GLuint program, GLenum shadertype, GLchar *name);
mogl_function_glGetSubroutineIndex glGetSubroutineIndex;

typedef void (*mogl_function_glGetActiveSubroutineUniformiv)(GLuint program, GLenum shadertype, GLuint index, GLenum pname, GLint *values);
mogl_function_glGetActiveSubroutineUniformiv glGetActiveSubroutineUniformiv;

typedef void (*mogl_function_glGetActiveSubroutineUniformName)(GLuint program, GLenum shadertype, GLuint index, GLsizei bufSize, GLsizei *length, GLchar *name);
mogl_function_glGetActiveSubroutineUniformName glGetActiveSubroutineUniformName;

typedef void (*mogl_function_glGetActiveSubroutineName)(GLuint program, GLenum shadertype, GLuint index, GLsizei bufSize, GLsizei *length, GLchar *name);
mogl_function_glGetActiveSubroutineName glGetActiveSubroutineName;

typedef void (*mogl_function_glUniformSubroutinesuiv)(GLenum shadertype, GLsizei count, GLuint *indices);
mogl_function_glUniformSubroutinesuiv glUniformSubroutinesuiv;

typedef void (*mogl_function_glGetUniformSubroutineuiv)(GLenum shadertype, GLint location, GLuint *params);
mogl_function_glGetUniformSubroutineuiv glGetUniformSubroutineuiv;

typedef void (*mogl_function_glGetProgramStageiv)(GLuint program, GLenum shadertype, GLenum pname, GLint *values);
mogl_function_glGetProgramStageiv glGetProgramStageiv;

typedef void (*mogl_function_glPatchParameteri)(GLenum pname, GLint value);
mogl_function_glPatchParameteri glPatchParameteri;

typedef void (*mogl_function_glPatchParameterfv)(GLenum pname, GLfloat *values);
mogl_function_glPatchParameterfv glPatchParameterfv;

typedef void (*mogl_function_glBindTransformFeedback)(GLenum target, GLuint id);
mogl_function_glBindTransformFeedback glBindTransformFeedback;

typedef void (*mogl_function_glDeleteTransformFeedbacks)(GLsizei n, GLuint *ids);
mogl_function_glDeleteTransformFeedbacks glDeleteTransformFeedbacks;

typedef void (*mogl_function_glGenTransformFeedbacks)(GLsizei n, GLuint *ids);
mogl_function_glGenTransformFeedbacks glGenTransformFeedbacks;

typedef GLboolean  (*mogl_function_glIsTransformFeedback)(GLuint id);
mogl_function_glIsTransformFeedback glIsTransformFeedback;

typedef void (*mogl_function_glPauseTransformFeedback)();
mogl_function_glPauseTransformFeedback glPauseTransformFeedback;

typedef void (*mogl_function_glResumeTransformFeedback)();
mogl_function_glResumeTransformFeedback glResumeTransformFeedback;

typedef void (*mogl_function_glDrawTransformFeedback)(GLenum mode, GLuint id);
mogl_function_glDrawTransformFeedback glDrawTransformFeedback;

typedef void (*mogl_function_glDrawTransformFeedbackStream)(GLenum mode, GLuint id, GLuint stream);
mogl_function_glDrawTransformFeedbackStream glDrawTransformFeedbackStream;

typedef void (*mogl_function_glBeginQueryIndexed)(GLenum target, GLuint index, GLuint id);
mogl_function_glBeginQueryIndexed glBeginQueryIndexed;

typedef void (*mogl_function_glEndQueryIndexed)(GLenum target, GLuint index);
mogl_function_glEndQueryIndexed glEndQueryIndexed;

typedef void (*mogl_function_glGetQueryIndexediv)(GLenum target, GLuint index, GLenum pname, GLint *params);
mogl_function_glGetQueryIndexediv glGetQueryIndexediv;
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

typedef void (*mogl_function_glReleaseShaderCompiler)();
mogl_function_glReleaseShaderCompiler glReleaseShaderCompiler;

typedef void (*mogl_function_glShaderBinary)(GLsizei count, GLuint *shaders, GLenum binaryFormat, void * binary, GLsizei length);
mogl_function_glShaderBinary glShaderBinary;

typedef void (*mogl_function_glGetShaderPrecisionFormat)(GLenum shadertype, GLenum precisiontype, GLint *range, GLint *precision);
mogl_function_glGetShaderPrecisionFormat glGetShaderPrecisionFormat;

typedef void (*mogl_function_glDepthRangef)(GLfloat n, GLfloat f);
mogl_function_glDepthRangef glDepthRangef;

typedef void (*mogl_function_glClearDepthf)(GLfloat d);
mogl_function_glClearDepthf glClearDepthf;

typedef void (*mogl_function_glGetProgramBinary)(GLuint program, GLsizei bufSize, GLsizei *length, GLenum *binaryFormat, void * binary);
mogl_function_glGetProgramBinary glGetProgramBinary;

typedef void (*mogl_function_glProgramBinary)(GLuint program, GLenum binaryFormat, void * binary, GLsizei length);
mogl_function_glProgramBinary glProgramBinary;

typedef void (*mogl_function_glProgramParameteri)(GLuint program, GLenum pname, GLint value);
mogl_function_glProgramParameteri glProgramParameteri;

typedef void (*mogl_function_glUseProgramStages)(GLuint pipeline, GLbitfield stages, GLuint program);
mogl_function_glUseProgramStages glUseProgramStages;

typedef void (*mogl_function_glActiveShaderProgram)(GLuint pipeline, GLuint program);
mogl_function_glActiveShaderProgram glActiveShaderProgram;

typedef GLuint  (*mogl_function_glCreateShaderProgramv)(GLenum type, GLsizei count, GLchar **strings);
mogl_function_glCreateShaderProgramv glCreateShaderProgramv;

typedef void (*mogl_function_glBindProgramPipeline)(GLuint pipeline);
mogl_function_glBindProgramPipeline glBindProgramPipeline;

typedef void (*mogl_function_glDeleteProgramPipelines)(GLsizei n, GLuint *pipelines);
mogl_function_glDeleteProgramPipelines glDeleteProgramPipelines;

typedef void (*mogl_function_glGenProgramPipelines)(GLsizei n, GLuint *pipelines);
mogl_function_glGenProgramPipelines glGenProgramPipelines;

typedef GLboolean  (*mogl_function_glIsProgramPipeline)(GLuint pipeline);
mogl_function_glIsProgramPipeline glIsProgramPipeline;

typedef void (*mogl_function_glGetProgramPipelineiv)(GLuint pipeline, GLenum pname, GLint *params);
mogl_function_glGetProgramPipelineiv glGetProgramPipelineiv;

typedef void (*mogl_function_glProgramUniform1i)(GLuint program, GLint location, GLint v0);
mogl_function_glProgramUniform1i glProgramUniform1i;

typedef void (*mogl_function_glProgramUniform1iv)(GLuint program, GLint location, GLsizei count, GLint *value);
mogl_function_glProgramUniform1iv glProgramUniform1iv;

typedef void (*mogl_function_glProgramUniform1f)(GLuint program, GLint location, GLfloat v0);
mogl_function_glProgramUniform1f glProgramUniform1f;

typedef void (*mogl_function_glProgramUniform1fv)(GLuint program, GLint location, GLsizei count, GLfloat *value);
mogl_function_glProgramUniform1fv glProgramUniform1fv;

typedef void (*mogl_function_glProgramUniform1d)(GLuint program, GLint location, GLdouble v0);
mogl_function_glProgramUniform1d glProgramUniform1d;

typedef void (*mogl_function_glProgramUniform1dv)(GLuint program, GLint location, GLsizei count, GLdouble *value);
mogl_function_glProgramUniform1dv glProgramUniform1dv;

typedef void (*mogl_function_glProgramUniform1ui)(GLuint program, GLint location, GLuint v0);
mogl_function_glProgramUniform1ui glProgramUniform1ui;

typedef void (*mogl_function_glProgramUniform1uiv)(GLuint program, GLint location, GLsizei count, GLuint *value);
mogl_function_glProgramUniform1uiv glProgramUniform1uiv;

typedef void (*mogl_function_glProgramUniform2i)(GLuint program, GLint location, GLint v0, GLint v1);
mogl_function_glProgramUniform2i glProgramUniform2i;

typedef void (*mogl_function_glProgramUniform2iv)(GLuint program, GLint location, GLsizei count, GLint *value);
mogl_function_glProgramUniform2iv glProgramUniform2iv;

typedef void (*mogl_function_glProgramUniform2f)(GLuint program, GLint location, GLfloat v0, GLfloat v1);
mogl_function_glProgramUniform2f glProgramUniform2f;

typedef void (*mogl_function_glProgramUniform2fv)(GLuint program, GLint location, GLsizei count, GLfloat *value);
mogl_function_glProgramUniform2fv glProgramUniform2fv;

typedef void (*mogl_function_glProgramUniform2d)(GLuint program, GLint location, GLdouble v0, GLdouble v1);
mogl_function_glProgramUniform2d glProgramUniform2d;

typedef void (*mogl_function_glProgramUniform2dv)(GLuint program, GLint location, GLsizei count, GLdouble *value);
mogl_function_glProgramUniform2dv glProgramUniform2dv;

typedef void (*mogl_function_glProgramUniform2ui)(GLuint program, GLint location, GLuint v0, GLuint v1);
mogl_function_glProgramUniform2ui glProgramUniform2ui;

typedef void (*mogl_function_glProgramUniform2uiv)(GLuint program, GLint location, GLsizei count, GLuint *value);
mogl_function_glProgramUniform2uiv glProgramUniform2uiv;

typedef void (*mogl_function_glProgramUniform3i)(GLuint program, GLint location, GLint v0, GLint v1, GLint v2);
mogl_function_glProgramUniform3i glProgramUniform3i;

typedef void (*mogl_function_glProgramUniform3iv)(GLuint program, GLint location, GLsizei count, GLint *value);
mogl_function_glProgramUniform3iv glProgramUniform3iv;

typedef void (*mogl_function_glProgramUniform3f)(GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2);
mogl_function_glProgramUniform3f glProgramUniform3f;

typedef void (*mogl_function_glProgramUniform3fv)(GLuint program, GLint location, GLsizei count, GLfloat *value);
mogl_function_glProgramUniform3fv glProgramUniform3fv;

typedef void (*mogl_function_glProgramUniform3d)(GLuint program, GLint location, GLdouble v0, GLdouble v1, GLdouble v2);
mogl_function_glProgramUniform3d glProgramUniform3d;

typedef void (*mogl_function_glProgramUniform3dv)(GLuint program, GLint location, GLsizei count, GLdouble *value);
mogl_function_glProgramUniform3dv glProgramUniform3dv;

typedef void (*mogl_function_glProgramUniform3ui)(GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2);
mogl_function_glProgramUniform3ui glProgramUniform3ui;

typedef void (*mogl_function_glProgramUniform3uiv)(GLuint program, GLint location, GLsizei count, GLuint *value);
mogl_function_glProgramUniform3uiv glProgramUniform3uiv;

typedef void (*mogl_function_glProgramUniform4i)(GLuint program, GLint location, GLint v0, GLint v1, GLint v2, GLint v3);
mogl_function_glProgramUniform4i glProgramUniform4i;

typedef void (*mogl_function_glProgramUniform4iv)(GLuint program, GLint location, GLsizei count, GLint *value);
mogl_function_glProgramUniform4iv glProgramUniform4iv;

typedef void (*mogl_function_glProgramUniform4f)(GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3);
mogl_function_glProgramUniform4f glProgramUniform4f;

typedef void (*mogl_function_glProgramUniform4fv)(GLuint program, GLint location, GLsizei count, GLfloat *value);
mogl_function_glProgramUniform4fv glProgramUniform4fv;

typedef void (*mogl_function_glProgramUniform4d)(GLuint program, GLint location, GLdouble v0, GLdouble v1, GLdouble v2, GLdouble v3);
mogl_function_glProgramUniform4d glProgramUniform4d;

typedef void (*mogl_function_glProgramUniform4dv)(GLuint program, GLint location, GLsizei count, GLdouble *value);
mogl_function_glProgramUniform4dv glProgramUniform4dv;

typedef void (*mogl_function_glProgramUniform4ui)(GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3);
mogl_function_glProgramUniform4ui glProgramUniform4ui;

typedef void (*mogl_function_glProgramUniform4uiv)(GLuint program, GLint location, GLsizei count, GLuint *value);
mogl_function_glProgramUniform4uiv glProgramUniform4uiv;

typedef void (*mogl_function_glProgramUniformMatrix2fv)(GLuint program, GLint location, GLsizei count, GLboolean transpose, GLfloat *value);
mogl_function_glProgramUniformMatrix2fv glProgramUniformMatrix2fv;

typedef void (*mogl_function_glProgramUniformMatrix3fv)(GLuint program, GLint location, GLsizei count, GLboolean transpose, GLfloat *value);
mogl_function_glProgramUniformMatrix3fv glProgramUniformMatrix3fv;

typedef void (*mogl_function_glProgramUniformMatrix4fv)(GLuint program, GLint location, GLsizei count, GLboolean transpose, GLfloat *value);
mogl_function_glProgramUniformMatrix4fv glProgramUniformMatrix4fv;

typedef void (*mogl_function_glProgramUniformMatrix2dv)(GLuint program, GLint location, GLsizei count, GLboolean transpose, GLdouble *value);
mogl_function_glProgramUniformMatrix2dv glProgramUniformMatrix2dv;

typedef void (*mogl_function_glProgramUniformMatrix3dv)(GLuint program, GLint location, GLsizei count, GLboolean transpose, GLdouble *value);
mogl_function_glProgramUniformMatrix3dv glProgramUniformMatrix3dv;

typedef void (*mogl_function_glProgramUniformMatrix4dv)(GLuint program, GLint location, GLsizei count, GLboolean transpose, GLdouble *value);
mogl_function_glProgramUniformMatrix4dv glProgramUniformMatrix4dv;

typedef void (*mogl_function_glProgramUniformMatrix2x3fv)(GLuint program, GLint location, GLsizei count, GLboolean transpose, GLfloat *value);
mogl_function_glProgramUniformMatrix2x3fv glProgramUniformMatrix2x3fv;

typedef void (*mogl_function_glProgramUniformMatrix3x2fv)(GLuint program, GLint location, GLsizei count, GLboolean transpose, GLfloat *value);
mogl_function_glProgramUniformMatrix3x2fv glProgramUniformMatrix3x2fv;

typedef void (*mogl_function_glProgramUniformMatrix2x4fv)(GLuint program, GLint location, GLsizei count, GLboolean transpose, GLfloat *value);
mogl_function_glProgramUniformMatrix2x4fv glProgramUniformMatrix2x4fv;

typedef void (*mogl_function_glProgramUniformMatrix4x2fv)(GLuint program, GLint location, GLsizei count, GLboolean transpose, GLfloat *value);
mogl_function_glProgramUniformMatrix4x2fv glProgramUniformMatrix4x2fv;

typedef void (*mogl_function_glProgramUniformMatrix3x4fv)(GLuint program, GLint location, GLsizei count, GLboolean transpose, GLfloat *value);
mogl_function_glProgramUniformMatrix3x4fv glProgramUniformMatrix3x4fv;

typedef void (*mogl_function_glProgramUniformMatrix4x3fv)(GLuint program, GLint location, GLsizei count, GLboolean transpose, GLfloat *value);
mogl_function_glProgramUniformMatrix4x3fv glProgramUniformMatrix4x3fv;

typedef void (*mogl_function_glProgramUniformMatrix2x3dv)(GLuint program, GLint location, GLsizei count, GLboolean transpose, GLdouble *value);
mogl_function_glProgramUniformMatrix2x3dv glProgramUniformMatrix2x3dv;

typedef void (*mogl_function_glProgramUniformMatrix3x2dv)(GLuint program, GLint location, GLsizei count, GLboolean transpose, GLdouble *value);
mogl_function_glProgramUniformMatrix3x2dv glProgramUniformMatrix3x2dv;

typedef void (*mogl_function_glProgramUniformMatrix2x4dv)(GLuint program, GLint location, GLsizei count, GLboolean transpose, GLdouble *value);
mogl_function_glProgramUniformMatrix2x4dv glProgramUniformMatrix2x4dv;

typedef void (*mogl_function_glProgramUniformMatrix4x2dv)(GLuint program, GLint location, GLsizei count, GLboolean transpose, GLdouble *value);
mogl_function_glProgramUniformMatrix4x2dv glProgramUniformMatrix4x2dv;

typedef void (*mogl_function_glProgramUniformMatrix3x4dv)(GLuint program, GLint location, GLsizei count, GLboolean transpose, GLdouble *value);
mogl_function_glProgramUniformMatrix3x4dv glProgramUniformMatrix3x4dv;

typedef void (*mogl_function_glProgramUniformMatrix4x3dv)(GLuint program, GLint location, GLsizei count, GLboolean transpose, GLdouble *value);
mogl_function_glProgramUniformMatrix4x3dv glProgramUniformMatrix4x3dv;

typedef void (*mogl_function_glValidateProgramPipeline)(GLuint pipeline);
mogl_function_glValidateProgramPipeline glValidateProgramPipeline;

typedef void (*mogl_function_glGetProgramPipelineInfoLog)(GLuint pipeline, GLsizei bufSize, GLsizei *length, GLchar *infoLog);
mogl_function_glGetProgramPipelineInfoLog glGetProgramPipelineInfoLog;

typedef void (*mogl_function_glVertexAttribL1d)(GLuint index, GLdouble x);
mogl_function_glVertexAttribL1d glVertexAttribL1d;

typedef void (*mogl_function_glVertexAttribL2d)(GLuint index, GLdouble x, GLdouble y);
mogl_function_glVertexAttribL2d glVertexAttribL2d;

typedef void (*mogl_function_glVertexAttribL3d)(GLuint index, GLdouble x, GLdouble y, GLdouble z);
mogl_function_glVertexAttribL3d glVertexAttribL3d;

typedef void (*mogl_function_glVertexAttribL4d)(GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
mogl_function_glVertexAttribL4d glVertexAttribL4d;

typedef void (*mogl_function_glVertexAttribL1dv)(GLuint index, GLdouble *v);
mogl_function_glVertexAttribL1dv glVertexAttribL1dv;

typedef void (*mogl_function_glVertexAttribL2dv)(GLuint index, GLdouble *v);
mogl_function_glVertexAttribL2dv glVertexAttribL2dv;

typedef void (*mogl_function_glVertexAttribL3dv)(GLuint index, GLdouble *v);
mogl_function_glVertexAttribL3dv glVertexAttribL3dv;

typedef void (*mogl_function_glVertexAttribL4dv)(GLuint index, GLdouble *v);
mogl_function_glVertexAttribL4dv glVertexAttribL4dv;

typedef void (*mogl_function_glVertexAttribLPointer)(GLuint index, GLint size, GLenum type, GLsizei stride, void * pointer);
mogl_function_glVertexAttribLPointer glVertexAttribLPointer;

typedef void (*mogl_function_glGetVertexAttribLdv)(GLuint index, GLenum pname, GLdouble *params);
mogl_function_glGetVertexAttribLdv glGetVertexAttribLdv;

typedef void (*mogl_function_glViewportArrayv)(GLuint first, GLsizei count, GLfloat *v);
mogl_function_glViewportArrayv glViewportArrayv;

typedef void (*mogl_function_glViewportIndexedf)(GLuint index, GLfloat x, GLfloat y, GLfloat w, GLfloat h);
mogl_function_glViewportIndexedf glViewportIndexedf;

typedef void (*mogl_function_glViewportIndexedfv)(GLuint index, GLfloat *v);
mogl_function_glViewportIndexedfv glViewportIndexedfv;

typedef void (*mogl_function_glScissorArrayv)(GLuint first, GLsizei count, GLint *v);
mogl_function_glScissorArrayv glScissorArrayv;

typedef void (*mogl_function_glScissorIndexed)(GLuint index, GLint left, GLint bottom, GLsizei width, GLsizei height);
mogl_function_glScissorIndexed glScissorIndexed;

typedef void (*mogl_function_glScissorIndexedv)(GLuint index, GLint *v);
mogl_function_glScissorIndexedv glScissorIndexedv;

typedef void (*mogl_function_glDepthRangeArrayv)(GLuint first, GLsizei count, GLdouble *v);
mogl_function_glDepthRangeArrayv glDepthRangeArrayv;

typedef void (*mogl_function_glDepthRangeIndexed)(GLuint index, GLdouble n, GLdouble f);
mogl_function_glDepthRangeIndexed glDepthRangeIndexed;

typedef void (*mogl_function_glGetFloati_v)(GLenum target, GLuint index, GLfloat *data);
mogl_function_glGetFloati_v glGetFloati_v;

typedef void (*mogl_function_glGetDoublei_v)(GLenum target, GLuint index, GLdouble *data);
mogl_function_glGetDoublei_v glGetDoublei_v;
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

typedef void (*mogl_function_glDrawArraysInstancedBaseInstance)(GLenum mode, GLint first, GLsizei count, GLsizei instancecount, GLuint baseinstance);
mogl_function_glDrawArraysInstancedBaseInstance glDrawArraysInstancedBaseInstance;

typedef void (*mogl_function_glDrawElementsInstancedBaseInstance)(GLenum mode, GLsizei count, GLenum type, void * indices, GLsizei instancecount, GLuint baseinstance);
mogl_function_glDrawElementsInstancedBaseInstance glDrawElementsInstancedBaseInstance;

typedef void (*mogl_function_glDrawElementsInstancedBaseVertexBaseInstance)(GLenum mode, GLsizei count, GLenum type, void * indices, GLsizei instancecount, GLint basevertex, GLuint baseinstance);
mogl_function_glDrawElementsInstancedBaseVertexBaseInstance glDrawElementsInstancedBaseVertexBaseInstance;

typedef void (*mogl_function_glGetInternalformativ)(GLenum target, GLenum internalformat, GLenum pname, GLsizei count, GLint *params);
mogl_function_glGetInternalformativ glGetInternalformativ;

typedef void (*mogl_function_glGetActiveAtomicCounterBufferiv)(GLuint program, GLuint bufferIndex, GLenum pname, GLint *params);
mogl_function_glGetActiveAtomicCounterBufferiv glGetActiveAtomicCounterBufferiv;

typedef void (*mogl_function_glBindImageTexture)(GLuint unit, GLuint texture, GLint level, GLboolean layered, GLint layer, GLenum access, GLenum format);
mogl_function_glBindImageTexture glBindImageTexture;

typedef void (*mogl_function_glMemoryBarrier)(GLbitfield barriers);
mogl_function_glMemoryBarrier glMemoryBarrier;

typedef void (*mogl_function_glTexStorage1D)(GLenum target, GLsizei levels, GLenum internalformat, GLsizei width);
mogl_function_glTexStorage1D glTexStorage1D;

typedef void (*mogl_function_glTexStorage2D)(GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height);
mogl_function_glTexStorage2D glTexStorage2D;

typedef void (*mogl_function_glTexStorage3D)(GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth);
mogl_function_glTexStorage3D glTexStorage3D;

typedef void (*mogl_function_glDrawTransformFeedbackInstanced)(GLenum mode, GLuint id, GLsizei instancecount);
mogl_function_glDrawTransformFeedbackInstanced glDrawTransformFeedbackInstanced;

typedef void (*mogl_function_glDrawTransformFeedbackStreamInstanced)(GLenum mode, GLuint id, GLuint stream, GLsizei instancecount);
mogl_function_glDrawTransformFeedbackStreamInstanced glDrawTransformFeedbackStreamInstanced;
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

typedef void (*mogl_function_glClearBufferData)(GLenum target, GLenum internalformat, GLenum format, GLenum type, void * data);
mogl_function_glClearBufferData glClearBufferData;

typedef void (*mogl_function_glClearBufferSubData)(GLenum target, GLenum internalformat, GLintptr offset, GLsizeiptr size, GLenum format, GLenum type, void * data);
mogl_function_glClearBufferSubData glClearBufferSubData;

typedef void (*mogl_function_glDispatchCompute)(GLuint num_groups_x, GLuint num_groups_y, GLuint num_groups_z);
mogl_function_glDispatchCompute glDispatchCompute;

typedef void (*mogl_function_glDispatchComputeIndirect)(GLintptr indirect);
mogl_function_glDispatchComputeIndirect glDispatchComputeIndirect;

typedef void (*mogl_function_glCopyImageSubData)(GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, GLuint dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei srcWidth, GLsizei srcHeight, GLsizei srcDepth);
mogl_function_glCopyImageSubData glCopyImageSubData;

typedef void (*mogl_function_glFramebufferParameteri)(GLenum target, GLenum pname, GLint param);
mogl_function_glFramebufferParameteri glFramebufferParameteri;

typedef void (*mogl_function_glGetFramebufferParameteriv)(GLenum target, GLenum pname, GLint *params);
mogl_function_glGetFramebufferParameteriv glGetFramebufferParameteriv;

typedef void (*mogl_function_glGetInternalformati64v)(GLenum target, GLenum internalformat, GLenum pname, GLsizei count, GLint64 *params);
mogl_function_glGetInternalformati64v glGetInternalformati64v;

typedef void (*mogl_function_glInvalidateTexSubImage)(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth);
mogl_function_glInvalidateTexSubImage glInvalidateTexSubImage;

typedef void (*mogl_function_glInvalidateTexImage)(GLuint texture, GLint level);
mogl_function_glInvalidateTexImage glInvalidateTexImage;

typedef void (*mogl_function_glInvalidateBufferSubData)(GLuint buffer, GLintptr offset, GLsizeiptr length);
mogl_function_glInvalidateBufferSubData glInvalidateBufferSubData;

typedef void (*mogl_function_glInvalidateBufferData)(GLuint buffer);
mogl_function_glInvalidateBufferData glInvalidateBufferData;

typedef void (*mogl_function_glInvalidateFramebuffer)(GLenum target, GLsizei numAttachments, GLenum *attachments);
mogl_function_glInvalidateFramebuffer glInvalidateFramebuffer;

typedef void (*mogl_function_glInvalidateSubFramebuffer)(GLenum target, GLsizei numAttachments, GLenum *attachments, GLint x, GLint y, GLsizei width, GLsizei height);
mogl_function_glInvalidateSubFramebuffer glInvalidateSubFramebuffer;

typedef void (*mogl_function_glMultiDrawArraysIndirect)(GLenum mode, void * indirect, GLsizei drawcount, GLsizei stride);
mogl_function_glMultiDrawArraysIndirect glMultiDrawArraysIndirect;

typedef void (*mogl_function_glMultiDrawElementsIndirect)(GLenum mode, GLenum type, void * indirect, GLsizei drawcount, GLsizei stride);
mogl_function_glMultiDrawElementsIndirect glMultiDrawElementsIndirect;

typedef void (*mogl_function_glGetProgramInterfaceiv)(GLuint program, GLenum programInterface, GLenum pname, GLint *params);
mogl_function_glGetProgramInterfaceiv glGetProgramInterfaceiv;

typedef GLuint  (*mogl_function_glGetProgramResourceIndex)(GLuint program, GLenum programInterface, GLchar *name);
mogl_function_glGetProgramResourceIndex glGetProgramResourceIndex;

typedef void (*mogl_function_glGetProgramResourceName)(GLuint program, GLenum programInterface, GLuint index, GLsizei bufSize, GLsizei *length, GLchar *name);
mogl_function_glGetProgramResourceName glGetProgramResourceName;

typedef void (*mogl_function_glGetProgramResourceiv)(GLuint program, GLenum programInterface, GLuint index, GLsizei propCount, GLenum *props, GLsizei count, GLsizei *length, GLint *params);
mogl_function_glGetProgramResourceiv glGetProgramResourceiv;

typedef GLint  (*mogl_function_glGetProgramResourceLocation)(GLuint program, GLenum programInterface, GLchar *name);
mogl_function_glGetProgramResourceLocation glGetProgramResourceLocation;

typedef GLint  (*mogl_function_glGetProgramResourceLocationIndex)(GLuint program, GLenum programInterface, GLchar *name);
mogl_function_glGetProgramResourceLocationIndex glGetProgramResourceLocationIndex;

typedef void (*mogl_function_glShaderStorageBlockBinding)(GLuint program, GLuint storageBlockIndex, GLuint storageBlockBinding);
mogl_function_glShaderStorageBlockBinding glShaderStorageBlockBinding;

typedef void (*mogl_function_glTexBufferRange)(GLenum target, GLenum internalformat, GLuint buffer, GLintptr offset, GLsizeiptr size);
mogl_function_glTexBufferRange glTexBufferRange;

typedef void (*mogl_function_glTexStorage2DMultisample)(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations);
mogl_function_glTexStorage2DMultisample glTexStorage2DMultisample;

typedef void (*mogl_function_glTexStorage3DMultisample)(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations);
mogl_function_glTexStorage3DMultisample glTexStorage3DMultisample;

typedef void (*mogl_function_glTextureView)(GLuint texture, GLenum target, GLuint origtexture, GLenum internalformat, GLuint minlevel, GLuint numlevels, GLuint minlayer, GLuint numlayers);
mogl_function_glTextureView glTextureView;

typedef void (*mogl_function_glBindVertexBuffer)(GLuint bindingindex, GLuint buffer, GLintptr offset, GLsizei stride);
mogl_function_glBindVertexBuffer glBindVertexBuffer;

typedef void (*mogl_function_glVertexAttribFormat)(GLuint attribindex, GLint size, GLenum type, GLboolean normalized, GLuint relativeoffset);
mogl_function_glVertexAttribFormat glVertexAttribFormat;

typedef void (*mogl_function_glVertexAttribIFormat)(GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset);
mogl_function_glVertexAttribIFormat glVertexAttribIFormat;

typedef void (*mogl_function_glVertexAttribLFormat)(GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset);
mogl_function_glVertexAttribLFormat glVertexAttribLFormat;

typedef void (*mogl_function_glVertexAttribBinding)(GLuint attribindex, GLuint bindingindex);
mogl_function_glVertexAttribBinding glVertexAttribBinding;

typedef void (*mogl_function_glVertexBindingDivisor)(GLuint bindingindex, GLuint divisor);
mogl_function_glVertexBindingDivisor glVertexBindingDivisor;

typedef void (*mogl_function_glDebugMessageControl)(GLenum source, GLenum type, GLenum severity, GLsizei count, GLuint *ids, GLboolean enabled);
mogl_function_glDebugMessageControl glDebugMessageControl;

typedef void (*mogl_function_glDebugMessageInsert)(GLenum source, GLenum type, GLuint id, GLenum severity, GLsizei length, GLchar *buf);
mogl_function_glDebugMessageInsert glDebugMessageInsert;

typedef void (*mogl_function_glDebugMessageCallback)(GLDEBUGPROC callback, void * userParam);
mogl_function_glDebugMessageCallback glDebugMessageCallback;

typedef GLuint  (*mogl_function_glGetDebugMessageLog)(GLuint count, GLsizei bufSize, GLenum *sources, GLenum *types, GLuint *ids, GLenum *severities, GLsizei *lengths, GLchar *messageLog);
mogl_function_glGetDebugMessageLog glGetDebugMessageLog;

typedef void (*mogl_function_glPushDebugGroup)(GLenum source, GLuint id, GLsizei length, GLchar *message);
mogl_function_glPushDebugGroup glPushDebugGroup;

typedef void (*mogl_function_glPopDebugGroup)();
mogl_function_glPopDebugGroup glPopDebugGroup;

typedef void (*mogl_function_glObjectLabel)(GLenum identifier, GLuint name, GLsizei length, GLchar *label);
mogl_function_glObjectLabel glObjectLabel;

typedef void (*mogl_function_glGetObjectLabel)(GLenum identifier, GLuint name, GLsizei bufSize, GLsizei *length, GLchar *label);
mogl_function_glGetObjectLabel glGetObjectLabel;

typedef void (*mogl_function_glObjectPtrLabel)(void * ptr, GLsizei length, GLchar *label);
mogl_function_glObjectPtrLabel glObjectPtrLabel;

typedef void (*mogl_function_glGetObjectPtrLabel)(void * ptr, GLsizei bufSize, GLsizei *length, GLchar *label);
mogl_function_glGetObjectPtrLabel glGetObjectPtrLabel;
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

typedef void (*mogl_function_glBufferStorage)(GLenum target, GLsizeiptr size, void * data, GLbitfield flags);
mogl_function_glBufferStorage glBufferStorage;

typedef void (*mogl_function_glClearTexImage)(GLuint texture, GLint level, GLenum format, GLenum type, void * data);
mogl_function_glClearTexImage glClearTexImage;

typedef void (*mogl_function_glClearTexSubImage)(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, void * data);
mogl_function_glClearTexSubImage glClearTexSubImage;

typedef void (*mogl_function_glBindBuffersBase)(GLenum target, GLuint first, GLsizei count, GLuint *buffers);
mogl_function_glBindBuffersBase glBindBuffersBase;

typedef void (*mogl_function_glBindBuffersRange)(GLenum target, GLuint first, GLsizei count, GLuint *buffers, GLintptr *offsets, GLsizeiptr *sizes);
mogl_function_glBindBuffersRange glBindBuffersRange;

typedef void (*mogl_function_glBindTextures)(GLuint first, GLsizei count, GLuint *textures);
mogl_function_glBindTextures glBindTextures;

typedef void (*mogl_function_glBindSamplers)(GLuint first, GLsizei count, GLuint *samplers);
mogl_function_glBindSamplers glBindSamplers;

typedef void (*mogl_function_glBindImageTextures)(GLuint first, GLsizei count, GLuint *textures);
mogl_function_glBindImageTextures glBindImageTextures;

typedef void (*mogl_function_glBindVertexBuffers)(GLuint first, GLsizei count, GLuint *buffers, GLintptr *offsets, GLsizei *strides);
mogl_function_glBindVertexBuffers glBindVertexBuffers;
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

typedef void (*mogl_function_glClipControl)(GLenum origin, GLenum depth);
mogl_function_glClipControl glClipControl;

typedef void (*mogl_function_glCreateTransformFeedbacks)(GLsizei n, GLuint *ids);
mogl_function_glCreateTransformFeedbacks glCreateTransformFeedbacks;

typedef void (*mogl_function_glTransformFeedbackBufferBase)(GLuint xfb, GLuint index, GLuint buffer);
mogl_function_glTransformFeedbackBufferBase glTransformFeedbackBufferBase;

typedef void (*mogl_function_glTransformFeedbackBufferRange)(GLuint xfb, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size);
mogl_function_glTransformFeedbackBufferRange glTransformFeedbackBufferRange;

typedef void (*mogl_function_glGetTransformFeedbackiv)(GLuint xfb, GLenum pname, GLint *param);
mogl_function_glGetTransformFeedbackiv glGetTransformFeedbackiv;

typedef void (*mogl_function_glGetTransformFeedbacki_v)(GLuint xfb, GLenum pname, GLuint index, GLint *param);
mogl_function_glGetTransformFeedbacki_v glGetTransformFeedbacki_v;

typedef void (*mogl_function_glGetTransformFeedbacki64_v)(GLuint xfb, GLenum pname, GLuint index, GLint64 *param);
mogl_function_glGetTransformFeedbacki64_v glGetTransformFeedbacki64_v;

typedef void (*mogl_function_glCreateBuffers)(GLsizei n, GLuint *buffers);
mogl_function_glCreateBuffers glCreateBuffers;

typedef void (*mogl_function_glNamedBufferStorage)(GLuint buffer, GLsizeiptr size, void * data, GLbitfield flags);
mogl_function_glNamedBufferStorage glNamedBufferStorage;

typedef void (*mogl_function_glNamedBufferData)(GLuint buffer, GLsizeiptr size, void * data, GLenum usage);
mogl_function_glNamedBufferData glNamedBufferData;

typedef void (*mogl_function_glNamedBufferSubData)(GLuint buffer, GLintptr offset, GLsizeiptr size, void * data);
mogl_function_glNamedBufferSubData glNamedBufferSubData;

typedef void (*mogl_function_glCopyNamedBufferSubData)(GLuint readBuffer, GLuint writeBuffer, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size);
mogl_function_glCopyNamedBufferSubData glCopyNamedBufferSubData;

typedef void (*mogl_function_glClearNamedBufferData)(GLuint buffer, GLenum internalformat, GLenum format, GLenum type, void * data);
mogl_function_glClearNamedBufferData glClearNamedBufferData;

typedef void (*mogl_function_glClearNamedBufferSubData)(GLuint buffer, GLenum internalformat, GLintptr offset, GLsizeiptr size, GLenum format, GLenum type, void * data);
mogl_function_glClearNamedBufferSubData glClearNamedBufferSubData;

typedef void *  (*mogl_function_glMapNamedBuffer)(GLuint buffer, GLenum access);
mogl_function_glMapNamedBuffer glMapNamedBuffer;

typedef void *  (*mogl_function_glMapNamedBufferRange)(GLuint buffer, GLintptr offset, GLsizeiptr length, GLbitfield access);
mogl_function_glMapNamedBufferRange glMapNamedBufferRange;

typedef GLboolean  (*mogl_function_glUnmapNamedBuffer)(GLuint buffer);
mogl_function_glUnmapNamedBuffer glUnmapNamedBuffer;

typedef void (*mogl_function_glFlushMappedNamedBufferRange)(GLuint buffer, GLintptr offset, GLsizeiptr length);
mogl_function_glFlushMappedNamedBufferRange glFlushMappedNamedBufferRange;

typedef void (*mogl_function_glGetNamedBufferParameteriv)(GLuint buffer, GLenum pname, GLint *params);
mogl_function_glGetNamedBufferParameteriv glGetNamedBufferParameteriv;

typedef void (*mogl_function_glGetNamedBufferParameteri64v)(GLuint buffer, GLenum pname, GLint64 *params);
mogl_function_glGetNamedBufferParameteri64v glGetNamedBufferParameteri64v;

typedef void (*mogl_function_glGetNamedBufferPointerv)(GLuint buffer, GLenum pname, void * *params);
mogl_function_glGetNamedBufferPointerv glGetNamedBufferPointerv;

typedef void (*mogl_function_glGetNamedBufferSubData)(GLuint buffer, GLintptr offset, GLsizeiptr size, void * data);
mogl_function_glGetNamedBufferSubData glGetNamedBufferSubData;

typedef void (*mogl_function_glCreateFramebuffers)(GLsizei n, GLuint *framebuffers);
mogl_function_glCreateFramebuffers glCreateFramebuffers;

typedef void (*mogl_function_glNamedFramebufferRenderbuffer)(GLuint framebuffer, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer);
mogl_function_glNamedFramebufferRenderbuffer glNamedFramebufferRenderbuffer;

typedef void (*mogl_function_glNamedFramebufferParameteri)(GLuint framebuffer, GLenum pname, GLint param);
mogl_function_glNamedFramebufferParameteri glNamedFramebufferParameteri;

typedef void (*mogl_function_glNamedFramebufferTexture)(GLuint framebuffer, GLenum attachment, GLuint texture, GLint level);
mogl_function_glNamedFramebufferTexture glNamedFramebufferTexture;

typedef void (*mogl_function_glNamedFramebufferTextureLayer)(GLuint framebuffer, GLenum attachment, GLuint texture, GLint level, GLint layer);
mogl_function_glNamedFramebufferTextureLayer glNamedFramebufferTextureLayer;

typedef void (*mogl_function_glNamedFramebufferDrawBuffer)(GLuint framebuffer, GLenum buf);
mogl_function_glNamedFramebufferDrawBuffer glNamedFramebufferDrawBuffer;

typedef void (*mogl_function_glNamedFramebufferDrawBuffers)(GLuint framebuffer, GLsizei n, GLenum *bufs);
mogl_function_glNamedFramebufferDrawBuffers glNamedFramebufferDrawBuffers;

typedef void (*mogl_function_glNamedFramebufferReadBuffer)(GLuint framebuffer, GLenum src);
mogl_function_glNamedFramebufferReadBuffer glNamedFramebufferReadBuffer;

typedef void (*mogl_function_glInvalidateNamedFramebufferData)(GLuint framebuffer, GLsizei numAttachments, GLenum *attachments);
mogl_function_glInvalidateNamedFramebufferData glInvalidateNamedFramebufferData;

typedef void (*mogl_function_glInvalidateNamedFramebufferSubData)(GLuint framebuffer, GLsizei numAttachments, GLenum *attachments, GLint x, GLint y, GLsizei width, GLsizei height);
mogl_function_glInvalidateNamedFramebufferSubData glInvalidateNamedFramebufferSubData;

typedef void (*mogl_function_glClearNamedFramebufferiv)(GLuint framebuffer, GLenum buffer, GLint drawbuffer, GLint *value);
mogl_function_glClearNamedFramebufferiv glClearNamedFramebufferiv;

typedef void (*mogl_function_glClearNamedFramebufferuiv)(GLuint framebuffer, GLenum buffer, GLint drawbuffer, GLuint *value);
mogl_function_glClearNamedFramebufferuiv glClearNamedFramebufferuiv;

typedef void (*mogl_function_glClearNamedFramebufferfv)(GLuint framebuffer, GLenum buffer, GLint drawbuffer, GLfloat *value);
mogl_function_glClearNamedFramebufferfv glClearNamedFramebufferfv;

typedef void (*mogl_function_glClearNamedFramebufferfi)(GLuint framebuffer, GLenum buffer, GLint drawbuffer, GLfloat depth, GLint stencil);
mogl_function_glClearNamedFramebufferfi glClearNamedFramebufferfi;

typedef void (*mogl_function_glBlitNamedFramebuffer)(GLuint readFramebuffer, GLuint drawFramebuffer, GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter);
mogl_function_glBlitNamedFramebuffer glBlitNamedFramebuffer;

typedef GLenum  (*mogl_function_glCheckNamedFramebufferStatus)(GLuint framebuffer, GLenum target);
mogl_function_glCheckNamedFramebufferStatus glCheckNamedFramebufferStatus;

typedef void (*mogl_function_glGetNamedFramebufferParameteriv)(GLuint framebuffer, GLenum pname, GLint *param);
mogl_function_glGetNamedFramebufferParameteriv glGetNamedFramebufferParameteriv;

typedef void (*mogl_function_glGetNamedFramebufferAttachmentParameteriv)(GLuint framebuffer, GLenum attachment, GLenum pname, GLint *params);
mogl_function_glGetNamedFramebufferAttachmentParameteriv glGetNamedFramebufferAttachmentParameteriv;

typedef void (*mogl_function_glCreateRenderbuffers)(GLsizei n, GLuint *renderbuffers);
mogl_function_glCreateRenderbuffers glCreateRenderbuffers;

typedef void (*mogl_function_glNamedRenderbufferStorage)(GLuint renderbuffer, GLenum internalformat, GLsizei width, GLsizei height);
mogl_function_glNamedRenderbufferStorage glNamedRenderbufferStorage;

typedef void (*mogl_function_glNamedRenderbufferStorageMultisample)(GLuint renderbuffer, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height);
mogl_function_glNamedRenderbufferStorageMultisample glNamedRenderbufferStorageMultisample;

typedef void (*mogl_function_glGetNamedRenderbufferParameteriv)(GLuint renderbuffer, GLenum pname, GLint *params);
mogl_function_glGetNamedRenderbufferParameteriv glGetNamedRenderbufferParameteriv;

typedef void (*mogl_function_glCreateTextures)(GLenum target, GLsizei n, GLuint *textures);
mogl_function_glCreateTextures glCreateTextures;

typedef void (*mogl_function_glTextureBuffer)(GLuint texture, GLenum internalformat, GLuint buffer);
mogl_function_glTextureBuffer glTextureBuffer;

typedef void (*mogl_function_glTextureBufferRange)(GLuint texture, GLenum internalformat, GLuint buffer, GLintptr offset, GLsizeiptr size);
mogl_function_glTextureBufferRange glTextureBufferRange;

typedef void (*mogl_function_glTextureStorage1D)(GLuint texture, GLsizei levels, GLenum internalformat, GLsizei width);
mogl_function_glTextureStorage1D glTextureStorage1D;

typedef void (*mogl_function_glTextureStorage2D)(GLuint texture, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height);
mogl_function_glTextureStorage2D glTextureStorage2D;

typedef void (*mogl_function_glTextureStorage3D)(GLuint texture, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth);
mogl_function_glTextureStorage3D glTextureStorage3D;

typedef void (*mogl_function_glTextureStorage2DMultisample)(GLuint texture, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations);
mogl_function_glTextureStorage2DMultisample glTextureStorage2DMultisample;

typedef void (*mogl_function_glTextureStorage3DMultisample)(GLuint texture, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations);
mogl_function_glTextureStorage3DMultisample glTextureStorage3DMultisample;

typedef void (*mogl_function_glTextureSubImage1D)(GLuint texture, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, void * pixels);
mogl_function_glTextureSubImage1D glTextureSubImage1D;

typedef void (*mogl_function_glTextureSubImage2D)(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, void * pixels);
mogl_function_glTextureSubImage2D glTextureSubImage2D;

typedef void (*mogl_function_glTextureSubImage3D)(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, void * pixels);
mogl_function_glTextureSubImage3D glTextureSubImage3D;

typedef void (*mogl_function_glCompressedTextureSubImage1D)(GLuint texture, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, void * data);
mogl_function_glCompressedTextureSubImage1D glCompressedTextureSubImage1D;

typedef void (*mogl_function_glCompressedTextureSubImage2D)(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, void * data);
mogl_function_glCompressedTextureSubImage2D glCompressedTextureSubImage2D;

typedef void (*mogl_function_glCompressedTextureSubImage3D)(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, void * data);
mogl_function_glCompressedTextureSubImage3D glCompressedTextureSubImage3D;

typedef void (*mogl_function_glCopyTextureSubImage1D)(GLuint texture, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width);
mogl_function_glCopyTextureSubImage1D glCopyTextureSubImage1D;

typedef void (*mogl_function_glCopyTextureSubImage2D)(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height);
mogl_function_glCopyTextureSubImage2D glCopyTextureSubImage2D;

typedef void (*mogl_function_glCopyTextureSubImage3D)(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height);
mogl_function_glCopyTextureSubImage3D glCopyTextureSubImage3D;

typedef void (*mogl_function_glTextureParameterf)(GLuint texture, GLenum pname, GLfloat param);
mogl_function_glTextureParameterf glTextureParameterf;

typedef void (*mogl_function_glTextureParameterfv)(GLuint texture, GLenum pname, GLfloat *param);
mogl_function_glTextureParameterfv glTextureParameterfv;

typedef void (*mogl_function_glTextureParameteri)(GLuint texture, GLenum pname, GLint param);
mogl_function_glTextureParameteri glTextureParameteri;

typedef void (*mogl_function_glTextureParameterIiv)(GLuint texture, GLenum pname, GLint *params);
mogl_function_glTextureParameterIiv glTextureParameterIiv;

typedef void (*mogl_function_glTextureParameterIuiv)(GLuint texture, GLenum pname, GLuint *params);
mogl_function_glTextureParameterIuiv glTextureParameterIuiv;

typedef void (*mogl_function_glTextureParameteriv)(GLuint texture, GLenum pname, GLint *param);
mogl_function_glTextureParameteriv glTextureParameteriv;

typedef void (*mogl_function_glGenerateTextureMipmap)(GLuint texture);
mogl_function_glGenerateTextureMipmap glGenerateTextureMipmap;

typedef void (*mogl_function_glBindTextureUnit)(GLuint unit, GLuint texture);
mogl_function_glBindTextureUnit glBindTextureUnit;

typedef void (*mogl_function_glGetTextureImage)(GLuint texture, GLint level, GLenum format, GLenum type, GLsizei bufSize, void * pixels);
mogl_function_glGetTextureImage glGetTextureImage;

typedef void (*mogl_function_glGetCompressedTextureImage)(GLuint texture, GLint level, GLsizei bufSize, void * pixels);
mogl_function_glGetCompressedTextureImage glGetCompressedTextureImage;

typedef void (*mogl_function_glGetTextureLevelParameterfv)(GLuint texture, GLint level, GLenum pname, GLfloat *params);
mogl_function_glGetTextureLevelParameterfv glGetTextureLevelParameterfv;

typedef void (*mogl_function_glGetTextureLevelParameteriv)(GLuint texture, GLint level, GLenum pname, GLint *params);
mogl_function_glGetTextureLevelParameteriv glGetTextureLevelParameteriv;

typedef void (*mogl_function_glGetTextureParameterfv)(GLuint texture, GLenum pname, GLfloat *params);
mogl_function_glGetTextureParameterfv glGetTextureParameterfv;

typedef void (*mogl_function_glGetTextureParameterIiv)(GLuint texture, GLenum pname, GLint *params);
mogl_function_glGetTextureParameterIiv glGetTextureParameterIiv;

typedef void (*mogl_function_glGetTextureParameterIuiv)(GLuint texture, GLenum pname, GLuint *params);
mogl_function_glGetTextureParameterIuiv glGetTextureParameterIuiv;

typedef void (*mogl_function_glGetTextureParameteriv)(GLuint texture, GLenum pname, GLint *params);
mogl_function_glGetTextureParameteriv glGetTextureParameteriv;

typedef void (*mogl_function_glCreateVertexArrays)(GLsizei n, GLuint *arrays);
mogl_function_glCreateVertexArrays glCreateVertexArrays;

typedef void (*mogl_function_glDisableVertexArrayAttrib)(GLuint vaobj, GLuint index);
mogl_function_glDisableVertexArrayAttrib glDisableVertexArrayAttrib;

typedef void (*mogl_function_glEnableVertexArrayAttrib)(GLuint vaobj, GLuint index);
mogl_function_glEnableVertexArrayAttrib glEnableVertexArrayAttrib;

typedef void (*mogl_function_glVertexArrayElementBuffer)(GLuint vaobj, GLuint buffer);
mogl_function_glVertexArrayElementBuffer glVertexArrayElementBuffer;

typedef void (*mogl_function_glVertexArrayVertexBuffer)(GLuint vaobj, GLuint bindingindex, GLuint buffer, GLintptr offset, GLsizei stride);
mogl_function_glVertexArrayVertexBuffer glVertexArrayVertexBuffer;

typedef void (*mogl_function_glVertexArrayVertexBuffers)(GLuint vaobj, GLuint first, GLsizei count, GLuint *buffers, GLintptr *offsets, GLsizei *strides);
mogl_function_glVertexArrayVertexBuffers glVertexArrayVertexBuffers;

typedef void (*mogl_function_glVertexArrayAttribBinding)(GLuint vaobj, GLuint attribindex, GLuint bindingindex);
mogl_function_glVertexArrayAttribBinding glVertexArrayAttribBinding;

typedef void (*mogl_function_glVertexArrayAttribFormat)(GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLboolean normalized, GLuint relativeoffset);
mogl_function_glVertexArrayAttribFormat glVertexArrayAttribFormat;

typedef void (*mogl_function_glVertexArrayAttribIFormat)(GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset);
mogl_function_glVertexArrayAttribIFormat glVertexArrayAttribIFormat;

typedef void (*mogl_function_glVertexArrayAttribLFormat)(GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset);
mogl_function_glVertexArrayAttribLFormat glVertexArrayAttribLFormat;

typedef void (*mogl_function_glVertexArrayBindingDivisor)(GLuint vaobj, GLuint bindingindex, GLuint divisor);
mogl_function_glVertexArrayBindingDivisor glVertexArrayBindingDivisor;

typedef void (*mogl_function_glGetVertexArrayiv)(GLuint vaobj, GLenum pname, GLint *param);
mogl_function_glGetVertexArrayiv glGetVertexArrayiv;

typedef void (*mogl_function_glGetVertexArrayIndexediv)(GLuint vaobj, GLuint index, GLenum pname, GLint *param);
mogl_function_glGetVertexArrayIndexediv glGetVertexArrayIndexediv;

typedef void (*mogl_function_glGetVertexArrayIndexed64iv)(GLuint vaobj, GLuint index, GLenum pname, GLint64 *param);
mogl_function_glGetVertexArrayIndexed64iv glGetVertexArrayIndexed64iv;

typedef void (*mogl_function_glCreateSamplers)(GLsizei n, GLuint *samplers);
mogl_function_glCreateSamplers glCreateSamplers;

typedef void (*mogl_function_glCreateProgramPipelines)(GLsizei n, GLuint *pipelines);
mogl_function_glCreateProgramPipelines glCreateProgramPipelines;

typedef void (*mogl_function_glCreateQueries)(GLenum target, GLsizei n, GLuint *ids);
mogl_function_glCreateQueries glCreateQueries;

typedef void (*mogl_function_glGetQueryBufferObjecti64v)(GLuint id, GLuint buffer, GLenum pname, GLintptr offset);
mogl_function_glGetQueryBufferObjecti64v glGetQueryBufferObjecti64v;

typedef void (*mogl_function_glGetQueryBufferObjectiv)(GLuint id, GLuint buffer, GLenum pname, GLintptr offset);
mogl_function_glGetQueryBufferObjectiv glGetQueryBufferObjectiv;

typedef void (*mogl_function_glGetQueryBufferObjectui64v)(GLuint id, GLuint buffer, GLenum pname, GLintptr offset);
mogl_function_glGetQueryBufferObjectui64v glGetQueryBufferObjectui64v;

typedef void (*mogl_function_glGetQueryBufferObjectuiv)(GLuint id, GLuint buffer, GLenum pname, GLintptr offset);
mogl_function_glGetQueryBufferObjectuiv glGetQueryBufferObjectuiv;

typedef void (*mogl_function_glMemoryBarrierByRegion)(GLbitfield barriers);
mogl_function_glMemoryBarrierByRegion glMemoryBarrierByRegion;

typedef void (*mogl_function_glGetTextureSubImage)(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, GLsizei bufSize, void * pixels);
mogl_function_glGetTextureSubImage glGetTextureSubImage;

typedef void (*mogl_function_glGetCompressedTextureSubImage)(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLsizei bufSize, void * pixels);
mogl_function_glGetCompressedTextureSubImage glGetCompressedTextureSubImage;

typedef GLenum  (*mogl_function_glGetGraphicsResetStatus)();
mogl_function_glGetGraphicsResetStatus glGetGraphicsResetStatus;

typedef void (*mogl_function_glGetnCompressedTexImage)(GLenum target, GLint lod, GLsizei bufSize, void * pixels);
mogl_function_glGetnCompressedTexImage glGetnCompressedTexImage;

typedef void (*mogl_function_glGetnTexImage)(GLenum target, GLint level, GLenum format, GLenum type, GLsizei bufSize, void * pixels);
mogl_function_glGetnTexImage glGetnTexImage;

typedef void (*mogl_function_glGetnUniformdv)(GLuint program, GLint location, GLsizei bufSize, GLdouble *params);
mogl_function_glGetnUniformdv glGetnUniformdv;

typedef void (*mogl_function_glGetnUniformfv)(GLuint program, GLint location, GLsizei bufSize, GLfloat *params);
mogl_function_glGetnUniformfv glGetnUniformfv;

typedef void (*mogl_function_glGetnUniformiv)(GLuint program, GLint location, GLsizei bufSize, GLint *params);
mogl_function_glGetnUniformiv glGetnUniformiv;

typedef void (*mogl_function_glGetnUniformuiv)(GLuint program, GLint location, GLsizei bufSize, GLuint *params);
mogl_function_glGetnUniformuiv glGetnUniformuiv;

typedef void (*mogl_function_glReadnPixels)(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLsizei bufSize, void * data);
mogl_function_glReadnPixels glReadnPixels;

typedef void (*mogl_function_glGetnMapdv)(GLenum target, GLenum query, GLsizei bufSize, GLdouble *v);
mogl_function_glGetnMapdv glGetnMapdv;

typedef void (*mogl_function_glGetnMapfv)(GLenum target, GLenum query, GLsizei bufSize, GLfloat *v);
mogl_function_glGetnMapfv glGetnMapfv;

typedef void (*mogl_function_glGetnMapiv)(GLenum target, GLenum query, GLsizei bufSize, GLint *v);
mogl_function_glGetnMapiv glGetnMapiv;

typedef void (*mogl_function_glGetnPixelMapfv)(GLenum map, GLsizei bufSize, GLfloat *values);
mogl_function_glGetnPixelMapfv glGetnPixelMapfv;

typedef void (*mogl_function_glGetnPixelMapuiv)(GLenum map, GLsizei bufSize, GLuint *values);
mogl_function_glGetnPixelMapuiv glGetnPixelMapuiv;

typedef void (*mogl_function_glGetnPixelMapusv)(GLenum map, GLsizei bufSize, GLushort *values);
mogl_function_glGetnPixelMapusv glGetnPixelMapusv;

typedef void (*mogl_function_glGetnPolygonStipple)(GLsizei bufSize, GLubyte *pattern);
mogl_function_glGetnPolygonStipple glGetnPolygonStipple;

typedef void (*mogl_function_glGetnColorTable)(GLenum target, GLenum format, GLenum type, GLsizei bufSize, void * table);
mogl_function_glGetnColorTable glGetnColorTable;

typedef void (*mogl_function_glGetnConvolutionFilter)(GLenum target, GLenum format, GLenum type, GLsizei bufSize, void * image);
mogl_function_glGetnConvolutionFilter glGetnConvolutionFilter;

typedef void (*mogl_function_glGetnSeparableFilter)(GLenum target, GLenum format, GLenum type, GLsizei rowBufSize, void * row, GLsizei columnBufSize, void * column, void * span);
mogl_function_glGetnSeparableFilter glGetnSeparableFilter;

typedef void (*mogl_function_glGetnHistogram)(GLenum target, GLboolean reset, GLenum format, GLenum type, GLsizei bufSize, void * values);
mogl_function_glGetnHistogram glGetnHistogram;

typedef void (*mogl_function_glGetnMinmax)(GLenum target, GLboolean reset, GLenum format, GLenum type, GLsizei bufSize, void * values);
mogl_function_glGetnMinmax glGetnMinmax;

typedef void (*mogl_function_glTextureBarrier)();
mogl_function_glTextureBarrier glTextureBarrier;
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

typedef void (*mogl_function_glSpecializeShader)(GLuint shader, GLchar *pEntryPoint, GLuint numSpecializationConstants, GLuint *pConstantIndex, GLuint *pConstantValue);
mogl_function_glSpecializeShader glSpecializeShader;

typedef void (*mogl_function_glMultiDrawArraysIndirectCount)(GLenum mode, void * indirect, GLintptr drawcount, GLsizei maxdrawcount, GLsizei stride);
mogl_function_glMultiDrawArraysIndirectCount glMultiDrawArraysIndirectCount;

typedef void (*mogl_function_glMultiDrawElementsIndirectCount)(GLenum mode, GLenum type, void * indirect, GLintptr drawcount, GLsizei maxdrawcount, GLsizei stride);
mogl_function_glMultiDrawElementsIndirectCount glMultiDrawElementsIndirectCount;

typedef void (*mogl_function_glPolygonOffsetClamp)(GLfloat factor, GLfloat units, GLfloat clamp);
mogl_function_glPolygonOffsetClamp glPolygonOffsetClamp;
#define GL_ARB_ES2_compatibility 1
#define GL_ARB_ES3_1_compatibility 1
#define GL_ARB_ES3_2_compatibility 1
#define GL_PRIMITIVE_BOUNDING_BOX_ARB 0x92BE
#define GL_MULTISAMPLE_LINE_WIDTH_RANGE_ARB 0x9381
#define GL_MULTISAMPLE_LINE_WIDTH_GRANULARITY_ARB 0x9382

typedef void (*mogl_function_glPrimitiveBoundingBoxARB)(GLfloat minX, GLfloat minY, GLfloat minZ, GLfloat minW, GLfloat maxX, GLfloat maxY, GLfloat maxZ, GLfloat maxW);
mogl_function_glPrimitiveBoundingBoxARB glPrimitiveBoundingBoxARB;
#define GL_ARB_ES3_compatibility 1
#define GL_ARB_arrays_of_arrays 1
#define GL_ARB_base_instance 1
#define GL_ARB_bindless_texture 1
#define GL_UNSIGNED_INT64_ARB 0x140F

typedef GLuint64  (*mogl_function_glGetTextureHandleARB)(GLuint texture);
mogl_function_glGetTextureHandleARB glGetTextureHandleARB;

typedef GLuint64  (*mogl_function_glGetTextureSamplerHandleARB)(GLuint texture, GLuint sampler);
mogl_function_glGetTextureSamplerHandleARB glGetTextureSamplerHandleARB;

typedef void (*mogl_function_glMakeTextureHandleResidentARB)(GLuint64 handle);
mogl_function_glMakeTextureHandleResidentARB glMakeTextureHandleResidentARB;

typedef void (*mogl_function_glMakeTextureHandleNonResidentARB)(GLuint64 handle);
mogl_function_glMakeTextureHandleNonResidentARB glMakeTextureHandleNonResidentARB;

typedef GLuint64  (*mogl_function_glGetImageHandleARB)(GLuint texture, GLint level, GLboolean layered, GLint layer, GLenum format);
mogl_function_glGetImageHandleARB glGetImageHandleARB;

typedef void (*mogl_function_glMakeImageHandleResidentARB)(GLuint64 handle, GLenum access);
mogl_function_glMakeImageHandleResidentARB glMakeImageHandleResidentARB;

typedef void (*mogl_function_glMakeImageHandleNonResidentARB)(GLuint64 handle);
mogl_function_glMakeImageHandleNonResidentARB glMakeImageHandleNonResidentARB;

typedef void (*mogl_function_glUniformHandleui64ARB)(GLint location, GLuint64 value);
mogl_function_glUniformHandleui64ARB glUniformHandleui64ARB;

typedef void (*mogl_function_glUniformHandleui64vARB)(GLint location, GLsizei count, GLuint64 *value);
mogl_function_glUniformHandleui64vARB glUniformHandleui64vARB;

typedef void (*mogl_function_glProgramUniformHandleui64ARB)(GLuint program, GLint location, GLuint64 value);
mogl_function_glProgramUniformHandleui64ARB glProgramUniformHandleui64ARB;

typedef void (*mogl_function_glProgramUniformHandleui64vARB)(GLuint program, GLint location, GLsizei count, GLuint64 *values);
mogl_function_glProgramUniformHandleui64vARB glProgramUniformHandleui64vARB;

typedef GLboolean  (*mogl_function_glIsTextureHandleResidentARB)(GLuint64 handle);
mogl_function_glIsTextureHandleResidentARB glIsTextureHandleResidentARB;

typedef GLboolean  (*mogl_function_glIsImageHandleResidentARB)(GLuint64 handle);
mogl_function_glIsImageHandleResidentARB glIsImageHandleResidentARB;

typedef void (*mogl_function_glVertexAttribL1ui64ARB)(GLuint index, GLuint64EXT x);
mogl_function_glVertexAttribL1ui64ARB glVertexAttribL1ui64ARB;

typedef void (*mogl_function_glVertexAttribL1ui64vARB)(GLuint index, GLuint64EXT *v);
mogl_function_glVertexAttribL1ui64vARB glVertexAttribL1ui64vARB;

typedef void (*mogl_function_glGetVertexAttribLui64vARB)(GLuint index, GLenum pname, GLuint64EXT *params);
mogl_function_glGetVertexAttribLui64vARB glGetVertexAttribLui64vARB;
#define GL_ARB_blend_func_extended 1
#define GL_ARB_buffer_storage 1
#define GL_ARB_cl_event 1
#define GL_SYNC_CL_EVENT_ARB 0x8240
#define GL_SYNC_CL_EVENT_COMPLETE_ARB 0x8241

typedef GLsync  (*mogl_function_glCreateSyncFromCLeventARB)(_cl_context *context, _cl_event *event, GLbitfield flags);
mogl_function_glCreateSyncFromCLeventARB glCreateSyncFromCLeventARB;
#define GL_ARB_clear_buffer_object 1
#define GL_ARB_clear_texture 1
#define GL_ARB_clip_control 1
#define GL_ARB_color_buffer_float 1
#define GL_RGBA_FLOAT_MODE_ARB 0x8820
#define GL_CLAMP_VERTEX_COLOR_ARB 0x891A
#define GL_CLAMP_FRAGMENT_COLOR_ARB 0x891B
#define GL_CLAMP_READ_COLOR_ARB 0x891C
#define GL_FIXED_ONLY_ARB 0x891D

typedef void (*mogl_function_glClampColorARB)(GLenum target, GLenum clamp);
mogl_function_glClampColorARB glClampColorARB;
#define GL_ARB_compatibility 1
#define GL_ARB_compressed_texture_pixel_storage 1
#define GL_ARB_compute_shader 1
#define GL_ARB_compute_variable_group_size 1
#define GL_MAX_COMPUTE_VARIABLE_GROUP_INVOCATIONS_ARB 0x9344
#define GL_MAX_COMPUTE_FIXED_GROUP_INVOCATIONS_ARB 0x90EB
#define GL_MAX_COMPUTE_VARIABLE_GROUP_SIZE_ARB 0x9345
#define GL_MAX_COMPUTE_FIXED_GROUP_SIZE_ARB 0x91BF

typedef void (*mogl_function_glDispatchComputeGroupSizeARB)(GLuint num_groups_x, GLuint num_groups_y, GLuint num_groups_z, GLuint group_size_x, GLuint group_size_y, GLuint group_size_z);
mogl_function_glDispatchComputeGroupSizeARB glDispatchComputeGroupSizeARB;
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

typedef void (*mogl_function_glDebugMessageControlARB)(GLenum source, GLenum type, GLenum severity, GLsizei count, GLuint *ids, GLboolean enabled);
mogl_function_glDebugMessageControlARB glDebugMessageControlARB;

typedef void (*mogl_function_glDebugMessageInsertARB)(GLenum source, GLenum type, GLuint id, GLenum severity, GLsizei length, GLchar *buf);
mogl_function_glDebugMessageInsertARB glDebugMessageInsertARB;

typedef void (*mogl_function_glDebugMessageCallbackARB)(GLDEBUGPROCARB callback, void * userParam);
mogl_function_glDebugMessageCallbackARB glDebugMessageCallbackARB;

typedef GLuint  (*mogl_function_glGetDebugMessageLogARB)(GLuint count, GLsizei bufSize, GLenum *sources, GLenum *types, GLuint *ids, GLenum *severities, GLsizei *lengths, GLchar *messageLog);
mogl_function_glGetDebugMessageLogARB glGetDebugMessageLogARB;
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

typedef void (*mogl_function_glDrawBuffersARB)(GLsizei n, GLenum *bufs);
mogl_function_glDrawBuffersARB glDrawBuffersARB;
#define GL_ARB_draw_buffers_blend 1

typedef void (*mogl_function_glBlendEquationiARB)(GLuint buf, GLenum mode);
mogl_function_glBlendEquationiARB glBlendEquationiARB;

typedef void (*mogl_function_glBlendEquationSeparateiARB)(GLuint buf, GLenum modeRGB, GLenum modeAlpha);
mogl_function_glBlendEquationSeparateiARB glBlendEquationSeparateiARB;

typedef void (*mogl_function_glBlendFunciARB)(GLuint buf, GLenum src, GLenum dst);
mogl_function_glBlendFunciARB glBlendFunciARB;

typedef void (*mogl_function_glBlendFuncSeparateiARB)(GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha);
mogl_function_glBlendFuncSeparateiARB glBlendFuncSeparateiARB;
#define GL_ARB_draw_elements_base_vertex 1
#define GL_ARB_draw_indirect 1
#define GL_ARB_draw_instanced 1

typedef void (*mogl_function_glDrawArraysInstancedARB)(GLenum mode, GLint first, GLsizei count, GLsizei primcount);
mogl_function_glDrawArraysInstancedARB glDrawArraysInstancedARB;

typedef void (*mogl_function_glDrawElementsInstancedARB)(GLenum mode, GLsizei count, GLenum type, void * indices, GLsizei primcount);
mogl_function_glDrawElementsInstancedARB glDrawElementsInstancedARB;
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

typedef void (*mogl_function_glProgramStringARB)(GLenum target, GLenum format, GLsizei len, void * string);
mogl_function_glProgramStringARB glProgramStringARB;

typedef void (*mogl_function_glBindProgramARB)(GLenum target, GLuint program);
mogl_function_glBindProgramARB glBindProgramARB;

typedef void (*mogl_function_glDeleteProgramsARB)(GLsizei n, GLuint *programs);
mogl_function_glDeleteProgramsARB glDeleteProgramsARB;

typedef void (*mogl_function_glGenProgramsARB)(GLsizei n, GLuint *programs);
mogl_function_glGenProgramsARB glGenProgramsARB;

typedef void (*mogl_function_glProgramEnvParameter4dARB)(GLenum target, GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
mogl_function_glProgramEnvParameter4dARB glProgramEnvParameter4dARB;

typedef void (*mogl_function_glProgramEnvParameter4dvARB)(GLenum target, GLuint index, GLdouble *params);
mogl_function_glProgramEnvParameter4dvARB glProgramEnvParameter4dvARB;

typedef void (*mogl_function_glProgramEnvParameter4fARB)(GLenum target, GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
mogl_function_glProgramEnvParameter4fARB glProgramEnvParameter4fARB;

typedef void (*mogl_function_glProgramEnvParameter4fvARB)(GLenum target, GLuint index, GLfloat *params);
mogl_function_glProgramEnvParameter4fvARB glProgramEnvParameter4fvARB;

typedef void (*mogl_function_glProgramLocalParameter4dARB)(GLenum target, GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
mogl_function_glProgramLocalParameter4dARB glProgramLocalParameter4dARB;

typedef void (*mogl_function_glProgramLocalParameter4dvARB)(GLenum target, GLuint index, GLdouble *params);
mogl_function_glProgramLocalParameter4dvARB glProgramLocalParameter4dvARB;

typedef void (*mogl_function_glProgramLocalParameter4fARB)(GLenum target, GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
mogl_function_glProgramLocalParameter4fARB glProgramLocalParameter4fARB;

typedef void (*mogl_function_glProgramLocalParameter4fvARB)(GLenum target, GLuint index, GLfloat *params);
mogl_function_glProgramLocalParameter4fvARB glProgramLocalParameter4fvARB;

typedef void (*mogl_function_glGetProgramEnvParameterdvARB)(GLenum target, GLuint index, GLdouble *params);
mogl_function_glGetProgramEnvParameterdvARB glGetProgramEnvParameterdvARB;

typedef void (*mogl_function_glGetProgramEnvParameterfvARB)(GLenum target, GLuint index, GLfloat *params);
mogl_function_glGetProgramEnvParameterfvARB glGetProgramEnvParameterfvARB;

typedef void (*mogl_function_glGetProgramLocalParameterdvARB)(GLenum target, GLuint index, GLdouble *params);
mogl_function_glGetProgramLocalParameterdvARB glGetProgramLocalParameterdvARB;

typedef void (*mogl_function_glGetProgramLocalParameterfvARB)(GLenum target, GLuint index, GLfloat *params);
mogl_function_glGetProgramLocalParameterfvARB glGetProgramLocalParameterfvARB;

typedef void (*mogl_function_glGetProgramivARB)(GLenum target, GLenum pname, GLint *params);
mogl_function_glGetProgramivARB glGetProgramivARB;

typedef void (*mogl_function_glGetProgramStringARB)(GLenum target, GLenum pname, void * string);
mogl_function_glGetProgramStringARB glGetProgramStringARB;

typedef GLboolean  (*mogl_function_glIsProgramARB)(GLuint program);
mogl_function_glIsProgramARB glIsProgramARB;
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

typedef void (*mogl_function_glProgramParameteriARB)(GLuint program, GLenum pname, GLint value);
mogl_function_glProgramParameteriARB glProgramParameteriARB;

typedef void (*mogl_function_glFramebufferTextureARB)(GLenum target, GLenum attachment, GLuint texture, GLint level);
mogl_function_glFramebufferTextureARB glFramebufferTextureARB;

typedef void (*mogl_function_glFramebufferTextureLayerARB)(GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer);
mogl_function_glFramebufferTextureLayerARB glFramebufferTextureLayerARB;

typedef void (*mogl_function_glFramebufferTextureFaceARB)(GLenum target, GLenum attachment, GLuint texture, GLint level, GLenum face);
mogl_function_glFramebufferTextureFaceARB glFramebufferTextureFaceARB;
#define GL_ARB_get_program_binary 1
#define GL_ARB_get_texture_sub_image 1
#define GL_ARB_gl_spirv 1
#define GL_SHADER_BINARY_FORMAT_SPIR_V_ARB 0x9551
#define GL_SPIR_V_BINARY_ARB 0x9552

typedef void (*mogl_function_glSpecializeShaderARB)(GLuint shader, GLchar *pEntryPoint, GLuint numSpecializationConstants, GLuint *pConstantIndex, GLuint *pConstantValue);
mogl_function_glSpecializeShaderARB glSpecializeShaderARB;
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

typedef void (*mogl_function_glUniform1i64ARB)(GLint location, GLint64 x);
mogl_function_glUniform1i64ARB glUniform1i64ARB;

typedef void (*mogl_function_glUniform2i64ARB)(GLint location, GLint64 x, GLint64 y);
mogl_function_glUniform2i64ARB glUniform2i64ARB;

typedef void (*mogl_function_glUniform3i64ARB)(GLint location, GLint64 x, GLint64 y, GLint64 z);
mogl_function_glUniform3i64ARB glUniform3i64ARB;

typedef void (*mogl_function_glUniform4i64ARB)(GLint location, GLint64 x, GLint64 y, GLint64 z, GLint64 w);
mogl_function_glUniform4i64ARB glUniform4i64ARB;

typedef void (*mogl_function_glUniform1i64vARB)(GLint location, GLsizei count, GLint64 *value);
mogl_function_glUniform1i64vARB glUniform1i64vARB;

typedef void (*mogl_function_glUniform2i64vARB)(GLint location, GLsizei count, GLint64 *value);
mogl_function_glUniform2i64vARB glUniform2i64vARB;

typedef void (*mogl_function_glUniform3i64vARB)(GLint location, GLsizei count, GLint64 *value);
mogl_function_glUniform3i64vARB glUniform3i64vARB;

typedef void (*mogl_function_glUniform4i64vARB)(GLint location, GLsizei count, GLint64 *value);
mogl_function_glUniform4i64vARB glUniform4i64vARB;

typedef void (*mogl_function_glUniform1ui64ARB)(GLint location, GLuint64 x);
mogl_function_glUniform1ui64ARB glUniform1ui64ARB;

typedef void (*mogl_function_glUniform2ui64ARB)(GLint location, GLuint64 x, GLuint64 y);
mogl_function_glUniform2ui64ARB glUniform2ui64ARB;

typedef void (*mogl_function_glUniform3ui64ARB)(GLint location, GLuint64 x, GLuint64 y, GLuint64 z);
mogl_function_glUniform3ui64ARB glUniform3ui64ARB;

typedef void (*mogl_function_glUniform4ui64ARB)(GLint location, GLuint64 x, GLuint64 y, GLuint64 z, GLuint64 w);
mogl_function_glUniform4ui64ARB glUniform4ui64ARB;

typedef void (*mogl_function_glUniform1ui64vARB)(GLint location, GLsizei count, GLuint64 *value);
mogl_function_glUniform1ui64vARB glUniform1ui64vARB;

typedef void (*mogl_function_glUniform2ui64vARB)(GLint location, GLsizei count, GLuint64 *value);
mogl_function_glUniform2ui64vARB glUniform2ui64vARB;

typedef void (*mogl_function_glUniform3ui64vARB)(GLint location, GLsizei count, GLuint64 *value);
mogl_function_glUniform3ui64vARB glUniform3ui64vARB;

typedef void (*mogl_function_glUniform4ui64vARB)(GLint location, GLsizei count, GLuint64 *value);
mogl_function_glUniform4ui64vARB glUniform4ui64vARB;

typedef void (*mogl_function_glGetUniformi64vARB)(GLuint program, GLint location, GLint64 *params);
mogl_function_glGetUniformi64vARB glGetUniformi64vARB;

typedef void (*mogl_function_glGetUniformui64vARB)(GLuint program, GLint location, GLuint64 *params);
mogl_function_glGetUniformui64vARB glGetUniformui64vARB;

typedef void (*mogl_function_glGetnUniformi64vARB)(GLuint program, GLint location, GLsizei bufSize, GLint64 *params);
mogl_function_glGetnUniformi64vARB glGetnUniformi64vARB;

typedef void (*mogl_function_glGetnUniformui64vARB)(GLuint program, GLint location, GLsizei bufSize, GLuint64 *params);
mogl_function_glGetnUniformui64vARB glGetnUniformui64vARB;

typedef void (*mogl_function_glProgramUniform1i64ARB)(GLuint program, GLint location, GLint64 x);
mogl_function_glProgramUniform1i64ARB glProgramUniform1i64ARB;

typedef void (*mogl_function_glProgramUniform2i64ARB)(GLuint program, GLint location, GLint64 x, GLint64 y);
mogl_function_glProgramUniform2i64ARB glProgramUniform2i64ARB;

typedef void (*mogl_function_glProgramUniform3i64ARB)(GLuint program, GLint location, GLint64 x, GLint64 y, GLint64 z);
mogl_function_glProgramUniform3i64ARB glProgramUniform3i64ARB;

typedef void (*mogl_function_glProgramUniform4i64ARB)(GLuint program, GLint location, GLint64 x, GLint64 y, GLint64 z, GLint64 w);
mogl_function_glProgramUniform4i64ARB glProgramUniform4i64ARB;

typedef void (*mogl_function_glProgramUniform1i64vARB)(GLuint program, GLint location, GLsizei count, GLint64 *value);
mogl_function_glProgramUniform1i64vARB glProgramUniform1i64vARB;

typedef void (*mogl_function_glProgramUniform2i64vARB)(GLuint program, GLint location, GLsizei count, GLint64 *value);
mogl_function_glProgramUniform2i64vARB glProgramUniform2i64vARB;

typedef void (*mogl_function_glProgramUniform3i64vARB)(GLuint program, GLint location, GLsizei count, GLint64 *value);
mogl_function_glProgramUniform3i64vARB glProgramUniform3i64vARB;

typedef void (*mogl_function_glProgramUniform4i64vARB)(GLuint program, GLint location, GLsizei count, GLint64 *value);
mogl_function_glProgramUniform4i64vARB glProgramUniform4i64vARB;

typedef void (*mogl_function_glProgramUniform1ui64ARB)(GLuint program, GLint location, GLuint64 x);
mogl_function_glProgramUniform1ui64ARB glProgramUniform1ui64ARB;

typedef void (*mogl_function_glProgramUniform2ui64ARB)(GLuint program, GLint location, GLuint64 x, GLuint64 y);
mogl_function_glProgramUniform2ui64ARB glProgramUniform2ui64ARB;

typedef void (*mogl_function_glProgramUniform3ui64ARB)(GLuint program, GLint location, GLuint64 x, GLuint64 y, GLuint64 z);
mogl_function_glProgramUniform3ui64ARB glProgramUniform3ui64ARB;

typedef void (*mogl_function_glProgramUniform4ui64ARB)(GLuint program, GLint location, GLuint64 x, GLuint64 y, GLuint64 z, GLuint64 w);
mogl_function_glProgramUniform4ui64ARB glProgramUniform4ui64ARB;

typedef void (*mogl_function_glProgramUniform1ui64vARB)(GLuint program, GLint location, GLsizei count, GLuint64 *value);
mogl_function_glProgramUniform1ui64vARB glProgramUniform1ui64vARB;

typedef void (*mogl_function_glProgramUniform2ui64vARB)(GLuint program, GLint location, GLsizei count, GLuint64 *value);
mogl_function_glProgramUniform2ui64vARB glProgramUniform2ui64vARB;

typedef void (*mogl_function_glProgramUniform3ui64vARB)(GLuint program, GLint location, GLsizei count, GLuint64 *value);
mogl_function_glProgramUniform3ui64vARB glProgramUniform3ui64vARB;

typedef void (*mogl_function_glProgramUniform4ui64vARB)(GLuint program, GLint location, GLsizei count, GLuint64 *value);
mogl_function_glProgramUniform4ui64vARB glProgramUniform4ui64vARB;
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

typedef void (*mogl_function_glColorTable)(GLenum target, GLenum internalformat, GLsizei width, GLenum format, GLenum type, void * table);
mogl_function_glColorTable glColorTable;

typedef void (*mogl_function_glColorTableParameterfv)(GLenum target, GLenum pname, GLfloat *params);
mogl_function_glColorTableParameterfv glColorTableParameterfv;

typedef void (*mogl_function_glColorTableParameteriv)(GLenum target, GLenum pname, GLint *params);
mogl_function_glColorTableParameteriv glColorTableParameteriv;

typedef void (*mogl_function_glCopyColorTable)(GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width);
mogl_function_glCopyColorTable glCopyColorTable;

typedef void (*mogl_function_glGetColorTable)(GLenum target, GLenum format, GLenum type, void * table);
mogl_function_glGetColorTable glGetColorTable;

typedef void (*mogl_function_glGetColorTableParameterfv)(GLenum target, GLenum pname, GLfloat *params);
mogl_function_glGetColorTableParameterfv glGetColorTableParameterfv;

typedef void (*mogl_function_glGetColorTableParameteriv)(GLenum target, GLenum pname, GLint *params);
mogl_function_glGetColorTableParameteriv glGetColorTableParameteriv;

typedef void (*mogl_function_glColorSubTable)(GLenum target, GLsizei start, GLsizei count, GLenum format, GLenum type, void * data);
mogl_function_glColorSubTable glColorSubTable;

typedef void (*mogl_function_glCopyColorSubTable)(GLenum target, GLsizei start, GLint x, GLint y, GLsizei width);
mogl_function_glCopyColorSubTable glCopyColorSubTable;

typedef void (*mogl_function_glConvolutionFilter1D)(GLenum target, GLenum internalformat, GLsizei width, GLenum format, GLenum type, void * image);
mogl_function_glConvolutionFilter1D glConvolutionFilter1D;

typedef void (*mogl_function_glConvolutionFilter2D)(GLenum target, GLenum internalformat, GLsizei width, GLsizei height, GLenum format, GLenum type, void * image);
mogl_function_glConvolutionFilter2D glConvolutionFilter2D;

typedef void (*mogl_function_glConvolutionParameterf)(GLenum target, GLenum pname, GLfloat params);
mogl_function_glConvolutionParameterf glConvolutionParameterf;

typedef void (*mogl_function_glConvolutionParameterfv)(GLenum target, GLenum pname, GLfloat *params);
mogl_function_glConvolutionParameterfv glConvolutionParameterfv;

typedef void (*mogl_function_glConvolutionParameteri)(GLenum target, GLenum pname, GLint params);
mogl_function_glConvolutionParameteri glConvolutionParameteri;

typedef void (*mogl_function_glConvolutionParameteriv)(GLenum target, GLenum pname, GLint *params);
mogl_function_glConvolutionParameteriv glConvolutionParameteriv;

typedef void (*mogl_function_glCopyConvolutionFilter1D)(GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width);
mogl_function_glCopyConvolutionFilter1D glCopyConvolutionFilter1D;

typedef void (*mogl_function_glCopyConvolutionFilter2D)(GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height);
mogl_function_glCopyConvolutionFilter2D glCopyConvolutionFilter2D;

typedef void (*mogl_function_glGetConvolutionFilter)(GLenum target, GLenum format, GLenum type, void * image);
mogl_function_glGetConvolutionFilter glGetConvolutionFilter;

typedef void (*mogl_function_glGetConvolutionParameterfv)(GLenum target, GLenum pname, GLfloat *params);
mogl_function_glGetConvolutionParameterfv glGetConvolutionParameterfv;

typedef void (*mogl_function_glGetConvolutionParameteriv)(GLenum target, GLenum pname, GLint *params);
mogl_function_glGetConvolutionParameteriv glGetConvolutionParameteriv;

typedef void (*mogl_function_glGetSeparableFilter)(GLenum target, GLenum format, GLenum type, void * row, void * column, void * span);
mogl_function_glGetSeparableFilter glGetSeparableFilter;

typedef void (*mogl_function_glSeparableFilter2D)(GLenum target, GLenum internalformat, GLsizei width, GLsizei height, GLenum format, GLenum type, void * row, void * column);
mogl_function_glSeparableFilter2D glSeparableFilter2D;

typedef void (*mogl_function_glGetHistogram)(GLenum target, GLboolean reset, GLenum format, GLenum type, void * values);
mogl_function_glGetHistogram glGetHistogram;

typedef void (*mogl_function_glGetHistogramParameterfv)(GLenum target, GLenum pname, GLfloat *params);
mogl_function_glGetHistogramParameterfv glGetHistogramParameterfv;

typedef void (*mogl_function_glGetHistogramParameteriv)(GLenum target, GLenum pname, GLint *params);
mogl_function_glGetHistogramParameteriv glGetHistogramParameteriv;

typedef void (*mogl_function_glGetMinmax)(GLenum target, GLboolean reset, GLenum format, GLenum type, void * values);
mogl_function_glGetMinmax glGetMinmax;

typedef void (*mogl_function_glGetMinmaxParameterfv)(GLenum target, GLenum pname, GLfloat *params);
mogl_function_glGetMinmaxParameterfv glGetMinmaxParameterfv;

typedef void (*mogl_function_glGetMinmaxParameteriv)(GLenum target, GLenum pname, GLint *params);
mogl_function_glGetMinmaxParameteriv glGetMinmaxParameteriv;

typedef void (*mogl_function_glHistogram)(GLenum target, GLsizei width, GLenum internalformat, GLboolean sink);
mogl_function_glHistogram glHistogram;

typedef void (*mogl_function_glMinmax)(GLenum target, GLenum internalformat, GLboolean sink);
mogl_function_glMinmax glMinmax;

typedef void (*mogl_function_glResetHistogram)(GLenum target);
mogl_function_glResetHistogram glResetHistogram;

typedef void (*mogl_function_glResetMinmax)(GLenum target);
mogl_function_glResetMinmax glResetMinmax;
#define GL_ARB_indirect_parameters 1
#define GL_PARAMETER_BUFFER_ARB 0x80EE
#define GL_PARAMETER_BUFFER_BINDING_ARB 0x80EF

typedef void (*mogl_function_glMultiDrawArraysIndirectCountARB)(GLenum mode, void * indirect, GLintptr drawcount, GLsizei maxdrawcount, GLsizei stride);
mogl_function_glMultiDrawArraysIndirectCountARB glMultiDrawArraysIndirectCountARB;

typedef void (*mogl_function_glMultiDrawElementsIndirectCountARB)(GLenum mode, GLenum type, void * indirect, GLintptr drawcount, GLsizei maxdrawcount, GLsizei stride);
mogl_function_glMultiDrawElementsIndirectCountARB glMultiDrawElementsIndirectCountARB;
#define GL_ARB_instanced_arrays 1
#define GL_VERTEX_ATTRIB_ARRAY_DIVISOR_ARB 0x88FE

typedef void (*mogl_function_glVertexAttribDivisorARB)(GLuint index, GLuint divisor);
mogl_function_glVertexAttribDivisorARB glVertexAttribDivisorARB;
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

typedef void (*mogl_function_glCurrentPaletteMatrixARB)(GLint index);
mogl_function_glCurrentPaletteMatrixARB glCurrentPaletteMatrixARB;

typedef void (*mogl_function_glMatrixIndexubvARB)(GLint size, GLubyte *indices);
mogl_function_glMatrixIndexubvARB glMatrixIndexubvARB;

typedef void (*mogl_function_glMatrixIndexusvARB)(GLint size, GLushort *indices);
mogl_function_glMatrixIndexusvARB glMatrixIndexusvARB;

typedef void (*mogl_function_glMatrixIndexuivARB)(GLint size, GLuint *indices);
mogl_function_glMatrixIndexuivARB glMatrixIndexuivARB;

typedef void (*mogl_function_glMatrixIndexPointerARB)(GLint size, GLenum type, GLsizei stride, void * pointer);
mogl_function_glMatrixIndexPointerARB glMatrixIndexPointerARB;
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

typedef void (*mogl_function_glSampleCoverageARB)(GLfloat value, GLboolean invert);
mogl_function_glSampleCoverageARB glSampleCoverageARB;
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

typedef void (*mogl_function_glActiveTextureARB)(GLenum texture);
mogl_function_glActiveTextureARB glActiveTextureARB;

typedef void (*mogl_function_glClientActiveTextureARB)(GLenum texture);
mogl_function_glClientActiveTextureARB glClientActiveTextureARB;

typedef void (*mogl_function_glMultiTexCoord1dARB)(GLenum target, GLdouble s);
mogl_function_glMultiTexCoord1dARB glMultiTexCoord1dARB;

typedef void (*mogl_function_glMultiTexCoord1dvARB)(GLenum target, GLdouble *v);
mogl_function_glMultiTexCoord1dvARB glMultiTexCoord1dvARB;

typedef void (*mogl_function_glMultiTexCoord1fARB)(GLenum target, GLfloat s);
mogl_function_glMultiTexCoord1fARB glMultiTexCoord1fARB;

typedef void (*mogl_function_glMultiTexCoord1fvARB)(GLenum target, GLfloat *v);
mogl_function_glMultiTexCoord1fvARB glMultiTexCoord1fvARB;

typedef void (*mogl_function_glMultiTexCoord1iARB)(GLenum target, GLint s);
mogl_function_glMultiTexCoord1iARB glMultiTexCoord1iARB;

typedef void (*mogl_function_glMultiTexCoord1ivARB)(GLenum target, GLint *v);
mogl_function_glMultiTexCoord1ivARB glMultiTexCoord1ivARB;

typedef void (*mogl_function_glMultiTexCoord1sARB)(GLenum target, GLshort s);
mogl_function_glMultiTexCoord1sARB glMultiTexCoord1sARB;

typedef void (*mogl_function_glMultiTexCoord1svARB)(GLenum target, GLshort *v);
mogl_function_glMultiTexCoord1svARB glMultiTexCoord1svARB;

typedef void (*mogl_function_glMultiTexCoord2dARB)(GLenum target, GLdouble s, GLdouble t);
mogl_function_glMultiTexCoord2dARB glMultiTexCoord2dARB;

typedef void (*mogl_function_glMultiTexCoord2dvARB)(GLenum target, GLdouble *v);
mogl_function_glMultiTexCoord2dvARB glMultiTexCoord2dvARB;

typedef void (*mogl_function_glMultiTexCoord2fARB)(GLenum target, GLfloat s, GLfloat t);
mogl_function_glMultiTexCoord2fARB glMultiTexCoord2fARB;

typedef void (*mogl_function_glMultiTexCoord2fvARB)(GLenum target, GLfloat *v);
mogl_function_glMultiTexCoord2fvARB glMultiTexCoord2fvARB;

typedef void (*mogl_function_glMultiTexCoord2iARB)(GLenum target, GLint s, GLint t);
mogl_function_glMultiTexCoord2iARB glMultiTexCoord2iARB;

typedef void (*mogl_function_glMultiTexCoord2ivARB)(GLenum target, GLint *v);
mogl_function_glMultiTexCoord2ivARB glMultiTexCoord2ivARB;

typedef void (*mogl_function_glMultiTexCoord2sARB)(GLenum target, GLshort s, GLshort t);
mogl_function_glMultiTexCoord2sARB glMultiTexCoord2sARB;

typedef void (*mogl_function_glMultiTexCoord2svARB)(GLenum target, GLshort *v);
mogl_function_glMultiTexCoord2svARB glMultiTexCoord2svARB;

typedef void (*mogl_function_glMultiTexCoord3dARB)(GLenum target, GLdouble s, GLdouble t, GLdouble r);
mogl_function_glMultiTexCoord3dARB glMultiTexCoord3dARB;

typedef void (*mogl_function_glMultiTexCoord3dvARB)(GLenum target, GLdouble *v);
mogl_function_glMultiTexCoord3dvARB glMultiTexCoord3dvARB;

typedef void (*mogl_function_glMultiTexCoord3fARB)(GLenum target, GLfloat s, GLfloat t, GLfloat r);
mogl_function_glMultiTexCoord3fARB glMultiTexCoord3fARB;

typedef void (*mogl_function_glMultiTexCoord3fvARB)(GLenum target, GLfloat *v);
mogl_function_glMultiTexCoord3fvARB glMultiTexCoord3fvARB;

typedef void (*mogl_function_glMultiTexCoord3iARB)(GLenum target, GLint s, GLint t, GLint r);
mogl_function_glMultiTexCoord3iARB glMultiTexCoord3iARB;

typedef void (*mogl_function_glMultiTexCoord3ivARB)(GLenum target, GLint *v);
mogl_function_glMultiTexCoord3ivARB glMultiTexCoord3ivARB;

typedef void (*mogl_function_glMultiTexCoord3sARB)(GLenum target, GLshort s, GLshort t, GLshort r);
mogl_function_glMultiTexCoord3sARB glMultiTexCoord3sARB;

typedef void (*mogl_function_glMultiTexCoord3svARB)(GLenum target, GLshort *v);
mogl_function_glMultiTexCoord3svARB glMultiTexCoord3svARB;

typedef void (*mogl_function_glMultiTexCoord4dARB)(GLenum target, GLdouble s, GLdouble t, GLdouble r, GLdouble q);
mogl_function_glMultiTexCoord4dARB glMultiTexCoord4dARB;

typedef void (*mogl_function_glMultiTexCoord4dvARB)(GLenum target, GLdouble *v);
mogl_function_glMultiTexCoord4dvARB glMultiTexCoord4dvARB;

typedef void (*mogl_function_glMultiTexCoord4fARB)(GLenum target, GLfloat s, GLfloat t, GLfloat r, GLfloat q);
mogl_function_glMultiTexCoord4fARB glMultiTexCoord4fARB;

typedef void (*mogl_function_glMultiTexCoord4fvARB)(GLenum target, GLfloat *v);
mogl_function_glMultiTexCoord4fvARB glMultiTexCoord4fvARB;

typedef void (*mogl_function_glMultiTexCoord4iARB)(GLenum target, GLint s, GLint t, GLint r, GLint q);
mogl_function_glMultiTexCoord4iARB glMultiTexCoord4iARB;

typedef void (*mogl_function_glMultiTexCoord4ivARB)(GLenum target, GLint *v);
mogl_function_glMultiTexCoord4ivARB glMultiTexCoord4ivARB;

typedef void (*mogl_function_glMultiTexCoord4sARB)(GLenum target, GLshort s, GLshort t, GLshort r, GLshort q);
mogl_function_glMultiTexCoord4sARB glMultiTexCoord4sARB;

typedef void (*mogl_function_glMultiTexCoord4svARB)(GLenum target, GLshort *v);
mogl_function_glMultiTexCoord4svARB glMultiTexCoord4svARB;
#define GL_ARB_occlusion_query 1
#define GL_QUERY_COUNTER_BITS_ARB 0x8864
#define GL_CURRENT_QUERY_ARB 0x8865
#define GL_QUERY_RESULT_ARB 0x8866
#define GL_QUERY_RESULT_AVAILABLE_ARB 0x8867
#define GL_SAMPLES_PASSED_ARB 0x8914

typedef void (*mogl_function_glGenQueriesARB)(GLsizei n, GLuint *ids);
mogl_function_glGenQueriesARB glGenQueriesARB;

typedef void (*mogl_function_glDeleteQueriesARB)(GLsizei n, GLuint *ids);
mogl_function_glDeleteQueriesARB glDeleteQueriesARB;

typedef GLboolean  (*mogl_function_glIsQueryARB)(GLuint id);
mogl_function_glIsQueryARB glIsQueryARB;

typedef void (*mogl_function_glBeginQueryARB)(GLenum target, GLuint id);
mogl_function_glBeginQueryARB glBeginQueryARB;

typedef void (*mogl_function_glEndQueryARB)(GLenum target);
mogl_function_glEndQueryARB glEndQueryARB;

typedef void (*mogl_function_glGetQueryivARB)(GLenum target, GLenum pname, GLint *params);
mogl_function_glGetQueryivARB glGetQueryivARB;

typedef void (*mogl_function_glGetQueryObjectivARB)(GLuint id, GLenum pname, GLint *params);
mogl_function_glGetQueryObjectivARB glGetQueryObjectivARB;

typedef void (*mogl_function_glGetQueryObjectuivARB)(GLuint id, GLenum pname, GLuint *params);
mogl_function_glGetQueryObjectuivARB glGetQueryObjectuivARB;
#define GL_ARB_occlusion_query2 1
#define GL_ARB_parallel_shader_compile 1
#define GL_MAX_SHADER_COMPILER_THREADS_ARB 0x91B0
#define GL_COMPLETION_STATUS_ARB 0x91B1

typedef void (*mogl_function_glMaxShaderCompilerThreadsARB)(GLuint count);
mogl_function_glMaxShaderCompilerThreadsARB glMaxShaderCompilerThreadsARB;
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

typedef void (*mogl_function_glPointParameterfARB)(GLenum pname, GLfloat param);
mogl_function_glPointParameterfARB glPointParameterfARB;

typedef void (*mogl_function_glPointParameterfvARB)(GLenum pname, GLfloat *params);
mogl_function_glPointParameterfvARB glPointParameterfvARB;
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

typedef GLenum  (*mogl_function_glGetGraphicsResetStatusARB)();
mogl_function_glGetGraphicsResetStatusARB glGetGraphicsResetStatusARB;

typedef void (*mogl_function_glGetnTexImageARB)(GLenum target, GLint level, GLenum format, GLenum type, GLsizei bufSize, void * img);
mogl_function_glGetnTexImageARB glGetnTexImageARB;

typedef void (*mogl_function_glReadnPixelsARB)(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLsizei bufSize, void * data);
mogl_function_glReadnPixelsARB glReadnPixelsARB;

typedef void (*mogl_function_glGetnCompressedTexImageARB)(GLenum target, GLint lod, GLsizei bufSize, void * img);
mogl_function_glGetnCompressedTexImageARB glGetnCompressedTexImageARB;

typedef void (*mogl_function_glGetnUniformfvARB)(GLuint program, GLint location, GLsizei bufSize, GLfloat *params);
mogl_function_glGetnUniformfvARB glGetnUniformfvARB;

typedef void (*mogl_function_glGetnUniformivARB)(GLuint program, GLint location, GLsizei bufSize, GLint *params);
mogl_function_glGetnUniformivARB glGetnUniformivARB;

typedef void (*mogl_function_glGetnUniformuivARB)(GLuint program, GLint location, GLsizei bufSize, GLuint *params);
mogl_function_glGetnUniformuivARB glGetnUniformuivARB;

typedef void (*mogl_function_glGetnUniformdvARB)(GLuint program, GLint location, GLsizei bufSize, GLdouble *params);
mogl_function_glGetnUniformdvARB glGetnUniformdvARB;

typedef void (*mogl_function_glGetnMapdvARB)(GLenum target, GLenum query, GLsizei bufSize, GLdouble *v);
mogl_function_glGetnMapdvARB glGetnMapdvARB;

typedef void (*mogl_function_glGetnMapfvARB)(GLenum target, GLenum query, GLsizei bufSize, GLfloat *v);
mogl_function_glGetnMapfvARB glGetnMapfvARB;

typedef void (*mogl_function_glGetnMapivARB)(GLenum target, GLenum query, GLsizei bufSize, GLint *v);
mogl_function_glGetnMapivARB glGetnMapivARB;

typedef void (*mogl_function_glGetnPixelMapfvARB)(GLenum map, GLsizei bufSize, GLfloat *values);
mogl_function_glGetnPixelMapfvARB glGetnPixelMapfvARB;

typedef void (*mogl_function_glGetnPixelMapuivARB)(GLenum map, GLsizei bufSize, GLuint *values);
mogl_function_glGetnPixelMapuivARB glGetnPixelMapuivARB;

typedef void (*mogl_function_glGetnPixelMapusvARB)(GLenum map, GLsizei bufSize, GLushort *values);
mogl_function_glGetnPixelMapusvARB glGetnPixelMapusvARB;

typedef void (*mogl_function_glGetnPolygonStippleARB)(GLsizei bufSize, GLubyte *pattern);
mogl_function_glGetnPolygonStippleARB glGetnPolygonStippleARB;

typedef void (*mogl_function_glGetnColorTableARB)(GLenum target, GLenum format, GLenum type, GLsizei bufSize, void * table);
mogl_function_glGetnColorTableARB glGetnColorTableARB;

typedef void (*mogl_function_glGetnConvolutionFilterARB)(GLenum target, GLenum format, GLenum type, GLsizei bufSize, void * image);
mogl_function_glGetnConvolutionFilterARB glGetnConvolutionFilterARB;

typedef void (*mogl_function_glGetnSeparableFilterARB)(GLenum target, GLenum format, GLenum type, GLsizei rowBufSize, void * row, GLsizei columnBufSize, void * column, void * span);
mogl_function_glGetnSeparableFilterARB glGetnSeparableFilterARB;

typedef void (*mogl_function_glGetnHistogramARB)(GLenum target, GLboolean reset, GLenum format, GLenum type, GLsizei bufSize, void * values);
mogl_function_glGetnHistogramARB glGetnHistogramARB;

typedef void (*mogl_function_glGetnMinmaxARB)(GLenum target, GLboolean reset, GLenum format, GLenum type, GLsizei bufSize, void * values);
mogl_function_glGetnMinmaxARB glGetnMinmaxARB;
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

typedef void (*mogl_function_glFramebufferSampleLocationsfvARB)(GLenum target, GLuint start, GLsizei count, GLfloat *v);
mogl_function_glFramebufferSampleLocationsfvARB glFramebufferSampleLocationsfvARB;

typedef void (*mogl_function_glNamedFramebufferSampleLocationsfvARB)(GLuint framebuffer, GLuint start, GLsizei count, GLfloat *v);
mogl_function_glNamedFramebufferSampleLocationsfvARB glNamedFramebufferSampleLocationsfvARB;

typedef void (*mogl_function_glEvaluateDepthValuesARB)();
mogl_function_glEvaluateDepthValuesARB glEvaluateDepthValuesARB;
#define GL_ARB_sample_shading 1
#define GL_SAMPLE_SHADING_ARB 0x8C36
#define GL_MIN_SAMPLE_SHADING_VALUE_ARB 0x8C37

typedef void (*mogl_function_glMinSampleShadingARB)(GLfloat value);
mogl_function_glMinSampleShadingARB glMinSampleShadingARB;
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

typedef void (*mogl_function_glDeleteObjectARB)(GLhandleARB obj);
mogl_function_glDeleteObjectARB glDeleteObjectARB;

typedef GLhandleARB  (*mogl_function_glGetHandleARB)(GLenum pname);
mogl_function_glGetHandleARB glGetHandleARB;

typedef void (*mogl_function_glDetachObjectARB)(GLhandleARB containerObj, GLhandleARB attachedObj);
mogl_function_glDetachObjectARB glDetachObjectARB;

typedef GLhandleARB  (*mogl_function_glCreateShaderObjectARB)(GLenum shaderType);
mogl_function_glCreateShaderObjectARB glCreateShaderObjectARB;

typedef void (*mogl_function_glShaderSourceARB)(GLhandleARB shaderObj, GLsizei count, GLcharARB **string, GLint *length);
mogl_function_glShaderSourceARB glShaderSourceARB;

typedef void (*mogl_function_glCompileShaderARB)(GLhandleARB shaderObj);
mogl_function_glCompileShaderARB glCompileShaderARB;

typedef GLhandleARB  (*mogl_function_glCreateProgramObjectARB)();
mogl_function_glCreateProgramObjectARB glCreateProgramObjectARB;

typedef void (*mogl_function_glAttachObjectARB)(GLhandleARB containerObj, GLhandleARB obj);
mogl_function_glAttachObjectARB glAttachObjectARB;

typedef void (*mogl_function_glLinkProgramARB)(GLhandleARB programObj);
mogl_function_glLinkProgramARB glLinkProgramARB;

typedef void (*mogl_function_glUseProgramObjectARB)(GLhandleARB programObj);
mogl_function_glUseProgramObjectARB glUseProgramObjectARB;

typedef void (*mogl_function_glValidateProgramARB)(GLhandleARB programObj);
mogl_function_glValidateProgramARB glValidateProgramARB;

typedef void (*mogl_function_glUniform1fARB)(GLint location, GLfloat v0);
mogl_function_glUniform1fARB glUniform1fARB;

typedef void (*mogl_function_glUniform2fARB)(GLint location, GLfloat v0, GLfloat v1);
mogl_function_glUniform2fARB glUniform2fARB;

typedef void (*mogl_function_glUniform3fARB)(GLint location, GLfloat v0, GLfloat v1, GLfloat v2);
mogl_function_glUniform3fARB glUniform3fARB;

typedef void (*mogl_function_glUniform4fARB)(GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3);
mogl_function_glUniform4fARB glUniform4fARB;

typedef void (*mogl_function_glUniform1iARB)(GLint location, GLint v0);
mogl_function_glUniform1iARB glUniform1iARB;

typedef void (*mogl_function_glUniform2iARB)(GLint location, GLint v0, GLint v1);
mogl_function_glUniform2iARB glUniform2iARB;

typedef void (*mogl_function_glUniform3iARB)(GLint location, GLint v0, GLint v1, GLint v2);
mogl_function_glUniform3iARB glUniform3iARB;

typedef void (*mogl_function_glUniform4iARB)(GLint location, GLint v0, GLint v1, GLint v2, GLint v3);
mogl_function_glUniform4iARB glUniform4iARB;

typedef void (*mogl_function_glUniform1fvARB)(GLint location, GLsizei count, GLfloat *value);
mogl_function_glUniform1fvARB glUniform1fvARB;

typedef void (*mogl_function_glUniform2fvARB)(GLint location, GLsizei count, GLfloat *value);
mogl_function_glUniform2fvARB glUniform2fvARB;

typedef void (*mogl_function_glUniform3fvARB)(GLint location, GLsizei count, GLfloat *value);
mogl_function_glUniform3fvARB glUniform3fvARB;

typedef void (*mogl_function_glUniform4fvARB)(GLint location, GLsizei count, GLfloat *value);
mogl_function_glUniform4fvARB glUniform4fvARB;

typedef void (*mogl_function_glUniform1ivARB)(GLint location, GLsizei count, GLint *value);
mogl_function_glUniform1ivARB glUniform1ivARB;

typedef void (*mogl_function_glUniform2ivARB)(GLint location, GLsizei count, GLint *value);
mogl_function_glUniform2ivARB glUniform2ivARB;

typedef void (*mogl_function_glUniform3ivARB)(GLint location, GLsizei count, GLint *value);
mogl_function_glUniform3ivARB glUniform3ivARB;

typedef void (*mogl_function_glUniform4ivARB)(GLint location, GLsizei count, GLint *value);
mogl_function_glUniform4ivARB glUniform4ivARB;

typedef void (*mogl_function_glUniformMatrix2fvARB)(GLint location, GLsizei count, GLboolean transpose, GLfloat *value);
mogl_function_glUniformMatrix2fvARB glUniformMatrix2fvARB;

typedef void (*mogl_function_glUniformMatrix3fvARB)(GLint location, GLsizei count, GLboolean transpose, GLfloat *value);
mogl_function_glUniformMatrix3fvARB glUniformMatrix3fvARB;

typedef void (*mogl_function_glUniformMatrix4fvARB)(GLint location, GLsizei count, GLboolean transpose, GLfloat *value);
mogl_function_glUniformMatrix4fvARB glUniformMatrix4fvARB;

typedef void (*mogl_function_glGetObjectParameterfvARB)(GLhandleARB obj, GLenum pname, GLfloat *params);
mogl_function_glGetObjectParameterfvARB glGetObjectParameterfvARB;

typedef void (*mogl_function_glGetObjectParameterivARB)(GLhandleARB obj, GLenum pname, GLint *params);
mogl_function_glGetObjectParameterivARB glGetObjectParameterivARB;

typedef void (*mogl_function_glGetInfoLogARB)(GLhandleARB obj, GLsizei maxLength, GLsizei *length, GLcharARB *infoLog);
mogl_function_glGetInfoLogARB glGetInfoLogARB;

typedef void (*mogl_function_glGetAttachedObjectsARB)(GLhandleARB containerObj, GLsizei maxCount, GLsizei *count, GLhandleARB *obj);
mogl_function_glGetAttachedObjectsARB glGetAttachedObjectsARB;

typedef GLint  (*mogl_function_glGetUniformLocationARB)(GLhandleARB programObj, GLcharARB *name);
mogl_function_glGetUniformLocationARB glGetUniformLocationARB;

typedef void (*mogl_function_glGetActiveUniformARB)(GLhandleARB programObj, GLuint index, GLsizei maxLength, GLsizei *length, GLint *size, GLenum *type, GLcharARB *name);
mogl_function_glGetActiveUniformARB glGetActiveUniformARB;

typedef void (*mogl_function_glGetUniformfvARB)(GLhandleARB programObj, GLint location, GLfloat *params);
mogl_function_glGetUniformfvARB glGetUniformfvARB;

typedef void (*mogl_function_glGetUniformivARB)(GLhandleARB programObj, GLint location, GLint *params);
mogl_function_glGetUniformivARB glGetUniformivARB;

typedef void (*mogl_function_glGetShaderSourceARB)(GLhandleARB obj, GLsizei maxLength, GLsizei *length, GLcharARB *source);
mogl_function_glGetShaderSourceARB glGetShaderSourceARB;
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

typedef void (*mogl_function_glNamedStringARB)(GLenum type, GLint namelen, GLchar *name, GLint stringlen, GLchar *string);
mogl_function_glNamedStringARB glNamedStringARB;

typedef void (*mogl_function_glDeleteNamedStringARB)(GLint namelen, GLchar *name);
mogl_function_glDeleteNamedStringARB glDeleteNamedStringARB;

typedef void (*mogl_function_glCompileShaderIncludeARB)(GLuint shader, GLsizei count, GLchar **path, GLint *length);
mogl_function_glCompileShaderIncludeARB glCompileShaderIncludeARB;

typedef GLboolean  (*mogl_function_glIsNamedStringARB)(GLint namelen, GLchar *name);
mogl_function_glIsNamedStringARB glIsNamedStringARB;

typedef void (*mogl_function_glGetNamedStringARB)(GLint namelen, GLchar *name, GLsizei bufSize, GLint *stringlen, GLchar *string);
mogl_function_glGetNamedStringARB glGetNamedStringARB;

typedef void (*mogl_function_glGetNamedStringivARB)(GLint namelen, GLchar *name, GLenum pname, GLint *params);
mogl_function_glGetNamedStringivARB glGetNamedStringivARB;
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

typedef void (*mogl_function_glBufferPageCommitmentARB)(GLenum target, GLintptr offset, GLsizeiptr size, GLboolean commit);
mogl_function_glBufferPageCommitmentARB glBufferPageCommitmentARB;

typedef void (*mogl_function_glNamedBufferPageCommitmentEXT)(GLuint buffer, GLintptr offset, GLsizeiptr size, GLboolean commit);
mogl_function_glNamedBufferPageCommitmentEXT glNamedBufferPageCommitmentEXT;

typedef void (*mogl_function_glNamedBufferPageCommitmentARB)(GLuint buffer, GLintptr offset, GLsizeiptr size, GLboolean commit);
mogl_function_glNamedBufferPageCommitmentARB glNamedBufferPageCommitmentARB;
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

typedef void (*mogl_function_glTexPageCommitmentARB)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLboolean commit);
mogl_function_glTexPageCommitmentARB glTexPageCommitmentARB;
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

typedef void (*mogl_function_glTexBufferARB)(GLenum target, GLenum internalformat, GLuint buffer);
mogl_function_glTexBufferARB glTexBufferARB;
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

typedef void (*mogl_function_glCompressedTexImage3DARB)(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, void * data);
mogl_function_glCompressedTexImage3DARB glCompressedTexImage3DARB;

typedef void (*mogl_function_glCompressedTexImage2DARB)(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, void * data);
mogl_function_glCompressedTexImage2DARB glCompressedTexImage2DARB;

typedef void (*mogl_function_glCompressedTexImage1DARB)(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, void * data);
mogl_function_glCompressedTexImage1DARB glCompressedTexImage1DARB;

typedef void (*mogl_function_glCompressedTexSubImage3DARB)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, void * data);
mogl_function_glCompressedTexSubImage3DARB glCompressedTexSubImage3DARB;

typedef void (*mogl_function_glCompressedTexSubImage2DARB)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, void * data);
mogl_function_glCompressedTexSubImage2DARB glCompressedTexSubImage2DARB;

typedef void (*mogl_function_glCompressedTexSubImage1DARB)(GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, void * data);
mogl_function_glCompressedTexSubImage1DARB glCompressedTexSubImage1DARB;

typedef void (*mogl_function_glGetCompressedTexImageARB)(GLenum target, GLint level, void * img);
mogl_function_glGetCompressedTexImageARB glGetCompressedTexImageARB;
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

typedef void (*mogl_function_glLoadTransposeMatrixfARB)(GLfloat *m);
mogl_function_glLoadTransposeMatrixfARB glLoadTransposeMatrixfARB;

typedef void (*mogl_function_glLoadTransposeMatrixdARB)(GLdouble *m);
mogl_function_glLoadTransposeMatrixdARB glLoadTransposeMatrixdARB;

typedef void (*mogl_function_glMultTransposeMatrixfARB)(GLfloat *m);
mogl_function_glMultTransposeMatrixfARB glMultTransposeMatrixfARB;

typedef void (*mogl_function_glMultTransposeMatrixdARB)(GLdouble *m);
mogl_function_glMultTransposeMatrixdARB glMultTransposeMatrixdARB;
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

typedef void (*mogl_function_glWeightbvARB)(GLint size, GLbyte *weights);
mogl_function_glWeightbvARB glWeightbvARB;

typedef void (*mogl_function_glWeightsvARB)(GLint size, GLshort *weights);
mogl_function_glWeightsvARB glWeightsvARB;

typedef void (*mogl_function_glWeightivARB)(GLint size, GLint *weights);
mogl_function_glWeightivARB glWeightivARB;

typedef void (*mogl_function_glWeightfvARB)(GLint size, GLfloat *weights);
mogl_function_glWeightfvARB glWeightfvARB;

typedef void (*mogl_function_glWeightdvARB)(GLint size, GLdouble *weights);
mogl_function_glWeightdvARB glWeightdvARB;

typedef void (*mogl_function_glWeightubvARB)(GLint size, GLubyte *weights);
mogl_function_glWeightubvARB glWeightubvARB;

typedef void (*mogl_function_glWeightusvARB)(GLint size, GLushort *weights);
mogl_function_glWeightusvARB glWeightusvARB;

typedef void (*mogl_function_glWeightuivARB)(GLint size, GLuint *weights);
mogl_function_glWeightuivARB glWeightuivARB;

typedef void (*mogl_function_glWeightPointerARB)(GLint size, GLenum type, GLsizei stride, void * pointer);
mogl_function_glWeightPointerARB glWeightPointerARB;

typedef void (*mogl_function_glVertexBlendARB)(GLint count);
mogl_function_glVertexBlendARB glVertexBlendARB;
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

typedef void (*mogl_function_glBindBufferARB)(GLenum target, GLuint buffer);
mogl_function_glBindBufferARB glBindBufferARB;

typedef void (*mogl_function_glDeleteBuffersARB)(GLsizei n, GLuint *buffers);
mogl_function_glDeleteBuffersARB glDeleteBuffersARB;

typedef void (*mogl_function_glGenBuffersARB)(GLsizei n, GLuint *buffers);
mogl_function_glGenBuffersARB glGenBuffersARB;

typedef GLboolean  (*mogl_function_glIsBufferARB)(GLuint buffer);
mogl_function_glIsBufferARB glIsBufferARB;

typedef void (*mogl_function_glBufferDataARB)(GLenum target, GLsizeiptrARB size, void * data, GLenum usage);
mogl_function_glBufferDataARB glBufferDataARB;

typedef void (*mogl_function_glBufferSubDataARB)(GLenum target, GLintptrARB offset, GLsizeiptrARB size, void * data);
mogl_function_glBufferSubDataARB glBufferSubDataARB;

typedef void (*mogl_function_glGetBufferSubDataARB)(GLenum target, GLintptrARB offset, GLsizeiptrARB size, void * data);
mogl_function_glGetBufferSubDataARB glGetBufferSubDataARB;

typedef void *  (*mogl_function_glMapBufferARB)(GLenum target, GLenum access);
mogl_function_glMapBufferARB glMapBufferARB;

typedef GLboolean  (*mogl_function_glUnmapBufferARB)(GLenum target);
mogl_function_glUnmapBufferARB glUnmapBufferARB;

typedef void (*mogl_function_glGetBufferParameterivARB)(GLenum target, GLenum pname, GLint *params);
mogl_function_glGetBufferParameterivARB glGetBufferParameterivARB;

typedef void (*mogl_function_glGetBufferPointervARB)(GLenum target, GLenum pname, void * *params);
mogl_function_glGetBufferPointervARB glGetBufferPointervARB;
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

typedef void (*mogl_function_glVertexAttrib1dARB)(GLuint index, GLdouble x);
mogl_function_glVertexAttrib1dARB glVertexAttrib1dARB;

typedef void (*mogl_function_glVertexAttrib1dvARB)(GLuint index, GLdouble *v);
mogl_function_glVertexAttrib1dvARB glVertexAttrib1dvARB;

typedef void (*mogl_function_glVertexAttrib1fARB)(GLuint index, GLfloat x);
mogl_function_glVertexAttrib1fARB glVertexAttrib1fARB;

typedef void (*mogl_function_glVertexAttrib1fvARB)(GLuint index, GLfloat *v);
mogl_function_glVertexAttrib1fvARB glVertexAttrib1fvARB;

typedef void (*mogl_function_glVertexAttrib1sARB)(GLuint index, GLshort x);
mogl_function_glVertexAttrib1sARB glVertexAttrib1sARB;

typedef void (*mogl_function_glVertexAttrib1svARB)(GLuint index, GLshort *v);
mogl_function_glVertexAttrib1svARB glVertexAttrib1svARB;

typedef void (*mogl_function_glVertexAttrib2dARB)(GLuint index, GLdouble x, GLdouble y);
mogl_function_glVertexAttrib2dARB glVertexAttrib2dARB;

typedef void (*mogl_function_glVertexAttrib2dvARB)(GLuint index, GLdouble *v);
mogl_function_glVertexAttrib2dvARB glVertexAttrib2dvARB;

typedef void (*mogl_function_glVertexAttrib2fARB)(GLuint index, GLfloat x, GLfloat y);
mogl_function_glVertexAttrib2fARB glVertexAttrib2fARB;

typedef void (*mogl_function_glVertexAttrib2fvARB)(GLuint index, GLfloat *v);
mogl_function_glVertexAttrib2fvARB glVertexAttrib2fvARB;

typedef void (*mogl_function_glVertexAttrib2sARB)(GLuint index, GLshort x, GLshort y);
mogl_function_glVertexAttrib2sARB glVertexAttrib2sARB;

typedef void (*mogl_function_glVertexAttrib2svARB)(GLuint index, GLshort *v);
mogl_function_glVertexAttrib2svARB glVertexAttrib2svARB;

typedef void (*mogl_function_glVertexAttrib3dARB)(GLuint index, GLdouble x, GLdouble y, GLdouble z);
mogl_function_glVertexAttrib3dARB glVertexAttrib3dARB;

typedef void (*mogl_function_glVertexAttrib3dvARB)(GLuint index, GLdouble *v);
mogl_function_glVertexAttrib3dvARB glVertexAttrib3dvARB;

typedef void (*mogl_function_glVertexAttrib3fARB)(GLuint index, GLfloat x, GLfloat y, GLfloat z);
mogl_function_glVertexAttrib3fARB glVertexAttrib3fARB;

typedef void (*mogl_function_glVertexAttrib3fvARB)(GLuint index, GLfloat *v);
mogl_function_glVertexAttrib3fvARB glVertexAttrib3fvARB;

typedef void (*mogl_function_glVertexAttrib3sARB)(GLuint index, GLshort x, GLshort y, GLshort z);
mogl_function_glVertexAttrib3sARB glVertexAttrib3sARB;

typedef void (*mogl_function_glVertexAttrib3svARB)(GLuint index, GLshort *v);
mogl_function_glVertexAttrib3svARB glVertexAttrib3svARB;

typedef void (*mogl_function_glVertexAttrib4NbvARB)(GLuint index, GLbyte *v);
mogl_function_glVertexAttrib4NbvARB glVertexAttrib4NbvARB;

typedef void (*mogl_function_glVertexAttrib4NivARB)(GLuint index, GLint *v);
mogl_function_glVertexAttrib4NivARB glVertexAttrib4NivARB;

typedef void (*mogl_function_glVertexAttrib4NsvARB)(GLuint index, GLshort *v);
mogl_function_glVertexAttrib4NsvARB glVertexAttrib4NsvARB;

typedef void (*mogl_function_glVertexAttrib4NubARB)(GLuint index, GLubyte x, GLubyte y, GLubyte z, GLubyte w);
mogl_function_glVertexAttrib4NubARB glVertexAttrib4NubARB;

typedef void (*mogl_function_glVertexAttrib4NubvARB)(GLuint index, GLubyte *v);
mogl_function_glVertexAttrib4NubvARB glVertexAttrib4NubvARB;

typedef void (*mogl_function_glVertexAttrib4NuivARB)(GLuint index, GLuint *v);
mogl_function_glVertexAttrib4NuivARB glVertexAttrib4NuivARB;

typedef void (*mogl_function_glVertexAttrib4NusvARB)(GLuint index, GLushort *v);
mogl_function_glVertexAttrib4NusvARB glVertexAttrib4NusvARB;

typedef void (*mogl_function_glVertexAttrib4bvARB)(GLuint index, GLbyte *v);
mogl_function_glVertexAttrib4bvARB glVertexAttrib4bvARB;

typedef void (*mogl_function_glVertexAttrib4dARB)(GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
mogl_function_glVertexAttrib4dARB glVertexAttrib4dARB;

typedef void (*mogl_function_glVertexAttrib4dvARB)(GLuint index, GLdouble *v);
mogl_function_glVertexAttrib4dvARB glVertexAttrib4dvARB;

typedef void (*mogl_function_glVertexAttrib4fARB)(GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
mogl_function_glVertexAttrib4fARB glVertexAttrib4fARB;

typedef void (*mogl_function_glVertexAttrib4fvARB)(GLuint index, GLfloat *v);
mogl_function_glVertexAttrib4fvARB glVertexAttrib4fvARB;

typedef void (*mogl_function_glVertexAttrib4ivARB)(GLuint index, GLint *v);
mogl_function_glVertexAttrib4ivARB glVertexAttrib4ivARB;

typedef void (*mogl_function_glVertexAttrib4sARB)(GLuint index, GLshort x, GLshort y, GLshort z, GLshort w);
mogl_function_glVertexAttrib4sARB glVertexAttrib4sARB;

typedef void (*mogl_function_glVertexAttrib4svARB)(GLuint index, GLshort *v);
mogl_function_glVertexAttrib4svARB glVertexAttrib4svARB;

typedef void (*mogl_function_glVertexAttrib4ubvARB)(GLuint index, GLubyte *v);
mogl_function_glVertexAttrib4ubvARB glVertexAttrib4ubvARB;

typedef void (*mogl_function_glVertexAttrib4uivARB)(GLuint index, GLuint *v);
mogl_function_glVertexAttrib4uivARB glVertexAttrib4uivARB;

typedef void (*mogl_function_glVertexAttrib4usvARB)(GLuint index, GLushort *v);
mogl_function_glVertexAttrib4usvARB glVertexAttrib4usvARB;

typedef void (*mogl_function_glVertexAttribPointerARB)(GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, void * pointer);
mogl_function_glVertexAttribPointerARB glVertexAttribPointerARB;

typedef void (*mogl_function_glEnableVertexAttribArrayARB)(GLuint index);
mogl_function_glEnableVertexAttribArrayARB glEnableVertexAttribArrayARB;

typedef void (*mogl_function_glDisableVertexAttribArrayARB)(GLuint index);
mogl_function_glDisableVertexAttribArrayARB glDisableVertexAttribArrayARB;

typedef void (*mogl_function_glGetVertexAttribdvARB)(GLuint index, GLenum pname, GLdouble *params);
mogl_function_glGetVertexAttribdvARB glGetVertexAttribdvARB;

typedef void (*mogl_function_glGetVertexAttribfvARB)(GLuint index, GLenum pname, GLfloat *params);
mogl_function_glGetVertexAttribfvARB glGetVertexAttribfvARB;

typedef void (*mogl_function_glGetVertexAttribivARB)(GLuint index, GLenum pname, GLint *params);
mogl_function_glGetVertexAttribivARB glGetVertexAttribivARB;

typedef void (*mogl_function_glGetVertexAttribPointervARB)(GLuint index, GLenum pname, void * *pointer);
mogl_function_glGetVertexAttribPointervARB glGetVertexAttribPointervARB;
#define GL_ARB_vertex_shader 1
#define GL_VERTEX_SHADER_ARB 0x8B31
#define GL_MAX_VERTEX_UNIFORM_COMPONENTS_ARB 0x8B4A
#define GL_MAX_VARYING_FLOATS_ARB 0x8B4B
#define GL_MAX_VERTEX_TEXTURE_IMAGE_UNITS_ARB 0x8B4C
#define GL_MAX_COMBINED_TEXTURE_IMAGE_UNITS_ARB 0x8B4D
#define GL_OBJECT_ACTIVE_ATTRIBUTES_ARB 0x8B89
#define GL_OBJECT_ACTIVE_ATTRIBUTE_MAX_LENGTH_ARB 0x8B8A

typedef void (*mogl_function_glBindAttribLocationARB)(GLhandleARB programObj, GLuint index, GLcharARB *name);
mogl_function_glBindAttribLocationARB glBindAttribLocationARB;

typedef void (*mogl_function_glGetActiveAttribARB)(GLhandleARB programObj, GLuint index, GLsizei maxLength, GLsizei *length, GLint *size, GLenum *type, GLcharARB *name);
mogl_function_glGetActiveAttribARB glGetActiveAttribARB;

typedef GLint  (*mogl_function_glGetAttribLocationARB)(GLhandleARB programObj, GLcharARB *name);
mogl_function_glGetAttribLocationARB glGetAttribLocationARB;
#define GL_ARB_vertex_type_10f_11f_11f_rev 1
#define GL_ARB_vertex_type_2_10_10_10_rev 1
#define GL_ARB_viewport_array 1

typedef void (*mogl_function_glDepthRangeArraydvNV)(GLuint first, GLsizei count, GLdouble *v);
mogl_function_glDepthRangeArraydvNV glDepthRangeArraydvNV;

typedef void (*mogl_function_glDepthRangeIndexeddNV)(GLuint index, GLdouble n, GLdouble f);
mogl_function_glDepthRangeIndexeddNV glDepthRangeIndexeddNV;
#define GL_ARB_window_pos 1

typedef void (*mogl_function_glWindowPos2dARB)(GLdouble x, GLdouble y);
mogl_function_glWindowPos2dARB glWindowPos2dARB;

typedef void (*mogl_function_glWindowPos2dvARB)(GLdouble *v);
mogl_function_glWindowPos2dvARB glWindowPos2dvARB;

typedef void (*mogl_function_glWindowPos2fARB)(GLfloat x, GLfloat y);
mogl_function_glWindowPos2fARB glWindowPos2fARB;

typedef void (*mogl_function_glWindowPos2fvARB)(GLfloat *v);
mogl_function_glWindowPos2fvARB glWindowPos2fvARB;

typedef void (*mogl_function_glWindowPos2iARB)(GLint x, GLint y);
mogl_function_glWindowPos2iARB glWindowPos2iARB;

typedef void (*mogl_function_glWindowPos2ivARB)(GLint *v);
mogl_function_glWindowPos2ivARB glWindowPos2ivARB;

typedef void (*mogl_function_glWindowPos2sARB)(GLshort x, GLshort y);
mogl_function_glWindowPos2sARB glWindowPos2sARB;

typedef void (*mogl_function_glWindowPos2svARB)(GLshort *v);
mogl_function_glWindowPos2svARB glWindowPos2svARB;

typedef void (*mogl_function_glWindowPos3dARB)(GLdouble x, GLdouble y, GLdouble z);
mogl_function_glWindowPos3dARB glWindowPos3dARB;

typedef void (*mogl_function_glWindowPos3dvARB)(GLdouble *v);
mogl_function_glWindowPos3dvARB glWindowPos3dvARB;

typedef void (*mogl_function_glWindowPos3fARB)(GLfloat x, GLfloat y, GLfloat z);
mogl_function_glWindowPos3fARB glWindowPos3fARB;

typedef void (*mogl_function_glWindowPos3fvARB)(GLfloat *v);
mogl_function_glWindowPos3fvARB glWindowPos3fvARB;

typedef void (*mogl_function_glWindowPos3iARB)(GLint x, GLint y, GLint z);
mogl_function_glWindowPos3iARB glWindowPos3iARB;

typedef void (*mogl_function_glWindowPos3ivARB)(GLint *v);
mogl_function_glWindowPos3ivARB glWindowPos3ivARB;

typedef void (*mogl_function_glWindowPos3sARB)(GLshort x, GLshort y, GLshort z);
mogl_function_glWindowPos3sARB glWindowPos3sARB;

typedef void (*mogl_function_glWindowPos3svARB)(GLshort *v);
mogl_function_glWindowPos3svARB glWindowPos3svARB;
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

typedef void (*mogl_function_glBlendBarrierKHR)();
mogl_function_glBlendBarrierKHR glBlendBarrierKHR;
#define GL_KHR_blend_equation_advanced_coherent 1
#define GL_BLEND_ADVANCED_COHERENT_KHR 0x9285
#define GL_KHR_context_flush_control 1
#define GL_KHR_debug 1
#define GL_KHR_no_error 1
#define GL_CONTEXT_FLAG_NO_ERROR_BIT_KHR 0x00000008
#define GL_KHR_parallel_shader_compile 1
#define GL_MAX_SHADER_COMPILER_THREADS_KHR 0x91B0
#define GL_COMPLETION_STATUS_KHR 0x91B1

typedef void (*mogl_function_glMaxShaderCompilerThreadsKHR)(GLuint count);
mogl_function_glMaxShaderCompilerThreadsKHR glMaxShaderCompilerThreadsKHR;
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

typedef void (*mogl_function_glMultiTexCoord1bOES)(GLenum texture, GLbyte s);
mogl_function_glMultiTexCoord1bOES glMultiTexCoord1bOES;

typedef void (*mogl_function_glMultiTexCoord1bvOES)(GLenum texture, GLbyte *coords);
mogl_function_glMultiTexCoord1bvOES glMultiTexCoord1bvOES;

typedef void (*mogl_function_glMultiTexCoord2bOES)(GLenum texture, GLbyte s, GLbyte t);
mogl_function_glMultiTexCoord2bOES glMultiTexCoord2bOES;

typedef void (*mogl_function_glMultiTexCoord2bvOES)(GLenum texture, GLbyte *coords);
mogl_function_glMultiTexCoord2bvOES glMultiTexCoord2bvOES;

typedef void (*mogl_function_glMultiTexCoord3bOES)(GLenum texture, GLbyte s, GLbyte t, GLbyte r);
mogl_function_glMultiTexCoord3bOES glMultiTexCoord3bOES;

typedef void (*mogl_function_glMultiTexCoord3bvOES)(GLenum texture, GLbyte *coords);
mogl_function_glMultiTexCoord3bvOES glMultiTexCoord3bvOES;

typedef void (*mogl_function_glMultiTexCoord4bOES)(GLenum texture, GLbyte s, GLbyte t, GLbyte r, GLbyte q);
mogl_function_glMultiTexCoord4bOES glMultiTexCoord4bOES;

typedef void (*mogl_function_glMultiTexCoord4bvOES)(GLenum texture, GLbyte *coords);
mogl_function_glMultiTexCoord4bvOES glMultiTexCoord4bvOES;

typedef void (*mogl_function_glTexCoord1bOES)(GLbyte s);
mogl_function_glTexCoord1bOES glTexCoord1bOES;

typedef void (*mogl_function_glTexCoord1bvOES)(GLbyte *coords);
mogl_function_glTexCoord1bvOES glTexCoord1bvOES;

typedef void (*mogl_function_glTexCoord2bOES)(GLbyte s, GLbyte t);
mogl_function_glTexCoord2bOES glTexCoord2bOES;

typedef void (*mogl_function_glTexCoord2bvOES)(GLbyte *coords);
mogl_function_glTexCoord2bvOES glTexCoord2bvOES;

typedef void (*mogl_function_glTexCoord3bOES)(GLbyte s, GLbyte t, GLbyte r);
mogl_function_glTexCoord3bOES glTexCoord3bOES;

typedef void (*mogl_function_glTexCoord3bvOES)(GLbyte *coords);
mogl_function_glTexCoord3bvOES glTexCoord3bvOES;

typedef void (*mogl_function_glTexCoord4bOES)(GLbyte s, GLbyte t, GLbyte r, GLbyte q);
mogl_function_glTexCoord4bOES glTexCoord4bOES;

typedef void (*mogl_function_glTexCoord4bvOES)(GLbyte *coords);
mogl_function_glTexCoord4bvOES glTexCoord4bvOES;

typedef void (*mogl_function_glVertex2bOES)(GLbyte x, GLbyte y);
mogl_function_glVertex2bOES glVertex2bOES;

typedef void (*mogl_function_glVertex2bvOES)(GLbyte *coords);
mogl_function_glVertex2bvOES glVertex2bvOES;

typedef void (*mogl_function_glVertex3bOES)(GLbyte x, GLbyte y, GLbyte z);
mogl_function_glVertex3bOES glVertex3bOES;

typedef void (*mogl_function_glVertex3bvOES)(GLbyte *coords);
mogl_function_glVertex3bvOES glVertex3bvOES;

typedef void (*mogl_function_glVertex4bOES)(GLbyte x, GLbyte y, GLbyte z, GLbyte w);
mogl_function_glVertex4bOES glVertex4bOES;

typedef void (*mogl_function_glVertex4bvOES)(GLbyte *coords);
mogl_function_glVertex4bvOES glVertex4bvOES;
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

typedef void (*mogl_function_glAlphaFuncxOES)(GLenum func, GLfixed ref);
mogl_function_glAlphaFuncxOES glAlphaFuncxOES;

typedef void (*mogl_function_glClearColorxOES)(GLfixed red, GLfixed green, GLfixed blue, GLfixed alpha);
mogl_function_glClearColorxOES glClearColorxOES;

typedef void (*mogl_function_glClearDepthxOES)(GLfixed depth);
mogl_function_glClearDepthxOES glClearDepthxOES;

typedef void (*mogl_function_glClipPlanexOES)(GLenum plane, GLfixed *equation);
mogl_function_glClipPlanexOES glClipPlanexOES;

typedef void (*mogl_function_glColor4xOES)(GLfixed red, GLfixed green, GLfixed blue, GLfixed alpha);
mogl_function_glColor4xOES glColor4xOES;

typedef void (*mogl_function_glDepthRangexOES)(GLfixed n, GLfixed f);
mogl_function_glDepthRangexOES glDepthRangexOES;

typedef void (*mogl_function_glFogxOES)(GLenum pname, GLfixed param);
mogl_function_glFogxOES glFogxOES;

typedef void (*mogl_function_glFogxvOES)(GLenum pname, GLfixed *param);
mogl_function_glFogxvOES glFogxvOES;

typedef void (*mogl_function_glFrustumxOES)(GLfixed l, GLfixed r, GLfixed b, GLfixed t, GLfixed n, GLfixed f);
mogl_function_glFrustumxOES glFrustumxOES;

typedef void (*mogl_function_glGetClipPlanexOES)(GLenum plane, GLfixed *equation);
mogl_function_glGetClipPlanexOES glGetClipPlanexOES;

typedef void (*mogl_function_glGetFixedvOES)(GLenum pname, GLfixed *params);
mogl_function_glGetFixedvOES glGetFixedvOES;

typedef void (*mogl_function_glGetTexEnvxvOES)(GLenum target, GLenum pname, GLfixed *params);
mogl_function_glGetTexEnvxvOES glGetTexEnvxvOES;

typedef void (*mogl_function_glGetTexParameterxvOES)(GLenum target, GLenum pname, GLfixed *params);
mogl_function_glGetTexParameterxvOES glGetTexParameterxvOES;

typedef void (*mogl_function_glLightModelxOES)(GLenum pname, GLfixed param);
mogl_function_glLightModelxOES glLightModelxOES;

typedef void (*mogl_function_glLightModelxvOES)(GLenum pname, GLfixed *param);
mogl_function_glLightModelxvOES glLightModelxvOES;

typedef void (*mogl_function_glLightxOES)(GLenum light, GLenum pname, GLfixed param);
mogl_function_glLightxOES glLightxOES;

typedef void (*mogl_function_glLightxvOES)(GLenum light, GLenum pname, GLfixed *params);
mogl_function_glLightxvOES glLightxvOES;

typedef void (*mogl_function_glLineWidthxOES)(GLfixed width);
mogl_function_glLineWidthxOES glLineWidthxOES;

typedef void (*mogl_function_glLoadMatrixxOES)(GLfixed *m);
mogl_function_glLoadMatrixxOES glLoadMatrixxOES;

typedef void (*mogl_function_glMaterialxOES)(GLenum face, GLenum pname, GLfixed param);
mogl_function_glMaterialxOES glMaterialxOES;

typedef void (*mogl_function_glMaterialxvOES)(GLenum face, GLenum pname, GLfixed *param);
mogl_function_glMaterialxvOES glMaterialxvOES;

typedef void (*mogl_function_glMultMatrixxOES)(GLfixed *m);
mogl_function_glMultMatrixxOES glMultMatrixxOES;

typedef void (*mogl_function_glMultiTexCoord4xOES)(GLenum texture, GLfixed s, GLfixed t, GLfixed r, GLfixed q);
mogl_function_glMultiTexCoord4xOES glMultiTexCoord4xOES;

typedef void (*mogl_function_glNormal3xOES)(GLfixed nx, GLfixed ny, GLfixed nz);
mogl_function_glNormal3xOES glNormal3xOES;

typedef void (*mogl_function_glOrthoxOES)(GLfixed l, GLfixed r, GLfixed b, GLfixed t, GLfixed n, GLfixed f);
mogl_function_glOrthoxOES glOrthoxOES;

typedef void (*mogl_function_glPointParameterxvOES)(GLenum pname, GLfixed *params);
mogl_function_glPointParameterxvOES glPointParameterxvOES;

typedef void (*mogl_function_glPointSizexOES)(GLfixed size);
mogl_function_glPointSizexOES glPointSizexOES;

typedef void (*mogl_function_glPolygonOffsetxOES)(GLfixed factor, GLfixed units);
mogl_function_glPolygonOffsetxOES glPolygonOffsetxOES;

typedef void (*mogl_function_glRotatexOES)(GLfixed angle, GLfixed x, GLfixed y, GLfixed z);
mogl_function_glRotatexOES glRotatexOES;

typedef void (*mogl_function_glScalexOES)(GLfixed x, GLfixed y, GLfixed z);
mogl_function_glScalexOES glScalexOES;

typedef void (*mogl_function_glTexEnvxOES)(GLenum target, GLenum pname, GLfixed param);
mogl_function_glTexEnvxOES glTexEnvxOES;

typedef void (*mogl_function_glTexEnvxvOES)(GLenum target, GLenum pname, GLfixed *params);
mogl_function_glTexEnvxvOES glTexEnvxvOES;

typedef void (*mogl_function_glTexParameterxOES)(GLenum target, GLenum pname, GLfixed param);
mogl_function_glTexParameterxOES glTexParameterxOES;

typedef void (*mogl_function_glTexParameterxvOES)(GLenum target, GLenum pname, GLfixed *params);
mogl_function_glTexParameterxvOES glTexParameterxvOES;

typedef void (*mogl_function_glTranslatexOES)(GLfixed x, GLfixed y, GLfixed z);
mogl_function_glTranslatexOES glTranslatexOES;

typedef void (*mogl_function_glAccumxOES)(GLenum op, GLfixed value);
mogl_function_glAccumxOES glAccumxOES;

typedef void (*mogl_function_glBitmapxOES)(GLsizei width, GLsizei height, GLfixed xorig, GLfixed yorig, GLfixed xmove, GLfixed ymove, GLubyte *bitmap);
mogl_function_glBitmapxOES glBitmapxOES;

typedef void (*mogl_function_glBlendColorxOES)(GLfixed red, GLfixed green, GLfixed blue, GLfixed alpha);
mogl_function_glBlendColorxOES glBlendColorxOES;

typedef void (*mogl_function_glClearAccumxOES)(GLfixed red, GLfixed green, GLfixed blue, GLfixed alpha);
mogl_function_glClearAccumxOES glClearAccumxOES;

typedef void (*mogl_function_glColor3xOES)(GLfixed red, GLfixed green, GLfixed blue);
mogl_function_glColor3xOES glColor3xOES;

typedef void (*mogl_function_glColor3xvOES)(GLfixed *components);
mogl_function_glColor3xvOES glColor3xvOES;

typedef void (*mogl_function_glColor4xvOES)(GLfixed *components);
mogl_function_glColor4xvOES glColor4xvOES;

typedef void (*mogl_function_glConvolutionParameterxOES)(GLenum target, GLenum pname, GLfixed param);
mogl_function_glConvolutionParameterxOES glConvolutionParameterxOES;

typedef void (*mogl_function_glConvolutionParameterxvOES)(GLenum target, GLenum pname, GLfixed *params);
mogl_function_glConvolutionParameterxvOES glConvolutionParameterxvOES;

typedef void (*mogl_function_glEvalCoord1xOES)(GLfixed u);
mogl_function_glEvalCoord1xOES glEvalCoord1xOES;

typedef void (*mogl_function_glEvalCoord1xvOES)(GLfixed *coords);
mogl_function_glEvalCoord1xvOES glEvalCoord1xvOES;

typedef void (*mogl_function_glEvalCoord2xOES)(GLfixed u, GLfixed v);
mogl_function_glEvalCoord2xOES glEvalCoord2xOES;

typedef void (*mogl_function_glEvalCoord2xvOES)(GLfixed *coords);
mogl_function_glEvalCoord2xvOES glEvalCoord2xvOES;

typedef void (*mogl_function_glFeedbackBufferxOES)(GLsizei n, GLenum type, GLfixed *buffer);
mogl_function_glFeedbackBufferxOES glFeedbackBufferxOES;

typedef void (*mogl_function_glGetConvolutionParameterxvOES)(GLenum target, GLenum pname, GLfixed *params);
mogl_function_glGetConvolutionParameterxvOES glGetConvolutionParameterxvOES;

typedef void (*mogl_function_glGetHistogramParameterxvOES)(GLenum target, GLenum pname, GLfixed *params);
mogl_function_glGetHistogramParameterxvOES glGetHistogramParameterxvOES;

typedef void (*mogl_function_glGetLightxOES)(GLenum light, GLenum pname, GLfixed *params);
mogl_function_glGetLightxOES glGetLightxOES;

typedef void (*mogl_function_glGetMapxvOES)(GLenum target, GLenum query, GLfixed *v);
mogl_function_glGetMapxvOES glGetMapxvOES;

typedef void (*mogl_function_glGetMaterialxOES)(GLenum face, GLenum pname, GLfixed param);
mogl_function_glGetMaterialxOES glGetMaterialxOES;

typedef void (*mogl_function_glGetPixelMapxv)(GLenum map, GLint size, GLfixed *values);
mogl_function_glGetPixelMapxv glGetPixelMapxv;

typedef void (*mogl_function_glGetTexGenxvOES)(GLenum coord, GLenum pname, GLfixed *params);
mogl_function_glGetTexGenxvOES glGetTexGenxvOES;

typedef void (*mogl_function_glGetTexLevelParameterxvOES)(GLenum target, GLint level, GLenum pname, GLfixed *params);
mogl_function_glGetTexLevelParameterxvOES glGetTexLevelParameterxvOES;

typedef void (*mogl_function_glIndexxOES)(GLfixed component);
mogl_function_glIndexxOES glIndexxOES;

typedef void (*mogl_function_glIndexxvOES)(GLfixed *component);
mogl_function_glIndexxvOES glIndexxvOES;

typedef void (*mogl_function_glLoadTransposeMatrixxOES)(GLfixed *m);
mogl_function_glLoadTransposeMatrixxOES glLoadTransposeMatrixxOES;

typedef void (*mogl_function_glMap1xOES)(GLenum target, GLfixed u1, GLfixed u2, GLint stride, GLint order, GLfixed points);
mogl_function_glMap1xOES glMap1xOES;

typedef void (*mogl_function_glMap2xOES)(GLenum target, GLfixed u1, GLfixed u2, GLint ustride, GLint uorder, GLfixed v1, GLfixed v2, GLint vstride, GLint vorder, GLfixed points);
mogl_function_glMap2xOES glMap2xOES;

typedef void (*mogl_function_glMapGrid1xOES)(GLint n, GLfixed u1, GLfixed u2);
mogl_function_glMapGrid1xOES glMapGrid1xOES;

typedef void (*mogl_function_glMapGrid2xOES)(GLint n, GLfixed u1, GLfixed u2, GLfixed v1, GLfixed v2);
mogl_function_glMapGrid2xOES glMapGrid2xOES;

typedef void (*mogl_function_glMultTransposeMatrixxOES)(GLfixed *m);
mogl_function_glMultTransposeMatrixxOES glMultTransposeMatrixxOES;

typedef void (*mogl_function_glMultiTexCoord1xOES)(GLenum texture, GLfixed s);
mogl_function_glMultiTexCoord1xOES glMultiTexCoord1xOES;

typedef void (*mogl_function_glMultiTexCoord1xvOES)(GLenum texture, GLfixed *coords);
mogl_function_glMultiTexCoord1xvOES glMultiTexCoord1xvOES;

typedef void (*mogl_function_glMultiTexCoord2xOES)(GLenum texture, GLfixed s, GLfixed t);
mogl_function_glMultiTexCoord2xOES glMultiTexCoord2xOES;

typedef void (*mogl_function_glMultiTexCoord2xvOES)(GLenum texture, GLfixed *coords);
mogl_function_glMultiTexCoord2xvOES glMultiTexCoord2xvOES;

typedef void (*mogl_function_glMultiTexCoord3xOES)(GLenum texture, GLfixed s, GLfixed t, GLfixed r);
mogl_function_glMultiTexCoord3xOES glMultiTexCoord3xOES;

typedef void (*mogl_function_glMultiTexCoord3xvOES)(GLenum texture, GLfixed *coords);
mogl_function_glMultiTexCoord3xvOES glMultiTexCoord3xvOES;

typedef void (*mogl_function_glMultiTexCoord4xvOES)(GLenum texture, GLfixed *coords);
mogl_function_glMultiTexCoord4xvOES glMultiTexCoord4xvOES;

typedef void (*mogl_function_glNormal3xvOES)(GLfixed *coords);
mogl_function_glNormal3xvOES glNormal3xvOES;

typedef void (*mogl_function_glPassThroughxOES)(GLfixed token);
mogl_function_glPassThroughxOES glPassThroughxOES;

typedef void (*mogl_function_glPixelMapx)(GLenum map, GLint size, GLfixed *values);
mogl_function_glPixelMapx glPixelMapx;

typedef void (*mogl_function_glPixelStorex)(GLenum pname, GLfixed param);
mogl_function_glPixelStorex glPixelStorex;

typedef void (*mogl_function_glPixelTransferxOES)(GLenum pname, GLfixed param);
mogl_function_glPixelTransferxOES glPixelTransferxOES;

typedef void (*mogl_function_glPixelZoomxOES)(GLfixed xfactor, GLfixed yfactor);
mogl_function_glPixelZoomxOES glPixelZoomxOES;

typedef void (*mogl_function_glPrioritizeTexturesxOES)(GLsizei n, GLuint *textures, GLfixed *priorities);
mogl_function_glPrioritizeTexturesxOES glPrioritizeTexturesxOES;

typedef void (*mogl_function_glRasterPos2xOES)(GLfixed x, GLfixed y);
mogl_function_glRasterPos2xOES glRasterPos2xOES;

typedef void (*mogl_function_glRasterPos2xvOES)(GLfixed *coords);
mogl_function_glRasterPos2xvOES glRasterPos2xvOES;

typedef void (*mogl_function_glRasterPos3xOES)(GLfixed x, GLfixed y, GLfixed z);
mogl_function_glRasterPos3xOES glRasterPos3xOES;

typedef void (*mogl_function_glRasterPos3xvOES)(GLfixed *coords);
mogl_function_glRasterPos3xvOES glRasterPos3xvOES;

typedef void (*mogl_function_glRasterPos4xOES)(GLfixed x, GLfixed y, GLfixed z, GLfixed w);
mogl_function_glRasterPos4xOES glRasterPos4xOES;

typedef void (*mogl_function_glRasterPos4xvOES)(GLfixed *coords);
mogl_function_glRasterPos4xvOES glRasterPos4xvOES;

typedef void (*mogl_function_glRectxOES)(GLfixed x1, GLfixed y1, GLfixed x2, GLfixed y2);
mogl_function_glRectxOES glRectxOES;

typedef void (*mogl_function_glRectxvOES)(GLfixed *v1, GLfixed *v2);
mogl_function_glRectxvOES glRectxvOES;

typedef void (*mogl_function_glTexCoord1xOES)(GLfixed s);
mogl_function_glTexCoord1xOES glTexCoord1xOES;

typedef void (*mogl_function_glTexCoord1xvOES)(GLfixed *coords);
mogl_function_glTexCoord1xvOES glTexCoord1xvOES;

typedef void (*mogl_function_glTexCoord2xOES)(GLfixed s, GLfixed t);
mogl_function_glTexCoord2xOES glTexCoord2xOES;

typedef void (*mogl_function_glTexCoord2xvOES)(GLfixed *coords);
mogl_function_glTexCoord2xvOES glTexCoord2xvOES;

typedef void (*mogl_function_glTexCoord3xOES)(GLfixed s, GLfixed t, GLfixed r);
mogl_function_glTexCoord3xOES glTexCoord3xOES;

typedef void (*mogl_function_glTexCoord3xvOES)(GLfixed *coords);
mogl_function_glTexCoord3xvOES glTexCoord3xvOES;

typedef void (*mogl_function_glTexCoord4xOES)(GLfixed s, GLfixed t, GLfixed r, GLfixed q);
mogl_function_glTexCoord4xOES glTexCoord4xOES;

typedef void (*mogl_function_glTexCoord4xvOES)(GLfixed *coords);
mogl_function_glTexCoord4xvOES glTexCoord4xvOES;

typedef void (*mogl_function_glTexGenxOES)(GLenum coord, GLenum pname, GLfixed param);
mogl_function_glTexGenxOES glTexGenxOES;

typedef void (*mogl_function_glTexGenxvOES)(GLenum coord, GLenum pname, GLfixed *params);
mogl_function_glTexGenxvOES glTexGenxvOES;

typedef void (*mogl_function_glVertex2xOES)(GLfixed x);
mogl_function_glVertex2xOES glVertex2xOES;

typedef void (*mogl_function_glVertex2xvOES)(GLfixed *coords);
mogl_function_glVertex2xvOES glVertex2xvOES;

typedef void (*mogl_function_glVertex3xOES)(GLfixed x, GLfixed y);
mogl_function_glVertex3xOES glVertex3xOES;

typedef void (*mogl_function_glVertex3xvOES)(GLfixed *coords);
mogl_function_glVertex3xvOES glVertex3xvOES;

typedef void (*mogl_function_glVertex4xOES)(GLfixed x, GLfixed y, GLfixed z);
mogl_function_glVertex4xOES glVertex4xOES;

typedef void (*mogl_function_glVertex4xvOES)(GLfixed *coords);
mogl_function_glVertex4xvOES glVertex4xvOES;
#define GL_OES_query_matrix 1

typedef GLbitfield  (*mogl_function_glQueryMatrixxOES)(GLfixed *mantissa, GLint *exponent);
mogl_function_glQueryMatrixxOES glQueryMatrixxOES;
#define GL_OES_read_format 1
#define GL_IMPLEMENTATION_COLOR_READ_TYPE_OES 0x8B9A
#define GL_IMPLEMENTATION_COLOR_READ_FORMAT_OES 0x8B9B
#define GL_OES_single_precision 1

typedef void (*mogl_function_glClearDepthfOES)(GLclampf depth);
mogl_function_glClearDepthfOES glClearDepthfOES;

typedef void (*mogl_function_glClipPlanefOES)(GLenum plane, GLfloat *equation);
mogl_function_glClipPlanefOES glClipPlanefOES;

typedef void (*mogl_function_glDepthRangefOES)(GLclampf n, GLclampf f);
mogl_function_glDepthRangefOES glDepthRangefOES;

typedef void (*mogl_function_glFrustumfOES)(GLfloat l, GLfloat r, GLfloat b, GLfloat t, GLfloat n, GLfloat f);
mogl_function_glFrustumfOES glFrustumfOES;

typedef void (*mogl_function_glGetClipPlanefOES)(GLenum plane, GLfloat *equation);
mogl_function_glGetClipPlanefOES glGetClipPlanefOES;

typedef void (*mogl_function_glOrthofOES)(GLfloat l, GLfloat r, GLfloat b, GLfloat t, GLfloat n, GLfloat f);
mogl_function_glOrthofOES glOrthofOES;
#define GL_3DFX_multisample 1
#define GL_MULTISAMPLE_3DFX 0x86B2
#define GL_SAMPLE_BUFFERS_3DFX 0x86B3
#define GL_SAMPLES_3DFX 0x86B4
#define GL_MULTISAMPLE_BIT_3DFX 0x20000000
#define GL_3DFX_tbuffer 1

typedef void (*mogl_function_glTbufferMask3DFX)(GLuint mask);
mogl_function_glTbufferMask3DFX glTbufferMask3DFX;
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

typedef void (*mogl_function_glDebugMessageEnableAMD)(GLenum category, GLenum severity, GLsizei count, GLuint *ids, GLboolean enabled);
mogl_function_glDebugMessageEnableAMD glDebugMessageEnableAMD;

typedef void (*mogl_function_glDebugMessageInsertAMD)(GLenum category, GLenum severity, GLuint id, GLsizei length, GLchar *buf);
mogl_function_glDebugMessageInsertAMD glDebugMessageInsertAMD;

typedef void (*mogl_function_glDebugMessageCallbackAMD)(GLDEBUGPROCAMD callback, void * userParam);
mogl_function_glDebugMessageCallbackAMD glDebugMessageCallbackAMD;

typedef GLuint  (*mogl_function_glGetDebugMessageLogAMD)(GLuint count, GLsizei bufSize, GLenum *categories, GLenum *severities, GLuint *ids, GLsizei *lengths, GLchar *message);
mogl_function_glGetDebugMessageLogAMD glGetDebugMessageLogAMD;
#define GL_AMD_depth_clamp_separate 1
#define GL_DEPTH_CLAMP_NEAR_AMD 0x901E
#define GL_DEPTH_CLAMP_FAR_AMD 0x901F
#define GL_AMD_draw_buffers_blend 1

typedef void (*mogl_function_glBlendFuncIndexedAMD)(GLuint buf, GLenum src, GLenum dst);
mogl_function_glBlendFuncIndexedAMD glBlendFuncIndexedAMD;

typedef void (*mogl_function_glBlendFuncSeparateIndexedAMD)(GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha);
mogl_function_glBlendFuncSeparateIndexedAMD glBlendFuncSeparateIndexedAMD;

typedef void (*mogl_function_glBlendEquationIndexedAMD)(GLuint buf, GLenum mode);
mogl_function_glBlendEquationIndexedAMD glBlendEquationIndexedAMD;

typedef void (*mogl_function_glBlendEquationSeparateIndexedAMD)(GLuint buf, GLenum modeRGB, GLenum modeAlpha);
mogl_function_glBlendEquationSeparateIndexedAMD glBlendEquationSeparateIndexedAMD;
#define GL_AMD_framebuffer_multisample_advanced 1
#define GL_RENDERBUFFER_STORAGE_SAMPLES_AMD 0x91B2
#define GL_MAX_COLOR_FRAMEBUFFER_SAMPLES_AMD 0x91B3
#define GL_MAX_COLOR_FRAMEBUFFER_STORAGE_SAMPLES_AMD 0x91B4
#define GL_MAX_DEPTH_STENCIL_FRAMEBUFFER_SAMPLES_AMD 0x91B5
#define GL_NUM_SUPPORTED_MULTISAMPLE_MODES_AMD 0x91B6
#define GL_SUPPORTED_MULTISAMPLE_MODES_AMD 0x91B7

typedef void (*mogl_function_glRenderbufferStorageMultisampleAdvancedAMD)(GLenum target, GLsizei samples, GLsizei storageSamples, GLenum internalformat, GLsizei width, GLsizei height);
mogl_function_glRenderbufferStorageMultisampleAdvancedAMD glRenderbufferStorageMultisampleAdvancedAMD;

typedef void (*mogl_function_glNamedRenderbufferStorageMultisampleAdvancedAMD)(GLuint renderbuffer, GLsizei samples, GLsizei storageSamples, GLenum internalformat, GLsizei width, GLsizei height);
mogl_function_glNamedRenderbufferStorageMultisampleAdvancedAMD glNamedRenderbufferStorageMultisampleAdvancedAMD;
#define GL_AMD_framebuffer_sample_positions 1
#define GL_SUBSAMPLE_DISTANCE_AMD 0x883F
#define GL_PIXELS_PER_SAMPLE_PATTERN_X_AMD 0x91AE
#define GL_PIXELS_PER_SAMPLE_PATTERN_Y_AMD 0x91AF
#define GL_ALL_PIXELS_AMD 0xFFFFFFFF

typedef void (*mogl_function_glFramebufferSamplePositionsfvAMD)(GLenum target, GLuint numsamples, GLuint pixelindex, GLfloat *values);
mogl_function_glFramebufferSamplePositionsfvAMD glFramebufferSamplePositionsfvAMD;

typedef void (*mogl_function_glNamedFramebufferSamplePositionsfvAMD)(GLuint framebuffer, GLuint numsamples, GLuint pixelindex, GLfloat *values);
mogl_function_glNamedFramebufferSamplePositionsfvAMD glNamedFramebufferSamplePositionsfvAMD;

typedef void (*mogl_function_glGetFramebufferParameterfvAMD)(GLenum target, GLenum pname, GLuint numsamples, GLuint pixelindex, GLsizei size, GLfloat *values);
mogl_function_glGetFramebufferParameterfvAMD glGetFramebufferParameterfvAMD;

typedef void (*mogl_function_glGetNamedFramebufferParameterfvAMD)(GLuint framebuffer, GLenum pname, GLuint numsamples, GLuint pixelindex, GLsizei size, GLfloat *values);
mogl_function_glGetNamedFramebufferParameterfvAMD glGetNamedFramebufferParameterfvAMD;
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

typedef void (*mogl_function_glUniform1i64NV)(GLint location, GLint64EXT x);
mogl_function_glUniform1i64NV glUniform1i64NV;

typedef void (*mogl_function_glUniform2i64NV)(GLint location, GLint64EXT x, GLint64EXT y);
mogl_function_glUniform2i64NV glUniform2i64NV;

typedef void (*mogl_function_glUniform3i64NV)(GLint location, GLint64EXT x, GLint64EXT y, GLint64EXT z);
mogl_function_glUniform3i64NV glUniform3i64NV;

typedef void (*mogl_function_glUniform4i64NV)(GLint location, GLint64EXT x, GLint64EXT y, GLint64EXT z, GLint64EXT w);
mogl_function_glUniform4i64NV glUniform4i64NV;

typedef void (*mogl_function_glUniform1i64vNV)(GLint location, GLsizei count, GLint64EXT *value);
mogl_function_glUniform1i64vNV glUniform1i64vNV;

typedef void (*mogl_function_glUniform2i64vNV)(GLint location, GLsizei count, GLint64EXT *value);
mogl_function_glUniform2i64vNV glUniform2i64vNV;

typedef void (*mogl_function_glUniform3i64vNV)(GLint location, GLsizei count, GLint64EXT *value);
mogl_function_glUniform3i64vNV glUniform3i64vNV;

typedef void (*mogl_function_glUniform4i64vNV)(GLint location, GLsizei count, GLint64EXT *value);
mogl_function_glUniform4i64vNV glUniform4i64vNV;

typedef void (*mogl_function_glUniform1ui64NV)(GLint location, GLuint64EXT x);
mogl_function_glUniform1ui64NV glUniform1ui64NV;

typedef void (*mogl_function_glUniform2ui64NV)(GLint location, GLuint64EXT x, GLuint64EXT y);
mogl_function_glUniform2ui64NV glUniform2ui64NV;

typedef void (*mogl_function_glUniform3ui64NV)(GLint location, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z);
mogl_function_glUniform3ui64NV glUniform3ui64NV;

typedef void (*mogl_function_glUniform4ui64NV)(GLint location, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z, GLuint64EXT w);
mogl_function_glUniform4ui64NV glUniform4ui64NV;

typedef void (*mogl_function_glUniform1ui64vNV)(GLint location, GLsizei count, GLuint64EXT *value);
mogl_function_glUniform1ui64vNV glUniform1ui64vNV;

typedef void (*mogl_function_glUniform2ui64vNV)(GLint location, GLsizei count, GLuint64EXT *value);
mogl_function_glUniform2ui64vNV glUniform2ui64vNV;

typedef void (*mogl_function_glUniform3ui64vNV)(GLint location, GLsizei count, GLuint64EXT *value);
mogl_function_glUniform3ui64vNV glUniform3ui64vNV;

typedef void (*mogl_function_glUniform4ui64vNV)(GLint location, GLsizei count, GLuint64EXT *value);
mogl_function_glUniform4ui64vNV glUniform4ui64vNV;

typedef void (*mogl_function_glGetUniformi64vNV)(GLuint program, GLint location, GLint64EXT *params);
mogl_function_glGetUniformi64vNV glGetUniformi64vNV;

typedef void (*mogl_function_glGetUniformui64vNV)(GLuint program, GLint location, GLuint64EXT *params);
mogl_function_glGetUniformui64vNV glGetUniformui64vNV;

typedef void (*mogl_function_glProgramUniform1i64NV)(GLuint program, GLint location, GLint64EXT x);
mogl_function_glProgramUniform1i64NV glProgramUniform1i64NV;

typedef void (*mogl_function_glProgramUniform2i64NV)(GLuint program, GLint location, GLint64EXT x, GLint64EXT y);
mogl_function_glProgramUniform2i64NV glProgramUniform2i64NV;

typedef void (*mogl_function_glProgramUniform3i64NV)(GLuint program, GLint location, GLint64EXT x, GLint64EXT y, GLint64EXT z);
mogl_function_glProgramUniform3i64NV glProgramUniform3i64NV;

typedef void (*mogl_function_glProgramUniform4i64NV)(GLuint program, GLint location, GLint64EXT x, GLint64EXT y, GLint64EXT z, GLint64EXT w);
mogl_function_glProgramUniform4i64NV glProgramUniform4i64NV;

typedef void (*mogl_function_glProgramUniform1i64vNV)(GLuint program, GLint location, GLsizei count, GLint64EXT *value);
mogl_function_glProgramUniform1i64vNV glProgramUniform1i64vNV;

typedef void (*mogl_function_glProgramUniform2i64vNV)(GLuint program, GLint location, GLsizei count, GLint64EXT *value);
mogl_function_glProgramUniform2i64vNV glProgramUniform2i64vNV;

typedef void (*mogl_function_glProgramUniform3i64vNV)(GLuint program, GLint location, GLsizei count, GLint64EXT *value);
mogl_function_glProgramUniform3i64vNV glProgramUniform3i64vNV;

typedef void (*mogl_function_glProgramUniform4i64vNV)(GLuint program, GLint location, GLsizei count, GLint64EXT *value);
mogl_function_glProgramUniform4i64vNV glProgramUniform4i64vNV;

typedef void (*mogl_function_glProgramUniform1ui64NV)(GLuint program, GLint location, GLuint64EXT x);
mogl_function_glProgramUniform1ui64NV glProgramUniform1ui64NV;

typedef void (*mogl_function_glProgramUniform2ui64NV)(GLuint program, GLint location, GLuint64EXT x, GLuint64EXT y);
mogl_function_glProgramUniform2ui64NV glProgramUniform2ui64NV;

typedef void (*mogl_function_glProgramUniform3ui64NV)(GLuint program, GLint location, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z);
mogl_function_glProgramUniform3ui64NV glProgramUniform3ui64NV;

typedef void (*mogl_function_glProgramUniform4ui64NV)(GLuint program, GLint location, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z, GLuint64EXT w);
mogl_function_glProgramUniform4ui64NV glProgramUniform4ui64NV;

typedef void (*mogl_function_glProgramUniform1ui64vNV)(GLuint program, GLint location, GLsizei count, GLuint64EXT *value);
mogl_function_glProgramUniform1ui64vNV glProgramUniform1ui64vNV;

typedef void (*mogl_function_glProgramUniform2ui64vNV)(GLuint program, GLint location, GLsizei count, GLuint64EXT *value);
mogl_function_glProgramUniform2ui64vNV glProgramUniform2ui64vNV;

typedef void (*mogl_function_glProgramUniform3ui64vNV)(GLuint program, GLint location, GLsizei count, GLuint64EXT *value);
mogl_function_glProgramUniform3ui64vNV glProgramUniform3ui64vNV;

typedef void (*mogl_function_glProgramUniform4ui64vNV)(GLuint program, GLint location, GLsizei count, GLuint64EXT *value);
mogl_function_glProgramUniform4ui64vNV glProgramUniform4ui64vNV;
#define GL_AMD_interleaved_elements 1
#define GL_VERTEX_ELEMENT_SWIZZLE_AMD 0x91A4
#define GL_VERTEX_ID_SWIZZLE_AMD 0x91A5

typedef void (*mogl_function_glVertexAttribParameteriAMD)(GLuint index, GLenum pname, GLint param);
mogl_function_glVertexAttribParameteriAMD glVertexAttribParameteriAMD;
#define GL_AMD_multi_draw_indirect 1

typedef void (*mogl_function_glMultiDrawArraysIndirectAMD)(GLenum mode, void * indirect, GLsizei primcount, GLsizei stride);
mogl_function_glMultiDrawArraysIndirectAMD glMultiDrawArraysIndirectAMD;

typedef void (*mogl_function_glMultiDrawElementsIndirectAMD)(GLenum mode, GLenum type, void * indirect, GLsizei primcount, GLsizei stride);
mogl_function_glMultiDrawElementsIndirectAMD glMultiDrawElementsIndirectAMD;
#define GL_AMD_name_gen_delete 1
#define GL_DATA_BUFFER_AMD 0x9151
#define GL_PERFORMANCE_MONITOR_AMD 0x9152
#define GL_QUERY_OBJECT_AMD 0x9153
#define GL_VERTEX_ARRAY_OBJECT_AMD 0x9154
#define GL_SAMPLER_OBJECT_AMD 0x9155

typedef void (*mogl_function_glGenNamesAMD)(GLenum identifier, GLuint num, GLuint *names);
mogl_function_glGenNamesAMD glGenNamesAMD;

typedef void (*mogl_function_glDeleteNamesAMD)(GLenum identifier, GLuint num, GLuint *names);
mogl_function_glDeleteNamesAMD glDeleteNamesAMD;

typedef GLboolean  (*mogl_function_glIsNameAMD)(GLenum identifier, GLuint name);
mogl_function_glIsNameAMD glIsNameAMD;
#define GL_AMD_occlusion_query_event 1
#define GL_OCCLUSION_QUERY_EVENT_MASK_AMD 0x874F
#define GL_QUERY_DEPTH_PASS_EVENT_BIT_AMD 0x00000001
#define GL_QUERY_DEPTH_FAIL_EVENT_BIT_AMD 0x00000002
#define GL_QUERY_STENCIL_FAIL_EVENT_BIT_AMD 0x00000004
#define GL_QUERY_DEPTH_BOUNDS_FAIL_EVENT_BIT_AMD 0x00000008
#define GL_QUERY_ALL_EVENT_BITS_AMD 0xFFFFFFFF

typedef void (*mogl_function_glQueryObjectParameteruiAMD)(GLenum target, GLuint id, GLenum pname, GLuint param);
mogl_function_glQueryObjectParameteruiAMD glQueryObjectParameteruiAMD;
#define GL_AMD_performance_monitor 1
#define GL_COUNTER_TYPE_AMD 0x8BC0
#define GL_COUNTER_RANGE_AMD 0x8BC1
#define GL_UNSIGNED_INT64_AMD 0x8BC2
#define GL_PERCENTAGE_AMD 0x8BC3
#define GL_PERFMON_RESULT_AVAILABLE_AMD 0x8BC4
#define GL_PERFMON_RESULT_SIZE_AMD 0x8BC5
#define GL_PERFMON_RESULT_AMD 0x8BC6

typedef void (*mogl_function_glGetPerfMonitorGroupsAMD)(GLint *numGroups, GLsizei groupsSize, GLuint *groups);
mogl_function_glGetPerfMonitorGroupsAMD glGetPerfMonitorGroupsAMD;

typedef void (*mogl_function_glGetPerfMonitorCountersAMD)(GLuint group, GLint *numCounters, GLint *maxActiveCounters, GLsizei counterSize, GLuint *counters);
mogl_function_glGetPerfMonitorCountersAMD glGetPerfMonitorCountersAMD;

typedef void (*mogl_function_glGetPerfMonitorGroupStringAMD)(GLuint group, GLsizei bufSize, GLsizei *length, GLchar *groupString);
mogl_function_glGetPerfMonitorGroupStringAMD glGetPerfMonitorGroupStringAMD;

typedef void (*mogl_function_glGetPerfMonitorCounterStringAMD)(GLuint group, GLuint counter, GLsizei bufSize, GLsizei *length, GLchar *counterString);
mogl_function_glGetPerfMonitorCounterStringAMD glGetPerfMonitorCounterStringAMD;

typedef void (*mogl_function_glGetPerfMonitorCounterInfoAMD)(GLuint group, GLuint counter, GLenum pname, void * data);
mogl_function_glGetPerfMonitorCounterInfoAMD glGetPerfMonitorCounterInfoAMD;

typedef void (*mogl_function_glGenPerfMonitorsAMD)(GLsizei n, GLuint *monitors);
mogl_function_glGenPerfMonitorsAMD glGenPerfMonitorsAMD;

typedef void (*mogl_function_glDeletePerfMonitorsAMD)(GLsizei n, GLuint *monitors);
mogl_function_glDeletePerfMonitorsAMD glDeletePerfMonitorsAMD;

typedef void (*mogl_function_glSelectPerfMonitorCountersAMD)(GLuint monitor, GLboolean enable, GLuint group, GLint numCounters, GLuint *counterList);
mogl_function_glSelectPerfMonitorCountersAMD glSelectPerfMonitorCountersAMD;

typedef void (*mogl_function_glBeginPerfMonitorAMD)(GLuint monitor);
mogl_function_glBeginPerfMonitorAMD glBeginPerfMonitorAMD;

typedef void (*mogl_function_glEndPerfMonitorAMD)(GLuint monitor);
mogl_function_glEndPerfMonitorAMD glEndPerfMonitorAMD;

typedef void (*mogl_function_glGetPerfMonitorCounterDataAMD)(GLuint monitor, GLenum pname, GLsizei dataSize, GLuint *data, GLint *bytesWritten);
mogl_function_glGetPerfMonitorCounterDataAMD glGetPerfMonitorCounterDataAMD;
#define GL_AMD_pinned_memory 1
#define GL_EXTERNAL_VIRTUAL_MEMORY_BUFFER_AMD 0x9160
#define GL_AMD_query_buffer_object 1
#define GL_QUERY_BUFFER_AMD 0x9192
#define GL_QUERY_BUFFER_BINDING_AMD 0x9193
#define GL_QUERY_RESULT_NO_WAIT_AMD 0x9194
#define GL_AMD_sample_positions 1

typedef void (*mogl_function_glSetMultisamplefvAMD)(GLenum pname, GLuint index, GLfloat *val);
mogl_function_glSetMultisamplefvAMD glSetMultisamplefvAMD;
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

typedef void (*mogl_function_glTexStorageSparseAMD)(GLenum target, GLenum internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLsizei layers, GLbitfield flags);
mogl_function_glTexStorageSparseAMD glTexStorageSparseAMD;

typedef void (*mogl_function_glTextureStorageSparseAMD)(GLuint texture, GLenum target, GLenum internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLsizei layers, GLbitfield flags);
mogl_function_glTextureStorageSparseAMD glTextureStorageSparseAMD;
#define GL_AMD_stencil_operation_extended 1
#define GL_SET_AMD 0x874A
#define GL_REPLACE_VALUE_AMD 0x874B
#define GL_STENCIL_OP_VALUE_AMD 0x874C
#define GL_STENCIL_BACK_OP_VALUE_AMD 0x874D

typedef void (*mogl_function_glStencilOpValueAMD)(GLenum face, GLuint value);
mogl_function_glStencilOpValueAMD glStencilOpValueAMD;
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

typedef void (*mogl_function_glTessellationFactorAMD)(GLfloat factor);
mogl_function_glTessellationFactorAMD glTessellationFactorAMD;

typedef void (*mogl_function_glTessellationModeAMD)(GLenum mode);
mogl_function_glTessellationModeAMD glTessellationModeAMD;
#define GL_AMD_vertex_shader_viewport_index 1
#define GL_APPLE_aux_depth_stencil 1
#define GL_AUX_DEPTH_STENCIL_APPLE 0x8A14
#define GL_APPLE_client_storage 1
#define GL_UNPACK_CLIENT_STORAGE_APPLE 0x85B2
#define GL_APPLE_element_array 1
#define GL_ELEMENT_ARRAY_APPLE 0x8A0C
#define GL_ELEMENT_ARRAY_TYPE_APPLE 0x8A0D
#define GL_ELEMENT_ARRAY_POINTER_APPLE 0x8A0E

typedef void (*mogl_function_glElementPointerAPPLE)(GLenum type, void * pointer);
mogl_function_glElementPointerAPPLE glElementPointerAPPLE;

typedef void (*mogl_function_glDrawElementArrayAPPLE)(GLenum mode, GLint first, GLsizei count);
mogl_function_glDrawElementArrayAPPLE glDrawElementArrayAPPLE;

typedef void (*mogl_function_glDrawRangeElementArrayAPPLE)(GLenum mode, GLuint start, GLuint end, GLint first, GLsizei count);
mogl_function_glDrawRangeElementArrayAPPLE glDrawRangeElementArrayAPPLE;

typedef void (*mogl_function_glMultiDrawElementArrayAPPLE)(GLenum mode, GLint *first, GLsizei *count, GLsizei primcount);
mogl_function_glMultiDrawElementArrayAPPLE glMultiDrawElementArrayAPPLE;

typedef void (*mogl_function_glMultiDrawRangeElementArrayAPPLE)(GLenum mode, GLuint start, GLuint end, GLint *first, GLsizei *count, GLsizei primcount);
mogl_function_glMultiDrawRangeElementArrayAPPLE glMultiDrawRangeElementArrayAPPLE;
#define GL_APPLE_fence 1
#define GL_DRAW_PIXELS_APPLE 0x8A0A
#define GL_FENCE_APPLE 0x8A0B

typedef void (*mogl_function_glGenFencesAPPLE)(GLsizei n, GLuint *fences);
mogl_function_glGenFencesAPPLE glGenFencesAPPLE;

typedef void (*mogl_function_glDeleteFencesAPPLE)(GLsizei n, GLuint *fences);
mogl_function_glDeleteFencesAPPLE glDeleteFencesAPPLE;

typedef void (*mogl_function_glSetFenceAPPLE)(GLuint fence);
mogl_function_glSetFenceAPPLE glSetFenceAPPLE;

typedef GLboolean  (*mogl_function_glIsFenceAPPLE)(GLuint fence);
mogl_function_glIsFenceAPPLE glIsFenceAPPLE;

typedef GLboolean  (*mogl_function_glTestFenceAPPLE)(GLuint fence);
mogl_function_glTestFenceAPPLE glTestFenceAPPLE;

typedef void (*mogl_function_glFinishFenceAPPLE)(GLuint fence);
mogl_function_glFinishFenceAPPLE glFinishFenceAPPLE;

typedef GLboolean  (*mogl_function_glTestObjectAPPLE)(GLenum object, GLuint name);
mogl_function_glTestObjectAPPLE glTestObjectAPPLE;

typedef void (*mogl_function_glFinishObjectAPPLE)(GLenum object, GLint name);
mogl_function_glFinishObjectAPPLE glFinishObjectAPPLE;
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

typedef void (*mogl_function_glBufferParameteriAPPLE)(GLenum target, GLenum pname, GLint param);
mogl_function_glBufferParameteriAPPLE glBufferParameteriAPPLE;

typedef void (*mogl_function_glFlushMappedBufferRangeAPPLE)(GLenum target, GLintptr offset, GLsizeiptr size);
mogl_function_glFlushMappedBufferRangeAPPLE glFlushMappedBufferRangeAPPLE;
#define GL_APPLE_object_purgeable 1
#define GL_BUFFER_OBJECT_APPLE 0x85B3
#define GL_RELEASED_APPLE 0x8A19
#define GL_VOLATILE_APPLE 0x8A1A
#define GL_RETAINED_APPLE 0x8A1B
#define GL_UNDEFINED_APPLE 0x8A1C
#define GL_PURGEABLE_APPLE 0x8A1D

typedef GLenum  (*mogl_function_glObjectPurgeableAPPLE)(GLenum objectType, GLuint name, GLenum option);
mogl_function_glObjectPurgeableAPPLE glObjectPurgeableAPPLE;

typedef GLenum  (*mogl_function_glObjectUnpurgeableAPPLE)(GLenum objectType, GLuint name, GLenum option);
mogl_function_glObjectUnpurgeableAPPLE glObjectUnpurgeableAPPLE;

typedef void (*mogl_function_glGetObjectParameterivAPPLE)(GLenum objectType, GLuint name, GLenum pname, GLint *params);
mogl_function_glGetObjectParameterivAPPLE glGetObjectParameterivAPPLE;
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

typedef void (*mogl_function_glTextureRangeAPPLE)(GLenum target, GLsizei length, void * pointer);
mogl_function_glTextureRangeAPPLE glTextureRangeAPPLE;

typedef void (*mogl_function_glGetTexParameterPointervAPPLE)(GLenum target, GLenum pname, void * *params);
mogl_function_glGetTexParameterPointervAPPLE glGetTexParameterPointervAPPLE;
#define GL_APPLE_transform_hint 1
#define GL_TRANSFORM_HINT_APPLE 0x85B1
#define GL_APPLE_vertex_array_object 1
#define GL_VERTEX_ARRAY_BINDING_APPLE 0x85B5

typedef void (*mogl_function_glBindVertexArrayAPPLE)(GLuint array);
mogl_function_glBindVertexArrayAPPLE glBindVertexArrayAPPLE;

typedef void (*mogl_function_glDeleteVertexArraysAPPLE)(GLsizei n, GLuint *arrays);
mogl_function_glDeleteVertexArraysAPPLE glDeleteVertexArraysAPPLE;

typedef void (*mogl_function_glGenVertexArraysAPPLE)(GLsizei n, GLuint *arrays);
mogl_function_glGenVertexArraysAPPLE glGenVertexArraysAPPLE;

typedef GLboolean  (*mogl_function_glIsVertexArrayAPPLE)(GLuint array);
mogl_function_glIsVertexArrayAPPLE glIsVertexArrayAPPLE;
#define GL_APPLE_vertex_array_range 1
#define GL_VERTEX_ARRAY_RANGE_APPLE 0x851D
#define GL_VERTEX_ARRAY_RANGE_LENGTH_APPLE 0x851E
#define GL_VERTEX_ARRAY_STORAGE_HINT_APPLE 0x851F
#define GL_VERTEX_ARRAY_RANGE_POINTER_APPLE 0x8521
#define GL_STORAGE_CLIENT_APPLE 0x85B4

typedef void (*mogl_function_glVertexArrayRangeAPPLE)(GLsizei length, void * pointer);
mogl_function_glVertexArrayRangeAPPLE glVertexArrayRangeAPPLE;

typedef void (*mogl_function_glFlushVertexArrayRangeAPPLE)(GLsizei length, void * pointer);
mogl_function_glFlushVertexArrayRangeAPPLE glFlushVertexArrayRangeAPPLE;

typedef void (*mogl_function_glVertexArrayParameteriAPPLE)(GLenum pname, GLint param);
mogl_function_glVertexArrayParameteriAPPLE glVertexArrayParameteriAPPLE;
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

typedef void (*mogl_function_glEnableVertexAttribAPPLE)(GLuint index, GLenum pname);
mogl_function_glEnableVertexAttribAPPLE glEnableVertexAttribAPPLE;

typedef void (*mogl_function_glDisableVertexAttribAPPLE)(GLuint index, GLenum pname);
mogl_function_glDisableVertexAttribAPPLE glDisableVertexAttribAPPLE;

typedef GLboolean  (*mogl_function_glIsVertexAttribEnabledAPPLE)(GLuint index, GLenum pname);
mogl_function_glIsVertexAttribEnabledAPPLE glIsVertexAttribEnabledAPPLE;

typedef void (*mogl_function_glMapVertexAttrib1dAPPLE)(GLuint index, GLuint size, GLdouble u1, GLdouble u2, GLint stride, GLint order, GLdouble *points);
mogl_function_glMapVertexAttrib1dAPPLE glMapVertexAttrib1dAPPLE;

typedef void (*mogl_function_glMapVertexAttrib1fAPPLE)(GLuint index, GLuint size, GLfloat u1, GLfloat u2, GLint stride, GLint order, GLfloat *points);
mogl_function_glMapVertexAttrib1fAPPLE glMapVertexAttrib1fAPPLE;

typedef void (*mogl_function_glMapVertexAttrib2dAPPLE)(GLuint index, GLuint size, GLdouble u1, GLdouble u2, GLint ustride, GLint uorder, GLdouble v1, GLdouble v2, GLint vstride, GLint vorder, GLdouble *points);
mogl_function_glMapVertexAttrib2dAPPLE glMapVertexAttrib2dAPPLE;

typedef void (*mogl_function_glMapVertexAttrib2fAPPLE)(GLuint index, GLuint size, GLfloat u1, GLfloat u2, GLint ustride, GLint uorder, GLfloat v1, GLfloat v2, GLint vstride, GLint vorder, GLfloat *points);
mogl_function_glMapVertexAttrib2fAPPLE glMapVertexAttrib2fAPPLE;
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

typedef void (*mogl_function_glDrawBuffersATI)(GLsizei n, GLenum *bufs);
mogl_function_glDrawBuffersATI glDrawBuffersATI;
#define GL_ATI_element_array 1
#define GL_ELEMENT_ARRAY_ATI 0x8768
#define GL_ELEMENT_ARRAY_TYPE_ATI 0x8769
#define GL_ELEMENT_ARRAY_POINTER_ATI 0x876A

typedef void (*mogl_function_glElementPointerATI)(GLenum type, void * pointer);
mogl_function_glElementPointerATI glElementPointerATI;

typedef void (*mogl_function_glDrawElementArrayATI)(GLenum mode, GLsizei count);
mogl_function_glDrawElementArrayATI glDrawElementArrayATI;

typedef void (*mogl_function_glDrawRangeElementArrayATI)(GLenum mode, GLuint start, GLuint end, GLsizei count);
mogl_function_glDrawRangeElementArrayATI glDrawRangeElementArrayATI;
#define GL_ATI_envmap_bumpmap 1
#define GL_BUMP_ROT_MATRIX_ATI 0x8775
#define GL_BUMP_ROT_MATRIX_SIZE_ATI 0x8776
#define GL_BUMP_NUM_TEX_UNITS_ATI 0x8777
#define GL_BUMP_TEX_UNITS_ATI 0x8778
#define GL_DUDV_ATI 0x8779
#define GL_DU8DV8_ATI 0x877A
#define GL_BUMP_ENVMAP_ATI 0x877B
#define GL_BUMP_TARGET_ATI 0x877C

typedef void (*mogl_function_glTexBumpParameterivATI)(GLenum pname, GLint *param);
mogl_function_glTexBumpParameterivATI glTexBumpParameterivATI;

typedef void (*mogl_function_glTexBumpParameterfvATI)(GLenum pname, GLfloat *param);
mogl_function_glTexBumpParameterfvATI glTexBumpParameterfvATI;

typedef void (*mogl_function_glGetTexBumpParameterivATI)(GLenum pname, GLint *param);
mogl_function_glGetTexBumpParameterivATI glGetTexBumpParameterivATI;

typedef void (*mogl_function_glGetTexBumpParameterfvATI)(GLenum pname, GLfloat *param);
mogl_function_glGetTexBumpParameterfvATI glGetTexBumpParameterfvATI;
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

typedef GLuint  (*mogl_function_glGenFragmentShadersATI)(GLuint range);
mogl_function_glGenFragmentShadersATI glGenFragmentShadersATI;

typedef void (*mogl_function_glBindFragmentShaderATI)(GLuint id);
mogl_function_glBindFragmentShaderATI glBindFragmentShaderATI;

typedef void (*mogl_function_glDeleteFragmentShaderATI)(GLuint id);
mogl_function_glDeleteFragmentShaderATI glDeleteFragmentShaderATI;

typedef void (*mogl_function_glBeginFragmentShaderATI)();
mogl_function_glBeginFragmentShaderATI glBeginFragmentShaderATI;

typedef void (*mogl_function_glEndFragmentShaderATI)();
mogl_function_glEndFragmentShaderATI glEndFragmentShaderATI;

typedef void (*mogl_function_glPassTexCoordATI)(GLuint dst, GLuint coord, GLenum swizzle);
mogl_function_glPassTexCoordATI glPassTexCoordATI;

typedef void (*mogl_function_glSampleMapATI)(GLuint dst, GLuint interp, GLenum swizzle);
mogl_function_glSampleMapATI glSampleMapATI;

typedef void (*mogl_function_glColorFragmentOp1ATI)(GLenum op, GLuint dst, GLuint dstMask, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod);
mogl_function_glColorFragmentOp1ATI glColorFragmentOp1ATI;

typedef void (*mogl_function_glColorFragmentOp2ATI)(GLenum op, GLuint dst, GLuint dstMask, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod, GLuint arg2, GLuint arg2Rep, GLuint arg2Mod);
mogl_function_glColorFragmentOp2ATI glColorFragmentOp2ATI;

typedef void (*mogl_function_glColorFragmentOp3ATI)(GLenum op, GLuint dst, GLuint dstMask, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod, GLuint arg2, GLuint arg2Rep, GLuint arg2Mod, GLuint arg3, GLuint arg3Rep, GLuint arg3Mod);
mogl_function_glColorFragmentOp3ATI glColorFragmentOp3ATI;

typedef void (*mogl_function_glAlphaFragmentOp1ATI)(GLenum op, GLuint dst, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod);
mogl_function_glAlphaFragmentOp1ATI glAlphaFragmentOp1ATI;

typedef void (*mogl_function_glAlphaFragmentOp2ATI)(GLenum op, GLuint dst, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod, GLuint arg2, GLuint arg2Rep, GLuint arg2Mod);
mogl_function_glAlphaFragmentOp2ATI glAlphaFragmentOp2ATI;

typedef void (*mogl_function_glAlphaFragmentOp3ATI)(GLenum op, GLuint dst, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod, GLuint arg2, GLuint arg2Rep, GLuint arg2Mod, GLuint arg3, GLuint arg3Rep, GLuint arg3Mod);
mogl_function_glAlphaFragmentOp3ATI glAlphaFragmentOp3ATI;

typedef void (*mogl_function_glSetFragmentShaderConstantATI)(GLuint dst, GLfloat *value);
mogl_function_glSetFragmentShaderConstantATI glSetFragmentShaderConstantATI;
#define GL_ATI_map_object_buffer 1

typedef void *  (*mogl_function_glMapObjectBufferATI)(GLuint buffer);
mogl_function_glMapObjectBufferATI glMapObjectBufferATI;

typedef void (*mogl_function_glUnmapObjectBufferATI)(GLuint buffer);
mogl_function_glUnmapObjectBufferATI glUnmapObjectBufferATI;
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

typedef void (*mogl_function_glPNTrianglesiATI)(GLenum pname, GLint param);
mogl_function_glPNTrianglesiATI glPNTrianglesiATI;

typedef void (*mogl_function_glPNTrianglesfATI)(GLenum pname, GLfloat param);
mogl_function_glPNTrianglesfATI glPNTrianglesfATI;
#define GL_ATI_separate_stencil 1
#define GL_STENCIL_BACK_FUNC_ATI 0x8800
#define GL_STENCIL_BACK_FAIL_ATI 0x8801
#define GL_STENCIL_BACK_PASS_DEPTH_FAIL_ATI 0x8802
#define GL_STENCIL_BACK_PASS_DEPTH_PASS_ATI 0x8803

typedef void (*mogl_function_glStencilOpSeparateATI)(GLenum face, GLenum sfail, GLenum dpfail, GLenum dppass);
mogl_function_glStencilOpSeparateATI glStencilOpSeparateATI;

typedef void (*mogl_function_glStencilFuncSeparateATI)(GLenum frontfunc, GLenum backfunc, GLint ref, GLuint mask);
mogl_function_glStencilFuncSeparateATI glStencilFuncSeparateATI;
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

typedef GLuint  (*mogl_function_glNewObjectBufferATI)(GLsizei size, void * pointer, GLenum usage);
mogl_function_glNewObjectBufferATI glNewObjectBufferATI;

typedef GLboolean  (*mogl_function_glIsObjectBufferATI)(GLuint buffer);
mogl_function_glIsObjectBufferATI glIsObjectBufferATI;

typedef void (*mogl_function_glUpdateObjectBufferATI)(GLuint buffer, GLuint offset, GLsizei size, void * pointer, GLenum preserve);
mogl_function_glUpdateObjectBufferATI glUpdateObjectBufferATI;

typedef void (*mogl_function_glGetObjectBufferfvATI)(GLuint buffer, GLenum pname, GLfloat *params);
mogl_function_glGetObjectBufferfvATI glGetObjectBufferfvATI;

typedef void (*mogl_function_glGetObjectBufferivATI)(GLuint buffer, GLenum pname, GLint *params);
mogl_function_glGetObjectBufferivATI glGetObjectBufferivATI;

typedef void (*mogl_function_glFreeObjectBufferATI)(GLuint buffer);
mogl_function_glFreeObjectBufferATI glFreeObjectBufferATI;

typedef void (*mogl_function_glArrayObjectATI)(GLenum array, GLint size, GLenum type, GLsizei stride, GLuint buffer, GLuint offset);
mogl_function_glArrayObjectATI glArrayObjectATI;

typedef void (*mogl_function_glGetArrayObjectfvATI)(GLenum array, GLenum pname, GLfloat *params);
mogl_function_glGetArrayObjectfvATI glGetArrayObjectfvATI;

typedef void (*mogl_function_glGetArrayObjectivATI)(GLenum array, GLenum pname, GLint *params);
mogl_function_glGetArrayObjectivATI glGetArrayObjectivATI;

typedef void (*mogl_function_glVariantArrayObjectATI)(GLuint id, GLenum type, GLsizei stride, GLuint buffer, GLuint offset);
mogl_function_glVariantArrayObjectATI glVariantArrayObjectATI;

typedef void (*mogl_function_glGetVariantArrayObjectfvATI)(GLuint id, GLenum pname, GLfloat *params);
mogl_function_glGetVariantArrayObjectfvATI glGetVariantArrayObjectfvATI;

typedef void (*mogl_function_glGetVariantArrayObjectivATI)(GLuint id, GLenum pname, GLint *params);
mogl_function_glGetVariantArrayObjectivATI glGetVariantArrayObjectivATI;
#define GL_ATI_vertex_attrib_array_object 1

typedef void (*mogl_function_glVertexAttribArrayObjectATI)(GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, GLuint buffer, GLuint offset);
mogl_function_glVertexAttribArrayObjectATI glVertexAttribArrayObjectATI;

typedef void (*mogl_function_glGetVertexAttribArrayObjectfvATI)(GLuint index, GLenum pname, GLfloat *params);
mogl_function_glGetVertexAttribArrayObjectfvATI glGetVertexAttribArrayObjectfvATI;

typedef void (*mogl_function_glGetVertexAttribArrayObjectivATI)(GLuint index, GLenum pname, GLint *params);
mogl_function_glGetVertexAttribArrayObjectivATI glGetVertexAttribArrayObjectivATI;
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

typedef void (*mogl_function_glVertexStream1sATI)(GLenum stream, GLshort x);
mogl_function_glVertexStream1sATI glVertexStream1sATI;

typedef void (*mogl_function_glVertexStream1svATI)(GLenum stream, GLshort *coords);
mogl_function_glVertexStream1svATI glVertexStream1svATI;

typedef void (*mogl_function_glVertexStream1iATI)(GLenum stream, GLint x);
mogl_function_glVertexStream1iATI glVertexStream1iATI;

typedef void (*mogl_function_glVertexStream1ivATI)(GLenum stream, GLint *coords);
mogl_function_glVertexStream1ivATI glVertexStream1ivATI;

typedef void (*mogl_function_glVertexStream1fATI)(GLenum stream, GLfloat x);
mogl_function_glVertexStream1fATI glVertexStream1fATI;

typedef void (*mogl_function_glVertexStream1fvATI)(GLenum stream, GLfloat *coords);
mogl_function_glVertexStream1fvATI glVertexStream1fvATI;

typedef void (*mogl_function_glVertexStream1dATI)(GLenum stream, GLdouble x);
mogl_function_glVertexStream1dATI glVertexStream1dATI;

typedef void (*mogl_function_glVertexStream1dvATI)(GLenum stream, GLdouble *coords);
mogl_function_glVertexStream1dvATI glVertexStream1dvATI;

typedef void (*mogl_function_glVertexStream2sATI)(GLenum stream, GLshort x, GLshort y);
mogl_function_glVertexStream2sATI glVertexStream2sATI;

typedef void (*mogl_function_glVertexStream2svATI)(GLenum stream, GLshort *coords);
mogl_function_glVertexStream2svATI glVertexStream2svATI;

typedef void (*mogl_function_glVertexStream2iATI)(GLenum stream, GLint x, GLint y);
mogl_function_glVertexStream2iATI glVertexStream2iATI;

typedef void (*mogl_function_glVertexStream2ivATI)(GLenum stream, GLint *coords);
mogl_function_glVertexStream2ivATI glVertexStream2ivATI;

typedef void (*mogl_function_glVertexStream2fATI)(GLenum stream, GLfloat x, GLfloat y);
mogl_function_glVertexStream2fATI glVertexStream2fATI;

typedef void (*mogl_function_glVertexStream2fvATI)(GLenum stream, GLfloat *coords);
mogl_function_glVertexStream2fvATI glVertexStream2fvATI;

typedef void (*mogl_function_glVertexStream2dATI)(GLenum stream, GLdouble x, GLdouble y);
mogl_function_glVertexStream2dATI glVertexStream2dATI;

typedef void (*mogl_function_glVertexStream2dvATI)(GLenum stream, GLdouble *coords);
mogl_function_glVertexStream2dvATI glVertexStream2dvATI;

typedef void (*mogl_function_glVertexStream3sATI)(GLenum stream, GLshort x, GLshort y, GLshort z);
mogl_function_glVertexStream3sATI glVertexStream3sATI;

typedef void (*mogl_function_glVertexStream3svATI)(GLenum stream, GLshort *coords);
mogl_function_glVertexStream3svATI glVertexStream3svATI;

typedef void (*mogl_function_glVertexStream3iATI)(GLenum stream, GLint x, GLint y, GLint z);
mogl_function_glVertexStream3iATI glVertexStream3iATI;

typedef void (*mogl_function_glVertexStream3ivATI)(GLenum stream, GLint *coords);
mogl_function_glVertexStream3ivATI glVertexStream3ivATI;

typedef void (*mogl_function_glVertexStream3fATI)(GLenum stream, GLfloat x, GLfloat y, GLfloat z);
mogl_function_glVertexStream3fATI glVertexStream3fATI;

typedef void (*mogl_function_glVertexStream3fvATI)(GLenum stream, GLfloat *coords);
mogl_function_glVertexStream3fvATI glVertexStream3fvATI;

typedef void (*mogl_function_glVertexStream3dATI)(GLenum stream, GLdouble x, GLdouble y, GLdouble z);
mogl_function_glVertexStream3dATI glVertexStream3dATI;

typedef void (*mogl_function_glVertexStream3dvATI)(GLenum stream, GLdouble *coords);
mogl_function_glVertexStream3dvATI glVertexStream3dvATI;

typedef void (*mogl_function_glVertexStream4sATI)(GLenum stream, GLshort x, GLshort y, GLshort z, GLshort w);
mogl_function_glVertexStream4sATI glVertexStream4sATI;

typedef void (*mogl_function_glVertexStream4svATI)(GLenum stream, GLshort *coords);
mogl_function_glVertexStream4svATI glVertexStream4svATI;

typedef void (*mogl_function_glVertexStream4iATI)(GLenum stream, GLint x, GLint y, GLint z, GLint w);
mogl_function_glVertexStream4iATI glVertexStream4iATI;

typedef void (*mogl_function_glVertexStream4ivATI)(GLenum stream, GLint *coords);
mogl_function_glVertexStream4ivATI glVertexStream4ivATI;

typedef void (*mogl_function_glVertexStream4fATI)(GLenum stream, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
mogl_function_glVertexStream4fATI glVertexStream4fATI;

typedef void (*mogl_function_glVertexStream4fvATI)(GLenum stream, GLfloat *coords);
mogl_function_glVertexStream4fvATI glVertexStream4fvATI;

typedef void (*mogl_function_glVertexStream4dATI)(GLenum stream, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
mogl_function_glVertexStream4dATI glVertexStream4dATI;

typedef void (*mogl_function_glVertexStream4dvATI)(GLenum stream, GLdouble *coords);
mogl_function_glVertexStream4dvATI glVertexStream4dvATI;

typedef void (*mogl_function_glNormalStream3bATI)(GLenum stream, GLbyte nx, GLbyte ny, GLbyte nz);
mogl_function_glNormalStream3bATI glNormalStream3bATI;

typedef void (*mogl_function_glNormalStream3bvATI)(GLenum stream, GLbyte *coords);
mogl_function_glNormalStream3bvATI glNormalStream3bvATI;

typedef void (*mogl_function_glNormalStream3sATI)(GLenum stream, GLshort nx, GLshort ny, GLshort nz);
mogl_function_glNormalStream3sATI glNormalStream3sATI;

typedef void (*mogl_function_glNormalStream3svATI)(GLenum stream, GLshort *coords);
mogl_function_glNormalStream3svATI glNormalStream3svATI;

typedef void (*mogl_function_glNormalStream3iATI)(GLenum stream, GLint nx, GLint ny, GLint nz);
mogl_function_glNormalStream3iATI glNormalStream3iATI;

typedef void (*mogl_function_glNormalStream3ivATI)(GLenum stream, GLint *coords);
mogl_function_glNormalStream3ivATI glNormalStream3ivATI;

typedef void (*mogl_function_glNormalStream3fATI)(GLenum stream, GLfloat nx, GLfloat ny, GLfloat nz);
mogl_function_glNormalStream3fATI glNormalStream3fATI;

typedef void (*mogl_function_glNormalStream3fvATI)(GLenum stream, GLfloat *coords);
mogl_function_glNormalStream3fvATI glNormalStream3fvATI;

typedef void (*mogl_function_glNormalStream3dATI)(GLenum stream, GLdouble nx, GLdouble ny, GLdouble nz);
mogl_function_glNormalStream3dATI glNormalStream3dATI;

typedef void (*mogl_function_glNormalStream3dvATI)(GLenum stream, GLdouble *coords);
mogl_function_glNormalStream3dvATI glNormalStream3dvATI;

typedef void (*mogl_function_glClientActiveVertexStreamATI)(GLenum stream);
mogl_function_glClientActiveVertexStreamATI glClientActiveVertexStreamATI;

typedef void (*mogl_function_glVertexBlendEnviATI)(GLenum pname, GLint param);
mogl_function_glVertexBlendEnviATI glVertexBlendEnviATI;

typedef void (*mogl_function_glVertexBlendEnvfATI)(GLenum pname, GLfloat param);
mogl_function_glVertexBlendEnvfATI glVertexBlendEnvfATI;
#define GL_EXT_422_pixels 1
#define GL_422_EXT 0x80CC
#define GL_422_REV_EXT 0x80CD
#define GL_422_AVERAGE_EXT 0x80CE
#define GL_422_REV_AVERAGE_EXT 0x80CF
#define GL_EXT_EGL_image_storage 1

typedef void (*mogl_function_glEGLImageTargetTexStorageEXT)(GLenum target, GLeglImageOES image, GLint *attrib_list);
mogl_function_glEGLImageTargetTexStorageEXT glEGLImageTargetTexStorageEXT;

typedef void (*mogl_function_glEGLImageTargetTextureStorageEXT)(GLuint texture, GLeglImageOES image, GLint *attrib_list);
mogl_function_glEGLImageTargetTextureStorageEXT glEGLImageTargetTextureStorageEXT;
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

typedef void (*mogl_function_glUniformBufferEXT)(GLuint program, GLint location, GLuint buffer);
mogl_function_glUniformBufferEXT glUniformBufferEXT;

typedef GLint  (*mogl_function_glGetUniformBufferSizeEXT)(GLuint program, GLint location);
mogl_function_glGetUniformBufferSizeEXT glGetUniformBufferSizeEXT;

typedef GLintptr  (*mogl_function_glGetUniformOffsetEXT)(GLuint program, GLint location);
mogl_function_glGetUniformOffsetEXT glGetUniformOffsetEXT;
#define GL_EXT_blend_color 1
#define GL_CONSTANT_COLOR_EXT 0x8001
#define GL_ONE_MINUS_CONSTANT_COLOR_EXT 0x8002
#define GL_CONSTANT_ALPHA_EXT 0x8003
#define GL_ONE_MINUS_CONSTANT_ALPHA_EXT 0x8004
#define GL_BLEND_COLOR_EXT 0x8005

typedef void (*mogl_function_glBlendColorEXT)(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);
mogl_function_glBlendColorEXT glBlendColorEXT;
#define GL_EXT_blend_equation_separate 1
#define GL_BLEND_EQUATION_RGB_EXT 0x8009
#define GL_BLEND_EQUATION_ALPHA_EXT 0x883D

typedef void (*mogl_function_glBlendEquationSeparateEXT)(GLenum modeRGB, GLenum modeAlpha);
mogl_function_glBlendEquationSeparateEXT glBlendEquationSeparateEXT;
#define GL_EXT_blend_func_separate 1
#define GL_BLEND_DST_RGB_EXT 0x80C8
#define GL_BLEND_SRC_RGB_EXT 0x80C9
#define GL_BLEND_DST_ALPHA_EXT 0x80CA
#define GL_BLEND_SRC_ALPHA_EXT 0x80CB

typedef void (*mogl_function_glBlendFuncSeparateEXT)(GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha);
mogl_function_glBlendFuncSeparateEXT glBlendFuncSeparateEXT;
#define GL_EXT_blend_logic_op 1
#define GL_EXT_blend_minmax 1
#define GL_MIN_EXT 0x8007
#define GL_MAX_EXT 0x8008
#define GL_FUNC_ADD_EXT 0x8006
#define GL_BLEND_EQUATION_EXT 0x8009

typedef void (*mogl_function_glBlendEquationEXT)(GLenum mode);
mogl_function_glBlendEquationEXT glBlendEquationEXT;
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

typedef void (*mogl_function_glColorSubTableEXT)(GLenum target, GLsizei start, GLsizei count, GLenum format, GLenum type, void * data);
mogl_function_glColorSubTableEXT glColorSubTableEXT;

typedef void (*mogl_function_glCopyColorSubTableEXT)(GLenum target, GLsizei start, GLint x, GLint y, GLsizei width);
mogl_function_glCopyColorSubTableEXT glCopyColorSubTableEXT;
#define GL_EXT_compiled_vertex_array 1
#define GL_ARRAY_ELEMENT_LOCK_FIRST_EXT 0x81A8
#define GL_ARRAY_ELEMENT_LOCK_COUNT_EXT 0x81A9

typedef void (*mogl_function_glLockArraysEXT)(GLint first, GLsizei count);
mogl_function_glLockArraysEXT glLockArraysEXT;

typedef void (*mogl_function_glUnlockArraysEXT)();
mogl_function_glUnlockArraysEXT glUnlockArraysEXT;
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

typedef void (*mogl_function_glConvolutionFilter1DEXT)(GLenum target, GLenum internalformat, GLsizei width, GLenum format, GLenum type, void * image);
mogl_function_glConvolutionFilter1DEXT glConvolutionFilter1DEXT;

typedef void (*mogl_function_glConvolutionFilter2DEXT)(GLenum target, GLenum internalformat, GLsizei width, GLsizei height, GLenum format, GLenum type, void * image);
mogl_function_glConvolutionFilter2DEXT glConvolutionFilter2DEXT;

typedef void (*mogl_function_glConvolutionParameterfEXT)(GLenum target, GLenum pname, GLfloat params);
mogl_function_glConvolutionParameterfEXT glConvolutionParameterfEXT;

typedef void (*mogl_function_glConvolutionParameterfvEXT)(GLenum target, GLenum pname, GLfloat *params);
mogl_function_glConvolutionParameterfvEXT glConvolutionParameterfvEXT;

typedef void (*mogl_function_glConvolutionParameteriEXT)(GLenum target, GLenum pname, GLint params);
mogl_function_glConvolutionParameteriEXT glConvolutionParameteriEXT;

typedef void (*mogl_function_glConvolutionParameterivEXT)(GLenum target, GLenum pname, GLint *params);
mogl_function_glConvolutionParameterivEXT glConvolutionParameterivEXT;

typedef void (*mogl_function_glCopyConvolutionFilter1DEXT)(GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width);
mogl_function_glCopyConvolutionFilter1DEXT glCopyConvolutionFilter1DEXT;

typedef void (*mogl_function_glCopyConvolutionFilter2DEXT)(GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height);
mogl_function_glCopyConvolutionFilter2DEXT glCopyConvolutionFilter2DEXT;

typedef void (*mogl_function_glGetConvolutionFilterEXT)(GLenum target, GLenum format, GLenum type, void * image);
mogl_function_glGetConvolutionFilterEXT glGetConvolutionFilterEXT;

typedef void (*mogl_function_glGetConvolutionParameterfvEXT)(GLenum target, GLenum pname, GLfloat *params);
mogl_function_glGetConvolutionParameterfvEXT glGetConvolutionParameterfvEXT;

typedef void (*mogl_function_glGetConvolutionParameterivEXT)(GLenum target, GLenum pname, GLint *params);
mogl_function_glGetConvolutionParameterivEXT glGetConvolutionParameterivEXT;

typedef void (*mogl_function_glGetSeparableFilterEXT)(GLenum target, GLenum format, GLenum type, void * row, void * column, void * span);
mogl_function_glGetSeparableFilterEXT glGetSeparableFilterEXT;

typedef void (*mogl_function_glSeparableFilter2DEXT)(GLenum target, GLenum internalformat, GLsizei width, GLsizei height, GLenum format, GLenum type, void * row, void * column);
mogl_function_glSeparableFilter2DEXT glSeparableFilter2DEXT;
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

typedef void (*mogl_function_glTangent3bEXT)(GLbyte tx, GLbyte ty, GLbyte tz);
mogl_function_glTangent3bEXT glTangent3bEXT;

typedef void (*mogl_function_glTangent3bvEXT)(GLbyte *v);
mogl_function_glTangent3bvEXT glTangent3bvEXT;

typedef void (*mogl_function_glTangent3dEXT)(GLdouble tx, GLdouble ty, GLdouble tz);
mogl_function_glTangent3dEXT glTangent3dEXT;

typedef void (*mogl_function_glTangent3dvEXT)(GLdouble *v);
mogl_function_glTangent3dvEXT glTangent3dvEXT;

typedef void (*mogl_function_glTangent3fEXT)(GLfloat tx, GLfloat ty, GLfloat tz);
mogl_function_glTangent3fEXT glTangent3fEXT;

typedef void (*mogl_function_glTangent3fvEXT)(GLfloat *v);
mogl_function_glTangent3fvEXT glTangent3fvEXT;

typedef void (*mogl_function_glTangent3iEXT)(GLint tx, GLint ty, GLint tz);
mogl_function_glTangent3iEXT glTangent3iEXT;

typedef void (*mogl_function_glTangent3ivEXT)(GLint *v);
mogl_function_glTangent3ivEXT glTangent3ivEXT;

typedef void (*mogl_function_glTangent3sEXT)(GLshort tx, GLshort ty, GLshort tz);
mogl_function_glTangent3sEXT glTangent3sEXT;

typedef void (*mogl_function_glTangent3svEXT)(GLshort *v);
mogl_function_glTangent3svEXT glTangent3svEXT;

typedef void (*mogl_function_glBinormal3bEXT)(GLbyte bx, GLbyte by, GLbyte bz);
mogl_function_glBinormal3bEXT glBinormal3bEXT;

typedef void (*mogl_function_glBinormal3bvEXT)(GLbyte *v);
mogl_function_glBinormal3bvEXT glBinormal3bvEXT;

typedef void (*mogl_function_glBinormal3dEXT)(GLdouble bx, GLdouble by, GLdouble bz);
mogl_function_glBinormal3dEXT glBinormal3dEXT;

typedef void (*mogl_function_glBinormal3dvEXT)(GLdouble *v);
mogl_function_glBinormal3dvEXT glBinormal3dvEXT;

typedef void (*mogl_function_glBinormal3fEXT)(GLfloat bx, GLfloat by, GLfloat bz);
mogl_function_glBinormal3fEXT glBinormal3fEXT;

typedef void (*mogl_function_glBinormal3fvEXT)(GLfloat *v);
mogl_function_glBinormal3fvEXT glBinormal3fvEXT;

typedef void (*mogl_function_glBinormal3iEXT)(GLint bx, GLint by, GLint bz);
mogl_function_glBinormal3iEXT glBinormal3iEXT;

typedef void (*mogl_function_glBinormal3ivEXT)(GLint *v);
mogl_function_glBinormal3ivEXT glBinormal3ivEXT;

typedef void (*mogl_function_glBinormal3sEXT)(GLshort bx, GLshort by, GLshort bz);
mogl_function_glBinormal3sEXT glBinormal3sEXT;

typedef void (*mogl_function_glBinormal3svEXT)(GLshort *v);
mogl_function_glBinormal3svEXT glBinormal3svEXT;

typedef void (*mogl_function_glTangentPointerEXT)(GLenum type, GLsizei stride, void * pointer);
mogl_function_glTangentPointerEXT glTangentPointerEXT;

typedef void (*mogl_function_glBinormalPointerEXT)(GLenum type, GLsizei stride, void * pointer);
mogl_function_glBinormalPointerEXT glBinormalPointerEXT;
#define GL_EXT_copy_texture 1

typedef void (*mogl_function_glCopyTexImage1DEXT)(GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border);
mogl_function_glCopyTexImage1DEXT glCopyTexImage1DEXT;

typedef void (*mogl_function_glCopyTexImage2DEXT)(GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border);
mogl_function_glCopyTexImage2DEXT glCopyTexImage2DEXT;

typedef void (*mogl_function_glCopyTexSubImage1DEXT)(GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width);
mogl_function_glCopyTexSubImage1DEXT glCopyTexSubImage1DEXT;

typedef void (*mogl_function_glCopyTexSubImage2DEXT)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height);
mogl_function_glCopyTexSubImage2DEXT glCopyTexSubImage2DEXT;

typedef void (*mogl_function_glCopyTexSubImage3DEXT)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height);
mogl_function_glCopyTexSubImage3DEXT glCopyTexSubImage3DEXT;
#define GL_EXT_cull_vertex 1
#define GL_CULL_VERTEX_EXT 0x81AA
#define GL_CULL_VERTEX_EYE_POSITION_EXT 0x81AB
#define GL_CULL_VERTEX_OBJECT_POSITION_EXT 0x81AC

typedef void (*mogl_function_glCullParameterdvEXT)(GLenum pname, GLdouble *params);
mogl_function_glCullParameterdvEXT glCullParameterdvEXT;

typedef void (*mogl_function_glCullParameterfvEXT)(GLenum pname, GLfloat *params);
mogl_function_glCullParameterfvEXT glCullParameterfvEXT;
#define GL_EXT_debug_label 1
#define GL_PROGRAM_PIPELINE_OBJECT_EXT 0x8A4F
#define GL_PROGRAM_OBJECT_EXT 0x8B40
#define GL_SHADER_OBJECT_EXT 0x8B48
#define GL_BUFFER_OBJECT_EXT 0x9151
#define GL_QUERY_OBJECT_EXT 0x9153
#define GL_VERTEX_ARRAY_OBJECT_EXT 0x9154

typedef void (*mogl_function_glLabelObjectEXT)(GLenum type, GLuint object, GLsizei length, GLchar *label);
mogl_function_glLabelObjectEXT glLabelObjectEXT;

typedef void (*mogl_function_glGetObjectLabelEXT)(GLenum type, GLuint object, GLsizei bufSize, GLsizei *length, GLchar *label);
mogl_function_glGetObjectLabelEXT glGetObjectLabelEXT;
#define GL_EXT_debug_marker 1

typedef void (*mogl_function_glInsertEventMarkerEXT)(GLsizei length, GLchar *marker);
mogl_function_glInsertEventMarkerEXT glInsertEventMarkerEXT;

typedef void (*mogl_function_glPushGroupMarkerEXT)(GLsizei length, GLchar *marker);
mogl_function_glPushGroupMarkerEXT glPushGroupMarkerEXT;

typedef void (*mogl_function_glPopGroupMarkerEXT)();
mogl_function_glPopGroupMarkerEXT glPopGroupMarkerEXT;
#define GL_EXT_depth_bounds_test 1
#define GL_DEPTH_BOUNDS_TEST_EXT 0x8890
#define GL_DEPTH_BOUNDS_EXT 0x8891

typedef void (*mogl_function_glDepthBoundsEXT)(GLclampd zmin, GLclampd zmax);
mogl_function_glDepthBoundsEXT glDepthBoundsEXT;
#define GL_EXT_direct_state_access 1
#define GL_PROGRAM_MATRIX_EXT 0x8E2D
#define GL_TRANSPOSE_PROGRAM_MATRIX_EXT 0x8E2E
#define GL_PROGRAM_MATRIX_STACK_DEPTH_EXT 0x8E2F

typedef void (*mogl_function_glMatrixLoadfEXT)(GLenum mode, GLfloat *m);
mogl_function_glMatrixLoadfEXT glMatrixLoadfEXT;

typedef void (*mogl_function_glMatrixLoaddEXT)(GLenum mode, GLdouble *m);
mogl_function_glMatrixLoaddEXT glMatrixLoaddEXT;

typedef void (*mogl_function_glMatrixMultfEXT)(GLenum mode, GLfloat *m);
mogl_function_glMatrixMultfEXT glMatrixMultfEXT;

typedef void (*mogl_function_glMatrixMultdEXT)(GLenum mode, GLdouble *m);
mogl_function_glMatrixMultdEXT glMatrixMultdEXT;

typedef void (*mogl_function_glMatrixLoadIdentityEXT)(GLenum mode);
mogl_function_glMatrixLoadIdentityEXT glMatrixLoadIdentityEXT;

typedef void (*mogl_function_glMatrixRotatefEXT)(GLenum mode, GLfloat angle, GLfloat x, GLfloat y, GLfloat z);
mogl_function_glMatrixRotatefEXT glMatrixRotatefEXT;

typedef void (*mogl_function_glMatrixRotatedEXT)(GLenum mode, GLdouble angle, GLdouble x, GLdouble y, GLdouble z);
mogl_function_glMatrixRotatedEXT glMatrixRotatedEXT;

typedef void (*mogl_function_glMatrixScalefEXT)(GLenum mode, GLfloat x, GLfloat y, GLfloat z);
mogl_function_glMatrixScalefEXT glMatrixScalefEXT;

typedef void (*mogl_function_glMatrixScaledEXT)(GLenum mode, GLdouble x, GLdouble y, GLdouble z);
mogl_function_glMatrixScaledEXT glMatrixScaledEXT;

typedef void (*mogl_function_glMatrixTranslatefEXT)(GLenum mode, GLfloat x, GLfloat y, GLfloat z);
mogl_function_glMatrixTranslatefEXT glMatrixTranslatefEXT;

typedef void (*mogl_function_glMatrixTranslatedEXT)(GLenum mode, GLdouble x, GLdouble y, GLdouble z);
mogl_function_glMatrixTranslatedEXT glMatrixTranslatedEXT;

typedef void (*mogl_function_glMatrixFrustumEXT)(GLenum mode, GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar);
mogl_function_glMatrixFrustumEXT glMatrixFrustumEXT;

typedef void (*mogl_function_glMatrixOrthoEXT)(GLenum mode, GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar);
mogl_function_glMatrixOrthoEXT glMatrixOrthoEXT;

typedef void (*mogl_function_glMatrixPopEXT)(GLenum mode);
mogl_function_glMatrixPopEXT glMatrixPopEXT;

typedef void (*mogl_function_glMatrixPushEXT)(GLenum mode);
mogl_function_glMatrixPushEXT glMatrixPushEXT;

typedef void (*mogl_function_glClientAttribDefaultEXT)(GLbitfield mask);
mogl_function_glClientAttribDefaultEXT glClientAttribDefaultEXT;

typedef void (*mogl_function_glPushClientAttribDefaultEXT)(GLbitfield mask);
mogl_function_glPushClientAttribDefaultEXT glPushClientAttribDefaultEXT;

typedef void (*mogl_function_glTextureParameterfEXT)(GLuint texture, GLenum target, GLenum pname, GLfloat param);
mogl_function_glTextureParameterfEXT glTextureParameterfEXT;

typedef void (*mogl_function_glTextureParameterfvEXT)(GLuint texture, GLenum target, GLenum pname, GLfloat *params);
mogl_function_glTextureParameterfvEXT glTextureParameterfvEXT;

typedef void (*mogl_function_glTextureParameteriEXT)(GLuint texture, GLenum target, GLenum pname, GLint param);
mogl_function_glTextureParameteriEXT glTextureParameteriEXT;

typedef void (*mogl_function_glTextureParameterivEXT)(GLuint texture, GLenum target, GLenum pname, GLint *params);
mogl_function_glTextureParameterivEXT glTextureParameterivEXT;

typedef void (*mogl_function_glTextureImage1DEXT)(GLuint texture, GLenum target, GLint level, GLint internalformat, GLsizei width, GLint border, GLenum format, GLenum type, void * pixels);
mogl_function_glTextureImage1DEXT glTextureImage1DEXT;

typedef void (*mogl_function_glTextureImage2DEXT)(GLuint texture, GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, void * pixels);
mogl_function_glTextureImage2DEXT glTextureImage2DEXT;

typedef void (*mogl_function_glTextureSubImage1DEXT)(GLuint texture, GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, void * pixels);
mogl_function_glTextureSubImage1DEXT glTextureSubImage1DEXT;

typedef void (*mogl_function_glTextureSubImage2DEXT)(GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, void * pixels);
mogl_function_glTextureSubImage2DEXT glTextureSubImage2DEXT;

typedef void (*mogl_function_glCopyTextureImage1DEXT)(GLuint texture, GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border);
mogl_function_glCopyTextureImage1DEXT glCopyTextureImage1DEXT;

typedef void (*mogl_function_glCopyTextureImage2DEXT)(GLuint texture, GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border);
mogl_function_glCopyTextureImage2DEXT glCopyTextureImage2DEXT;

typedef void (*mogl_function_glCopyTextureSubImage1DEXT)(GLuint texture, GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width);
mogl_function_glCopyTextureSubImage1DEXT glCopyTextureSubImage1DEXT;

typedef void (*mogl_function_glCopyTextureSubImage2DEXT)(GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height);
mogl_function_glCopyTextureSubImage2DEXT glCopyTextureSubImage2DEXT;

typedef void (*mogl_function_glGetTextureImageEXT)(GLuint texture, GLenum target, GLint level, GLenum format, GLenum type, void * pixels);
mogl_function_glGetTextureImageEXT glGetTextureImageEXT;

typedef void (*mogl_function_glGetTextureParameterfvEXT)(GLuint texture, GLenum target, GLenum pname, GLfloat *params);
mogl_function_glGetTextureParameterfvEXT glGetTextureParameterfvEXT;

typedef void (*mogl_function_glGetTextureParameterivEXT)(GLuint texture, GLenum target, GLenum pname, GLint *params);
mogl_function_glGetTextureParameterivEXT glGetTextureParameterivEXT;

typedef void (*mogl_function_glGetTextureLevelParameterfvEXT)(GLuint texture, GLenum target, GLint level, GLenum pname, GLfloat *params);
mogl_function_glGetTextureLevelParameterfvEXT glGetTextureLevelParameterfvEXT;

typedef void (*mogl_function_glGetTextureLevelParameterivEXT)(GLuint texture, GLenum target, GLint level, GLenum pname, GLint *params);
mogl_function_glGetTextureLevelParameterivEXT glGetTextureLevelParameterivEXT;

typedef void (*mogl_function_glTextureImage3DEXT)(GLuint texture, GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, void * pixels);
mogl_function_glTextureImage3DEXT glTextureImage3DEXT;

typedef void (*mogl_function_glTextureSubImage3DEXT)(GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, void * pixels);
mogl_function_glTextureSubImage3DEXT glTextureSubImage3DEXT;

typedef void (*mogl_function_glCopyTextureSubImage3DEXT)(GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height);
mogl_function_glCopyTextureSubImage3DEXT glCopyTextureSubImage3DEXT;

typedef void (*mogl_function_glBindMultiTextureEXT)(GLenum texunit, GLenum target, GLuint texture);
mogl_function_glBindMultiTextureEXT glBindMultiTextureEXT;

typedef void (*mogl_function_glMultiTexCoordPointerEXT)(GLenum texunit, GLint size, GLenum type, GLsizei stride, void * pointer);
mogl_function_glMultiTexCoordPointerEXT glMultiTexCoordPointerEXT;

typedef void (*mogl_function_glMultiTexEnvfEXT)(GLenum texunit, GLenum target, GLenum pname, GLfloat param);
mogl_function_glMultiTexEnvfEXT glMultiTexEnvfEXT;

typedef void (*mogl_function_glMultiTexEnvfvEXT)(GLenum texunit, GLenum target, GLenum pname, GLfloat *params);
mogl_function_glMultiTexEnvfvEXT glMultiTexEnvfvEXT;

typedef void (*mogl_function_glMultiTexEnviEXT)(GLenum texunit, GLenum target, GLenum pname, GLint param);
mogl_function_glMultiTexEnviEXT glMultiTexEnviEXT;

typedef void (*mogl_function_glMultiTexEnvivEXT)(GLenum texunit, GLenum target, GLenum pname, GLint *params);
mogl_function_glMultiTexEnvivEXT glMultiTexEnvivEXT;

typedef void (*mogl_function_glMultiTexGendEXT)(GLenum texunit, GLenum coord, GLenum pname, GLdouble param);
mogl_function_glMultiTexGendEXT glMultiTexGendEXT;

typedef void (*mogl_function_glMultiTexGendvEXT)(GLenum texunit, GLenum coord, GLenum pname, GLdouble *params);
mogl_function_glMultiTexGendvEXT glMultiTexGendvEXT;

typedef void (*mogl_function_glMultiTexGenfEXT)(GLenum texunit, GLenum coord, GLenum pname, GLfloat param);
mogl_function_glMultiTexGenfEXT glMultiTexGenfEXT;

typedef void (*mogl_function_glMultiTexGenfvEXT)(GLenum texunit, GLenum coord, GLenum pname, GLfloat *params);
mogl_function_glMultiTexGenfvEXT glMultiTexGenfvEXT;

typedef void (*mogl_function_glMultiTexGeniEXT)(GLenum texunit, GLenum coord, GLenum pname, GLint param);
mogl_function_glMultiTexGeniEXT glMultiTexGeniEXT;

typedef void (*mogl_function_glMultiTexGenivEXT)(GLenum texunit, GLenum coord, GLenum pname, GLint *params);
mogl_function_glMultiTexGenivEXT glMultiTexGenivEXT;

typedef void (*mogl_function_glGetMultiTexEnvfvEXT)(GLenum texunit, GLenum target, GLenum pname, GLfloat *params);
mogl_function_glGetMultiTexEnvfvEXT glGetMultiTexEnvfvEXT;

typedef void (*mogl_function_glGetMultiTexEnvivEXT)(GLenum texunit, GLenum target, GLenum pname, GLint *params);
mogl_function_glGetMultiTexEnvivEXT glGetMultiTexEnvivEXT;

typedef void (*mogl_function_glGetMultiTexGendvEXT)(GLenum texunit, GLenum coord, GLenum pname, GLdouble *params);
mogl_function_glGetMultiTexGendvEXT glGetMultiTexGendvEXT;

typedef void (*mogl_function_glGetMultiTexGenfvEXT)(GLenum texunit, GLenum coord, GLenum pname, GLfloat *params);
mogl_function_glGetMultiTexGenfvEXT glGetMultiTexGenfvEXT;

typedef void (*mogl_function_glGetMultiTexGenivEXT)(GLenum texunit, GLenum coord, GLenum pname, GLint *params);
mogl_function_glGetMultiTexGenivEXT glGetMultiTexGenivEXT;

typedef void (*mogl_function_glMultiTexParameteriEXT)(GLenum texunit, GLenum target, GLenum pname, GLint param);
mogl_function_glMultiTexParameteriEXT glMultiTexParameteriEXT;

typedef void (*mogl_function_glMultiTexParameterivEXT)(GLenum texunit, GLenum target, GLenum pname, GLint *params);
mogl_function_glMultiTexParameterivEXT glMultiTexParameterivEXT;

typedef void (*mogl_function_glMultiTexParameterfEXT)(GLenum texunit, GLenum target, GLenum pname, GLfloat param);
mogl_function_glMultiTexParameterfEXT glMultiTexParameterfEXT;

typedef void (*mogl_function_glMultiTexParameterfvEXT)(GLenum texunit, GLenum target, GLenum pname, GLfloat *params);
mogl_function_glMultiTexParameterfvEXT glMultiTexParameterfvEXT;

typedef void (*mogl_function_glMultiTexImage1DEXT)(GLenum texunit, GLenum target, GLint level, GLint internalformat, GLsizei width, GLint border, GLenum format, GLenum type, void * pixels);
mogl_function_glMultiTexImage1DEXT glMultiTexImage1DEXT;

typedef void (*mogl_function_glMultiTexImage2DEXT)(GLenum texunit, GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, void * pixels);
mogl_function_glMultiTexImage2DEXT glMultiTexImage2DEXT;

typedef void (*mogl_function_glMultiTexSubImage1DEXT)(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, void * pixels);
mogl_function_glMultiTexSubImage1DEXT glMultiTexSubImage1DEXT;

typedef void (*mogl_function_glMultiTexSubImage2DEXT)(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, void * pixels);
mogl_function_glMultiTexSubImage2DEXT glMultiTexSubImage2DEXT;

typedef void (*mogl_function_glCopyMultiTexImage1DEXT)(GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border);
mogl_function_glCopyMultiTexImage1DEXT glCopyMultiTexImage1DEXT;

typedef void (*mogl_function_glCopyMultiTexImage2DEXT)(GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border);
mogl_function_glCopyMultiTexImage2DEXT glCopyMultiTexImage2DEXT;

typedef void (*mogl_function_glCopyMultiTexSubImage1DEXT)(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width);
mogl_function_glCopyMultiTexSubImage1DEXT glCopyMultiTexSubImage1DEXT;

typedef void (*mogl_function_glCopyMultiTexSubImage2DEXT)(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height);
mogl_function_glCopyMultiTexSubImage2DEXT glCopyMultiTexSubImage2DEXT;

typedef void (*mogl_function_glGetMultiTexImageEXT)(GLenum texunit, GLenum target, GLint level, GLenum format, GLenum type, void * pixels);
mogl_function_glGetMultiTexImageEXT glGetMultiTexImageEXT;

typedef void (*mogl_function_glGetMultiTexParameterfvEXT)(GLenum texunit, GLenum target, GLenum pname, GLfloat *params);
mogl_function_glGetMultiTexParameterfvEXT glGetMultiTexParameterfvEXT;

typedef void (*mogl_function_glGetMultiTexParameterivEXT)(GLenum texunit, GLenum target, GLenum pname, GLint *params);
mogl_function_glGetMultiTexParameterivEXT glGetMultiTexParameterivEXT;

typedef void (*mogl_function_glGetMultiTexLevelParameterfvEXT)(GLenum texunit, GLenum target, GLint level, GLenum pname, GLfloat *params);
mogl_function_glGetMultiTexLevelParameterfvEXT glGetMultiTexLevelParameterfvEXT;

typedef void (*mogl_function_glGetMultiTexLevelParameterivEXT)(GLenum texunit, GLenum target, GLint level, GLenum pname, GLint *params);
mogl_function_glGetMultiTexLevelParameterivEXT glGetMultiTexLevelParameterivEXT;

typedef void (*mogl_function_glMultiTexImage3DEXT)(GLenum texunit, GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, void * pixels);
mogl_function_glMultiTexImage3DEXT glMultiTexImage3DEXT;

typedef void (*mogl_function_glMultiTexSubImage3DEXT)(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, void * pixels);
mogl_function_glMultiTexSubImage3DEXT glMultiTexSubImage3DEXT;

typedef void (*mogl_function_glCopyMultiTexSubImage3DEXT)(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height);
mogl_function_glCopyMultiTexSubImage3DEXT glCopyMultiTexSubImage3DEXT;

typedef void (*mogl_function_glEnableClientStateIndexedEXT)(GLenum array, GLuint index);
mogl_function_glEnableClientStateIndexedEXT glEnableClientStateIndexedEXT;

typedef void (*mogl_function_glDisableClientStateIndexedEXT)(GLenum array, GLuint index);
mogl_function_glDisableClientStateIndexedEXT glDisableClientStateIndexedEXT;

typedef void (*mogl_function_glGetFloatIndexedvEXT)(GLenum target, GLuint index, GLfloat *data);
mogl_function_glGetFloatIndexedvEXT glGetFloatIndexedvEXT;

typedef void (*mogl_function_glGetDoubleIndexedvEXT)(GLenum target, GLuint index, GLdouble *data);
mogl_function_glGetDoubleIndexedvEXT glGetDoubleIndexedvEXT;

typedef void (*mogl_function_glGetPointerIndexedvEXT)(GLenum target, GLuint index, void * *data);
mogl_function_glGetPointerIndexedvEXT glGetPointerIndexedvEXT;

typedef void (*mogl_function_glEnableIndexedEXT)(GLenum target, GLuint index);
mogl_function_glEnableIndexedEXT glEnableIndexedEXT;

typedef void (*mogl_function_glDisableIndexedEXT)(GLenum target, GLuint index);
mogl_function_glDisableIndexedEXT glDisableIndexedEXT;

typedef GLboolean  (*mogl_function_glIsEnabledIndexedEXT)(GLenum target, GLuint index);
mogl_function_glIsEnabledIndexedEXT glIsEnabledIndexedEXT;

typedef void (*mogl_function_glGetIntegerIndexedvEXT)(GLenum target, GLuint index, GLint *data);
mogl_function_glGetIntegerIndexedvEXT glGetIntegerIndexedvEXT;

typedef void (*mogl_function_glGetBooleanIndexedvEXT)(GLenum target, GLuint index, GLboolean *data);
mogl_function_glGetBooleanIndexedvEXT glGetBooleanIndexedvEXT;

typedef void (*mogl_function_glCompressedTextureImage3DEXT)(GLuint texture, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, void * bits);
mogl_function_glCompressedTextureImage3DEXT glCompressedTextureImage3DEXT;

typedef void (*mogl_function_glCompressedTextureImage2DEXT)(GLuint texture, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, void * bits);
mogl_function_glCompressedTextureImage2DEXT glCompressedTextureImage2DEXT;

typedef void (*mogl_function_glCompressedTextureImage1DEXT)(GLuint texture, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, void * bits);
mogl_function_glCompressedTextureImage1DEXT glCompressedTextureImage1DEXT;

typedef void (*mogl_function_glCompressedTextureSubImage3DEXT)(GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, void * bits);
mogl_function_glCompressedTextureSubImage3DEXT glCompressedTextureSubImage3DEXT;

typedef void (*mogl_function_glCompressedTextureSubImage2DEXT)(GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, void * bits);
mogl_function_glCompressedTextureSubImage2DEXT glCompressedTextureSubImage2DEXT;

typedef void (*mogl_function_glCompressedTextureSubImage1DEXT)(GLuint texture, GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, void * bits);
mogl_function_glCompressedTextureSubImage1DEXT glCompressedTextureSubImage1DEXT;

typedef void (*mogl_function_glGetCompressedTextureImageEXT)(GLuint texture, GLenum target, GLint lod, void * img);
mogl_function_glGetCompressedTextureImageEXT glGetCompressedTextureImageEXT;

typedef void (*mogl_function_glCompressedMultiTexImage3DEXT)(GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, void * bits);
mogl_function_glCompressedMultiTexImage3DEXT glCompressedMultiTexImage3DEXT;

typedef void (*mogl_function_glCompressedMultiTexImage2DEXT)(GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, void * bits);
mogl_function_glCompressedMultiTexImage2DEXT glCompressedMultiTexImage2DEXT;

typedef void (*mogl_function_glCompressedMultiTexImage1DEXT)(GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, void * bits);
mogl_function_glCompressedMultiTexImage1DEXT glCompressedMultiTexImage1DEXT;

typedef void (*mogl_function_glCompressedMultiTexSubImage3DEXT)(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, void * bits);
mogl_function_glCompressedMultiTexSubImage3DEXT glCompressedMultiTexSubImage3DEXT;

typedef void (*mogl_function_glCompressedMultiTexSubImage2DEXT)(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, void * bits);
mogl_function_glCompressedMultiTexSubImage2DEXT glCompressedMultiTexSubImage2DEXT;

typedef void (*mogl_function_glCompressedMultiTexSubImage1DEXT)(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, void * bits);
mogl_function_glCompressedMultiTexSubImage1DEXT glCompressedMultiTexSubImage1DEXT;

typedef void (*mogl_function_glGetCompressedMultiTexImageEXT)(GLenum texunit, GLenum target, GLint lod, void * img);
mogl_function_glGetCompressedMultiTexImageEXT glGetCompressedMultiTexImageEXT;

typedef void (*mogl_function_glMatrixLoadTransposefEXT)(GLenum mode, GLfloat *m);
mogl_function_glMatrixLoadTransposefEXT glMatrixLoadTransposefEXT;

typedef void (*mogl_function_glMatrixLoadTransposedEXT)(GLenum mode, GLdouble *m);
mogl_function_glMatrixLoadTransposedEXT glMatrixLoadTransposedEXT;

typedef void (*mogl_function_glMatrixMultTransposefEXT)(GLenum mode, GLfloat *m);
mogl_function_glMatrixMultTransposefEXT glMatrixMultTransposefEXT;

typedef void (*mogl_function_glMatrixMultTransposedEXT)(GLenum mode, GLdouble *m);
mogl_function_glMatrixMultTransposedEXT glMatrixMultTransposedEXT;

typedef void (*mogl_function_glNamedBufferDataEXT)(GLuint buffer, GLsizeiptr size, void * data, GLenum usage);
mogl_function_glNamedBufferDataEXT glNamedBufferDataEXT;

typedef void (*mogl_function_glNamedBufferSubDataEXT)(GLuint buffer, GLintptr offset, GLsizeiptr size, void * data);
mogl_function_glNamedBufferSubDataEXT glNamedBufferSubDataEXT;

typedef void *  (*mogl_function_glMapNamedBufferEXT)(GLuint buffer, GLenum access);
mogl_function_glMapNamedBufferEXT glMapNamedBufferEXT;

typedef GLboolean  (*mogl_function_glUnmapNamedBufferEXT)(GLuint buffer);
mogl_function_glUnmapNamedBufferEXT glUnmapNamedBufferEXT;

typedef void (*mogl_function_glGetNamedBufferParameterivEXT)(GLuint buffer, GLenum pname, GLint *params);
mogl_function_glGetNamedBufferParameterivEXT glGetNamedBufferParameterivEXT;

typedef void (*mogl_function_glGetNamedBufferPointervEXT)(GLuint buffer, GLenum pname, void * *params);
mogl_function_glGetNamedBufferPointervEXT glGetNamedBufferPointervEXT;

typedef void (*mogl_function_glGetNamedBufferSubDataEXT)(GLuint buffer, GLintptr offset, GLsizeiptr size, void * data);
mogl_function_glGetNamedBufferSubDataEXT glGetNamedBufferSubDataEXT;

typedef void (*mogl_function_glProgramUniform1fEXT)(GLuint program, GLint location, GLfloat v0);
mogl_function_glProgramUniform1fEXT glProgramUniform1fEXT;

typedef void (*mogl_function_glProgramUniform2fEXT)(GLuint program, GLint location, GLfloat v0, GLfloat v1);
mogl_function_glProgramUniform2fEXT glProgramUniform2fEXT;

typedef void (*mogl_function_glProgramUniform3fEXT)(GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2);
mogl_function_glProgramUniform3fEXT glProgramUniform3fEXT;

typedef void (*mogl_function_glProgramUniform4fEXT)(GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3);
mogl_function_glProgramUniform4fEXT glProgramUniform4fEXT;

typedef void (*mogl_function_glProgramUniform1iEXT)(GLuint program, GLint location, GLint v0);
mogl_function_glProgramUniform1iEXT glProgramUniform1iEXT;

typedef void (*mogl_function_glProgramUniform2iEXT)(GLuint program, GLint location, GLint v0, GLint v1);
mogl_function_glProgramUniform2iEXT glProgramUniform2iEXT;

typedef void (*mogl_function_glProgramUniform3iEXT)(GLuint program, GLint location, GLint v0, GLint v1, GLint v2);
mogl_function_glProgramUniform3iEXT glProgramUniform3iEXT;

typedef void (*mogl_function_glProgramUniform4iEXT)(GLuint program, GLint location, GLint v0, GLint v1, GLint v2, GLint v3);
mogl_function_glProgramUniform4iEXT glProgramUniform4iEXT;

typedef void (*mogl_function_glProgramUniform1fvEXT)(GLuint program, GLint location, GLsizei count, GLfloat *value);
mogl_function_glProgramUniform1fvEXT glProgramUniform1fvEXT;

typedef void (*mogl_function_glProgramUniform2fvEXT)(GLuint program, GLint location, GLsizei count, GLfloat *value);
mogl_function_glProgramUniform2fvEXT glProgramUniform2fvEXT;

typedef void (*mogl_function_glProgramUniform3fvEXT)(GLuint program, GLint location, GLsizei count, GLfloat *value);
mogl_function_glProgramUniform3fvEXT glProgramUniform3fvEXT;

typedef void (*mogl_function_glProgramUniform4fvEXT)(GLuint program, GLint location, GLsizei count, GLfloat *value);
mogl_function_glProgramUniform4fvEXT glProgramUniform4fvEXT;

typedef void (*mogl_function_glProgramUniform1ivEXT)(GLuint program, GLint location, GLsizei count, GLint *value);
mogl_function_glProgramUniform1ivEXT glProgramUniform1ivEXT;

typedef void (*mogl_function_glProgramUniform2ivEXT)(GLuint program, GLint location, GLsizei count, GLint *value);
mogl_function_glProgramUniform2ivEXT glProgramUniform2ivEXT;

typedef void (*mogl_function_glProgramUniform3ivEXT)(GLuint program, GLint location, GLsizei count, GLint *value);
mogl_function_glProgramUniform3ivEXT glProgramUniform3ivEXT;

typedef void (*mogl_function_glProgramUniform4ivEXT)(GLuint program, GLint location, GLsizei count, GLint *value);
mogl_function_glProgramUniform4ivEXT glProgramUniform4ivEXT;

typedef void (*mogl_function_glProgramUniformMatrix2fvEXT)(GLuint program, GLint location, GLsizei count, GLboolean transpose, GLfloat *value);
mogl_function_glProgramUniformMatrix2fvEXT glProgramUniformMatrix2fvEXT;

typedef void (*mogl_function_glProgramUniformMatrix3fvEXT)(GLuint program, GLint location, GLsizei count, GLboolean transpose, GLfloat *value);
mogl_function_glProgramUniformMatrix3fvEXT glProgramUniformMatrix3fvEXT;

typedef void (*mogl_function_glProgramUniformMatrix4fvEXT)(GLuint program, GLint location, GLsizei count, GLboolean transpose, GLfloat *value);
mogl_function_glProgramUniformMatrix4fvEXT glProgramUniformMatrix4fvEXT;

typedef void (*mogl_function_glProgramUniformMatrix2x3fvEXT)(GLuint program, GLint location, GLsizei count, GLboolean transpose, GLfloat *value);
mogl_function_glProgramUniformMatrix2x3fvEXT glProgramUniformMatrix2x3fvEXT;

typedef void (*mogl_function_glProgramUniformMatrix3x2fvEXT)(GLuint program, GLint location, GLsizei count, GLboolean transpose, GLfloat *value);
mogl_function_glProgramUniformMatrix3x2fvEXT glProgramUniformMatrix3x2fvEXT;

typedef void (*mogl_function_glProgramUniformMatrix2x4fvEXT)(GLuint program, GLint location, GLsizei count, GLboolean transpose, GLfloat *value);
mogl_function_glProgramUniformMatrix2x4fvEXT glProgramUniformMatrix2x4fvEXT;

typedef void (*mogl_function_glProgramUniformMatrix4x2fvEXT)(GLuint program, GLint location, GLsizei count, GLboolean transpose, GLfloat *value);
mogl_function_glProgramUniformMatrix4x2fvEXT glProgramUniformMatrix4x2fvEXT;

typedef void (*mogl_function_glProgramUniformMatrix3x4fvEXT)(GLuint program, GLint location, GLsizei count, GLboolean transpose, GLfloat *value);
mogl_function_glProgramUniformMatrix3x4fvEXT glProgramUniformMatrix3x4fvEXT;

typedef void (*mogl_function_glProgramUniformMatrix4x3fvEXT)(GLuint program, GLint location, GLsizei count, GLboolean transpose, GLfloat *value);
mogl_function_glProgramUniformMatrix4x3fvEXT glProgramUniformMatrix4x3fvEXT;

typedef void (*mogl_function_glTextureBufferEXT)(GLuint texture, GLenum target, GLenum internalformat, GLuint buffer);
mogl_function_glTextureBufferEXT glTextureBufferEXT;

typedef void (*mogl_function_glMultiTexBufferEXT)(GLenum texunit, GLenum target, GLenum internalformat, GLuint buffer);
mogl_function_glMultiTexBufferEXT glMultiTexBufferEXT;

typedef void (*mogl_function_glTextureParameterIivEXT)(GLuint texture, GLenum target, GLenum pname, GLint *params);
mogl_function_glTextureParameterIivEXT glTextureParameterIivEXT;

typedef void (*mogl_function_glTextureParameterIuivEXT)(GLuint texture, GLenum target, GLenum pname, GLuint *params);
mogl_function_glTextureParameterIuivEXT glTextureParameterIuivEXT;

typedef void (*mogl_function_glGetTextureParameterIivEXT)(GLuint texture, GLenum target, GLenum pname, GLint *params);
mogl_function_glGetTextureParameterIivEXT glGetTextureParameterIivEXT;

typedef void (*mogl_function_glGetTextureParameterIuivEXT)(GLuint texture, GLenum target, GLenum pname, GLuint *params);
mogl_function_glGetTextureParameterIuivEXT glGetTextureParameterIuivEXT;

typedef void (*mogl_function_glMultiTexParameterIivEXT)(GLenum texunit, GLenum target, GLenum pname, GLint *params);
mogl_function_glMultiTexParameterIivEXT glMultiTexParameterIivEXT;

typedef void (*mogl_function_glMultiTexParameterIuivEXT)(GLenum texunit, GLenum target, GLenum pname, GLuint *params);
mogl_function_glMultiTexParameterIuivEXT glMultiTexParameterIuivEXT;

typedef void (*mogl_function_glGetMultiTexParameterIivEXT)(GLenum texunit, GLenum target, GLenum pname, GLint *params);
mogl_function_glGetMultiTexParameterIivEXT glGetMultiTexParameterIivEXT;

typedef void (*mogl_function_glGetMultiTexParameterIuivEXT)(GLenum texunit, GLenum target, GLenum pname, GLuint *params);
mogl_function_glGetMultiTexParameterIuivEXT glGetMultiTexParameterIuivEXT;

typedef void (*mogl_function_glProgramUniform1uiEXT)(GLuint program, GLint location, GLuint v0);
mogl_function_glProgramUniform1uiEXT glProgramUniform1uiEXT;

typedef void (*mogl_function_glProgramUniform2uiEXT)(GLuint program, GLint location, GLuint v0, GLuint v1);
mogl_function_glProgramUniform2uiEXT glProgramUniform2uiEXT;

typedef void (*mogl_function_glProgramUniform3uiEXT)(GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2);
mogl_function_glProgramUniform3uiEXT glProgramUniform3uiEXT;

typedef void (*mogl_function_glProgramUniform4uiEXT)(GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3);
mogl_function_glProgramUniform4uiEXT glProgramUniform4uiEXT;

typedef void (*mogl_function_glProgramUniform1uivEXT)(GLuint program, GLint location, GLsizei count, GLuint *value);
mogl_function_glProgramUniform1uivEXT glProgramUniform1uivEXT;

typedef void (*mogl_function_glProgramUniform2uivEXT)(GLuint program, GLint location, GLsizei count, GLuint *value);
mogl_function_glProgramUniform2uivEXT glProgramUniform2uivEXT;

typedef void (*mogl_function_glProgramUniform3uivEXT)(GLuint program, GLint location, GLsizei count, GLuint *value);
mogl_function_glProgramUniform3uivEXT glProgramUniform3uivEXT;

typedef void (*mogl_function_glProgramUniform4uivEXT)(GLuint program, GLint location, GLsizei count, GLuint *value);
mogl_function_glProgramUniform4uivEXT glProgramUniform4uivEXT;

typedef void (*mogl_function_glNamedProgramLocalParameters4fvEXT)(GLuint program, GLenum target, GLuint index, GLsizei count, GLfloat *params);
mogl_function_glNamedProgramLocalParameters4fvEXT glNamedProgramLocalParameters4fvEXT;

typedef void (*mogl_function_glNamedProgramLocalParameterI4iEXT)(GLuint program, GLenum target, GLuint index, GLint x, GLint y, GLint z, GLint w);
mogl_function_glNamedProgramLocalParameterI4iEXT glNamedProgramLocalParameterI4iEXT;

typedef void (*mogl_function_glNamedProgramLocalParameterI4ivEXT)(GLuint program, GLenum target, GLuint index, GLint *params);
mogl_function_glNamedProgramLocalParameterI4ivEXT glNamedProgramLocalParameterI4ivEXT;

typedef void (*mogl_function_glNamedProgramLocalParametersI4ivEXT)(GLuint program, GLenum target, GLuint index, GLsizei count, GLint *params);
mogl_function_glNamedProgramLocalParametersI4ivEXT glNamedProgramLocalParametersI4ivEXT;

typedef void (*mogl_function_glNamedProgramLocalParameterI4uiEXT)(GLuint program, GLenum target, GLuint index, GLuint x, GLuint y, GLuint z, GLuint w);
mogl_function_glNamedProgramLocalParameterI4uiEXT glNamedProgramLocalParameterI4uiEXT;

typedef void (*mogl_function_glNamedProgramLocalParameterI4uivEXT)(GLuint program, GLenum target, GLuint index, GLuint *params);
mogl_function_glNamedProgramLocalParameterI4uivEXT glNamedProgramLocalParameterI4uivEXT;

typedef void (*mogl_function_glNamedProgramLocalParametersI4uivEXT)(GLuint program, GLenum target, GLuint index, GLsizei count, GLuint *params);
mogl_function_glNamedProgramLocalParametersI4uivEXT glNamedProgramLocalParametersI4uivEXT;

typedef void (*mogl_function_glGetNamedProgramLocalParameterIivEXT)(GLuint program, GLenum target, GLuint index, GLint *params);
mogl_function_glGetNamedProgramLocalParameterIivEXT glGetNamedProgramLocalParameterIivEXT;

typedef void (*mogl_function_glGetNamedProgramLocalParameterIuivEXT)(GLuint program, GLenum target, GLuint index, GLuint *params);
mogl_function_glGetNamedProgramLocalParameterIuivEXT glGetNamedProgramLocalParameterIuivEXT;

typedef void (*mogl_function_glEnableClientStateiEXT)(GLenum array, GLuint index);
mogl_function_glEnableClientStateiEXT glEnableClientStateiEXT;

typedef void (*mogl_function_glDisableClientStateiEXT)(GLenum array, GLuint index);
mogl_function_glDisableClientStateiEXT glDisableClientStateiEXT;

typedef void (*mogl_function_glGetFloati_vEXT)(GLenum pname, GLuint index, GLfloat *params);
mogl_function_glGetFloati_vEXT glGetFloati_vEXT;

typedef void (*mogl_function_glGetDoublei_vEXT)(GLenum pname, GLuint index, GLdouble *params);
mogl_function_glGetDoublei_vEXT glGetDoublei_vEXT;

typedef void (*mogl_function_glGetPointeri_vEXT)(GLenum pname, GLuint index, void * *params);
mogl_function_glGetPointeri_vEXT glGetPointeri_vEXT;

typedef void (*mogl_function_glNamedProgramStringEXT)(GLuint program, GLenum target, GLenum format, GLsizei len, void * string);
mogl_function_glNamedProgramStringEXT glNamedProgramStringEXT;

typedef void (*mogl_function_glNamedProgramLocalParameter4dEXT)(GLuint program, GLenum target, GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
mogl_function_glNamedProgramLocalParameter4dEXT glNamedProgramLocalParameter4dEXT;

typedef void (*mogl_function_glNamedProgramLocalParameter4dvEXT)(GLuint program, GLenum target, GLuint index, GLdouble *params);
mogl_function_glNamedProgramLocalParameter4dvEXT glNamedProgramLocalParameter4dvEXT;

typedef void (*mogl_function_glNamedProgramLocalParameter4fEXT)(GLuint program, GLenum target, GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
mogl_function_glNamedProgramLocalParameter4fEXT glNamedProgramLocalParameter4fEXT;

typedef void (*mogl_function_glNamedProgramLocalParameter4fvEXT)(GLuint program, GLenum target, GLuint index, GLfloat *params);
mogl_function_glNamedProgramLocalParameter4fvEXT glNamedProgramLocalParameter4fvEXT;

typedef void (*mogl_function_glGetNamedProgramLocalParameterdvEXT)(GLuint program, GLenum target, GLuint index, GLdouble *params);
mogl_function_glGetNamedProgramLocalParameterdvEXT glGetNamedProgramLocalParameterdvEXT;

typedef void (*mogl_function_glGetNamedProgramLocalParameterfvEXT)(GLuint program, GLenum target, GLuint index, GLfloat *params);
mogl_function_glGetNamedProgramLocalParameterfvEXT glGetNamedProgramLocalParameterfvEXT;

typedef void (*mogl_function_glGetNamedProgramivEXT)(GLuint program, GLenum target, GLenum pname, GLint *params);
mogl_function_glGetNamedProgramivEXT glGetNamedProgramivEXT;

typedef void (*mogl_function_glGetNamedProgramStringEXT)(GLuint program, GLenum target, GLenum pname, void * string);
mogl_function_glGetNamedProgramStringEXT glGetNamedProgramStringEXT;

typedef void (*mogl_function_glNamedRenderbufferStorageEXT)(GLuint renderbuffer, GLenum internalformat, GLsizei width, GLsizei height);
mogl_function_glNamedRenderbufferStorageEXT glNamedRenderbufferStorageEXT;

typedef void (*mogl_function_glGetNamedRenderbufferParameterivEXT)(GLuint renderbuffer, GLenum pname, GLint *params);
mogl_function_glGetNamedRenderbufferParameterivEXT glGetNamedRenderbufferParameterivEXT;

typedef void (*mogl_function_glNamedRenderbufferStorageMultisampleEXT)(GLuint renderbuffer, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height);
mogl_function_glNamedRenderbufferStorageMultisampleEXT glNamedRenderbufferStorageMultisampleEXT;

typedef void (*mogl_function_glNamedRenderbufferStorageMultisampleCoverageEXT)(GLuint renderbuffer, GLsizei coverageSamples, GLsizei colorSamples, GLenum internalformat, GLsizei width, GLsizei height);
mogl_function_glNamedRenderbufferStorageMultisampleCoverageEXT glNamedRenderbufferStorageMultisampleCoverageEXT;

typedef GLenum  (*mogl_function_glCheckNamedFramebufferStatusEXT)(GLuint framebuffer, GLenum target);
mogl_function_glCheckNamedFramebufferStatusEXT glCheckNamedFramebufferStatusEXT;

typedef void (*mogl_function_glNamedFramebufferTexture1DEXT)(GLuint framebuffer, GLenum attachment, GLenum textarget, GLuint texture, GLint level);
mogl_function_glNamedFramebufferTexture1DEXT glNamedFramebufferTexture1DEXT;

typedef void (*mogl_function_glNamedFramebufferTexture2DEXT)(GLuint framebuffer, GLenum attachment, GLenum textarget, GLuint texture, GLint level);
mogl_function_glNamedFramebufferTexture2DEXT glNamedFramebufferTexture2DEXT;

typedef void (*mogl_function_glNamedFramebufferTexture3DEXT)(GLuint framebuffer, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint zoffset);
mogl_function_glNamedFramebufferTexture3DEXT glNamedFramebufferTexture3DEXT;

typedef void (*mogl_function_glNamedFramebufferRenderbufferEXT)(GLuint framebuffer, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer);
mogl_function_glNamedFramebufferRenderbufferEXT glNamedFramebufferRenderbufferEXT;

typedef void (*mogl_function_glGetNamedFramebufferAttachmentParameterivEXT)(GLuint framebuffer, GLenum attachment, GLenum pname, GLint *params);
mogl_function_glGetNamedFramebufferAttachmentParameterivEXT glGetNamedFramebufferAttachmentParameterivEXT;

typedef void (*mogl_function_glGenerateTextureMipmapEXT)(GLuint texture, GLenum target);
mogl_function_glGenerateTextureMipmapEXT glGenerateTextureMipmapEXT;

typedef void (*mogl_function_glGenerateMultiTexMipmapEXT)(GLenum texunit, GLenum target);
mogl_function_glGenerateMultiTexMipmapEXT glGenerateMultiTexMipmapEXT;

typedef void (*mogl_function_glFramebufferDrawBufferEXT)(GLuint framebuffer, GLenum mode);
mogl_function_glFramebufferDrawBufferEXT glFramebufferDrawBufferEXT;

typedef void (*mogl_function_glFramebufferDrawBuffersEXT)(GLuint framebuffer, GLsizei n, GLenum *bufs);
mogl_function_glFramebufferDrawBuffersEXT glFramebufferDrawBuffersEXT;

typedef void (*mogl_function_glFramebufferReadBufferEXT)(GLuint framebuffer, GLenum mode);
mogl_function_glFramebufferReadBufferEXT glFramebufferReadBufferEXT;

typedef void (*mogl_function_glGetFramebufferParameterivEXT)(GLuint framebuffer, GLenum pname, GLint *params);
mogl_function_glGetFramebufferParameterivEXT glGetFramebufferParameterivEXT;

typedef void (*mogl_function_glNamedCopyBufferSubDataEXT)(GLuint readBuffer, GLuint writeBuffer, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size);
mogl_function_glNamedCopyBufferSubDataEXT glNamedCopyBufferSubDataEXT;

typedef void (*mogl_function_glNamedFramebufferTextureEXT)(GLuint framebuffer, GLenum attachment, GLuint texture, GLint level);
mogl_function_glNamedFramebufferTextureEXT glNamedFramebufferTextureEXT;

typedef void (*mogl_function_glNamedFramebufferTextureLayerEXT)(GLuint framebuffer, GLenum attachment, GLuint texture, GLint level, GLint layer);
mogl_function_glNamedFramebufferTextureLayerEXT glNamedFramebufferTextureLayerEXT;

typedef void (*mogl_function_glNamedFramebufferTextureFaceEXT)(GLuint framebuffer, GLenum attachment, GLuint texture, GLint level, GLenum face);
mogl_function_glNamedFramebufferTextureFaceEXT glNamedFramebufferTextureFaceEXT;

typedef void (*mogl_function_glTextureRenderbufferEXT)(GLuint texture, GLenum target, GLuint renderbuffer);
mogl_function_glTextureRenderbufferEXT glTextureRenderbufferEXT;

typedef void (*mogl_function_glMultiTexRenderbufferEXT)(GLenum texunit, GLenum target, GLuint renderbuffer);
mogl_function_glMultiTexRenderbufferEXT glMultiTexRenderbufferEXT;

typedef void (*mogl_function_glVertexArrayVertexOffsetEXT)(GLuint vaobj, GLuint buffer, GLint size, GLenum type, GLsizei stride, GLintptr offset);
mogl_function_glVertexArrayVertexOffsetEXT glVertexArrayVertexOffsetEXT;

typedef void (*mogl_function_glVertexArrayColorOffsetEXT)(GLuint vaobj, GLuint buffer, GLint size, GLenum type, GLsizei stride, GLintptr offset);
mogl_function_glVertexArrayColorOffsetEXT glVertexArrayColorOffsetEXT;

typedef void (*mogl_function_glVertexArrayEdgeFlagOffsetEXT)(GLuint vaobj, GLuint buffer, GLsizei stride, GLintptr offset);
mogl_function_glVertexArrayEdgeFlagOffsetEXT glVertexArrayEdgeFlagOffsetEXT;

typedef void (*mogl_function_glVertexArrayIndexOffsetEXT)(GLuint vaobj, GLuint buffer, GLenum type, GLsizei stride, GLintptr offset);
mogl_function_glVertexArrayIndexOffsetEXT glVertexArrayIndexOffsetEXT;

typedef void (*mogl_function_glVertexArrayNormalOffsetEXT)(GLuint vaobj, GLuint buffer, GLenum type, GLsizei stride, GLintptr offset);
mogl_function_glVertexArrayNormalOffsetEXT glVertexArrayNormalOffsetEXT;

typedef void (*mogl_function_glVertexArrayTexCoordOffsetEXT)(GLuint vaobj, GLuint buffer, GLint size, GLenum type, GLsizei stride, GLintptr offset);
mogl_function_glVertexArrayTexCoordOffsetEXT glVertexArrayTexCoordOffsetEXT;

typedef void (*mogl_function_glVertexArrayMultiTexCoordOffsetEXT)(GLuint vaobj, GLuint buffer, GLenum texunit, GLint size, GLenum type, GLsizei stride, GLintptr offset);
mogl_function_glVertexArrayMultiTexCoordOffsetEXT glVertexArrayMultiTexCoordOffsetEXT;

typedef void (*mogl_function_glVertexArrayFogCoordOffsetEXT)(GLuint vaobj, GLuint buffer, GLenum type, GLsizei stride, GLintptr offset);
mogl_function_glVertexArrayFogCoordOffsetEXT glVertexArrayFogCoordOffsetEXT;

typedef void (*mogl_function_glVertexArraySecondaryColorOffsetEXT)(GLuint vaobj, GLuint buffer, GLint size, GLenum type, GLsizei stride, GLintptr offset);
mogl_function_glVertexArraySecondaryColorOffsetEXT glVertexArraySecondaryColorOffsetEXT;

typedef void (*mogl_function_glVertexArrayVertexAttribOffsetEXT)(GLuint vaobj, GLuint buffer, GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, GLintptr offset);
mogl_function_glVertexArrayVertexAttribOffsetEXT glVertexArrayVertexAttribOffsetEXT;

typedef void (*mogl_function_glVertexArrayVertexAttribIOffsetEXT)(GLuint vaobj, GLuint buffer, GLuint index, GLint size, GLenum type, GLsizei stride, GLintptr offset);
mogl_function_glVertexArrayVertexAttribIOffsetEXT glVertexArrayVertexAttribIOffsetEXT;

typedef void (*mogl_function_glEnableVertexArrayEXT)(GLuint vaobj, GLenum array);
mogl_function_glEnableVertexArrayEXT glEnableVertexArrayEXT;

typedef void (*mogl_function_glDisableVertexArrayEXT)(GLuint vaobj, GLenum array);
mogl_function_glDisableVertexArrayEXT glDisableVertexArrayEXT;

typedef void (*mogl_function_glEnableVertexArrayAttribEXT)(GLuint vaobj, GLuint index);
mogl_function_glEnableVertexArrayAttribEXT glEnableVertexArrayAttribEXT;

typedef void (*mogl_function_glDisableVertexArrayAttribEXT)(GLuint vaobj, GLuint index);
mogl_function_glDisableVertexArrayAttribEXT glDisableVertexArrayAttribEXT;

typedef void (*mogl_function_glGetVertexArrayIntegervEXT)(GLuint vaobj, GLenum pname, GLint *param);
mogl_function_glGetVertexArrayIntegervEXT glGetVertexArrayIntegervEXT;

typedef void (*mogl_function_glGetVertexArrayPointervEXT)(GLuint vaobj, GLenum pname, void * *param);
mogl_function_glGetVertexArrayPointervEXT glGetVertexArrayPointervEXT;

typedef void (*mogl_function_glGetVertexArrayIntegeri_vEXT)(GLuint vaobj, GLuint index, GLenum pname, GLint *param);
mogl_function_glGetVertexArrayIntegeri_vEXT glGetVertexArrayIntegeri_vEXT;

typedef void (*mogl_function_glGetVertexArrayPointeri_vEXT)(GLuint vaobj, GLuint index, GLenum pname, void * *param);
mogl_function_glGetVertexArrayPointeri_vEXT glGetVertexArrayPointeri_vEXT;

typedef void *  (*mogl_function_glMapNamedBufferRangeEXT)(GLuint buffer, GLintptr offset, GLsizeiptr length, GLbitfield access);
mogl_function_glMapNamedBufferRangeEXT glMapNamedBufferRangeEXT;

typedef void (*mogl_function_glFlushMappedNamedBufferRangeEXT)(GLuint buffer, GLintptr offset, GLsizeiptr length);
mogl_function_glFlushMappedNamedBufferRangeEXT glFlushMappedNamedBufferRangeEXT;

typedef void (*mogl_function_glNamedBufferStorageEXT)(GLuint buffer, GLsizeiptr size, void * data, GLbitfield flags);
mogl_function_glNamedBufferStorageEXT glNamedBufferStorageEXT;

typedef void (*mogl_function_glClearNamedBufferDataEXT)(GLuint buffer, GLenum internalformat, GLenum format, GLenum type, void * data);
mogl_function_glClearNamedBufferDataEXT glClearNamedBufferDataEXT;

typedef void (*mogl_function_glClearNamedBufferSubDataEXT)(GLuint buffer, GLenum internalformat, GLsizeiptr offset, GLsizeiptr size, GLenum format, GLenum type, void * data);
mogl_function_glClearNamedBufferSubDataEXT glClearNamedBufferSubDataEXT;

typedef void (*mogl_function_glNamedFramebufferParameteriEXT)(GLuint framebuffer, GLenum pname, GLint param);
mogl_function_glNamedFramebufferParameteriEXT glNamedFramebufferParameteriEXT;

typedef void (*mogl_function_glGetNamedFramebufferParameterivEXT)(GLuint framebuffer, GLenum pname, GLint *params);
mogl_function_glGetNamedFramebufferParameterivEXT glGetNamedFramebufferParameterivEXT;

typedef void (*mogl_function_glProgramUniform1dEXT)(GLuint program, GLint location, GLdouble x);
mogl_function_glProgramUniform1dEXT glProgramUniform1dEXT;

typedef void (*mogl_function_glProgramUniform2dEXT)(GLuint program, GLint location, GLdouble x, GLdouble y);
mogl_function_glProgramUniform2dEXT glProgramUniform2dEXT;

typedef void (*mogl_function_glProgramUniform3dEXT)(GLuint program, GLint location, GLdouble x, GLdouble y, GLdouble z);
mogl_function_glProgramUniform3dEXT glProgramUniform3dEXT;

typedef void (*mogl_function_glProgramUniform4dEXT)(GLuint program, GLint location, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
mogl_function_glProgramUniform4dEXT glProgramUniform4dEXT;

typedef void (*mogl_function_glProgramUniform1dvEXT)(GLuint program, GLint location, GLsizei count, GLdouble *value);
mogl_function_glProgramUniform1dvEXT glProgramUniform1dvEXT;

typedef void (*mogl_function_glProgramUniform2dvEXT)(GLuint program, GLint location, GLsizei count, GLdouble *value);
mogl_function_glProgramUniform2dvEXT glProgramUniform2dvEXT;

typedef void (*mogl_function_glProgramUniform3dvEXT)(GLuint program, GLint location, GLsizei count, GLdouble *value);
mogl_function_glProgramUniform3dvEXT glProgramUniform3dvEXT;

typedef void (*mogl_function_glProgramUniform4dvEXT)(GLuint program, GLint location, GLsizei count, GLdouble *value);
mogl_function_glProgramUniform4dvEXT glProgramUniform4dvEXT;

typedef void (*mogl_function_glProgramUniformMatrix2dvEXT)(GLuint program, GLint location, GLsizei count, GLboolean transpose, GLdouble *value);
mogl_function_glProgramUniformMatrix2dvEXT glProgramUniformMatrix2dvEXT;

typedef void (*mogl_function_glProgramUniformMatrix3dvEXT)(GLuint program, GLint location, GLsizei count, GLboolean transpose, GLdouble *value);
mogl_function_glProgramUniformMatrix3dvEXT glProgramUniformMatrix3dvEXT;

typedef void (*mogl_function_glProgramUniformMatrix4dvEXT)(GLuint program, GLint location, GLsizei count, GLboolean transpose, GLdouble *value);
mogl_function_glProgramUniformMatrix4dvEXT glProgramUniformMatrix4dvEXT;

typedef void (*mogl_function_glProgramUniformMatrix2x3dvEXT)(GLuint program, GLint location, GLsizei count, GLboolean transpose, GLdouble *value);
mogl_function_glProgramUniformMatrix2x3dvEXT glProgramUniformMatrix2x3dvEXT;

typedef void (*mogl_function_glProgramUniformMatrix2x4dvEXT)(GLuint program, GLint location, GLsizei count, GLboolean transpose, GLdouble *value);
mogl_function_glProgramUniformMatrix2x4dvEXT glProgramUniformMatrix2x4dvEXT;

typedef void (*mogl_function_glProgramUniformMatrix3x2dvEXT)(GLuint program, GLint location, GLsizei count, GLboolean transpose, GLdouble *value);
mogl_function_glProgramUniformMatrix3x2dvEXT glProgramUniformMatrix3x2dvEXT;

typedef void (*mogl_function_glProgramUniformMatrix3x4dvEXT)(GLuint program, GLint location, GLsizei count, GLboolean transpose, GLdouble *value);
mogl_function_glProgramUniformMatrix3x4dvEXT glProgramUniformMatrix3x4dvEXT;

typedef void (*mogl_function_glProgramUniformMatrix4x2dvEXT)(GLuint program, GLint location, GLsizei count, GLboolean transpose, GLdouble *value);
mogl_function_glProgramUniformMatrix4x2dvEXT glProgramUniformMatrix4x2dvEXT;

typedef void (*mogl_function_glProgramUniformMatrix4x3dvEXT)(GLuint program, GLint location, GLsizei count, GLboolean transpose, GLdouble *value);
mogl_function_glProgramUniformMatrix4x3dvEXT glProgramUniformMatrix4x3dvEXT;

typedef void (*mogl_function_glTextureBufferRangeEXT)(GLuint texture, GLenum target, GLenum internalformat, GLuint buffer, GLintptr offset, GLsizeiptr size);
mogl_function_glTextureBufferRangeEXT glTextureBufferRangeEXT;

typedef void (*mogl_function_glTextureStorage1DEXT)(GLuint texture, GLenum target, GLsizei levels, GLenum internalformat, GLsizei width);
mogl_function_glTextureStorage1DEXT glTextureStorage1DEXT;

typedef void (*mogl_function_glTextureStorage2DEXT)(GLuint texture, GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height);
mogl_function_glTextureStorage2DEXT glTextureStorage2DEXT;

typedef void (*mogl_function_glTextureStorage3DEXT)(GLuint texture, GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth);
mogl_function_glTextureStorage3DEXT glTextureStorage3DEXT;

typedef void (*mogl_function_glTextureStorage2DMultisampleEXT)(GLuint texture, GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations);
mogl_function_glTextureStorage2DMultisampleEXT glTextureStorage2DMultisampleEXT;

typedef void (*mogl_function_glTextureStorage3DMultisampleEXT)(GLuint texture, GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations);
mogl_function_glTextureStorage3DMultisampleEXT glTextureStorage3DMultisampleEXT;

typedef void (*mogl_function_glVertexArrayBindVertexBufferEXT)(GLuint vaobj, GLuint bindingindex, GLuint buffer, GLintptr offset, GLsizei stride);
mogl_function_glVertexArrayBindVertexBufferEXT glVertexArrayBindVertexBufferEXT;

typedef void (*mogl_function_glVertexArrayVertexAttribFormatEXT)(GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLboolean normalized, GLuint relativeoffset);
mogl_function_glVertexArrayVertexAttribFormatEXT glVertexArrayVertexAttribFormatEXT;

typedef void (*mogl_function_glVertexArrayVertexAttribIFormatEXT)(GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset);
mogl_function_glVertexArrayVertexAttribIFormatEXT glVertexArrayVertexAttribIFormatEXT;

typedef void (*mogl_function_glVertexArrayVertexAttribLFormatEXT)(GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset);
mogl_function_glVertexArrayVertexAttribLFormatEXT glVertexArrayVertexAttribLFormatEXT;

typedef void (*mogl_function_glVertexArrayVertexAttribBindingEXT)(GLuint vaobj, GLuint attribindex, GLuint bindingindex);
mogl_function_glVertexArrayVertexAttribBindingEXT glVertexArrayVertexAttribBindingEXT;

typedef void (*mogl_function_glVertexArrayVertexBindingDivisorEXT)(GLuint vaobj, GLuint bindingindex, GLuint divisor);
mogl_function_glVertexArrayVertexBindingDivisorEXT glVertexArrayVertexBindingDivisorEXT;

typedef void (*mogl_function_glVertexArrayVertexAttribLOffsetEXT)(GLuint vaobj, GLuint buffer, GLuint index, GLint size, GLenum type, GLsizei stride, GLintptr offset);
mogl_function_glVertexArrayVertexAttribLOffsetEXT glVertexArrayVertexAttribLOffsetEXT;

typedef void (*mogl_function_glTexturePageCommitmentEXT)(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLboolean commit);
mogl_function_glTexturePageCommitmentEXT glTexturePageCommitmentEXT;

typedef void (*mogl_function_glVertexArrayVertexAttribDivisorEXT)(GLuint vaobj, GLuint index, GLuint divisor);
mogl_function_glVertexArrayVertexAttribDivisorEXT glVertexArrayVertexAttribDivisorEXT;
#define GL_EXT_draw_buffers2 1

typedef void (*mogl_function_glColorMaskIndexedEXT)(GLuint index, GLboolean r, GLboolean g, GLboolean b, GLboolean a);
mogl_function_glColorMaskIndexedEXT glColorMaskIndexedEXT;
#define GL_EXT_draw_instanced 1

typedef void (*mogl_function_glDrawArraysInstancedEXT)(GLenum mode, GLint start, GLsizei count, GLsizei primcount);
mogl_function_glDrawArraysInstancedEXT glDrawArraysInstancedEXT;

typedef void (*mogl_function_glDrawElementsInstancedEXT)(GLenum mode, GLsizei count, GLenum type, void * indices, GLsizei primcount);
mogl_function_glDrawElementsInstancedEXT glDrawElementsInstancedEXT;
#define GL_EXT_draw_range_elements 1
#define GL_MAX_ELEMENTS_VERTICES_EXT 0x80E8
#define GL_MAX_ELEMENTS_INDICES_EXT 0x80E9

typedef void (*mogl_function_glDrawRangeElementsEXT)(GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, void * indices);
mogl_function_glDrawRangeElementsEXT glDrawRangeElementsEXT;
#define GL_EXT_external_buffer 1

typedef void (*mogl_function_glBufferStorageExternalEXT)(GLenum target, GLintptr offset, GLsizeiptr size, GLeglClientBufferEXT clientBuffer, GLbitfield flags);
mogl_function_glBufferStorageExternalEXT glBufferStorageExternalEXT;

typedef void (*mogl_function_glNamedBufferStorageExternalEXT)(GLuint buffer, GLintptr offset, GLsizeiptr size, GLeglClientBufferEXT clientBuffer, GLbitfield flags);
mogl_function_glNamedBufferStorageExternalEXT glNamedBufferStorageExternalEXT;
#define GL_EXT_fog_coord 1
#define GL_FOG_COORDINATE_SOURCE_EXT 0x8450
#define GL_FOG_COORDINATE_EXT 0x8451
#define GL_FRAGMENT_DEPTH_EXT 0x8452
#define GL_CURRENT_FOG_COORDINATE_EXT 0x8453
#define GL_FOG_COORDINATE_ARRAY_TYPE_EXT 0x8454
#define GL_FOG_COORDINATE_ARRAY_STRIDE_EXT 0x8455
#define GL_FOG_COORDINATE_ARRAY_POINTER_EXT 0x8456
#define GL_FOG_COORDINATE_ARRAY_EXT 0x8457

typedef void (*mogl_function_glFogCoordfEXT)(GLfloat coord);
mogl_function_glFogCoordfEXT glFogCoordfEXT;

typedef void (*mogl_function_glFogCoordfvEXT)(GLfloat *coord);
mogl_function_glFogCoordfvEXT glFogCoordfvEXT;

typedef void (*mogl_function_glFogCoorddEXT)(GLdouble coord);
mogl_function_glFogCoorddEXT glFogCoorddEXT;

typedef void (*mogl_function_glFogCoorddvEXT)(GLdouble *coord);
mogl_function_glFogCoorddvEXT glFogCoorddvEXT;

typedef void (*mogl_function_glFogCoordPointerEXT)(GLenum type, GLsizei stride, void * pointer);
mogl_function_glFogCoordPointerEXT glFogCoordPointerEXT;
#define GL_EXT_framebuffer_blit 1
#define GL_READ_FRAMEBUFFER_EXT 0x8CA8
#define GL_DRAW_FRAMEBUFFER_EXT 0x8CA9
#define GL_DRAW_FRAMEBUFFER_BINDING_EXT 0x8CA6
#define GL_READ_FRAMEBUFFER_BINDING_EXT 0x8CAA

typedef void (*mogl_function_glBlitFramebufferEXT)(GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter);
mogl_function_glBlitFramebufferEXT glBlitFramebufferEXT;
#define GL_EXT_framebuffer_blit_layers 1

typedef void (*mogl_function_glBlitFramebufferLayersEXT)(GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter);
mogl_function_glBlitFramebufferLayersEXT glBlitFramebufferLayersEXT;

typedef void (*mogl_function_glBlitFramebufferLayerEXT)(GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint srcLayer, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLint dstLayer, GLbitfield mask, GLenum filter);
mogl_function_glBlitFramebufferLayerEXT glBlitFramebufferLayerEXT;
#define GL_EXT_framebuffer_multisample 1
#define GL_RENDERBUFFER_SAMPLES_EXT 0x8CAB
#define GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_EXT 0x8D56
#define GL_MAX_SAMPLES_EXT 0x8D57

typedef void (*mogl_function_glRenderbufferStorageMultisampleEXT)(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height);
mogl_function_glRenderbufferStorageMultisampleEXT glRenderbufferStorageMultisampleEXT;
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

typedef GLboolean  (*mogl_function_glIsRenderbufferEXT)(GLuint renderbuffer);
mogl_function_glIsRenderbufferEXT glIsRenderbufferEXT;

typedef void (*mogl_function_glBindRenderbufferEXT)(GLenum target, GLuint renderbuffer);
mogl_function_glBindRenderbufferEXT glBindRenderbufferEXT;

typedef void (*mogl_function_glDeleteRenderbuffersEXT)(GLsizei n, GLuint *renderbuffers);
mogl_function_glDeleteRenderbuffersEXT glDeleteRenderbuffersEXT;

typedef void (*mogl_function_glGenRenderbuffersEXT)(GLsizei n, GLuint *renderbuffers);
mogl_function_glGenRenderbuffersEXT glGenRenderbuffersEXT;

typedef void (*mogl_function_glRenderbufferStorageEXT)(GLenum target, GLenum internalformat, GLsizei width, GLsizei height);
mogl_function_glRenderbufferStorageEXT glRenderbufferStorageEXT;

typedef void (*mogl_function_glGetRenderbufferParameterivEXT)(GLenum target, GLenum pname, GLint *params);
mogl_function_glGetRenderbufferParameterivEXT glGetRenderbufferParameterivEXT;

typedef GLboolean  (*mogl_function_glIsFramebufferEXT)(GLuint framebuffer);
mogl_function_glIsFramebufferEXT glIsFramebufferEXT;

typedef void (*mogl_function_glBindFramebufferEXT)(GLenum target, GLuint framebuffer);
mogl_function_glBindFramebufferEXT glBindFramebufferEXT;

typedef void (*mogl_function_glDeleteFramebuffersEXT)(GLsizei n, GLuint *framebuffers);
mogl_function_glDeleteFramebuffersEXT glDeleteFramebuffersEXT;

typedef void (*mogl_function_glGenFramebuffersEXT)(GLsizei n, GLuint *framebuffers);
mogl_function_glGenFramebuffersEXT glGenFramebuffersEXT;

typedef GLenum  (*mogl_function_glCheckFramebufferStatusEXT)(GLenum target);
mogl_function_glCheckFramebufferStatusEXT glCheckFramebufferStatusEXT;

typedef void (*mogl_function_glFramebufferTexture1DEXT)(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level);
mogl_function_glFramebufferTexture1DEXT glFramebufferTexture1DEXT;

typedef void (*mogl_function_glFramebufferTexture2DEXT)(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level);
mogl_function_glFramebufferTexture2DEXT glFramebufferTexture2DEXT;

typedef void (*mogl_function_glFramebufferTexture3DEXT)(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint zoffset);
mogl_function_glFramebufferTexture3DEXT glFramebufferTexture3DEXT;

typedef void (*mogl_function_glFramebufferRenderbufferEXT)(GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer);
mogl_function_glFramebufferRenderbufferEXT glFramebufferRenderbufferEXT;

typedef void (*mogl_function_glGetFramebufferAttachmentParameterivEXT)(GLenum target, GLenum attachment, GLenum pname, GLint *params);
mogl_function_glGetFramebufferAttachmentParameterivEXT glGetFramebufferAttachmentParameterivEXT;

typedef void (*mogl_function_glGenerateMipmapEXT)(GLenum target);
mogl_function_glGenerateMipmapEXT glGenerateMipmapEXT;
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

typedef void (*mogl_function_glProgramParameteriEXT)(GLuint program, GLenum pname, GLint value);
mogl_function_glProgramParameteriEXT glProgramParameteriEXT;
#define GL_EXT_gpu_program_parameters 1

typedef void (*mogl_function_glProgramEnvParameters4fvEXT)(GLenum target, GLuint index, GLsizei count, GLfloat *params);
mogl_function_glProgramEnvParameters4fvEXT glProgramEnvParameters4fvEXT;

typedef void (*mogl_function_glProgramLocalParameters4fvEXT)(GLenum target, GLuint index, GLsizei count, GLfloat *params);
mogl_function_glProgramLocalParameters4fvEXT glProgramLocalParameters4fvEXT;
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

typedef void (*mogl_function_glGetUniformuivEXT)(GLuint program, GLint location, GLuint *params);
mogl_function_glGetUniformuivEXT glGetUniformuivEXT;

typedef void (*mogl_function_glBindFragDataLocationEXT)(GLuint program, GLuint color, GLchar *name);
mogl_function_glBindFragDataLocationEXT glBindFragDataLocationEXT;

typedef GLint  (*mogl_function_glGetFragDataLocationEXT)(GLuint program, GLchar *name);
mogl_function_glGetFragDataLocationEXT glGetFragDataLocationEXT;

typedef void (*mogl_function_glUniform1uiEXT)(GLint location, GLuint v0);
mogl_function_glUniform1uiEXT glUniform1uiEXT;

typedef void (*mogl_function_glUniform2uiEXT)(GLint location, GLuint v0, GLuint v1);
mogl_function_glUniform2uiEXT glUniform2uiEXT;

typedef void (*mogl_function_glUniform3uiEXT)(GLint location, GLuint v0, GLuint v1, GLuint v2);
mogl_function_glUniform3uiEXT glUniform3uiEXT;

typedef void (*mogl_function_glUniform4uiEXT)(GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3);
mogl_function_glUniform4uiEXT glUniform4uiEXT;

typedef void (*mogl_function_glUniform1uivEXT)(GLint location, GLsizei count, GLuint *value);
mogl_function_glUniform1uivEXT glUniform1uivEXT;

typedef void (*mogl_function_glUniform2uivEXT)(GLint location, GLsizei count, GLuint *value);
mogl_function_glUniform2uivEXT glUniform2uivEXT;

typedef void (*mogl_function_glUniform3uivEXT)(GLint location, GLsizei count, GLuint *value);
mogl_function_glUniform3uivEXT glUniform3uivEXT;

typedef void (*mogl_function_glUniform4uivEXT)(GLint location, GLsizei count, GLuint *value);
mogl_function_glUniform4uivEXT glUniform4uivEXT;

typedef void (*mogl_function_glVertexAttribI1iEXT)(GLuint index, GLint x);
mogl_function_glVertexAttribI1iEXT glVertexAttribI1iEXT;

typedef void (*mogl_function_glVertexAttribI2iEXT)(GLuint index, GLint x, GLint y);
mogl_function_glVertexAttribI2iEXT glVertexAttribI2iEXT;

typedef void (*mogl_function_glVertexAttribI3iEXT)(GLuint index, GLint x, GLint y, GLint z);
mogl_function_glVertexAttribI3iEXT glVertexAttribI3iEXT;

typedef void (*mogl_function_glVertexAttribI4iEXT)(GLuint index, GLint x, GLint y, GLint z, GLint w);
mogl_function_glVertexAttribI4iEXT glVertexAttribI4iEXT;

typedef void (*mogl_function_glVertexAttribI1uiEXT)(GLuint index, GLuint x);
mogl_function_glVertexAttribI1uiEXT glVertexAttribI1uiEXT;

typedef void (*mogl_function_glVertexAttribI2uiEXT)(GLuint index, GLuint x, GLuint y);
mogl_function_glVertexAttribI2uiEXT glVertexAttribI2uiEXT;

typedef void (*mogl_function_glVertexAttribI3uiEXT)(GLuint index, GLuint x, GLuint y, GLuint z);
mogl_function_glVertexAttribI3uiEXT glVertexAttribI3uiEXT;

typedef void (*mogl_function_glVertexAttribI4uiEXT)(GLuint index, GLuint x, GLuint y, GLuint z, GLuint w);
mogl_function_glVertexAttribI4uiEXT glVertexAttribI4uiEXT;

typedef void (*mogl_function_glVertexAttribI1ivEXT)(GLuint index, GLint *v);
mogl_function_glVertexAttribI1ivEXT glVertexAttribI1ivEXT;

typedef void (*mogl_function_glVertexAttribI2ivEXT)(GLuint index, GLint *v);
mogl_function_glVertexAttribI2ivEXT glVertexAttribI2ivEXT;

typedef void (*mogl_function_glVertexAttribI3ivEXT)(GLuint index, GLint *v);
mogl_function_glVertexAttribI3ivEXT glVertexAttribI3ivEXT;

typedef void (*mogl_function_glVertexAttribI4ivEXT)(GLuint index, GLint *v);
mogl_function_glVertexAttribI4ivEXT glVertexAttribI4ivEXT;

typedef void (*mogl_function_glVertexAttribI1uivEXT)(GLuint index, GLuint *v);
mogl_function_glVertexAttribI1uivEXT glVertexAttribI1uivEXT;

typedef void (*mogl_function_glVertexAttribI2uivEXT)(GLuint index, GLuint *v);
mogl_function_glVertexAttribI2uivEXT glVertexAttribI2uivEXT;

typedef void (*mogl_function_glVertexAttribI3uivEXT)(GLuint index, GLuint *v);
mogl_function_glVertexAttribI3uivEXT glVertexAttribI3uivEXT;

typedef void (*mogl_function_glVertexAttribI4uivEXT)(GLuint index, GLuint *v);
mogl_function_glVertexAttribI4uivEXT glVertexAttribI4uivEXT;

typedef void (*mogl_function_glVertexAttribI4bvEXT)(GLuint index, GLbyte *v);
mogl_function_glVertexAttribI4bvEXT glVertexAttribI4bvEXT;

typedef void (*mogl_function_glVertexAttribI4svEXT)(GLuint index, GLshort *v);
mogl_function_glVertexAttribI4svEXT glVertexAttribI4svEXT;

typedef void (*mogl_function_glVertexAttribI4ubvEXT)(GLuint index, GLubyte *v);
mogl_function_glVertexAttribI4ubvEXT glVertexAttribI4ubvEXT;

typedef void (*mogl_function_glVertexAttribI4usvEXT)(GLuint index, GLushort *v);
mogl_function_glVertexAttribI4usvEXT glVertexAttribI4usvEXT;

typedef void (*mogl_function_glVertexAttribIPointerEXT)(GLuint index, GLint size, GLenum type, GLsizei stride, void * pointer);
mogl_function_glVertexAttribIPointerEXT glVertexAttribIPointerEXT;

typedef void (*mogl_function_glGetVertexAttribIivEXT)(GLuint index, GLenum pname, GLint *params);
mogl_function_glGetVertexAttribIivEXT glGetVertexAttribIivEXT;

typedef void (*mogl_function_glGetVertexAttribIuivEXT)(GLuint index, GLenum pname, GLuint *params);
mogl_function_glGetVertexAttribIuivEXT glGetVertexAttribIuivEXT;
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

typedef void (*mogl_function_glGetHistogramEXT)(GLenum target, GLboolean reset, GLenum format, GLenum type, void * values);
mogl_function_glGetHistogramEXT glGetHistogramEXT;

typedef void (*mogl_function_glGetHistogramParameterfvEXT)(GLenum target, GLenum pname, GLfloat *params);
mogl_function_glGetHistogramParameterfvEXT glGetHistogramParameterfvEXT;

typedef void (*mogl_function_glGetHistogramParameterivEXT)(GLenum target, GLenum pname, GLint *params);
mogl_function_glGetHistogramParameterivEXT glGetHistogramParameterivEXT;

typedef void (*mogl_function_glGetMinmaxEXT)(GLenum target, GLboolean reset, GLenum format, GLenum type, void * values);
mogl_function_glGetMinmaxEXT glGetMinmaxEXT;

typedef void (*mogl_function_glGetMinmaxParameterfvEXT)(GLenum target, GLenum pname, GLfloat *params);
mogl_function_glGetMinmaxParameterfvEXT glGetMinmaxParameterfvEXT;

typedef void (*mogl_function_glGetMinmaxParameterivEXT)(GLenum target, GLenum pname, GLint *params);
mogl_function_glGetMinmaxParameterivEXT glGetMinmaxParameterivEXT;

typedef void (*mogl_function_glHistogramEXT)(GLenum target, GLsizei width, GLenum internalformat, GLboolean sink);
mogl_function_glHistogramEXT glHistogramEXT;

typedef void (*mogl_function_glMinmaxEXT)(GLenum target, GLenum internalformat, GLboolean sink);
mogl_function_glMinmaxEXT glMinmaxEXT;

typedef void (*mogl_function_glResetHistogramEXT)(GLenum target);
mogl_function_glResetHistogramEXT glResetHistogramEXT;

typedef void (*mogl_function_glResetMinmaxEXT)(GLenum target);
mogl_function_glResetMinmaxEXT glResetMinmaxEXT;
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

typedef void (*mogl_function_glIndexFuncEXT)(GLenum func, GLclampf ref);
mogl_function_glIndexFuncEXT glIndexFuncEXT;
#define GL_EXT_index_material 1
#define GL_INDEX_MATERIAL_EXT 0x81B8
#define GL_INDEX_MATERIAL_PARAMETER_EXT 0x81B9
#define GL_INDEX_MATERIAL_FACE_EXT 0x81BA

typedef void (*mogl_function_glIndexMaterialEXT)(GLenum face, GLenum mode);
mogl_function_glIndexMaterialEXT glIndexMaterialEXT;
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

typedef void (*mogl_function_glApplyTextureEXT)(GLenum mode);
mogl_function_glApplyTextureEXT glApplyTextureEXT;

typedef void (*mogl_function_glTextureLightEXT)(GLenum pname);
mogl_function_glTextureLightEXT glTextureLightEXT;

typedef void (*mogl_function_glTextureMaterialEXT)(GLenum face, GLenum mode);
mogl_function_glTextureMaterialEXT glTextureMaterialEXT;
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

typedef void (*mogl_function_glGetUnsignedBytevEXT)(GLenum pname, GLubyte *data);
mogl_function_glGetUnsignedBytevEXT glGetUnsignedBytevEXT;

typedef void (*mogl_function_glGetUnsignedBytei_vEXT)(GLenum target, GLuint index, GLubyte *data);
mogl_function_glGetUnsignedBytei_vEXT glGetUnsignedBytei_vEXT;

typedef void (*mogl_function_glDeleteMemoryObjectsEXT)(GLsizei n, GLuint *memoryObjects);
mogl_function_glDeleteMemoryObjectsEXT glDeleteMemoryObjectsEXT;

typedef GLboolean  (*mogl_function_glIsMemoryObjectEXT)(GLuint memoryObject);
mogl_function_glIsMemoryObjectEXT glIsMemoryObjectEXT;

typedef void (*mogl_function_glCreateMemoryObjectsEXT)(GLsizei n, GLuint *memoryObjects);
mogl_function_glCreateMemoryObjectsEXT glCreateMemoryObjectsEXT;

typedef void (*mogl_function_glMemoryObjectParameterivEXT)(GLuint memoryObject, GLenum pname, GLint *params);
mogl_function_glMemoryObjectParameterivEXT glMemoryObjectParameterivEXT;

typedef void (*mogl_function_glGetMemoryObjectParameterivEXT)(GLuint memoryObject, GLenum pname, GLint *params);
mogl_function_glGetMemoryObjectParameterivEXT glGetMemoryObjectParameterivEXT;

typedef void (*mogl_function_glTexStorageMem2DEXT)(GLenum target, GLsizei levels, GLenum internalFormat, GLsizei width, GLsizei height, GLuint memory, GLuint64 offset);
mogl_function_glTexStorageMem2DEXT glTexStorageMem2DEXT;

typedef void (*mogl_function_glTexStorageMem2DMultisampleEXT)(GLenum target, GLsizei samples, GLenum internalFormat, GLsizei width, GLsizei height, GLboolean fixedSampleLocations, GLuint memory, GLuint64 offset);
mogl_function_glTexStorageMem2DMultisampleEXT glTexStorageMem2DMultisampleEXT;

typedef void (*mogl_function_glTexStorageMem3DEXT)(GLenum target, GLsizei levels, GLenum internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLuint memory, GLuint64 offset);
mogl_function_glTexStorageMem3DEXT glTexStorageMem3DEXT;

typedef void (*mogl_function_glTexStorageMem3DMultisampleEXT)(GLenum target, GLsizei samples, GLenum internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedSampleLocations, GLuint memory, GLuint64 offset);
mogl_function_glTexStorageMem3DMultisampleEXT glTexStorageMem3DMultisampleEXT;

typedef void (*mogl_function_glBufferStorageMemEXT)(GLenum target, GLsizeiptr size, GLuint memory, GLuint64 offset);
mogl_function_glBufferStorageMemEXT glBufferStorageMemEXT;

typedef void (*mogl_function_glTextureStorageMem2DEXT)(GLuint texture, GLsizei levels, GLenum internalFormat, GLsizei width, GLsizei height, GLuint memory, GLuint64 offset);
mogl_function_glTextureStorageMem2DEXT glTextureStorageMem2DEXT;

typedef void (*mogl_function_glTextureStorageMem2DMultisampleEXT)(GLuint texture, GLsizei samples, GLenum internalFormat, GLsizei width, GLsizei height, GLboolean fixedSampleLocations, GLuint memory, GLuint64 offset);
mogl_function_glTextureStorageMem2DMultisampleEXT glTextureStorageMem2DMultisampleEXT;

typedef void (*mogl_function_glTextureStorageMem3DEXT)(GLuint texture, GLsizei levels, GLenum internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLuint memory, GLuint64 offset);
mogl_function_glTextureStorageMem3DEXT glTextureStorageMem3DEXT;

typedef void (*mogl_function_glTextureStorageMem3DMultisampleEXT)(GLuint texture, GLsizei samples, GLenum internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedSampleLocations, GLuint memory, GLuint64 offset);
mogl_function_glTextureStorageMem3DMultisampleEXT glTextureStorageMem3DMultisampleEXT;

typedef void (*mogl_function_glNamedBufferStorageMemEXT)(GLuint buffer, GLsizeiptr size, GLuint memory, GLuint64 offset);
mogl_function_glNamedBufferStorageMemEXT glNamedBufferStorageMemEXT;

typedef void (*mogl_function_glTexStorageMem1DEXT)(GLenum target, GLsizei levels, GLenum internalFormat, GLsizei width, GLuint memory, GLuint64 offset);
mogl_function_glTexStorageMem1DEXT glTexStorageMem1DEXT;

typedef void (*mogl_function_glTextureStorageMem1DEXT)(GLuint texture, GLsizei levels, GLenum internalFormat, GLsizei width, GLuint memory, GLuint64 offset);
mogl_function_glTextureStorageMem1DEXT glTextureStorageMem1DEXT;
#define GL_EXT_memory_object_fd 1
#define GL_HANDLE_TYPE_OPAQUE_FD_EXT 0x9586

typedef void (*mogl_function_glImportMemoryFdEXT)(GLuint memory, GLuint64 size, GLenum handleType, GLint fd);
mogl_function_glImportMemoryFdEXT glImportMemoryFdEXT;
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

typedef void (*mogl_function_glImportMemoryWin32HandleEXT)(GLuint memory, GLuint64 size, GLenum handleType, void * handle);
mogl_function_glImportMemoryWin32HandleEXT glImportMemoryWin32HandleEXT;

typedef void (*mogl_function_glImportMemoryWin32NameEXT)(GLuint memory, GLuint64 size, GLenum handleType, void * name);
mogl_function_glImportMemoryWin32NameEXT glImportMemoryWin32NameEXT;
#define GL_EXT_misc_attribute 1
#define GL_EXT_multi_draw_arrays 1

typedef void (*mogl_function_glMultiDrawArraysEXT)(GLenum mode, GLint *first, GLsizei *count, GLsizei primcount);
mogl_function_glMultiDrawArraysEXT glMultiDrawArraysEXT;

typedef void (*mogl_function_glMultiDrawElementsEXT)(GLenum mode, GLsizei *count, GLenum type, void * *indices, GLsizei primcount);
mogl_function_glMultiDrawElementsEXT glMultiDrawElementsEXT;
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

typedef void (*mogl_function_glSampleMaskEXT)(GLclampf value, GLboolean invert);
mogl_function_glSampleMaskEXT glSampleMaskEXT;

typedef void (*mogl_function_glSamplePatternEXT)(GLenum pattern);
mogl_function_glSamplePatternEXT glSamplePatternEXT;
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

typedef void (*mogl_function_glColorTableEXT)(GLenum target, GLenum internalFormat, GLsizei width, GLenum format, GLenum type, void * table);
mogl_function_glColorTableEXT glColorTableEXT;

typedef void (*mogl_function_glGetColorTableEXT)(GLenum target, GLenum format, GLenum type, void * data);
mogl_function_glGetColorTableEXT glGetColorTableEXT;

typedef void (*mogl_function_glGetColorTableParameterivEXT)(GLenum target, GLenum pname, GLint *params);
mogl_function_glGetColorTableParameterivEXT glGetColorTableParameterivEXT;

typedef void (*mogl_function_glGetColorTableParameterfvEXT)(GLenum target, GLenum pname, GLfloat *params);
mogl_function_glGetColorTableParameterfvEXT glGetColorTableParameterfvEXT;
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

typedef void (*mogl_function_glPixelTransformParameteriEXT)(GLenum target, GLenum pname, GLint param);
mogl_function_glPixelTransformParameteriEXT glPixelTransformParameteriEXT;

typedef void (*mogl_function_glPixelTransformParameterfEXT)(GLenum target, GLenum pname, GLfloat param);
mogl_function_glPixelTransformParameterfEXT glPixelTransformParameterfEXT;

typedef void (*mogl_function_glPixelTransformParameterivEXT)(GLenum target, GLenum pname, GLint *params);
mogl_function_glPixelTransformParameterivEXT glPixelTransformParameterivEXT;

typedef void (*mogl_function_glPixelTransformParameterfvEXT)(GLenum target, GLenum pname, GLfloat *params);
mogl_function_glPixelTransformParameterfvEXT glPixelTransformParameterfvEXT;

typedef void (*mogl_function_glGetPixelTransformParameterivEXT)(GLenum target, GLenum pname, GLint *params);
mogl_function_glGetPixelTransformParameterivEXT glGetPixelTransformParameterivEXT;

typedef void (*mogl_function_glGetPixelTransformParameterfvEXT)(GLenum target, GLenum pname, GLfloat *params);
mogl_function_glGetPixelTransformParameterfvEXT glGetPixelTransformParameterfvEXT;
#define GL_EXT_pixel_transform_color_table 1
#define GL_EXT_point_parameters 1
#define GL_POINT_SIZE_MIN_EXT 0x8126
#define GL_POINT_SIZE_MAX_EXT 0x8127
#define GL_POINT_FADE_THRESHOLD_SIZE_EXT 0x8128
#define GL_DISTANCE_ATTENUATION_EXT 0x8129

typedef void (*mogl_function_glPointParameterfEXT)(GLenum pname, GLfloat param);
mogl_function_glPointParameterfEXT glPointParameterfEXT;

typedef void (*mogl_function_glPointParameterfvEXT)(GLenum pname, GLfloat *params);
mogl_function_glPointParameterfvEXT glPointParameterfvEXT;
#define GL_EXT_polygon_offset 1
#define GL_POLYGON_OFFSET_EXT 0x8037
#define GL_POLYGON_OFFSET_FACTOR_EXT 0x8038
#define GL_POLYGON_OFFSET_BIAS_EXT 0x8039

typedef void (*mogl_function_glPolygonOffsetEXT)(GLfloat factor, GLfloat bias);
mogl_function_glPolygonOffsetEXT glPolygonOffsetEXT;
#define GL_EXT_polygon_offset_clamp 1
#define GL_POLYGON_OFFSET_CLAMP_EXT 0x8E1B

typedef void (*mogl_function_glPolygonOffsetClampEXT)(GLfloat factor, GLfloat units, GLfloat clamp);
mogl_function_glPolygonOffsetClampEXT glPolygonOffsetClampEXT;
#define GL_EXT_post_depth_coverage 1
#define GL_EXT_provoking_vertex 1
#define GL_QUADS_FOLLOW_PROVOKING_VERTEX_CONVENTION_EXT 0x8E4C
#define GL_FIRST_VERTEX_CONVENTION_EXT 0x8E4D
#define GL_LAST_VERTEX_CONVENTION_EXT 0x8E4E
#define GL_PROVOKING_VERTEX_EXT 0x8E4F

typedef void (*mogl_function_glProvokingVertexEXT)(GLenum mode);
mogl_function_glProvokingVertexEXT glProvokingVertexEXT;
#define GL_EXT_raster_multisample 1
#define GL_RASTER_MULTISAMPLE_EXT 0x9327
#define GL_RASTER_SAMPLES_EXT 0x9328
#define GL_MAX_RASTER_SAMPLES_EXT 0x9329
#define GL_RASTER_FIXED_SAMPLE_LOCATIONS_EXT 0x932A
#define GL_MULTISAMPLE_RASTERIZATION_ALLOWED_EXT 0x932B
#define GL_EFFECTIVE_RASTER_SAMPLES_EXT 0x932C

typedef void (*mogl_function_glRasterSamplesEXT)(GLuint samples, GLboolean fixedsamplelocations);
mogl_function_glRasterSamplesEXT glRasterSamplesEXT;
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

typedef void (*mogl_function_glSecondaryColor3bEXT)(GLbyte red, GLbyte green, GLbyte blue);
mogl_function_glSecondaryColor3bEXT glSecondaryColor3bEXT;

typedef void (*mogl_function_glSecondaryColor3bvEXT)(GLbyte *v);
mogl_function_glSecondaryColor3bvEXT glSecondaryColor3bvEXT;

typedef void (*mogl_function_glSecondaryColor3dEXT)(GLdouble red, GLdouble green, GLdouble blue);
mogl_function_glSecondaryColor3dEXT glSecondaryColor3dEXT;

typedef void (*mogl_function_glSecondaryColor3dvEXT)(GLdouble *v);
mogl_function_glSecondaryColor3dvEXT glSecondaryColor3dvEXT;

typedef void (*mogl_function_glSecondaryColor3fEXT)(GLfloat red, GLfloat green, GLfloat blue);
mogl_function_glSecondaryColor3fEXT glSecondaryColor3fEXT;

typedef void (*mogl_function_glSecondaryColor3fvEXT)(GLfloat *v);
mogl_function_glSecondaryColor3fvEXT glSecondaryColor3fvEXT;

typedef void (*mogl_function_glSecondaryColor3iEXT)(GLint red, GLint green, GLint blue);
mogl_function_glSecondaryColor3iEXT glSecondaryColor3iEXT;

typedef void (*mogl_function_glSecondaryColor3ivEXT)(GLint *v);
mogl_function_glSecondaryColor3ivEXT glSecondaryColor3ivEXT;

typedef void (*mogl_function_glSecondaryColor3sEXT)(GLshort red, GLshort green, GLshort blue);
mogl_function_glSecondaryColor3sEXT glSecondaryColor3sEXT;

typedef void (*mogl_function_glSecondaryColor3svEXT)(GLshort *v);
mogl_function_glSecondaryColor3svEXT glSecondaryColor3svEXT;

typedef void (*mogl_function_glSecondaryColor3ubEXT)(GLubyte red, GLubyte green, GLubyte blue);
mogl_function_glSecondaryColor3ubEXT glSecondaryColor3ubEXT;

typedef void (*mogl_function_glSecondaryColor3ubvEXT)(GLubyte *v);
mogl_function_glSecondaryColor3ubvEXT glSecondaryColor3ubvEXT;

typedef void (*mogl_function_glSecondaryColor3uiEXT)(GLuint red, GLuint green, GLuint blue);
mogl_function_glSecondaryColor3uiEXT glSecondaryColor3uiEXT;

typedef void (*mogl_function_glSecondaryColor3uivEXT)(GLuint *v);
mogl_function_glSecondaryColor3uivEXT glSecondaryColor3uivEXT;

typedef void (*mogl_function_glSecondaryColor3usEXT)(GLushort red, GLushort green, GLushort blue);
mogl_function_glSecondaryColor3usEXT glSecondaryColor3usEXT;

typedef void (*mogl_function_glSecondaryColor3usvEXT)(GLushort *v);
mogl_function_glSecondaryColor3usvEXT glSecondaryColor3usvEXT;

typedef void (*mogl_function_glSecondaryColorPointerEXT)(GLint size, GLenum type, GLsizei stride, void * pointer);
mogl_function_glSecondaryColorPointerEXT glSecondaryColorPointerEXT;
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

typedef void (*mogl_function_glGenSemaphoresEXT)(GLsizei n, GLuint *semaphores);
mogl_function_glGenSemaphoresEXT glGenSemaphoresEXT;

typedef void (*mogl_function_glDeleteSemaphoresEXT)(GLsizei n, GLuint *semaphores);
mogl_function_glDeleteSemaphoresEXT glDeleteSemaphoresEXT;

typedef GLboolean  (*mogl_function_glIsSemaphoreEXT)(GLuint semaphore);
mogl_function_glIsSemaphoreEXT glIsSemaphoreEXT;

typedef void (*mogl_function_glSemaphoreParameterui64vEXT)(GLuint semaphore, GLenum pname, GLuint64 *params);
mogl_function_glSemaphoreParameterui64vEXT glSemaphoreParameterui64vEXT;

typedef void (*mogl_function_glGetSemaphoreParameterui64vEXT)(GLuint semaphore, GLenum pname, GLuint64 *params);
mogl_function_glGetSemaphoreParameterui64vEXT glGetSemaphoreParameterui64vEXT;

typedef void (*mogl_function_glWaitSemaphoreEXT)(GLuint semaphore, GLuint numBufferBarriers, GLuint *buffers, GLuint numTextureBarriers, GLuint *textures, GLenum *srcLayouts);
mogl_function_glWaitSemaphoreEXT glWaitSemaphoreEXT;

typedef void (*mogl_function_glSignalSemaphoreEXT)(GLuint semaphore, GLuint numBufferBarriers, GLuint *buffers, GLuint numTextureBarriers, GLuint *textures, GLenum *dstLayouts);
mogl_function_glSignalSemaphoreEXT glSignalSemaphoreEXT;
#define GL_EXT_semaphore_fd 1

typedef void (*mogl_function_glImportSemaphoreFdEXT)(GLuint semaphore, GLenum handleType, GLint fd);
mogl_function_glImportSemaphoreFdEXT glImportSemaphoreFdEXT;
#define GL_EXT_semaphore_win32 1
#define GL_HANDLE_TYPE_D3D12_FENCE_EXT 0x9594
#define GL_D3D12_FENCE_VALUE_EXT 0x9595

typedef void (*mogl_function_glImportSemaphoreWin32HandleEXT)(GLuint semaphore, GLenum handleType, void * handle);
mogl_function_glImportSemaphoreWin32HandleEXT glImportSemaphoreWin32HandleEXT;

typedef void (*mogl_function_glImportSemaphoreWin32NameEXT)(GLuint semaphore, GLenum handleType, void * name);
mogl_function_glImportSemaphoreWin32NameEXT glImportSemaphoreWin32NameEXT;
#define GL_EXT_separate_shader_objects 1
#define GL_ACTIVE_PROGRAM_EXT 0x8B8D

typedef void (*mogl_function_glUseShaderProgramEXT)(GLenum type, GLuint program);
mogl_function_glUseShaderProgramEXT glUseShaderProgramEXT;

typedef void (*mogl_function_glActiveProgramEXT)(GLuint program);
mogl_function_glActiveProgramEXT glActiveProgramEXT;

typedef GLuint  (*mogl_function_glCreateShaderProgramEXT)(GLenum type, GLchar *string);
mogl_function_glCreateShaderProgramEXT glCreateShaderProgramEXT;
#define GL_EXT_separate_specular_color 1
#define GL_LIGHT_MODEL_COLOR_CONTROL_EXT 0x81F8
#define GL_SINGLE_COLOR_EXT 0x81F9
#define GL_SEPARATE_SPECULAR_COLOR_EXT 0x81FA
#define GL_EXT_shader_framebuffer_fetch 1
#define GL_FRAGMENT_SHADER_DISCARDS_SAMPLES_EXT 0x8A52
#define GL_EXT_shader_framebuffer_fetch_non_coherent 1

typedef void (*mogl_function_glFramebufferFetchBarrierEXT)();
mogl_function_glFramebufferFetchBarrierEXT glFramebufferFetchBarrierEXT;
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

typedef void (*mogl_function_glBindImageTextureEXT)(GLuint index, GLuint texture, GLint level, GLboolean layered, GLint layer, GLenum access, GLint format);
mogl_function_glBindImageTextureEXT glBindImageTextureEXT;

typedef void (*mogl_function_glMemoryBarrierEXT)(GLbitfield barriers);
mogl_function_glMemoryBarrierEXT glMemoryBarrierEXT;
#define GL_EXT_shader_integer_mix 1
#define GL_EXT_shader_samples_identical 1
#define GL_EXT_shadow_funcs 1
#define GL_EXT_shared_texture_palette 1
#define GL_SHARED_TEXTURE_PALETTE_EXT 0x81FB
#define GL_EXT_sparse_texture2 1
#define GL_EXT_stencil_clear_tag 1
#define GL_STENCIL_TAG_BITS_EXT 0x88F2
#define GL_STENCIL_CLEAR_TAG_VALUE_EXT 0x88F3

typedef void (*mogl_function_glStencilClearTagEXT)(GLsizei stencilTagBits, GLuint stencilClearTag);
mogl_function_glStencilClearTagEXT glStencilClearTagEXT;
#define GL_EXT_stencil_two_side 1
#define GL_STENCIL_TEST_TWO_SIDE_EXT 0x8910
#define GL_ACTIVE_STENCIL_FACE_EXT 0x8911

typedef void (*mogl_function_glActiveStencilFaceEXT)(GLenum face);
mogl_function_glActiveStencilFaceEXT glActiveStencilFaceEXT;
#define GL_EXT_stencil_wrap 1
#define GL_INCR_WRAP_EXT 0x8507
#define GL_DECR_WRAP_EXT 0x8508
#define GL_EXT_subtexture 1

typedef void (*mogl_function_glTexSubImage1DEXT)(GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, void * pixels);
mogl_function_glTexSubImage1DEXT glTexSubImage1DEXT;

typedef void (*mogl_function_glTexSubImage2DEXT)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, void * pixels);
mogl_function_glTexSubImage2DEXT glTexSubImage2DEXT;
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

typedef void (*mogl_function_glTexImage3DEXT)(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, void * pixels);
mogl_function_glTexImage3DEXT glTexImage3DEXT;

typedef void (*mogl_function_glTexSubImage3DEXT)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, void * pixels);
mogl_function_glTexSubImage3DEXT glTexSubImage3DEXT;
#define GL_EXT_texture_array 1
#define GL_TEXTURE_1D_ARRAY_EXT 0x8C18
#define GL_PROXY_TEXTURE_1D_ARRAY_EXT 0x8C19
#define GL_TEXTURE_2D_ARRAY_EXT 0x8C1A
#define GL_PROXY_TEXTURE_2D_ARRAY_EXT 0x8C1B
#define GL_TEXTURE_BINDING_1D_ARRAY_EXT 0x8C1C
#define GL_TEXTURE_BINDING_2D_ARRAY_EXT 0x8C1D
#define GL_MAX_ARRAY_TEXTURE_LAYERS_EXT 0x88FF
#define GL_COMPARE_REF_DEPTH_TO_TEXTURE_EXT 0x884E

typedef void (*mogl_function_glFramebufferTextureLayerEXT)(GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer);
mogl_function_glFramebufferTextureLayerEXT glFramebufferTextureLayerEXT;
#define GL_EXT_texture_buffer_object 1
#define GL_TEXTURE_BUFFER_EXT 0x8C2A
#define GL_MAX_TEXTURE_BUFFER_SIZE_EXT 0x8C2B
#define GL_TEXTURE_BINDING_BUFFER_EXT 0x8C2C
#define GL_TEXTURE_BUFFER_DATA_STORE_BINDING_EXT 0x8C2D
#define GL_TEXTURE_BUFFER_FORMAT_EXT 0x8C2E

typedef void (*mogl_function_glTexBufferEXT)(GLenum target, GLenum internalformat, GLuint buffer);
mogl_function_glTexBufferEXT glTexBufferEXT;
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

typedef void (*mogl_function_glTexParameterIivEXT)(GLenum target, GLenum pname, GLint *params);
mogl_function_glTexParameterIivEXT glTexParameterIivEXT;

typedef void (*mogl_function_glTexParameterIuivEXT)(GLenum target, GLenum pname, GLuint *params);
mogl_function_glTexParameterIuivEXT glTexParameterIuivEXT;

typedef void (*mogl_function_glGetTexParameterIivEXT)(GLenum target, GLenum pname, GLint *params);
mogl_function_glGetTexParameterIivEXT glGetTexParameterIivEXT;

typedef void (*mogl_function_glGetTexParameterIuivEXT)(GLenum target, GLenum pname, GLuint *params);
mogl_function_glGetTexParameterIuivEXT glGetTexParameterIuivEXT;

typedef void (*mogl_function_glClearColorIiEXT)(GLint red, GLint green, GLint blue, GLint alpha);
mogl_function_glClearColorIiEXT glClearColorIiEXT;

typedef void (*mogl_function_glClearColorIuiEXT)(GLuint red, GLuint green, GLuint blue, GLuint alpha);
mogl_function_glClearColorIuiEXT glClearColorIuiEXT;
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

typedef GLboolean  (*mogl_function_glAreTexturesResidentEXT)(GLsizei n, GLuint *textures, GLboolean *residences);
mogl_function_glAreTexturesResidentEXT glAreTexturesResidentEXT;

typedef void (*mogl_function_glBindTextureEXT)(GLenum target, GLuint texture);
mogl_function_glBindTextureEXT glBindTextureEXT;

typedef void (*mogl_function_glDeleteTexturesEXT)(GLsizei n, GLuint *textures);
mogl_function_glDeleteTexturesEXT glDeleteTexturesEXT;

typedef void (*mogl_function_glGenTexturesEXT)(GLsizei n, GLuint *textures);
mogl_function_glGenTexturesEXT glGenTexturesEXT;

typedef GLboolean  (*mogl_function_glIsTextureEXT)(GLuint texture);
mogl_function_glIsTextureEXT glIsTextureEXT;

typedef void (*mogl_function_glPrioritizeTexturesEXT)(GLsizei n, GLuint *textures, GLclampf *priorities);
mogl_function_glPrioritizeTexturesEXT glPrioritizeTexturesEXT;
#define GL_EXT_texture_perturb_normal 1
#define GL_PERTURB_EXT 0x85AE
#define GL_TEXTURE_NORMAL_EXT 0x85AF

typedef void (*mogl_function_glTextureNormalEXT)(GLenum mode);
mogl_function_glTextureNormalEXT glTextureNormalEXT;
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

typedef void (*mogl_function_glTexStorage1DEXT)(GLenum target, GLsizei levels, GLenum internalformat, GLsizei width);
mogl_function_glTexStorage1DEXT glTexStorage1DEXT;

typedef void (*mogl_function_glTexStorage2DEXT)(GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height);
mogl_function_glTexStorage2DEXT glTexStorage2DEXT;

typedef void (*mogl_function_glTexStorage3DEXT)(GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth);
mogl_function_glTexStorage3DEXT glTexStorage3DEXT;
#define GL_EXT_texture_swizzle 1
#define GL_TEXTURE_SWIZZLE_R_EXT 0x8E42
#define GL_TEXTURE_SWIZZLE_G_EXT 0x8E43
#define GL_TEXTURE_SWIZZLE_B_EXT 0x8E44
#define GL_TEXTURE_SWIZZLE_A_EXT 0x8E45
#define GL_TEXTURE_SWIZZLE_RGBA_EXT 0x8E46
#define GL_EXT_timer_query 1
#define GL_TIME_ELAPSED_EXT 0x88BF

typedef void (*mogl_function_glGetQueryObjecti64vEXT)(GLuint id, GLenum pname, GLint64 *params);
mogl_function_glGetQueryObjecti64vEXT glGetQueryObjecti64vEXT;

typedef void (*mogl_function_glGetQueryObjectui64vEXT)(GLuint id, GLenum pname, GLuint64 *params);
mogl_function_glGetQueryObjectui64vEXT glGetQueryObjectui64vEXT;
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

typedef void (*mogl_function_glBeginTransformFeedbackEXT)(GLenum primitiveMode);
mogl_function_glBeginTransformFeedbackEXT glBeginTransformFeedbackEXT;

typedef void (*mogl_function_glEndTransformFeedbackEXT)();
mogl_function_glEndTransformFeedbackEXT glEndTransformFeedbackEXT;

typedef void (*mogl_function_glBindBufferRangeEXT)(GLenum target, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size);
mogl_function_glBindBufferRangeEXT glBindBufferRangeEXT;

typedef void (*mogl_function_glBindBufferOffsetEXT)(GLenum target, GLuint index, GLuint buffer, GLintptr offset);
mogl_function_glBindBufferOffsetEXT glBindBufferOffsetEXT;

typedef void (*mogl_function_glBindBufferBaseEXT)(GLenum target, GLuint index, GLuint buffer);
mogl_function_glBindBufferBaseEXT glBindBufferBaseEXT;

typedef void (*mogl_function_glTransformFeedbackVaryingsEXT)(GLuint program, GLsizei count, GLchar **varyings, GLenum bufferMode);
mogl_function_glTransformFeedbackVaryingsEXT glTransformFeedbackVaryingsEXT;

typedef void (*mogl_function_glGetTransformFeedbackVaryingEXT)(GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLsizei *size, GLenum *type, GLchar *name);
mogl_function_glGetTransformFeedbackVaryingEXT glGetTransformFeedbackVaryingEXT;

typedef void (*mogl_function_glArrayElementEXT)(GLint i);
mogl_function_glArrayElementEXT glArrayElementEXT;

typedef void (*mogl_function_glColorPointerEXT)(GLint size, GLenum type, GLsizei stride, GLsizei count, void * pointer);
mogl_function_glColorPointerEXT glColorPointerEXT;

typedef void (*mogl_function_glDrawArraysEXT)(GLenum mode, GLint first, GLsizei count);
mogl_function_glDrawArraysEXT glDrawArraysEXT;

typedef void (*mogl_function_glEdgeFlagPointerEXT)(GLsizei stride, GLsizei count, GLboolean *pointer);
mogl_function_glEdgeFlagPointerEXT glEdgeFlagPointerEXT;

typedef void (*mogl_function_glGetPointervEXT)(GLenum pname, void * *params);
mogl_function_glGetPointervEXT glGetPointervEXT;

typedef void (*mogl_function_glIndexPointerEXT)(GLenum type, GLsizei stride, GLsizei count, void * pointer);
mogl_function_glIndexPointerEXT glIndexPointerEXT;

typedef void (*mogl_function_glNormalPointerEXT)(GLenum type, GLsizei stride, GLsizei count, void * pointer);
mogl_function_glNormalPointerEXT glNormalPointerEXT;

typedef void (*mogl_function_glTexCoordPointerEXT)(GLint size, GLenum type, GLsizei stride, GLsizei count, void * pointer);
mogl_function_glTexCoordPointerEXT glTexCoordPointerEXT;

typedef void (*mogl_function_glVertexPointerEXT)(GLint size, GLenum type, GLsizei stride, GLsizei count, void * pointer);
mogl_function_glVertexPointerEXT glVertexPointerEXT;
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

typedef void (*mogl_function_glVertexAttribL1dEXT)(GLuint index, GLdouble x);
mogl_function_glVertexAttribL1dEXT glVertexAttribL1dEXT;

typedef void (*mogl_function_glVertexAttribL2dEXT)(GLuint index, GLdouble x, GLdouble y);
mogl_function_glVertexAttribL2dEXT glVertexAttribL2dEXT;

typedef void (*mogl_function_glVertexAttribL3dEXT)(GLuint index, GLdouble x, GLdouble y, GLdouble z);
mogl_function_glVertexAttribL3dEXT glVertexAttribL3dEXT;

typedef void (*mogl_function_glVertexAttribL4dEXT)(GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
mogl_function_glVertexAttribL4dEXT glVertexAttribL4dEXT;

typedef void (*mogl_function_glVertexAttribL1dvEXT)(GLuint index, GLdouble *v);
mogl_function_glVertexAttribL1dvEXT glVertexAttribL1dvEXT;

typedef void (*mogl_function_glVertexAttribL2dvEXT)(GLuint index, GLdouble *v);
mogl_function_glVertexAttribL2dvEXT glVertexAttribL2dvEXT;

typedef void (*mogl_function_glVertexAttribL3dvEXT)(GLuint index, GLdouble *v);
mogl_function_glVertexAttribL3dvEXT glVertexAttribL3dvEXT;

typedef void (*mogl_function_glVertexAttribL4dvEXT)(GLuint index, GLdouble *v);
mogl_function_glVertexAttribL4dvEXT glVertexAttribL4dvEXT;

typedef void (*mogl_function_glVertexAttribLPointerEXT)(GLuint index, GLint size, GLenum type, GLsizei stride, void * pointer);
mogl_function_glVertexAttribLPointerEXT glVertexAttribLPointerEXT;

typedef void (*mogl_function_glGetVertexAttribLdvEXT)(GLuint index, GLenum pname, GLdouble *params);
mogl_function_glGetVertexAttribLdvEXT glGetVertexAttribLdvEXT;
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

typedef void (*mogl_function_glBeginVertexShaderEXT)();
mogl_function_glBeginVertexShaderEXT glBeginVertexShaderEXT;

typedef void (*mogl_function_glEndVertexShaderEXT)();
mogl_function_glEndVertexShaderEXT glEndVertexShaderEXT;

typedef void (*mogl_function_glBindVertexShaderEXT)(GLuint id);
mogl_function_glBindVertexShaderEXT glBindVertexShaderEXT;

typedef GLuint  (*mogl_function_glGenVertexShadersEXT)(GLuint range);
mogl_function_glGenVertexShadersEXT glGenVertexShadersEXT;

typedef void (*mogl_function_glDeleteVertexShaderEXT)(GLuint id);
mogl_function_glDeleteVertexShaderEXT glDeleteVertexShaderEXT;

typedef void (*mogl_function_glShaderOp1EXT)(GLenum op, GLuint res, GLuint arg1);
mogl_function_glShaderOp1EXT glShaderOp1EXT;

typedef void (*mogl_function_glShaderOp2EXT)(GLenum op, GLuint res, GLuint arg1, GLuint arg2);
mogl_function_glShaderOp2EXT glShaderOp2EXT;

typedef void (*mogl_function_glShaderOp3EXT)(GLenum op, GLuint res, GLuint arg1, GLuint arg2, GLuint arg3);
mogl_function_glShaderOp3EXT glShaderOp3EXT;

typedef void (*mogl_function_glSwizzleEXT)(GLuint res, GLuint in, GLenum outX, GLenum outY, GLenum outZ, GLenum outW);
mogl_function_glSwizzleEXT glSwizzleEXT;

typedef void (*mogl_function_glWriteMaskEXT)(GLuint res, GLuint in, GLenum outX, GLenum outY, GLenum outZ, GLenum outW);
mogl_function_glWriteMaskEXT glWriteMaskEXT;

typedef void (*mogl_function_glInsertComponentEXT)(GLuint res, GLuint src, GLuint num);
mogl_function_glInsertComponentEXT glInsertComponentEXT;

typedef void (*mogl_function_glExtractComponentEXT)(GLuint res, GLuint src, GLuint num);
mogl_function_glExtractComponentEXT glExtractComponentEXT;

typedef GLuint  (*mogl_function_glGenSymbolsEXT)(GLenum datatype, GLenum storagetype, GLenum range, GLuint components);
mogl_function_glGenSymbolsEXT glGenSymbolsEXT;

typedef void (*mogl_function_glSetInvariantEXT)(GLuint id, GLenum type, void * addr);
mogl_function_glSetInvariantEXT glSetInvariantEXT;

typedef void (*mogl_function_glSetLocalConstantEXT)(GLuint id, GLenum type, void * addr);
mogl_function_glSetLocalConstantEXT glSetLocalConstantEXT;

typedef void (*mogl_function_glVariantbvEXT)(GLuint id, GLbyte *addr);
mogl_function_glVariantbvEXT glVariantbvEXT;

typedef void (*mogl_function_glVariantsvEXT)(GLuint id, GLshort *addr);
mogl_function_glVariantsvEXT glVariantsvEXT;

typedef void (*mogl_function_glVariantivEXT)(GLuint id, GLint *addr);
mogl_function_glVariantivEXT glVariantivEXT;

typedef void (*mogl_function_glVariantfvEXT)(GLuint id, GLfloat *addr);
mogl_function_glVariantfvEXT glVariantfvEXT;

typedef void (*mogl_function_glVariantdvEXT)(GLuint id, GLdouble *addr);
mogl_function_glVariantdvEXT glVariantdvEXT;

typedef void (*mogl_function_glVariantubvEXT)(GLuint id, GLubyte *addr);
mogl_function_glVariantubvEXT glVariantubvEXT;

typedef void (*mogl_function_glVariantusvEXT)(GLuint id, GLushort *addr);
mogl_function_glVariantusvEXT glVariantusvEXT;

typedef void (*mogl_function_glVariantuivEXT)(GLuint id, GLuint *addr);
mogl_function_glVariantuivEXT glVariantuivEXT;

typedef void (*mogl_function_glVariantPointerEXT)(GLuint id, GLenum type, GLuint stride, void * addr);
mogl_function_glVariantPointerEXT glVariantPointerEXT;

typedef void (*mogl_function_glEnableVariantClientStateEXT)(GLuint id);
mogl_function_glEnableVariantClientStateEXT glEnableVariantClientStateEXT;

typedef void (*mogl_function_glDisableVariantClientStateEXT)(GLuint id);
mogl_function_glDisableVariantClientStateEXT glDisableVariantClientStateEXT;

typedef GLuint  (*mogl_function_glBindLightParameterEXT)(GLenum light, GLenum value);
mogl_function_glBindLightParameterEXT glBindLightParameterEXT;

typedef GLuint  (*mogl_function_glBindMaterialParameterEXT)(GLenum face, GLenum value);
mogl_function_glBindMaterialParameterEXT glBindMaterialParameterEXT;

typedef GLuint  (*mogl_function_glBindTexGenParameterEXT)(GLenum unit, GLenum coord, GLenum value);
mogl_function_glBindTexGenParameterEXT glBindTexGenParameterEXT;

typedef GLuint  (*mogl_function_glBindTextureUnitParameterEXT)(GLenum unit, GLenum value);
mogl_function_glBindTextureUnitParameterEXT glBindTextureUnitParameterEXT;

typedef GLuint  (*mogl_function_glBindParameterEXT)(GLenum value);
mogl_function_glBindParameterEXT glBindParameterEXT;

typedef GLboolean  (*mogl_function_glIsVariantEnabledEXT)(GLuint id, GLenum cap);
mogl_function_glIsVariantEnabledEXT glIsVariantEnabledEXT;

typedef void (*mogl_function_glGetVariantBooleanvEXT)(GLuint id, GLenum value, GLboolean *data);
mogl_function_glGetVariantBooleanvEXT glGetVariantBooleanvEXT;

typedef void (*mogl_function_glGetVariantIntegervEXT)(GLuint id, GLenum value, GLint *data);
mogl_function_glGetVariantIntegervEXT glGetVariantIntegervEXT;

typedef void (*mogl_function_glGetVariantFloatvEXT)(GLuint id, GLenum value, GLfloat *data);
mogl_function_glGetVariantFloatvEXT glGetVariantFloatvEXT;

typedef void (*mogl_function_glGetVariantPointervEXT)(GLuint id, GLenum value, void * *data);
mogl_function_glGetVariantPointervEXT glGetVariantPointervEXT;

typedef void (*mogl_function_glGetInvariantBooleanvEXT)(GLuint id, GLenum value, GLboolean *data);
mogl_function_glGetInvariantBooleanvEXT glGetInvariantBooleanvEXT;

typedef void (*mogl_function_glGetInvariantIntegervEXT)(GLuint id, GLenum value, GLint *data);
mogl_function_glGetInvariantIntegervEXT glGetInvariantIntegervEXT;

typedef void (*mogl_function_glGetInvariantFloatvEXT)(GLuint id, GLenum value, GLfloat *data);
mogl_function_glGetInvariantFloatvEXT glGetInvariantFloatvEXT;

typedef void (*mogl_function_glGetLocalConstantBooleanvEXT)(GLuint id, GLenum value, GLboolean *data);
mogl_function_glGetLocalConstantBooleanvEXT glGetLocalConstantBooleanvEXT;

typedef void (*mogl_function_glGetLocalConstantIntegervEXT)(GLuint id, GLenum value, GLint *data);
mogl_function_glGetLocalConstantIntegervEXT glGetLocalConstantIntegervEXT;

typedef void (*mogl_function_glGetLocalConstantFloatvEXT)(GLuint id, GLenum value, GLfloat *data);
mogl_function_glGetLocalConstantFloatvEXT glGetLocalConstantFloatvEXT;
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

typedef void (*mogl_function_glVertexWeightfEXT)(GLfloat weight);
mogl_function_glVertexWeightfEXT glVertexWeightfEXT;

typedef void (*mogl_function_glVertexWeightfvEXT)(GLfloat *weight);
mogl_function_glVertexWeightfvEXT glVertexWeightfvEXT;

typedef void (*mogl_function_glVertexWeightPointerEXT)(GLint size, GLenum type, GLsizei stride, void * pointer);
mogl_function_glVertexWeightPointerEXT glVertexWeightPointerEXT;
#define GL_EXT_win32_keyed_mutex 1

typedef GLboolean  (*mogl_function_glAcquireKeyedMutexWin32EXT)(GLuint memory, GLuint64 key, GLuint timeout);
mogl_function_glAcquireKeyedMutexWin32EXT glAcquireKeyedMutexWin32EXT;

typedef GLboolean  (*mogl_function_glReleaseKeyedMutexWin32EXT)(GLuint memory, GLuint64 key);
mogl_function_glReleaseKeyedMutexWin32EXT glReleaseKeyedMutexWin32EXT;
#define GL_EXT_window_rectangles 1
#define GL_INCLUSIVE_EXT 0x8F10
#define GL_EXCLUSIVE_EXT 0x8F11
#define GL_WINDOW_RECTANGLE_EXT 0x8F12
#define GL_WINDOW_RECTANGLE_MODE_EXT 0x8F13
#define GL_MAX_WINDOW_RECTANGLES_EXT 0x8F14
#define GL_NUM_WINDOW_RECTANGLES_EXT 0x8F15

typedef void (*mogl_function_glWindowRectanglesEXT)(GLenum mode, GLsizei count, GLint *box);
mogl_function_glWindowRectanglesEXT glWindowRectanglesEXT;
#define GL_EXT_x11_sync_object 1
#define GL_SYNC_X11_FENCE_EXT 0x90E1

typedef GLsync  (*mogl_function_glImportSyncEXT)(GLenum external_sync_type, GLintptr external_sync, GLbitfield flags);
mogl_function_glImportSyncEXT glImportSyncEXT;
#define GL_GREMEDY_frame_terminator 1

typedef void (*mogl_function_glFrameTerminatorGREMEDY)();
mogl_function_glFrameTerminatorGREMEDY glFrameTerminatorGREMEDY;
#define GL_GREMEDY_string_marker 1

typedef void (*mogl_function_glStringMarkerGREMEDY)(GLsizei len, void * string);
mogl_function_glStringMarkerGREMEDY glStringMarkerGREMEDY;
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

typedef void (*mogl_function_glImageTransformParameteriHP)(GLenum target, GLenum pname, GLint param);
mogl_function_glImageTransformParameteriHP glImageTransformParameteriHP;

typedef void (*mogl_function_glImageTransformParameterfHP)(GLenum target, GLenum pname, GLfloat param);
mogl_function_glImageTransformParameterfHP glImageTransformParameterfHP;

typedef void (*mogl_function_glImageTransformParameterivHP)(GLenum target, GLenum pname, GLint *params);
mogl_function_glImageTransformParameterivHP glImageTransformParameterivHP;

typedef void (*mogl_function_glImageTransformParameterfvHP)(GLenum target, GLenum pname, GLfloat *params);
mogl_function_glImageTransformParameterfvHP glImageTransformParameterfvHP;

typedef void (*mogl_function_glGetImageTransformParameterivHP)(GLenum target, GLenum pname, GLint *params);
mogl_function_glGetImageTransformParameterivHP glGetImageTransformParameterivHP;

typedef void (*mogl_function_glGetImageTransformParameterfvHP)(GLenum target, GLenum pname, GLfloat *params);
mogl_function_glGetImageTransformParameterfvHP glGetImageTransformParameterfvHP;
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

typedef void (*mogl_function_glMultiModeDrawArraysIBM)(GLenum *mode, GLint *first, GLsizei *count, GLsizei primcount, GLint modestride);
mogl_function_glMultiModeDrawArraysIBM glMultiModeDrawArraysIBM;

typedef void (*mogl_function_glMultiModeDrawElementsIBM)(GLenum *mode, GLsizei *count, GLenum type, void * *indices, GLsizei primcount, GLint modestride);
mogl_function_glMultiModeDrawElementsIBM glMultiModeDrawElementsIBM;
#define GL_IBM_rasterpos_clip 1
#define GL_RASTER_POSITION_UNCLIPPED_IBM 0x19262
#define GL_IBM_static_data 1
#define GL_ALL_STATIC_DATA_IBM 103060
#define GL_STATIC_VERTEX_ARRAY_IBM 103061

typedef void (*mogl_function_glFlushStaticDataIBM)(GLenum target);
mogl_function_glFlushStaticDataIBM glFlushStaticDataIBM;
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

typedef void (*mogl_function_glColorPointerListIBM)(GLint size, GLenum type, GLint stride, void * *pointer, GLint ptrstride);
mogl_function_glColorPointerListIBM glColorPointerListIBM;

typedef void (*mogl_function_glSecondaryColorPointerListIBM)(GLint size, GLenum type, GLint stride, void * *pointer, GLint ptrstride);
mogl_function_glSecondaryColorPointerListIBM glSecondaryColorPointerListIBM;

typedef void (*mogl_function_glEdgeFlagPointerListIBM)(GLint stride, GLboolean **pointer, GLint ptrstride);
mogl_function_glEdgeFlagPointerListIBM glEdgeFlagPointerListIBM;

typedef void (*mogl_function_glFogCoordPointerListIBM)(GLenum type, GLint stride, void * *pointer, GLint ptrstride);
mogl_function_glFogCoordPointerListIBM glFogCoordPointerListIBM;

typedef void (*mogl_function_glIndexPointerListIBM)(GLenum type, GLint stride, void * *pointer, GLint ptrstride);
mogl_function_glIndexPointerListIBM glIndexPointerListIBM;

typedef void (*mogl_function_glNormalPointerListIBM)(GLenum type, GLint stride, void * *pointer, GLint ptrstride);
mogl_function_glNormalPointerListIBM glNormalPointerListIBM;

typedef void (*mogl_function_glTexCoordPointerListIBM)(GLint size, GLenum type, GLint stride, void * *pointer, GLint ptrstride);
mogl_function_glTexCoordPointerListIBM glTexCoordPointerListIBM;

typedef void (*mogl_function_glVertexPointerListIBM)(GLint size, GLenum type, GLint stride, void * *pointer, GLint ptrstride);
mogl_function_glVertexPointerListIBM glVertexPointerListIBM;
#define GL_INGR_blend_func_separate 1

typedef void (*mogl_function_glBlendFuncSeparateINGR)(GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha);
mogl_function_glBlendFuncSeparateINGR glBlendFuncSeparateINGR;
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

typedef void (*mogl_function_glApplyFramebufferAttachmentCMAAINTEL)();
mogl_function_glApplyFramebufferAttachmentCMAAINTEL glApplyFramebufferAttachmentCMAAINTEL;
#define GL_INTEL_map_texture 1
#define GL_TEXTURE_MEMORY_LAYOUT_INTEL 0x83FF
#define GL_LAYOUT_DEFAULT_INTEL 0
#define GL_LAYOUT_LINEAR_INTEL 1
#define GL_LAYOUT_LINEAR_CPU_CACHED_INTEL 2

typedef void (*mogl_function_glSyncTextureINTEL)(GLuint texture);
mogl_function_glSyncTextureINTEL glSyncTextureINTEL;

typedef void (*mogl_function_glUnmapTexture2DINTEL)(GLuint texture, GLint level);
mogl_function_glUnmapTexture2DINTEL glUnmapTexture2DINTEL;

typedef void *  (*mogl_function_glMapTexture2DINTEL)(GLuint texture, GLint level, GLbitfield access, GLint *stride, GLenum *layout);
mogl_function_glMapTexture2DINTEL glMapTexture2DINTEL;
#define GL_INTEL_parallel_arrays 1
#define GL_PARALLEL_ARRAYS_INTEL 0x83F4
#define GL_VERTEX_ARRAY_PARALLEL_POINTERS_INTEL 0x83F5
#define GL_NORMAL_ARRAY_PARALLEL_POINTERS_INTEL 0x83F6
#define GL_COLOR_ARRAY_PARALLEL_POINTERS_INTEL 0x83F7
#define GL_TEXTURE_COORD_ARRAY_PARALLEL_POINTERS_INTEL 0x83F8

typedef void (*mogl_function_glVertexPointervINTEL)(GLint size, GLenum type, void * *pointer);
mogl_function_glVertexPointervINTEL glVertexPointervINTEL;

typedef void (*mogl_function_glNormalPointervINTEL)(GLenum type, void * *pointer);
mogl_function_glNormalPointervINTEL glNormalPointervINTEL;

typedef void (*mogl_function_glColorPointervINTEL)(GLint size, GLenum type, void * *pointer);
mogl_function_glColorPointervINTEL glColorPointervINTEL;

typedef void (*mogl_function_glTexCoordPointervINTEL)(GLint size, GLenum type, void * *pointer);
mogl_function_glTexCoordPointervINTEL glTexCoordPointervINTEL;
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

typedef void (*mogl_function_glBeginPerfQueryINTEL)(GLuint queryHandle);
mogl_function_glBeginPerfQueryINTEL glBeginPerfQueryINTEL;

typedef void (*mogl_function_glCreatePerfQueryINTEL)(GLuint queryId, GLuint *queryHandle);
mogl_function_glCreatePerfQueryINTEL glCreatePerfQueryINTEL;

typedef void (*mogl_function_glDeletePerfQueryINTEL)(GLuint queryHandle);
mogl_function_glDeletePerfQueryINTEL glDeletePerfQueryINTEL;

typedef void (*mogl_function_glEndPerfQueryINTEL)(GLuint queryHandle);
mogl_function_glEndPerfQueryINTEL glEndPerfQueryINTEL;

typedef void (*mogl_function_glGetFirstPerfQueryIdINTEL)(GLuint *queryId);
mogl_function_glGetFirstPerfQueryIdINTEL glGetFirstPerfQueryIdINTEL;

typedef void (*mogl_function_glGetNextPerfQueryIdINTEL)(GLuint queryId, GLuint *nextQueryId);
mogl_function_glGetNextPerfQueryIdINTEL glGetNextPerfQueryIdINTEL;

typedef void (*mogl_function_glGetPerfCounterInfoINTEL)(GLuint queryId, GLuint counterId, GLuint counterNameLength, GLchar *counterName, GLuint counterDescLength, GLchar *counterDesc, GLuint *counterOffset, GLuint *counterDataSize, GLuint *counterTypeEnum, GLuint *counterDataTypeEnum, GLuint64 *rawCounterMaxValue);
mogl_function_glGetPerfCounterInfoINTEL glGetPerfCounterInfoINTEL;

typedef void (*mogl_function_glGetPerfQueryDataINTEL)(GLuint queryHandle, GLuint flags, GLsizei dataSize, void * data, GLuint *bytesWritten);
mogl_function_glGetPerfQueryDataINTEL glGetPerfQueryDataINTEL;

typedef void (*mogl_function_glGetPerfQueryIdByNameINTEL)(GLchar *queryName, GLuint *queryId);
mogl_function_glGetPerfQueryIdByNameINTEL glGetPerfQueryIdByNameINTEL;

typedef void (*mogl_function_glGetPerfQueryInfoINTEL)(GLuint queryId, GLuint queryNameLength, GLchar *queryName, GLuint *dataSize, GLuint *noCounters, GLuint *noInstances, GLuint *capsMask);
mogl_function_glGetPerfQueryInfoINTEL glGetPerfQueryInfoINTEL;
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

typedef void (*mogl_function_glFramebufferParameteriMESA)(GLenum target, GLenum pname, GLint param);
mogl_function_glFramebufferParameteriMESA glFramebufferParameteriMESA;

typedef void (*mogl_function_glGetFramebufferParameterivMESA)(GLenum target, GLenum pname, GLint *params);
mogl_function_glGetFramebufferParameterivMESA glGetFramebufferParameterivMESA;
#define GL_MESA_framebuffer_swap_xy 1
#define GL_FRAMEBUFFER_SWAP_XY_MESA 0x8BBD
#define GL_MESA_pack_invert 1
#define GL_PACK_INVERT_MESA 0x8758
#define GL_MESA_program_binary_formats 1
#define GL_PROGRAM_BINARY_FORMAT_MESA 0x875F
#define GL_MESA_resize_buffers 1

typedef void (*mogl_function_glResizeBuffersMESA)();
mogl_function_glResizeBuffersMESA glResizeBuffersMESA;
#define GL_MESA_shader_integer_functions 1
#define GL_MESA_tile_raster_order 1
#define GL_TILE_RASTER_ORDER_FIXED_MESA 0x8BB8
#define GL_TILE_RASTER_ORDER_INCREASING_X_MESA 0x8BB9
#define GL_TILE_RASTER_ORDER_INCREASING_Y_MESA 0x8BBA
#define GL_MESA_window_pos 1

typedef void (*mogl_function_glWindowPos2dMESA)(GLdouble x, GLdouble y);
mogl_function_glWindowPos2dMESA glWindowPos2dMESA;

typedef void (*mogl_function_glWindowPos2dvMESA)(GLdouble *v);
mogl_function_glWindowPos2dvMESA glWindowPos2dvMESA;

typedef void (*mogl_function_glWindowPos2fMESA)(GLfloat x, GLfloat y);
mogl_function_glWindowPos2fMESA glWindowPos2fMESA;

typedef void (*mogl_function_glWindowPos2fvMESA)(GLfloat *v);
mogl_function_glWindowPos2fvMESA glWindowPos2fvMESA;

typedef void (*mogl_function_glWindowPos2iMESA)(GLint x, GLint y);
mogl_function_glWindowPos2iMESA glWindowPos2iMESA;

typedef void (*mogl_function_glWindowPos2ivMESA)(GLint *v);
mogl_function_glWindowPos2ivMESA glWindowPos2ivMESA;

typedef void (*mogl_function_glWindowPos2sMESA)(GLshort x, GLshort y);
mogl_function_glWindowPos2sMESA glWindowPos2sMESA;

typedef void (*mogl_function_glWindowPos2svMESA)(GLshort *v);
mogl_function_glWindowPos2svMESA glWindowPos2svMESA;

typedef void (*mogl_function_glWindowPos3dMESA)(GLdouble x, GLdouble y, GLdouble z);
mogl_function_glWindowPos3dMESA glWindowPos3dMESA;

typedef void (*mogl_function_glWindowPos3dvMESA)(GLdouble *v);
mogl_function_glWindowPos3dvMESA glWindowPos3dvMESA;

typedef void (*mogl_function_glWindowPos3fMESA)(GLfloat x, GLfloat y, GLfloat z);
mogl_function_glWindowPos3fMESA glWindowPos3fMESA;

typedef void (*mogl_function_glWindowPos3fvMESA)(GLfloat *v);
mogl_function_glWindowPos3fvMESA glWindowPos3fvMESA;

typedef void (*mogl_function_glWindowPos3iMESA)(GLint x, GLint y, GLint z);
mogl_function_glWindowPos3iMESA glWindowPos3iMESA;

typedef void (*mogl_function_glWindowPos3ivMESA)(GLint *v);
mogl_function_glWindowPos3ivMESA glWindowPos3ivMESA;

typedef void (*mogl_function_glWindowPos3sMESA)(GLshort x, GLshort y, GLshort z);
mogl_function_glWindowPos3sMESA glWindowPos3sMESA;

typedef void (*mogl_function_glWindowPos3svMESA)(GLshort *v);
mogl_function_glWindowPos3svMESA glWindowPos3svMESA;

typedef void (*mogl_function_glWindowPos4dMESA)(GLdouble x, GLdouble y, GLdouble z, GLdouble w);
mogl_function_glWindowPos4dMESA glWindowPos4dMESA;

typedef void (*mogl_function_glWindowPos4dvMESA)(GLdouble *v);
mogl_function_glWindowPos4dvMESA glWindowPos4dvMESA;

typedef void (*mogl_function_glWindowPos4fMESA)(GLfloat x, GLfloat y, GLfloat z, GLfloat w);
mogl_function_glWindowPos4fMESA glWindowPos4fMESA;

typedef void (*mogl_function_glWindowPos4fvMESA)(GLfloat *v);
mogl_function_glWindowPos4fvMESA glWindowPos4fvMESA;

typedef void (*mogl_function_glWindowPos4iMESA)(GLint x, GLint y, GLint z, GLint w);
mogl_function_glWindowPos4iMESA glWindowPos4iMESA;

typedef void (*mogl_function_glWindowPos4ivMESA)(GLint *v);
mogl_function_glWindowPos4ivMESA glWindowPos4ivMESA;

typedef void (*mogl_function_glWindowPos4sMESA)(GLshort x, GLshort y, GLshort z, GLshort w);
mogl_function_glWindowPos4sMESA glWindowPos4sMESA;

typedef void (*mogl_function_glWindowPos4svMESA)(GLshort *v);
mogl_function_glWindowPos4svMESA glWindowPos4svMESA;
#define GL_MESA_ycbcr_texture 1
#define GL_UNSIGNED_SHORT_8_8_MESA 0x85BA
#define GL_UNSIGNED_SHORT_8_8_REV_MESA 0x85BB
#define GL_YCBCR_MESA 0x8757
#define GL_NVX_blend_equation_advanced_multi_draw_buffers 1
#define GL_NVX_conditional_render 1

typedef void (*mogl_function_glBeginConditionalRenderNVX)(GLuint id);
mogl_function_glBeginConditionalRenderNVX glBeginConditionalRenderNVX;

typedef void (*mogl_function_glEndConditionalRenderNVX)();
mogl_function_glEndConditionalRenderNVX glEndConditionalRenderNVX;
#define GL_NVX_gpu_memory_info 1
#define GL_GPU_MEMORY_INFO_DEDICATED_VIDMEM_NVX 0x9047
#define GL_GPU_MEMORY_INFO_TOTAL_AVAILABLE_MEMORY_NVX 0x9048
#define GL_GPU_MEMORY_INFO_CURRENT_AVAILABLE_VIDMEM_NVX 0x9049
#define GL_GPU_MEMORY_INFO_EVICTION_COUNT_NVX 0x904A
#define GL_GPU_MEMORY_INFO_EVICTED_MEMORY_NVX 0x904B
#define GL_NVX_gpu_multicast2 1
#define GL_UPLOAD_GPU_MASK_NVX 0x954A

typedef void (*mogl_function_glUploadGpuMaskNVX)(GLbitfield mask);
mogl_function_glUploadGpuMaskNVX glUploadGpuMaskNVX;

typedef void (*mogl_function_glMulticastViewportArrayvNVX)(GLuint gpu, GLuint first, GLsizei count, GLfloat *v);
mogl_function_glMulticastViewportArrayvNVX glMulticastViewportArrayvNVX;

typedef void (*mogl_function_glMulticastViewportPositionWScaleNVX)(GLuint gpu, GLuint index, GLfloat xcoeff, GLfloat ycoeff);
mogl_function_glMulticastViewportPositionWScaleNVX glMulticastViewportPositionWScaleNVX;

typedef void (*mogl_function_glMulticastScissorArrayvNVX)(GLuint gpu, GLuint first, GLsizei count, GLint *v);
mogl_function_glMulticastScissorArrayvNVX glMulticastScissorArrayvNVX;

typedef GLuint  (*mogl_function_glAsyncCopyBufferSubDataNVX)(GLsizei waitSemaphoreCount, GLuint *waitSemaphoreArray, GLuint64 *fenceValueArray, GLuint readGpu, GLbitfield writeGpuMask, GLuint readBuffer, GLuint writeBuffer, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size, GLsizei signalSemaphoreCount, GLuint *signalSemaphoreArray, GLuint64 *signalValueArray);
mogl_function_glAsyncCopyBufferSubDataNVX glAsyncCopyBufferSubDataNVX;

typedef GLuint  (*mogl_function_glAsyncCopyImageSubDataNVX)(GLsizei waitSemaphoreCount, GLuint *waitSemaphoreArray, GLuint64 *waitValueArray, GLuint srcGpu, GLbitfield dstGpuMask, GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, GLuint dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei srcWidth, GLsizei srcHeight, GLsizei srcDepth, GLsizei signalSemaphoreCount, GLuint *signalSemaphoreArray, GLuint64 *signalValueArray);
mogl_function_glAsyncCopyImageSubDataNVX glAsyncCopyImageSubDataNVX;
#define GL_NVX_linked_gpu_multicast 1
#define GL_LGPU_SEPARATE_STORAGE_BIT_NVX 0x0800
#define GL_MAX_LGPU_GPUS_NVX 0x92BA

typedef void (*mogl_function_glLGPUNamedBufferSubDataNVX)(GLbitfield gpuMask, GLuint buffer, GLintptr offset, GLsizeiptr size, void * data);
mogl_function_glLGPUNamedBufferSubDataNVX glLGPUNamedBufferSubDataNVX;

typedef void (*mogl_function_glLGPUCopyImageSubDataNVX)(GLuint sourceGpu, GLbitfield destinationGpuMask, GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX, GLint srxY, GLint srcZ, GLuint dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei width, GLsizei height, GLsizei depth);
mogl_function_glLGPUCopyImageSubDataNVX glLGPUCopyImageSubDataNVX;

typedef void (*mogl_function_glLGPUInterlockNVX)();
mogl_function_glLGPUInterlockNVX glLGPUInterlockNVX;
#define GL_NVX_progress_fence 1

typedef GLuint  (*mogl_function_glCreateProgressFenceNVX)();
mogl_function_glCreateProgressFenceNVX glCreateProgressFenceNVX;

typedef void (*mogl_function_glSignalSemaphoreui64NVX)(GLuint signalGpu, GLsizei fenceObjectCount, GLuint *semaphoreArray, GLuint64 *fenceValueArray);
mogl_function_glSignalSemaphoreui64NVX glSignalSemaphoreui64NVX;

typedef void (*mogl_function_glWaitSemaphoreui64NVX)(GLuint waitGpu, GLsizei fenceObjectCount, GLuint *semaphoreArray, GLuint64 *fenceValueArray);
mogl_function_glWaitSemaphoreui64NVX glWaitSemaphoreui64NVX;

typedef void (*mogl_function_glClientWaitSemaphoreui64NVX)(GLsizei fenceObjectCount, GLuint *semaphoreArray, GLuint64 *fenceValueArray);
mogl_function_glClientWaitSemaphoreui64NVX glClientWaitSemaphoreui64NVX;
#define GL_NV_alpha_to_coverage_dither_control 1
#define GL_ALPHA_TO_COVERAGE_DITHER_DEFAULT_NV 0x934D
#define GL_ALPHA_TO_COVERAGE_DITHER_ENABLE_NV 0x934E
#define GL_ALPHA_TO_COVERAGE_DITHER_DISABLE_NV 0x934F
#define GL_ALPHA_TO_COVERAGE_DITHER_MODE_NV 0x92BF

typedef void (*mogl_function_glAlphaToCoverageDitherControlNV)(GLenum mode);
mogl_function_glAlphaToCoverageDitherControlNV glAlphaToCoverageDitherControlNV;
#define GL_NV_bindless_multi_draw_indirect 1

typedef void (*mogl_function_glMultiDrawArraysIndirectBindlessNV)(GLenum mode, void * indirect, GLsizei drawCount, GLsizei stride, GLint vertexBufferCount);
mogl_function_glMultiDrawArraysIndirectBindlessNV glMultiDrawArraysIndirectBindlessNV;

typedef void (*mogl_function_glMultiDrawElementsIndirectBindlessNV)(GLenum mode, GLenum type, void * indirect, GLsizei drawCount, GLsizei stride, GLint vertexBufferCount);
mogl_function_glMultiDrawElementsIndirectBindlessNV glMultiDrawElementsIndirectBindlessNV;
#define GL_NV_bindless_multi_draw_indirect_count 1

typedef void (*mogl_function_glMultiDrawArraysIndirectBindlessCountNV)(GLenum mode, void * indirect, GLsizei drawCount, GLsizei maxDrawCount, GLsizei stride, GLint vertexBufferCount);
mogl_function_glMultiDrawArraysIndirectBindlessCountNV glMultiDrawArraysIndirectBindlessCountNV;

typedef void (*mogl_function_glMultiDrawElementsIndirectBindlessCountNV)(GLenum mode, GLenum type, void * indirect, GLsizei drawCount, GLsizei maxDrawCount, GLsizei stride, GLint vertexBufferCount);
mogl_function_glMultiDrawElementsIndirectBindlessCountNV glMultiDrawElementsIndirectBindlessCountNV;
#define GL_NV_bindless_texture 1

typedef GLuint64  (*mogl_function_glGetTextureHandleNV)(GLuint texture);
mogl_function_glGetTextureHandleNV glGetTextureHandleNV;

typedef GLuint64  (*mogl_function_glGetTextureSamplerHandleNV)(GLuint texture, GLuint sampler);
mogl_function_glGetTextureSamplerHandleNV glGetTextureSamplerHandleNV;

typedef void (*mogl_function_glMakeTextureHandleResidentNV)(GLuint64 handle);
mogl_function_glMakeTextureHandleResidentNV glMakeTextureHandleResidentNV;

typedef void (*mogl_function_glMakeTextureHandleNonResidentNV)(GLuint64 handle);
mogl_function_glMakeTextureHandleNonResidentNV glMakeTextureHandleNonResidentNV;

typedef GLuint64  (*mogl_function_glGetImageHandleNV)(GLuint texture, GLint level, GLboolean layered, GLint layer, GLenum format);
mogl_function_glGetImageHandleNV glGetImageHandleNV;

typedef void (*mogl_function_glMakeImageHandleResidentNV)(GLuint64 handle, GLenum access);
mogl_function_glMakeImageHandleResidentNV glMakeImageHandleResidentNV;

typedef void (*mogl_function_glMakeImageHandleNonResidentNV)(GLuint64 handle);
mogl_function_glMakeImageHandleNonResidentNV glMakeImageHandleNonResidentNV;

typedef void (*mogl_function_glUniformHandleui64NV)(GLint location, GLuint64 value);
mogl_function_glUniformHandleui64NV glUniformHandleui64NV;

typedef void (*mogl_function_glUniformHandleui64vNV)(GLint location, GLsizei count, GLuint64 *value);
mogl_function_glUniformHandleui64vNV glUniformHandleui64vNV;

typedef void (*mogl_function_glProgramUniformHandleui64NV)(GLuint program, GLint location, GLuint64 value);
mogl_function_glProgramUniformHandleui64NV glProgramUniformHandleui64NV;

typedef void (*mogl_function_glProgramUniformHandleui64vNV)(GLuint program, GLint location, GLsizei count, GLuint64 *values);
mogl_function_glProgramUniformHandleui64vNV glProgramUniformHandleui64vNV;

typedef GLboolean  (*mogl_function_glIsTextureHandleResidentNV)(GLuint64 handle);
mogl_function_glIsTextureHandleResidentNV glIsTextureHandleResidentNV;

typedef GLboolean  (*mogl_function_glIsImageHandleResidentNV)(GLuint64 handle);
mogl_function_glIsImageHandleResidentNV glIsImageHandleResidentNV;
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

typedef void (*mogl_function_glBlendParameteriNV)(GLenum pname, GLint value);
mogl_function_glBlendParameteriNV glBlendParameteriNV;

typedef void (*mogl_function_glBlendBarrierNV)();
mogl_function_glBlendBarrierNV glBlendBarrierNV;
#define GL_NV_blend_equation_advanced_coherent 1
#define GL_BLEND_ADVANCED_COHERENT_NV 0x9285
#define GL_NV_blend_minmax_factor 1
#define GL_NV_blend_square 1
#define GL_NV_clip_space_w_scaling 1
#define GL_VIEWPORT_POSITION_W_SCALE_NV 0x937C
#define GL_VIEWPORT_POSITION_W_SCALE_X_COEFF_NV 0x937D
#define GL_VIEWPORT_POSITION_W_SCALE_Y_COEFF_NV 0x937E

typedef void (*mogl_function_glViewportPositionWScaleNV)(GLuint index, GLfloat xcoeff, GLfloat ycoeff);
mogl_function_glViewportPositionWScaleNV glViewportPositionWScaleNV;
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

typedef void (*mogl_function_glCreateStatesNV)(GLsizei n, GLuint *states);
mogl_function_glCreateStatesNV glCreateStatesNV;

typedef void (*mogl_function_glDeleteStatesNV)(GLsizei n, GLuint *states);
mogl_function_glDeleteStatesNV glDeleteStatesNV;

typedef GLboolean  (*mogl_function_glIsStateNV)(GLuint state);
mogl_function_glIsStateNV glIsStateNV;

typedef void (*mogl_function_glStateCaptureNV)(GLuint state, GLenum mode);
mogl_function_glStateCaptureNV glStateCaptureNV;

typedef GLuint  (*mogl_function_glGetCommandHeaderNV)(GLenum tokenID, GLuint size);
mogl_function_glGetCommandHeaderNV glGetCommandHeaderNV;

typedef GLushort  (*mogl_function_glGetStageIndexNV)(GLenum shadertype);
mogl_function_glGetStageIndexNV glGetStageIndexNV;

typedef void (*mogl_function_glDrawCommandsNV)(GLenum primitiveMode, GLuint buffer, GLintptr *indirects, GLsizei *sizes, GLuint count);
mogl_function_glDrawCommandsNV glDrawCommandsNV;

typedef void (*mogl_function_glDrawCommandsAddressNV)(GLenum primitiveMode, GLuint64 *indirects, GLsizei *sizes, GLuint count);
mogl_function_glDrawCommandsAddressNV glDrawCommandsAddressNV;

typedef void (*mogl_function_glDrawCommandsStatesNV)(GLuint buffer, GLintptr *indirects, GLsizei *sizes, GLuint *states, GLuint *fbos, GLuint count);
mogl_function_glDrawCommandsStatesNV glDrawCommandsStatesNV;

typedef void (*mogl_function_glDrawCommandsStatesAddressNV)(GLuint64 *indirects, GLsizei *sizes, GLuint *states, GLuint *fbos, GLuint count);
mogl_function_glDrawCommandsStatesAddressNV glDrawCommandsStatesAddressNV;

typedef void (*mogl_function_glCreateCommandListsNV)(GLsizei n, GLuint *lists);
mogl_function_glCreateCommandListsNV glCreateCommandListsNV;

typedef void (*mogl_function_glDeleteCommandListsNV)(GLsizei n, GLuint *lists);
mogl_function_glDeleteCommandListsNV glDeleteCommandListsNV;

typedef GLboolean  (*mogl_function_glIsCommandListNV)(GLuint list);
mogl_function_glIsCommandListNV glIsCommandListNV;

typedef void (*mogl_function_glListDrawCommandsStatesClientNV)(GLuint list, GLuint segment, void * *indirects, GLsizei *sizes, GLuint *states, GLuint *fbos, GLuint count);
mogl_function_glListDrawCommandsStatesClientNV glListDrawCommandsStatesClientNV;

typedef void (*mogl_function_glCommandListSegmentsNV)(GLuint list, GLuint segments);
mogl_function_glCommandListSegmentsNV glCommandListSegmentsNV;

typedef void (*mogl_function_glCompileCommandListNV)(GLuint list);
mogl_function_glCompileCommandListNV glCompileCommandListNV;

typedef void (*mogl_function_glCallCommandListNV)(GLuint list);
mogl_function_glCallCommandListNV glCallCommandListNV;
#define GL_NV_compute_program5 1
#define GL_COMPUTE_PROGRAM_NV 0x90FB
#define GL_COMPUTE_PROGRAM_PARAMETER_BUFFER_NV 0x90FC
#define GL_NV_compute_shader_derivatives 1
#define GL_NV_conditional_render 1
#define GL_QUERY_WAIT_NV 0x8E13
#define GL_QUERY_NO_WAIT_NV 0x8E14
#define GL_QUERY_BY_REGION_WAIT_NV 0x8E15
#define GL_QUERY_BY_REGION_NO_WAIT_NV 0x8E16

typedef void (*mogl_function_glBeginConditionalRenderNV)(GLuint id, GLenum mode);
mogl_function_glBeginConditionalRenderNV glBeginConditionalRenderNV;

typedef void (*mogl_function_glEndConditionalRenderNV)();
mogl_function_glEndConditionalRenderNV glEndConditionalRenderNV;
#define GL_NV_conservative_raster 1
#define GL_CONSERVATIVE_RASTERIZATION_NV 0x9346
#define GL_SUBPIXEL_PRECISION_BIAS_X_BITS_NV 0x9347
#define GL_SUBPIXEL_PRECISION_BIAS_Y_BITS_NV 0x9348
#define GL_MAX_SUBPIXEL_PRECISION_BIAS_BITS_NV 0x9349

typedef void (*mogl_function_glSubpixelPrecisionBiasNV)(GLuint xbits, GLuint ybits);
mogl_function_glSubpixelPrecisionBiasNV glSubpixelPrecisionBiasNV;
#define GL_NV_conservative_raster_dilate 1
#define GL_CONSERVATIVE_RASTER_DILATE_NV 0x9379
#define GL_CONSERVATIVE_RASTER_DILATE_RANGE_NV 0x937A
#define GL_CONSERVATIVE_RASTER_DILATE_GRANULARITY_NV 0x937B

typedef void (*mogl_function_glConservativeRasterParameterfNV)(GLenum pname, GLfloat value);
mogl_function_glConservativeRasterParameterfNV glConservativeRasterParameterfNV;
#define GL_NV_conservative_raster_pre_snap 1
#define GL_CONSERVATIVE_RASTER_MODE_PRE_SNAP_NV 0x9550
#define GL_NV_conservative_raster_pre_snap_triangles 1
#define GL_CONSERVATIVE_RASTER_MODE_NV 0x954D
#define GL_CONSERVATIVE_RASTER_MODE_POST_SNAP_NV 0x954E
#define GL_CONSERVATIVE_RASTER_MODE_PRE_SNAP_TRIANGLES_NV 0x954F

typedef void (*mogl_function_glConservativeRasterParameteriNV)(GLenum pname, GLint param);
mogl_function_glConservativeRasterParameteriNV glConservativeRasterParameteriNV;
#define GL_NV_conservative_raster_underestimation 1
#define GL_NV_copy_depth_to_color 1
#define GL_DEPTH_STENCIL_TO_RGBA_NV 0x886E
#define GL_DEPTH_STENCIL_TO_BGRA_NV 0x886F
#define GL_NV_copy_image 1

typedef void (*mogl_function_glCopyImageSubDataNV)(GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, GLuint dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei width, GLsizei height, GLsizei depth);
mogl_function_glCopyImageSubDataNV glCopyImageSubDataNV;
#define GL_NV_deep_texture3D 1
#define GL_MAX_DEEP_3D_TEXTURE_WIDTH_HEIGHT_NV 0x90D0
#define GL_MAX_DEEP_3D_TEXTURE_DEPTH_NV 0x90D1
#define GL_NV_depth_buffer_float 1
#define GL_DEPTH_COMPONENT32F_NV 0x8DAB
#define GL_DEPTH32F_STENCIL8_NV 0x8DAC
#define GL_FLOAT_32_UNSIGNED_INT_24_8_REV_NV 0x8DAD
#define GL_DEPTH_BUFFER_FLOAT_MODE_NV 0x8DAF

typedef void (*mogl_function_glDepthRangedNV)(GLdouble zNear, GLdouble zFar);
mogl_function_glDepthRangedNV glDepthRangedNV;

typedef void (*mogl_function_glClearDepthdNV)(GLdouble depth);
mogl_function_glClearDepthdNV glClearDepthdNV;

typedef void (*mogl_function_glDepthBoundsdNV)(GLdouble zmin, GLdouble zmax);
mogl_function_glDepthBoundsdNV glDepthBoundsdNV;
#define GL_NV_depth_clamp 1
#define GL_DEPTH_CLAMP_NV 0x864F
#define GL_NV_draw_texture 1

typedef void (*mogl_function_glDrawTextureNV)(GLuint texture, GLuint sampler, GLfloat x0, GLfloat y0, GLfloat x1, GLfloat y1, GLfloat z, GLfloat s0, GLfloat t0, GLfloat s1, GLfloat t1);
mogl_function_glDrawTextureNV glDrawTextureNV;
#define GL_NV_draw_vulkan_image 1

typedef void (*GLVULKANPROCNV)();

typedef void (*mogl_function_glDrawVkImageNV)(GLuint64 vkImage, GLuint sampler, GLfloat x0, GLfloat y0, GLfloat x1, GLfloat y1, GLfloat z, GLfloat s0, GLfloat t0, GLfloat s1, GLfloat t1);
mogl_function_glDrawVkImageNV glDrawVkImageNV;

typedef GLVULKANPROCNV  (*mogl_function_glGetVkProcAddrNV)(GLchar *name);
mogl_function_glGetVkProcAddrNV glGetVkProcAddrNV;

typedef void (*mogl_function_glWaitVkSemaphoreNV)(GLuint64 vkSemaphore);
mogl_function_glWaitVkSemaphoreNV glWaitVkSemaphoreNV;

typedef void (*mogl_function_glSignalVkSemaphoreNV)(GLuint64 vkSemaphore);
mogl_function_glSignalVkSemaphoreNV glSignalVkSemaphoreNV;

typedef void (*mogl_function_glSignalVkFenceNV)(GLuint64 vkFence);
mogl_function_glSignalVkFenceNV glSignalVkFenceNV;
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

typedef void (*mogl_function_glMapControlPointsNV)(GLenum target, GLuint index, GLenum type, GLsizei ustride, GLsizei vstride, GLint uorder, GLint vorder, GLboolean packed, void * points);
mogl_function_glMapControlPointsNV glMapControlPointsNV;

typedef void (*mogl_function_glMapParameterivNV)(GLenum target, GLenum pname, GLint *params);
mogl_function_glMapParameterivNV glMapParameterivNV;

typedef void (*mogl_function_glMapParameterfvNV)(GLenum target, GLenum pname, GLfloat *params);
mogl_function_glMapParameterfvNV glMapParameterfvNV;

typedef void (*mogl_function_glGetMapControlPointsNV)(GLenum target, GLuint index, GLenum type, GLsizei ustride, GLsizei vstride, GLboolean packed, void * points);
mogl_function_glGetMapControlPointsNV glGetMapControlPointsNV;

typedef void (*mogl_function_glGetMapParameterivNV)(GLenum target, GLenum pname, GLint *params);
mogl_function_glGetMapParameterivNV glGetMapParameterivNV;

typedef void (*mogl_function_glGetMapParameterfvNV)(GLenum target, GLenum pname, GLfloat *params);
mogl_function_glGetMapParameterfvNV glGetMapParameterfvNV;

typedef void (*mogl_function_glGetMapAttribParameterivNV)(GLenum target, GLuint index, GLenum pname, GLint *params);
mogl_function_glGetMapAttribParameterivNV glGetMapAttribParameterivNV;

typedef void (*mogl_function_glGetMapAttribParameterfvNV)(GLenum target, GLuint index, GLenum pname, GLfloat *params);
mogl_function_glGetMapAttribParameterfvNV glGetMapAttribParameterfvNV;

typedef void (*mogl_function_glEvalMapsNV)(GLenum target, GLenum mode);
mogl_function_glEvalMapsNV glEvalMapsNV;
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

typedef void (*mogl_function_glGetMultisamplefvNV)(GLenum pname, GLuint index, GLfloat *val);
mogl_function_glGetMultisamplefvNV glGetMultisamplefvNV;

typedef void (*mogl_function_glSampleMaskIndexedNV)(GLuint index, GLbitfield mask);
mogl_function_glSampleMaskIndexedNV glSampleMaskIndexedNV;

typedef void (*mogl_function_glTexRenderbufferNV)(GLenum target, GLuint renderbuffer);
mogl_function_glTexRenderbufferNV glTexRenderbufferNV;
#define GL_NV_fence 1
#define GL_ALL_COMPLETED_NV 0x84F2
#define GL_FENCE_STATUS_NV 0x84F3
#define GL_FENCE_CONDITION_NV 0x84F4

typedef void (*mogl_function_glDeleteFencesNV)(GLsizei n, GLuint *fences);
mogl_function_glDeleteFencesNV glDeleteFencesNV;

typedef void (*mogl_function_glGenFencesNV)(GLsizei n, GLuint *fences);
mogl_function_glGenFencesNV glGenFencesNV;

typedef GLboolean  (*mogl_function_glIsFenceNV)(GLuint fence);
mogl_function_glIsFenceNV glIsFenceNV;

typedef GLboolean  (*mogl_function_glTestFenceNV)(GLuint fence);
mogl_function_glTestFenceNV glTestFenceNV;

typedef void (*mogl_function_glGetFenceivNV)(GLuint fence, GLenum pname, GLint *params);
mogl_function_glGetFenceivNV glGetFenceivNV;

typedef void (*mogl_function_glFinishFenceNV)(GLuint fence);
mogl_function_glFinishFenceNV glFinishFenceNV;

typedef void (*mogl_function_glSetFenceNV)(GLuint fence, GLenum condition);
mogl_function_glSetFenceNV glSetFenceNV;
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

typedef void (*mogl_function_glFragmentCoverageColorNV)(GLuint color);
mogl_function_glFragmentCoverageColorNV glFragmentCoverageColorNV;
#define GL_NV_fragment_program 1
#define GL_MAX_FRAGMENT_PROGRAM_LOCAL_PARAMETERS_NV 0x8868
#define GL_FRAGMENT_PROGRAM_NV 0x8870
#define GL_MAX_TEXTURE_COORDS_NV 0x8871
#define GL_MAX_TEXTURE_IMAGE_UNITS_NV 0x8872
#define GL_FRAGMENT_PROGRAM_BINDING_NV 0x8873
#define GL_PROGRAM_ERROR_STRING_NV 0x8874

typedef void (*mogl_function_glProgramNamedParameter4fNV)(GLuint id, GLsizei len, GLubyte *name, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
mogl_function_glProgramNamedParameter4fNV glProgramNamedParameter4fNV;

typedef void (*mogl_function_glProgramNamedParameter4fvNV)(GLuint id, GLsizei len, GLubyte *name, GLfloat *v);
mogl_function_glProgramNamedParameter4fvNV glProgramNamedParameter4fvNV;

typedef void (*mogl_function_glProgramNamedParameter4dNV)(GLuint id, GLsizei len, GLubyte *name, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
mogl_function_glProgramNamedParameter4dNV glProgramNamedParameter4dNV;

typedef void (*mogl_function_glProgramNamedParameter4dvNV)(GLuint id, GLsizei len, GLubyte *name, GLdouble *v);
mogl_function_glProgramNamedParameter4dvNV glProgramNamedParameter4dvNV;

typedef void (*mogl_function_glGetProgramNamedParameterfvNV)(GLuint id, GLsizei len, GLubyte *name, GLfloat *params);
mogl_function_glGetProgramNamedParameterfvNV glGetProgramNamedParameterfvNV;

typedef void (*mogl_function_glGetProgramNamedParameterdvNV)(GLuint id, GLsizei len, GLubyte *name, GLdouble *params);
mogl_function_glGetProgramNamedParameterdvNV glGetProgramNamedParameterdvNV;
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

typedef void (*mogl_function_glCoverageModulationTableNV)(GLsizei n, GLfloat *v);
mogl_function_glCoverageModulationTableNV glCoverageModulationTableNV;

typedef void (*mogl_function_glGetCoverageModulationTableNV)(GLsizei bufSize, GLfloat *v);
mogl_function_glGetCoverageModulationTableNV glGetCoverageModulationTableNV;

typedef void (*mogl_function_glCoverageModulationNV)(GLenum components);
mogl_function_glCoverageModulationNV glCoverageModulationNV;
#define GL_NV_framebuffer_multisample_coverage 1
#define GL_RENDERBUFFER_COVERAGE_SAMPLES_NV 0x8CAB
#define GL_RENDERBUFFER_COLOR_SAMPLES_NV 0x8E10
#define GL_MAX_MULTISAMPLE_COVERAGE_MODES_NV 0x8E11
#define GL_MULTISAMPLE_COVERAGE_MODES_NV 0x8E12

typedef void (*mogl_function_glRenderbufferStorageMultisampleCoverageNV)(GLenum target, GLsizei coverageSamples, GLsizei colorSamples, GLenum internalformat, GLsizei width, GLsizei height);
mogl_function_glRenderbufferStorageMultisampleCoverageNV glRenderbufferStorageMultisampleCoverageNV;
#define GL_NV_geometry_program4 1
#define GL_GEOMETRY_PROGRAM_NV 0x8C26
#define GL_MAX_PROGRAM_OUTPUT_VERTICES_NV 0x8C27
#define GL_MAX_PROGRAM_TOTAL_OUTPUT_COMPONENTS_NV 0x8C28

typedef void (*mogl_function_glProgramVertexLimitNV)(GLenum target, GLint limit);
mogl_function_glProgramVertexLimitNV glProgramVertexLimitNV;

typedef void (*mogl_function_glFramebufferTextureEXT)(GLenum target, GLenum attachment, GLuint texture, GLint level);
mogl_function_glFramebufferTextureEXT glFramebufferTextureEXT;

typedef void (*mogl_function_glFramebufferTextureFaceEXT)(GLenum target, GLenum attachment, GLuint texture, GLint level, GLenum face);
mogl_function_glFramebufferTextureFaceEXT glFramebufferTextureFaceEXT;
#define GL_NV_geometry_shader4 1
#define GL_NV_geometry_shader_passthrough 1
#define GL_NV_gpu_multicast 1
#define GL_PER_GPU_STORAGE_BIT_NV 0x0800
#define GL_MULTICAST_GPUS_NV 0x92BA
#define GL_RENDER_GPU_MASK_NV 0x9558
#define GL_PER_GPU_STORAGE_NV 0x9548
#define GL_MULTICAST_PROGRAMMABLE_SAMPLE_LOCATION_NV 0x9549

typedef void (*mogl_function_glRenderGpuMaskNV)(GLbitfield mask);
mogl_function_glRenderGpuMaskNV glRenderGpuMaskNV;

typedef void (*mogl_function_glMulticastBufferSubDataNV)(GLbitfield gpuMask, GLuint buffer, GLintptr offset, GLsizeiptr size, void * data);
mogl_function_glMulticastBufferSubDataNV glMulticastBufferSubDataNV;

typedef void (*mogl_function_glMulticastCopyBufferSubDataNV)(GLuint readGpu, GLbitfield writeGpuMask, GLuint readBuffer, GLuint writeBuffer, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size);
mogl_function_glMulticastCopyBufferSubDataNV glMulticastCopyBufferSubDataNV;

typedef void (*mogl_function_glMulticastCopyImageSubDataNV)(GLuint srcGpu, GLbitfield dstGpuMask, GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, GLuint dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei srcWidth, GLsizei srcHeight, GLsizei srcDepth);
mogl_function_glMulticastCopyImageSubDataNV glMulticastCopyImageSubDataNV;

typedef void (*mogl_function_glMulticastBlitFramebufferNV)(GLuint srcGpu, GLuint dstGpu, GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter);
mogl_function_glMulticastBlitFramebufferNV glMulticastBlitFramebufferNV;

typedef void (*mogl_function_glMulticastFramebufferSampleLocationsfvNV)(GLuint gpu, GLuint framebuffer, GLuint start, GLsizei count, GLfloat *v);
mogl_function_glMulticastFramebufferSampleLocationsfvNV glMulticastFramebufferSampleLocationsfvNV;

typedef void (*mogl_function_glMulticastBarrierNV)();
mogl_function_glMulticastBarrierNV glMulticastBarrierNV;

typedef void (*mogl_function_glMulticastWaitSyncNV)(GLuint signalGpu, GLbitfield waitGpuMask);
mogl_function_glMulticastWaitSyncNV glMulticastWaitSyncNV;

typedef void (*mogl_function_glMulticastGetQueryObjectivNV)(GLuint gpu, GLuint id, GLenum pname, GLint *params);
mogl_function_glMulticastGetQueryObjectivNV glMulticastGetQueryObjectivNV;

typedef void (*mogl_function_glMulticastGetQueryObjectuivNV)(GLuint gpu, GLuint id, GLenum pname, GLuint *params);
mogl_function_glMulticastGetQueryObjectuivNV glMulticastGetQueryObjectuivNV;

typedef void (*mogl_function_glMulticastGetQueryObjecti64vNV)(GLuint gpu, GLuint id, GLenum pname, GLint64 *params);
mogl_function_glMulticastGetQueryObjecti64vNV glMulticastGetQueryObjecti64vNV;

typedef void (*mogl_function_glMulticastGetQueryObjectui64vNV)(GLuint gpu, GLuint id, GLenum pname, GLuint64 *params);
mogl_function_glMulticastGetQueryObjectui64vNV glMulticastGetQueryObjectui64vNV;
#define GL_NV_gpu_program4 1
#define GL_MIN_PROGRAM_TEXEL_OFFSET_NV 0x8904
#define GL_MAX_PROGRAM_TEXEL_OFFSET_NV 0x8905
#define GL_PROGRAM_ATTRIB_COMPONENTS_NV 0x8906
#define GL_PROGRAM_RESULT_COMPONENTS_NV 0x8907
#define GL_MAX_PROGRAM_ATTRIB_COMPONENTS_NV 0x8908
#define GL_MAX_PROGRAM_RESULT_COMPONENTS_NV 0x8909
#define GL_MAX_PROGRAM_GENERIC_ATTRIBS_NV 0x8DA5
#define GL_MAX_PROGRAM_GENERIC_RESULTS_NV 0x8DA6

typedef void (*mogl_function_glProgramLocalParameterI4iNV)(GLenum target, GLuint index, GLint x, GLint y, GLint z, GLint w);
mogl_function_glProgramLocalParameterI4iNV glProgramLocalParameterI4iNV;

typedef void (*mogl_function_glProgramLocalParameterI4ivNV)(GLenum target, GLuint index, GLint *params);
mogl_function_glProgramLocalParameterI4ivNV glProgramLocalParameterI4ivNV;

typedef void (*mogl_function_glProgramLocalParametersI4ivNV)(GLenum target, GLuint index, GLsizei count, GLint *params);
mogl_function_glProgramLocalParametersI4ivNV glProgramLocalParametersI4ivNV;

typedef void (*mogl_function_glProgramLocalParameterI4uiNV)(GLenum target, GLuint index, GLuint x, GLuint y, GLuint z, GLuint w);
mogl_function_glProgramLocalParameterI4uiNV glProgramLocalParameterI4uiNV;

typedef void (*mogl_function_glProgramLocalParameterI4uivNV)(GLenum target, GLuint index, GLuint *params);
mogl_function_glProgramLocalParameterI4uivNV glProgramLocalParameterI4uivNV;

typedef void (*mogl_function_glProgramLocalParametersI4uivNV)(GLenum target, GLuint index, GLsizei count, GLuint *params);
mogl_function_glProgramLocalParametersI4uivNV glProgramLocalParametersI4uivNV;

typedef void (*mogl_function_glProgramEnvParameterI4iNV)(GLenum target, GLuint index, GLint x, GLint y, GLint z, GLint w);
mogl_function_glProgramEnvParameterI4iNV glProgramEnvParameterI4iNV;

typedef void (*mogl_function_glProgramEnvParameterI4ivNV)(GLenum target, GLuint index, GLint *params);
mogl_function_glProgramEnvParameterI4ivNV glProgramEnvParameterI4ivNV;

typedef void (*mogl_function_glProgramEnvParametersI4ivNV)(GLenum target, GLuint index, GLsizei count, GLint *params);
mogl_function_glProgramEnvParametersI4ivNV glProgramEnvParametersI4ivNV;

typedef void (*mogl_function_glProgramEnvParameterI4uiNV)(GLenum target, GLuint index, GLuint x, GLuint y, GLuint z, GLuint w);
mogl_function_glProgramEnvParameterI4uiNV glProgramEnvParameterI4uiNV;

typedef void (*mogl_function_glProgramEnvParameterI4uivNV)(GLenum target, GLuint index, GLuint *params);
mogl_function_glProgramEnvParameterI4uivNV glProgramEnvParameterI4uivNV;

typedef void (*mogl_function_glProgramEnvParametersI4uivNV)(GLenum target, GLuint index, GLsizei count, GLuint *params);
mogl_function_glProgramEnvParametersI4uivNV glProgramEnvParametersI4uivNV;

typedef void (*mogl_function_glGetProgramLocalParameterIivNV)(GLenum target, GLuint index, GLint *params);
mogl_function_glGetProgramLocalParameterIivNV glGetProgramLocalParameterIivNV;

typedef void (*mogl_function_glGetProgramLocalParameterIuivNV)(GLenum target, GLuint index, GLuint *params);
mogl_function_glGetProgramLocalParameterIuivNV glGetProgramLocalParameterIuivNV;

typedef void (*mogl_function_glGetProgramEnvParameterIivNV)(GLenum target, GLuint index, GLint *params);
mogl_function_glGetProgramEnvParameterIivNV glGetProgramEnvParameterIivNV;

typedef void (*mogl_function_glGetProgramEnvParameterIuivNV)(GLenum target, GLuint index, GLuint *params);
mogl_function_glGetProgramEnvParameterIuivNV glGetProgramEnvParameterIuivNV;
#define GL_NV_gpu_program5 1
#define GL_MAX_GEOMETRY_PROGRAM_INVOCATIONS_NV 0x8E5A
#define GL_MIN_FRAGMENT_INTERPOLATION_OFFSET_NV 0x8E5B
#define GL_MAX_FRAGMENT_INTERPOLATION_OFFSET_NV 0x8E5C
#define GL_FRAGMENT_PROGRAM_INTERPOLATION_OFFSET_BITS_NV 0x8E5D
#define GL_MIN_PROGRAM_TEXTURE_GATHER_OFFSET_NV 0x8E5E
#define GL_MAX_PROGRAM_TEXTURE_GATHER_OFFSET_NV 0x8E5F
#define GL_MAX_PROGRAM_SUBROUTINE_PARAMETERS_NV 0x8F44
#define GL_MAX_PROGRAM_SUBROUTINE_NUM_NV 0x8F45

typedef void (*mogl_function_glProgramSubroutineParametersuivNV)(GLenum target, GLsizei count, GLuint *params);
mogl_function_glProgramSubroutineParametersuivNV glProgramSubroutineParametersuivNV;

typedef void (*mogl_function_glGetProgramSubroutineParameteruivNV)(GLenum target, GLuint index, GLuint *param);
mogl_function_glGetProgramSubroutineParameteruivNV glGetProgramSubroutineParameteruivNV;
#define GL_NV_gpu_program5_mem_extended 1
#define GL_NV_gpu_shader5 1
#define GL_NV_half_float 1
#define GL_HALF_FLOAT_NV 0x140B

typedef void (*mogl_function_glVertex2hNV)(GLhalfNV x, GLhalfNV y);
mogl_function_glVertex2hNV glVertex2hNV;

typedef void (*mogl_function_glVertex2hvNV)(GLhalfNV *v);
mogl_function_glVertex2hvNV glVertex2hvNV;

typedef void (*mogl_function_glVertex3hNV)(GLhalfNV x, GLhalfNV y, GLhalfNV z);
mogl_function_glVertex3hNV glVertex3hNV;

typedef void (*mogl_function_glVertex3hvNV)(GLhalfNV *v);
mogl_function_glVertex3hvNV glVertex3hvNV;

typedef void (*mogl_function_glVertex4hNV)(GLhalfNV x, GLhalfNV y, GLhalfNV z, GLhalfNV w);
mogl_function_glVertex4hNV glVertex4hNV;

typedef void (*mogl_function_glVertex4hvNV)(GLhalfNV *v);
mogl_function_glVertex4hvNV glVertex4hvNV;

typedef void (*mogl_function_glNormal3hNV)(GLhalfNV nx, GLhalfNV ny, GLhalfNV nz);
mogl_function_glNormal3hNV glNormal3hNV;

typedef void (*mogl_function_glNormal3hvNV)(GLhalfNV *v);
mogl_function_glNormal3hvNV glNormal3hvNV;

typedef void (*mogl_function_glColor3hNV)(GLhalfNV red, GLhalfNV green, GLhalfNV blue);
mogl_function_glColor3hNV glColor3hNV;

typedef void (*mogl_function_glColor3hvNV)(GLhalfNV *v);
mogl_function_glColor3hvNV glColor3hvNV;

typedef void (*mogl_function_glColor4hNV)(GLhalfNV red, GLhalfNV green, GLhalfNV blue, GLhalfNV alpha);
mogl_function_glColor4hNV glColor4hNV;

typedef void (*mogl_function_glColor4hvNV)(GLhalfNV *v);
mogl_function_glColor4hvNV glColor4hvNV;

typedef void (*mogl_function_glTexCoord1hNV)(GLhalfNV s);
mogl_function_glTexCoord1hNV glTexCoord1hNV;

typedef void (*mogl_function_glTexCoord1hvNV)(GLhalfNV *v);
mogl_function_glTexCoord1hvNV glTexCoord1hvNV;

typedef void (*mogl_function_glTexCoord2hNV)(GLhalfNV s, GLhalfNV t);
mogl_function_glTexCoord2hNV glTexCoord2hNV;

typedef void (*mogl_function_glTexCoord2hvNV)(GLhalfNV *v);
mogl_function_glTexCoord2hvNV glTexCoord2hvNV;

typedef void (*mogl_function_glTexCoord3hNV)(GLhalfNV s, GLhalfNV t, GLhalfNV r);
mogl_function_glTexCoord3hNV glTexCoord3hNV;

typedef void (*mogl_function_glTexCoord3hvNV)(GLhalfNV *v);
mogl_function_glTexCoord3hvNV glTexCoord3hvNV;

typedef void (*mogl_function_glTexCoord4hNV)(GLhalfNV s, GLhalfNV t, GLhalfNV r, GLhalfNV q);
mogl_function_glTexCoord4hNV glTexCoord4hNV;

typedef void (*mogl_function_glTexCoord4hvNV)(GLhalfNV *v);
mogl_function_glTexCoord4hvNV glTexCoord4hvNV;

typedef void (*mogl_function_glMultiTexCoord1hNV)(GLenum target, GLhalfNV s);
mogl_function_glMultiTexCoord1hNV glMultiTexCoord1hNV;

typedef void (*mogl_function_glMultiTexCoord1hvNV)(GLenum target, GLhalfNV *v);
mogl_function_glMultiTexCoord1hvNV glMultiTexCoord1hvNV;

typedef void (*mogl_function_glMultiTexCoord2hNV)(GLenum target, GLhalfNV s, GLhalfNV t);
mogl_function_glMultiTexCoord2hNV glMultiTexCoord2hNV;

typedef void (*mogl_function_glMultiTexCoord2hvNV)(GLenum target, GLhalfNV *v);
mogl_function_glMultiTexCoord2hvNV glMultiTexCoord2hvNV;

typedef void (*mogl_function_glMultiTexCoord3hNV)(GLenum target, GLhalfNV s, GLhalfNV t, GLhalfNV r);
mogl_function_glMultiTexCoord3hNV glMultiTexCoord3hNV;

typedef void (*mogl_function_glMultiTexCoord3hvNV)(GLenum target, GLhalfNV *v);
mogl_function_glMultiTexCoord3hvNV glMultiTexCoord3hvNV;

typedef void (*mogl_function_glMultiTexCoord4hNV)(GLenum target, GLhalfNV s, GLhalfNV t, GLhalfNV r, GLhalfNV q);
mogl_function_glMultiTexCoord4hNV glMultiTexCoord4hNV;

typedef void (*mogl_function_glMultiTexCoord4hvNV)(GLenum target, GLhalfNV *v);
mogl_function_glMultiTexCoord4hvNV glMultiTexCoord4hvNV;

typedef void (*mogl_function_glVertexAttrib1hNV)(GLuint index, GLhalfNV x);
mogl_function_glVertexAttrib1hNV glVertexAttrib1hNV;

typedef void (*mogl_function_glVertexAttrib1hvNV)(GLuint index, GLhalfNV *v);
mogl_function_glVertexAttrib1hvNV glVertexAttrib1hvNV;

typedef void (*mogl_function_glVertexAttrib2hNV)(GLuint index, GLhalfNV x, GLhalfNV y);
mogl_function_glVertexAttrib2hNV glVertexAttrib2hNV;

typedef void (*mogl_function_glVertexAttrib2hvNV)(GLuint index, GLhalfNV *v);
mogl_function_glVertexAttrib2hvNV glVertexAttrib2hvNV;

typedef void (*mogl_function_glVertexAttrib3hNV)(GLuint index, GLhalfNV x, GLhalfNV y, GLhalfNV z);
mogl_function_glVertexAttrib3hNV glVertexAttrib3hNV;

typedef void (*mogl_function_glVertexAttrib3hvNV)(GLuint index, GLhalfNV *v);
mogl_function_glVertexAttrib3hvNV glVertexAttrib3hvNV;

typedef void (*mogl_function_glVertexAttrib4hNV)(GLuint index, GLhalfNV x, GLhalfNV y, GLhalfNV z, GLhalfNV w);
mogl_function_glVertexAttrib4hNV glVertexAttrib4hNV;

typedef void (*mogl_function_glVertexAttrib4hvNV)(GLuint index, GLhalfNV *v);
mogl_function_glVertexAttrib4hvNV glVertexAttrib4hvNV;

typedef void (*mogl_function_glVertexAttribs1hvNV)(GLuint index, GLsizei n, GLhalfNV *v);
mogl_function_glVertexAttribs1hvNV glVertexAttribs1hvNV;

typedef void (*mogl_function_glVertexAttribs2hvNV)(GLuint index, GLsizei n, GLhalfNV *v);
mogl_function_glVertexAttribs2hvNV glVertexAttribs2hvNV;

typedef void (*mogl_function_glVertexAttribs3hvNV)(GLuint index, GLsizei n, GLhalfNV *v);
mogl_function_glVertexAttribs3hvNV glVertexAttribs3hvNV;

typedef void (*mogl_function_glVertexAttribs4hvNV)(GLuint index, GLsizei n, GLhalfNV *v);
mogl_function_glVertexAttribs4hvNV glVertexAttribs4hvNV;

typedef void (*mogl_function_glFogCoordhNV)(GLhalfNV fog);
mogl_function_glFogCoordhNV glFogCoordhNV;

typedef void (*mogl_function_glFogCoordhvNV)(GLhalfNV *fog);
mogl_function_glFogCoordhvNV glFogCoordhvNV;

typedef void (*mogl_function_glSecondaryColor3hNV)(GLhalfNV red, GLhalfNV green, GLhalfNV blue);
mogl_function_glSecondaryColor3hNV glSecondaryColor3hNV;

typedef void (*mogl_function_glSecondaryColor3hvNV)(GLhalfNV *v);
mogl_function_glSecondaryColor3hvNV glSecondaryColor3hvNV;

typedef void (*mogl_function_glVertexWeighthNV)(GLhalfNV weight);
mogl_function_glVertexWeighthNV glVertexWeighthNV;

typedef void (*mogl_function_glVertexWeighthvNV)(GLhalfNV *weight);
mogl_function_glVertexWeighthvNV glVertexWeighthvNV;
#define GL_NV_internalformat_sample_query 1
#define GL_MULTISAMPLES_NV 0x9371
#define GL_SUPERSAMPLE_SCALE_X_NV 0x9372
#define GL_SUPERSAMPLE_SCALE_Y_NV 0x9373
#define GL_CONFORMANT_NV 0x9374

typedef void (*mogl_function_glGetInternalformatSampleivNV)(GLenum target, GLenum internalformat, GLsizei samples, GLenum pname, GLsizei count, GLint *params);
mogl_function_glGetInternalformatSampleivNV glGetInternalformatSampleivNV;
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

typedef void (*mogl_function_glGetMemoryObjectDetachedResourcesuivNV)(GLuint memory, GLenum pname, GLint first, GLsizei count, GLuint *params);
mogl_function_glGetMemoryObjectDetachedResourcesuivNV glGetMemoryObjectDetachedResourcesuivNV;

typedef void (*mogl_function_glResetMemoryObjectParameterNV)(GLuint memory, GLenum pname);
mogl_function_glResetMemoryObjectParameterNV glResetMemoryObjectParameterNV;

typedef void (*mogl_function_glTexAttachMemoryNV)(GLenum target, GLuint memory, GLuint64 offset);
mogl_function_glTexAttachMemoryNV glTexAttachMemoryNV;

typedef void (*mogl_function_glBufferAttachMemoryNV)(GLenum target, GLuint memory, GLuint64 offset);
mogl_function_glBufferAttachMemoryNV glBufferAttachMemoryNV;

typedef void (*mogl_function_glTextureAttachMemoryNV)(GLuint texture, GLuint memory, GLuint64 offset);
mogl_function_glTextureAttachMemoryNV glTextureAttachMemoryNV;

typedef void (*mogl_function_glNamedBufferAttachMemoryNV)(GLuint buffer, GLuint memory, GLuint64 offset);
mogl_function_glNamedBufferAttachMemoryNV glNamedBufferAttachMemoryNV;
#define GL_NV_memory_object_sparse 1

typedef void (*mogl_function_glBufferPageCommitmentMemNV)(GLenum target, GLintptr offset, GLsizeiptr size, GLuint memory, GLuint64 memOffset, GLboolean commit);
mogl_function_glBufferPageCommitmentMemNV glBufferPageCommitmentMemNV;

typedef void (*mogl_function_glTexPageCommitmentMemNV)(GLenum target, GLint layer, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLuint memory, GLuint64 offset, GLboolean commit);
mogl_function_glTexPageCommitmentMemNV glTexPageCommitmentMemNV;

typedef void (*mogl_function_glNamedBufferPageCommitmentMemNV)(GLuint buffer, GLintptr offset, GLsizeiptr size, GLuint memory, GLuint64 memOffset, GLboolean commit);
mogl_function_glNamedBufferPageCommitmentMemNV glNamedBufferPageCommitmentMemNV;

typedef void (*mogl_function_glTexturePageCommitmentMemNV)(GLuint texture, GLint layer, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLuint memory, GLuint64 offset, GLboolean commit);
mogl_function_glTexturePageCommitmentMemNV glTexturePageCommitmentMemNV;
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

typedef void (*mogl_function_glDrawMeshTasksNV)(GLuint first, GLuint count);
mogl_function_glDrawMeshTasksNV glDrawMeshTasksNV;

typedef void (*mogl_function_glDrawMeshTasksIndirectNV)(GLintptr indirect);
mogl_function_glDrawMeshTasksIndirectNV glDrawMeshTasksIndirectNV;

typedef void (*mogl_function_glMultiDrawMeshTasksIndirectNV)(GLintptr indirect, GLsizei drawcount, GLsizei stride);
mogl_function_glMultiDrawMeshTasksIndirectNV glMultiDrawMeshTasksIndirectNV;

typedef void (*mogl_function_glMultiDrawMeshTasksIndirectCountNV)(GLintptr indirect, GLintptr drawcount, GLsizei maxdrawcount, GLsizei stride);
mogl_function_glMultiDrawMeshTasksIndirectCountNV glMultiDrawMeshTasksIndirectCountNV;
#define GL_NV_multisample_coverage 1
#define GL_NV_multisample_filter_hint 1
#define GL_MULTISAMPLE_FILTER_HINT_NV 0x8534
#define GL_NV_occlusion_query 1
#define GL_PIXEL_COUNTER_BITS_NV 0x8864
#define GL_CURRENT_OCCLUSION_QUERY_ID_NV 0x8865
#define GL_PIXEL_COUNT_NV 0x8866
#define GL_PIXEL_COUNT_AVAILABLE_NV 0x8867

typedef void (*mogl_function_glGenOcclusionQueriesNV)(GLsizei n, GLuint *ids);
mogl_function_glGenOcclusionQueriesNV glGenOcclusionQueriesNV;

typedef void (*mogl_function_glDeleteOcclusionQueriesNV)(GLsizei n, GLuint *ids);
mogl_function_glDeleteOcclusionQueriesNV glDeleteOcclusionQueriesNV;

typedef GLboolean  (*mogl_function_glIsOcclusionQueryNV)(GLuint id);
mogl_function_glIsOcclusionQueryNV glIsOcclusionQueryNV;

typedef void (*mogl_function_glBeginOcclusionQueryNV)(GLuint id);
mogl_function_glBeginOcclusionQueryNV glBeginOcclusionQueryNV;

typedef void (*mogl_function_glEndOcclusionQueryNV)();
mogl_function_glEndOcclusionQueryNV glEndOcclusionQueryNV;

typedef void (*mogl_function_glGetOcclusionQueryivNV)(GLuint id, GLenum pname, GLint *params);
mogl_function_glGetOcclusionQueryivNV glGetOcclusionQueryivNV;

typedef void (*mogl_function_glGetOcclusionQueryuivNV)(GLuint id, GLenum pname, GLuint *params);
mogl_function_glGetOcclusionQueryuivNV glGetOcclusionQueryuivNV;
#define GL_NV_packed_depth_stencil 1
#define GL_DEPTH_STENCIL_NV 0x84F9
#define GL_UNSIGNED_INT_24_8_NV 0x84FA
#define GL_NV_parameter_buffer_object 1
#define GL_MAX_PROGRAM_PARAMETER_BUFFER_BINDINGS_NV 0x8DA0
#define GL_MAX_PROGRAM_PARAMETER_BUFFER_SIZE_NV 0x8DA1
#define GL_VERTEX_PROGRAM_PARAMETER_BUFFER_NV 0x8DA2
#define GL_GEOMETRY_PROGRAM_PARAMETER_BUFFER_NV 0x8DA3
#define GL_FRAGMENT_PROGRAM_PARAMETER_BUFFER_NV 0x8DA4

typedef void (*mogl_function_glProgramBufferParametersfvNV)(GLenum target, GLuint bindingIndex, GLuint wordIndex, GLsizei count, GLfloat *params);
mogl_function_glProgramBufferParametersfvNV glProgramBufferParametersfvNV;

typedef void (*mogl_function_glProgramBufferParametersIivNV)(GLenum target, GLuint bindingIndex, GLuint wordIndex, GLsizei count, GLint *params);
mogl_function_glProgramBufferParametersIivNV glProgramBufferParametersIivNV;

typedef void (*mogl_function_glProgramBufferParametersIuivNV)(GLenum target, GLuint bindingIndex, GLuint wordIndex, GLsizei count, GLuint *params);
mogl_function_glProgramBufferParametersIuivNV glProgramBufferParametersIuivNV;
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

typedef GLuint  (*mogl_function_glGenPathsNV)(GLsizei range);
mogl_function_glGenPathsNV glGenPathsNV;

typedef void (*mogl_function_glDeletePathsNV)(GLuint path, GLsizei range);
mogl_function_glDeletePathsNV glDeletePathsNV;

typedef GLboolean  (*mogl_function_glIsPathNV)(GLuint path);
mogl_function_glIsPathNV glIsPathNV;

typedef void (*mogl_function_glPathCommandsNV)(GLuint path, GLsizei numCommands, GLubyte *commands, GLsizei numCoords, GLenum coordType, void * coords);
mogl_function_glPathCommandsNV glPathCommandsNV;

typedef void (*mogl_function_glPathCoordsNV)(GLuint path, GLsizei numCoords, GLenum coordType, void * coords);
mogl_function_glPathCoordsNV glPathCoordsNV;

typedef void (*mogl_function_glPathSubCommandsNV)(GLuint path, GLsizei commandStart, GLsizei commandsToDelete, GLsizei numCommands, GLubyte *commands, GLsizei numCoords, GLenum coordType, void * coords);
mogl_function_glPathSubCommandsNV glPathSubCommandsNV;

typedef void (*mogl_function_glPathSubCoordsNV)(GLuint path, GLsizei coordStart, GLsizei numCoords, GLenum coordType, void * coords);
mogl_function_glPathSubCoordsNV glPathSubCoordsNV;

typedef void (*mogl_function_glPathStringNV)(GLuint path, GLenum format, GLsizei length, void * pathString);
mogl_function_glPathStringNV glPathStringNV;

typedef void (*mogl_function_glPathGlyphsNV)(GLuint firstPathName, GLenum fontTarget, void * fontName, GLbitfield fontStyle, GLsizei numGlyphs, GLenum type, void * charcodes, GLenum handleMissingGlyphs, GLuint pathParameterTemplate, GLfloat emScale);
mogl_function_glPathGlyphsNV glPathGlyphsNV;

typedef void (*mogl_function_glPathGlyphRangeNV)(GLuint firstPathName, GLenum fontTarget, void * fontName, GLbitfield fontStyle, GLuint firstGlyph, GLsizei numGlyphs, GLenum handleMissingGlyphs, GLuint pathParameterTemplate, GLfloat emScale);
mogl_function_glPathGlyphRangeNV glPathGlyphRangeNV;

typedef void (*mogl_function_glWeightPathsNV)(GLuint resultPath, GLsizei numPaths, GLuint *paths, GLfloat *weights);
mogl_function_glWeightPathsNV glWeightPathsNV;

typedef void (*mogl_function_glCopyPathNV)(GLuint resultPath, GLuint srcPath);
mogl_function_glCopyPathNV glCopyPathNV;

typedef void (*mogl_function_glInterpolatePathsNV)(GLuint resultPath, GLuint pathA, GLuint pathB, GLfloat weight);
mogl_function_glInterpolatePathsNV glInterpolatePathsNV;

typedef void (*mogl_function_glTransformPathNV)(GLuint resultPath, GLuint srcPath, GLenum transformType, GLfloat *transformValues);
mogl_function_glTransformPathNV glTransformPathNV;

typedef void (*mogl_function_glPathParameterivNV)(GLuint path, GLenum pname, GLint *value);
mogl_function_glPathParameterivNV glPathParameterivNV;

typedef void (*mogl_function_glPathParameteriNV)(GLuint path, GLenum pname, GLint value);
mogl_function_glPathParameteriNV glPathParameteriNV;

typedef void (*mogl_function_glPathParameterfvNV)(GLuint path, GLenum pname, GLfloat *value);
mogl_function_glPathParameterfvNV glPathParameterfvNV;

typedef void (*mogl_function_glPathParameterfNV)(GLuint path, GLenum pname, GLfloat value);
mogl_function_glPathParameterfNV glPathParameterfNV;

typedef void (*mogl_function_glPathDashArrayNV)(GLuint path, GLsizei dashCount, GLfloat *dashArray);
mogl_function_glPathDashArrayNV glPathDashArrayNV;

typedef void (*mogl_function_glPathStencilFuncNV)(GLenum func, GLint ref, GLuint mask);
mogl_function_glPathStencilFuncNV glPathStencilFuncNV;

typedef void (*mogl_function_glPathStencilDepthOffsetNV)(GLfloat factor, GLfloat units);
mogl_function_glPathStencilDepthOffsetNV glPathStencilDepthOffsetNV;

typedef void (*mogl_function_glStencilFillPathNV)(GLuint path, GLenum fillMode, GLuint mask);
mogl_function_glStencilFillPathNV glStencilFillPathNV;

typedef void (*mogl_function_glStencilStrokePathNV)(GLuint path, GLint reference, GLuint mask);
mogl_function_glStencilStrokePathNV glStencilStrokePathNV;

typedef void (*mogl_function_glStencilFillPathInstancedNV)(GLsizei numPaths, GLenum pathNameType, void * paths, GLuint pathBase, GLenum fillMode, GLuint mask, GLenum transformType, GLfloat *transformValues);
mogl_function_glStencilFillPathInstancedNV glStencilFillPathInstancedNV;

typedef void (*mogl_function_glStencilStrokePathInstancedNV)(GLsizei numPaths, GLenum pathNameType, void * paths, GLuint pathBase, GLint reference, GLuint mask, GLenum transformType, GLfloat *transformValues);
mogl_function_glStencilStrokePathInstancedNV glStencilStrokePathInstancedNV;

typedef void (*mogl_function_glPathCoverDepthFuncNV)(GLenum func);
mogl_function_glPathCoverDepthFuncNV glPathCoverDepthFuncNV;

typedef void (*mogl_function_glCoverFillPathNV)(GLuint path, GLenum coverMode);
mogl_function_glCoverFillPathNV glCoverFillPathNV;

typedef void (*mogl_function_glCoverStrokePathNV)(GLuint path, GLenum coverMode);
mogl_function_glCoverStrokePathNV glCoverStrokePathNV;

typedef void (*mogl_function_glCoverFillPathInstancedNV)(GLsizei numPaths, GLenum pathNameType, void * paths, GLuint pathBase, GLenum coverMode, GLenum transformType, GLfloat *transformValues);
mogl_function_glCoverFillPathInstancedNV glCoverFillPathInstancedNV;

typedef void (*mogl_function_glCoverStrokePathInstancedNV)(GLsizei numPaths, GLenum pathNameType, void * paths, GLuint pathBase, GLenum coverMode, GLenum transformType, GLfloat *transformValues);
mogl_function_glCoverStrokePathInstancedNV glCoverStrokePathInstancedNV;

typedef void (*mogl_function_glGetPathParameterivNV)(GLuint path, GLenum pname, GLint *value);
mogl_function_glGetPathParameterivNV glGetPathParameterivNV;

typedef void (*mogl_function_glGetPathParameterfvNV)(GLuint path, GLenum pname, GLfloat *value);
mogl_function_glGetPathParameterfvNV glGetPathParameterfvNV;

typedef void (*mogl_function_glGetPathCommandsNV)(GLuint path, GLubyte *commands);
mogl_function_glGetPathCommandsNV glGetPathCommandsNV;

typedef void (*mogl_function_glGetPathCoordsNV)(GLuint path, GLfloat *coords);
mogl_function_glGetPathCoordsNV glGetPathCoordsNV;

typedef void (*mogl_function_glGetPathDashArrayNV)(GLuint path, GLfloat *dashArray);
mogl_function_glGetPathDashArrayNV glGetPathDashArrayNV;

typedef void (*mogl_function_glGetPathMetricsNV)(GLbitfield metricQueryMask, GLsizei numPaths, GLenum pathNameType, void * paths, GLuint pathBase, GLsizei stride, GLfloat *metrics);
mogl_function_glGetPathMetricsNV glGetPathMetricsNV;

typedef void (*mogl_function_glGetPathMetricRangeNV)(GLbitfield metricQueryMask, GLuint firstPathName, GLsizei numPaths, GLsizei stride, GLfloat *metrics);
mogl_function_glGetPathMetricRangeNV glGetPathMetricRangeNV;

typedef void (*mogl_function_glGetPathSpacingNV)(GLenum pathListMode, GLsizei numPaths, GLenum pathNameType, void * paths, GLuint pathBase, GLfloat advanceScale, GLfloat kerningScale, GLenum transformType, GLfloat *returnedSpacing);
mogl_function_glGetPathSpacingNV glGetPathSpacingNV;

typedef GLboolean  (*mogl_function_glIsPointInFillPathNV)(GLuint path, GLuint mask, GLfloat x, GLfloat y);
mogl_function_glIsPointInFillPathNV glIsPointInFillPathNV;

typedef GLboolean  (*mogl_function_glIsPointInStrokePathNV)(GLuint path, GLfloat x, GLfloat y);
mogl_function_glIsPointInStrokePathNV glIsPointInStrokePathNV;

typedef GLfloat  (*mogl_function_glGetPathLengthNV)(GLuint path, GLsizei startSegment, GLsizei numSegments);
mogl_function_glGetPathLengthNV glGetPathLengthNV;

typedef GLboolean  (*mogl_function_glPointAlongPathNV)(GLuint path, GLsizei startSegment, GLsizei numSegments, GLfloat distance, GLfloat *x, GLfloat *y, GLfloat *tangentX, GLfloat *tangentY);
mogl_function_glPointAlongPathNV glPointAlongPathNV;

typedef void (*mogl_function_glMatrixLoad3x2fNV)(GLenum matrixMode, GLfloat *m);
mogl_function_glMatrixLoad3x2fNV glMatrixLoad3x2fNV;

typedef void (*mogl_function_glMatrixLoad3x3fNV)(GLenum matrixMode, GLfloat *m);
mogl_function_glMatrixLoad3x3fNV glMatrixLoad3x3fNV;

typedef void (*mogl_function_glMatrixLoadTranspose3x3fNV)(GLenum matrixMode, GLfloat *m);
mogl_function_glMatrixLoadTranspose3x3fNV glMatrixLoadTranspose3x3fNV;

typedef void (*mogl_function_glMatrixMult3x2fNV)(GLenum matrixMode, GLfloat *m);
mogl_function_glMatrixMult3x2fNV glMatrixMult3x2fNV;

typedef void (*mogl_function_glMatrixMult3x3fNV)(GLenum matrixMode, GLfloat *m);
mogl_function_glMatrixMult3x3fNV glMatrixMult3x3fNV;

typedef void (*mogl_function_glMatrixMultTranspose3x3fNV)(GLenum matrixMode, GLfloat *m);
mogl_function_glMatrixMultTranspose3x3fNV glMatrixMultTranspose3x3fNV;

typedef void (*mogl_function_glStencilThenCoverFillPathNV)(GLuint path, GLenum fillMode, GLuint mask, GLenum coverMode);
mogl_function_glStencilThenCoverFillPathNV glStencilThenCoverFillPathNV;

typedef void (*mogl_function_glStencilThenCoverStrokePathNV)(GLuint path, GLint reference, GLuint mask, GLenum coverMode);
mogl_function_glStencilThenCoverStrokePathNV glStencilThenCoverStrokePathNV;

typedef void (*mogl_function_glStencilThenCoverFillPathInstancedNV)(GLsizei numPaths, GLenum pathNameType, void * paths, GLuint pathBase, GLenum fillMode, GLuint mask, GLenum coverMode, GLenum transformType, GLfloat *transformValues);
mogl_function_glStencilThenCoverFillPathInstancedNV glStencilThenCoverFillPathInstancedNV;

typedef void (*mogl_function_glStencilThenCoverStrokePathInstancedNV)(GLsizei numPaths, GLenum pathNameType, void * paths, GLuint pathBase, GLint reference, GLuint mask, GLenum coverMode, GLenum transformType, GLfloat *transformValues);
mogl_function_glStencilThenCoverStrokePathInstancedNV glStencilThenCoverStrokePathInstancedNV;

typedef GLenum  (*mogl_function_glPathGlyphIndexRangeNV)(GLenum fontTarget, void * fontName, GLbitfield fontStyle, GLuint pathParameterTemplate, GLfloat emScale, GLuint *baseAndCount);
mogl_function_glPathGlyphIndexRangeNV glPathGlyphIndexRangeNV;

typedef GLenum  (*mogl_function_glPathGlyphIndexArrayNV)(GLuint firstPathName, GLenum fontTarget, void * fontName, GLbitfield fontStyle, GLuint firstGlyphIndex, GLsizei numGlyphs, GLuint pathParameterTemplate, GLfloat emScale);
mogl_function_glPathGlyphIndexArrayNV glPathGlyphIndexArrayNV;

typedef GLenum  (*mogl_function_glPathMemoryGlyphIndexArrayNV)(GLuint firstPathName, GLenum fontTarget, GLsizeiptr fontSize, void * fontData, GLsizei faceIndex, GLuint firstGlyphIndex, GLsizei numGlyphs, GLuint pathParameterTemplate, GLfloat emScale);
mogl_function_glPathMemoryGlyphIndexArrayNV glPathMemoryGlyphIndexArrayNV;

typedef void (*mogl_function_glProgramPathFragmentInputGenNV)(GLuint program, GLint location, GLenum genMode, GLint components, GLfloat *coeffs);
mogl_function_glProgramPathFragmentInputGenNV glProgramPathFragmentInputGenNV;

typedef void (*mogl_function_glGetProgramResourcefvNV)(GLuint program, GLenum programInterface, GLuint index, GLsizei propCount, GLenum *props, GLsizei count, GLsizei *length, GLfloat *params);
mogl_function_glGetProgramResourcefvNV glGetProgramResourcefvNV;

typedef void (*mogl_function_glPathColorGenNV)(GLenum color, GLenum genMode, GLenum colorFormat, GLfloat *coeffs);
mogl_function_glPathColorGenNV glPathColorGenNV;

typedef void (*mogl_function_glPathTexGenNV)(GLenum texCoordSet, GLenum genMode, GLint components, GLfloat *coeffs);
mogl_function_glPathTexGenNV glPathTexGenNV;

typedef void (*mogl_function_glPathFogGenNV)(GLenum genMode);
mogl_function_glPathFogGenNV glPathFogGenNV;

typedef void (*mogl_function_glGetPathColorGenivNV)(GLenum color, GLenum pname, GLint *value);
mogl_function_glGetPathColorGenivNV glGetPathColorGenivNV;

typedef void (*mogl_function_glGetPathColorGenfvNV)(GLenum color, GLenum pname, GLfloat *value);
mogl_function_glGetPathColorGenfvNV glGetPathColorGenfvNV;

typedef void (*mogl_function_glGetPathTexGenivNV)(GLenum texCoordSet, GLenum pname, GLint *value);
mogl_function_glGetPathTexGenivNV glGetPathTexGenivNV;

typedef void (*mogl_function_glGetPathTexGenfvNV)(GLenum texCoordSet, GLenum pname, GLfloat *value);
mogl_function_glGetPathTexGenfvNV glGetPathTexGenfvNV;
#define GL_NV_path_rendering_shared_edge 1
#define GL_SHARED_EDGE_NV 0xC0
#define GL_NV_pixel_data_range 1
#define GL_WRITE_PIXEL_DATA_RANGE_NV 0x8878
#define GL_READ_PIXEL_DATA_RANGE_NV 0x8879
#define GL_WRITE_PIXEL_DATA_RANGE_LENGTH_NV 0x887A
#define GL_READ_PIXEL_DATA_RANGE_LENGTH_NV 0x887B
#define GL_WRITE_PIXEL_DATA_RANGE_POINTER_NV 0x887C
#define GL_READ_PIXEL_DATA_RANGE_POINTER_NV 0x887D

typedef void (*mogl_function_glPixelDataRangeNV)(GLenum target, GLsizei length, void * pointer);
mogl_function_glPixelDataRangeNV glPixelDataRangeNV;

typedef void (*mogl_function_glFlushPixelDataRangeNV)(GLenum target);
mogl_function_glFlushPixelDataRangeNV glFlushPixelDataRangeNV;
#define GL_NV_point_sprite 1
#define GL_POINT_SPRITE_NV 0x8861
#define GL_COORD_REPLACE_NV 0x8862
#define GL_POINT_SPRITE_R_MODE_NV 0x8863

typedef void (*mogl_function_glPointParameteriNV)(GLenum pname, GLint param);
mogl_function_glPointParameteriNV glPointParameteriNV;

typedef void (*mogl_function_glPointParameterivNV)(GLenum pname, GLint *params);
mogl_function_glPointParameterivNV glPointParameterivNV;
#define GL_NV_present_video 1
#define GL_FRAME_NV 0x8E26
#define GL_FIELDS_NV 0x8E27
#define GL_CURRENT_TIME_NV 0x8E28
#define GL_NUM_FILL_STREAMS_NV 0x8E29
#define GL_PRESENT_TIME_NV 0x8E2A
#define GL_PRESENT_DURATION_NV 0x8E2B

typedef void (*mogl_function_glPresentFrameKeyedNV)(GLuint video_slot, GLuint64EXT minPresentTime, GLuint beginPresentTimeId, GLuint presentDurationId, GLenum type, GLenum target0, GLuint fill0, GLuint key0, GLenum target1, GLuint fill1, GLuint key1);
mogl_function_glPresentFrameKeyedNV glPresentFrameKeyedNV;

typedef void (*mogl_function_glPresentFrameDualFillNV)(GLuint video_slot, GLuint64EXT minPresentTime, GLuint beginPresentTimeId, GLuint presentDurationId, GLenum type, GLenum target0, GLuint fill0, GLenum target1, GLuint fill1, GLenum target2, GLuint fill2, GLenum target3, GLuint fill3);
mogl_function_glPresentFrameDualFillNV glPresentFrameDualFillNV;

typedef void (*mogl_function_glGetVideoivNV)(GLuint video_slot, GLenum pname, GLint *params);
mogl_function_glGetVideoivNV glGetVideoivNV;

typedef void (*mogl_function_glGetVideouivNV)(GLuint video_slot, GLenum pname, GLuint *params);
mogl_function_glGetVideouivNV glGetVideouivNV;

typedef void (*mogl_function_glGetVideoi64vNV)(GLuint video_slot, GLenum pname, GLint64EXT *params);
mogl_function_glGetVideoi64vNV glGetVideoi64vNV;

typedef void (*mogl_function_glGetVideoui64vNV)(GLuint video_slot, GLenum pname, GLuint64EXT *params);
mogl_function_glGetVideoui64vNV glGetVideoui64vNV;
#define GL_NV_primitive_restart 1
#define GL_PRIMITIVE_RESTART_NV 0x8558
#define GL_PRIMITIVE_RESTART_INDEX_NV 0x8559

typedef void (*mogl_function_glPrimitiveRestartNV)();
mogl_function_glPrimitiveRestartNV glPrimitiveRestartNV;

typedef void (*mogl_function_glPrimitiveRestartIndexNV)(GLuint index);
mogl_function_glPrimitiveRestartIndexNV glPrimitiveRestartIndexNV;
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

typedef GLint  (*mogl_function_glQueryResourceNV)(GLenum queryType, GLint tagId, GLuint count, GLint *buffer);
mogl_function_glQueryResourceNV glQueryResourceNV;
#define GL_NV_query_resource_tag 1

typedef void (*mogl_function_glGenQueryResourceTagNV)(GLsizei n, GLint *tagIds);
mogl_function_glGenQueryResourceTagNV glGenQueryResourceTagNV;

typedef void (*mogl_function_glDeleteQueryResourceTagNV)(GLsizei n, GLint *tagIds);
mogl_function_glDeleteQueryResourceTagNV glDeleteQueryResourceTagNV;

typedef void (*mogl_function_glQueryResourceTagNV)(GLint tagId, GLchar *tagString);
mogl_function_glQueryResourceTagNV glQueryResourceTagNV;
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

typedef void (*mogl_function_glCombinerParameterfvNV)(GLenum pname, GLfloat *params);
mogl_function_glCombinerParameterfvNV glCombinerParameterfvNV;

typedef void (*mogl_function_glCombinerParameterfNV)(GLenum pname, GLfloat param);
mogl_function_glCombinerParameterfNV glCombinerParameterfNV;

typedef void (*mogl_function_glCombinerParameterivNV)(GLenum pname, GLint *params);
mogl_function_glCombinerParameterivNV glCombinerParameterivNV;

typedef void (*mogl_function_glCombinerParameteriNV)(GLenum pname, GLint param);
mogl_function_glCombinerParameteriNV glCombinerParameteriNV;

typedef void (*mogl_function_glCombinerInputNV)(GLenum stage, GLenum portion, GLenum variable, GLenum input, GLenum mapping, GLenum componentUsage);
mogl_function_glCombinerInputNV glCombinerInputNV;

typedef void (*mogl_function_glCombinerOutputNV)(GLenum stage, GLenum portion, GLenum abOutput, GLenum cdOutput, GLenum sumOutput, GLenum scale, GLenum bias, GLboolean abDotProduct, GLboolean cdDotProduct, GLboolean muxSum);
mogl_function_glCombinerOutputNV glCombinerOutputNV;

typedef void (*mogl_function_glFinalCombinerInputNV)(GLenum variable, GLenum input, GLenum mapping, GLenum componentUsage);
mogl_function_glFinalCombinerInputNV glFinalCombinerInputNV;

typedef void (*mogl_function_glGetCombinerInputParameterfvNV)(GLenum stage, GLenum portion, GLenum variable, GLenum pname, GLfloat *params);
mogl_function_glGetCombinerInputParameterfvNV glGetCombinerInputParameterfvNV;

typedef void (*mogl_function_glGetCombinerInputParameterivNV)(GLenum stage, GLenum portion, GLenum variable, GLenum pname, GLint *params);
mogl_function_glGetCombinerInputParameterivNV glGetCombinerInputParameterivNV;

typedef void (*mogl_function_glGetCombinerOutputParameterfvNV)(GLenum stage, GLenum portion, GLenum pname, GLfloat *params);
mogl_function_glGetCombinerOutputParameterfvNV glGetCombinerOutputParameterfvNV;

typedef void (*mogl_function_glGetCombinerOutputParameterivNV)(GLenum stage, GLenum portion, GLenum pname, GLint *params);
mogl_function_glGetCombinerOutputParameterivNV glGetCombinerOutputParameterivNV;

typedef void (*mogl_function_glGetFinalCombinerInputParameterfvNV)(GLenum variable, GLenum pname, GLfloat *params);
mogl_function_glGetFinalCombinerInputParameterfvNV glGetFinalCombinerInputParameterfvNV;

typedef void (*mogl_function_glGetFinalCombinerInputParameterivNV)(GLenum variable, GLenum pname, GLint *params);
mogl_function_glGetFinalCombinerInputParameterivNV glGetFinalCombinerInputParameterivNV;
#define GL_NV_register_combiners2 1
#define GL_PER_STAGE_CONSTANTS_NV 0x8535

typedef void (*mogl_function_glCombinerStageParameterfvNV)(GLenum stage, GLenum pname, GLfloat *params);
mogl_function_glCombinerStageParameterfvNV glCombinerStageParameterfvNV;

typedef void (*mogl_function_glGetCombinerStageParameterfvNV)(GLenum stage, GLenum pname, GLfloat *params);
mogl_function_glGetCombinerStageParameterfvNV glGetCombinerStageParameterfvNV;
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

typedef void (*mogl_function_glFramebufferSampleLocationsfvNV)(GLenum target, GLuint start, GLsizei count, GLfloat *v);
mogl_function_glFramebufferSampleLocationsfvNV glFramebufferSampleLocationsfvNV;

typedef void (*mogl_function_glNamedFramebufferSampleLocationsfvNV)(GLuint framebuffer, GLuint start, GLsizei count, GLfloat *v);
mogl_function_glNamedFramebufferSampleLocationsfvNV glNamedFramebufferSampleLocationsfvNV;

typedef void (*mogl_function_glResolveDepthValuesNV)();
mogl_function_glResolveDepthValuesNV glResolveDepthValuesNV;
#define GL_NV_sample_mask_override_coverage 1
#define GL_NV_scissor_exclusive 1
#define GL_SCISSOR_TEST_EXCLUSIVE_NV 0x9555
#define GL_SCISSOR_BOX_EXCLUSIVE_NV 0x9556

typedef void (*mogl_function_glScissorExclusiveNV)(GLint x, GLint y, GLsizei width, GLsizei height);
mogl_function_glScissorExclusiveNV glScissorExclusiveNV;

typedef void (*mogl_function_glScissorExclusiveArrayvNV)(GLuint first, GLsizei count, GLint *v);
mogl_function_glScissorExclusiveArrayvNV glScissorExclusiveArrayvNV;
#define GL_NV_shader_atomic_counters 1
#define GL_NV_shader_atomic_float 1
#define GL_NV_shader_atomic_float64 1
#define GL_NV_shader_atomic_fp16_vector 1
#define GL_NV_shader_atomic_int64 1
#define GL_NV_shader_buffer_load 1
#define GL_BUFFER_GPU_ADDRESS_NV 0x8F1D
#define GL_GPU_ADDRESS_NV 0x8F34
#define GL_MAX_SHADER_BUFFER_ADDRESS_NV 0x8F35

typedef void (*mogl_function_glMakeBufferResidentNV)(GLenum target, GLenum access);
mogl_function_glMakeBufferResidentNV glMakeBufferResidentNV;

typedef void (*mogl_function_glMakeBufferNonResidentNV)(GLenum target);
mogl_function_glMakeBufferNonResidentNV glMakeBufferNonResidentNV;

typedef GLboolean  (*mogl_function_glIsBufferResidentNV)(GLenum target);
mogl_function_glIsBufferResidentNV glIsBufferResidentNV;

typedef void (*mogl_function_glMakeNamedBufferResidentNV)(GLuint buffer, GLenum access);
mogl_function_glMakeNamedBufferResidentNV glMakeNamedBufferResidentNV;

typedef void (*mogl_function_glMakeNamedBufferNonResidentNV)(GLuint buffer);
mogl_function_glMakeNamedBufferNonResidentNV glMakeNamedBufferNonResidentNV;

typedef GLboolean  (*mogl_function_glIsNamedBufferResidentNV)(GLuint buffer);
mogl_function_glIsNamedBufferResidentNV glIsNamedBufferResidentNV;

typedef void (*mogl_function_glGetBufferParameterui64vNV)(GLenum target, GLenum pname, GLuint64EXT *params);
mogl_function_glGetBufferParameterui64vNV glGetBufferParameterui64vNV;

typedef void (*mogl_function_glGetNamedBufferParameterui64vNV)(GLuint buffer, GLenum pname, GLuint64EXT *params);
mogl_function_glGetNamedBufferParameterui64vNV glGetNamedBufferParameterui64vNV;

typedef void (*mogl_function_glGetIntegerui64vNV)(GLenum value, GLuint64EXT *result);
mogl_function_glGetIntegerui64vNV glGetIntegerui64vNV;

typedef void (*mogl_function_glUniformui64NV)(GLint location, GLuint64EXT value);
mogl_function_glUniformui64NV glUniformui64NV;

typedef void (*mogl_function_glUniformui64vNV)(GLint location, GLsizei count, GLuint64EXT *value);
mogl_function_glUniformui64vNV glUniformui64vNV;

typedef void (*mogl_function_glProgramUniformui64NV)(GLuint program, GLint location, GLuint64EXT value);
mogl_function_glProgramUniformui64NV glProgramUniformui64NV;

typedef void (*mogl_function_glProgramUniformui64vNV)(GLuint program, GLint location, GLsizei count, GLuint64EXT *value);
mogl_function_glProgramUniformui64vNV glProgramUniformui64vNV;
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

typedef void (*mogl_function_glBindShadingRateImageNV)(GLuint texture);
mogl_function_glBindShadingRateImageNV glBindShadingRateImageNV;

typedef void (*mogl_function_glGetShadingRateImagePaletteNV)(GLuint viewport, GLuint entry, GLenum *rate);
mogl_function_glGetShadingRateImagePaletteNV glGetShadingRateImagePaletteNV;

typedef void (*mogl_function_glGetShadingRateSampleLocationivNV)(GLenum rate, GLuint samples, GLuint index, GLint *location);
mogl_function_glGetShadingRateSampleLocationivNV glGetShadingRateSampleLocationivNV;

typedef void (*mogl_function_glShadingRateImageBarrierNV)(GLboolean synchronize);
mogl_function_glShadingRateImageBarrierNV glShadingRateImageBarrierNV;

typedef void (*mogl_function_glShadingRateImagePaletteNV)(GLuint viewport, GLuint first, GLsizei count, GLenum *rates);
mogl_function_glShadingRateImagePaletteNV glShadingRateImagePaletteNV;

typedef void (*mogl_function_glShadingRateSampleOrderNV)(GLenum order);
mogl_function_glShadingRateSampleOrderNV glShadingRateSampleOrderNV;

typedef void (*mogl_function_glShadingRateSampleOrderCustomNV)(GLenum rate, GLuint samples, GLint *locations);
mogl_function_glShadingRateSampleOrderCustomNV glShadingRateSampleOrderCustomNV;
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

typedef void (*mogl_function_glTextureBarrierNV)();
mogl_function_glTextureBarrierNV glTextureBarrierNV;
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

typedef void (*mogl_function_glTexImage2DMultisampleCoverageNV)(GLenum target, GLsizei coverageSamples, GLsizei colorSamples, GLint internalFormat, GLsizei width, GLsizei height, GLboolean fixedSampleLocations);
mogl_function_glTexImage2DMultisampleCoverageNV glTexImage2DMultisampleCoverageNV;

typedef void (*mogl_function_glTexImage3DMultisampleCoverageNV)(GLenum target, GLsizei coverageSamples, GLsizei colorSamples, GLint internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedSampleLocations);
mogl_function_glTexImage3DMultisampleCoverageNV glTexImage3DMultisampleCoverageNV;

typedef void (*mogl_function_glTextureImage2DMultisampleNV)(GLuint texture, GLenum target, GLsizei samples, GLint internalFormat, GLsizei width, GLsizei height, GLboolean fixedSampleLocations);
mogl_function_glTextureImage2DMultisampleNV glTextureImage2DMultisampleNV;

typedef void (*mogl_function_glTextureImage3DMultisampleNV)(GLuint texture, GLenum target, GLsizei samples, GLint internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedSampleLocations);
mogl_function_glTextureImage3DMultisampleNV glTextureImage3DMultisampleNV;

typedef void (*mogl_function_glTextureImage2DMultisampleCoverageNV)(GLuint texture, GLenum target, GLsizei coverageSamples, GLsizei colorSamples, GLint internalFormat, GLsizei width, GLsizei height, GLboolean fixedSampleLocations);
mogl_function_glTextureImage2DMultisampleCoverageNV glTextureImage2DMultisampleCoverageNV;

typedef void (*mogl_function_glTextureImage3DMultisampleCoverageNV)(GLuint texture, GLenum target, GLsizei coverageSamples, GLsizei colorSamples, GLint internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedSampleLocations);
mogl_function_glTextureImage3DMultisampleCoverageNV glTextureImage3DMultisampleCoverageNV;
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

typedef void (*mogl_function_glCreateSemaphoresNV)(GLsizei n, GLuint *semaphores);
mogl_function_glCreateSemaphoresNV glCreateSemaphoresNV;

typedef void (*mogl_function_glSemaphoreParameterivNV)(GLuint semaphore, GLenum pname, GLint *params);
mogl_function_glSemaphoreParameterivNV glSemaphoreParameterivNV;

typedef void (*mogl_function_glGetSemaphoreParameterivNV)(GLuint semaphore, GLenum pname, GLint *params);
mogl_function_glGetSemaphoreParameterivNV glGetSemaphoreParameterivNV;
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

typedef void (*mogl_function_glBeginTransformFeedbackNV)(GLenum primitiveMode);
mogl_function_glBeginTransformFeedbackNV glBeginTransformFeedbackNV;

typedef void (*mogl_function_glEndTransformFeedbackNV)();
mogl_function_glEndTransformFeedbackNV glEndTransformFeedbackNV;

typedef void (*mogl_function_glTransformFeedbackAttribsNV)(GLsizei count, GLint *attribs, GLenum bufferMode);
mogl_function_glTransformFeedbackAttribsNV glTransformFeedbackAttribsNV;

typedef void (*mogl_function_glBindBufferRangeNV)(GLenum target, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size);
mogl_function_glBindBufferRangeNV glBindBufferRangeNV;

typedef void (*mogl_function_glBindBufferOffsetNV)(GLenum target, GLuint index, GLuint buffer, GLintptr offset);
mogl_function_glBindBufferOffsetNV glBindBufferOffsetNV;

typedef void (*mogl_function_glBindBufferBaseNV)(GLenum target, GLuint index, GLuint buffer);
mogl_function_glBindBufferBaseNV glBindBufferBaseNV;

typedef void (*mogl_function_glTransformFeedbackVaryingsNV)(GLuint program, GLsizei count, GLint *locations, GLenum bufferMode);
mogl_function_glTransformFeedbackVaryingsNV glTransformFeedbackVaryingsNV;

typedef void (*mogl_function_glActiveVaryingNV)(GLuint program, GLchar *name);
mogl_function_glActiveVaryingNV glActiveVaryingNV;

typedef GLint  (*mogl_function_glGetVaryingLocationNV)(GLuint program, GLchar *name);
mogl_function_glGetVaryingLocationNV glGetVaryingLocationNV;

typedef void (*mogl_function_glGetActiveVaryingNV)(GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLsizei *size, GLenum *type, GLchar *name);
mogl_function_glGetActiveVaryingNV glGetActiveVaryingNV;

typedef void (*mogl_function_glGetTransformFeedbackVaryingNV)(GLuint program, GLuint index, GLint *location);
mogl_function_glGetTransformFeedbackVaryingNV glGetTransformFeedbackVaryingNV;

typedef void (*mogl_function_glTransformFeedbackStreamAttribsNV)(GLsizei count, GLint *attribs, GLsizei nbuffers, GLint *bufstreams, GLenum bufferMode);
mogl_function_glTransformFeedbackStreamAttribsNV glTransformFeedbackStreamAttribsNV;
#define GL_NV_transform_feedback2 1
#define GL_TRANSFORM_FEEDBACK_NV 0x8E22
#define GL_TRANSFORM_FEEDBACK_BUFFER_PAUSED_NV 0x8E23
#define GL_TRANSFORM_FEEDBACK_BUFFER_ACTIVE_NV 0x8E24
#define GL_TRANSFORM_FEEDBACK_BINDING_NV 0x8E25

typedef void (*mogl_function_glBindTransformFeedbackNV)(GLenum target, GLuint id);
mogl_function_glBindTransformFeedbackNV glBindTransformFeedbackNV;

typedef void (*mogl_function_glDeleteTransformFeedbacksNV)(GLsizei n, GLuint *ids);
mogl_function_glDeleteTransformFeedbacksNV glDeleteTransformFeedbacksNV;

typedef void (*mogl_function_glGenTransformFeedbacksNV)(GLsizei n, GLuint *ids);
mogl_function_glGenTransformFeedbacksNV glGenTransformFeedbacksNV;

typedef GLboolean  (*mogl_function_glIsTransformFeedbackNV)(GLuint id);
mogl_function_glIsTransformFeedbackNV glIsTransformFeedbackNV;

typedef void (*mogl_function_glPauseTransformFeedbackNV)();
mogl_function_glPauseTransformFeedbackNV glPauseTransformFeedbackNV;

typedef void (*mogl_function_glResumeTransformFeedbackNV)();
mogl_function_glResumeTransformFeedbackNV glResumeTransformFeedbackNV;

typedef void (*mogl_function_glDrawTransformFeedbackNV)(GLenum mode, GLuint id);
mogl_function_glDrawTransformFeedbackNV glDrawTransformFeedbackNV;
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

typedef void (*mogl_function_glVDPAUInitNV)(void * vdpDevice, void * getProcAddress);
mogl_function_glVDPAUInitNV glVDPAUInitNV;

typedef void (*mogl_function_glVDPAUFiniNV)();
mogl_function_glVDPAUFiniNV glVDPAUFiniNV;

typedef GLvdpauSurfaceNV  (*mogl_function_glVDPAURegisterVideoSurfaceNV)(void * vdpSurface, GLenum target, GLsizei numTextureNames, GLuint *textureNames);
mogl_function_glVDPAURegisterVideoSurfaceNV glVDPAURegisterVideoSurfaceNV;

typedef GLvdpauSurfaceNV  (*mogl_function_glVDPAURegisterOutputSurfaceNV)(void * vdpSurface, GLenum target, GLsizei numTextureNames, GLuint *textureNames);
mogl_function_glVDPAURegisterOutputSurfaceNV glVDPAURegisterOutputSurfaceNV;

typedef GLboolean  (*mogl_function_glVDPAUIsSurfaceNV)(GLvdpauSurfaceNV surface);
mogl_function_glVDPAUIsSurfaceNV glVDPAUIsSurfaceNV;

typedef void (*mogl_function_glVDPAUUnregisterSurfaceNV)(GLvdpauSurfaceNV surface);
mogl_function_glVDPAUUnregisterSurfaceNV glVDPAUUnregisterSurfaceNV;

typedef void (*mogl_function_glVDPAUGetSurfaceivNV)(GLvdpauSurfaceNV surface, GLenum pname, GLsizei count, GLsizei *length, GLint *values);
mogl_function_glVDPAUGetSurfaceivNV glVDPAUGetSurfaceivNV;

typedef void (*mogl_function_glVDPAUSurfaceAccessNV)(GLvdpauSurfaceNV surface, GLenum access);
mogl_function_glVDPAUSurfaceAccessNV glVDPAUSurfaceAccessNV;

typedef void (*mogl_function_glVDPAUMapSurfacesNV)(GLsizei numSurfaces, GLvdpauSurfaceNV *surfaces);
mogl_function_glVDPAUMapSurfacesNV glVDPAUMapSurfacesNV;

typedef void (*mogl_function_glVDPAUUnmapSurfacesNV)(GLsizei numSurface, GLvdpauSurfaceNV *surfaces);
mogl_function_glVDPAUUnmapSurfacesNV glVDPAUUnmapSurfacesNV;
#define GL_NV_vdpau_interop2 1

typedef GLvdpauSurfaceNV  (*mogl_function_glVDPAURegisterVideoSurfaceWithPictureStructureNV)(void * vdpSurface, GLenum target, GLsizei numTextureNames, GLuint *textureNames, GLboolean isFrameStructure);
mogl_function_glVDPAURegisterVideoSurfaceWithPictureStructureNV glVDPAURegisterVideoSurfaceWithPictureStructureNV;
#define GL_NV_vertex_array_range 1
#define GL_VERTEX_ARRAY_RANGE_NV 0x851D
#define GL_VERTEX_ARRAY_RANGE_LENGTH_NV 0x851E
#define GL_VERTEX_ARRAY_RANGE_VALID_NV 0x851F
#define GL_MAX_VERTEX_ARRAY_RANGE_ELEMENT_NV 0x8520
#define GL_VERTEX_ARRAY_RANGE_POINTER_NV 0x8521

typedef void (*mogl_function_glFlushVertexArrayRangeNV)();
mogl_function_glFlushVertexArrayRangeNV glFlushVertexArrayRangeNV;

typedef void (*mogl_function_glVertexArrayRangeNV)(GLsizei length, void * pointer);
mogl_function_glVertexArrayRangeNV glVertexArrayRangeNV;
#define GL_NV_vertex_array_range2 1
#define GL_VERTEX_ARRAY_RANGE_WITHOUT_FLUSH_NV 0x8533
#define GL_NV_vertex_attrib_integer_64bit 1

typedef void (*mogl_function_glVertexAttribL1i64NV)(GLuint index, GLint64EXT x);
mogl_function_glVertexAttribL1i64NV glVertexAttribL1i64NV;

typedef void (*mogl_function_glVertexAttribL2i64NV)(GLuint index, GLint64EXT x, GLint64EXT y);
mogl_function_glVertexAttribL2i64NV glVertexAttribL2i64NV;

typedef void (*mogl_function_glVertexAttribL3i64NV)(GLuint index, GLint64EXT x, GLint64EXT y, GLint64EXT z);
mogl_function_glVertexAttribL3i64NV glVertexAttribL3i64NV;

typedef void (*mogl_function_glVertexAttribL4i64NV)(GLuint index, GLint64EXT x, GLint64EXT y, GLint64EXT z, GLint64EXT w);
mogl_function_glVertexAttribL4i64NV glVertexAttribL4i64NV;

typedef void (*mogl_function_glVertexAttribL1i64vNV)(GLuint index, GLint64EXT *v);
mogl_function_glVertexAttribL1i64vNV glVertexAttribL1i64vNV;

typedef void (*mogl_function_glVertexAttribL2i64vNV)(GLuint index, GLint64EXT *v);
mogl_function_glVertexAttribL2i64vNV glVertexAttribL2i64vNV;

typedef void (*mogl_function_glVertexAttribL3i64vNV)(GLuint index, GLint64EXT *v);
mogl_function_glVertexAttribL3i64vNV glVertexAttribL3i64vNV;

typedef void (*mogl_function_glVertexAttribL4i64vNV)(GLuint index, GLint64EXT *v);
mogl_function_glVertexAttribL4i64vNV glVertexAttribL4i64vNV;

typedef void (*mogl_function_glVertexAttribL1ui64NV)(GLuint index, GLuint64EXT x);
mogl_function_glVertexAttribL1ui64NV glVertexAttribL1ui64NV;

typedef void (*mogl_function_glVertexAttribL2ui64NV)(GLuint index, GLuint64EXT x, GLuint64EXT y);
mogl_function_glVertexAttribL2ui64NV glVertexAttribL2ui64NV;

typedef void (*mogl_function_glVertexAttribL3ui64NV)(GLuint index, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z);
mogl_function_glVertexAttribL3ui64NV glVertexAttribL3ui64NV;

typedef void (*mogl_function_glVertexAttribL4ui64NV)(GLuint index, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z, GLuint64EXT w);
mogl_function_glVertexAttribL4ui64NV glVertexAttribL4ui64NV;

typedef void (*mogl_function_glVertexAttribL1ui64vNV)(GLuint index, GLuint64EXT *v);
mogl_function_glVertexAttribL1ui64vNV glVertexAttribL1ui64vNV;

typedef void (*mogl_function_glVertexAttribL2ui64vNV)(GLuint index, GLuint64EXT *v);
mogl_function_glVertexAttribL2ui64vNV glVertexAttribL2ui64vNV;

typedef void (*mogl_function_glVertexAttribL3ui64vNV)(GLuint index, GLuint64EXT *v);
mogl_function_glVertexAttribL3ui64vNV glVertexAttribL3ui64vNV;

typedef void (*mogl_function_glVertexAttribL4ui64vNV)(GLuint index, GLuint64EXT *v);
mogl_function_glVertexAttribL4ui64vNV glVertexAttribL4ui64vNV;

typedef void (*mogl_function_glGetVertexAttribLi64vNV)(GLuint index, GLenum pname, GLint64EXT *params);
mogl_function_glGetVertexAttribLi64vNV glGetVertexAttribLi64vNV;

typedef void (*mogl_function_glGetVertexAttribLui64vNV)(GLuint index, GLenum pname, GLuint64EXT *params);
mogl_function_glGetVertexAttribLui64vNV glGetVertexAttribLui64vNV;

typedef void (*mogl_function_glVertexAttribLFormatNV)(GLuint index, GLint size, GLenum type, GLsizei stride);
mogl_function_glVertexAttribLFormatNV glVertexAttribLFormatNV;
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

typedef void (*mogl_function_glBufferAddressRangeNV)(GLenum pname, GLuint index, GLuint64EXT address, GLsizeiptr length);
mogl_function_glBufferAddressRangeNV glBufferAddressRangeNV;

typedef void (*mogl_function_glVertexFormatNV)(GLint size, GLenum type, GLsizei stride);
mogl_function_glVertexFormatNV glVertexFormatNV;

typedef void (*mogl_function_glNormalFormatNV)(GLenum type, GLsizei stride);
mogl_function_glNormalFormatNV glNormalFormatNV;

typedef void (*mogl_function_glColorFormatNV)(GLint size, GLenum type, GLsizei stride);
mogl_function_glColorFormatNV glColorFormatNV;

typedef void (*mogl_function_glIndexFormatNV)(GLenum type, GLsizei stride);
mogl_function_glIndexFormatNV glIndexFormatNV;

typedef void (*mogl_function_glTexCoordFormatNV)(GLint size, GLenum type, GLsizei stride);
mogl_function_glTexCoordFormatNV glTexCoordFormatNV;

typedef void (*mogl_function_glEdgeFlagFormatNV)(GLsizei stride);
mogl_function_glEdgeFlagFormatNV glEdgeFlagFormatNV;

typedef void (*mogl_function_glSecondaryColorFormatNV)(GLint size, GLenum type, GLsizei stride);
mogl_function_glSecondaryColorFormatNV glSecondaryColorFormatNV;

typedef void (*mogl_function_glFogCoordFormatNV)(GLenum type, GLsizei stride);
mogl_function_glFogCoordFormatNV glFogCoordFormatNV;

typedef void (*mogl_function_glVertexAttribFormatNV)(GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride);
mogl_function_glVertexAttribFormatNV glVertexAttribFormatNV;

typedef void (*mogl_function_glVertexAttribIFormatNV)(GLuint index, GLint size, GLenum type, GLsizei stride);
mogl_function_glVertexAttribIFormatNV glVertexAttribIFormatNV;

typedef void (*mogl_function_glGetIntegerui64i_vNV)(GLenum value, GLuint index, GLuint64EXT *result);
mogl_function_glGetIntegerui64i_vNV glGetIntegerui64i_vNV;
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

typedef GLboolean  (*mogl_function_glAreProgramsResidentNV)(GLsizei n, GLuint *programs, GLboolean *residences);
mogl_function_glAreProgramsResidentNV glAreProgramsResidentNV;

typedef void (*mogl_function_glBindProgramNV)(GLenum target, GLuint id);
mogl_function_glBindProgramNV glBindProgramNV;

typedef void (*mogl_function_glDeleteProgramsNV)(GLsizei n, GLuint *programs);
mogl_function_glDeleteProgramsNV glDeleteProgramsNV;

typedef void (*mogl_function_glExecuteProgramNV)(GLenum target, GLuint id, GLfloat *params);
mogl_function_glExecuteProgramNV glExecuteProgramNV;

typedef void (*mogl_function_glGenProgramsNV)(GLsizei n, GLuint *programs);
mogl_function_glGenProgramsNV glGenProgramsNV;

typedef void (*mogl_function_glGetProgramParameterdvNV)(GLenum target, GLuint index, GLenum pname, GLdouble *params);
mogl_function_glGetProgramParameterdvNV glGetProgramParameterdvNV;

typedef void (*mogl_function_glGetProgramParameterfvNV)(GLenum target, GLuint index, GLenum pname, GLfloat *params);
mogl_function_glGetProgramParameterfvNV glGetProgramParameterfvNV;

typedef void (*mogl_function_glGetProgramivNV)(GLuint id, GLenum pname, GLint *params);
mogl_function_glGetProgramivNV glGetProgramivNV;

typedef void (*mogl_function_glGetProgramStringNV)(GLuint id, GLenum pname, GLubyte *program);
mogl_function_glGetProgramStringNV glGetProgramStringNV;

typedef void (*mogl_function_glGetTrackMatrixivNV)(GLenum target, GLuint address, GLenum pname, GLint *params);
mogl_function_glGetTrackMatrixivNV glGetTrackMatrixivNV;

typedef void (*mogl_function_glGetVertexAttribdvNV)(GLuint index, GLenum pname, GLdouble *params);
mogl_function_glGetVertexAttribdvNV glGetVertexAttribdvNV;

typedef void (*mogl_function_glGetVertexAttribfvNV)(GLuint index, GLenum pname, GLfloat *params);
mogl_function_glGetVertexAttribfvNV glGetVertexAttribfvNV;

typedef void (*mogl_function_glGetVertexAttribivNV)(GLuint index, GLenum pname, GLint *params);
mogl_function_glGetVertexAttribivNV glGetVertexAttribivNV;

typedef void (*mogl_function_glGetVertexAttribPointervNV)(GLuint index, GLenum pname, void * *pointer);
mogl_function_glGetVertexAttribPointervNV glGetVertexAttribPointervNV;

typedef GLboolean  (*mogl_function_glIsProgramNV)(GLuint id);
mogl_function_glIsProgramNV glIsProgramNV;

typedef void (*mogl_function_glLoadProgramNV)(GLenum target, GLuint id, GLsizei len, GLubyte *program);
mogl_function_glLoadProgramNV glLoadProgramNV;

typedef void (*mogl_function_glProgramParameter4dNV)(GLenum target, GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
mogl_function_glProgramParameter4dNV glProgramParameter4dNV;

typedef void (*mogl_function_glProgramParameter4dvNV)(GLenum target, GLuint index, GLdouble *v);
mogl_function_glProgramParameter4dvNV glProgramParameter4dvNV;

typedef void (*mogl_function_glProgramParameter4fNV)(GLenum target, GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
mogl_function_glProgramParameter4fNV glProgramParameter4fNV;

typedef void (*mogl_function_glProgramParameter4fvNV)(GLenum target, GLuint index, GLfloat *v);
mogl_function_glProgramParameter4fvNV glProgramParameter4fvNV;

typedef void (*mogl_function_glProgramParameters4dvNV)(GLenum target, GLuint index, GLsizei count, GLdouble *v);
mogl_function_glProgramParameters4dvNV glProgramParameters4dvNV;

typedef void (*mogl_function_glProgramParameters4fvNV)(GLenum target, GLuint index, GLsizei count, GLfloat *v);
mogl_function_glProgramParameters4fvNV glProgramParameters4fvNV;

typedef void (*mogl_function_glRequestResidentProgramsNV)(GLsizei n, GLuint *programs);
mogl_function_glRequestResidentProgramsNV glRequestResidentProgramsNV;

typedef void (*mogl_function_glTrackMatrixNV)(GLenum target, GLuint address, GLenum matrix, GLenum transform);
mogl_function_glTrackMatrixNV glTrackMatrixNV;

typedef void (*mogl_function_glVertexAttribPointerNV)(GLuint index, GLint fsize, GLenum type, GLsizei stride, void * pointer);
mogl_function_glVertexAttribPointerNV glVertexAttribPointerNV;

typedef void (*mogl_function_glVertexAttrib1dNV)(GLuint index, GLdouble x);
mogl_function_glVertexAttrib1dNV glVertexAttrib1dNV;

typedef void (*mogl_function_glVertexAttrib1dvNV)(GLuint index, GLdouble *v);
mogl_function_glVertexAttrib1dvNV glVertexAttrib1dvNV;

typedef void (*mogl_function_glVertexAttrib1fNV)(GLuint index, GLfloat x);
mogl_function_glVertexAttrib1fNV glVertexAttrib1fNV;

typedef void (*mogl_function_glVertexAttrib1fvNV)(GLuint index, GLfloat *v);
mogl_function_glVertexAttrib1fvNV glVertexAttrib1fvNV;

typedef void (*mogl_function_glVertexAttrib1sNV)(GLuint index, GLshort x);
mogl_function_glVertexAttrib1sNV glVertexAttrib1sNV;

typedef void (*mogl_function_glVertexAttrib1svNV)(GLuint index, GLshort *v);
mogl_function_glVertexAttrib1svNV glVertexAttrib1svNV;

typedef void (*mogl_function_glVertexAttrib2dNV)(GLuint index, GLdouble x, GLdouble y);
mogl_function_glVertexAttrib2dNV glVertexAttrib2dNV;

typedef void (*mogl_function_glVertexAttrib2dvNV)(GLuint index, GLdouble *v);
mogl_function_glVertexAttrib2dvNV glVertexAttrib2dvNV;

typedef void (*mogl_function_glVertexAttrib2fNV)(GLuint index, GLfloat x, GLfloat y);
mogl_function_glVertexAttrib2fNV glVertexAttrib2fNV;

typedef void (*mogl_function_glVertexAttrib2fvNV)(GLuint index, GLfloat *v);
mogl_function_glVertexAttrib2fvNV glVertexAttrib2fvNV;

typedef void (*mogl_function_glVertexAttrib2sNV)(GLuint index, GLshort x, GLshort y);
mogl_function_glVertexAttrib2sNV glVertexAttrib2sNV;

typedef void (*mogl_function_glVertexAttrib2svNV)(GLuint index, GLshort *v);
mogl_function_glVertexAttrib2svNV glVertexAttrib2svNV;

typedef void (*mogl_function_glVertexAttrib3dNV)(GLuint index, GLdouble x, GLdouble y, GLdouble z);
mogl_function_glVertexAttrib3dNV glVertexAttrib3dNV;

typedef void (*mogl_function_glVertexAttrib3dvNV)(GLuint index, GLdouble *v);
mogl_function_glVertexAttrib3dvNV glVertexAttrib3dvNV;

typedef void (*mogl_function_glVertexAttrib3fNV)(GLuint index, GLfloat x, GLfloat y, GLfloat z);
mogl_function_glVertexAttrib3fNV glVertexAttrib3fNV;

typedef void (*mogl_function_glVertexAttrib3fvNV)(GLuint index, GLfloat *v);
mogl_function_glVertexAttrib3fvNV glVertexAttrib3fvNV;

typedef void (*mogl_function_glVertexAttrib3sNV)(GLuint index, GLshort x, GLshort y, GLshort z);
mogl_function_glVertexAttrib3sNV glVertexAttrib3sNV;

typedef void (*mogl_function_glVertexAttrib3svNV)(GLuint index, GLshort *v);
mogl_function_glVertexAttrib3svNV glVertexAttrib3svNV;

typedef void (*mogl_function_glVertexAttrib4dNV)(GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
mogl_function_glVertexAttrib4dNV glVertexAttrib4dNV;

typedef void (*mogl_function_glVertexAttrib4dvNV)(GLuint index, GLdouble *v);
mogl_function_glVertexAttrib4dvNV glVertexAttrib4dvNV;

typedef void (*mogl_function_glVertexAttrib4fNV)(GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
mogl_function_glVertexAttrib4fNV glVertexAttrib4fNV;

typedef void (*mogl_function_glVertexAttrib4fvNV)(GLuint index, GLfloat *v);
mogl_function_glVertexAttrib4fvNV glVertexAttrib4fvNV;

typedef void (*mogl_function_glVertexAttrib4sNV)(GLuint index, GLshort x, GLshort y, GLshort z, GLshort w);
mogl_function_glVertexAttrib4sNV glVertexAttrib4sNV;

typedef void (*mogl_function_glVertexAttrib4svNV)(GLuint index, GLshort *v);
mogl_function_glVertexAttrib4svNV glVertexAttrib4svNV;

typedef void (*mogl_function_glVertexAttrib4ubNV)(GLuint index, GLubyte x, GLubyte y, GLubyte z, GLubyte w);
mogl_function_glVertexAttrib4ubNV glVertexAttrib4ubNV;

typedef void (*mogl_function_glVertexAttrib4ubvNV)(GLuint index, GLubyte *v);
mogl_function_glVertexAttrib4ubvNV glVertexAttrib4ubvNV;

typedef void (*mogl_function_glVertexAttribs1dvNV)(GLuint index, GLsizei count, GLdouble *v);
mogl_function_glVertexAttribs1dvNV glVertexAttribs1dvNV;

typedef void (*mogl_function_glVertexAttribs1fvNV)(GLuint index, GLsizei count, GLfloat *v);
mogl_function_glVertexAttribs1fvNV glVertexAttribs1fvNV;

typedef void (*mogl_function_glVertexAttribs1svNV)(GLuint index, GLsizei count, GLshort *v);
mogl_function_glVertexAttribs1svNV glVertexAttribs1svNV;

typedef void (*mogl_function_glVertexAttribs2dvNV)(GLuint index, GLsizei count, GLdouble *v);
mogl_function_glVertexAttribs2dvNV glVertexAttribs2dvNV;

typedef void (*mogl_function_glVertexAttribs2fvNV)(GLuint index, GLsizei count, GLfloat *v);
mogl_function_glVertexAttribs2fvNV glVertexAttribs2fvNV;

typedef void (*mogl_function_glVertexAttribs2svNV)(GLuint index, GLsizei count, GLshort *v);
mogl_function_glVertexAttribs2svNV glVertexAttribs2svNV;

typedef void (*mogl_function_glVertexAttribs3dvNV)(GLuint index, GLsizei count, GLdouble *v);
mogl_function_glVertexAttribs3dvNV glVertexAttribs3dvNV;

typedef void (*mogl_function_glVertexAttribs3fvNV)(GLuint index, GLsizei count, GLfloat *v);
mogl_function_glVertexAttribs3fvNV glVertexAttribs3fvNV;

typedef void (*mogl_function_glVertexAttribs3svNV)(GLuint index, GLsizei count, GLshort *v);
mogl_function_glVertexAttribs3svNV glVertexAttribs3svNV;

typedef void (*mogl_function_glVertexAttribs4dvNV)(GLuint index, GLsizei count, GLdouble *v);
mogl_function_glVertexAttribs4dvNV glVertexAttribs4dvNV;

typedef void (*mogl_function_glVertexAttribs4fvNV)(GLuint index, GLsizei count, GLfloat *v);
mogl_function_glVertexAttribs4fvNV glVertexAttribs4fvNV;

typedef void (*mogl_function_glVertexAttribs4svNV)(GLuint index, GLsizei count, GLshort *v);
mogl_function_glVertexAttribs4svNV glVertexAttribs4svNV;

typedef void (*mogl_function_glVertexAttribs4ubvNV)(GLuint index, GLsizei count, GLubyte *v);
mogl_function_glVertexAttribs4ubvNV glVertexAttribs4ubvNV;
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

typedef void (*mogl_function_glBeginVideoCaptureNV)(GLuint video_capture_slot);
mogl_function_glBeginVideoCaptureNV glBeginVideoCaptureNV;

typedef void (*mogl_function_glBindVideoCaptureStreamBufferNV)(GLuint video_capture_slot, GLuint stream, GLenum frame_region, GLintptrARB offset);
mogl_function_glBindVideoCaptureStreamBufferNV glBindVideoCaptureStreamBufferNV;

typedef void (*mogl_function_glBindVideoCaptureStreamTextureNV)(GLuint video_capture_slot, GLuint stream, GLenum frame_region, GLenum target, GLuint texture);
mogl_function_glBindVideoCaptureStreamTextureNV glBindVideoCaptureStreamTextureNV;

typedef void (*mogl_function_glEndVideoCaptureNV)(GLuint video_capture_slot);
mogl_function_glEndVideoCaptureNV glEndVideoCaptureNV;

typedef void (*mogl_function_glGetVideoCaptureivNV)(GLuint video_capture_slot, GLenum pname, GLint *params);
mogl_function_glGetVideoCaptureivNV glGetVideoCaptureivNV;

typedef void (*mogl_function_glGetVideoCaptureStreamivNV)(GLuint video_capture_slot, GLuint stream, GLenum pname, GLint *params);
mogl_function_glGetVideoCaptureStreamivNV glGetVideoCaptureStreamivNV;

typedef void (*mogl_function_glGetVideoCaptureStreamfvNV)(GLuint video_capture_slot, GLuint stream, GLenum pname, GLfloat *params);
mogl_function_glGetVideoCaptureStreamfvNV glGetVideoCaptureStreamfvNV;

typedef void (*mogl_function_glGetVideoCaptureStreamdvNV)(GLuint video_capture_slot, GLuint stream, GLenum pname, GLdouble *params);
mogl_function_glGetVideoCaptureStreamdvNV glGetVideoCaptureStreamdvNV;

typedef GLenum  (*mogl_function_glVideoCaptureNV)(GLuint video_capture_slot, GLuint *sequence_num, GLuint64EXT *capture_time);
mogl_function_glVideoCaptureNV glVideoCaptureNV;

typedef void (*mogl_function_glVideoCaptureStreamParameterivNV)(GLuint video_capture_slot, GLuint stream, GLenum pname, GLint *params);
mogl_function_glVideoCaptureStreamParameterivNV glVideoCaptureStreamParameterivNV;

typedef void (*mogl_function_glVideoCaptureStreamParameterfvNV)(GLuint video_capture_slot, GLuint stream, GLenum pname, GLfloat *params);
mogl_function_glVideoCaptureStreamParameterfvNV glVideoCaptureStreamParameterfvNV;

typedef void (*mogl_function_glVideoCaptureStreamParameterdvNV)(GLuint video_capture_slot, GLuint stream, GLenum pname, GLdouble *params);
mogl_function_glVideoCaptureStreamParameterdvNV glVideoCaptureStreamParameterdvNV;
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

typedef void (*mogl_function_glViewportSwizzleNV)(GLuint index, GLenum swizzlex, GLenum swizzley, GLenum swizzlez, GLenum swizzlew);
mogl_function_glViewportSwizzleNV glViewportSwizzleNV;
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

typedef void (*mogl_function_glFramebufferTextureMultiviewOVR)(GLenum target, GLenum attachment, GLuint texture, GLint level, GLint baseViewIndex, GLsizei numViews);
mogl_function_glFramebufferTextureMultiviewOVR glFramebufferTextureMultiviewOVR;
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

typedef void (*mogl_function_glHintPGI)(GLenum target, GLint mode);
mogl_function_glHintPGI glHintPGI;
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

typedef void (*mogl_function_glDetailTexFuncSGIS)(GLenum target, GLsizei n, GLfloat *points);
mogl_function_glDetailTexFuncSGIS glDetailTexFuncSGIS;

typedef void (*mogl_function_glGetDetailTexFuncSGIS)(GLenum target, GLfloat *points);
mogl_function_glGetDetailTexFuncSGIS glGetDetailTexFuncSGIS;
#define GL_SGIS_fog_function 1
#define GL_FOG_FUNC_SGIS 0x812A
#define GL_FOG_FUNC_POINTS_SGIS 0x812B
#define GL_MAX_FOG_FUNC_POINTS_SGIS 0x812C

typedef void (*mogl_function_glFogFuncSGIS)(GLsizei n, GLfloat *points);
mogl_function_glFogFuncSGIS glFogFuncSGIS;

typedef void (*mogl_function_glGetFogFuncSGIS)(GLfloat *points);
mogl_function_glGetFogFuncSGIS glGetFogFuncSGIS;
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

typedef void (*mogl_function_glSampleMaskSGIS)(GLclampf value, GLboolean invert);
mogl_function_glSampleMaskSGIS glSampleMaskSGIS;

typedef void (*mogl_function_glSamplePatternSGIS)(GLenum pattern);
mogl_function_glSamplePatternSGIS glSamplePatternSGIS;
#define GL_SGIS_pixel_texture 1
#define GL_PIXEL_TEXTURE_SGIS 0x8353
#define GL_PIXEL_FRAGMENT_RGB_SOURCE_SGIS 0x8354
#define GL_PIXEL_FRAGMENT_ALPHA_SOURCE_SGIS 0x8355
#define GL_PIXEL_GROUP_COLOR_SGIS 0x8356

typedef void (*mogl_function_glPixelTexGenParameteriSGIS)(GLenum pname, GLint param);
mogl_function_glPixelTexGenParameteriSGIS glPixelTexGenParameteriSGIS;

typedef void (*mogl_function_glPixelTexGenParameterivSGIS)(GLenum pname, GLint *params);
mogl_function_glPixelTexGenParameterivSGIS glPixelTexGenParameterivSGIS;

typedef void (*mogl_function_glPixelTexGenParameterfSGIS)(GLenum pname, GLfloat param);
mogl_function_glPixelTexGenParameterfSGIS glPixelTexGenParameterfSGIS;

typedef void (*mogl_function_glPixelTexGenParameterfvSGIS)(GLenum pname, GLfloat *params);
mogl_function_glPixelTexGenParameterfvSGIS glPixelTexGenParameterfvSGIS;

typedef void (*mogl_function_glGetPixelTexGenParameterivSGIS)(GLenum pname, GLint *params);
mogl_function_glGetPixelTexGenParameterivSGIS glGetPixelTexGenParameterivSGIS;

typedef void (*mogl_function_glGetPixelTexGenParameterfvSGIS)(GLenum pname, GLfloat *params);
mogl_function_glGetPixelTexGenParameterfvSGIS glGetPixelTexGenParameterfvSGIS;
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

typedef void (*mogl_function_glPointParameterfSGIS)(GLenum pname, GLfloat param);
mogl_function_glPointParameterfSGIS glPointParameterfSGIS;

typedef void (*mogl_function_glPointParameterfvSGIS)(GLenum pname, GLfloat *params);
mogl_function_glPointParameterfvSGIS glPointParameterfvSGIS;
#define GL_SGIS_sharpen_texture 1
#define GL_LINEAR_SHARPEN_SGIS 0x80AD
#define GL_LINEAR_SHARPEN_ALPHA_SGIS 0x80AE
#define GL_LINEAR_SHARPEN_COLOR_SGIS 0x80AF
#define GL_SHARPEN_TEXTURE_FUNC_POINTS_SGIS 0x80B0

typedef void (*mogl_function_glSharpenTexFuncSGIS)(GLenum target, GLsizei n, GLfloat *points);
mogl_function_glSharpenTexFuncSGIS glSharpenTexFuncSGIS;

typedef void (*mogl_function_glGetSharpenTexFuncSGIS)(GLenum target, GLfloat *points);
mogl_function_glGetSharpenTexFuncSGIS glGetSharpenTexFuncSGIS;
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

typedef void (*mogl_function_glTexImage4DSGIS)(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLsizei size4d, GLint border, GLenum format, GLenum type, void * pixels);
mogl_function_glTexImage4DSGIS glTexImage4DSGIS;

typedef void (*mogl_function_glTexSubImage4DSGIS)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint woffset, GLsizei width, GLsizei height, GLsizei depth, GLsizei size4d, GLenum format, GLenum type, void * pixels);
mogl_function_glTexSubImage4DSGIS glTexSubImage4DSGIS;
#define GL_SGIS_texture_border_clamp 1
#define GL_CLAMP_TO_BORDER_SGIS 0x812D
#define GL_SGIS_texture_color_mask 1
#define GL_TEXTURE_COLOR_WRITEMASK_SGIS 0x81EF

typedef void (*mogl_function_glTextureColorMaskSGIS)(GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha);
mogl_function_glTextureColorMaskSGIS glTextureColorMaskSGIS;
#define GL_SGIS_texture_edge_clamp 1
#define GL_CLAMP_TO_EDGE_SGIS 0x812F
#define GL_SGIS_texture_filter4 1
#define GL_FILTER4_SGIS 0x8146
#define GL_TEXTURE_FILTER4_SIZE_SGIS 0x8147

typedef void (*mogl_function_glGetTexFilterFuncSGIS)(GLenum target, GLenum filter, GLfloat *weights);
mogl_function_glGetTexFilterFuncSGIS glGetTexFilterFuncSGIS;

typedef void (*mogl_function_glTexFilterFuncSGIS)(GLenum target, GLenum filter, GLsizei n, GLfloat *weights);
mogl_function_glTexFilterFuncSGIS glTexFilterFuncSGIS;
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

typedef void (*mogl_function_glAsyncMarkerSGIX)(GLuint marker);
mogl_function_glAsyncMarkerSGIX glAsyncMarkerSGIX;

typedef GLint  (*mogl_function_glFinishAsyncSGIX)(GLuint *markerp);
mogl_function_glFinishAsyncSGIX glFinishAsyncSGIX;

typedef GLint  (*mogl_function_glPollAsyncSGIX)(GLuint *markerp);
mogl_function_glPollAsyncSGIX glPollAsyncSGIX;

typedef GLuint  (*mogl_function_glGenAsyncMarkersSGIX)(GLsizei range);
mogl_function_glGenAsyncMarkersSGIX glGenAsyncMarkersSGIX;

typedef void (*mogl_function_glDeleteAsyncMarkersSGIX)(GLuint marker, GLsizei range);
mogl_function_glDeleteAsyncMarkersSGIX glDeleteAsyncMarkersSGIX;

typedef GLboolean  (*mogl_function_glIsAsyncMarkerSGIX)(GLuint marker);
mogl_function_glIsAsyncMarkerSGIX glIsAsyncMarkerSGIX;
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

typedef void (*mogl_function_glFlushRasterSGIX)();
mogl_function_glFlushRasterSGIX glFlushRasterSGIX;
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

typedef void (*mogl_function_glFragmentColorMaterialSGIX)(GLenum face, GLenum mode);
mogl_function_glFragmentColorMaterialSGIX glFragmentColorMaterialSGIX;

typedef void (*mogl_function_glFragmentLightfSGIX)(GLenum light, GLenum pname, GLfloat param);
mogl_function_glFragmentLightfSGIX glFragmentLightfSGIX;

typedef void (*mogl_function_glFragmentLightfvSGIX)(GLenum light, GLenum pname, GLfloat *params);
mogl_function_glFragmentLightfvSGIX glFragmentLightfvSGIX;

typedef void (*mogl_function_glFragmentLightiSGIX)(GLenum light, GLenum pname, GLint param);
mogl_function_glFragmentLightiSGIX glFragmentLightiSGIX;

typedef void (*mogl_function_glFragmentLightivSGIX)(GLenum light, GLenum pname, GLint *params);
mogl_function_glFragmentLightivSGIX glFragmentLightivSGIX;

typedef void (*mogl_function_glFragmentLightModelfSGIX)(GLenum pname, GLfloat param);
mogl_function_glFragmentLightModelfSGIX glFragmentLightModelfSGIX;

typedef void (*mogl_function_glFragmentLightModelfvSGIX)(GLenum pname, GLfloat *params);
mogl_function_glFragmentLightModelfvSGIX glFragmentLightModelfvSGIX;

typedef void (*mogl_function_glFragmentLightModeliSGIX)(GLenum pname, GLint param);
mogl_function_glFragmentLightModeliSGIX glFragmentLightModeliSGIX;

typedef void (*mogl_function_glFragmentLightModelivSGIX)(GLenum pname, GLint *params);
mogl_function_glFragmentLightModelivSGIX glFragmentLightModelivSGIX;

typedef void (*mogl_function_glFragmentMaterialfSGIX)(GLenum face, GLenum pname, GLfloat param);
mogl_function_glFragmentMaterialfSGIX glFragmentMaterialfSGIX;

typedef void (*mogl_function_glFragmentMaterialfvSGIX)(GLenum face, GLenum pname, GLfloat *params);
mogl_function_glFragmentMaterialfvSGIX glFragmentMaterialfvSGIX;

typedef void (*mogl_function_glFragmentMaterialiSGIX)(GLenum face, GLenum pname, GLint param);
mogl_function_glFragmentMaterialiSGIX glFragmentMaterialiSGIX;

typedef void (*mogl_function_glFragmentMaterialivSGIX)(GLenum face, GLenum pname, GLint *params);
mogl_function_glFragmentMaterialivSGIX glFragmentMaterialivSGIX;

typedef void (*mogl_function_glGetFragmentLightfvSGIX)(GLenum light, GLenum pname, GLfloat *params);
mogl_function_glGetFragmentLightfvSGIX glGetFragmentLightfvSGIX;

typedef void (*mogl_function_glGetFragmentLightivSGIX)(GLenum light, GLenum pname, GLint *params);
mogl_function_glGetFragmentLightivSGIX glGetFragmentLightivSGIX;

typedef void (*mogl_function_glGetFragmentMaterialfvSGIX)(GLenum face, GLenum pname, GLfloat *params);
mogl_function_glGetFragmentMaterialfvSGIX glGetFragmentMaterialfvSGIX;

typedef void (*mogl_function_glGetFragmentMaterialivSGIX)(GLenum face, GLenum pname, GLint *params);
mogl_function_glGetFragmentMaterialivSGIX glGetFragmentMaterialivSGIX;

typedef void (*mogl_function_glLightEnviSGIX)(GLenum pname, GLint param);
mogl_function_glLightEnviSGIX glLightEnviSGIX;
#define GL_SGIX_framezoom 1
#define GL_FRAMEZOOM_SGIX 0x818B
#define GL_FRAMEZOOM_FACTOR_SGIX 0x818C
#define GL_MAX_FRAMEZOOM_FACTOR_SGIX 0x818D

typedef void (*mogl_function_glFrameZoomSGIX)(GLint factor);
mogl_function_glFrameZoomSGIX glFrameZoomSGIX;
#define GL_SGIX_igloo_interface 1

typedef void (*mogl_function_glIglooInterfaceSGIX)(GLenum pname, void * params);
mogl_function_glIglooInterfaceSGIX glIglooInterfaceSGIX;
#define GL_SGIX_instruments 1
#define GL_INSTRUMENT_BUFFER_POINTER_SGIX 0x8180
#define GL_INSTRUMENT_MEASUREMENTS_SGIX 0x8181

typedef GLint  (*mogl_function_glGetInstrumentsSGIX)();
mogl_function_glGetInstrumentsSGIX glGetInstrumentsSGIX;

typedef void (*mogl_function_glInstrumentsBufferSGIX)(GLsizei size, GLint *buffer);
mogl_function_glInstrumentsBufferSGIX glInstrumentsBufferSGIX;

typedef GLint  (*mogl_function_glPollInstrumentsSGIX)(GLint *marker_p);
mogl_function_glPollInstrumentsSGIX glPollInstrumentsSGIX;

typedef void (*mogl_function_glReadInstrumentsSGIX)(GLint marker);
mogl_function_glReadInstrumentsSGIX glReadInstrumentsSGIX;

typedef void (*mogl_function_glStartInstrumentsSGIX)();
mogl_function_glStartInstrumentsSGIX glStartInstrumentsSGIX;

typedef void (*mogl_function_glStopInstrumentsSGIX)(GLint marker);
mogl_function_glStopInstrumentsSGIX glStopInstrumentsSGIX;
#define GL_SGIX_interlace 1
#define GL_INTERLACE_SGIX 0x8094
#define GL_SGIX_ir_instrument1 1
#define GL_IR_INSTRUMENT1_SGIX 0x817F
#define GL_SGIX_list_priority 1
#define GL_LIST_PRIORITY_SGIX 0x8182

typedef void (*mogl_function_glGetListParameterfvSGIX)(GLuint list, GLenum pname, GLfloat *params);
mogl_function_glGetListParameterfvSGIX glGetListParameterfvSGIX;

typedef void (*mogl_function_glGetListParameterivSGIX)(GLuint list, GLenum pname, GLint *params);
mogl_function_glGetListParameterivSGIX glGetListParameterivSGIX;

typedef void (*mogl_function_glListParameterfSGIX)(GLuint list, GLenum pname, GLfloat param);
mogl_function_glListParameterfSGIX glListParameterfSGIX;

typedef void (*mogl_function_glListParameterfvSGIX)(GLuint list, GLenum pname, GLfloat *params);
mogl_function_glListParameterfvSGIX glListParameterfvSGIX;

typedef void (*mogl_function_glListParameteriSGIX)(GLuint list, GLenum pname, GLint param);
mogl_function_glListParameteriSGIX glListParameteriSGIX;

typedef void (*mogl_function_glListParameterivSGIX)(GLuint list, GLenum pname, GLint *params);
mogl_function_glListParameterivSGIX glListParameterivSGIX;
#define GL_SGIX_pixel_texture 1
#define GL_PIXEL_TEX_GEN_SGIX 0x8139
#define GL_PIXEL_TEX_GEN_MODE_SGIX 0x832B

typedef void (*mogl_function_glPixelTexGenSGIX)(GLenum mode);
mogl_function_glPixelTexGenSGIX glPixelTexGenSGIX;
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

typedef void (*mogl_function_glDeformationMap3dSGIX)(GLenum target, GLdouble u1, GLdouble u2, GLint ustride, GLint uorder, GLdouble v1, GLdouble v2, GLint vstride, GLint vorder, GLdouble w1, GLdouble w2, GLint wstride, GLint worder, GLdouble *points);
mogl_function_glDeformationMap3dSGIX glDeformationMap3dSGIX;

typedef void (*mogl_function_glDeformationMap3fSGIX)(GLenum target, GLfloat u1, GLfloat u2, GLint ustride, GLint uorder, GLfloat v1, GLfloat v2, GLint vstride, GLint vorder, GLfloat w1, GLfloat w2, GLint wstride, GLint worder, GLfloat *points);
mogl_function_glDeformationMap3fSGIX glDeformationMap3fSGIX;

typedef void (*mogl_function_glDeformSGIX)(GLbitfield mask);
mogl_function_glDeformSGIX glDeformSGIX;

typedef void (*mogl_function_glLoadIdentityDeformationMapSGIX)(GLbitfield mask);
mogl_function_glLoadIdentityDeformationMapSGIX glLoadIdentityDeformationMapSGIX;
#define GL_SGIX_reference_plane 1
#define GL_REFERENCE_PLANE_SGIX 0x817D
#define GL_REFERENCE_PLANE_EQUATION_SGIX 0x817E

typedef void (*mogl_function_glReferencePlaneSGIX)(GLdouble *equation);
mogl_function_glReferencePlaneSGIX glReferencePlaneSGIX;
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

typedef void (*mogl_function_glSpriteParameterfSGIX)(GLenum pname, GLfloat param);
mogl_function_glSpriteParameterfSGIX glSpriteParameterfSGIX;

typedef void (*mogl_function_glSpriteParameterfvSGIX)(GLenum pname, GLfloat *params);
mogl_function_glSpriteParameterfvSGIX glSpriteParameterfvSGIX;

typedef void (*mogl_function_glSpriteParameteriSGIX)(GLenum pname, GLint param);
mogl_function_glSpriteParameteriSGIX glSpriteParameteriSGIX;

typedef void (*mogl_function_glSpriteParameterivSGIX)(GLenum pname, GLint *params);
mogl_function_glSpriteParameterivSGIX glSpriteParameterivSGIX;
#define GL_SGIX_subsample 1
#define GL_PACK_SUBSAMPLE_RATE_SGIX 0x85A0
#define GL_UNPACK_SUBSAMPLE_RATE_SGIX 0x85A1
#define GL_PIXEL_SUBSAMPLE_4444_SGIX 0x85A2
#define GL_PIXEL_SUBSAMPLE_2424_SGIX 0x85A3
#define GL_PIXEL_SUBSAMPLE_4242_SGIX 0x85A4
#define GL_SGIX_tag_sample_buffer 1

typedef void (*mogl_function_glTagSampleBufferSGIX)();
mogl_function_glTagSampleBufferSGIX glTagSampleBufferSGIX;
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

typedef void (*mogl_function_glColorTableSGI)(GLenum target, GLenum internalformat, GLsizei width, GLenum format, GLenum type, void * table);
mogl_function_glColorTableSGI glColorTableSGI;

typedef void (*mogl_function_glColorTableParameterfvSGI)(GLenum target, GLenum pname, GLfloat *params);
mogl_function_glColorTableParameterfvSGI glColorTableParameterfvSGI;

typedef void (*mogl_function_glColorTableParameterivSGI)(GLenum target, GLenum pname, GLint *params);
mogl_function_glColorTableParameterivSGI glColorTableParameterivSGI;

typedef void (*mogl_function_glCopyColorTableSGI)(GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width);
mogl_function_glCopyColorTableSGI glCopyColorTableSGI;

typedef void (*mogl_function_glGetColorTableSGI)(GLenum target, GLenum format, GLenum type, void * table);
mogl_function_glGetColorTableSGI glGetColorTableSGI;

typedef void (*mogl_function_glGetColorTableParameterfvSGI)(GLenum target, GLenum pname, GLfloat *params);
mogl_function_glGetColorTableParameterfvSGI glGetColorTableParameterfvSGI;

typedef void (*mogl_function_glGetColorTableParameterivSGI)(GLenum target, GLenum pname, GLint *params);
mogl_function_glGetColorTableParameterivSGI glGetColorTableParameterivSGI;
#define GL_SGI_texture_color_table 1
#define GL_TEXTURE_COLOR_TABLE_SGI 0x80BC
#define GL_PROXY_TEXTURE_COLOR_TABLE_SGI 0x80BD
#define GL_SUNX_constant_data 1
#define GL_UNPACK_CONSTANT_DATA_SUNX 0x81D5
#define GL_TEXTURE_CONSTANT_DATA_SUNX 0x81D6

typedef void (*mogl_function_glFinishTextureSUNX)();
mogl_function_glFinishTextureSUNX glFinishTextureSUNX;
#define GL_SUN_convolution_border_modes 1
#define GL_WRAP_BORDER_SUN 0x81D4
#define GL_SUN_global_alpha 1
#define GL_GLOBAL_ALPHA_SUN 0x81D9
#define GL_GLOBAL_ALPHA_FACTOR_SUN 0x81DA

typedef void (*mogl_function_glGlobalAlphaFactorbSUN)(GLbyte factor);
mogl_function_glGlobalAlphaFactorbSUN glGlobalAlphaFactorbSUN;

typedef void (*mogl_function_glGlobalAlphaFactorsSUN)(GLshort factor);
mogl_function_glGlobalAlphaFactorsSUN glGlobalAlphaFactorsSUN;

typedef void (*mogl_function_glGlobalAlphaFactoriSUN)(GLint factor);
mogl_function_glGlobalAlphaFactoriSUN glGlobalAlphaFactoriSUN;

typedef void (*mogl_function_glGlobalAlphaFactorfSUN)(GLfloat factor);
mogl_function_glGlobalAlphaFactorfSUN glGlobalAlphaFactorfSUN;

typedef void (*mogl_function_glGlobalAlphaFactordSUN)(GLdouble factor);
mogl_function_glGlobalAlphaFactordSUN glGlobalAlphaFactordSUN;

typedef void (*mogl_function_glGlobalAlphaFactorubSUN)(GLubyte factor);
mogl_function_glGlobalAlphaFactorubSUN glGlobalAlphaFactorubSUN;

typedef void (*mogl_function_glGlobalAlphaFactorusSUN)(GLushort factor);
mogl_function_glGlobalAlphaFactorusSUN glGlobalAlphaFactorusSUN;

typedef void (*mogl_function_glGlobalAlphaFactoruiSUN)(GLuint factor);
mogl_function_glGlobalAlphaFactoruiSUN glGlobalAlphaFactoruiSUN;
#define GL_SUN_mesh_array 1
#define GL_QUAD_MESH_SUN 0x8614
#define GL_TRIANGLE_MESH_SUN 0x8615

typedef void (*mogl_function_glDrawMeshArraysSUN)(GLenum mode, GLint first, GLsizei count, GLsizei width);
mogl_function_glDrawMeshArraysSUN glDrawMeshArraysSUN;
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

typedef void (*mogl_function_glReplacementCodeuiSUN)(GLuint code);
mogl_function_glReplacementCodeuiSUN glReplacementCodeuiSUN;

typedef void (*mogl_function_glReplacementCodeusSUN)(GLushort code);
mogl_function_glReplacementCodeusSUN glReplacementCodeusSUN;

typedef void (*mogl_function_glReplacementCodeubSUN)(GLubyte code);
mogl_function_glReplacementCodeubSUN glReplacementCodeubSUN;

typedef void (*mogl_function_glReplacementCodeuivSUN)(GLuint *code);
mogl_function_glReplacementCodeuivSUN glReplacementCodeuivSUN;

typedef void (*mogl_function_glReplacementCodeusvSUN)(GLushort *code);
mogl_function_glReplacementCodeusvSUN glReplacementCodeusvSUN;

typedef void (*mogl_function_glReplacementCodeubvSUN)(GLubyte *code);
mogl_function_glReplacementCodeubvSUN glReplacementCodeubvSUN;

typedef void (*mogl_function_glReplacementCodePointerSUN)(GLenum type, GLsizei stride, void * *pointer);
mogl_function_glReplacementCodePointerSUN glReplacementCodePointerSUN;
#define GL_SUN_vertex 1

typedef void (*mogl_function_glColor4ubVertex2fSUN)(GLubyte r, GLubyte g, GLubyte b, GLubyte a, GLfloat x, GLfloat y);
mogl_function_glColor4ubVertex2fSUN glColor4ubVertex2fSUN;

typedef void (*mogl_function_glColor4ubVertex2fvSUN)(GLubyte *c, GLfloat *v);
mogl_function_glColor4ubVertex2fvSUN glColor4ubVertex2fvSUN;

typedef void (*mogl_function_glColor4ubVertex3fSUN)(GLubyte r, GLubyte g, GLubyte b, GLubyte a, GLfloat x, GLfloat y, GLfloat z);
mogl_function_glColor4ubVertex3fSUN glColor4ubVertex3fSUN;

typedef void (*mogl_function_glColor4ubVertex3fvSUN)(GLubyte *c, GLfloat *v);
mogl_function_glColor4ubVertex3fvSUN glColor4ubVertex3fvSUN;

typedef void (*mogl_function_glColor3fVertex3fSUN)(GLfloat r, GLfloat g, GLfloat b, GLfloat x, GLfloat y, GLfloat z);
mogl_function_glColor3fVertex3fSUN glColor3fVertex3fSUN;

typedef void (*mogl_function_glColor3fVertex3fvSUN)(GLfloat *c, GLfloat *v);
mogl_function_glColor3fVertex3fvSUN glColor3fVertex3fvSUN;

typedef void (*mogl_function_glNormal3fVertex3fSUN)(GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z);
mogl_function_glNormal3fVertex3fSUN glNormal3fVertex3fSUN;

typedef void (*mogl_function_glNormal3fVertex3fvSUN)(GLfloat *n, GLfloat *v);
mogl_function_glNormal3fVertex3fvSUN glNormal3fVertex3fvSUN;

typedef void (*mogl_function_glColor4fNormal3fVertex3fSUN)(GLfloat r, GLfloat g, GLfloat b, GLfloat a, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z);
mogl_function_glColor4fNormal3fVertex3fSUN glColor4fNormal3fVertex3fSUN;

typedef void (*mogl_function_glColor4fNormal3fVertex3fvSUN)(GLfloat *c, GLfloat *n, GLfloat *v);
mogl_function_glColor4fNormal3fVertex3fvSUN glColor4fNormal3fVertex3fvSUN;

typedef void (*mogl_function_glTexCoord2fVertex3fSUN)(GLfloat s, GLfloat t, GLfloat x, GLfloat y, GLfloat z);
mogl_function_glTexCoord2fVertex3fSUN glTexCoord2fVertex3fSUN;

typedef void (*mogl_function_glTexCoord2fVertex3fvSUN)(GLfloat *tc, GLfloat *v);
mogl_function_glTexCoord2fVertex3fvSUN glTexCoord2fVertex3fvSUN;

typedef void (*mogl_function_glTexCoord4fVertex4fSUN)(GLfloat s, GLfloat t, GLfloat p, GLfloat q, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
mogl_function_glTexCoord4fVertex4fSUN glTexCoord4fVertex4fSUN;

typedef void (*mogl_function_glTexCoord4fVertex4fvSUN)(GLfloat *tc, GLfloat *v);
mogl_function_glTexCoord4fVertex4fvSUN glTexCoord4fVertex4fvSUN;

typedef void (*mogl_function_glTexCoord2fColor4ubVertex3fSUN)(GLfloat s, GLfloat t, GLubyte r, GLubyte g, GLubyte b, GLubyte a, GLfloat x, GLfloat y, GLfloat z);
mogl_function_glTexCoord2fColor4ubVertex3fSUN glTexCoord2fColor4ubVertex3fSUN;

typedef void (*mogl_function_glTexCoord2fColor4ubVertex3fvSUN)(GLfloat *tc, GLubyte *c, GLfloat *v);
mogl_function_glTexCoord2fColor4ubVertex3fvSUN glTexCoord2fColor4ubVertex3fvSUN;

typedef void (*mogl_function_glTexCoord2fColor3fVertex3fSUN)(GLfloat s, GLfloat t, GLfloat r, GLfloat g, GLfloat b, GLfloat x, GLfloat y, GLfloat z);
mogl_function_glTexCoord2fColor3fVertex3fSUN glTexCoord2fColor3fVertex3fSUN;

typedef void (*mogl_function_glTexCoord2fColor3fVertex3fvSUN)(GLfloat *tc, GLfloat *c, GLfloat *v);
mogl_function_glTexCoord2fColor3fVertex3fvSUN glTexCoord2fColor3fVertex3fvSUN;

typedef void (*mogl_function_glTexCoord2fNormal3fVertex3fSUN)(GLfloat s, GLfloat t, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z);
mogl_function_glTexCoord2fNormal3fVertex3fSUN glTexCoord2fNormal3fVertex3fSUN;

typedef void (*mogl_function_glTexCoord2fNormal3fVertex3fvSUN)(GLfloat *tc, GLfloat *n, GLfloat *v);
mogl_function_glTexCoord2fNormal3fVertex3fvSUN glTexCoord2fNormal3fVertex3fvSUN;

typedef void (*mogl_function_glTexCoord2fColor4fNormal3fVertex3fSUN)(GLfloat s, GLfloat t, GLfloat r, GLfloat g, GLfloat b, GLfloat a, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z);
mogl_function_glTexCoord2fColor4fNormal3fVertex3fSUN glTexCoord2fColor4fNormal3fVertex3fSUN;

typedef void (*mogl_function_glTexCoord2fColor4fNormal3fVertex3fvSUN)(GLfloat *tc, GLfloat *c, GLfloat *n, GLfloat *v);
mogl_function_glTexCoord2fColor4fNormal3fVertex3fvSUN glTexCoord2fColor4fNormal3fVertex3fvSUN;

typedef void (*mogl_function_glTexCoord4fColor4fNormal3fVertex4fSUN)(GLfloat s, GLfloat t, GLfloat p, GLfloat q, GLfloat r, GLfloat g, GLfloat b, GLfloat a, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
mogl_function_glTexCoord4fColor4fNormal3fVertex4fSUN glTexCoord4fColor4fNormal3fVertex4fSUN;

typedef void (*mogl_function_glTexCoord4fColor4fNormal3fVertex4fvSUN)(GLfloat *tc, GLfloat *c, GLfloat *n, GLfloat *v);
mogl_function_glTexCoord4fColor4fNormal3fVertex4fvSUN glTexCoord4fColor4fNormal3fVertex4fvSUN;

typedef void (*mogl_function_glReplacementCodeuiVertex3fSUN)(GLuint rc, GLfloat x, GLfloat y, GLfloat z);
mogl_function_glReplacementCodeuiVertex3fSUN glReplacementCodeuiVertex3fSUN;

typedef void (*mogl_function_glReplacementCodeuiVertex3fvSUN)(GLuint *rc, GLfloat *v);
mogl_function_glReplacementCodeuiVertex3fvSUN glReplacementCodeuiVertex3fvSUN;

typedef void (*mogl_function_glReplacementCodeuiColor4ubVertex3fSUN)(GLuint rc, GLubyte r, GLubyte g, GLubyte b, GLubyte a, GLfloat x, GLfloat y, GLfloat z);
mogl_function_glReplacementCodeuiColor4ubVertex3fSUN glReplacementCodeuiColor4ubVertex3fSUN;

typedef void (*mogl_function_glReplacementCodeuiColor4ubVertex3fvSUN)(GLuint *rc, GLubyte *c, GLfloat *v);
mogl_function_glReplacementCodeuiColor4ubVertex3fvSUN glReplacementCodeuiColor4ubVertex3fvSUN;

typedef void (*mogl_function_glReplacementCodeuiColor3fVertex3fSUN)(GLuint rc, GLfloat r, GLfloat g, GLfloat b, GLfloat x, GLfloat y, GLfloat z);
mogl_function_glReplacementCodeuiColor3fVertex3fSUN glReplacementCodeuiColor3fVertex3fSUN;

typedef void (*mogl_function_glReplacementCodeuiColor3fVertex3fvSUN)(GLuint *rc, GLfloat *c, GLfloat *v);
mogl_function_glReplacementCodeuiColor3fVertex3fvSUN glReplacementCodeuiColor3fVertex3fvSUN;

typedef void (*mogl_function_glReplacementCodeuiNormal3fVertex3fSUN)(GLuint rc, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z);
mogl_function_glReplacementCodeuiNormal3fVertex3fSUN glReplacementCodeuiNormal3fVertex3fSUN;

typedef void (*mogl_function_glReplacementCodeuiNormal3fVertex3fvSUN)(GLuint *rc, GLfloat *n, GLfloat *v);
mogl_function_glReplacementCodeuiNormal3fVertex3fvSUN glReplacementCodeuiNormal3fVertex3fvSUN;

typedef void (*mogl_function_glReplacementCodeuiColor4fNormal3fVertex3fSUN)(GLuint rc, GLfloat r, GLfloat g, GLfloat b, GLfloat a, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z);
mogl_function_glReplacementCodeuiColor4fNormal3fVertex3fSUN glReplacementCodeuiColor4fNormal3fVertex3fSUN;

typedef void (*mogl_function_glReplacementCodeuiColor4fNormal3fVertex3fvSUN)(GLuint *rc, GLfloat *c, GLfloat *n, GLfloat *v);
mogl_function_glReplacementCodeuiColor4fNormal3fVertex3fvSUN glReplacementCodeuiColor4fNormal3fVertex3fvSUN;

typedef void (*mogl_function_glReplacementCodeuiTexCoord2fVertex3fSUN)(GLuint rc, GLfloat s, GLfloat t, GLfloat x, GLfloat y, GLfloat z);
mogl_function_glReplacementCodeuiTexCoord2fVertex3fSUN glReplacementCodeuiTexCoord2fVertex3fSUN;

typedef void (*mogl_function_glReplacementCodeuiTexCoord2fVertex3fvSUN)(GLuint *rc, GLfloat *tc, GLfloat *v);
mogl_function_glReplacementCodeuiTexCoord2fVertex3fvSUN glReplacementCodeuiTexCoord2fVertex3fvSUN;

typedef void (*mogl_function_glReplacementCodeuiTexCoord2fNormal3fVertex3fSUN)(GLuint rc, GLfloat s, GLfloat t, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z);
mogl_function_glReplacementCodeuiTexCoord2fNormal3fVertex3fSUN glReplacementCodeuiTexCoord2fNormal3fVertex3fSUN;

typedef void (*mogl_function_glReplacementCodeuiTexCoord2fNormal3fVertex3fvSUN)(GLuint *rc, GLfloat *tc, GLfloat *n, GLfloat *v);
mogl_function_glReplacementCodeuiTexCoord2fNormal3fVertex3fvSUN glReplacementCodeuiTexCoord2fNormal3fVertex3fvSUN;

typedef void (*mogl_function_glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fSUN)(GLuint rc, GLfloat s, GLfloat t, GLfloat r, GLfloat g, GLfloat b, GLfloat a, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z);
mogl_function_glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fSUN glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fSUN;

typedef void (*mogl_function_glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fvSUN)(GLuint *rc, GLfloat *tc, GLfloat *c, GLfloat *n, GLfloat *v);
mogl_function_glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fvSUN glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fvSUN;
#define GL_WIN_phong_shading 1
#define GL_WIN_specular_fog 1

#ifdef __cplusplus
}
#endif

#endif
