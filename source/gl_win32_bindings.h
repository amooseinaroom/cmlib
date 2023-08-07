#if !defined GL_WI32_BINDINGS_H
#define GL_WI32_BINDINGS_H

#ifdef __cplusplus
extern "C" {
#endif

typedef void * HPBUFFERARB;
typedef void * HPBUFFEREXT;
typedef void * HGPUNV;
typedef void * PGPU_DEVICE;
typedef void * HVIDEOOUTPUTDEVICENV;
typedef void * HVIDEOINPUTDEVICENV;
typedef void * HPVIDEODEV;

#if !defined(_WIN32) && !defined(WIN32)
typedef void * HGLRC;

void * wglGetProcAddress(char *name);
HGLRC wglCreateContext(HDC device_context);
signed int wglDeleteContext(HGLRC gl_context);
signed int wglMakeCurrent(HDC device_context, HGLRC gl_context);
#endif#define WGL_WGLEXT_VERSION 20230705
#define WGL_ARB_buffer_region 1
#define WGL_FRONT_COLOR_BUFFER_BIT_ARB 0x00000001
#define WGL_BACK_COLOR_BUFFER_BIT_ARB 0x00000002
#define WGL_DEPTH_BUFFER_BIT_ARB 0x00000004
#define WGL_STENCIL_BUFFER_BIT_ARB 0x00000008

typedef HANDLE  (*wglCreateBufferRegionARB_function)(HDC hDC, signed int iLayerPlane, unsigned int uType);
wglCreateBufferRegionARB_function wglCreateBufferRegionARB;

typedef void (*wglDeleteBufferRegionARB_function)(HANDLE hRegion);
wglDeleteBufferRegionARB_function wglDeleteBufferRegionARB;

typedef signed int  (*wglSaveBufferRegionARB_function)(HANDLE hRegion, signed int x, signed int y, signed int width, signed int height);
wglSaveBufferRegionARB_function wglSaveBufferRegionARB;

typedef signed int  (*wglRestoreBufferRegionARB_function)(HANDLE hRegion, signed int x, signed int y, signed int width, signed int height, signed int xSrc, signed int ySrc);
wglRestoreBufferRegionARB_function wglRestoreBufferRegionARB;
#define WGL_ARB_context_flush_control 1
#define WGL_CONTEXT_RELEASE_BEHAVIOR_ARB 0x2097
#define WGL_CONTEXT_RELEASE_BEHAVIOR_NONE_ARB 0
#define WGL_CONTEXT_RELEASE_BEHAVIOR_FLUSH_ARB 0x2098
#define WGL_ARB_create_context 1
#define WGL_CONTEXT_DEBUG_BIT_ARB 0x00000001
#define WGL_CONTEXT_FORWARD_COMPATIBLE_BIT_ARB 0x00000002
#define WGL_CONTEXT_MAJOR_VERSION_ARB 0x2091
#define WGL_CONTEXT_MINOR_VERSION_ARB 0x2092
#define WGL_CONTEXT_LAYER_PLANE_ARB 0x2093
#define WGL_CONTEXT_FLAGS_ARB 0x2094

typedef HGLRC  (*wglCreateContextAttribsARB_function)(HDC hDC, HGLRC hShareContext, signed int *attribList);
wglCreateContextAttribsARB_function wglCreateContextAttribsARB;
#define WGL_ARB_create_context_no_error 1
#define WGL_CONTEXT_OPENGL_NO_ERROR_ARB 0x31B3
#define WGL_ARB_create_context_profile 1
#define WGL_CONTEXT_PROFILE_MASK_ARB 0x9126
#define WGL_CONTEXT_CORE_PROFILE_BIT_ARB 0x00000001
#define WGL_CONTEXT_COMPATIBILITY_PROFILE_BIT_ARB 0x00000002
#define WGL_ARB_create_context_robustness 1
#define WGL_CONTEXT_ROBUST_ACCESS_BIT_ARB 0x00000004
#define WGL_LOSE_CONTEXT_ON_RESET_ARB 0x8252
#define WGL_CONTEXT_RESET_NOTIFICATION_STRATEGY_ARB 0x8256
#define WGL_NO_RESET_NOTIFICATION_ARB 0x8261
#define WGL_ARB_extensions_string 1

typedef char * (*wglGetExtensionsStringARB_function)(HDC hdc);
wglGetExtensionsStringARB_function wglGetExtensionsStringARB;
#define WGL_ARB_framebuffer_sRGB 1
#define WGL_FRAMEBUFFER_SRGB_CAPABLE_ARB 0x20A9
#define WGL_ARB_make_current_read 1

typedef signed int  (*wglMakeContextCurrentARB_function)(HDC hDrawDC, HDC hReadDC, HGLRC hglrc);
wglMakeContextCurrentARB_function wglMakeContextCurrentARB;

typedef HDC  (*wglGetCurrentReadDCARB_function)();
wglGetCurrentReadDCARB_function wglGetCurrentReadDCARB;
#define WGL_ARB_multisample 1
#define WGL_SAMPLE_BUFFERS_ARB 0x2041
#define WGL_SAMPLES_ARB 0x2042
#define WGL_ARB_pbuffer 1
#define WGL_DRAW_TO_PBUFFER_ARB 0x202D
#define WGL_MAX_PBUFFER_PIXELS_ARB 0x202E
#define WGL_MAX_PBUFFER_WIDTH_ARB 0x202F
#define WGL_MAX_PBUFFER_HEIGHT_ARB 0x2030
#define WGL_PBUFFER_LARGEST_ARB 0x2033
#define WGL_PBUFFER_WIDTH_ARB 0x2034
#define WGL_PBUFFER_HEIGHT_ARB 0x2035
#define WGL_PBUFFER_LOST_ARB 0x2036

typedef HPBUFFERARB  (*wglCreatePbufferARB_function)(HDC hDC, signed int iPixelFormat, signed int iWidth, signed int iHeight, signed int *piAttribList);
wglCreatePbufferARB_function wglCreatePbufferARB;

typedef HDC  (*wglGetPbufferDCARB_function)(HPBUFFERARB hPbuffer);
wglGetPbufferDCARB_function wglGetPbufferDCARB;

typedef signed int  (*wglReleasePbufferDCARB_function)(HPBUFFERARB hPbuffer, HDC hDC);
wglReleasePbufferDCARB_function wglReleasePbufferDCARB;

typedef signed int  (*wglDestroyPbufferARB_function)(HPBUFFERARB hPbuffer);
wglDestroyPbufferARB_function wglDestroyPbufferARB;

typedef signed int  (*wglQueryPbufferARB_function)(HPBUFFERARB hPbuffer, signed int iAttribute, signed int *piValue);
wglQueryPbufferARB_function wglQueryPbufferARB;
#define WGL_ARB_pixel_format 1
#define WGL_NUMBER_PIXEL_FORMATS_ARB 0x2000
#define WGL_DRAW_TO_WINDOW_ARB 0x2001
#define WGL_DRAW_TO_BITMAP_ARB 0x2002
#define WGL_ACCELERATION_ARB 0x2003
#define WGL_NEED_PALETTE_ARB 0x2004
#define WGL_NEED_SYSTEM_PALETTE_ARB 0x2005
#define WGL_SWAP_LAYER_BUFFERS_ARB 0x2006
#define WGL_SWAP_METHOD_ARB 0x2007
#define WGL_NUMBER_OVERLAYS_ARB 0x2008
#define WGL_NUMBER_UNDERLAYS_ARB 0x2009
#define WGL_TRANSPARENT_ARB 0x200A
#define WGL_TRANSPARENT_RED_VALUE_ARB 0x2037
#define WGL_TRANSPARENT_GREEN_VALUE_ARB 0x2038
#define WGL_TRANSPARENT_BLUE_VALUE_ARB 0x2039
#define WGL_TRANSPARENT_ALPHA_VALUE_ARB 0x203A
#define WGL_TRANSPARENT_INDEX_VALUE_ARB 0x203B
#define WGL_SHARE_DEPTH_ARB 0x200C
#define WGL_SHARE_STENCIL_ARB 0x200D
#define WGL_SHARE_ACCUM_ARB 0x200E
#define WGL_SUPPORT_GDI_ARB 0x200F
#define WGL_SUPPORT_OPENGL_ARB 0x2010
#define WGL_DOUBLE_BUFFER_ARB 0x2011
#define WGL_STEREO_ARB 0x2012
#define WGL_PIXEL_TYPE_ARB 0x2013
#define WGL_COLOR_BITS_ARB 0x2014
#define WGL_RED_BITS_ARB 0x2015
#define WGL_RED_SHIFT_ARB 0x2016
#define WGL_GREEN_BITS_ARB 0x2017
#define WGL_GREEN_SHIFT_ARB 0x2018
#define WGL_BLUE_BITS_ARB 0x2019
#define WGL_BLUE_SHIFT_ARB 0x201A
#define WGL_ALPHA_BITS_ARB 0x201B
#define WGL_ALPHA_SHIFT_ARB 0x201C
#define WGL_ACCUM_BITS_ARB 0x201D
#define WGL_ACCUM_RED_BITS_ARB 0x201E
#define WGL_ACCUM_GREEN_BITS_ARB 0x201F
#define WGL_ACCUM_BLUE_BITS_ARB 0x2020
#define WGL_ACCUM_ALPHA_BITS_ARB 0x2021
#define WGL_DEPTH_BITS_ARB 0x2022
#define WGL_STENCIL_BITS_ARB 0x2023
#define WGL_AUX_BUFFERS_ARB 0x2024
#define WGL_NO_ACCELERATION_ARB 0x2025
#define WGL_GENERIC_ACCELERATION_ARB 0x2026
#define WGL_FULL_ACCELERATION_ARB 0x2027
#define WGL_SWAP_EXCHANGE_ARB 0x2028
#define WGL_SWAP_COPY_ARB 0x2029
#define WGL_SWAP_UNDEFINED_ARB 0x202A
#define WGL_TYPE_RGBA_ARB 0x202B
#define WGL_TYPE_COLORINDEX_ARB 0x202C

typedef signed int  (*wglGetPixelFormatAttribivARB_function)(HDC hdc, signed int iPixelFormat, signed int iLayerPlane, unsigned int nAttributes, signed int *piAttributes, signed int *piValues);
wglGetPixelFormatAttribivARB_function wglGetPixelFormatAttribivARB;

typedef signed int  (*wglGetPixelFormatAttribfvARB_function)(HDC hdc, signed int iPixelFormat, signed int iLayerPlane, unsigned int nAttributes, signed int *piAttributes, float *pfValues);
wglGetPixelFormatAttribfvARB_function wglGetPixelFormatAttribfvARB;

typedef signed int  (*wglChoosePixelFormatARB_function)(HDC hdc, signed int *piAttribIList, float *pfAttribFList, unsigned int nMaxFormats, signed int *piFormats, unsigned int *nNumFormats);
wglChoosePixelFormatARB_function wglChoosePixelFormatARB;
#define WGL_ARB_pixel_format_float 1
#define WGL_TYPE_RGBA_FLOAT_ARB 0x21A0
#define WGL_ARB_render_texture 1
#define WGL_BIND_TO_TEXTURE_RGB_ARB 0x2070
#define WGL_BIND_TO_TEXTURE_RGBA_ARB 0x2071
#define WGL_TEXTURE_FORMAT_ARB 0x2072
#define WGL_TEXTURE_TARGET_ARB 0x2073
#define WGL_MIPMAP_TEXTURE_ARB 0x2074
#define WGL_TEXTURE_RGB_ARB 0x2075
#define WGL_TEXTURE_RGBA_ARB 0x2076
#define WGL_NO_TEXTURE_ARB 0x2077
#define WGL_TEXTURE_CUBE_MAP_ARB 0x2078
#define WGL_TEXTURE_1D_ARB 0x2079
#define WGL_TEXTURE_2D_ARB 0x207A
#define WGL_MIPMAP_LEVEL_ARB 0x207B
#define WGL_CUBE_MAP_FACE_ARB 0x207C
#define WGL_TEXTURE_CUBE_MAP_POSITIVE_X_ARB 0x207D
#define WGL_TEXTURE_CUBE_MAP_NEGATIVE_X_ARB 0x207E
#define WGL_TEXTURE_CUBE_MAP_POSITIVE_Y_ARB 0x207F
#define WGL_TEXTURE_CUBE_MAP_NEGATIVE_Y_ARB 0x2080
#define WGL_TEXTURE_CUBE_MAP_POSITIVE_Z_ARB 0x2081
#define WGL_TEXTURE_CUBE_MAP_NEGATIVE_Z_ARB 0x2082
#define WGL_FRONT_LEFT_ARB 0x2083
#define WGL_FRONT_RIGHT_ARB 0x2084
#define WGL_BACK_LEFT_ARB 0x2085
#define WGL_BACK_RIGHT_ARB 0x2086
#define WGL_AUX0_ARB 0x2087
#define WGL_AUX1_ARB 0x2088
#define WGL_AUX2_ARB 0x2089
#define WGL_AUX3_ARB 0x208A
#define WGL_AUX4_ARB 0x208B
#define WGL_AUX5_ARB 0x208C
#define WGL_AUX6_ARB 0x208D
#define WGL_AUX7_ARB 0x208E
#define WGL_AUX8_ARB 0x208F
#define WGL_AUX9_ARB 0x2090

typedef signed int  (*wglBindTexImageARB_function)(HPBUFFERARB hPbuffer, signed int iBuffer);
wglBindTexImageARB_function wglBindTexImageARB;

typedef signed int  (*wglReleaseTexImageARB_function)(HPBUFFERARB hPbuffer, signed int iBuffer);
wglReleaseTexImageARB_function wglReleaseTexImageARB;

typedef signed int  (*wglSetPbufferAttribARB_function)(HPBUFFERARB hPbuffer, signed int *piAttribList);
wglSetPbufferAttribARB_function wglSetPbufferAttribARB;
#define WGL_ARB_robustness_application_isolation 1
#define WGL_CONTEXT_RESET_ISOLATION_BIT_ARB 0x00000008
#define WGL_ARB_robustness_share_group_isolation 1
#define WGL_3DFX_multisample 1
#define WGL_SAMPLE_BUFFERS_3DFX 0x2060
#define WGL_SAMPLES_3DFX 0x2061
#define WGL_3DL_stereo_control 1
#define WGL_STEREO_EMITTER_ENABLE_3DL 0x2055
#define WGL_STEREO_EMITTER_DISABLE_3DL 0x2056
#define WGL_STEREO_POLARITY_NORMAL_3DL 0x2057
#define WGL_STEREO_POLARITY_INVERT_3DL 0x2058

typedef signed int  (*wglSetStereoEmitterState3DL_function)(HDC hDC, unsigned int uState);
wglSetStereoEmitterState3DL_function wglSetStereoEmitterState3DL;
#define WGL_AMD_gpu_association 1
#define WGL_GPU_VENDOR_AMD 0x1F00
#define WGL_GPU_RENDERER_STRING_AMD 0x1F01
#define WGL_GPU_OPENGL_VERSION_STRING_AMD 0x1F02
#define WGL_GPU_FASTEST_TARGET_GPUS_AMD 0x21A2
#define WGL_GPU_RAM_AMD 0x21A3
#define WGL_GPU_CLOCK_AMD 0x21A4
#define WGL_GPU_NUM_PIPES_AMD 0x21A5
#define WGL_GPU_NUM_SIMD_AMD 0x21A6
#define WGL_GPU_NUM_RB_AMD 0x21A7
#define WGL_GPU_NUM_SPI_AMD 0x21A8

typedef unsigned int  (*wglGetGPUIDsAMD_function)(unsigned int maxCount, unsigned int *ids);
wglGetGPUIDsAMD_function wglGetGPUIDsAMD;

typedef signed int  (*wglGetGPUInfoAMD_function)(unsigned int id, signed int property, GLenum dataType, unsigned int size, void * data);
wglGetGPUInfoAMD_function wglGetGPUInfoAMD;

typedef unsigned int  (*wglGetContextGPUIDAMD_function)(HGLRC hglrc);
wglGetContextGPUIDAMD_function wglGetContextGPUIDAMD;

typedef HGLRC  (*wglCreateAssociatedContextAMD_function)(unsigned int id);
wglCreateAssociatedContextAMD_function wglCreateAssociatedContextAMD;

typedef HGLRC  (*wglCreateAssociatedContextAttribsAMD_function)(unsigned int id, HGLRC hShareContext, signed int *attribList);
wglCreateAssociatedContextAttribsAMD_function wglCreateAssociatedContextAttribsAMD;

typedef signed int  (*wglDeleteAssociatedContextAMD_function)(HGLRC hglrc);
wglDeleteAssociatedContextAMD_function wglDeleteAssociatedContextAMD;

typedef signed int  (*wglMakeAssociatedContextCurrentAMD_function)(HGLRC hglrc);
wglMakeAssociatedContextCurrentAMD_function wglMakeAssociatedContextCurrentAMD;

typedef HGLRC  (*wglGetCurrentAssociatedContextAMD_function)();
wglGetCurrentAssociatedContextAMD_function wglGetCurrentAssociatedContextAMD;

typedef void (*wglBlitContextFramebufferAMD_function)(HGLRC dstCtx, GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter);
wglBlitContextFramebufferAMD_function wglBlitContextFramebufferAMD;
#define WGL_ATI_pixel_format_float 1
#define WGL_TYPE_RGBA_FLOAT_ATI 0x21A0
#define WGL_ATI_render_texture_rectangle 1
#define WGL_TEXTURE_RECTANGLE_ATI 0x21A5
#define WGL_EXT_colorspace 1
#define WGL_COLORSPACE_EXT 0x309D
#define WGL_COLORSPACE_SRGB_EXT 0x3089
#define WGL_COLORSPACE_LINEAR_EXT 0x308A
#define WGL_EXT_create_context_es2_profile 1
#define WGL_CONTEXT_ES2_PROFILE_BIT_EXT 0x00000004
#define WGL_EXT_create_context_es_profile 1
#define WGL_CONTEXT_ES_PROFILE_BIT_EXT 0x00000004
#define WGL_EXT_depth_float 1
#define WGL_DEPTH_FLOAT_EXT 0x2040
#define WGL_EXT_display_color_table 1

typedef GLboolean  (*wglCreateDisplayColorTableEXT_function)(GLushort id);
wglCreateDisplayColorTableEXT_function wglCreateDisplayColorTableEXT;

typedef GLboolean  (*wglLoadDisplayColorTableEXT_function)(GLushort *table, GLuint length);
wglLoadDisplayColorTableEXT_function wglLoadDisplayColorTableEXT;

typedef GLboolean  (*wglBindDisplayColorTableEXT_function)(GLushort id);
wglBindDisplayColorTableEXT_function wglBindDisplayColorTableEXT;

typedef void (*wglDestroyDisplayColorTableEXT_function)(GLushort id);
wglDestroyDisplayColorTableEXT_function wglDestroyDisplayColorTableEXT;
#define WGL_EXT_extensions_string 1

typedef char * (*wglGetExtensionsStringEXT_function)();
wglGetExtensionsStringEXT_function wglGetExtensionsStringEXT;
#define WGL_EXT_framebuffer_sRGB 1
#define WGL_FRAMEBUFFER_SRGB_CAPABLE_EXT 0x20A9
#define WGL_EXT_make_current_read 1

typedef signed int  (*wglMakeContextCurrentEXT_function)(HDC hDrawDC, HDC hReadDC, HGLRC hglrc);
wglMakeContextCurrentEXT_function wglMakeContextCurrentEXT;

typedef HDC  (*wglGetCurrentReadDCEXT_function)();
wglGetCurrentReadDCEXT_function wglGetCurrentReadDCEXT;
#define WGL_EXT_multisample 1
#define WGL_SAMPLE_BUFFERS_EXT 0x2041
#define WGL_SAMPLES_EXT 0x2042
#define WGL_EXT_pbuffer 1
#define WGL_DRAW_TO_PBUFFER_EXT 0x202D
#define WGL_MAX_PBUFFER_PIXELS_EXT 0x202E
#define WGL_MAX_PBUFFER_WIDTH_EXT 0x202F
#define WGL_MAX_PBUFFER_HEIGHT_EXT 0x2030
#define WGL_OPTIMAL_PBUFFER_WIDTH_EXT 0x2031
#define WGL_OPTIMAL_PBUFFER_HEIGHT_EXT 0x2032
#define WGL_PBUFFER_LARGEST_EXT 0x2033
#define WGL_PBUFFER_WIDTH_EXT 0x2034
#define WGL_PBUFFER_HEIGHT_EXT 0x2035

typedef HPBUFFEREXT  (*wglCreatePbufferEXT_function)(HDC hDC, signed int iPixelFormat, signed int iWidth, signed int iHeight, signed int *piAttribList);
wglCreatePbufferEXT_function wglCreatePbufferEXT;

typedef HDC  (*wglGetPbufferDCEXT_function)(HPBUFFEREXT hPbuffer);
wglGetPbufferDCEXT_function wglGetPbufferDCEXT;

typedef signed int  (*wglReleasePbufferDCEXT_function)(HPBUFFEREXT hPbuffer, HDC hDC);
wglReleasePbufferDCEXT_function wglReleasePbufferDCEXT;

typedef signed int  (*wglDestroyPbufferEXT_function)(HPBUFFEREXT hPbuffer);
wglDestroyPbufferEXT_function wglDestroyPbufferEXT;

typedef signed int  (*wglQueryPbufferEXT_function)(HPBUFFEREXT hPbuffer, signed int iAttribute, signed int *piValue);
wglQueryPbufferEXT_function wglQueryPbufferEXT;
#define WGL_EXT_pixel_format 1
#define WGL_NUMBER_PIXEL_FORMATS_EXT 0x2000
#define WGL_DRAW_TO_WINDOW_EXT 0x2001
#define WGL_DRAW_TO_BITMAP_EXT 0x2002
#define WGL_ACCELERATION_EXT 0x2003
#define WGL_NEED_PALETTE_EXT 0x2004
#define WGL_NEED_SYSTEM_PALETTE_EXT 0x2005
#define WGL_SWAP_LAYER_BUFFERS_EXT 0x2006
#define WGL_SWAP_METHOD_EXT 0x2007
#define WGL_NUMBER_OVERLAYS_EXT 0x2008
#define WGL_NUMBER_UNDERLAYS_EXT 0x2009
#define WGL_TRANSPARENT_EXT 0x200A
#define WGL_TRANSPARENT_VALUE_EXT 0x200B
#define WGL_SHARE_DEPTH_EXT 0x200C
#define WGL_SHARE_STENCIL_EXT 0x200D
#define WGL_SHARE_ACCUM_EXT 0x200E
#define WGL_SUPPORT_GDI_EXT 0x200F
#define WGL_SUPPORT_OPENGL_EXT 0x2010
#define WGL_DOUBLE_BUFFER_EXT 0x2011
#define WGL_STEREO_EXT 0x2012
#define WGL_PIXEL_TYPE_EXT 0x2013
#define WGL_COLOR_BITS_EXT 0x2014
#define WGL_RED_BITS_EXT 0x2015
#define WGL_RED_SHIFT_EXT 0x2016
#define WGL_GREEN_BITS_EXT 0x2017
#define WGL_GREEN_SHIFT_EXT 0x2018
#define WGL_BLUE_BITS_EXT 0x2019
#define WGL_BLUE_SHIFT_EXT 0x201A
#define WGL_ALPHA_BITS_EXT 0x201B
#define WGL_ALPHA_SHIFT_EXT 0x201C
#define WGL_ACCUM_BITS_EXT 0x201D
#define WGL_ACCUM_RED_BITS_EXT 0x201E
#define WGL_ACCUM_GREEN_BITS_EXT 0x201F
#define WGL_ACCUM_BLUE_BITS_EXT 0x2020
#define WGL_ACCUM_ALPHA_BITS_EXT 0x2021
#define WGL_DEPTH_BITS_EXT 0x2022
#define WGL_STENCIL_BITS_EXT 0x2023
#define WGL_AUX_BUFFERS_EXT 0x2024
#define WGL_NO_ACCELERATION_EXT 0x2025
#define WGL_GENERIC_ACCELERATION_EXT 0x2026
#define WGL_FULL_ACCELERATION_EXT 0x2027
#define WGL_SWAP_EXCHANGE_EXT 0x2028
#define WGL_SWAP_COPY_EXT 0x2029
#define WGL_SWAP_UNDEFINED_EXT 0x202A
#define WGL_TYPE_RGBA_EXT 0x202B
#define WGL_TYPE_COLORINDEX_EXT 0x202C

typedef signed int  (*wglGetPixelFormatAttribivEXT_function)(HDC hdc, signed int iPixelFormat, signed int iLayerPlane, unsigned int nAttributes, signed int *piAttributes, signed int *piValues);
wglGetPixelFormatAttribivEXT_function wglGetPixelFormatAttribivEXT;

typedef signed int  (*wglGetPixelFormatAttribfvEXT_function)(HDC hdc, signed int iPixelFormat, signed int iLayerPlane, unsigned int nAttributes, signed int *piAttributes, float *pfValues);
wglGetPixelFormatAttribfvEXT_function wglGetPixelFormatAttribfvEXT;

typedef signed int  (*wglChoosePixelFormatEXT_function)(HDC hdc, signed int *piAttribIList, float *pfAttribFList, unsigned int nMaxFormats, signed int *piFormats, unsigned int *nNumFormats);
wglChoosePixelFormatEXT_function wglChoosePixelFormatEXT;
#define WGL_EXT_pixel_format_packed_float 1
#define WGL_TYPE_RGBA_UNSIGNED_FLOAT_EXT 0x20A8
#define WGL_EXT_swap_control 1

typedef signed int  (*wglSwapIntervalEXT_function)(signed int interval);
wglSwapIntervalEXT_function wglSwapIntervalEXT;

typedef signed int  (*wglGetSwapIntervalEXT_function)();
wglGetSwapIntervalEXT_function wglGetSwapIntervalEXT;
#define WGL_EXT_swap_control_tear 1
#define WGL_I3D_digital_video_control 1
#define WGL_DIGITAL_VIDEO_CURSOR_ALPHA_FRAMEBUFFER_I3D 0x2050
#define WGL_DIGITAL_VIDEO_CURSOR_ALPHA_VALUE_I3D 0x2051
#define WGL_DIGITAL_VIDEO_CURSOR_INCLUDED_I3D 0x2052
#define WGL_DIGITAL_VIDEO_GAMMA_CORRECTED_I3D 0x2053

typedef signed int  (*wglGetDigitalVideoParametersI3D_function)(HDC hDC, signed int iAttribute, signed int *piValue);
wglGetDigitalVideoParametersI3D_function wglGetDigitalVideoParametersI3D;

typedef signed int  (*wglSetDigitalVideoParametersI3D_function)(HDC hDC, signed int iAttribute, signed int *piValue);
wglSetDigitalVideoParametersI3D_function wglSetDigitalVideoParametersI3D;
#define WGL_I3D_gamma 1
#define WGL_GAMMA_TABLE_SIZE_I3D 0x204E
#define WGL_GAMMA_EXCLUDE_DESKTOP_I3D 0x204F

typedef signed int  (*wglGetGammaTableParametersI3D_function)(HDC hDC, signed int iAttribute, signed int *piValue);
wglGetGammaTableParametersI3D_function wglGetGammaTableParametersI3D;

typedef signed int  (*wglSetGammaTableParametersI3D_function)(HDC hDC, signed int iAttribute, signed int *piValue);
wglSetGammaTableParametersI3D_function wglSetGammaTableParametersI3D;

typedef signed int  (*wglGetGammaTableI3D_function)(HDC hDC, signed int iEntries, unsigned short *puRed, unsigned short *puGreen, unsigned short *puBlue);
wglGetGammaTableI3D_function wglGetGammaTableI3D;

typedef signed int  (*wglSetGammaTableI3D_function)(HDC hDC, signed int iEntries, unsigned short *puRed, unsigned short *puGreen, unsigned short *puBlue);
wglSetGammaTableI3D_function wglSetGammaTableI3D;
#define WGL_I3D_genlock 1
#define WGL_GENLOCK_SOURCE_MULTIVIEW_I3D 0x2044
#define WGL_GENLOCK_SOURCE_EXTERNAL_SYNC_I3D 0x2045
#define WGL_GENLOCK_SOURCE_EXTERNAL_FIELD_I3D 0x2046
#define WGL_GENLOCK_SOURCE_EXTERNAL_TTL_I3D 0x2047
#define WGL_GENLOCK_SOURCE_DIGITAL_SYNC_I3D 0x2048
#define WGL_GENLOCK_SOURCE_DIGITAL_FIELD_I3D 0x2049
#define WGL_GENLOCK_SOURCE_EDGE_FALLING_I3D 0x204A
#define WGL_GENLOCK_SOURCE_EDGE_RISING_I3D 0x204B
#define WGL_GENLOCK_SOURCE_EDGE_BOTH_I3D 0x204C

typedef signed int  (*wglEnableGenlockI3D_function)(HDC hDC);
wglEnableGenlockI3D_function wglEnableGenlockI3D;

typedef signed int  (*wglDisableGenlockI3D_function)(HDC hDC);
wglDisableGenlockI3D_function wglDisableGenlockI3D;

typedef signed int  (*wglIsEnabledGenlockI3D_function)(HDC hDC, signed int *pFlag);
wglIsEnabledGenlockI3D_function wglIsEnabledGenlockI3D;

typedef signed int  (*wglGenlockSourceI3D_function)(HDC hDC, unsigned int uSource);
wglGenlockSourceI3D_function wglGenlockSourceI3D;

typedef signed int  (*wglGetGenlockSourceI3D_function)(HDC hDC, unsigned int *uSource);
wglGetGenlockSourceI3D_function wglGetGenlockSourceI3D;

typedef signed int  (*wglGenlockSourceEdgeI3D_function)(HDC hDC, unsigned int uEdge);
wglGenlockSourceEdgeI3D_function wglGenlockSourceEdgeI3D;

typedef signed int  (*wglGetGenlockSourceEdgeI3D_function)(HDC hDC, unsigned int *uEdge);
wglGetGenlockSourceEdgeI3D_function wglGetGenlockSourceEdgeI3D;

typedef signed int  (*wglGenlockSampleRateI3D_function)(HDC hDC, unsigned int uRate);
wglGenlockSampleRateI3D_function wglGenlockSampleRateI3D;

typedef signed int  (*wglGetGenlockSampleRateI3D_function)(HDC hDC, unsigned int *uRate);
wglGetGenlockSampleRateI3D_function wglGetGenlockSampleRateI3D;

typedef signed int  (*wglGenlockSourceDelayI3D_function)(HDC hDC, unsigned int uDelay);
wglGenlockSourceDelayI3D_function wglGenlockSourceDelayI3D;

typedef signed int  (*wglGetGenlockSourceDelayI3D_function)(HDC hDC, unsigned int *uDelay);
wglGetGenlockSourceDelayI3D_function wglGetGenlockSourceDelayI3D;

typedef signed int  (*wglQueryGenlockMaxSourceDelayI3D_function)(HDC hDC, unsigned int *uMaxLineDelay, unsigned int *uMaxPixelDelay);
wglQueryGenlockMaxSourceDelayI3D_function wglQueryGenlockMaxSourceDelayI3D;
#define WGL_I3D_image_buffer 1
#define WGL_IMAGE_BUFFER_MIN_ACCESS_I3D 0x00000001
#define WGL_IMAGE_BUFFER_LOCK_I3D 0x00000002

typedef void *  (*wglCreateImageBufferI3D_function)(HDC hDC, unsigned int dwSize, unsigned int uFlags);
wglCreateImageBufferI3D_function wglCreateImageBufferI3D;

typedef signed int  (*wglDestroyImageBufferI3D_function)(HDC hDC, void * pAddress);
wglDestroyImageBufferI3D_function wglDestroyImageBufferI3D;

typedef signed int  (*wglAssociateImageBufferEventsI3D_function)(HDC hDC, HANDLE *pEvent, void * *pAddress, unsigned int *pSize, unsigned int count);
wglAssociateImageBufferEventsI3D_function wglAssociateImageBufferEventsI3D;

typedef signed int  (*wglReleaseImageBufferEventsI3D_function)(HDC hDC, void * *pAddress, unsigned int count);
wglReleaseImageBufferEventsI3D_function wglReleaseImageBufferEventsI3D;
#define WGL_I3D_swap_frame_lock 1

typedef signed int  (*wglEnableFrameLockI3D_function)();
wglEnableFrameLockI3D_function wglEnableFrameLockI3D;

typedef signed int  (*wglDisableFrameLockI3D_function)();
wglDisableFrameLockI3D_function wglDisableFrameLockI3D;

typedef signed int  (*wglIsEnabledFrameLockI3D_function)(signed int *pFlag);
wglIsEnabledFrameLockI3D_function wglIsEnabledFrameLockI3D;

typedef signed int  (*wglQueryFrameLockMasterI3D_function)(signed int *pFlag);
wglQueryFrameLockMasterI3D_function wglQueryFrameLockMasterI3D;
#define WGL_I3D_swap_frame_usage 1

typedef signed int  (*wglGetFrameUsageI3D_function)(float *pUsage);
wglGetFrameUsageI3D_function wglGetFrameUsageI3D;

typedef signed int  (*wglBeginFrameTrackingI3D_function)();
wglBeginFrameTrackingI3D_function wglBeginFrameTrackingI3D;

typedef signed int  (*wglEndFrameTrackingI3D_function)();
wglEndFrameTrackingI3D_function wglEndFrameTrackingI3D;

typedef signed int  (*wglQueryFrameTrackingI3D_function)(unsigned int *pFrameCount, unsigned int *pMissedFrames, float *pLastMissedUsage);
wglQueryFrameTrackingI3D_function wglQueryFrameTrackingI3D;
#define WGL_NV_DX_interop 1
#define WGL_ACCESS_READ_ONLY_NV 0x00000000
#define WGL_ACCESS_READ_WRITE_NV 0x00000001
#define WGL_ACCESS_WRITE_DISCARD_NV 0x00000002

typedef signed int  (*wglDXSetResourceShareHandleNV_function)(void * dxObject, HANDLE shareHandle);
wglDXSetResourceShareHandleNV_function wglDXSetResourceShareHandleNV;

typedef HANDLE  (*wglDXOpenDeviceNV_function)(void * dxDevice);
wglDXOpenDeviceNV_function wglDXOpenDeviceNV;

typedef signed int  (*wglDXCloseDeviceNV_function)(HANDLE hDevice);
wglDXCloseDeviceNV_function wglDXCloseDeviceNV;

typedef HANDLE  (*wglDXRegisterObjectNV_function)(HANDLE hDevice, void * dxObject, GLuint name, GLenum type, GLenum access);
wglDXRegisterObjectNV_function wglDXRegisterObjectNV;

typedef signed int  (*wglDXUnregisterObjectNV_function)(HANDLE hDevice, HANDLE hObject);
wglDXUnregisterObjectNV_function wglDXUnregisterObjectNV;

typedef signed int  (*wglDXObjectAccessNV_function)(HANDLE hObject, GLenum access);
wglDXObjectAccessNV_function wglDXObjectAccessNV;

typedef signed int  (*wglDXLockObjectsNV_function)(HANDLE hDevice, GLint count, HANDLE *hObjects);
wglDXLockObjectsNV_function wglDXLockObjectsNV;

typedef signed int  (*wglDXUnlockObjectsNV_function)(HANDLE hDevice, GLint count, HANDLE *hObjects);
wglDXUnlockObjectsNV_function wglDXUnlockObjectsNV;
#define WGL_NV_DX_interop2 1
#define WGL_NV_copy_image 1

typedef signed int  (*wglCopyImageSubDataNV_function)(HGLRC hSrcRC, GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, HGLRC hDstRC, GLuint dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei width, GLsizei height, GLsizei depth);
wglCopyImageSubDataNV_function wglCopyImageSubDataNV;
#define WGL_NV_delay_before_swap 1

typedef signed int  (*wglDelayBeforeSwapNV_function)(HDC hDC, GLfloat seconds);
wglDelayBeforeSwapNV_function wglDelayBeforeSwapNV;
#define WGL_NV_float_buffer 1
#define WGL_FLOAT_COMPONENTS_NV 0x20B0
#define WGL_BIND_TO_TEXTURE_RECTANGLE_FLOAT_R_NV 0x20B1
#define WGL_BIND_TO_TEXTURE_RECTANGLE_FLOAT_RG_NV 0x20B2
#define WGL_BIND_TO_TEXTURE_RECTANGLE_FLOAT_RGB_NV 0x20B3
#define WGL_BIND_TO_TEXTURE_RECTANGLE_FLOAT_RGBA_NV 0x20B4
#define WGL_TEXTURE_FLOAT_R_NV 0x20B5
#define WGL_TEXTURE_FLOAT_RG_NV 0x20B6
#define WGL_TEXTURE_FLOAT_RGB_NV 0x20B7
#define WGL_TEXTURE_FLOAT_RGBA_NV 0x20B8
#define WGL_NV_gpu_affinity 1

typedef signed int  (*wglEnumGpusNV_function)(unsigned int iGpuIndex, HGPUNV *phGpu);
wglEnumGpusNV_function wglEnumGpusNV;

typedef signed int  (*wglEnumGpuDevicesNV_function)(HGPUNV hGpu, unsigned int iDeviceIndex, PGPU_DEVICE lpGpuDevice);
wglEnumGpuDevicesNV_function wglEnumGpuDevicesNV;

typedef HDC  (*wglCreateAffinityDCNV_function)(HGPUNV *phGpuList);
wglCreateAffinityDCNV_function wglCreateAffinityDCNV;

typedef signed int  (*wglEnumGpusFromAffinityDCNV_function)(HDC hAffinityDC, unsigned int iGpuIndex, HGPUNV *hGpu);
wglEnumGpusFromAffinityDCNV_function wglEnumGpusFromAffinityDCNV;

typedef signed int  (*wglDeleteDCNV_function)(HDC hdc);
wglDeleteDCNV_function wglDeleteDCNV;
#define WGL_NV_multigpu_context 1
#define WGL_CONTEXT_MULTIGPU_ATTRIB_NV 0x20AA
#define WGL_CONTEXT_MULTIGPU_ATTRIB_SINGLE_NV 0x20AB
#define WGL_CONTEXT_MULTIGPU_ATTRIB_AFR_NV 0x20AC
#define WGL_CONTEXT_MULTIGPU_ATTRIB_MULTICAST_NV 0x20AD
#define WGL_CONTEXT_MULTIGPU_ATTRIB_MULTI_DISPLAY_MULTICAST_NV 0x20AE
#define WGL_NV_multisample_coverage 1
#define WGL_COVERAGE_SAMPLES_NV 0x2042
#define WGL_COLOR_SAMPLES_NV 0x20B9
#define WGL_NV_present_video 1
#define WGL_NUM_VIDEO_SLOTS_NV 0x20F0

typedef signed int  (*wglEnumerateVideoDevicesNV_function)(HDC hDc, HVIDEOOUTPUTDEVICENV *phDeviceList);
wglEnumerateVideoDevicesNV_function wglEnumerateVideoDevicesNV;

typedef signed int  (*wglBindVideoDeviceNV_function)(HDC hDc, unsigned int uVideoSlot, HVIDEOOUTPUTDEVICENV hVideoDevice, signed int *piAttribList);
wglBindVideoDeviceNV_function wglBindVideoDeviceNV;

typedef signed int  (*wglQueryCurrentContextNV_function)(signed int iAttribute, signed int *piValue);
wglQueryCurrentContextNV_function wglQueryCurrentContextNV;
#define WGL_NV_render_depth_texture 1
#define WGL_BIND_TO_TEXTURE_DEPTH_NV 0x20A3
#define WGL_BIND_TO_TEXTURE_RECTANGLE_DEPTH_NV 0x20A4
#define WGL_DEPTH_TEXTURE_FORMAT_NV 0x20A5
#define WGL_TEXTURE_DEPTH_COMPONENT_NV 0x20A6
#define WGL_DEPTH_COMPONENT_NV 0x20A7
#define WGL_NV_render_texture_rectangle 1
#define WGL_BIND_TO_TEXTURE_RECTANGLE_RGB_NV 0x20A0
#define WGL_BIND_TO_TEXTURE_RECTANGLE_RGBA_NV 0x20A1
#define WGL_TEXTURE_RECTANGLE_NV 0x20A2
#define WGL_NV_swap_group 1

typedef signed int  (*wglJoinSwapGroupNV_function)(HDC hDC, GLuint group);
wglJoinSwapGroupNV_function wglJoinSwapGroupNV;

typedef signed int  (*wglBindSwapBarrierNV_function)(GLuint group, GLuint barrier);
wglBindSwapBarrierNV_function wglBindSwapBarrierNV;

typedef signed int  (*wglQuerySwapGroupNV_function)(HDC hDC, GLuint *group, GLuint *barrier);
wglQuerySwapGroupNV_function wglQuerySwapGroupNV;

typedef signed int  (*wglQueryMaxSwapGroupsNV_function)(HDC hDC, GLuint *maxGroups, GLuint *maxBarriers);
wglQueryMaxSwapGroupsNV_function wglQueryMaxSwapGroupsNV;

typedef signed int  (*wglQueryFrameCountNV_function)(HDC hDC, GLuint *count);
wglQueryFrameCountNV_function wglQueryFrameCountNV;

typedef signed int  (*wglResetFrameCountNV_function)(HDC hDC);
wglResetFrameCountNV_function wglResetFrameCountNV;
#define WGL_NV_vertex_array_range 1

typedef void *  (*wglAllocateMemoryNV_function)(GLsizei size, GLfloat readfreq, GLfloat writefreq, GLfloat priority);
wglAllocateMemoryNV_function wglAllocateMemoryNV;

typedef void (*wglFreeMemoryNV_function)(void * pointer);
wglFreeMemoryNV_function wglFreeMemoryNV;
#define WGL_NV_video_capture 1
#define WGL_UNIQUE_ID_NV 0x20CE
#define WGL_NUM_VIDEO_CAPTURE_SLOTS_NV 0x20CF

typedef signed int  (*wglBindVideoCaptureDeviceNV_function)(unsigned int uVideoSlot, HVIDEOINPUTDEVICENV hDevice);
wglBindVideoCaptureDeviceNV_function wglBindVideoCaptureDeviceNV;

typedef unsigned int  (*wglEnumerateVideoCaptureDevicesNV_function)(HDC hDc, HVIDEOINPUTDEVICENV *phDeviceList);
wglEnumerateVideoCaptureDevicesNV_function wglEnumerateVideoCaptureDevicesNV;

typedef signed int  (*wglLockVideoCaptureDeviceNV_function)(HDC hDc, HVIDEOINPUTDEVICENV hDevice);
wglLockVideoCaptureDeviceNV_function wglLockVideoCaptureDeviceNV;

typedef signed int  (*wglQueryVideoCaptureDeviceNV_function)(HDC hDc, HVIDEOINPUTDEVICENV hDevice, signed int iAttribute, signed int *piValue);
wglQueryVideoCaptureDeviceNV_function wglQueryVideoCaptureDeviceNV;

typedef signed int  (*wglReleaseVideoCaptureDeviceNV_function)(HDC hDc, HVIDEOINPUTDEVICENV hDevice);
wglReleaseVideoCaptureDeviceNV_function wglReleaseVideoCaptureDeviceNV;
#define WGL_NV_video_output 1
#define WGL_BIND_TO_VIDEO_RGB_NV 0x20C0
#define WGL_BIND_TO_VIDEO_RGBA_NV 0x20C1
#define WGL_BIND_TO_VIDEO_RGB_AND_DEPTH_NV 0x20C2
#define WGL_VIDEO_OUT_COLOR_NV 0x20C3
#define WGL_VIDEO_OUT_ALPHA_NV 0x20C4
#define WGL_VIDEO_OUT_DEPTH_NV 0x20C5
#define WGL_VIDEO_OUT_COLOR_AND_ALPHA_NV 0x20C6
#define WGL_VIDEO_OUT_COLOR_AND_DEPTH_NV 0x20C7
#define WGL_VIDEO_OUT_FRAME 0x20C8
#define WGL_VIDEO_OUT_FIELD_1 0x20C9
#define WGL_VIDEO_OUT_FIELD_2 0x20CA
#define WGL_VIDEO_OUT_STACKED_FIELDS_1_2 0x20CB
#define WGL_VIDEO_OUT_STACKED_FIELDS_2_1 0x20CC

typedef signed int  (*wglGetVideoDeviceNV_function)(HDC hDC, signed int numDevices, HPVIDEODEV *hVideoDevice);
wglGetVideoDeviceNV_function wglGetVideoDeviceNV;

typedef signed int  (*wglReleaseVideoDeviceNV_function)(HPVIDEODEV hVideoDevice);
wglReleaseVideoDeviceNV_function wglReleaseVideoDeviceNV;

typedef signed int  (*wglBindVideoImageNV_function)(HPVIDEODEV hVideoDevice, HPBUFFERARB hPbuffer, signed int iVideoBuffer);
wglBindVideoImageNV_function wglBindVideoImageNV;

typedef signed int  (*wglReleaseVideoImageNV_function)(HPBUFFERARB hPbuffer, signed int iVideoBuffer);
wglReleaseVideoImageNV_function wglReleaseVideoImageNV;

typedef signed int  (*wglSendPbufferToVideoNV_function)(HPBUFFERARB hPbuffer, signed int iBufferType, unsigned int *pulCounterPbuffer, signed int bBlock);
wglSendPbufferToVideoNV_function wglSendPbufferToVideoNV;

typedef signed int  (*wglGetVideoInfoNV_function)(HPVIDEODEV hpVideoDevice, unsigned int *pulCounterOutputPbuffer, unsigned int *pulCounterOutputVideo);
wglGetVideoInfoNV_function wglGetVideoInfoNV;
#define WGL_OML_sync_control 1

typedef signed int  (*wglGetSyncValuesOML_function)(HDC hdc, signed long long *ust, signed long long *msc, signed long long *sbc);
wglGetSyncValuesOML_function wglGetSyncValuesOML;

typedef signed int  (*wglGetMscRateOML_function)(HDC hdc, signed int *numerator, signed int *denominator);
wglGetMscRateOML_function wglGetMscRateOML;

typedef signed long long  (*wglSwapBuffersMscOML_function)(HDC hdc, signed long long target_msc, signed long long divisor, signed long long remainder);
wglSwapBuffersMscOML_function wglSwapBuffersMscOML;

typedef signed long long  (*wglSwapLayerBuffersMscOML_function)(HDC hdc, signed int fuPlanes, signed long long target_msc, signed long long divisor, signed long long remainder);
wglSwapLayerBuffersMscOML_function wglSwapLayerBuffersMscOML;

typedef signed int  (*wglWaitForMscOML_function)(HDC hdc, signed long long target_msc, signed long long divisor, signed long long remainder, signed long long *ust, signed long long *msc, signed long long *sbc);
wglWaitForMscOML_function wglWaitForMscOML;

typedef signed int  (*wglWaitForSbcOML_function)(HDC hdc, signed long long target_sbc, signed long long *ust, signed long long *msc, signed long long *sbc);
wglWaitForSbcOML_function wglWaitForSbcOML;
#ifdef __cplusplus
}
#endif


#endif
