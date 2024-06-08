#if !defined mo_gl_win32_bindings_h
#define mo_gl_win32_bindings_h

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
typedef void * HANDLE;
typedef void * HGLRC;

char * wglGetProcAddress(signed intname);
HGLRC wglCreateContext(HDC device_context);
signed int wglDeleteContext(HGLRC gl_context);
signed char wglMakeCurrent(HDC device_context, HGLRC gl_context);
#endif#define WGL_WGLEXT_VERSION 20230705
#define WGL_ARB_buffer_region 1
#define WGL_FRONT_COLOR_BUFFER_BIT_ARB 0x00000001
#define WGL_BACK_COLOR_BUFFER_BIT_ARB 0x00000002
#define WGL_DEPTH_BUFFER_BIT_ARB 0x00000004
#define WGL_STENCIL_BUFFER_BIT_ARB 0x00000008

typedef HANDLE  (*mogl_function_wglCreateBufferRegionARB)(HDC hDC, signed int iLayerPlane, unsigned int uType);
mogl_function_wglCreateBufferRegionARB wglCreateBufferRegionARB;

typedef void (*mogl_function_wglDeleteBufferRegionARB)(HANDLE hRegion);
mogl_function_wglDeleteBufferRegionARB wglDeleteBufferRegionARB;

typedef signed int  (*mogl_function_wglSaveBufferRegionARB)(HANDLE hRegion, signed int x, signed int y, signed int width, signed int height);
mogl_function_wglSaveBufferRegionARB wglSaveBufferRegionARB;

typedef signed int  (*mogl_function_wglRestoreBufferRegionARB)(HANDLE hRegion, signed int x, signed int y, signed int width, signed int height, signed int xSrc, signed int ySrc);
mogl_function_wglRestoreBufferRegionARB wglRestoreBufferRegionARB;
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

typedef HGLRC  (*mogl_function_wglCreateContextAttribsARB)(HDC hDC, HGLRC hShareContext, signed int *attribList);
mogl_function_wglCreateContextAttribsARB wglCreateContextAttribsARB;
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

typedef char * (*mogl_function_wglGetExtensionsStringARB)(HDC hdc);
mogl_function_wglGetExtensionsStringARB wglGetExtensionsStringARB;
#define WGL_ARB_framebuffer_sRGB 1
#define WGL_FRAMEBUFFER_SRGB_CAPABLE_ARB 0x20A9
#define WGL_ARB_make_current_read 1

typedef signed int  (*mogl_function_wglMakeContextCurrentARB)(HDC hDrawDC, HDC hReadDC, HGLRC hglrc);
mogl_function_wglMakeContextCurrentARB wglMakeContextCurrentARB;

typedef HDC  (*mogl_function_wglGetCurrentReadDCARB)();
mogl_function_wglGetCurrentReadDCARB wglGetCurrentReadDCARB;
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

typedef HPBUFFERARB  (*mogl_function_wglCreatePbufferARB)(HDC hDC, signed int iPixelFormat, signed int iWidth, signed int iHeight, signed int *piAttribList);
mogl_function_wglCreatePbufferARB wglCreatePbufferARB;

typedef HDC  (*mogl_function_wglGetPbufferDCARB)(HPBUFFERARB hPbuffer);
mogl_function_wglGetPbufferDCARB wglGetPbufferDCARB;

typedef signed int  (*mogl_function_wglReleasePbufferDCARB)(HPBUFFERARB hPbuffer, HDC hDC);
mogl_function_wglReleasePbufferDCARB wglReleasePbufferDCARB;

typedef signed int  (*mogl_function_wglDestroyPbufferARB)(HPBUFFERARB hPbuffer);
mogl_function_wglDestroyPbufferARB wglDestroyPbufferARB;

typedef signed int  (*mogl_function_wglQueryPbufferARB)(HPBUFFERARB hPbuffer, signed int iAttribute, signed int *piValue);
mogl_function_wglQueryPbufferARB wglQueryPbufferARB;
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

typedef signed int  (*mogl_function_wglGetPixelFormatAttribivARB)(HDC hdc, signed int iPixelFormat, signed int iLayerPlane, unsigned int nAttributes, signed int *piAttributes, signed int *piValues);
mogl_function_wglGetPixelFormatAttribivARB wglGetPixelFormatAttribivARB;

typedef signed int  (*mogl_function_wglGetPixelFormatAttribfvARB)(HDC hdc, signed int iPixelFormat, signed int iLayerPlane, unsigned int nAttributes, signed int *piAttributes, float *pfValues);
mogl_function_wglGetPixelFormatAttribfvARB wglGetPixelFormatAttribfvARB;

typedef signed int  (*mogl_function_wglChoosePixelFormatARB)(HDC hdc, signed int *piAttribIList, float *pfAttribFList, unsigned int nMaxFormats, signed int *piFormats, unsigned int *nNumFormats);
mogl_function_wglChoosePixelFormatARB wglChoosePixelFormatARB;
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

typedef signed int  (*mogl_function_wglBindTexImageARB)(HPBUFFERARB hPbuffer, signed int iBuffer);
mogl_function_wglBindTexImageARB wglBindTexImageARB;

typedef signed int  (*mogl_function_wglReleaseTexImageARB)(HPBUFFERARB hPbuffer, signed int iBuffer);
mogl_function_wglReleaseTexImageARB wglReleaseTexImageARB;

typedef signed int  (*mogl_function_wglSetPbufferAttribARB)(HPBUFFERARB hPbuffer, signed int *piAttribList);
mogl_function_wglSetPbufferAttribARB wglSetPbufferAttribARB;
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

typedef signed int  (*mogl_function_wglSetStereoEmitterState3DL)(HDC hDC, unsigned int uState);
mogl_function_wglSetStereoEmitterState3DL wglSetStereoEmitterState3DL;
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

typedef unsigned int  (*mogl_function_wglGetGPUIDsAMD)(unsigned int maxCount, unsigned int *ids);
mogl_function_wglGetGPUIDsAMD wglGetGPUIDsAMD;

typedef signed int  (*mogl_function_wglGetGPUInfoAMD)(unsigned int id, signed int property, GLenum dataType, unsigned int size, void * data);
mogl_function_wglGetGPUInfoAMD wglGetGPUInfoAMD;

typedef unsigned int  (*mogl_function_wglGetContextGPUIDAMD)(HGLRC hglrc);
mogl_function_wglGetContextGPUIDAMD wglGetContextGPUIDAMD;

typedef HGLRC  (*mogl_function_wglCreateAssociatedContextAMD)(unsigned int id);
mogl_function_wglCreateAssociatedContextAMD wglCreateAssociatedContextAMD;

typedef HGLRC  (*mogl_function_wglCreateAssociatedContextAttribsAMD)(unsigned int id, HGLRC hShareContext, signed int *attribList);
mogl_function_wglCreateAssociatedContextAttribsAMD wglCreateAssociatedContextAttribsAMD;

typedef signed int  (*mogl_function_wglDeleteAssociatedContextAMD)(HGLRC hglrc);
mogl_function_wglDeleteAssociatedContextAMD wglDeleteAssociatedContextAMD;

typedef signed int  (*mogl_function_wglMakeAssociatedContextCurrentAMD)(HGLRC hglrc);
mogl_function_wglMakeAssociatedContextCurrentAMD wglMakeAssociatedContextCurrentAMD;

typedef HGLRC  (*mogl_function_wglGetCurrentAssociatedContextAMD)();
mogl_function_wglGetCurrentAssociatedContextAMD wglGetCurrentAssociatedContextAMD;

typedef void (*mogl_function_wglBlitContextFramebufferAMD)(HGLRC dstCtx, GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter);
mogl_function_wglBlitContextFramebufferAMD wglBlitContextFramebufferAMD;
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

typedef GLboolean  (*mogl_function_wglCreateDisplayColorTableEXT)(GLushort id);
mogl_function_wglCreateDisplayColorTableEXT wglCreateDisplayColorTableEXT;

typedef GLboolean  (*mogl_function_wglLoadDisplayColorTableEXT)(GLushort *table, GLuint length);
mogl_function_wglLoadDisplayColorTableEXT wglLoadDisplayColorTableEXT;

typedef GLboolean  (*mogl_function_wglBindDisplayColorTableEXT)(GLushort id);
mogl_function_wglBindDisplayColorTableEXT wglBindDisplayColorTableEXT;

typedef void (*mogl_function_wglDestroyDisplayColorTableEXT)(GLushort id);
mogl_function_wglDestroyDisplayColorTableEXT wglDestroyDisplayColorTableEXT;
#define WGL_EXT_extensions_string 1

typedef char * (*mogl_function_wglGetExtensionsStringEXT)();
mogl_function_wglGetExtensionsStringEXT wglGetExtensionsStringEXT;
#define WGL_EXT_framebuffer_sRGB 1
#define WGL_FRAMEBUFFER_SRGB_CAPABLE_EXT 0x20A9
#define WGL_EXT_make_current_read 1

typedef signed int  (*mogl_function_wglMakeContextCurrentEXT)(HDC hDrawDC, HDC hReadDC, HGLRC hglrc);
mogl_function_wglMakeContextCurrentEXT wglMakeContextCurrentEXT;

typedef HDC  (*mogl_function_wglGetCurrentReadDCEXT)();
mogl_function_wglGetCurrentReadDCEXT wglGetCurrentReadDCEXT;
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

typedef HPBUFFEREXT  (*mogl_function_wglCreatePbufferEXT)(HDC hDC, signed int iPixelFormat, signed int iWidth, signed int iHeight, signed int *piAttribList);
mogl_function_wglCreatePbufferEXT wglCreatePbufferEXT;

typedef HDC  (*mogl_function_wglGetPbufferDCEXT)(HPBUFFEREXT hPbuffer);
mogl_function_wglGetPbufferDCEXT wglGetPbufferDCEXT;

typedef signed int  (*mogl_function_wglReleasePbufferDCEXT)(HPBUFFEREXT hPbuffer, HDC hDC);
mogl_function_wglReleasePbufferDCEXT wglReleasePbufferDCEXT;

typedef signed int  (*mogl_function_wglDestroyPbufferEXT)(HPBUFFEREXT hPbuffer);
mogl_function_wglDestroyPbufferEXT wglDestroyPbufferEXT;

typedef signed int  (*mogl_function_wglQueryPbufferEXT)(HPBUFFEREXT hPbuffer, signed int iAttribute, signed int *piValue);
mogl_function_wglQueryPbufferEXT wglQueryPbufferEXT;
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

typedef signed int  (*mogl_function_wglGetPixelFormatAttribivEXT)(HDC hdc, signed int iPixelFormat, signed int iLayerPlane, unsigned int nAttributes, signed int *piAttributes, signed int *piValues);
mogl_function_wglGetPixelFormatAttribivEXT wglGetPixelFormatAttribivEXT;

typedef signed int  (*mogl_function_wglGetPixelFormatAttribfvEXT)(HDC hdc, signed int iPixelFormat, signed int iLayerPlane, unsigned int nAttributes, signed int *piAttributes, float *pfValues);
mogl_function_wglGetPixelFormatAttribfvEXT wglGetPixelFormatAttribfvEXT;

typedef signed int  (*mogl_function_wglChoosePixelFormatEXT)(HDC hdc, signed int *piAttribIList, float *pfAttribFList, unsigned int nMaxFormats, signed int *piFormats, unsigned int *nNumFormats);
mogl_function_wglChoosePixelFormatEXT wglChoosePixelFormatEXT;
#define WGL_EXT_pixel_format_packed_float 1
#define WGL_TYPE_RGBA_UNSIGNED_FLOAT_EXT 0x20A8
#define WGL_EXT_swap_control 1

typedef signed int  (*mogl_function_wglSwapIntervalEXT)(signed int interval);
mogl_function_wglSwapIntervalEXT wglSwapIntervalEXT;

typedef signed int  (*mogl_function_wglGetSwapIntervalEXT)();
mogl_function_wglGetSwapIntervalEXT wglGetSwapIntervalEXT;
#define WGL_EXT_swap_control_tear 1
#define WGL_I3D_digital_video_control 1
#define WGL_DIGITAL_VIDEO_CURSOR_ALPHA_FRAMEBUFFER_I3D 0x2050
#define WGL_DIGITAL_VIDEO_CURSOR_ALPHA_VALUE_I3D 0x2051
#define WGL_DIGITAL_VIDEO_CURSOR_INCLUDED_I3D 0x2052
#define WGL_DIGITAL_VIDEO_GAMMA_CORRECTED_I3D 0x2053

typedef signed int  (*mogl_function_wglGetDigitalVideoParametersI3D)(HDC hDC, signed int iAttribute, signed int *piValue);
mogl_function_wglGetDigitalVideoParametersI3D wglGetDigitalVideoParametersI3D;

typedef signed int  (*mogl_function_wglSetDigitalVideoParametersI3D)(HDC hDC, signed int iAttribute, signed int *piValue);
mogl_function_wglSetDigitalVideoParametersI3D wglSetDigitalVideoParametersI3D;
#define WGL_I3D_gamma 1
#define WGL_GAMMA_TABLE_SIZE_I3D 0x204E
#define WGL_GAMMA_EXCLUDE_DESKTOP_I3D 0x204F

typedef signed int  (*mogl_function_wglGetGammaTableParametersI3D)(HDC hDC, signed int iAttribute, signed int *piValue);
mogl_function_wglGetGammaTableParametersI3D wglGetGammaTableParametersI3D;

typedef signed int  (*mogl_function_wglSetGammaTableParametersI3D)(HDC hDC, signed int iAttribute, signed int *piValue);
mogl_function_wglSetGammaTableParametersI3D wglSetGammaTableParametersI3D;

typedef signed int  (*mogl_function_wglGetGammaTableI3D)(HDC hDC, signed int iEntries, unsigned short *puRed, unsigned short *puGreen, unsigned short *puBlue);
mogl_function_wglGetGammaTableI3D wglGetGammaTableI3D;

typedef signed int  (*mogl_function_wglSetGammaTableI3D)(HDC hDC, signed int iEntries, unsigned short *puRed, unsigned short *puGreen, unsigned short *puBlue);
mogl_function_wglSetGammaTableI3D wglSetGammaTableI3D;
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

typedef signed int  (*mogl_function_wglEnableGenlockI3D)(HDC hDC);
mogl_function_wglEnableGenlockI3D wglEnableGenlockI3D;

typedef signed int  (*mogl_function_wglDisableGenlockI3D)(HDC hDC);
mogl_function_wglDisableGenlockI3D wglDisableGenlockI3D;

typedef signed int  (*mogl_function_wglIsEnabledGenlockI3D)(HDC hDC, signed int *pFlag);
mogl_function_wglIsEnabledGenlockI3D wglIsEnabledGenlockI3D;

typedef signed int  (*mogl_function_wglGenlockSourceI3D)(HDC hDC, unsigned int uSource);
mogl_function_wglGenlockSourceI3D wglGenlockSourceI3D;

typedef signed int  (*mogl_function_wglGetGenlockSourceI3D)(HDC hDC, unsigned int *uSource);
mogl_function_wglGetGenlockSourceI3D wglGetGenlockSourceI3D;

typedef signed int  (*mogl_function_wglGenlockSourceEdgeI3D)(HDC hDC, unsigned int uEdge);
mogl_function_wglGenlockSourceEdgeI3D wglGenlockSourceEdgeI3D;

typedef signed int  (*mogl_function_wglGetGenlockSourceEdgeI3D)(HDC hDC, unsigned int *uEdge);
mogl_function_wglGetGenlockSourceEdgeI3D wglGetGenlockSourceEdgeI3D;

typedef signed int  (*mogl_function_wglGenlockSampleRateI3D)(HDC hDC, unsigned int uRate);
mogl_function_wglGenlockSampleRateI3D wglGenlockSampleRateI3D;

typedef signed int  (*mogl_function_wglGetGenlockSampleRateI3D)(HDC hDC, unsigned int *uRate);
mogl_function_wglGetGenlockSampleRateI3D wglGetGenlockSampleRateI3D;

typedef signed int  (*mogl_function_wglGenlockSourceDelayI3D)(HDC hDC, unsigned int uDelay);
mogl_function_wglGenlockSourceDelayI3D wglGenlockSourceDelayI3D;

typedef signed int  (*mogl_function_wglGetGenlockSourceDelayI3D)(HDC hDC, unsigned int *uDelay);
mogl_function_wglGetGenlockSourceDelayI3D wglGetGenlockSourceDelayI3D;

typedef signed int  (*mogl_function_wglQueryGenlockMaxSourceDelayI3D)(HDC hDC, unsigned int *uMaxLineDelay, unsigned int *uMaxPixelDelay);
mogl_function_wglQueryGenlockMaxSourceDelayI3D wglQueryGenlockMaxSourceDelayI3D;
#define WGL_I3D_image_buffer 1
#define WGL_IMAGE_BUFFER_MIN_ACCESS_I3D 0x00000001
#define WGL_IMAGE_BUFFER_LOCK_I3D 0x00000002

typedef void *  (*mogl_function_wglCreateImageBufferI3D)(HDC hDC, unsigned int dwSize, unsigned int uFlags);
mogl_function_wglCreateImageBufferI3D wglCreateImageBufferI3D;

typedef signed int  (*mogl_function_wglDestroyImageBufferI3D)(HDC hDC, void * pAddress);
mogl_function_wglDestroyImageBufferI3D wglDestroyImageBufferI3D;

typedef signed int  (*mogl_function_wglAssociateImageBufferEventsI3D)(HDC hDC, HANDLE *pEvent, void * *pAddress, unsigned int *pSize, unsigned int count);
mogl_function_wglAssociateImageBufferEventsI3D wglAssociateImageBufferEventsI3D;

typedef signed int  (*mogl_function_wglReleaseImageBufferEventsI3D)(HDC hDC, void * *pAddress, unsigned int count);
mogl_function_wglReleaseImageBufferEventsI3D wglReleaseImageBufferEventsI3D;
#define WGL_I3D_swap_frame_lock 1

typedef signed int  (*mogl_function_wglEnableFrameLockI3D)();
mogl_function_wglEnableFrameLockI3D wglEnableFrameLockI3D;

typedef signed int  (*mogl_function_wglDisableFrameLockI3D)();
mogl_function_wglDisableFrameLockI3D wglDisableFrameLockI3D;

typedef signed int  (*mogl_function_wglIsEnabledFrameLockI3D)(signed int *pFlag);
mogl_function_wglIsEnabledFrameLockI3D wglIsEnabledFrameLockI3D;

typedef signed int  (*mogl_function_wglQueryFrameLockMasterI3D)(signed int *pFlag);
mogl_function_wglQueryFrameLockMasterI3D wglQueryFrameLockMasterI3D;
#define WGL_I3D_swap_frame_usage 1

typedef signed int  (*mogl_function_wglGetFrameUsageI3D)(float *pUsage);
mogl_function_wglGetFrameUsageI3D wglGetFrameUsageI3D;

typedef signed int  (*mogl_function_wglBeginFrameTrackingI3D)();
mogl_function_wglBeginFrameTrackingI3D wglBeginFrameTrackingI3D;

typedef signed int  (*mogl_function_wglEndFrameTrackingI3D)();
mogl_function_wglEndFrameTrackingI3D wglEndFrameTrackingI3D;

typedef signed int  (*mogl_function_wglQueryFrameTrackingI3D)(unsigned int *pFrameCount, unsigned int *pMissedFrames, float *pLastMissedUsage);
mogl_function_wglQueryFrameTrackingI3D wglQueryFrameTrackingI3D;
#define WGL_NV_DX_interop 1
#define WGL_ACCESS_READ_ONLY_NV 0x00000000
#define WGL_ACCESS_READ_WRITE_NV 0x00000001
#define WGL_ACCESS_WRITE_DISCARD_NV 0x00000002

typedef signed int  (*mogl_function_wglDXSetResourceShareHandleNV)(void * dxObject, HANDLE shareHandle);
mogl_function_wglDXSetResourceShareHandleNV wglDXSetResourceShareHandleNV;

typedef HANDLE  (*mogl_function_wglDXOpenDeviceNV)(void * dxDevice);
mogl_function_wglDXOpenDeviceNV wglDXOpenDeviceNV;

typedef signed int  (*mogl_function_wglDXCloseDeviceNV)(HANDLE hDevice);
mogl_function_wglDXCloseDeviceNV wglDXCloseDeviceNV;

typedef HANDLE  (*mogl_function_wglDXRegisterObjectNV)(HANDLE hDevice, void * dxObject, GLuint name, GLenum type, GLenum access);
mogl_function_wglDXRegisterObjectNV wglDXRegisterObjectNV;

typedef signed int  (*mogl_function_wglDXUnregisterObjectNV)(HANDLE hDevice, HANDLE hObject);
mogl_function_wglDXUnregisterObjectNV wglDXUnregisterObjectNV;

typedef signed int  (*mogl_function_wglDXObjectAccessNV)(HANDLE hObject, GLenum access);
mogl_function_wglDXObjectAccessNV wglDXObjectAccessNV;

typedef signed int  (*mogl_function_wglDXLockObjectsNV)(HANDLE hDevice, GLint count, HANDLE *hObjects);
mogl_function_wglDXLockObjectsNV wglDXLockObjectsNV;

typedef signed int  (*mogl_function_wglDXUnlockObjectsNV)(HANDLE hDevice, GLint count, HANDLE *hObjects);
mogl_function_wglDXUnlockObjectsNV wglDXUnlockObjectsNV;
#define WGL_NV_DX_interop2 1
#define WGL_NV_copy_image 1

typedef signed int  (*mogl_function_wglCopyImageSubDataNV)(HGLRC hSrcRC, GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, HGLRC hDstRC, GLuint dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei width, GLsizei height, GLsizei depth);
mogl_function_wglCopyImageSubDataNV wglCopyImageSubDataNV;
#define WGL_NV_delay_before_swap 1

typedef signed int  (*mogl_function_wglDelayBeforeSwapNV)(HDC hDC, GLfloat seconds);
mogl_function_wglDelayBeforeSwapNV wglDelayBeforeSwapNV;
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

typedef signed int  (*mogl_function_wglEnumGpusNV)(unsigned int iGpuIndex, HGPUNV *phGpu);
mogl_function_wglEnumGpusNV wglEnumGpusNV;

typedef signed int  (*mogl_function_wglEnumGpuDevicesNV)(HGPUNV hGpu, unsigned int iDeviceIndex, PGPU_DEVICE lpGpuDevice);
mogl_function_wglEnumGpuDevicesNV wglEnumGpuDevicesNV;

typedef HDC  (*mogl_function_wglCreateAffinityDCNV)(HGPUNV *phGpuList);
mogl_function_wglCreateAffinityDCNV wglCreateAffinityDCNV;

typedef signed int  (*mogl_function_wglEnumGpusFromAffinityDCNV)(HDC hAffinityDC, unsigned int iGpuIndex, HGPUNV *hGpu);
mogl_function_wglEnumGpusFromAffinityDCNV wglEnumGpusFromAffinityDCNV;

typedef signed int  (*mogl_function_wglDeleteDCNV)(HDC hdc);
mogl_function_wglDeleteDCNV wglDeleteDCNV;
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

typedef signed int  (*mogl_function_wglEnumerateVideoDevicesNV)(HDC hDc, HVIDEOOUTPUTDEVICENV *phDeviceList);
mogl_function_wglEnumerateVideoDevicesNV wglEnumerateVideoDevicesNV;

typedef signed int  (*mogl_function_wglBindVideoDeviceNV)(HDC hDc, unsigned int uVideoSlot, HVIDEOOUTPUTDEVICENV hVideoDevice, signed int *piAttribList);
mogl_function_wglBindVideoDeviceNV wglBindVideoDeviceNV;

typedef signed int  (*mogl_function_wglQueryCurrentContextNV)(signed int iAttribute, signed int *piValue);
mogl_function_wglQueryCurrentContextNV wglQueryCurrentContextNV;
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

typedef signed int  (*mogl_function_wglJoinSwapGroupNV)(HDC hDC, GLuint group);
mogl_function_wglJoinSwapGroupNV wglJoinSwapGroupNV;

typedef signed int  (*mogl_function_wglBindSwapBarrierNV)(GLuint group, GLuint barrier);
mogl_function_wglBindSwapBarrierNV wglBindSwapBarrierNV;

typedef signed int  (*mogl_function_wglQuerySwapGroupNV)(HDC hDC, GLuint *group, GLuint *barrier);
mogl_function_wglQuerySwapGroupNV wglQuerySwapGroupNV;

typedef signed int  (*mogl_function_wglQueryMaxSwapGroupsNV)(HDC hDC, GLuint *maxGroups, GLuint *maxBarriers);
mogl_function_wglQueryMaxSwapGroupsNV wglQueryMaxSwapGroupsNV;

typedef signed int  (*mogl_function_wglQueryFrameCountNV)(HDC hDC, GLuint *count);
mogl_function_wglQueryFrameCountNV wglQueryFrameCountNV;

typedef signed int  (*mogl_function_wglResetFrameCountNV)(HDC hDC);
mogl_function_wglResetFrameCountNV wglResetFrameCountNV;
#define WGL_NV_vertex_array_range 1

typedef void *  (*mogl_function_wglAllocateMemoryNV)(GLsizei size, GLfloat readfreq, GLfloat writefreq, GLfloat priority);
mogl_function_wglAllocateMemoryNV wglAllocateMemoryNV;

typedef void (*mogl_function_wglFreeMemoryNV)(void * pointer);
mogl_function_wglFreeMemoryNV wglFreeMemoryNV;
#define WGL_NV_video_capture 1
#define WGL_UNIQUE_ID_NV 0x20CE
#define WGL_NUM_VIDEO_CAPTURE_SLOTS_NV 0x20CF

typedef signed int  (*mogl_function_wglBindVideoCaptureDeviceNV)(unsigned int uVideoSlot, HVIDEOINPUTDEVICENV hDevice);
mogl_function_wglBindVideoCaptureDeviceNV wglBindVideoCaptureDeviceNV;

typedef unsigned int  (*mogl_function_wglEnumerateVideoCaptureDevicesNV)(HDC hDc, HVIDEOINPUTDEVICENV *phDeviceList);
mogl_function_wglEnumerateVideoCaptureDevicesNV wglEnumerateVideoCaptureDevicesNV;

typedef signed int  (*mogl_function_wglLockVideoCaptureDeviceNV)(HDC hDc, HVIDEOINPUTDEVICENV hDevice);
mogl_function_wglLockVideoCaptureDeviceNV wglLockVideoCaptureDeviceNV;

typedef signed int  (*mogl_function_wglQueryVideoCaptureDeviceNV)(HDC hDc, HVIDEOINPUTDEVICENV hDevice, signed int iAttribute, signed int *piValue);
mogl_function_wglQueryVideoCaptureDeviceNV wglQueryVideoCaptureDeviceNV;

typedef signed int  (*mogl_function_wglReleaseVideoCaptureDeviceNV)(HDC hDc, HVIDEOINPUTDEVICENV hDevice);
mogl_function_wglReleaseVideoCaptureDeviceNV wglReleaseVideoCaptureDeviceNV;
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

typedef signed int  (*mogl_function_wglGetVideoDeviceNV)(HDC hDC, signed int numDevices, HPVIDEODEV *hVideoDevice);
mogl_function_wglGetVideoDeviceNV wglGetVideoDeviceNV;

typedef signed int  (*mogl_function_wglReleaseVideoDeviceNV)(HPVIDEODEV hVideoDevice);
mogl_function_wglReleaseVideoDeviceNV wglReleaseVideoDeviceNV;

typedef signed int  (*mogl_function_wglBindVideoImageNV)(HPVIDEODEV hVideoDevice, HPBUFFERARB hPbuffer, signed int iVideoBuffer);
mogl_function_wglBindVideoImageNV wglBindVideoImageNV;

typedef signed int  (*mogl_function_wglReleaseVideoImageNV)(HPBUFFERARB hPbuffer, signed int iVideoBuffer);
mogl_function_wglReleaseVideoImageNV wglReleaseVideoImageNV;

typedef signed int  (*mogl_function_wglSendPbufferToVideoNV)(HPBUFFERARB hPbuffer, signed int iBufferType, unsigned int *pulCounterPbuffer, signed int bBlock);
mogl_function_wglSendPbufferToVideoNV wglSendPbufferToVideoNV;

typedef signed int  (*mogl_function_wglGetVideoInfoNV)(HPVIDEODEV hpVideoDevice, unsigned int *pulCounterOutputPbuffer, unsigned int *pulCounterOutputVideo);
mogl_function_wglGetVideoInfoNV wglGetVideoInfoNV;
#define WGL_OML_sync_control 1

typedef signed int  (*mogl_function_wglGetSyncValuesOML)(HDC hdc, signed long long *ust, signed long long *msc, signed long long *sbc);
mogl_function_wglGetSyncValuesOML wglGetSyncValuesOML;

typedef signed int  (*mogl_function_wglGetMscRateOML)(HDC hdc, signed int *numerator, signed int *denominator);
mogl_function_wglGetMscRateOML wglGetMscRateOML;

typedef signed long long  (*mogl_function_wglSwapBuffersMscOML)(HDC hdc, signed long long target_msc, signed long long divisor, signed long long remainder);
mogl_function_wglSwapBuffersMscOML wglSwapBuffersMscOML;

typedef signed long long  (*mogl_function_wglSwapLayerBuffersMscOML)(HDC hdc, signed int fuPlanes, signed long long target_msc, signed long long divisor, signed long long remainder);
mogl_function_wglSwapLayerBuffersMscOML wglSwapLayerBuffersMscOML;

typedef signed int  (*mogl_function_wglWaitForMscOML)(HDC hdc, signed long long target_msc, signed long long divisor, signed long long remainder, signed long long *ust, signed long long *msc, signed long long *sbc);
mogl_function_wglWaitForMscOML wglWaitForMscOML;

typedef signed int  (*mogl_function_wglWaitForSbcOML)(HDC hdc, signed long long target_sbc, signed long long *ust, signed long long *msc, signed long long *sbc);
mogl_function_wglWaitForSbcOML wglWaitForSbcOML;

#ifdef __cplusplus
}
#endif

#endif

#if defined mo_gl_win32_bindings_implementation

void mogl_load_functions()
{
    glDrawRangeElements = (mogl_function_glDrawRangeElements) wglGetProcAddress("glDrawRangeElements");
    glTexImage3D = (mogl_function_glTexImage3D) wglGetProcAddress("glTexImage3D");
    glTexSubImage3D = (mogl_function_glTexSubImage3D) wglGetProcAddress("glTexSubImage3D");
    glCopyTexSubImage3D = (mogl_function_glCopyTexSubImage3D) wglGetProcAddress("glCopyTexSubImage3D");
    glActiveTexture = (mogl_function_glActiveTexture) wglGetProcAddress("glActiveTexture");
    glSampleCoverage = (mogl_function_glSampleCoverage) wglGetProcAddress("glSampleCoverage");
    glCompressedTexImage3D = (mogl_function_glCompressedTexImage3D) wglGetProcAddress("glCompressedTexImage3D");
    glCompressedTexImage2D = (mogl_function_glCompressedTexImage2D) wglGetProcAddress("glCompressedTexImage2D");
    glCompressedTexImage1D = (mogl_function_glCompressedTexImage1D) wglGetProcAddress("glCompressedTexImage1D");
    glCompressedTexSubImage3D = (mogl_function_glCompressedTexSubImage3D) wglGetProcAddress("glCompressedTexSubImage3D");
    glCompressedTexSubImage2D = (mogl_function_glCompressedTexSubImage2D) wglGetProcAddress("glCompressedTexSubImage2D");
    glCompressedTexSubImage1D = (mogl_function_glCompressedTexSubImage1D) wglGetProcAddress("glCompressedTexSubImage1D");
    glGetCompressedTexImage = (mogl_function_glGetCompressedTexImage) wglGetProcAddress("glGetCompressedTexImage");
    glClientActiveTexture = (mogl_function_glClientActiveTexture) wglGetProcAddress("glClientActiveTexture");
    glMultiTexCoord1d = (mogl_function_glMultiTexCoord1d) wglGetProcAddress("glMultiTexCoord1d");
    glMultiTexCoord1dv = (mogl_function_glMultiTexCoord1dv) wglGetProcAddress("glMultiTexCoord1dv");
    glMultiTexCoord1f = (mogl_function_glMultiTexCoord1f) wglGetProcAddress("glMultiTexCoord1f");
    glMultiTexCoord1fv = (mogl_function_glMultiTexCoord1fv) wglGetProcAddress("glMultiTexCoord1fv");
    glMultiTexCoord1i = (mogl_function_glMultiTexCoord1i) wglGetProcAddress("glMultiTexCoord1i");
    glMultiTexCoord1iv = (mogl_function_glMultiTexCoord1iv) wglGetProcAddress("glMultiTexCoord1iv");
    glMultiTexCoord1s = (mogl_function_glMultiTexCoord1s) wglGetProcAddress("glMultiTexCoord1s");
    glMultiTexCoord1sv = (mogl_function_glMultiTexCoord1sv) wglGetProcAddress("glMultiTexCoord1sv");
    glMultiTexCoord2d = (mogl_function_glMultiTexCoord2d) wglGetProcAddress("glMultiTexCoord2d");
    glMultiTexCoord2dv = (mogl_function_glMultiTexCoord2dv) wglGetProcAddress("glMultiTexCoord2dv");
    glMultiTexCoord2f = (mogl_function_glMultiTexCoord2f) wglGetProcAddress("glMultiTexCoord2f");
    glMultiTexCoord2fv = (mogl_function_glMultiTexCoord2fv) wglGetProcAddress("glMultiTexCoord2fv");
    glMultiTexCoord2i = (mogl_function_glMultiTexCoord2i) wglGetProcAddress("glMultiTexCoord2i");
    glMultiTexCoord2iv = (mogl_function_glMultiTexCoord2iv) wglGetProcAddress("glMultiTexCoord2iv");
    glMultiTexCoord2s = (mogl_function_glMultiTexCoord2s) wglGetProcAddress("glMultiTexCoord2s");
    glMultiTexCoord2sv = (mogl_function_glMultiTexCoord2sv) wglGetProcAddress("glMultiTexCoord2sv");
    glMultiTexCoord3d = (mogl_function_glMultiTexCoord3d) wglGetProcAddress("glMultiTexCoord3d");
    glMultiTexCoord3dv = (mogl_function_glMultiTexCoord3dv) wglGetProcAddress("glMultiTexCoord3dv");
    glMultiTexCoord3f = (mogl_function_glMultiTexCoord3f) wglGetProcAddress("glMultiTexCoord3f");
    glMultiTexCoord3fv = (mogl_function_glMultiTexCoord3fv) wglGetProcAddress("glMultiTexCoord3fv");
    glMultiTexCoord3i = (mogl_function_glMultiTexCoord3i) wglGetProcAddress("glMultiTexCoord3i");
    glMultiTexCoord3iv = (mogl_function_glMultiTexCoord3iv) wglGetProcAddress("glMultiTexCoord3iv");
    glMultiTexCoord3s = (mogl_function_glMultiTexCoord3s) wglGetProcAddress("glMultiTexCoord3s");
    glMultiTexCoord3sv = (mogl_function_glMultiTexCoord3sv) wglGetProcAddress("glMultiTexCoord3sv");
    glMultiTexCoord4d = (mogl_function_glMultiTexCoord4d) wglGetProcAddress("glMultiTexCoord4d");
    glMultiTexCoord4dv = (mogl_function_glMultiTexCoord4dv) wglGetProcAddress("glMultiTexCoord4dv");
    glMultiTexCoord4f = (mogl_function_glMultiTexCoord4f) wglGetProcAddress("glMultiTexCoord4f");
    glMultiTexCoord4fv = (mogl_function_glMultiTexCoord4fv) wglGetProcAddress("glMultiTexCoord4fv");
    glMultiTexCoord4i = (mogl_function_glMultiTexCoord4i) wglGetProcAddress("glMultiTexCoord4i");
    glMultiTexCoord4iv = (mogl_function_glMultiTexCoord4iv) wglGetProcAddress("glMultiTexCoord4iv");
    glMultiTexCoord4s = (mogl_function_glMultiTexCoord4s) wglGetProcAddress("glMultiTexCoord4s");
    glMultiTexCoord4sv = (mogl_function_glMultiTexCoord4sv) wglGetProcAddress("glMultiTexCoord4sv");
    glLoadTransposeMatrixf = (mogl_function_glLoadTransposeMatrixf) wglGetProcAddress("glLoadTransposeMatrixf");
    glLoadTransposeMatrixd = (mogl_function_glLoadTransposeMatrixd) wglGetProcAddress("glLoadTransposeMatrixd");
    glMultTransposeMatrixf = (mogl_function_glMultTransposeMatrixf) wglGetProcAddress("glMultTransposeMatrixf");
    glMultTransposeMatrixd = (mogl_function_glMultTransposeMatrixd) wglGetProcAddress("glMultTransposeMatrixd");
    glBlendFuncSeparate = (mogl_function_glBlendFuncSeparate) wglGetProcAddress("glBlendFuncSeparate");
    glMultiDrawArrays = (mogl_function_glMultiDrawArrays) wglGetProcAddress("glMultiDrawArrays");
    glMultiDrawElements = (mogl_function_glMultiDrawElements) wglGetProcAddress("glMultiDrawElements");
    glPointParameterf = (mogl_function_glPointParameterf) wglGetProcAddress("glPointParameterf");
    glPointParameterfv = (mogl_function_glPointParameterfv) wglGetProcAddress("glPointParameterfv");
    glPointParameteri = (mogl_function_glPointParameteri) wglGetProcAddress("glPointParameteri");
    glPointParameteriv = (mogl_function_glPointParameteriv) wglGetProcAddress("glPointParameteriv");
    glFogCoordf = (mogl_function_glFogCoordf) wglGetProcAddress("glFogCoordf");
    glFogCoordfv = (mogl_function_glFogCoordfv) wglGetProcAddress("glFogCoordfv");
    glFogCoordd = (mogl_function_glFogCoordd) wglGetProcAddress("glFogCoordd");
    glFogCoorddv = (mogl_function_glFogCoorddv) wglGetProcAddress("glFogCoorddv");
    glFogCoordPointer = (mogl_function_glFogCoordPointer) wglGetProcAddress("glFogCoordPointer");
    glSecondaryColor3b = (mogl_function_glSecondaryColor3b) wglGetProcAddress("glSecondaryColor3b");
    glSecondaryColor3bv = (mogl_function_glSecondaryColor3bv) wglGetProcAddress("glSecondaryColor3bv");
    glSecondaryColor3d = (mogl_function_glSecondaryColor3d) wglGetProcAddress("glSecondaryColor3d");
    glSecondaryColor3dv = (mogl_function_glSecondaryColor3dv) wglGetProcAddress("glSecondaryColor3dv");
    glSecondaryColor3f = (mogl_function_glSecondaryColor3f) wglGetProcAddress("glSecondaryColor3f");
    glSecondaryColor3fv = (mogl_function_glSecondaryColor3fv) wglGetProcAddress("glSecondaryColor3fv");
    glSecondaryColor3i = (mogl_function_glSecondaryColor3i) wglGetProcAddress("glSecondaryColor3i");
    glSecondaryColor3iv = (mogl_function_glSecondaryColor3iv) wglGetProcAddress("glSecondaryColor3iv");
    glSecondaryColor3s = (mogl_function_glSecondaryColor3s) wglGetProcAddress("glSecondaryColor3s");
    glSecondaryColor3sv = (mogl_function_glSecondaryColor3sv) wglGetProcAddress("glSecondaryColor3sv");
    glSecondaryColor3ub = (mogl_function_glSecondaryColor3ub) wglGetProcAddress("glSecondaryColor3ub");
    glSecondaryColor3ubv = (mogl_function_glSecondaryColor3ubv) wglGetProcAddress("glSecondaryColor3ubv");
    glSecondaryColor3ui = (mogl_function_glSecondaryColor3ui) wglGetProcAddress("glSecondaryColor3ui");
    glSecondaryColor3uiv = (mogl_function_glSecondaryColor3uiv) wglGetProcAddress("glSecondaryColor3uiv");
    glSecondaryColor3us = (mogl_function_glSecondaryColor3us) wglGetProcAddress("glSecondaryColor3us");
    glSecondaryColor3usv = (mogl_function_glSecondaryColor3usv) wglGetProcAddress("glSecondaryColor3usv");
    glSecondaryColorPointer = (mogl_function_glSecondaryColorPointer) wglGetProcAddress("glSecondaryColorPointer");
    glWindowPos2d = (mogl_function_glWindowPos2d) wglGetProcAddress("glWindowPos2d");
    glWindowPos2dv = (mogl_function_glWindowPos2dv) wglGetProcAddress("glWindowPos2dv");
    glWindowPos2f = (mogl_function_glWindowPos2f) wglGetProcAddress("glWindowPos2f");
    glWindowPos2fv = (mogl_function_glWindowPos2fv) wglGetProcAddress("glWindowPos2fv");
    glWindowPos2i = (mogl_function_glWindowPos2i) wglGetProcAddress("glWindowPos2i");
    glWindowPos2iv = (mogl_function_glWindowPos2iv) wglGetProcAddress("glWindowPos2iv");
    glWindowPos2s = (mogl_function_glWindowPos2s) wglGetProcAddress("glWindowPos2s");
    glWindowPos2sv = (mogl_function_glWindowPos2sv) wglGetProcAddress("glWindowPos2sv");
    glWindowPos3d = (mogl_function_glWindowPos3d) wglGetProcAddress("glWindowPos3d");
    glWindowPos3dv = (mogl_function_glWindowPos3dv) wglGetProcAddress("glWindowPos3dv");
    glWindowPos3f = (mogl_function_glWindowPos3f) wglGetProcAddress("glWindowPos3f");
    glWindowPos3fv = (mogl_function_glWindowPos3fv) wglGetProcAddress("glWindowPos3fv");
    glWindowPos3i = (mogl_function_glWindowPos3i) wglGetProcAddress("glWindowPos3i");
    glWindowPos3iv = (mogl_function_glWindowPos3iv) wglGetProcAddress("glWindowPos3iv");
    glWindowPos3s = (mogl_function_glWindowPos3s) wglGetProcAddress("glWindowPos3s");
    glWindowPos3sv = (mogl_function_glWindowPos3sv) wglGetProcAddress("glWindowPos3sv");
    glBlendColor = (mogl_function_glBlendColor) wglGetProcAddress("glBlendColor");
    glBlendEquation = (mogl_function_glBlendEquation) wglGetProcAddress("glBlendEquation");
    glGenQueries = (mogl_function_glGenQueries) wglGetProcAddress("glGenQueries");
    glDeleteQueries = (mogl_function_glDeleteQueries) wglGetProcAddress("glDeleteQueries");
    glIsQuery = (mogl_function_glIsQuery) wglGetProcAddress("glIsQuery");
    glBeginQuery = (mogl_function_glBeginQuery) wglGetProcAddress("glBeginQuery");
    glEndQuery = (mogl_function_glEndQuery) wglGetProcAddress("glEndQuery");
    glGetQueryiv = (mogl_function_glGetQueryiv) wglGetProcAddress("glGetQueryiv");
    glGetQueryObjectiv = (mogl_function_glGetQueryObjectiv) wglGetProcAddress("glGetQueryObjectiv");
    glGetQueryObjectuiv = (mogl_function_glGetQueryObjectuiv) wglGetProcAddress("glGetQueryObjectuiv");
    glBindBuffer = (mogl_function_glBindBuffer) wglGetProcAddress("glBindBuffer");
    glDeleteBuffers = (mogl_function_glDeleteBuffers) wglGetProcAddress("glDeleteBuffers");
    glGenBuffers = (mogl_function_glGenBuffers) wglGetProcAddress("glGenBuffers");
    glIsBuffer = (mogl_function_glIsBuffer) wglGetProcAddress("glIsBuffer");
    glBufferData = (mogl_function_glBufferData) wglGetProcAddress("glBufferData");
    glBufferSubData = (mogl_function_glBufferSubData) wglGetProcAddress("glBufferSubData");
    glGetBufferSubData = (mogl_function_glGetBufferSubData) wglGetProcAddress("glGetBufferSubData");
    glMapBuffer = (mogl_function_glMapBuffer) wglGetProcAddress("glMapBuffer");
    glUnmapBuffer = (mogl_function_glUnmapBuffer) wglGetProcAddress("glUnmapBuffer");
    glGetBufferParameteriv = (mogl_function_glGetBufferParameteriv) wglGetProcAddress("glGetBufferParameteriv");
    glGetBufferPointerv = (mogl_function_glGetBufferPointerv) wglGetProcAddress("glGetBufferPointerv");
    glBlendEquationSeparate = (mogl_function_glBlendEquationSeparate) wglGetProcAddress("glBlendEquationSeparate");
    glDrawBuffers = (mogl_function_glDrawBuffers) wglGetProcAddress("glDrawBuffers");
    glStencilOpSeparate = (mogl_function_glStencilOpSeparate) wglGetProcAddress("glStencilOpSeparate");
    glStencilFuncSeparate = (mogl_function_glStencilFuncSeparate) wglGetProcAddress("glStencilFuncSeparate");
    glStencilMaskSeparate = (mogl_function_glStencilMaskSeparate) wglGetProcAddress("glStencilMaskSeparate");
    glAttachShader = (mogl_function_glAttachShader) wglGetProcAddress("glAttachShader");
    glBindAttribLocation = (mogl_function_glBindAttribLocation) wglGetProcAddress("glBindAttribLocation");
    glCompileShader = (mogl_function_glCompileShader) wglGetProcAddress("glCompileShader");
    glCreateProgram = (mogl_function_glCreateProgram) wglGetProcAddress("glCreateProgram");
    glCreateShader = (mogl_function_glCreateShader) wglGetProcAddress("glCreateShader");
    glDeleteProgram = (mogl_function_glDeleteProgram) wglGetProcAddress("glDeleteProgram");
    glDeleteShader = (mogl_function_glDeleteShader) wglGetProcAddress("glDeleteShader");
    glDetachShader = (mogl_function_glDetachShader) wglGetProcAddress("glDetachShader");
    glDisableVertexAttribArray = (mogl_function_glDisableVertexAttribArray) wglGetProcAddress("glDisableVertexAttribArray");
    glEnableVertexAttribArray = (mogl_function_glEnableVertexAttribArray) wglGetProcAddress("glEnableVertexAttribArray");
    glGetActiveAttrib = (mogl_function_glGetActiveAttrib) wglGetProcAddress("glGetActiveAttrib");
    glGetActiveUniform = (mogl_function_glGetActiveUniform) wglGetProcAddress("glGetActiveUniform");
    glGetAttachedShaders = (mogl_function_glGetAttachedShaders) wglGetProcAddress("glGetAttachedShaders");
    glGetAttribLocation = (mogl_function_glGetAttribLocation) wglGetProcAddress("glGetAttribLocation");
    glGetProgramiv = (mogl_function_glGetProgramiv) wglGetProcAddress("glGetProgramiv");
    glGetProgramInfoLog = (mogl_function_glGetProgramInfoLog) wglGetProcAddress("glGetProgramInfoLog");
    glGetShaderiv = (mogl_function_glGetShaderiv) wglGetProcAddress("glGetShaderiv");
    glGetShaderInfoLog = (mogl_function_glGetShaderInfoLog) wglGetProcAddress("glGetShaderInfoLog");
    glGetShaderSource = (mogl_function_glGetShaderSource) wglGetProcAddress("glGetShaderSource");
    glGetUniformLocation = (mogl_function_glGetUniformLocation) wglGetProcAddress("glGetUniformLocation");
    glGetUniformfv = (mogl_function_glGetUniformfv) wglGetProcAddress("glGetUniformfv");
    glGetUniformiv = (mogl_function_glGetUniformiv) wglGetProcAddress("glGetUniformiv");
    glGetVertexAttribdv = (mogl_function_glGetVertexAttribdv) wglGetProcAddress("glGetVertexAttribdv");
    glGetVertexAttribfv = (mogl_function_glGetVertexAttribfv) wglGetProcAddress("glGetVertexAttribfv");
    glGetVertexAttribiv = (mogl_function_glGetVertexAttribiv) wglGetProcAddress("glGetVertexAttribiv");
    glGetVertexAttribPointerv = (mogl_function_glGetVertexAttribPointerv) wglGetProcAddress("glGetVertexAttribPointerv");
    glIsProgram = (mogl_function_glIsProgram) wglGetProcAddress("glIsProgram");
    glIsShader = (mogl_function_glIsShader) wglGetProcAddress("glIsShader");
    glLinkProgram = (mogl_function_glLinkProgram) wglGetProcAddress("glLinkProgram");
    glShaderSource = (mogl_function_glShaderSource) wglGetProcAddress("glShaderSource");
    glUseProgram = (mogl_function_glUseProgram) wglGetProcAddress("glUseProgram");
    glUniform1f = (mogl_function_glUniform1f) wglGetProcAddress("glUniform1f");
    glUniform2f = (mogl_function_glUniform2f) wglGetProcAddress("glUniform2f");
    glUniform3f = (mogl_function_glUniform3f) wglGetProcAddress("glUniform3f");
    glUniform4f = (mogl_function_glUniform4f) wglGetProcAddress("glUniform4f");
    glUniform1i = (mogl_function_glUniform1i) wglGetProcAddress("glUniform1i");
    glUniform2i = (mogl_function_glUniform2i) wglGetProcAddress("glUniform2i");
    glUniform3i = (mogl_function_glUniform3i) wglGetProcAddress("glUniform3i");
    glUniform4i = (mogl_function_glUniform4i) wglGetProcAddress("glUniform4i");
    glUniform1fv = (mogl_function_glUniform1fv) wglGetProcAddress("glUniform1fv");
    glUniform2fv = (mogl_function_glUniform2fv) wglGetProcAddress("glUniform2fv");
    glUniform3fv = (mogl_function_glUniform3fv) wglGetProcAddress("glUniform3fv");
    glUniform4fv = (mogl_function_glUniform4fv) wglGetProcAddress("glUniform4fv");
    glUniform1iv = (mogl_function_glUniform1iv) wglGetProcAddress("glUniform1iv");
    glUniform2iv = (mogl_function_glUniform2iv) wglGetProcAddress("glUniform2iv");
    glUniform3iv = (mogl_function_glUniform3iv) wglGetProcAddress("glUniform3iv");
    glUniform4iv = (mogl_function_glUniform4iv) wglGetProcAddress("glUniform4iv");
    glUniformMatrix2fv = (mogl_function_glUniformMatrix2fv) wglGetProcAddress("glUniformMatrix2fv");
    glUniformMatrix3fv = (mogl_function_glUniformMatrix3fv) wglGetProcAddress("glUniformMatrix3fv");
    glUniformMatrix4fv = (mogl_function_glUniformMatrix4fv) wglGetProcAddress("glUniformMatrix4fv");
    glValidateProgram = (mogl_function_glValidateProgram) wglGetProcAddress("glValidateProgram");
    glVertexAttrib1d = (mogl_function_glVertexAttrib1d) wglGetProcAddress("glVertexAttrib1d");
    glVertexAttrib1dv = (mogl_function_glVertexAttrib1dv) wglGetProcAddress("glVertexAttrib1dv");
    glVertexAttrib1f = (mogl_function_glVertexAttrib1f) wglGetProcAddress("glVertexAttrib1f");
    glVertexAttrib1fv = (mogl_function_glVertexAttrib1fv) wglGetProcAddress("glVertexAttrib1fv");
    glVertexAttrib1s = (mogl_function_glVertexAttrib1s) wglGetProcAddress("glVertexAttrib1s");
    glVertexAttrib1sv = (mogl_function_glVertexAttrib1sv) wglGetProcAddress("glVertexAttrib1sv");
    glVertexAttrib2d = (mogl_function_glVertexAttrib2d) wglGetProcAddress("glVertexAttrib2d");
    glVertexAttrib2dv = (mogl_function_glVertexAttrib2dv) wglGetProcAddress("glVertexAttrib2dv");
    glVertexAttrib2f = (mogl_function_glVertexAttrib2f) wglGetProcAddress("glVertexAttrib2f");
    glVertexAttrib2fv = (mogl_function_glVertexAttrib2fv) wglGetProcAddress("glVertexAttrib2fv");
    glVertexAttrib2s = (mogl_function_glVertexAttrib2s) wglGetProcAddress("glVertexAttrib2s");
    glVertexAttrib2sv = (mogl_function_glVertexAttrib2sv) wglGetProcAddress("glVertexAttrib2sv");
    glVertexAttrib3d = (mogl_function_glVertexAttrib3d) wglGetProcAddress("glVertexAttrib3d");
    glVertexAttrib3dv = (mogl_function_glVertexAttrib3dv) wglGetProcAddress("glVertexAttrib3dv");
    glVertexAttrib3f = (mogl_function_glVertexAttrib3f) wglGetProcAddress("glVertexAttrib3f");
    glVertexAttrib3fv = (mogl_function_glVertexAttrib3fv) wglGetProcAddress("glVertexAttrib3fv");
    glVertexAttrib3s = (mogl_function_glVertexAttrib3s) wglGetProcAddress("glVertexAttrib3s");
    glVertexAttrib3sv = (mogl_function_glVertexAttrib3sv) wglGetProcAddress("glVertexAttrib3sv");
    glVertexAttrib4Nbv = (mogl_function_glVertexAttrib4Nbv) wglGetProcAddress("glVertexAttrib4Nbv");
    glVertexAttrib4Niv = (mogl_function_glVertexAttrib4Niv) wglGetProcAddress("glVertexAttrib4Niv");
    glVertexAttrib4Nsv = (mogl_function_glVertexAttrib4Nsv) wglGetProcAddress("glVertexAttrib4Nsv");
    glVertexAttrib4Nub = (mogl_function_glVertexAttrib4Nub) wglGetProcAddress("glVertexAttrib4Nub");
    glVertexAttrib4Nubv = (mogl_function_glVertexAttrib4Nubv) wglGetProcAddress("glVertexAttrib4Nubv");
    glVertexAttrib4Nuiv = (mogl_function_glVertexAttrib4Nuiv) wglGetProcAddress("glVertexAttrib4Nuiv");
    glVertexAttrib4Nusv = (mogl_function_glVertexAttrib4Nusv) wglGetProcAddress("glVertexAttrib4Nusv");
    glVertexAttrib4bv = (mogl_function_glVertexAttrib4bv) wglGetProcAddress("glVertexAttrib4bv");
    glVertexAttrib4d = (mogl_function_glVertexAttrib4d) wglGetProcAddress("glVertexAttrib4d");
    glVertexAttrib4dv = (mogl_function_glVertexAttrib4dv) wglGetProcAddress("glVertexAttrib4dv");
    glVertexAttrib4f = (mogl_function_glVertexAttrib4f) wglGetProcAddress("glVertexAttrib4f");
    glVertexAttrib4fv = (mogl_function_glVertexAttrib4fv) wglGetProcAddress("glVertexAttrib4fv");
    glVertexAttrib4iv = (mogl_function_glVertexAttrib4iv) wglGetProcAddress("glVertexAttrib4iv");
    glVertexAttrib4s = (mogl_function_glVertexAttrib4s) wglGetProcAddress("glVertexAttrib4s");
    glVertexAttrib4sv = (mogl_function_glVertexAttrib4sv) wglGetProcAddress("glVertexAttrib4sv");
    glVertexAttrib4ubv = (mogl_function_glVertexAttrib4ubv) wglGetProcAddress("glVertexAttrib4ubv");
    glVertexAttrib4uiv = (mogl_function_glVertexAttrib4uiv) wglGetProcAddress("glVertexAttrib4uiv");
    glVertexAttrib4usv = (mogl_function_glVertexAttrib4usv) wglGetProcAddress("glVertexAttrib4usv");
    glVertexAttribPointer = (mogl_function_glVertexAttribPointer) wglGetProcAddress("glVertexAttribPointer");
    glUniformMatrix2x3fv = (mogl_function_glUniformMatrix2x3fv) wglGetProcAddress("glUniformMatrix2x3fv");
    glUniformMatrix3x2fv = (mogl_function_glUniformMatrix3x2fv) wglGetProcAddress("glUniformMatrix3x2fv");
    glUniformMatrix2x4fv = (mogl_function_glUniformMatrix2x4fv) wglGetProcAddress("glUniformMatrix2x4fv");
    glUniformMatrix4x2fv = (mogl_function_glUniformMatrix4x2fv) wglGetProcAddress("glUniformMatrix4x2fv");
    glUniformMatrix3x4fv = (mogl_function_glUniformMatrix3x4fv) wglGetProcAddress("glUniformMatrix3x4fv");
    glUniformMatrix4x3fv = (mogl_function_glUniformMatrix4x3fv) wglGetProcAddress("glUniformMatrix4x3fv");
    glColorMaski = (mogl_function_glColorMaski) wglGetProcAddress("glColorMaski");
    glGetBooleani_v = (mogl_function_glGetBooleani_v) wglGetProcAddress("glGetBooleani_v");
    glGetIntegeri_v = (mogl_function_glGetIntegeri_v) wglGetProcAddress("glGetIntegeri_v");
    glEnablei = (mogl_function_glEnablei) wglGetProcAddress("glEnablei");
    glDisablei = (mogl_function_glDisablei) wglGetProcAddress("glDisablei");
    glIsEnabledi = (mogl_function_glIsEnabledi) wglGetProcAddress("glIsEnabledi");
    glBeginTransformFeedback = (mogl_function_glBeginTransformFeedback) wglGetProcAddress("glBeginTransformFeedback");
    glEndTransformFeedback = (mogl_function_glEndTransformFeedback) wglGetProcAddress("glEndTransformFeedback");
    glBindBufferRange = (mogl_function_glBindBufferRange) wglGetProcAddress("glBindBufferRange");
    glBindBufferBase = (mogl_function_glBindBufferBase) wglGetProcAddress("glBindBufferBase");
    glTransformFeedbackVaryings = (mogl_function_glTransformFeedbackVaryings) wglGetProcAddress("glTransformFeedbackVaryings");
    glGetTransformFeedbackVarying = (mogl_function_glGetTransformFeedbackVarying) wglGetProcAddress("glGetTransformFeedbackVarying");
    glClampColor = (mogl_function_glClampColor) wglGetProcAddress("glClampColor");
    glBeginConditionalRender = (mogl_function_glBeginConditionalRender) wglGetProcAddress("glBeginConditionalRender");
    glEndConditionalRender = (mogl_function_glEndConditionalRender) wglGetProcAddress("glEndConditionalRender");
    glVertexAttribIPointer = (mogl_function_glVertexAttribIPointer) wglGetProcAddress("glVertexAttribIPointer");
    glGetVertexAttribIiv = (mogl_function_glGetVertexAttribIiv) wglGetProcAddress("glGetVertexAttribIiv");
    glGetVertexAttribIuiv = (mogl_function_glGetVertexAttribIuiv) wglGetProcAddress("glGetVertexAttribIuiv");
    glVertexAttribI1i = (mogl_function_glVertexAttribI1i) wglGetProcAddress("glVertexAttribI1i");
    glVertexAttribI2i = (mogl_function_glVertexAttribI2i) wglGetProcAddress("glVertexAttribI2i");
    glVertexAttribI3i = (mogl_function_glVertexAttribI3i) wglGetProcAddress("glVertexAttribI3i");
    glVertexAttribI4i = (mogl_function_glVertexAttribI4i) wglGetProcAddress("glVertexAttribI4i");
    glVertexAttribI1ui = (mogl_function_glVertexAttribI1ui) wglGetProcAddress("glVertexAttribI1ui");
    glVertexAttribI2ui = (mogl_function_glVertexAttribI2ui) wglGetProcAddress("glVertexAttribI2ui");
    glVertexAttribI3ui = (mogl_function_glVertexAttribI3ui) wglGetProcAddress("glVertexAttribI3ui");
    glVertexAttribI4ui = (mogl_function_glVertexAttribI4ui) wglGetProcAddress("glVertexAttribI4ui");
    glVertexAttribI1iv = (mogl_function_glVertexAttribI1iv) wglGetProcAddress("glVertexAttribI1iv");
    glVertexAttribI2iv = (mogl_function_glVertexAttribI2iv) wglGetProcAddress("glVertexAttribI2iv");
    glVertexAttribI3iv = (mogl_function_glVertexAttribI3iv) wglGetProcAddress("glVertexAttribI3iv");
    glVertexAttribI4iv = (mogl_function_glVertexAttribI4iv) wglGetProcAddress("glVertexAttribI4iv");
    glVertexAttribI1uiv = (mogl_function_glVertexAttribI1uiv) wglGetProcAddress("glVertexAttribI1uiv");
    glVertexAttribI2uiv = (mogl_function_glVertexAttribI2uiv) wglGetProcAddress("glVertexAttribI2uiv");
    glVertexAttribI3uiv = (mogl_function_glVertexAttribI3uiv) wglGetProcAddress("glVertexAttribI3uiv");
    glVertexAttribI4uiv = (mogl_function_glVertexAttribI4uiv) wglGetProcAddress("glVertexAttribI4uiv");
    glVertexAttribI4bv = (mogl_function_glVertexAttribI4bv) wglGetProcAddress("glVertexAttribI4bv");
    glVertexAttribI4sv = (mogl_function_glVertexAttribI4sv) wglGetProcAddress("glVertexAttribI4sv");
    glVertexAttribI4ubv = (mogl_function_glVertexAttribI4ubv) wglGetProcAddress("glVertexAttribI4ubv");
    glVertexAttribI4usv = (mogl_function_glVertexAttribI4usv) wglGetProcAddress("glVertexAttribI4usv");
    glGetUniformuiv = (mogl_function_glGetUniformuiv) wglGetProcAddress("glGetUniformuiv");
    glBindFragDataLocation = (mogl_function_glBindFragDataLocation) wglGetProcAddress("glBindFragDataLocation");
    glGetFragDataLocation = (mogl_function_glGetFragDataLocation) wglGetProcAddress("glGetFragDataLocation");
    glUniform1ui = (mogl_function_glUniform1ui) wglGetProcAddress("glUniform1ui");
    glUniform2ui = (mogl_function_glUniform2ui) wglGetProcAddress("glUniform2ui");
    glUniform3ui = (mogl_function_glUniform3ui) wglGetProcAddress("glUniform3ui");
    glUniform4ui = (mogl_function_glUniform4ui) wglGetProcAddress("glUniform4ui");
    glUniform1uiv = (mogl_function_glUniform1uiv) wglGetProcAddress("glUniform1uiv");
    glUniform2uiv = (mogl_function_glUniform2uiv) wglGetProcAddress("glUniform2uiv");
    glUniform3uiv = (mogl_function_glUniform3uiv) wglGetProcAddress("glUniform3uiv");
    glUniform4uiv = (mogl_function_glUniform4uiv) wglGetProcAddress("glUniform4uiv");
    glTexParameterIiv = (mogl_function_glTexParameterIiv) wglGetProcAddress("glTexParameterIiv");
    glTexParameterIuiv = (mogl_function_glTexParameterIuiv) wglGetProcAddress("glTexParameterIuiv");
    glGetTexParameterIiv = (mogl_function_glGetTexParameterIiv) wglGetProcAddress("glGetTexParameterIiv");
    glGetTexParameterIuiv = (mogl_function_glGetTexParameterIuiv) wglGetProcAddress("glGetTexParameterIuiv");
    glClearBufferiv = (mogl_function_glClearBufferiv) wglGetProcAddress("glClearBufferiv");
    glClearBufferuiv = (mogl_function_glClearBufferuiv) wglGetProcAddress("glClearBufferuiv");
    glClearBufferfv = (mogl_function_glClearBufferfv) wglGetProcAddress("glClearBufferfv");
    glClearBufferfi = (mogl_function_glClearBufferfi) wglGetProcAddress("glClearBufferfi");
    glGetStringi = (mogl_function_glGetStringi) wglGetProcAddress("glGetStringi");
    glIsRenderbuffer = (mogl_function_glIsRenderbuffer) wglGetProcAddress("glIsRenderbuffer");
    glBindRenderbuffer = (mogl_function_glBindRenderbuffer) wglGetProcAddress("glBindRenderbuffer");
    glDeleteRenderbuffers = (mogl_function_glDeleteRenderbuffers) wglGetProcAddress("glDeleteRenderbuffers");
    glGenRenderbuffers = (mogl_function_glGenRenderbuffers) wglGetProcAddress("glGenRenderbuffers");
    glRenderbufferStorage = (mogl_function_glRenderbufferStorage) wglGetProcAddress("glRenderbufferStorage");
    glGetRenderbufferParameteriv = (mogl_function_glGetRenderbufferParameteriv) wglGetProcAddress("glGetRenderbufferParameteriv");
    glIsFramebuffer = (mogl_function_glIsFramebuffer) wglGetProcAddress("glIsFramebuffer");
    glBindFramebuffer = (mogl_function_glBindFramebuffer) wglGetProcAddress("glBindFramebuffer");
    glDeleteFramebuffers = (mogl_function_glDeleteFramebuffers) wglGetProcAddress("glDeleteFramebuffers");
    glGenFramebuffers = (mogl_function_glGenFramebuffers) wglGetProcAddress("glGenFramebuffers");
    glCheckFramebufferStatus = (mogl_function_glCheckFramebufferStatus) wglGetProcAddress("glCheckFramebufferStatus");
    glFramebufferTexture1D = (mogl_function_glFramebufferTexture1D) wglGetProcAddress("glFramebufferTexture1D");
    glFramebufferTexture2D = (mogl_function_glFramebufferTexture2D) wglGetProcAddress("glFramebufferTexture2D");
    glFramebufferTexture3D = (mogl_function_glFramebufferTexture3D) wglGetProcAddress("glFramebufferTexture3D");
    glFramebufferRenderbuffer = (mogl_function_glFramebufferRenderbuffer) wglGetProcAddress("glFramebufferRenderbuffer");
    glGetFramebufferAttachmentParameteriv = (mogl_function_glGetFramebufferAttachmentParameteriv) wglGetProcAddress("glGetFramebufferAttachmentParameteriv");
    glGenerateMipmap = (mogl_function_glGenerateMipmap) wglGetProcAddress("glGenerateMipmap");
    glBlitFramebuffer = (mogl_function_glBlitFramebuffer) wglGetProcAddress("glBlitFramebuffer");
    glRenderbufferStorageMultisample = (mogl_function_glRenderbufferStorageMultisample) wglGetProcAddress("glRenderbufferStorageMultisample");
    glFramebufferTextureLayer = (mogl_function_glFramebufferTextureLayer) wglGetProcAddress("glFramebufferTextureLayer");
    glMapBufferRange = (mogl_function_glMapBufferRange) wglGetProcAddress("glMapBufferRange");
    glFlushMappedBufferRange = (mogl_function_glFlushMappedBufferRange) wglGetProcAddress("glFlushMappedBufferRange");
    glBindVertexArray = (mogl_function_glBindVertexArray) wglGetProcAddress("glBindVertexArray");
    glDeleteVertexArrays = (mogl_function_glDeleteVertexArrays) wglGetProcAddress("glDeleteVertexArrays");
    glGenVertexArrays = (mogl_function_glGenVertexArrays) wglGetProcAddress("glGenVertexArrays");
    glIsVertexArray = (mogl_function_glIsVertexArray) wglGetProcAddress("glIsVertexArray");
    glDrawArraysInstanced = (mogl_function_glDrawArraysInstanced) wglGetProcAddress("glDrawArraysInstanced");
    glDrawElementsInstanced = (mogl_function_glDrawElementsInstanced) wglGetProcAddress("glDrawElementsInstanced");
    glTexBuffer = (mogl_function_glTexBuffer) wglGetProcAddress("glTexBuffer");
    glPrimitiveRestartIndex = (mogl_function_glPrimitiveRestartIndex) wglGetProcAddress("glPrimitiveRestartIndex");
    glCopyBufferSubData = (mogl_function_glCopyBufferSubData) wglGetProcAddress("glCopyBufferSubData");
    glGetUniformIndices = (mogl_function_glGetUniformIndices) wglGetProcAddress("glGetUniformIndices");
    glGetActiveUniformsiv = (mogl_function_glGetActiveUniformsiv) wglGetProcAddress("glGetActiveUniformsiv");
    glGetActiveUniformName = (mogl_function_glGetActiveUniformName) wglGetProcAddress("glGetActiveUniformName");
    glGetUniformBlockIndex = (mogl_function_glGetUniformBlockIndex) wglGetProcAddress("glGetUniformBlockIndex");
    glGetActiveUniformBlockiv = (mogl_function_glGetActiveUniformBlockiv) wglGetProcAddress("glGetActiveUniformBlockiv");
    glGetActiveUniformBlockName = (mogl_function_glGetActiveUniformBlockName) wglGetProcAddress("glGetActiveUniformBlockName");
    glUniformBlockBinding = (mogl_function_glUniformBlockBinding) wglGetProcAddress("glUniformBlockBinding");
    glDrawElementsBaseVertex = (mogl_function_glDrawElementsBaseVertex) wglGetProcAddress("glDrawElementsBaseVertex");
    glDrawRangeElementsBaseVertex = (mogl_function_glDrawRangeElementsBaseVertex) wglGetProcAddress("glDrawRangeElementsBaseVertex");
    glDrawElementsInstancedBaseVertex = (mogl_function_glDrawElementsInstancedBaseVertex) wglGetProcAddress("glDrawElementsInstancedBaseVertex");
    glMultiDrawElementsBaseVertex = (mogl_function_glMultiDrawElementsBaseVertex) wglGetProcAddress("glMultiDrawElementsBaseVertex");
    glProvokingVertex = (mogl_function_glProvokingVertex) wglGetProcAddress("glProvokingVertex");
    glFenceSync = (mogl_function_glFenceSync) wglGetProcAddress("glFenceSync");
    glIsSync = (mogl_function_glIsSync) wglGetProcAddress("glIsSync");
    glDeleteSync = (mogl_function_glDeleteSync) wglGetProcAddress("glDeleteSync");
    glClientWaitSync = (mogl_function_glClientWaitSync) wglGetProcAddress("glClientWaitSync");
    glWaitSync = (mogl_function_glWaitSync) wglGetProcAddress("glWaitSync");
    glGetInteger64v = (mogl_function_glGetInteger64v) wglGetProcAddress("glGetInteger64v");
    glGetSynciv = (mogl_function_glGetSynciv) wglGetProcAddress("glGetSynciv");
    glGetInteger64i_v = (mogl_function_glGetInteger64i_v) wglGetProcAddress("glGetInteger64i_v");
    glGetBufferParameteri64v = (mogl_function_glGetBufferParameteri64v) wglGetProcAddress("glGetBufferParameteri64v");
    glFramebufferTexture = (mogl_function_glFramebufferTexture) wglGetProcAddress("glFramebufferTexture");
    glTexImage2DMultisample = (mogl_function_glTexImage2DMultisample) wglGetProcAddress("glTexImage2DMultisample");
    glTexImage3DMultisample = (mogl_function_glTexImage3DMultisample) wglGetProcAddress("glTexImage3DMultisample");
    glGetMultisamplefv = (mogl_function_glGetMultisamplefv) wglGetProcAddress("glGetMultisamplefv");
    glSampleMaski = (mogl_function_glSampleMaski) wglGetProcAddress("glSampleMaski");
    glBindFragDataLocationIndexed = (mogl_function_glBindFragDataLocationIndexed) wglGetProcAddress("glBindFragDataLocationIndexed");
    glGetFragDataIndex = (mogl_function_glGetFragDataIndex) wglGetProcAddress("glGetFragDataIndex");
    glGenSamplers = (mogl_function_glGenSamplers) wglGetProcAddress("glGenSamplers");
    glDeleteSamplers = (mogl_function_glDeleteSamplers) wglGetProcAddress("glDeleteSamplers");
    glIsSampler = (mogl_function_glIsSampler) wglGetProcAddress("glIsSampler");
    glBindSampler = (mogl_function_glBindSampler) wglGetProcAddress("glBindSampler");
    glSamplerParameteri = (mogl_function_glSamplerParameteri) wglGetProcAddress("glSamplerParameteri");
    glSamplerParameteriv = (mogl_function_glSamplerParameteriv) wglGetProcAddress("glSamplerParameteriv");
    glSamplerParameterf = (mogl_function_glSamplerParameterf) wglGetProcAddress("glSamplerParameterf");
    glSamplerParameterfv = (mogl_function_glSamplerParameterfv) wglGetProcAddress("glSamplerParameterfv");
    glSamplerParameterIiv = (mogl_function_glSamplerParameterIiv) wglGetProcAddress("glSamplerParameterIiv");
    glSamplerParameterIuiv = (mogl_function_glSamplerParameterIuiv) wglGetProcAddress("glSamplerParameterIuiv");
    glGetSamplerParameteriv = (mogl_function_glGetSamplerParameteriv) wglGetProcAddress("glGetSamplerParameteriv");
    glGetSamplerParameterIiv = (mogl_function_glGetSamplerParameterIiv) wglGetProcAddress("glGetSamplerParameterIiv");
    glGetSamplerParameterfv = (mogl_function_glGetSamplerParameterfv) wglGetProcAddress("glGetSamplerParameterfv");
    glGetSamplerParameterIuiv = (mogl_function_glGetSamplerParameterIuiv) wglGetProcAddress("glGetSamplerParameterIuiv");
    glQueryCounter = (mogl_function_glQueryCounter) wglGetProcAddress("glQueryCounter");
    glGetQueryObjecti64v = (mogl_function_glGetQueryObjecti64v) wglGetProcAddress("glGetQueryObjecti64v");
    glGetQueryObjectui64v = (mogl_function_glGetQueryObjectui64v) wglGetProcAddress("glGetQueryObjectui64v");
    glVertexAttribDivisor = (mogl_function_glVertexAttribDivisor) wglGetProcAddress("glVertexAttribDivisor");
    glVertexAttribP1ui = (mogl_function_glVertexAttribP1ui) wglGetProcAddress("glVertexAttribP1ui");
    glVertexAttribP1uiv = (mogl_function_glVertexAttribP1uiv) wglGetProcAddress("glVertexAttribP1uiv");
    glVertexAttribP2ui = (mogl_function_glVertexAttribP2ui) wglGetProcAddress("glVertexAttribP2ui");
    glVertexAttribP2uiv = (mogl_function_glVertexAttribP2uiv) wglGetProcAddress("glVertexAttribP2uiv");
    glVertexAttribP3ui = (mogl_function_glVertexAttribP3ui) wglGetProcAddress("glVertexAttribP3ui");
    glVertexAttribP3uiv = (mogl_function_glVertexAttribP3uiv) wglGetProcAddress("glVertexAttribP3uiv");
    glVertexAttribP4ui = (mogl_function_glVertexAttribP4ui) wglGetProcAddress("glVertexAttribP4ui");
    glVertexAttribP4uiv = (mogl_function_glVertexAttribP4uiv) wglGetProcAddress("glVertexAttribP4uiv");
    glVertexP2ui = (mogl_function_glVertexP2ui) wglGetProcAddress("glVertexP2ui");
    glVertexP2uiv = (mogl_function_glVertexP2uiv) wglGetProcAddress("glVertexP2uiv");
    glVertexP3ui = (mogl_function_glVertexP3ui) wglGetProcAddress("glVertexP3ui");
    glVertexP3uiv = (mogl_function_glVertexP3uiv) wglGetProcAddress("glVertexP3uiv");
    glVertexP4ui = (mogl_function_glVertexP4ui) wglGetProcAddress("glVertexP4ui");
    glVertexP4uiv = (mogl_function_glVertexP4uiv) wglGetProcAddress("glVertexP4uiv");
    glTexCoordP1ui = (mogl_function_glTexCoordP1ui) wglGetProcAddress("glTexCoordP1ui");
    glTexCoordP1uiv = (mogl_function_glTexCoordP1uiv) wglGetProcAddress("glTexCoordP1uiv");
    glTexCoordP2ui = (mogl_function_glTexCoordP2ui) wglGetProcAddress("glTexCoordP2ui");
    glTexCoordP2uiv = (mogl_function_glTexCoordP2uiv) wglGetProcAddress("glTexCoordP2uiv");
    glTexCoordP3ui = (mogl_function_glTexCoordP3ui) wglGetProcAddress("glTexCoordP3ui");
    glTexCoordP3uiv = (mogl_function_glTexCoordP3uiv) wglGetProcAddress("glTexCoordP3uiv");
    glTexCoordP4ui = (mogl_function_glTexCoordP4ui) wglGetProcAddress("glTexCoordP4ui");
    glTexCoordP4uiv = (mogl_function_glTexCoordP4uiv) wglGetProcAddress("glTexCoordP4uiv");
    glMultiTexCoordP1ui = (mogl_function_glMultiTexCoordP1ui) wglGetProcAddress("glMultiTexCoordP1ui");
    glMultiTexCoordP1uiv = (mogl_function_glMultiTexCoordP1uiv) wglGetProcAddress("glMultiTexCoordP1uiv");
    glMultiTexCoordP2ui = (mogl_function_glMultiTexCoordP2ui) wglGetProcAddress("glMultiTexCoordP2ui");
    glMultiTexCoordP2uiv = (mogl_function_glMultiTexCoordP2uiv) wglGetProcAddress("glMultiTexCoordP2uiv");
    glMultiTexCoordP3ui = (mogl_function_glMultiTexCoordP3ui) wglGetProcAddress("glMultiTexCoordP3ui");
    glMultiTexCoordP3uiv = (mogl_function_glMultiTexCoordP3uiv) wglGetProcAddress("glMultiTexCoordP3uiv");
    glMultiTexCoordP4ui = (mogl_function_glMultiTexCoordP4ui) wglGetProcAddress("glMultiTexCoordP4ui");
    glMultiTexCoordP4uiv = (mogl_function_glMultiTexCoordP4uiv) wglGetProcAddress("glMultiTexCoordP4uiv");
    glNormalP3ui = (mogl_function_glNormalP3ui) wglGetProcAddress("glNormalP3ui");
    glNormalP3uiv = (mogl_function_glNormalP3uiv) wglGetProcAddress("glNormalP3uiv");
    glColorP3ui = (mogl_function_glColorP3ui) wglGetProcAddress("glColorP3ui");
    glColorP3uiv = (mogl_function_glColorP3uiv) wglGetProcAddress("glColorP3uiv");
    glColorP4ui = (mogl_function_glColorP4ui) wglGetProcAddress("glColorP4ui");
    glColorP4uiv = (mogl_function_glColorP4uiv) wglGetProcAddress("glColorP4uiv");
    glSecondaryColorP3ui = (mogl_function_glSecondaryColorP3ui) wglGetProcAddress("glSecondaryColorP3ui");
    glSecondaryColorP3uiv = (mogl_function_glSecondaryColorP3uiv) wglGetProcAddress("glSecondaryColorP3uiv");
    glMinSampleShading = (mogl_function_glMinSampleShading) wglGetProcAddress("glMinSampleShading");
    glBlendEquationi = (mogl_function_glBlendEquationi) wglGetProcAddress("glBlendEquationi");
    glBlendEquationSeparatei = (mogl_function_glBlendEquationSeparatei) wglGetProcAddress("glBlendEquationSeparatei");
    glBlendFunci = (mogl_function_glBlendFunci) wglGetProcAddress("glBlendFunci");
    glBlendFuncSeparatei = (mogl_function_glBlendFuncSeparatei) wglGetProcAddress("glBlendFuncSeparatei");
    glDrawArraysIndirect = (mogl_function_glDrawArraysIndirect) wglGetProcAddress("glDrawArraysIndirect");
    glDrawElementsIndirect = (mogl_function_glDrawElementsIndirect) wglGetProcAddress("glDrawElementsIndirect");
    glUniform1d = (mogl_function_glUniform1d) wglGetProcAddress("glUniform1d");
    glUniform2d = (mogl_function_glUniform2d) wglGetProcAddress("glUniform2d");
    glUniform3d = (mogl_function_glUniform3d) wglGetProcAddress("glUniform3d");
    glUniform4d = (mogl_function_glUniform4d) wglGetProcAddress("glUniform4d");
    glUniform1dv = (mogl_function_glUniform1dv) wglGetProcAddress("glUniform1dv");
    glUniform2dv = (mogl_function_glUniform2dv) wglGetProcAddress("glUniform2dv");
    glUniform3dv = (mogl_function_glUniform3dv) wglGetProcAddress("glUniform3dv");
    glUniform4dv = (mogl_function_glUniform4dv) wglGetProcAddress("glUniform4dv");
    glUniformMatrix2dv = (mogl_function_glUniformMatrix2dv) wglGetProcAddress("glUniformMatrix2dv");
    glUniformMatrix3dv = (mogl_function_glUniformMatrix3dv) wglGetProcAddress("glUniformMatrix3dv");
    glUniformMatrix4dv = (mogl_function_glUniformMatrix4dv) wglGetProcAddress("glUniformMatrix4dv");
    glUniformMatrix2x3dv = (mogl_function_glUniformMatrix2x3dv) wglGetProcAddress("glUniformMatrix2x3dv");
    glUniformMatrix2x4dv = (mogl_function_glUniformMatrix2x4dv) wglGetProcAddress("glUniformMatrix2x4dv");
    glUniformMatrix3x2dv = (mogl_function_glUniformMatrix3x2dv) wglGetProcAddress("glUniformMatrix3x2dv");
    glUniformMatrix3x4dv = (mogl_function_glUniformMatrix3x4dv) wglGetProcAddress("glUniformMatrix3x4dv");
    glUniformMatrix4x2dv = (mogl_function_glUniformMatrix4x2dv) wglGetProcAddress("glUniformMatrix4x2dv");
    glUniformMatrix4x3dv = (mogl_function_glUniformMatrix4x3dv) wglGetProcAddress("glUniformMatrix4x3dv");
    glGetUniformdv = (mogl_function_glGetUniformdv) wglGetProcAddress("glGetUniformdv");
    glGetSubroutineUniformLocation = (mogl_function_glGetSubroutineUniformLocation) wglGetProcAddress("glGetSubroutineUniformLocation");
    glGetSubroutineIndex = (mogl_function_glGetSubroutineIndex) wglGetProcAddress("glGetSubroutineIndex");
    glGetActiveSubroutineUniformiv = (mogl_function_glGetActiveSubroutineUniformiv) wglGetProcAddress("glGetActiveSubroutineUniformiv");
    glGetActiveSubroutineUniformName = (mogl_function_glGetActiveSubroutineUniformName) wglGetProcAddress("glGetActiveSubroutineUniformName");
    glGetActiveSubroutineName = (mogl_function_glGetActiveSubroutineName) wglGetProcAddress("glGetActiveSubroutineName");
    glUniformSubroutinesuiv = (mogl_function_glUniformSubroutinesuiv) wglGetProcAddress("glUniformSubroutinesuiv");
    glGetUniformSubroutineuiv = (mogl_function_glGetUniformSubroutineuiv) wglGetProcAddress("glGetUniformSubroutineuiv");
    glGetProgramStageiv = (mogl_function_glGetProgramStageiv) wglGetProcAddress("glGetProgramStageiv");
    glPatchParameteri = (mogl_function_glPatchParameteri) wglGetProcAddress("glPatchParameteri");
    glPatchParameterfv = (mogl_function_glPatchParameterfv) wglGetProcAddress("glPatchParameterfv");
    glBindTransformFeedback = (mogl_function_glBindTransformFeedback) wglGetProcAddress("glBindTransformFeedback");
    glDeleteTransformFeedbacks = (mogl_function_glDeleteTransformFeedbacks) wglGetProcAddress("glDeleteTransformFeedbacks");
    glGenTransformFeedbacks = (mogl_function_glGenTransformFeedbacks) wglGetProcAddress("glGenTransformFeedbacks");
    glIsTransformFeedback = (mogl_function_glIsTransformFeedback) wglGetProcAddress("glIsTransformFeedback");
    glPauseTransformFeedback = (mogl_function_glPauseTransformFeedback) wglGetProcAddress("glPauseTransformFeedback");
    glResumeTransformFeedback = (mogl_function_glResumeTransformFeedback) wglGetProcAddress("glResumeTransformFeedback");
    glDrawTransformFeedback = (mogl_function_glDrawTransformFeedback) wglGetProcAddress("glDrawTransformFeedback");
    glDrawTransformFeedbackStream = (mogl_function_glDrawTransformFeedbackStream) wglGetProcAddress("glDrawTransformFeedbackStream");
    glBeginQueryIndexed = (mogl_function_glBeginQueryIndexed) wglGetProcAddress("glBeginQueryIndexed");
    glEndQueryIndexed = (mogl_function_glEndQueryIndexed) wglGetProcAddress("glEndQueryIndexed");
    glGetQueryIndexediv = (mogl_function_glGetQueryIndexediv) wglGetProcAddress("glGetQueryIndexediv");
    glReleaseShaderCompiler = (mogl_function_glReleaseShaderCompiler) wglGetProcAddress("glReleaseShaderCompiler");
    glShaderBinary = (mogl_function_glShaderBinary) wglGetProcAddress("glShaderBinary");
    glGetShaderPrecisionFormat = (mogl_function_glGetShaderPrecisionFormat) wglGetProcAddress("glGetShaderPrecisionFormat");
    glDepthRangef = (mogl_function_glDepthRangef) wglGetProcAddress("glDepthRangef");
    glClearDepthf = (mogl_function_glClearDepthf) wglGetProcAddress("glClearDepthf");
    glGetProgramBinary = (mogl_function_glGetProgramBinary) wglGetProcAddress("glGetProgramBinary");
    glProgramBinary = (mogl_function_glProgramBinary) wglGetProcAddress("glProgramBinary");
    glProgramParameteri = (mogl_function_glProgramParameteri) wglGetProcAddress("glProgramParameteri");
    glUseProgramStages = (mogl_function_glUseProgramStages) wglGetProcAddress("glUseProgramStages");
    glActiveShaderProgram = (mogl_function_glActiveShaderProgram) wglGetProcAddress("glActiveShaderProgram");
    glCreateShaderProgramv = (mogl_function_glCreateShaderProgramv) wglGetProcAddress("glCreateShaderProgramv");
    glBindProgramPipeline = (mogl_function_glBindProgramPipeline) wglGetProcAddress("glBindProgramPipeline");
    glDeleteProgramPipelines = (mogl_function_glDeleteProgramPipelines) wglGetProcAddress("glDeleteProgramPipelines");
    glGenProgramPipelines = (mogl_function_glGenProgramPipelines) wglGetProcAddress("glGenProgramPipelines");
    glIsProgramPipeline = (mogl_function_glIsProgramPipeline) wglGetProcAddress("glIsProgramPipeline");
    glGetProgramPipelineiv = (mogl_function_glGetProgramPipelineiv) wglGetProcAddress("glGetProgramPipelineiv");
    glProgramUniform1i = (mogl_function_glProgramUniform1i) wglGetProcAddress("glProgramUniform1i");
    glProgramUniform1iv = (mogl_function_glProgramUniform1iv) wglGetProcAddress("glProgramUniform1iv");
    glProgramUniform1f = (mogl_function_glProgramUniform1f) wglGetProcAddress("glProgramUniform1f");
    glProgramUniform1fv = (mogl_function_glProgramUniform1fv) wglGetProcAddress("glProgramUniform1fv");
    glProgramUniform1d = (mogl_function_glProgramUniform1d) wglGetProcAddress("glProgramUniform1d");
    glProgramUniform1dv = (mogl_function_glProgramUniform1dv) wglGetProcAddress("glProgramUniform1dv");
    glProgramUniform1ui = (mogl_function_glProgramUniform1ui) wglGetProcAddress("glProgramUniform1ui");
    glProgramUniform1uiv = (mogl_function_glProgramUniform1uiv) wglGetProcAddress("glProgramUniform1uiv");
    glProgramUniform2i = (mogl_function_glProgramUniform2i) wglGetProcAddress("glProgramUniform2i");
    glProgramUniform2iv = (mogl_function_glProgramUniform2iv) wglGetProcAddress("glProgramUniform2iv");
    glProgramUniform2f = (mogl_function_glProgramUniform2f) wglGetProcAddress("glProgramUniform2f");
    glProgramUniform2fv = (mogl_function_glProgramUniform2fv) wglGetProcAddress("glProgramUniform2fv");
    glProgramUniform2d = (mogl_function_glProgramUniform2d) wglGetProcAddress("glProgramUniform2d");
    glProgramUniform2dv = (mogl_function_glProgramUniform2dv) wglGetProcAddress("glProgramUniform2dv");
    glProgramUniform2ui = (mogl_function_glProgramUniform2ui) wglGetProcAddress("glProgramUniform2ui");
    glProgramUniform2uiv = (mogl_function_glProgramUniform2uiv) wglGetProcAddress("glProgramUniform2uiv");
    glProgramUniform3i = (mogl_function_glProgramUniform3i) wglGetProcAddress("glProgramUniform3i");
    glProgramUniform3iv = (mogl_function_glProgramUniform3iv) wglGetProcAddress("glProgramUniform3iv");
    glProgramUniform3f = (mogl_function_glProgramUniform3f) wglGetProcAddress("glProgramUniform3f");
    glProgramUniform3fv = (mogl_function_glProgramUniform3fv) wglGetProcAddress("glProgramUniform3fv");
    glProgramUniform3d = (mogl_function_glProgramUniform3d) wglGetProcAddress("glProgramUniform3d");
    glProgramUniform3dv = (mogl_function_glProgramUniform3dv) wglGetProcAddress("glProgramUniform3dv");
    glProgramUniform3ui = (mogl_function_glProgramUniform3ui) wglGetProcAddress("glProgramUniform3ui");
    glProgramUniform3uiv = (mogl_function_glProgramUniform3uiv) wglGetProcAddress("glProgramUniform3uiv");
    glProgramUniform4i = (mogl_function_glProgramUniform4i) wglGetProcAddress("glProgramUniform4i");
    glProgramUniform4iv = (mogl_function_glProgramUniform4iv) wglGetProcAddress("glProgramUniform4iv");
    glProgramUniform4f = (mogl_function_glProgramUniform4f) wglGetProcAddress("glProgramUniform4f");
    glProgramUniform4fv = (mogl_function_glProgramUniform4fv) wglGetProcAddress("glProgramUniform4fv");
    glProgramUniform4d = (mogl_function_glProgramUniform4d) wglGetProcAddress("glProgramUniform4d");
    glProgramUniform4dv = (mogl_function_glProgramUniform4dv) wglGetProcAddress("glProgramUniform4dv");
    glProgramUniform4ui = (mogl_function_glProgramUniform4ui) wglGetProcAddress("glProgramUniform4ui");
    glProgramUniform4uiv = (mogl_function_glProgramUniform4uiv) wglGetProcAddress("glProgramUniform4uiv");
    glProgramUniformMatrix2fv = (mogl_function_glProgramUniformMatrix2fv) wglGetProcAddress("glProgramUniformMatrix2fv");
    glProgramUniformMatrix3fv = (mogl_function_glProgramUniformMatrix3fv) wglGetProcAddress("glProgramUniformMatrix3fv");
    glProgramUniformMatrix4fv = (mogl_function_glProgramUniformMatrix4fv) wglGetProcAddress("glProgramUniformMatrix4fv");
    glProgramUniformMatrix2dv = (mogl_function_glProgramUniformMatrix2dv) wglGetProcAddress("glProgramUniformMatrix2dv");
    glProgramUniformMatrix3dv = (mogl_function_glProgramUniformMatrix3dv) wglGetProcAddress("glProgramUniformMatrix3dv");
    glProgramUniformMatrix4dv = (mogl_function_glProgramUniformMatrix4dv) wglGetProcAddress("glProgramUniformMatrix4dv");
    glProgramUniformMatrix2x3fv = (mogl_function_glProgramUniformMatrix2x3fv) wglGetProcAddress("glProgramUniformMatrix2x3fv");
    glProgramUniformMatrix3x2fv = (mogl_function_glProgramUniformMatrix3x2fv) wglGetProcAddress("glProgramUniformMatrix3x2fv");
    glProgramUniformMatrix2x4fv = (mogl_function_glProgramUniformMatrix2x4fv) wglGetProcAddress("glProgramUniformMatrix2x4fv");
    glProgramUniformMatrix4x2fv = (mogl_function_glProgramUniformMatrix4x2fv) wglGetProcAddress("glProgramUniformMatrix4x2fv");
    glProgramUniformMatrix3x4fv = (mogl_function_glProgramUniformMatrix3x4fv) wglGetProcAddress("glProgramUniformMatrix3x4fv");
    glProgramUniformMatrix4x3fv = (mogl_function_glProgramUniformMatrix4x3fv) wglGetProcAddress("glProgramUniformMatrix4x3fv");
    glProgramUniformMatrix2x3dv = (mogl_function_glProgramUniformMatrix2x3dv) wglGetProcAddress("glProgramUniformMatrix2x3dv");
    glProgramUniformMatrix3x2dv = (mogl_function_glProgramUniformMatrix3x2dv) wglGetProcAddress("glProgramUniformMatrix3x2dv");
    glProgramUniformMatrix2x4dv = (mogl_function_glProgramUniformMatrix2x4dv) wglGetProcAddress("glProgramUniformMatrix2x4dv");
    glProgramUniformMatrix4x2dv = (mogl_function_glProgramUniformMatrix4x2dv) wglGetProcAddress("glProgramUniformMatrix4x2dv");
    glProgramUniformMatrix3x4dv = (mogl_function_glProgramUniformMatrix3x4dv) wglGetProcAddress("glProgramUniformMatrix3x4dv");
    glProgramUniformMatrix4x3dv = (mogl_function_glProgramUniformMatrix4x3dv) wglGetProcAddress("glProgramUniformMatrix4x3dv");
    glValidateProgramPipeline = (mogl_function_glValidateProgramPipeline) wglGetProcAddress("glValidateProgramPipeline");
    glGetProgramPipelineInfoLog = (mogl_function_glGetProgramPipelineInfoLog) wglGetProcAddress("glGetProgramPipelineInfoLog");
    glVertexAttribL1d = (mogl_function_glVertexAttribL1d) wglGetProcAddress("glVertexAttribL1d");
    glVertexAttribL2d = (mogl_function_glVertexAttribL2d) wglGetProcAddress("glVertexAttribL2d");
    glVertexAttribL3d = (mogl_function_glVertexAttribL3d) wglGetProcAddress("glVertexAttribL3d");
    glVertexAttribL4d = (mogl_function_glVertexAttribL4d) wglGetProcAddress("glVertexAttribL4d");
    glVertexAttribL1dv = (mogl_function_glVertexAttribL1dv) wglGetProcAddress("glVertexAttribL1dv");
    glVertexAttribL2dv = (mogl_function_glVertexAttribL2dv) wglGetProcAddress("glVertexAttribL2dv");
    glVertexAttribL3dv = (mogl_function_glVertexAttribL3dv) wglGetProcAddress("glVertexAttribL3dv");
    glVertexAttribL4dv = (mogl_function_glVertexAttribL4dv) wglGetProcAddress("glVertexAttribL4dv");
    glVertexAttribLPointer = (mogl_function_glVertexAttribLPointer) wglGetProcAddress("glVertexAttribLPointer");
    glGetVertexAttribLdv = (mogl_function_glGetVertexAttribLdv) wglGetProcAddress("glGetVertexAttribLdv");
    glViewportArrayv = (mogl_function_glViewportArrayv) wglGetProcAddress("glViewportArrayv");
    glViewportIndexedf = (mogl_function_glViewportIndexedf) wglGetProcAddress("glViewportIndexedf");
    glViewportIndexedfv = (mogl_function_glViewportIndexedfv) wglGetProcAddress("glViewportIndexedfv");
    glScissorArrayv = (mogl_function_glScissorArrayv) wglGetProcAddress("glScissorArrayv");
    glScissorIndexed = (mogl_function_glScissorIndexed) wglGetProcAddress("glScissorIndexed");
    glScissorIndexedv = (mogl_function_glScissorIndexedv) wglGetProcAddress("glScissorIndexedv");
    glDepthRangeArrayv = (mogl_function_glDepthRangeArrayv) wglGetProcAddress("glDepthRangeArrayv");
    glDepthRangeIndexed = (mogl_function_glDepthRangeIndexed) wglGetProcAddress("glDepthRangeIndexed");
    glGetFloati_v = (mogl_function_glGetFloati_v) wglGetProcAddress("glGetFloati_v");
    glGetDoublei_v = (mogl_function_glGetDoublei_v) wglGetProcAddress("glGetDoublei_v");
    glDrawArraysInstancedBaseInstance = (mogl_function_glDrawArraysInstancedBaseInstance) wglGetProcAddress("glDrawArraysInstancedBaseInstance");
    glDrawElementsInstancedBaseInstance = (mogl_function_glDrawElementsInstancedBaseInstance) wglGetProcAddress("glDrawElementsInstancedBaseInstance");
    glDrawElementsInstancedBaseVertexBaseInstance = (mogl_function_glDrawElementsInstancedBaseVertexBaseInstance) wglGetProcAddress("glDrawElementsInstancedBaseVertexBaseInstance");
    glGetInternalformativ = (mogl_function_glGetInternalformativ) wglGetProcAddress("glGetInternalformativ");
    glGetActiveAtomicCounterBufferiv = (mogl_function_glGetActiveAtomicCounterBufferiv) wglGetProcAddress("glGetActiveAtomicCounterBufferiv");
    glBindImageTexture = (mogl_function_glBindImageTexture) wglGetProcAddress("glBindImageTexture");
    glMemoryBarrier = (mogl_function_glMemoryBarrier) wglGetProcAddress("glMemoryBarrier");
    glTexStorage1D = (mogl_function_glTexStorage1D) wglGetProcAddress("glTexStorage1D");
    glTexStorage2D = (mogl_function_glTexStorage2D) wglGetProcAddress("glTexStorage2D");
    glTexStorage3D = (mogl_function_glTexStorage3D) wglGetProcAddress("glTexStorage3D");
    glDrawTransformFeedbackInstanced = (mogl_function_glDrawTransformFeedbackInstanced) wglGetProcAddress("glDrawTransformFeedbackInstanced");
    glDrawTransformFeedbackStreamInstanced = (mogl_function_glDrawTransformFeedbackStreamInstanced) wglGetProcAddress("glDrawTransformFeedbackStreamInstanced");
    glClearBufferData = (mogl_function_glClearBufferData) wglGetProcAddress("glClearBufferData");
    glClearBufferSubData = (mogl_function_glClearBufferSubData) wglGetProcAddress("glClearBufferSubData");
    glDispatchCompute = (mogl_function_glDispatchCompute) wglGetProcAddress("glDispatchCompute");
    glDispatchComputeIndirect = (mogl_function_glDispatchComputeIndirect) wglGetProcAddress("glDispatchComputeIndirect");
    glCopyImageSubData = (mogl_function_glCopyImageSubData) wglGetProcAddress("glCopyImageSubData");
    glFramebufferParameteri = (mogl_function_glFramebufferParameteri) wglGetProcAddress("glFramebufferParameteri");
    glGetFramebufferParameteriv = (mogl_function_glGetFramebufferParameteriv) wglGetProcAddress("glGetFramebufferParameteriv");
    glGetInternalformati64v = (mogl_function_glGetInternalformati64v) wglGetProcAddress("glGetInternalformati64v");
    glInvalidateTexSubImage = (mogl_function_glInvalidateTexSubImage) wglGetProcAddress("glInvalidateTexSubImage");
    glInvalidateTexImage = (mogl_function_glInvalidateTexImage) wglGetProcAddress("glInvalidateTexImage");
    glInvalidateBufferSubData = (mogl_function_glInvalidateBufferSubData) wglGetProcAddress("glInvalidateBufferSubData");
    glInvalidateBufferData = (mogl_function_glInvalidateBufferData) wglGetProcAddress("glInvalidateBufferData");
    glInvalidateFramebuffer = (mogl_function_glInvalidateFramebuffer) wglGetProcAddress("glInvalidateFramebuffer");
    glInvalidateSubFramebuffer = (mogl_function_glInvalidateSubFramebuffer) wglGetProcAddress("glInvalidateSubFramebuffer");
    glMultiDrawArraysIndirect = (mogl_function_glMultiDrawArraysIndirect) wglGetProcAddress("glMultiDrawArraysIndirect");
    glMultiDrawElementsIndirect = (mogl_function_glMultiDrawElementsIndirect) wglGetProcAddress("glMultiDrawElementsIndirect");
    glGetProgramInterfaceiv = (mogl_function_glGetProgramInterfaceiv) wglGetProcAddress("glGetProgramInterfaceiv");
    glGetProgramResourceIndex = (mogl_function_glGetProgramResourceIndex) wglGetProcAddress("glGetProgramResourceIndex");
    glGetProgramResourceName = (mogl_function_glGetProgramResourceName) wglGetProcAddress("glGetProgramResourceName");
    glGetProgramResourceiv = (mogl_function_glGetProgramResourceiv) wglGetProcAddress("glGetProgramResourceiv");
    glGetProgramResourceLocation = (mogl_function_glGetProgramResourceLocation) wglGetProcAddress("glGetProgramResourceLocation");
    glGetProgramResourceLocationIndex = (mogl_function_glGetProgramResourceLocationIndex) wglGetProcAddress("glGetProgramResourceLocationIndex");
    glShaderStorageBlockBinding = (mogl_function_glShaderStorageBlockBinding) wglGetProcAddress("glShaderStorageBlockBinding");
    glTexBufferRange = (mogl_function_glTexBufferRange) wglGetProcAddress("glTexBufferRange");
    glTexStorage2DMultisample = (mogl_function_glTexStorage2DMultisample) wglGetProcAddress("glTexStorage2DMultisample");
    glTexStorage3DMultisample = (mogl_function_glTexStorage3DMultisample) wglGetProcAddress("glTexStorage3DMultisample");
    glTextureView = (mogl_function_glTextureView) wglGetProcAddress("glTextureView");
    glBindVertexBuffer = (mogl_function_glBindVertexBuffer) wglGetProcAddress("glBindVertexBuffer");
    glVertexAttribFormat = (mogl_function_glVertexAttribFormat) wglGetProcAddress("glVertexAttribFormat");
    glVertexAttribIFormat = (mogl_function_glVertexAttribIFormat) wglGetProcAddress("glVertexAttribIFormat");
    glVertexAttribLFormat = (mogl_function_glVertexAttribLFormat) wglGetProcAddress("glVertexAttribLFormat");
    glVertexAttribBinding = (mogl_function_glVertexAttribBinding) wglGetProcAddress("glVertexAttribBinding");
    glVertexBindingDivisor = (mogl_function_glVertexBindingDivisor) wglGetProcAddress("glVertexBindingDivisor");
    glDebugMessageControl = (mogl_function_glDebugMessageControl) wglGetProcAddress("glDebugMessageControl");
    glDebugMessageInsert = (mogl_function_glDebugMessageInsert) wglGetProcAddress("glDebugMessageInsert");
    glDebugMessageCallback = (mogl_function_glDebugMessageCallback) wglGetProcAddress("glDebugMessageCallback");
    glGetDebugMessageLog = (mogl_function_glGetDebugMessageLog) wglGetProcAddress("glGetDebugMessageLog");
    glPushDebugGroup = (mogl_function_glPushDebugGroup) wglGetProcAddress("glPushDebugGroup");
    glPopDebugGroup = (mogl_function_glPopDebugGroup) wglGetProcAddress("glPopDebugGroup");
    glObjectLabel = (mogl_function_glObjectLabel) wglGetProcAddress("glObjectLabel");
    glGetObjectLabel = (mogl_function_glGetObjectLabel) wglGetProcAddress("glGetObjectLabel");
    glObjectPtrLabel = (mogl_function_glObjectPtrLabel) wglGetProcAddress("glObjectPtrLabel");
    glGetObjectPtrLabel = (mogl_function_glGetObjectPtrLabel) wglGetProcAddress("glGetObjectPtrLabel");
    glBufferStorage = (mogl_function_glBufferStorage) wglGetProcAddress("glBufferStorage");
    glClearTexImage = (mogl_function_glClearTexImage) wglGetProcAddress("glClearTexImage");
    glClearTexSubImage = (mogl_function_glClearTexSubImage) wglGetProcAddress("glClearTexSubImage");
    glBindBuffersBase = (mogl_function_glBindBuffersBase) wglGetProcAddress("glBindBuffersBase");
    glBindBuffersRange = (mogl_function_glBindBuffersRange) wglGetProcAddress("glBindBuffersRange");
    glBindTextures = (mogl_function_glBindTextures) wglGetProcAddress("glBindTextures");
    glBindSamplers = (mogl_function_glBindSamplers) wglGetProcAddress("glBindSamplers");
    glBindImageTextures = (mogl_function_glBindImageTextures) wglGetProcAddress("glBindImageTextures");
    glBindVertexBuffers = (mogl_function_glBindVertexBuffers) wglGetProcAddress("glBindVertexBuffers");
    glClipControl = (mogl_function_glClipControl) wglGetProcAddress("glClipControl");
    glCreateTransformFeedbacks = (mogl_function_glCreateTransformFeedbacks) wglGetProcAddress("glCreateTransformFeedbacks");
    glTransformFeedbackBufferBase = (mogl_function_glTransformFeedbackBufferBase) wglGetProcAddress("glTransformFeedbackBufferBase");
    glTransformFeedbackBufferRange = (mogl_function_glTransformFeedbackBufferRange) wglGetProcAddress("glTransformFeedbackBufferRange");
    glGetTransformFeedbackiv = (mogl_function_glGetTransformFeedbackiv) wglGetProcAddress("glGetTransformFeedbackiv");
    glGetTransformFeedbacki_v = (mogl_function_glGetTransformFeedbacki_v) wglGetProcAddress("glGetTransformFeedbacki_v");
    glGetTransformFeedbacki64_v = (mogl_function_glGetTransformFeedbacki64_v) wglGetProcAddress("glGetTransformFeedbacki64_v");
    glCreateBuffers = (mogl_function_glCreateBuffers) wglGetProcAddress("glCreateBuffers");
    glNamedBufferStorage = (mogl_function_glNamedBufferStorage) wglGetProcAddress("glNamedBufferStorage");
    glNamedBufferData = (mogl_function_glNamedBufferData) wglGetProcAddress("glNamedBufferData");
    glNamedBufferSubData = (mogl_function_glNamedBufferSubData) wglGetProcAddress("glNamedBufferSubData");
    glCopyNamedBufferSubData = (mogl_function_glCopyNamedBufferSubData) wglGetProcAddress("glCopyNamedBufferSubData");
    glClearNamedBufferData = (mogl_function_glClearNamedBufferData) wglGetProcAddress("glClearNamedBufferData");
    glClearNamedBufferSubData = (mogl_function_glClearNamedBufferSubData) wglGetProcAddress("glClearNamedBufferSubData");
    glMapNamedBuffer = (mogl_function_glMapNamedBuffer) wglGetProcAddress("glMapNamedBuffer");
    glMapNamedBufferRange = (mogl_function_glMapNamedBufferRange) wglGetProcAddress("glMapNamedBufferRange");
    glUnmapNamedBuffer = (mogl_function_glUnmapNamedBuffer) wglGetProcAddress("glUnmapNamedBuffer");
    glFlushMappedNamedBufferRange = (mogl_function_glFlushMappedNamedBufferRange) wglGetProcAddress("glFlushMappedNamedBufferRange");
    glGetNamedBufferParameteriv = (mogl_function_glGetNamedBufferParameteriv) wglGetProcAddress("glGetNamedBufferParameteriv");
    glGetNamedBufferParameteri64v = (mogl_function_glGetNamedBufferParameteri64v) wglGetProcAddress("glGetNamedBufferParameteri64v");
    glGetNamedBufferPointerv = (mogl_function_glGetNamedBufferPointerv) wglGetProcAddress("glGetNamedBufferPointerv");
    glGetNamedBufferSubData = (mogl_function_glGetNamedBufferSubData) wglGetProcAddress("glGetNamedBufferSubData");
    glCreateFramebuffers = (mogl_function_glCreateFramebuffers) wglGetProcAddress("glCreateFramebuffers");
    glNamedFramebufferRenderbuffer = (mogl_function_glNamedFramebufferRenderbuffer) wglGetProcAddress("glNamedFramebufferRenderbuffer");
    glNamedFramebufferParameteri = (mogl_function_glNamedFramebufferParameteri) wglGetProcAddress("glNamedFramebufferParameteri");
    glNamedFramebufferTexture = (mogl_function_glNamedFramebufferTexture) wglGetProcAddress("glNamedFramebufferTexture");
    glNamedFramebufferTextureLayer = (mogl_function_glNamedFramebufferTextureLayer) wglGetProcAddress("glNamedFramebufferTextureLayer");
    glNamedFramebufferDrawBuffer = (mogl_function_glNamedFramebufferDrawBuffer) wglGetProcAddress("glNamedFramebufferDrawBuffer");
    glNamedFramebufferDrawBuffers = (mogl_function_glNamedFramebufferDrawBuffers) wglGetProcAddress("glNamedFramebufferDrawBuffers");
    glNamedFramebufferReadBuffer = (mogl_function_glNamedFramebufferReadBuffer) wglGetProcAddress("glNamedFramebufferReadBuffer");
    glInvalidateNamedFramebufferData = (mogl_function_glInvalidateNamedFramebufferData) wglGetProcAddress("glInvalidateNamedFramebufferData");
    glInvalidateNamedFramebufferSubData = (mogl_function_glInvalidateNamedFramebufferSubData) wglGetProcAddress("glInvalidateNamedFramebufferSubData");
    glClearNamedFramebufferiv = (mogl_function_glClearNamedFramebufferiv) wglGetProcAddress("glClearNamedFramebufferiv");
    glClearNamedFramebufferuiv = (mogl_function_glClearNamedFramebufferuiv) wglGetProcAddress("glClearNamedFramebufferuiv");
    glClearNamedFramebufferfv = (mogl_function_glClearNamedFramebufferfv) wglGetProcAddress("glClearNamedFramebufferfv");
    glClearNamedFramebufferfi = (mogl_function_glClearNamedFramebufferfi) wglGetProcAddress("glClearNamedFramebufferfi");
    glBlitNamedFramebuffer = (mogl_function_glBlitNamedFramebuffer) wglGetProcAddress("glBlitNamedFramebuffer");
    glCheckNamedFramebufferStatus = (mogl_function_glCheckNamedFramebufferStatus) wglGetProcAddress("glCheckNamedFramebufferStatus");
    glGetNamedFramebufferParameteriv = (mogl_function_glGetNamedFramebufferParameteriv) wglGetProcAddress("glGetNamedFramebufferParameteriv");
    glGetNamedFramebufferAttachmentParameteriv = (mogl_function_glGetNamedFramebufferAttachmentParameteriv) wglGetProcAddress("glGetNamedFramebufferAttachmentParameteriv");
    glCreateRenderbuffers = (mogl_function_glCreateRenderbuffers) wglGetProcAddress("glCreateRenderbuffers");
    glNamedRenderbufferStorage = (mogl_function_glNamedRenderbufferStorage) wglGetProcAddress("glNamedRenderbufferStorage");
    glNamedRenderbufferStorageMultisample = (mogl_function_glNamedRenderbufferStorageMultisample) wglGetProcAddress("glNamedRenderbufferStorageMultisample");
    glGetNamedRenderbufferParameteriv = (mogl_function_glGetNamedRenderbufferParameteriv) wglGetProcAddress("glGetNamedRenderbufferParameteriv");
    glCreateTextures = (mogl_function_glCreateTextures) wglGetProcAddress("glCreateTextures");
    glTextureBuffer = (mogl_function_glTextureBuffer) wglGetProcAddress("glTextureBuffer");
    glTextureBufferRange = (mogl_function_glTextureBufferRange) wglGetProcAddress("glTextureBufferRange");
    glTextureStorage1D = (mogl_function_glTextureStorage1D) wglGetProcAddress("glTextureStorage1D");
    glTextureStorage2D = (mogl_function_glTextureStorage2D) wglGetProcAddress("glTextureStorage2D");
    glTextureStorage3D = (mogl_function_glTextureStorage3D) wglGetProcAddress("glTextureStorage3D");
    glTextureStorage2DMultisample = (mogl_function_glTextureStorage2DMultisample) wglGetProcAddress("glTextureStorage2DMultisample");
    glTextureStorage3DMultisample = (mogl_function_glTextureStorage3DMultisample) wglGetProcAddress("glTextureStorage3DMultisample");
    glTextureSubImage1D = (mogl_function_glTextureSubImage1D) wglGetProcAddress("glTextureSubImage1D");
    glTextureSubImage2D = (mogl_function_glTextureSubImage2D) wglGetProcAddress("glTextureSubImage2D");
    glTextureSubImage3D = (mogl_function_glTextureSubImage3D) wglGetProcAddress("glTextureSubImage3D");
    glCompressedTextureSubImage1D = (mogl_function_glCompressedTextureSubImage1D) wglGetProcAddress("glCompressedTextureSubImage1D");
    glCompressedTextureSubImage2D = (mogl_function_glCompressedTextureSubImage2D) wglGetProcAddress("glCompressedTextureSubImage2D");
    glCompressedTextureSubImage3D = (mogl_function_glCompressedTextureSubImage3D) wglGetProcAddress("glCompressedTextureSubImage3D");
    glCopyTextureSubImage1D = (mogl_function_glCopyTextureSubImage1D) wglGetProcAddress("glCopyTextureSubImage1D");
    glCopyTextureSubImage2D = (mogl_function_glCopyTextureSubImage2D) wglGetProcAddress("glCopyTextureSubImage2D");
    glCopyTextureSubImage3D = (mogl_function_glCopyTextureSubImage3D) wglGetProcAddress("glCopyTextureSubImage3D");
    glTextureParameterf = (mogl_function_glTextureParameterf) wglGetProcAddress("glTextureParameterf");
    glTextureParameterfv = (mogl_function_glTextureParameterfv) wglGetProcAddress("glTextureParameterfv");
    glTextureParameteri = (mogl_function_glTextureParameteri) wglGetProcAddress("glTextureParameteri");
    glTextureParameterIiv = (mogl_function_glTextureParameterIiv) wglGetProcAddress("glTextureParameterIiv");
    glTextureParameterIuiv = (mogl_function_glTextureParameterIuiv) wglGetProcAddress("glTextureParameterIuiv");
    glTextureParameteriv = (mogl_function_glTextureParameteriv) wglGetProcAddress("glTextureParameteriv");
    glGenerateTextureMipmap = (mogl_function_glGenerateTextureMipmap) wglGetProcAddress("glGenerateTextureMipmap");
    glBindTextureUnit = (mogl_function_glBindTextureUnit) wglGetProcAddress("glBindTextureUnit");
    glGetTextureImage = (mogl_function_glGetTextureImage) wglGetProcAddress("glGetTextureImage");
    glGetCompressedTextureImage = (mogl_function_glGetCompressedTextureImage) wglGetProcAddress("glGetCompressedTextureImage");
    glGetTextureLevelParameterfv = (mogl_function_glGetTextureLevelParameterfv) wglGetProcAddress("glGetTextureLevelParameterfv");
    glGetTextureLevelParameteriv = (mogl_function_glGetTextureLevelParameteriv) wglGetProcAddress("glGetTextureLevelParameteriv");
    glGetTextureParameterfv = (mogl_function_glGetTextureParameterfv) wglGetProcAddress("glGetTextureParameterfv");
    glGetTextureParameterIiv = (mogl_function_glGetTextureParameterIiv) wglGetProcAddress("glGetTextureParameterIiv");
    glGetTextureParameterIuiv = (mogl_function_glGetTextureParameterIuiv) wglGetProcAddress("glGetTextureParameterIuiv");
    glGetTextureParameteriv = (mogl_function_glGetTextureParameteriv) wglGetProcAddress("glGetTextureParameteriv");
    glCreateVertexArrays = (mogl_function_glCreateVertexArrays) wglGetProcAddress("glCreateVertexArrays");
    glDisableVertexArrayAttrib = (mogl_function_glDisableVertexArrayAttrib) wglGetProcAddress("glDisableVertexArrayAttrib");
    glEnableVertexArrayAttrib = (mogl_function_glEnableVertexArrayAttrib) wglGetProcAddress("glEnableVertexArrayAttrib");
    glVertexArrayElementBuffer = (mogl_function_glVertexArrayElementBuffer) wglGetProcAddress("glVertexArrayElementBuffer");
    glVertexArrayVertexBuffer = (mogl_function_glVertexArrayVertexBuffer) wglGetProcAddress("glVertexArrayVertexBuffer");
    glVertexArrayVertexBuffers = (mogl_function_glVertexArrayVertexBuffers) wglGetProcAddress("glVertexArrayVertexBuffers");
    glVertexArrayAttribBinding = (mogl_function_glVertexArrayAttribBinding) wglGetProcAddress("glVertexArrayAttribBinding");
    glVertexArrayAttribFormat = (mogl_function_glVertexArrayAttribFormat) wglGetProcAddress("glVertexArrayAttribFormat");
    glVertexArrayAttribIFormat = (mogl_function_glVertexArrayAttribIFormat) wglGetProcAddress("glVertexArrayAttribIFormat");
    glVertexArrayAttribLFormat = (mogl_function_glVertexArrayAttribLFormat) wglGetProcAddress("glVertexArrayAttribLFormat");
    glVertexArrayBindingDivisor = (mogl_function_glVertexArrayBindingDivisor) wglGetProcAddress("glVertexArrayBindingDivisor");
    glGetVertexArrayiv = (mogl_function_glGetVertexArrayiv) wglGetProcAddress("glGetVertexArrayiv");
    glGetVertexArrayIndexediv = (mogl_function_glGetVertexArrayIndexediv) wglGetProcAddress("glGetVertexArrayIndexediv");
    glGetVertexArrayIndexed64iv = (mogl_function_glGetVertexArrayIndexed64iv) wglGetProcAddress("glGetVertexArrayIndexed64iv");
    glCreateSamplers = (mogl_function_glCreateSamplers) wglGetProcAddress("glCreateSamplers");
    glCreateProgramPipelines = (mogl_function_glCreateProgramPipelines) wglGetProcAddress("glCreateProgramPipelines");
    glCreateQueries = (mogl_function_glCreateQueries) wglGetProcAddress("glCreateQueries");
    glGetQueryBufferObjecti64v = (mogl_function_glGetQueryBufferObjecti64v) wglGetProcAddress("glGetQueryBufferObjecti64v");
    glGetQueryBufferObjectiv = (mogl_function_glGetQueryBufferObjectiv) wglGetProcAddress("glGetQueryBufferObjectiv");
    glGetQueryBufferObjectui64v = (mogl_function_glGetQueryBufferObjectui64v) wglGetProcAddress("glGetQueryBufferObjectui64v");
    glGetQueryBufferObjectuiv = (mogl_function_glGetQueryBufferObjectuiv) wglGetProcAddress("glGetQueryBufferObjectuiv");
    glMemoryBarrierByRegion = (mogl_function_glMemoryBarrierByRegion) wglGetProcAddress("glMemoryBarrierByRegion");
    glGetTextureSubImage = (mogl_function_glGetTextureSubImage) wglGetProcAddress("glGetTextureSubImage");
    glGetCompressedTextureSubImage = (mogl_function_glGetCompressedTextureSubImage) wglGetProcAddress("glGetCompressedTextureSubImage");
    glGetGraphicsResetStatus = (mogl_function_glGetGraphicsResetStatus) wglGetProcAddress("glGetGraphicsResetStatus");
    glGetnCompressedTexImage = (mogl_function_glGetnCompressedTexImage) wglGetProcAddress("glGetnCompressedTexImage");
    glGetnTexImage = (mogl_function_glGetnTexImage) wglGetProcAddress("glGetnTexImage");
    glGetnUniformdv = (mogl_function_glGetnUniformdv) wglGetProcAddress("glGetnUniformdv");
    glGetnUniformfv = (mogl_function_glGetnUniformfv) wglGetProcAddress("glGetnUniformfv");
    glGetnUniformiv = (mogl_function_glGetnUniformiv) wglGetProcAddress("glGetnUniformiv");
    glGetnUniformuiv = (mogl_function_glGetnUniformuiv) wglGetProcAddress("glGetnUniformuiv");
    glReadnPixels = (mogl_function_glReadnPixels) wglGetProcAddress("glReadnPixels");
    glGetnMapdv = (mogl_function_glGetnMapdv) wglGetProcAddress("glGetnMapdv");
    glGetnMapfv = (mogl_function_glGetnMapfv) wglGetProcAddress("glGetnMapfv");
    glGetnMapiv = (mogl_function_glGetnMapiv) wglGetProcAddress("glGetnMapiv");
    glGetnPixelMapfv = (mogl_function_glGetnPixelMapfv) wglGetProcAddress("glGetnPixelMapfv");
    glGetnPixelMapuiv = (mogl_function_glGetnPixelMapuiv) wglGetProcAddress("glGetnPixelMapuiv");
    glGetnPixelMapusv = (mogl_function_glGetnPixelMapusv) wglGetProcAddress("glGetnPixelMapusv");
    glGetnPolygonStipple = (mogl_function_glGetnPolygonStipple) wglGetProcAddress("glGetnPolygonStipple");
    glGetnColorTable = (mogl_function_glGetnColorTable) wglGetProcAddress("glGetnColorTable");
    glGetnConvolutionFilter = (mogl_function_glGetnConvolutionFilter) wglGetProcAddress("glGetnConvolutionFilter");
    glGetnSeparableFilter = (mogl_function_glGetnSeparableFilter) wglGetProcAddress("glGetnSeparableFilter");
    glGetnHistogram = (mogl_function_glGetnHistogram) wglGetProcAddress("glGetnHistogram");
    glGetnMinmax = (mogl_function_glGetnMinmax) wglGetProcAddress("glGetnMinmax");
    glTextureBarrier = (mogl_function_glTextureBarrier) wglGetProcAddress("glTextureBarrier");
    glSpecializeShader = (mogl_function_glSpecializeShader) wglGetProcAddress("glSpecializeShader");
    glMultiDrawArraysIndirectCount = (mogl_function_glMultiDrawArraysIndirectCount) wglGetProcAddress("glMultiDrawArraysIndirectCount");
    glMultiDrawElementsIndirectCount = (mogl_function_glMultiDrawElementsIndirectCount) wglGetProcAddress("glMultiDrawElementsIndirectCount");
    glPolygonOffsetClamp = (mogl_function_glPolygonOffsetClamp) wglGetProcAddress("glPolygonOffsetClamp");
    glPrimitiveBoundingBoxARB = (mogl_function_glPrimitiveBoundingBoxARB) wglGetProcAddress("glPrimitiveBoundingBoxARB");
    glGetTextureHandleARB = (mogl_function_glGetTextureHandleARB) wglGetProcAddress("glGetTextureHandleARB");
    glGetTextureSamplerHandleARB = (mogl_function_glGetTextureSamplerHandleARB) wglGetProcAddress("glGetTextureSamplerHandleARB");
    glMakeTextureHandleResidentARB = (mogl_function_glMakeTextureHandleResidentARB) wglGetProcAddress("glMakeTextureHandleResidentARB");
    glMakeTextureHandleNonResidentARB = (mogl_function_glMakeTextureHandleNonResidentARB) wglGetProcAddress("glMakeTextureHandleNonResidentARB");
    glGetImageHandleARB = (mogl_function_glGetImageHandleARB) wglGetProcAddress("glGetImageHandleARB");
    glMakeImageHandleResidentARB = (mogl_function_glMakeImageHandleResidentARB) wglGetProcAddress("glMakeImageHandleResidentARB");
    glMakeImageHandleNonResidentARB = (mogl_function_glMakeImageHandleNonResidentARB) wglGetProcAddress("glMakeImageHandleNonResidentARB");
    glUniformHandleui64ARB = (mogl_function_glUniformHandleui64ARB) wglGetProcAddress("glUniformHandleui64ARB");
    glUniformHandleui64vARB = (mogl_function_glUniformHandleui64vARB) wglGetProcAddress("glUniformHandleui64vARB");
    glProgramUniformHandleui64ARB = (mogl_function_glProgramUniformHandleui64ARB) wglGetProcAddress("glProgramUniformHandleui64ARB");
    glProgramUniformHandleui64vARB = (mogl_function_glProgramUniformHandleui64vARB) wglGetProcAddress("glProgramUniformHandleui64vARB");
    glIsTextureHandleResidentARB = (mogl_function_glIsTextureHandleResidentARB) wglGetProcAddress("glIsTextureHandleResidentARB");
    glIsImageHandleResidentARB = (mogl_function_glIsImageHandleResidentARB) wglGetProcAddress("glIsImageHandleResidentARB");
    glVertexAttribL1ui64ARB = (mogl_function_glVertexAttribL1ui64ARB) wglGetProcAddress("glVertexAttribL1ui64ARB");
    glVertexAttribL1ui64vARB = (mogl_function_glVertexAttribL1ui64vARB) wglGetProcAddress("glVertexAttribL1ui64vARB");
    glGetVertexAttribLui64vARB = (mogl_function_glGetVertexAttribLui64vARB) wglGetProcAddress("glGetVertexAttribLui64vARB");
    glCreateSyncFromCLeventARB = (mogl_function_glCreateSyncFromCLeventARB) wglGetProcAddress("glCreateSyncFromCLeventARB");
    glClampColorARB = (mogl_function_glClampColorARB) wglGetProcAddress("glClampColorARB");
    glDispatchComputeGroupSizeARB = (mogl_function_glDispatchComputeGroupSizeARB) wglGetProcAddress("glDispatchComputeGroupSizeARB");
    glDebugMessageControlARB = (mogl_function_glDebugMessageControlARB) wglGetProcAddress("glDebugMessageControlARB");
    glDebugMessageInsertARB = (mogl_function_glDebugMessageInsertARB) wglGetProcAddress("glDebugMessageInsertARB");
    glDebugMessageCallbackARB = (mogl_function_glDebugMessageCallbackARB) wglGetProcAddress("glDebugMessageCallbackARB");
    glGetDebugMessageLogARB = (mogl_function_glGetDebugMessageLogARB) wglGetProcAddress("glGetDebugMessageLogARB");
    glDrawBuffersARB = (mogl_function_glDrawBuffersARB) wglGetProcAddress("glDrawBuffersARB");
    glBlendEquationiARB = (mogl_function_glBlendEquationiARB) wglGetProcAddress("glBlendEquationiARB");
    glBlendEquationSeparateiARB = (mogl_function_glBlendEquationSeparateiARB) wglGetProcAddress("glBlendEquationSeparateiARB");
    glBlendFunciARB = (mogl_function_glBlendFunciARB) wglGetProcAddress("glBlendFunciARB");
    glBlendFuncSeparateiARB = (mogl_function_glBlendFuncSeparateiARB) wglGetProcAddress("glBlendFuncSeparateiARB");
    glDrawArraysInstancedARB = (mogl_function_glDrawArraysInstancedARB) wglGetProcAddress("glDrawArraysInstancedARB");
    glDrawElementsInstancedARB = (mogl_function_glDrawElementsInstancedARB) wglGetProcAddress("glDrawElementsInstancedARB");
    glProgramStringARB = (mogl_function_glProgramStringARB) wglGetProcAddress("glProgramStringARB");
    glBindProgramARB = (mogl_function_glBindProgramARB) wglGetProcAddress("glBindProgramARB");
    glDeleteProgramsARB = (mogl_function_glDeleteProgramsARB) wglGetProcAddress("glDeleteProgramsARB");
    glGenProgramsARB = (mogl_function_glGenProgramsARB) wglGetProcAddress("glGenProgramsARB");
    glProgramEnvParameter4dARB = (mogl_function_glProgramEnvParameter4dARB) wglGetProcAddress("glProgramEnvParameter4dARB");
    glProgramEnvParameter4dvARB = (mogl_function_glProgramEnvParameter4dvARB) wglGetProcAddress("glProgramEnvParameter4dvARB");
    glProgramEnvParameter4fARB = (mogl_function_glProgramEnvParameter4fARB) wglGetProcAddress("glProgramEnvParameter4fARB");
    glProgramEnvParameter4fvARB = (mogl_function_glProgramEnvParameter4fvARB) wglGetProcAddress("glProgramEnvParameter4fvARB");
    glProgramLocalParameter4dARB = (mogl_function_glProgramLocalParameter4dARB) wglGetProcAddress("glProgramLocalParameter4dARB");
    glProgramLocalParameter4dvARB = (mogl_function_glProgramLocalParameter4dvARB) wglGetProcAddress("glProgramLocalParameter4dvARB");
    glProgramLocalParameter4fARB = (mogl_function_glProgramLocalParameter4fARB) wglGetProcAddress("glProgramLocalParameter4fARB");
    glProgramLocalParameter4fvARB = (mogl_function_glProgramLocalParameter4fvARB) wglGetProcAddress("glProgramLocalParameter4fvARB");
    glGetProgramEnvParameterdvARB = (mogl_function_glGetProgramEnvParameterdvARB) wglGetProcAddress("glGetProgramEnvParameterdvARB");
    glGetProgramEnvParameterfvARB = (mogl_function_glGetProgramEnvParameterfvARB) wglGetProcAddress("glGetProgramEnvParameterfvARB");
    glGetProgramLocalParameterdvARB = (mogl_function_glGetProgramLocalParameterdvARB) wglGetProcAddress("glGetProgramLocalParameterdvARB");
    glGetProgramLocalParameterfvARB = (mogl_function_glGetProgramLocalParameterfvARB) wglGetProcAddress("glGetProgramLocalParameterfvARB");
    glGetProgramivARB = (mogl_function_glGetProgramivARB) wglGetProcAddress("glGetProgramivARB");
    glGetProgramStringARB = (mogl_function_glGetProgramStringARB) wglGetProcAddress("glGetProgramStringARB");
    glIsProgramARB = (mogl_function_glIsProgramARB) wglGetProcAddress("glIsProgramARB");
    glProgramParameteriARB = (mogl_function_glProgramParameteriARB) wglGetProcAddress("glProgramParameteriARB");
    glFramebufferTextureARB = (mogl_function_glFramebufferTextureARB) wglGetProcAddress("glFramebufferTextureARB");
    glFramebufferTextureLayerARB = (mogl_function_glFramebufferTextureLayerARB) wglGetProcAddress("glFramebufferTextureLayerARB");
    glFramebufferTextureFaceARB = (mogl_function_glFramebufferTextureFaceARB) wglGetProcAddress("glFramebufferTextureFaceARB");
    glSpecializeShaderARB = (mogl_function_glSpecializeShaderARB) wglGetProcAddress("glSpecializeShaderARB");
    glUniform1i64ARB = (mogl_function_glUniform1i64ARB) wglGetProcAddress("glUniform1i64ARB");
    glUniform2i64ARB = (mogl_function_glUniform2i64ARB) wglGetProcAddress("glUniform2i64ARB");
    glUniform3i64ARB = (mogl_function_glUniform3i64ARB) wglGetProcAddress("glUniform3i64ARB");
    glUniform4i64ARB = (mogl_function_glUniform4i64ARB) wglGetProcAddress("glUniform4i64ARB");
    glUniform1i64vARB = (mogl_function_glUniform1i64vARB) wglGetProcAddress("glUniform1i64vARB");
    glUniform2i64vARB = (mogl_function_glUniform2i64vARB) wglGetProcAddress("glUniform2i64vARB");
    glUniform3i64vARB = (mogl_function_glUniform3i64vARB) wglGetProcAddress("glUniform3i64vARB");
    glUniform4i64vARB = (mogl_function_glUniform4i64vARB) wglGetProcAddress("glUniform4i64vARB");
    glUniform1ui64ARB = (mogl_function_glUniform1ui64ARB) wglGetProcAddress("glUniform1ui64ARB");
    glUniform2ui64ARB = (mogl_function_glUniform2ui64ARB) wglGetProcAddress("glUniform2ui64ARB");
    glUniform3ui64ARB = (mogl_function_glUniform3ui64ARB) wglGetProcAddress("glUniform3ui64ARB");
    glUniform4ui64ARB = (mogl_function_glUniform4ui64ARB) wglGetProcAddress("glUniform4ui64ARB");
    glUniform1ui64vARB = (mogl_function_glUniform1ui64vARB) wglGetProcAddress("glUniform1ui64vARB");
    glUniform2ui64vARB = (mogl_function_glUniform2ui64vARB) wglGetProcAddress("glUniform2ui64vARB");
    glUniform3ui64vARB = (mogl_function_glUniform3ui64vARB) wglGetProcAddress("glUniform3ui64vARB");
    glUniform4ui64vARB = (mogl_function_glUniform4ui64vARB) wglGetProcAddress("glUniform4ui64vARB");
    glGetUniformi64vARB = (mogl_function_glGetUniformi64vARB) wglGetProcAddress("glGetUniformi64vARB");
    glGetUniformui64vARB = (mogl_function_glGetUniformui64vARB) wglGetProcAddress("glGetUniformui64vARB");
    glGetnUniformi64vARB = (mogl_function_glGetnUniformi64vARB) wglGetProcAddress("glGetnUniformi64vARB");
    glGetnUniformui64vARB = (mogl_function_glGetnUniformui64vARB) wglGetProcAddress("glGetnUniformui64vARB");
    glProgramUniform1i64ARB = (mogl_function_glProgramUniform1i64ARB) wglGetProcAddress("glProgramUniform1i64ARB");
    glProgramUniform2i64ARB = (mogl_function_glProgramUniform2i64ARB) wglGetProcAddress("glProgramUniform2i64ARB");
    glProgramUniform3i64ARB = (mogl_function_glProgramUniform3i64ARB) wglGetProcAddress("glProgramUniform3i64ARB");
    glProgramUniform4i64ARB = (mogl_function_glProgramUniform4i64ARB) wglGetProcAddress("glProgramUniform4i64ARB");
    glProgramUniform1i64vARB = (mogl_function_glProgramUniform1i64vARB) wglGetProcAddress("glProgramUniform1i64vARB");
    glProgramUniform2i64vARB = (mogl_function_glProgramUniform2i64vARB) wglGetProcAddress("glProgramUniform2i64vARB");
    glProgramUniform3i64vARB = (mogl_function_glProgramUniform3i64vARB) wglGetProcAddress("glProgramUniform3i64vARB");
    glProgramUniform4i64vARB = (mogl_function_glProgramUniform4i64vARB) wglGetProcAddress("glProgramUniform4i64vARB");
    glProgramUniform1ui64ARB = (mogl_function_glProgramUniform1ui64ARB) wglGetProcAddress("glProgramUniform1ui64ARB");
    glProgramUniform2ui64ARB = (mogl_function_glProgramUniform2ui64ARB) wglGetProcAddress("glProgramUniform2ui64ARB");
    glProgramUniform3ui64ARB = (mogl_function_glProgramUniform3ui64ARB) wglGetProcAddress("glProgramUniform3ui64ARB");
    glProgramUniform4ui64ARB = (mogl_function_glProgramUniform4ui64ARB) wglGetProcAddress("glProgramUniform4ui64ARB");
    glProgramUniform1ui64vARB = (mogl_function_glProgramUniform1ui64vARB) wglGetProcAddress("glProgramUniform1ui64vARB");
    glProgramUniform2ui64vARB = (mogl_function_glProgramUniform2ui64vARB) wglGetProcAddress("glProgramUniform2ui64vARB");
    glProgramUniform3ui64vARB = (mogl_function_glProgramUniform3ui64vARB) wglGetProcAddress("glProgramUniform3ui64vARB");
    glProgramUniform4ui64vARB = (mogl_function_glProgramUniform4ui64vARB) wglGetProcAddress("glProgramUniform4ui64vARB");
    glColorTable = (mogl_function_glColorTable) wglGetProcAddress("glColorTable");
    glColorTableParameterfv = (mogl_function_glColorTableParameterfv) wglGetProcAddress("glColorTableParameterfv");
    glColorTableParameteriv = (mogl_function_glColorTableParameteriv) wglGetProcAddress("glColorTableParameteriv");
    glCopyColorTable = (mogl_function_glCopyColorTable) wglGetProcAddress("glCopyColorTable");
    glGetColorTable = (mogl_function_glGetColorTable) wglGetProcAddress("glGetColorTable");
    glGetColorTableParameterfv = (mogl_function_glGetColorTableParameterfv) wglGetProcAddress("glGetColorTableParameterfv");
    glGetColorTableParameteriv = (mogl_function_glGetColorTableParameteriv) wglGetProcAddress("glGetColorTableParameteriv");
    glColorSubTable = (mogl_function_glColorSubTable) wglGetProcAddress("glColorSubTable");
    glCopyColorSubTable = (mogl_function_glCopyColorSubTable) wglGetProcAddress("glCopyColorSubTable");
    glConvolutionFilter1D = (mogl_function_glConvolutionFilter1D) wglGetProcAddress("glConvolutionFilter1D");
    glConvolutionFilter2D = (mogl_function_glConvolutionFilter2D) wglGetProcAddress("glConvolutionFilter2D");
    glConvolutionParameterf = (mogl_function_glConvolutionParameterf) wglGetProcAddress("glConvolutionParameterf");
    glConvolutionParameterfv = (mogl_function_glConvolutionParameterfv) wglGetProcAddress("glConvolutionParameterfv");
    glConvolutionParameteri = (mogl_function_glConvolutionParameteri) wglGetProcAddress("glConvolutionParameteri");
    glConvolutionParameteriv = (mogl_function_glConvolutionParameteriv) wglGetProcAddress("glConvolutionParameteriv");
    glCopyConvolutionFilter1D = (mogl_function_glCopyConvolutionFilter1D) wglGetProcAddress("glCopyConvolutionFilter1D");
    glCopyConvolutionFilter2D = (mogl_function_glCopyConvolutionFilter2D) wglGetProcAddress("glCopyConvolutionFilter2D");
    glGetConvolutionFilter = (mogl_function_glGetConvolutionFilter) wglGetProcAddress("glGetConvolutionFilter");
    glGetConvolutionParameterfv = (mogl_function_glGetConvolutionParameterfv) wglGetProcAddress("glGetConvolutionParameterfv");
    glGetConvolutionParameteriv = (mogl_function_glGetConvolutionParameteriv) wglGetProcAddress("glGetConvolutionParameteriv");
    glGetSeparableFilter = (mogl_function_glGetSeparableFilter) wglGetProcAddress("glGetSeparableFilter");
    glSeparableFilter2D = (mogl_function_glSeparableFilter2D) wglGetProcAddress("glSeparableFilter2D");
    glGetHistogram = (mogl_function_glGetHistogram) wglGetProcAddress("glGetHistogram");
    glGetHistogramParameterfv = (mogl_function_glGetHistogramParameterfv) wglGetProcAddress("glGetHistogramParameterfv");
    glGetHistogramParameteriv = (mogl_function_glGetHistogramParameteriv) wglGetProcAddress("glGetHistogramParameteriv");
    glGetMinmax = (mogl_function_glGetMinmax) wglGetProcAddress("glGetMinmax");
    glGetMinmaxParameterfv = (mogl_function_glGetMinmaxParameterfv) wglGetProcAddress("glGetMinmaxParameterfv");
    glGetMinmaxParameteriv = (mogl_function_glGetMinmaxParameteriv) wglGetProcAddress("glGetMinmaxParameteriv");
    glHistogram = (mogl_function_glHistogram) wglGetProcAddress("glHistogram");
    glMinmax = (mogl_function_glMinmax) wglGetProcAddress("glMinmax");
    glResetHistogram = (mogl_function_glResetHistogram) wglGetProcAddress("glResetHistogram");
    glResetMinmax = (mogl_function_glResetMinmax) wglGetProcAddress("glResetMinmax");
    glMultiDrawArraysIndirectCountARB = (mogl_function_glMultiDrawArraysIndirectCountARB) wglGetProcAddress("glMultiDrawArraysIndirectCountARB");
    glMultiDrawElementsIndirectCountARB = (mogl_function_glMultiDrawElementsIndirectCountARB) wglGetProcAddress("glMultiDrawElementsIndirectCountARB");
    glVertexAttribDivisorARB = (mogl_function_glVertexAttribDivisorARB) wglGetProcAddress("glVertexAttribDivisorARB");
    glCurrentPaletteMatrixARB = (mogl_function_glCurrentPaletteMatrixARB) wglGetProcAddress("glCurrentPaletteMatrixARB");
    glMatrixIndexubvARB = (mogl_function_glMatrixIndexubvARB) wglGetProcAddress("glMatrixIndexubvARB");
    glMatrixIndexusvARB = (mogl_function_glMatrixIndexusvARB) wglGetProcAddress("glMatrixIndexusvARB");
    glMatrixIndexuivARB = (mogl_function_glMatrixIndexuivARB) wglGetProcAddress("glMatrixIndexuivARB");
    glMatrixIndexPointerARB = (mogl_function_glMatrixIndexPointerARB) wglGetProcAddress("glMatrixIndexPointerARB");
    glSampleCoverageARB = (mogl_function_glSampleCoverageARB) wglGetProcAddress("glSampleCoverageARB");
    glActiveTextureARB = (mogl_function_glActiveTextureARB) wglGetProcAddress("glActiveTextureARB");
    glClientActiveTextureARB = (mogl_function_glClientActiveTextureARB) wglGetProcAddress("glClientActiveTextureARB");
    glMultiTexCoord1dARB = (mogl_function_glMultiTexCoord1dARB) wglGetProcAddress("glMultiTexCoord1dARB");
    glMultiTexCoord1dvARB = (mogl_function_glMultiTexCoord1dvARB) wglGetProcAddress("glMultiTexCoord1dvARB");
    glMultiTexCoord1fARB = (mogl_function_glMultiTexCoord1fARB) wglGetProcAddress("glMultiTexCoord1fARB");
    glMultiTexCoord1fvARB = (mogl_function_glMultiTexCoord1fvARB) wglGetProcAddress("glMultiTexCoord1fvARB");
    glMultiTexCoord1iARB = (mogl_function_glMultiTexCoord1iARB) wglGetProcAddress("glMultiTexCoord1iARB");
    glMultiTexCoord1ivARB = (mogl_function_glMultiTexCoord1ivARB) wglGetProcAddress("glMultiTexCoord1ivARB");
    glMultiTexCoord1sARB = (mogl_function_glMultiTexCoord1sARB) wglGetProcAddress("glMultiTexCoord1sARB");
    glMultiTexCoord1svARB = (mogl_function_glMultiTexCoord1svARB) wglGetProcAddress("glMultiTexCoord1svARB");
    glMultiTexCoord2dARB = (mogl_function_glMultiTexCoord2dARB) wglGetProcAddress("glMultiTexCoord2dARB");
    glMultiTexCoord2dvARB = (mogl_function_glMultiTexCoord2dvARB) wglGetProcAddress("glMultiTexCoord2dvARB");
    glMultiTexCoord2fARB = (mogl_function_glMultiTexCoord2fARB) wglGetProcAddress("glMultiTexCoord2fARB");
    glMultiTexCoord2fvARB = (mogl_function_glMultiTexCoord2fvARB) wglGetProcAddress("glMultiTexCoord2fvARB");
    glMultiTexCoord2iARB = (mogl_function_glMultiTexCoord2iARB) wglGetProcAddress("glMultiTexCoord2iARB");
    glMultiTexCoord2ivARB = (mogl_function_glMultiTexCoord2ivARB) wglGetProcAddress("glMultiTexCoord2ivARB");
    glMultiTexCoord2sARB = (mogl_function_glMultiTexCoord2sARB) wglGetProcAddress("glMultiTexCoord2sARB");
    glMultiTexCoord2svARB = (mogl_function_glMultiTexCoord2svARB) wglGetProcAddress("glMultiTexCoord2svARB");
    glMultiTexCoord3dARB = (mogl_function_glMultiTexCoord3dARB) wglGetProcAddress("glMultiTexCoord3dARB");
    glMultiTexCoord3dvARB = (mogl_function_glMultiTexCoord3dvARB) wglGetProcAddress("glMultiTexCoord3dvARB");
    glMultiTexCoord3fARB = (mogl_function_glMultiTexCoord3fARB) wglGetProcAddress("glMultiTexCoord3fARB");
    glMultiTexCoord3fvARB = (mogl_function_glMultiTexCoord3fvARB) wglGetProcAddress("glMultiTexCoord3fvARB");
    glMultiTexCoord3iARB = (mogl_function_glMultiTexCoord3iARB) wglGetProcAddress("glMultiTexCoord3iARB");
    glMultiTexCoord3ivARB = (mogl_function_glMultiTexCoord3ivARB) wglGetProcAddress("glMultiTexCoord3ivARB");
    glMultiTexCoord3sARB = (mogl_function_glMultiTexCoord3sARB) wglGetProcAddress("glMultiTexCoord3sARB");
    glMultiTexCoord3svARB = (mogl_function_glMultiTexCoord3svARB) wglGetProcAddress("glMultiTexCoord3svARB");
    glMultiTexCoord4dARB = (mogl_function_glMultiTexCoord4dARB) wglGetProcAddress("glMultiTexCoord4dARB");
    glMultiTexCoord4dvARB = (mogl_function_glMultiTexCoord4dvARB) wglGetProcAddress("glMultiTexCoord4dvARB");
    glMultiTexCoord4fARB = (mogl_function_glMultiTexCoord4fARB) wglGetProcAddress("glMultiTexCoord4fARB");
    glMultiTexCoord4fvARB = (mogl_function_glMultiTexCoord4fvARB) wglGetProcAddress("glMultiTexCoord4fvARB");
    glMultiTexCoord4iARB = (mogl_function_glMultiTexCoord4iARB) wglGetProcAddress("glMultiTexCoord4iARB");
    glMultiTexCoord4ivARB = (mogl_function_glMultiTexCoord4ivARB) wglGetProcAddress("glMultiTexCoord4ivARB");
    glMultiTexCoord4sARB = (mogl_function_glMultiTexCoord4sARB) wglGetProcAddress("glMultiTexCoord4sARB");
    glMultiTexCoord4svARB = (mogl_function_glMultiTexCoord4svARB) wglGetProcAddress("glMultiTexCoord4svARB");
    glGenQueriesARB = (mogl_function_glGenQueriesARB) wglGetProcAddress("glGenQueriesARB");
    glDeleteQueriesARB = (mogl_function_glDeleteQueriesARB) wglGetProcAddress("glDeleteQueriesARB");
    glIsQueryARB = (mogl_function_glIsQueryARB) wglGetProcAddress("glIsQueryARB");
    glBeginQueryARB = (mogl_function_glBeginQueryARB) wglGetProcAddress("glBeginQueryARB");
    glEndQueryARB = (mogl_function_glEndQueryARB) wglGetProcAddress("glEndQueryARB");
    glGetQueryivARB = (mogl_function_glGetQueryivARB) wglGetProcAddress("glGetQueryivARB");
    glGetQueryObjectivARB = (mogl_function_glGetQueryObjectivARB) wglGetProcAddress("glGetQueryObjectivARB");
    glGetQueryObjectuivARB = (mogl_function_glGetQueryObjectuivARB) wglGetProcAddress("glGetQueryObjectuivARB");
    glMaxShaderCompilerThreadsARB = (mogl_function_glMaxShaderCompilerThreadsARB) wglGetProcAddress("glMaxShaderCompilerThreadsARB");
    glPointParameterfARB = (mogl_function_glPointParameterfARB) wglGetProcAddress("glPointParameterfARB");
    glPointParameterfvARB = (mogl_function_glPointParameterfvARB) wglGetProcAddress("glPointParameterfvARB");
    glGetGraphicsResetStatusARB = (mogl_function_glGetGraphicsResetStatusARB) wglGetProcAddress("glGetGraphicsResetStatusARB");
    glGetnTexImageARB = (mogl_function_glGetnTexImageARB) wglGetProcAddress("glGetnTexImageARB");
    glReadnPixelsARB = (mogl_function_glReadnPixelsARB) wglGetProcAddress("glReadnPixelsARB");
    glGetnCompressedTexImageARB = (mogl_function_glGetnCompressedTexImageARB) wglGetProcAddress("glGetnCompressedTexImageARB");
    glGetnUniformfvARB = (mogl_function_glGetnUniformfvARB) wglGetProcAddress("glGetnUniformfvARB");
    glGetnUniformivARB = (mogl_function_glGetnUniformivARB) wglGetProcAddress("glGetnUniformivARB");
    glGetnUniformuivARB = (mogl_function_glGetnUniformuivARB) wglGetProcAddress("glGetnUniformuivARB");
    glGetnUniformdvARB = (mogl_function_glGetnUniformdvARB) wglGetProcAddress("glGetnUniformdvARB");
    glGetnMapdvARB = (mogl_function_glGetnMapdvARB) wglGetProcAddress("glGetnMapdvARB");
    glGetnMapfvARB = (mogl_function_glGetnMapfvARB) wglGetProcAddress("glGetnMapfvARB");
    glGetnMapivARB = (mogl_function_glGetnMapivARB) wglGetProcAddress("glGetnMapivARB");
    glGetnPixelMapfvARB = (mogl_function_glGetnPixelMapfvARB) wglGetProcAddress("glGetnPixelMapfvARB");
    glGetnPixelMapuivARB = (mogl_function_glGetnPixelMapuivARB) wglGetProcAddress("glGetnPixelMapuivARB");
    glGetnPixelMapusvARB = (mogl_function_glGetnPixelMapusvARB) wglGetProcAddress("glGetnPixelMapusvARB");
    glGetnPolygonStippleARB = (mogl_function_glGetnPolygonStippleARB) wglGetProcAddress("glGetnPolygonStippleARB");
    glGetnColorTableARB = (mogl_function_glGetnColorTableARB) wglGetProcAddress("glGetnColorTableARB");
    glGetnConvolutionFilterARB = (mogl_function_glGetnConvolutionFilterARB) wglGetProcAddress("glGetnConvolutionFilterARB");
    glGetnSeparableFilterARB = (mogl_function_glGetnSeparableFilterARB) wglGetProcAddress("glGetnSeparableFilterARB");
    glGetnHistogramARB = (mogl_function_glGetnHistogramARB) wglGetProcAddress("glGetnHistogramARB");
    glGetnMinmaxARB = (mogl_function_glGetnMinmaxARB) wglGetProcAddress("glGetnMinmaxARB");
    glFramebufferSampleLocationsfvARB = (mogl_function_glFramebufferSampleLocationsfvARB) wglGetProcAddress("glFramebufferSampleLocationsfvARB");
    glNamedFramebufferSampleLocationsfvARB = (mogl_function_glNamedFramebufferSampleLocationsfvARB) wglGetProcAddress("glNamedFramebufferSampleLocationsfvARB");
    glEvaluateDepthValuesARB = (mogl_function_glEvaluateDepthValuesARB) wglGetProcAddress("glEvaluateDepthValuesARB");
    glMinSampleShadingARB = (mogl_function_glMinSampleShadingARB) wglGetProcAddress("glMinSampleShadingARB");
    glDeleteObjectARB = (mogl_function_glDeleteObjectARB) wglGetProcAddress("glDeleteObjectARB");
    glGetHandleARB = (mogl_function_glGetHandleARB) wglGetProcAddress("glGetHandleARB");
    glDetachObjectARB = (mogl_function_glDetachObjectARB) wglGetProcAddress("glDetachObjectARB");
    glCreateShaderObjectARB = (mogl_function_glCreateShaderObjectARB) wglGetProcAddress("glCreateShaderObjectARB");
    glShaderSourceARB = (mogl_function_glShaderSourceARB) wglGetProcAddress("glShaderSourceARB");
    glCompileShaderARB = (mogl_function_glCompileShaderARB) wglGetProcAddress("glCompileShaderARB");
    glCreateProgramObjectARB = (mogl_function_glCreateProgramObjectARB) wglGetProcAddress("glCreateProgramObjectARB");
    glAttachObjectARB = (mogl_function_glAttachObjectARB) wglGetProcAddress("glAttachObjectARB");
    glLinkProgramARB = (mogl_function_glLinkProgramARB) wglGetProcAddress("glLinkProgramARB");
    glUseProgramObjectARB = (mogl_function_glUseProgramObjectARB) wglGetProcAddress("glUseProgramObjectARB");
    glValidateProgramARB = (mogl_function_glValidateProgramARB) wglGetProcAddress("glValidateProgramARB");
    glUniform1fARB = (mogl_function_glUniform1fARB) wglGetProcAddress("glUniform1fARB");
    glUniform2fARB = (mogl_function_glUniform2fARB) wglGetProcAddress("glUniform2fARB");
    glUniform3fARB = (mogl_function_glUniform3fARB) wglGetProcAddress("glUniform3fARB");
    glUniform4fARB = (mogl_function_glUniform4fARB) wglGetProcAddress("glUniform4fARB");
    glUniform1iARB = (mogl_function_glUniform1iARB) wglGetProcAddress("glUniform1iARB");
    glUniform2iARB = (mogl_function_glUniform2iARB) wglGetProcAddress("glUniform2iARB");
    glUniform3iARB = (mogl_function_glUniform3iARB) wglGetProcAddress("glUniform3iARB");
    glUniform4iARB = (mogl_function_glUniform4iARB) wglGetProcAddress("glUniform4iARB");
    glUniform1fvARB = (mogl_function_glUniform1fvARB) wglGetProcAddress("glUniform1fvARB");
    glUniform2fvARB = (mogl_function_glUniform2fvARB) wglGetProcAddress("glUniform2fvARB");
    glUniform3fvARB = (mogl_function_glUniform3fvARB) wglGetProcAddress("glUniform3fvARB");
    glUniform4fvARB = (mogl_function_glUniform4fvARB) wglGetProcAddress("glUniform4fvARB");
    glUniform1ivARB = (mogl_function_glUniform1ivARB) wglGetProcAddress("glUniform1ivARB");
    glUniform2ivARB = (mogl_function_glUniform2ivARB) wglGetProcAddress("glUniform2ivARB");
    glUniform3ivARB = (mogl_function_glUniform3ivARB) wglGetProcAddress("glUniform3ivARB");
    glUniform4ivARB = (mogl_function_glUniform4ivARB) wglGetProcAddress("glUniform4ivARB");
    glUniformMatrix2fvARB = (mogl_function_glUniformMatrix2fvARB) wglGetProcAddress("glUniformMatrix2fvARB");
    glUniformMatrix3fvARB = (mogl_function_glUniformMatrix3fvARB) wglGetProcAddress("glUniformMatrix3fvARB");
    glUniformMatrix4fvARB = (mogl_function_glUniformMatrix4fvARB) wglGetProcAddress("glUniformMatrix4fvARB");
    glGetObjectParameterfvARB = (mogl_function_glGetObjectParameterfvARB) wglGetProcAddress("glGetObjectParameterfvARB");
    glGetObjectParameterivARB = (mogl_function_glGetObjectParameterivARB) wglGetProcAddress("glGetObjectParameterivARB");
    glGetInfoLogARB = (mogl_function_glGetInfoLogARB) wglGetProcAddress("glGetInfoLogARB");
    glGetAttachedObjectsARB = (mogl_function_glGetAttachedObjectsARB) wglGetProcAddress("glGetAttachedObjectsARB");
    glGetUniformLocationARB = (mogl_function_glGetUniformLocationARB) wglGetProcAddress("glGetUniformLocationARB");
    glGetActiveUniformARB = (mogl_function_glGetActiveUniformARB) wglGetProcAddress("glGetActiveUniformARB");
    glGetUniformfvARB = (mogl_function_glGetUniformfvARB) wglGetProcAddress("glGetUniformfvARB");
    glGetUniformivARB = (mogl_function_glGetUniformivARB) wglGetProcAddress("glGetUniformivARB");
    glGetShaderSourceARB = (mogl_function_glGetShaderSourceARB) wglGetProcAddress("glGetShaderSourceARB");
    glNamedStringARB = (mogl_function_glNamedStringARB) wglGetProcAddress("glNamedStringARB");
    glDeleteNamedStringARB = (mogl_function_glDeleteNamedStringARB) wglGetProcAddress("glDeleteNamedStringARB");
    glCompileShaderIncludeARB = (mogl_function_glCompileShaderIncludeARB) wglGetProcAddress("glCompileShaderIncludeARB");
    glIsNamedStringARB = (mogl_function_glIsNamedStringARB) wglGetProcAddress("glIsNamedStringARB");
    glGetNamedStringARB = (mogl_function_glGetNamedStringARB) wglGetProcAddress("glGetNamedStringARB");
    glGetNamedStringivARB = (mogl_function_glGetNamedStringivARB) wglGetProcAddress("glGetNamedStringivARB");
    glBufferPageCommitmentARB = (mogl_function_glBufferPageCommitmentARB) wglGetProcAddress("glBufferPageCommitmentARB");
    glNamedBufferPageCommitmentEXT = (mogl_function_glNamedBufferPageCommitmentEXT) wglGetProcAddress("glNamedBufferPageCommitmentEXT");
    glNamedBufferPageCommitmentARB = (mogl_function_glNamedBufferPageCommitmentARB) wglGetProcAddress("glNamedBufferPageCommitmentARB");
    glTexPageCommitmentARB = (mogl_function_glTexPageCommitmentARB) wglGetProcAddress("glTexPageCommitmentARB");
    glTexBufferARB = (mogl_function_glTexBufferARB) wglGetProcAddress("glTexBufferARB");
    glCompressedTexImage3DARB = (mogl_function_glCompressedTexImage3DARB) wglGetProcAddress("glCompressedTexImage3DARB");
    glCompressedTexImage2DARB = (mogl_function_glCompressedTexImage2DARB) wglGetProcAddress("glCompressedTexImage2DARB");
    glCompressedTexImage1DARB = (mogl_function_glCompressedTexImage1DARB) wglGetProcAddress("glCompressedTexImage1DARB");
    glCompressedTexSubImage3DARB = (mogl_function_glCompressedTexSubImage3DARB) wglGetProcAddress("glCompressedTexSubImage3DARB");
    glCompressedTexSubImage2DARB = (mogl_function_glCompressedTexSubImage2DARB) wglGetProcAddress("glCompressedTexSubImage2DARB");
    glCompressedTexSubImage1DARB = (mogl_function_glCompressedTexSubImage1DARB) wglGetProcAddress("glCompressedTexSubImage1DARB");
    glGetCompressedTexImageARB = (mogl_function_glGetCompressedTexImageARB) wglGetProcAddress("glGetCompressedTexImageARB");
    glLoadTransposeMatrixfARB = (mogl_function_glLoadTransposeMatrixfARB) wglGetProcAddress("glLoadTransposeMatrixfARB");
    glLoadTransposeMatrixdARB = (mogl_function_glLoadTransposeMatrixdARB) wglGetProcAddress("glLoadTransposeMatrixdARB");
    glMultTransposeMatrixfARB = (mogl_function_glMultTransposeMatrixfARB) wglGetProcAddress("glMultTransposeMatrixfARB");
    glMultTransposeMatrixdARB = (mogl_function_glMultTransposeMatrixdARB) wglGetProcAddress("glMultTransposeMatrixdARB");
    glWeightbvARB = (mogl_function_glWeightbvARB) wglGetProcAddress("glWeightbvARB");
    glWeightsvARB = (mogl_function_glWeightsvARB) wglGetProcAddress("glWeightsvARB");
    glWeightivARB = (mogl_function_glWeightivARB) wglGetProcAddress("glWeightivARB");
    glWeightfvARB = (mogl_function_glWeightfvARB) wglGetProcAddress("glWeightfvARB");
    glWeightdvARB = (mogl_function_glWeightdvARB) wglGetProcAddress("glWeightdvARB");
    glWeightubvARB = (mogl_function_glWeightubvARB) wglGetProcAddress("glWeightubvARB");
    glWeightusvARB = (mogl_function_glWeightusvARB) wglGetProcAddress("glWeightusvARB");
    glWeightuivARB = (mogl_function_glWeightuivARB) wglGetProcAddress("glWeightuivARB");
    glWeightPointerARB = (mogl_function_glWeightPointerARB) wglGetProcAddress("glWeightPointerARB");
    glVertexBlendARB = (mogl_function_glVertexBlendARB) wglGetProcAddress("glVertexBlendARB");
    glBindBufferARB = (mogl_function_glBindBufferARB) wglGetProcAddress("glBindBufferARB");
    glDeleteBuffersARB = (mogl_function_glDeleteBuffersARB) wglGetProcAddress("glDeleteBuffersARB");
    glGenBuffersARB = (mogl_function_glGenBuffersARB) wglGetProcAddress("glGenBuffersARB");
    glIsBufferARB = (mogl_function_glIsBufferARB) wglGetProcAddress("glIsBufferARB");
    glBufferDataARB = (mogl_function_glBufferDataARB) wglGetProcAddress("glBufferDataARB");
    glBufferSubDataARB = (mogl_function_glBufferSubDataARB) wglGetProcAddress("glBufferSubDataARB");
    glGetBufferSubDataARB = (mogl_function_glGetBufferSubDataARB) wglGetProcAddress("glGetBufferSubDataARB");
    glMapBufferARB = (mogl_function_glMapBufferARB) wglGetProcAddress("glMapBufferARB");
    glUnmapBufferARB = (mogl_function_glUnmapBufferARB) wglGetProcAddress("glUnmapBufferARB");
    glGetBufferParameterivARB = (mogl_function_glGetBufferParameterivARB) wglGetProcAddress("glGetBufferParameterivARB");
    glGetBufferPointervARB = (mogl_function_glGetBufferPointervARB) wglGetProcAddress("glGetBufferPointervARB");
    glVertexAttrib1dARB = (mogl_function_glVertexAttrib1dARB) wglGetProcAddress("glVertexAttrib1dARB");
    glVertexAttrib1dvARB = (mogl_function_glVertexAttrib1dvARB) wglGetProcAddress("glVertexAttrib1dvARB");
    glVertexAttrib1fARB = (mogl_function_glVertexAttrib1fARB) wglGetProcAddress("glVertexAttrib1fARB");
    glVertexAttrib1fvARB = (mogl_function_glVertexAttrib1fvARB) wglGetProcAddress("glVertexAttrib1fvARB");
    glVertexAttrib1sARB = (mogl_function_glVertexAttrib1sARB) wglGetProcAddress("glVertexAttrib1sARB");
    glVertexAttrib1svARB = (mogl_function_glVertexAttrib1svARB) wglGetProcAddress("glVertexAttrib1svARB");
    glVertexAttrib2dARB = (mogl_function_glVertexAttrib2dARB) wglGetProcAddress("glVertexAttrib2dARB");
    glVertexAttrib2dvARB = (mogl_function_glVertexAttrib2dvARB) wglGetProcAddress("glVertexAttrib2dvARB");
    glVertexAttrib2fARB = (mogl_function_glVertexAttrib2fARB) wglGetProcAddress("glVertexAttrib2fARB");
    glVertexAttrib2fvARB = (mogl_function_glVertexAttrib2fvARB) wglGetProcAddress("glVertexAttrib2fvARB");
    glVertexAttrib2sARB = (mogl_function_glVertexAttrib2sARB) wglGetProcAddress("glVertexAttrib2sARB");
    glVertexAttrib2svARB = (mogl_function_glVertexAttrib2svARB) wglGetProcAddress("glVertexAttrib2svARB");
    glVertexAttrib3dARB = (mogl_function_glVertexAttrib3dARB) wglGetProcAddress("glVertexAttrib3dARB");
    glVertexAttrib3dvARB = (mogl_function_glVertexAttrib3dvARB) wglGetProcAddress("glVertexAttrib3dvARB");
    glVertexAttrib3fARB = (mogl_function_glVertexAttrib3fARB) wglGetProcAddress("glVertexAttrib3fARB");
    glVertexAttrib3fvARB = (mogl_function_glVertexAttrib3fvARB) wglGetProcAddress("glVertexAttrib3fvARB");
    glVertexAttrib3sARB = (mogl_function_glVertexAttrib3sARB) wglGetProcAddress("glVertexAttrib3sARB");
    glVertexAttrib3svARB = (mogl_function_glVertexAttrib3svARB) wglGetProcAddress("glVertexAttrib3svARB");
    glVertexAttrib4NbvARB = (mogl_function_glVertexAttrib4NbvARB) wglGetProcAddress("glVertexAttrib4NbvARB");
    glVertexAttrib4NivARB = (mogl_function_glVertexAttrib4NivARB) wglGetProcAddress("glVertexAttrib4NivARB");
    glVertexAttrib4NsvARB = (mogl_function_glVertexAttrib4NsvARB) wglGetProcAddress("glVertexAttrib4NsvARB");
    glVertexAttrib4NubARB = (mogl_function_glVertexAttrib4NubARB) wglGetProcAddress("glVertexAttrib4NubARB");
    glVertexAttrib4NubvARB = (mogl_function_glVertexAttrib4NubvARB) wglGetProcAddress("glVertexAttrib4NubvARB");
    glVertexAttrib4NuivARB = (mogl_function_glVertexAttrib4NuivARB) wglGetProcAddress("glVertexAttrib4NuivARB");
    glVertexAttrib4NusvARB = (mogl_function_glVertexAttrib4NusvARB) wglGetProcAddress("glVertexAttrib4NusvARB");
    glVertexAttrib4bvARB = (mogl_function_glVertexAttrib4bvARB) wglGetProcAddress("glVertexAttrib4bvARB");
    glVertexAttrib4dARB = (mogl_function_glVertexAttrib4dARB) wglGetProcAddress("glVertexAttrib4dARB");
    glVertexAttrib4dvARB = (mogl_function_glVertexAttrib4dvARB) wglGetProcAddress("glVertexAttrib4dvARB");
    glVertexAttrib4fARB = (mogl_function_glVertexAttrib4fARB) wglGetProcAddress("glVertexAttrib4fARB");
    glVertexAttrib4fvARB = (mogl_function_glVertexAttrib4fvARB) wglGetProcAddress("glVertexAttrib4fvARB");
    glVertexAttrib4ivARB = (mogl_function_glVertexAttrib4ivARB) wglGetProcAddress("glVertexAttrib4ivARB");
    glVertexAttrib4sARB = (mogl_function_glVertexAttrib4sARB) wglGetProcAddress("glVertexAttrib4sARB");
    glVertexAttrib4svARB = (mogl_function_glVertexAttrib4svARB) wglGetProcAddress("glVertexAttrib4svARB");
    glVertexAttrib4ubvARB = (mogl_function_glVertexAttrib4ubvARB) wglGetProcAddress("glVertexAttrib4ubvARB");
    glVertexAttrib4uivARB = (mogl_function_glVertexAttrib4uivARB) wglGetProcAddress("glVertexAttrib4uivARB");
    glVertexAttrib4usvARB = (mogl_function_glVertexAttrib4usvARB) wglGetProcAddress("glVertexAttrib4usvARB");
    glVertexAttribPointerARB = (mogl_function_glVertexAttribPointerARB) wglGetProcAddress("glVertexAttribPointerARB");
    glEnableVertexAttribArrayARB = (mogl_function_glEnableVertexAttribArrayARB) wglGetProcAddress("glEnableVertexAttribArrayARB");
    glDisableVertexAttribArrayARB = (mogl_function_glDisableVertexAttribArrayARB) wglGetProcAddress("glDisableVertexAttribArrayARB");
    glGetVertexAttribdvARB = (mogl_function_glGetVertexAttribdvARB) wglGetProcAddress("glGetVertexAttribdvARB");
    glGetVertexAttribfvARB = (mogl_function_glGetVertexAttribfvARB) wglGetProcAddress("glGetVertexAttribfvARB");
    glGetVertexAttribivARB = (mogl_function_glGetVertexAttribivARB) wglGetProcAddress("glGetVertexAttribivARB");
    glGetVertexAttribPointervARB = (mogl_function_glGetVertexAttribPointervARB) wglGetProcAddress("glGetVertexAttribPointervARB");
    glBindAttribLocationARB = (mogl_function_glBindAttribLocationARB) wglGetProcAddress("glBindAttribLocationARB");
    glGetActiveAttribARB = (mogl_function_glGetActiveAttribARB) wglGetProcAddress("glGetActiveAttribARB");
    glGetAttribLocationARB = (mogl_function_glGetAttribLocationARB) wglGetProcAddress("glGetAttribLocationARB");
    glDepthRangeArraydvNV = (mogl_function_glDepthRangeArraydvNV) wglGetProcAddress("glDepthRangeArraydvNV");
    glDepthRangeIndexeddNV = (mogl_function_glDepthRangeIndexeddNV) wglGetProcAddress("glDepthRangeIndexeddNV");
    glWindowPos2dARB = (mogl_function_glWindowPos2dARB) wglGetProcAddress("glWindowPos2dARB");
    glWindowPos2dvARB = (mogl_function_glWindowPos2dvARB) wglGetProcAddress("glWindowPos2dvARB");
    glWindowPos2fARB = (mogl_function_glWindowPos2fARB) wglGetProcAddress("glWindowPos2fARB");
    glWindowPos2fvARB = (mogl_function_glWindowPos2fvARB) wglGetProcAddress("glWindowPos2fvARB");
    glWindowPos2iARB = (mogl_function_glWindowPos2iARB) wglGetProcAddress("glWindowPos2iARB");
    glWindowPos2ivARB = (mogl_function_glWindowPos2ivARB) wglGetProcAddress("glWindowPos2ivARB");
    glWindowPos2sARB = (mogl_function_glWindowPos2sARB) wglGetProcAddress("glWindowPos2sARB");
    glWindowPos2svARB = (mogl_function_glWindowPos2svARB) wglGetProcAddress("glWindowPos2svARB");
    glWindowPos3dARB = (mogl_function_glWindowPos3dARB) wglGetProcAddress("glWindowPos3dARB");
    glWindowPos3dvARB = (mogl_function_glWindowPos3dvARB) wglGetProcAddress("glWindowPos3dvARB");
    glWindowPos3fARB = (mogl_function_glWindowPos3fARB) wglGetProcAddress("glWindowPos3fARB");
    glWindowPos3fvARB = (mogl_function_glWindowPos3fvARB) wglGetProcAddress("glWindowPos3fvARB");
    glWindowPos3iARB = (mogl_function_glWindowPos3iARB) wglGetProcAddress("glWindowPos3iARB");
    glWindowPos3ivARB = (mogl_function_glWindowPos3ivARB) wglGetProcAddress("glWindowPos3ivARB");
    glWindowPos3sARB = (mogl_function_glWindowPos3sARB) wglGetProcAddress("glWindowPos3sARB");
    glWindowPos3svARB = (mogl_function_glWindowPos3svARB) wglGetProcAddress("glWindowPos3svARB");
    glBlendBarrierKHR = (mogl_function_glBlendBarrierKHR) wglGetProcAddress("glBlendBarrierKHR");
    glMaxShaderCompilerThreadsKHR = (mogl_function_glMaxShaderCompilerThreadsKHR) wglGetProcAddress("glMaxShaderCompilerThreadsKHR");
    glMultiTexCoord1bOES = (mogl_function_glMultiTexCoord1bOES) wglGetProcAddress("glMultiTexCoord1bOES");
    glMultiTexCoord1bvOES = (mogl_function_glMultiTexCoord1bvOES) wglGetProcAddress("glMultiTexCoord1bvOES");
    glMultiTexCoord2bOES = (mogl_function_glMultiTexCoord2bOES) wglGetProcAddress("glMultiTexCoord2bOES");
    glMultiTexCoord2bvOES = (mogl_function_glMultiTexCoord2bvOES) wglGetProcAddress("glMultiTexCoord2bvOES");
    glMultiTexCoord3bOES = (mogl_function_glMultiTexCoord3bOES) wglGetProcAddress("glMultiTexCoord3bOES");
    glMultiTexCoord3bvOES = (mogl_function_glMultiTexCoord3bvOES) wglGetProcAddress("glMultiTexCoord3bvOES");
    glMultiTexCoord4bOES = (mogl_function_glMultiTexCoord4bOES) wglGetProcAddress("glMultiTexCoord4bOES");
    glMultiTexCoord4bvOES = (mogl_function_glMultiTexCoord4bvOES) wglGetProcAddress("glMultiTexCoord4bvOES");
    glTexCoord1bOES = (mogl_function_glTexCoord1bOES) wglGetProcAddress("glTexCoord1bOES");
    glTexCoord1bvOES = (mogl_function_glTexCoord1bvOES) wglGetProcAddress("glTexCoord1bvOES");
    glTexCoord2bOES = (mogl_function_glTexCoord2bOES) wglGetProcAddress("glTexCoord2bOES");
    glTexCoord2bvOES = (mogl_function_glTexCoord2bvOES) wglGetProcAddress("glTexCoord2bvOES");
    glTexCoord3bOES = (mogl_function_glTexCoord3bOES) wglGetProcAddress("glTexCoord3bOES");
    glTexCoord3bvOES = (mogl_function_glTexCoord3bvOES) wglGetProcAddress("glTexCoord3bvOES");
    glTexCoord4bOES = (mogl_function_glTexCoord4bOES) wglGetProcAddress("glTexCoord4bOES");
    glTexCoord4bvOES = (mogl_function_glTexCoord4bvOES) wglGetProcAddress("glTexCoord4bvOES");
    glVertex2bOES = (mogl_function_glVertex2bOES) wglGetProcAddress("glVertex2bOES");
    glVertex2bvOES = (mogl_function_glVertex2bvOES) wglGetProcAddress("glVertex2bvOES");
    glVertex3bOES = (mogl_function_glVertex3bOES) wglGetProcAddress("glVertex3bOES");
    glVertex3bvOES = (mogl_function_glVertex3bvOES) wglGetProcAddress("glVertex3bvOES");
    glVertex4bOES = (mogl_function_glVertex4bOES) wglGetProcAddress("glVertex4bOES");
    glVertex4bvOES = (mogl_function_glVertex4bvOES) wglGetProcAddress("glVertex4bvOES");
    glAlphaFuncxOES = (mogl_function_glAlphaFuncxOES) wglGetProcAddress("glAlphaFuncxOES");
    glClearColorxOES = (mogl_function_glClearColorxOES) wglGetProcAddress("glClearColorxOES");
    glClearDepthxOES = (mogl_function_glClearDepthxOES) wglGetProcAddress("glClearDepthxOES");
    glClipPlanexOES = (mogl_function_glClipPlanexOES) wglGetProcAddress("glClipPlanexOES");
    glColor4xOES = (mogl_function_glColor4xOES) wglGetProcAddress("glColor4xOES");
    glDepthRangexOES = (mogl_function_glDepthRangexOES) wglGetProcAddress("glDepthRangexOES");
    glFogxOES = (mogl_function_glFogxOES) wglGetProcAddress("glFogxOES");
    glFogxvOES = (mogl_function_glFogxvOES) wglGetProcAddress("glFogxvOES");
    glFrustumxOES = (mogl_function_glFrustumxOES) wglGetProcAddress("glFrustumxOES");
    glGetClipPlanexOES = (mogl_function_glGetClipPlanexOES) wglGetProcAddress("glGetClipPlanexOES");
    glGetFixedvOES = (mogl_function_glGetFixedvOES) wglGetProcAddress("glGetFixedvOES");
    glGetTexEnvxvOES = (mogl_function_glGetTexEnvxvOES) wglGetProcAddress("glGetTexEnvxvOES");
    glGetTexParameterxvOES = (mogl_function_glGetTexParameterxvOES) wglGetProcAddress("glGetTexParameterxvOES");
    glLightModelxOES = (mogl_function_glLightModelxOES) wglGetProcAddress("glLightModelxOES");
    glLightModelxvOES = (mogl_function_glLightModelxvOES) wglGetProcAddress("glLightModelxvOES");
    glLightxOES = (mogl_function_glLightxOES) wglGetProcAddress("glLightxOES");
    glLightxvOES = (mogl_function_glLightxvOES) wglGetProcAddress("glLightxvOES");
    glLineWidthxOES = (mogl_function_glLineWidthxOES) wglGetProcAddress("glLineWidthxOES");
    glLoadMatrixxOES = (mogl_function_glLoadMatrixxOES) wglGetProcAddress("glLoadMatrixxOES");
    glMaterialxOES = (mogl_function_glMaterialxOES) wglGetProcAddress("glMaterialxOES");
    glMaterialxvOES = (mogl_function_glMaterialxvOES) wglGetProcAddress("glMaterialxvOES");
    glMultMatrixxOES = (mogl_function_glMultMatrixxOES) wglGetProcAddress("glMultMatrixxOES");
    glMultiTexCoord4xOES = (mogl_function_glMultiTexCoord4xOES) wglGetProcAddress("glMultiTexCoord4xOES");
    glNormal3xOES = (mogl_function_glNormal3xOES) wglGetProcAddress("glNormal3xOES");
    glOrthoxOES = (mogl_function_glOrthoxOES) wglGetProcAddress("glOrthoxOES");
    glPointParameterxvOES = (mogl_function_glPointParameterxvOES) wglGetProcAddress("glPointParameterxvOES");
    glPointSizexOES = (mogl_function_glPointSizexOES) wglGetProcAddress("glPointSizexOES");
    glPolygonOffsetxOES = (mogl_function_glPolygonOffsetxOES) wglGetProcAddress("glPolygonOffsetxOES");
    glRotatexOES = (mogl_function_glRotatexOES) wglGetProcAddress("glRotatexOES");
    glScalexOES = (mogl_function_glScalexOES) wglGetProcAddress("glScalexOES");
    glTexEnvxOES = (mogl_function_glTexEnvxOES) wglGetProcAddress("glTexEnvxOES");
    glTexEnvxvOES = (mogl_function_glTexEnvxvOES) wglGetProcAddress("glTexEnvxvOES");
    glTexParameterxOES = (mogl_function_glTexParameterxOES) wglGetProcAddress("glTexParameterxOES");
    glTexParameterxvOES = (mogl_function_glTexParameterxvOES) wglGetProcAddress("glTexParameterxvOES");
    glTranslatexOES = (mogl_function_glTranslatexOES) wglGetProcAddress("glTranslatexOES");
    glAccumxOES = (mogl_function_glAccumxOES) wglGetProcAddress("glAccumxOES");
    glBitmapxOES = (mogl_function_glBitmapxOES) wglGetProcAddress("glBitmapxOES");
    glBlendColorxOES = (mogl_function_glBlendColorxOES) wglGetProcAddress("glBlendColorxOES");
    glClearAccumxOES = (mogl_function_glClearAccumxOES) wglGetProcAddress("glClearAccumxOES");
    glColor3xOES = (mogl_function_glColor3xOES) wglGetProcAddress("glColor3xOES");
    glColor3xvOES = (mogl_function_glColor3xvOES) wglGetProcAddress("glColor3xvOES");
    glColor4xvOES = (mogl_function_glColor4xvOES) wglGetProcAddress("glColor4xvOES");
    glConvolutionParameterxOES = (mogl_function_glConvolutionParameterxOES) wglGetProcAddress("glConvolutionParameterxOES");
    glConvolutionParameterxvOES = (mogl_function_glConvolutionParameterxvOES) wglGetProcAddress("glConvolutionParameterxvOES");
    glEvalCoord1xOES = (mogl_function_glEvalCoord1xOES) wglGetProcAddress("glEvalCoord1xOES");
    glEvalCoord1xvOES = (mogl_function_glEvalCoord1xvOES) wglGetProcAddress("glEvalCoord1xvOES");
    glEvalCoord2xOES = (mogl_function_glEvalCoord2xOES) wglGetProcAddress("glEvalCoord2xOES");
    glEvalCoord2xvOES = (mogl_function_glEvalCoord2xvOES) wglGetProcAddress("glEvalCoord2xvOES");
    glFeedbackBufferxOES = (mogl_function_glFeedbackBufferxOES) wglGetProcAddress("glFeedbackBufferxOES");
    glGetConvolutionParameterxvOES = (mogl_function_glGetConvolutionParameterxvOES) wglGetProcAddress("glGetConvolutionParameterxvOES");
    glGetHistogramParameterxvOES = (mogl_function_glGetHistogramParameterxvOES) wglGetProcAddress("glGetHistogramParameterxvOES");
    glGetLightxOES = (mogl_function_glGetLightxOES) wglGetProcAddress("glGetLightxOES");
    glGetMapxvOES = (mogl_function_glGetMapxvOES) wglGetProcAddress("glGetMapxvOES");
    glGetMaterialxOES = (mogl_function_glGetMaterialxOES) wglGetProcAddress("glGetMaterialxOES");
    glGetPixelMapxv = (mogl_function_glGetPixelMapxv) wglGetProcAddress("glGetPixelMapxv");
    glGetTexGenxvOES = (mogl_function_glGetTexGenxvOES) wglGetProcAddress("glGetTexGenxvOES");
    glGetTexLevelParameterxvOES = (mogl_function_glGetTexLevelParameterxvOES) wglGetProcAddress("glGetTexLevelParameterxvOES");
    glIndexxOES = (mogl_function_glIndexxOES) wglGetProcAddress("glIndexxOES");
    glIndexxvOES = (mogl_function_glIndexxvOES) wglGetProcAddress("glIndexxvOES");
    glLoadTransposeMatrixxOES = (mogl_function_glLoadTransposeMatrixxOES) wglGetProcAddress("glLoadTransposeMatrixxOES");
    glMap1xOES = (mogl_function_glMap1xOES) wglGetProcAddress("glMap1xOES");
    glMap2xOES = (mogl_function_glMap2xOES) wglGetProcAddress("glMap2xOES");
    glMapGrid1xOES = (mogl_function_glMapGrid1xOES) wglGetProcAddress("glMapGrid1xOES");
    glMapGrid2xOES = (mogl_function_glMapGrid2xOES) wglGetProcAddress("glMapGrid2xOES");
    glMultTransposeMatrixxOES = (mogl_function_glMultTransposeMatrixxOES) wglGetProcAddress("glMultTransposeMatrixxOES");
    glMultiTexCoord1xOES = (mogl_function_glMultiTexCoord1xOES) wglGetProcAddress("glMultiTexCoord1xOES");
    glMultiTexCoord1xvOES = (mogl_function_glMultiTexCoord1xvOES) wglGetProcAddress("glMultiTexCoord1xvOES");
    glMultiTexCoord2xOES = (mogl_function_glMultiTexCoord2xOES) wglGetProcAddress("glMultiTexCoord2xOES");
    glMultiTexCoord2xvOES = (mogl_function_glMultiTexCoord2xvOES) wglGetProcAddress("glMultiTexCoord2xvOES");
    glMultiTexCoord3xOES = (mogl_function_glMultiTexCoord3xOES) wglGetProcAddress("glMultiTexCoord3xOES");
    glMultiTexCoord3xvOES = (mogl_function_glMultiTexCoord3xvOES) wglGetProcAddress("glMultiTexCoord3xvOES");
    glMultiTexCoord4xvOES = (mogl_function_glMultiTexCoord4xvOES) wglGetProcAddress("glMultiTexCoord4xvOES");
    glNormal3xvOES = (mogl_function_glNormal3xvOES) wglGetProcAddress("glNormal3xvOES");
    glPassThroughxOES = (mogl_function_glPassThroughxOES) wglGetProcAddress("glPassThroughxOES");
    glPixelMapx = (mogl_function_glPixelMapx) wglGetProcAddress("glPixelMapx");
    glPixelStorex = (mogl_function_glPixelStorex) wglGetProcAddress("glPixelStorex");
    glPixelTransferxOES = (mogl_function_glPixelTransferxOES) wglGetProcAddress("glPixelTransferxOES");
    glPixelZoomxOES = (mogl_function_glPixelZoomxOES) wglGetProcAddress("glPixelZoomxOES");
    glPrioritizeTexturesxOES = (mogl_function_glPrioritizeTexturesxOES) wglGetProcAddress("glPrioritizeTexturesxOES");
    glRasterPos2xOES = (mogl_function_glRasterPos2xOES) wglGetProcAddress("glRasterPos2xOES");
    glRasterPos2xvOES = (mogl_function_glRasterPos2xvOES) wglGetProcAddress("glRasterPos2xvOES");
    glRasterPos3xOES = (mogl_function_glRasterPos3xOES) wglGetProcAddress("glRasterPos3xOES");
    glRasterPos3xvOES = (mogl_function_glRasterPos3xvOES) wglGetProcAddress("glRasterPos3xvOES");
    glRasterPos4xOES = (mogl_function_glRasterPos4xOES) wglGetProcAddress("glRasterPos4xOES");
    glRasterPos4xvOES = (mogl_function_glRasterPos4xvOES) wglGetProcAddress("glRasterPos4xvOES");
    glRectxOES = (mogl_function_glRectxOES) wglGetProcAddress("glRectxOES");
    glRectxvOES = (mogl_function_glRectxvOES) wglGetProcAddress("glRectxvOES");
    glTexCoord1xOES = (mogl_function_glTexCoord1xOES) wglGetProcAddress("glTexCoord1xOES");
    glTexCoord1xvOES = (mogl_function_glTexCoord1xvOES) wglGetProcAddress("glTexCoord1xvOES");
    glTexCoord2xOES = (mogl_function_glTexCoord2xOES) wglGetProcAddress("glTexCoord2xOES");
    glTexCoord2xvOES = (mogl_function_glTexCoord2xvOES) wglGetProcAddress("glTexCoord2xvOES");
    glTexCoord3xOES = (mogl_function_glTexCoord3xOES) wglGetProcAddress("glTexCoord3xOES");
    glTexCoord3xvOES = (mogl_function_glTexCoord3xvOES) wglGetProcAddress("glTexCoord3xvOES");
    glTexCoord4xOES = (mogl_function_glTexCoord4xOES) wglGetProcAddress("glTexCoord4xOES");
    glTexCoord4xvOES = (mogl_function_glTexCoord4xvOES) wglGetProcAddress("glTexCoord4xvOES");
    glTexGenxOES = (mogl_function_glTexGenxOES) wglGetProcAddress("glTexGenxOES");
    glTexGenxvOES = (mogl_function_glTexGenxvOES) wglGetProcAddress("glTexGenxvOES");
    glVertex2xOES = (mogl_function_glVertex2xOES) wglGetProcAddress("glVertex2xOES");
    glVertex2xvOES = (mogl_function_glVertex2xvOES) wglGetProcAddress("glVertex2xvOES");
    glVertex3xOES = (mogl_function_glVertex3xOES) wglGetProcAddress("glVertex3xOES");
    glVertex3xvOES = (mogl_function_glVertex3xvOES) wglGetProcAddress("glVertex3xvOES");
    glVertex4xOES = (mogl_function_glVertex4xOES) wglGetProcAddress("glVertex4xOES");
    glVertex4xvOES = (mogl_function_glVertex4xvOES) wglGetProcAddress("glVertex4xvOES");
    glQueryMatrixxOES = (mogl_function_glQueryMatrixxOES) wglGetProcAddress("glQueryMatrixxOES");
    glClearDepthfOES = (mogl_function_glClearDepthfOES) wglGetProcAddress("glClearDepthfOES");
    glClipPlanefOES = (mogl_function_glClipPlanefOES) wglGetProcAddress("glClipPlanefOES");
    glDepthRangefOES = (mogl_function_glDepthRangefOES) wglGetProcAddress("glDepthRangefOES");
    glFrustumfOES = (mogl_function_glFrustumfOES) wglGetProcAddress("glFrustumfOES");
    glGetClipPlanefOES = (mogl_function_glGetClipPlanefOES) wglGetProcAddress("glGetClipPlanefOES");
    glOrthofOES = (mogl_function_glOrthofOES) wglGetProcAddress("glOrthofOES");
    glTbufferMask3DFX = (mogl_function_glTbufferMask3DFX) wglGetProcAddress("glTbufferMask3DFX");
    glDebugMessageEnableAMD = (mogl_function_glDebugMessageEnableAMD) wglGetProcAddress("glDebugMessageEnableAMD");
    glDebugMessageInsertAMD = (mogl_function_glDebugMessageInsertAMD) wglGetProcAddress("glDebugMessageInsertAMD");
    glDebugMessageCallbackAMD = (mogl_function_glDebugMessageCallbackAMD) wglGetProcAddress("glDebugMessageCallbackAMD");
    glGetDebugMessageLogAMD = (mogl_function_glGetDebugMessageLogAMD) wglGetProcAddress("glGetDebugMessageLogAMD");
    glBlendFuncIndexedAMD = (mogl_function_glBlendFuncIndexedAMD) wglGetProcAddress("glBlendFuncIndexedAMD");
    glBlendFuncSeparateIndexedAMD = (mogl_function_glBlendFuncSeparateIndexedAMD) wglGetProcAddress("glBlendFuncSeparateIndexedAMD");
    glBlendEquationIndexedAMD = (mogl_function_glBlendEquationIndexedAMD) wglGetProcAddress("glBlendEquationIndexedAMD");
    glBlendEquationSeparateIndexedAMD = (mogl_function_glBlendEquationSeparateIndexedAMD) wglGetProcAddress("glBlendEquationSeparateIndexedAMD");
    glRenderbufferStorageMultisampleAdvancedAMD = (mogl_function_glRenderbufferStorageMultisampleAdvancedAMD) wglGetProcAddress("glRenderbufferStorageMultisampleAdvancedAMD");
    glNamedRenderbufferStorageMultisampleAdvancedAMD = (mogl_function_glNamedRenderbufferStorageMultisampleAdvancedAMD) wglGetProcAddress("glNamedRenderbufferStorageMultisampleAdvancedAMD");
    glFramebufferSamplePositionsfvAMD = (mogl_function_glFramebufferSamplePositionsfvAMD) wglGetProcAddress("glFramebufferSamplePositionsfvAMD");
    glNamedFramebufferSamplePositionsfvAMD = (mogl_function_glNamedFramebufferSamplePositionsfvAMD) wglGetProcAddress("glNamedFramebufferSamplePositionsfvAMD");
    glGetFramebufferParameterfvAMD = (mogl_function_glGetFramebufferParameterfvAMD) wglGetProcAddress("glGetFramebufferParameterfvAMD");
    glGetNamedFramebufferParameterfvAMD = (mogl_function_glGetNamedFramebufferParameterfvAMD) wglGetProcAddress("glGetNamedFramebufferParameterfvAMD");
    glUniform1i64NV = (mogl_function_glUniform1i64NV) wglGetProcAddress("glUniform1i64NV");
    glUniform2i64NV = (mogl_function_glUniform2i64NV) wglGetProcAddress("glUniform2i64NV");
    glUniform3i64NV = (mogl_function_glUniform3i64NV) wglGetProcAddress("glUniform3i64NV");
    glUniform4i64NV = (mogl_function_glUniform4i64NV) wglGetProcAddress("glUniform4i64NV");
    glUniform1i64vNV = (mogl_function_glUniform1i64vNV) wglGetProcAddress("glUniform1i64vNV");
    glUniform2i64vNV = (mogl_function_glUniform2i64vNV) wglGetProcAddress("glUniform2i64vNV");
    glUniform3i64vNV = (mogl_function_glUniform3i64vNV) wglGetProcAddress("glUniform3i64vNV");
    glUniform4i64vNV = (mogl_function_glUniform4i64vNV) wglGetProcAddress("glUniform4i64vNV");
    glUniform1ui64NV = (mogl_function_glUniform1ui64NV) wglGetProcAddress("glUniform1ui64NV");
    glUniform2ui64NV = (mogl_function_glUniform2ui64NV) wglGetProcAddress("glUniform2ui64NV");
    glUniform3ui64NV = (mogl_function_glUniform3ui64NV) wglGetProcAddress("glUniform3ui64NV");
    glUniform4ui64NV = (mogl_function_glUniform4ui64NV) wglGetProcAddress("glUniform4ui64NV");
    glUniform1ui64vNV = (mogl_function_glUniform1ui64vNV) wglGetProcAddress("glUniform1ui64vNV");
    glUniform2ui64vNV = (mogl_function_glUniform2ui64vNV) wglGetProcAddress("glUniform2ui64vNV");
    glUniform3ui64vNV = (mogl_function_glUniform3ui64vNV) wglGetProcAddress("glUniform3ui64vNV");
    glUniform4ui64vNV = (mogl_function_glUniform4ui64vNV) wglGetProcAddress("glUniform4ui64vNV");
    glGetUniformi64vNV = (mogl_function_glGetUniformi64vNV) wglGetProcAddress("glGetUniformi64vNV");
    glGetUniformui64vNV = (mogl_function_glGetUniformui64vNV) wglGetProcAddress("glGetUniformui64vNV");
    glProgramUniform1i64NV = (mogl_function_glProgramUniform1i64NV) wglGetProcAddress("glProgramUniform1i64NV");
    glProgramUniform2i64NV = (mogl_function_glProgramUniform2i64NV) wglGetProcAddress("glProgramUniform2i64NV");
    glProgramUniform3i64NV = (mogl_function_glProgramUniform3i64NV) wglGetProcAddress("glProgramUniform3i64NV");
    glProgramUniform4i64NV = (mogl_function_glProgramUniform4i64NV) wglGetProcAddress("glProgramUniform4i64NV");
    glProgramUniform1i64vNV = (mogl_function_glProgramUniform1i64vNV) wglGetProcAddress("glProgramUniform1i64vNV");
    glProgramUniform2i64vNV = (mogl_function_glProgramUniform2i64vNV) wglGetProcAddress("glProgramUniform2i64vNV");
    glProgramUniform3i64vNV = (mogl_function_glProgramUniform3i64vNV) wglGetProcAddress("glProgramUniform3i64vNV");
    glProgramUniform4i64vNV = (mogl_function_glProgramUniform4i64vNV) wglGetProcAddress("glProgramUniform4i64vNV");
    glProgramUniform1ui64NV = (mogl_function_glProgramUniform1ui64NV) wglGetProcAddress("glProgramUniform1ui64NV");
    glProgramUniform2ui64NV = (mogl_function_glProgramUniform2ui64NV) wglGetProcAddress("glProgramUniform2ui64NV");
    glProgramUniform3ui64NV = (mogl_function_glProgramUniform3ui64NV) wglGetProcAddress("glProgramUniform3ui64NV");
    glProgramUniform4ui64NV = (mogl_function_glProgramUniform4ui64NV) wglGetProcAddress("glProgramUniform4ui64NV");
    glProgramUniform1ui64vNV = (mogl_function_glProgramUniform1ui64vNV) wglGetProcAddress("glProgramUniform1ui64vNV");
    glProgramUniform2ui64vNV = (mogl_function_glProgramUniform2ui64vNV) wglGetProcAddress("glProgramUniform2ui64vNV");
    glProgramUniform3ui64vNV = (mogl_function_glProgramUniform3ui64vNV) wglGetProcAddress("glProgramUniform3ui64vNV");
    glProgramUniform4ui64vNV = (mogl_function_glProgramUniform4ui64vNV) wglGetProcAddress("glProgramUniform4ui64vNV");
    glVertexAttribParameteriAMD = (mogl_function_glVertexAttribParameteriAMD) wglGetProcAddress("glVertexAttribParameteriAMD");
    glMultiDrawArraysIndirectAMD = (mogl_function_glMultiDrawArraysIndirectAMD) wglGetProcAddress("glMultiDrawArraysIndirectAMD");
    glMultiDrawElementsIndirectAMD = (mogl_function_glMultiDrawElementsIndirectAMD) wglGetProcAddress("glMultiDrawElementsIndirectAMD");
    glGenNamesAMD = (mogl_function_glGenNamesAMD) wglGetProcAddress("glGenNamesAMD");
    glDeleteNamesAMD = (mogl_function_glDeleteNamesAMD) wglGetProcAddress("glDeleteNamesAMD");
    glIsNameAMD = (mogl_function_glIsNameAMD) wglGetProcAddress("glIsNameAMD");
    glQueryObjectParameteruiAMD = (mogl_function_glQueryObjectParameteruiAMD) wglGetProcAddress("glQueryObjectParameteruiAMD");
    glGetPerfMonitorGroupsAMD = (mogl_function_glGetPerfMonitorGroupsAMD) wglGetProcAddress("glGetPerfMonitorGroupsAMD");
    glGetPerfMonitorCountersAMD = (mogl_function_glGetPerfMonitorCountersAMD) wglGetProcAddress("glGetPerfMonitorCountersAMD");
    glGetPerfMonitorGroupStringAMD = (mogl_function_glGetPerfMonitorGroupStringAMD) wglGetProcAddress("glGetPerfMonitorGroupStringAMD");
    glGetPerfMonitorCounterStringAMD = (mogl_function_glGetPerfMonitorCounterStringAMD) wglGetProcAddress("glGetPerfMonitorCounterStringAMD");
    glGetPerfMonitorCounterInfoAMD = (mogl_function_glGetPerfMonitorCounterInfoAMD) wglGetProcAddress("glGetPerfMonitorCounterInfoAMD");
    glGenPerfMonitorsAMD = (mogl_function_glGenPerfMonitorsAMD) wglGetProcAddress("glGenPerfMonitorsAMD");
    glDeletePerfMonitorsAMD = (mogl_function_glDeletePerfMonitorsAMD) wglGetProcAddress("glDeletePerfMonitorsAMD");
    glSelectPerfMonitorCountersAMD = (mogl_function_glSelectPerfMonitorCountersAMD) wglGetProcAddress("glSelectPerfMonitorCountersAMD");
    glBeginPerfMonitorAMD = (mogl_function_glBeginPerfMonitorAMD) wglGetProcAddress("glBeginPerfMonitorAMD");
    glEndPerfMonitorAMD = (mogl_function_glEndPerfMonitorAMD) wglGetProcAddress("glEndPerfMonitorAMD");
    glGetPerfMonitorCounterDataAMD = (mogl_function_glGetPerfMonitorCounterDataAMD) wglGetProcAddress("glGetPerfMonitorCounterDataAMD");
    glSetMultisamplefvAMD = (mogl_function_glSetMultisamplefvAMD) wglGetProcAddress("glSetMultisamplefvAMD");
    glTexStorageSparseAMD = (mogl_function_glTexStorageSparseAMD) wglGetProcAddress("glTexStorageSparseAMD");
    glTextureStorageSparseAMD = (mogl_function_glTextureStorageSparseAMD) wglGetProcAddress("glTextureStorageSparseAMD");
    glStencilOpValueAMD = (mogl_function_glStencilOpValueAMD) wglGetProcAddress("glStencilOpValueAMD");
    glTessellationFactorAMD = (mogl_function_glTessellationFactorAMD) wglGetProcAddress("glTessellationFactorAMD");
    glTessellationModeAMD = (mogl_function_glTessellationModeAMD) wglGetProcAddress("glTessellationModeAMD");
    glElementPointerAPPLE = (mogl_function_glElementPointerAPPLE) wglGetProcAddress("glElementPointerAPPLE");
    glDrawElementArrayAPPLE = (mogl_function_glDrawElementArrayAPPLE) wglGetProcAddress("glDrawElementArrayAPPLE");
    glDrawRangeElementArrayAPPLE = (mogl_function_glDrawRangeElementArrayAPPLE) wglGetProcAddress("glDrawRangeElementArrayAPPLE");
    glMultiDrawElementArrayAPPLE = (mogl_function_glMultiDrawElementArrayAPPLE) wglGetProcAddress("glMultiDrawElementArrayAPPLE");
    glMultiDrawRangeElementArrayAPPLE = (mogl_function_glMultiDrawRangeElementArrayAPPLE) wglGetProcAddress("glMultiDrawRangeElementArrayAPPLE");
    glGenFencesAPPLE = (mogl_function_glGenFencesAPPLE) wglGetProcAddress("glGenFencesAPPLE");
    glDeleteFencesAPPLE = (mogl_function_glDeleteFencesAPPLE) wglGetProcAddress("glDeleteFencesAPPLE");
    glSetFenceAPPLE = (mogl_function_glSetFenceAPPLE) wglGetProcAddress("glSetFenceAPPLE");
    glIsFenceAPPLE = (mogl_function_glIsFenceAPPLE) wglGetProcAddress("glIsFenceAPPLE");
    glTestFenceAPPLE = (mogl_function_glTestFenceAPPLE) wglGetProcAddress("glTestFenceAPPLE");
    glFinishFenceAPPLE = (mogl_function_glFinishFenceAPPLE) wglGetProcAddress("glFinishFenceAPPLE");
    glTestObjectAPPLE = (mogl_function_glTestObjectAPPLE) wglGetProcAddress("glTestObjectAPPLE");
    glFinishObjectAPPLE = (mogl_function_glFinishObjectAPPLE) wglGetProcAddress("glFinishObjectAPPLE");
    glBufferParameteriAPPLE = (mogl_function_glBufferParameteriAPPLE) wglGetProcAddress("glBufferParameteriAPPLE");
    glFlushMappedBufferRangeAPPLE = (mogl_function_glFlushMappedBufferRangeAPPLE) wglGetProcAddress("glFlushMappedBufferRangeAPPLE");
    glObjectPurgeableAPPLE = (mogl_function_glObjectPurgeableAPPLE) wglGetProcAddress("glObjectPurgeableAPPLE");
    glObjectUnpurgeableAPPLE = (mogl_function_glObjectUnpurgeableAPPLE) wglGetProcAddress("glObjectUnpurgeableAPPLE");
    glGetObjectParameterivAPPLE = (mogl_function_glGetObjectParameterivAPPLE) wglGetProcAddress("glGetObjectParameterivAPPLE");
    glTextureRangeAPPLE = (mogl_function_glTextureRangeAPPLE) wglGetProcAddress("glTextureRangeAPPLE");
    glGetTexParameterPointervAPPLE = (mogl_function_glGetTexParameterPointervAPPLE) wglGetProcAddress("glGetTexParameterPointervAPPLE");
    glBindVertexArrayAPPLE = (mogl_function_glBindVertexArrayAPPLE) wglGetProcAddress("glBindVertexArrayAPPLE");
    glDeleteVertexArraysAPPLE = (mogl_function_glDeleteVertexArraysAPPLE) wglGetProcAddress("glDeleteVertexArraysAPPLE");
    glGenVertexArraysAPPLE = (mogl_function_glGenVertexArraysAPPLE) wglGetProcAddress("glGenVertexArraysAPPLE");
    glIsVertexArrayAPPLE = (mogl_function_glIsVertexArrayAPPLE) wglGetProcAddress("glIsVertexArrayAPPLE");
    glVertexArrayRangeAPPLE = (mogl_function_glVertexArrayRangeAPPLE) wglGetProcAddress("glVertexArrayRangeAPPLE");
    glFlushVertexArrayRangeAPPLE = (mogl_function_glFlushVertexArrayRangeAPPLE) wglGetProcAddress("glFlushVertexArrayRangeAPPLE");
    glVertexArrayParameteriAPPLE = (mogl_function_glVertexArrayParameteriAPPLE) wglGetProcAddress("glVertexArrayParameteriAPPLE");
    glEnableVertexAttribAPPLE = (mogl_function_glEnableVertexAttribAPPLE) wglGetProcAddress("glEnableVertexAttribAPPLE");
    glDisableVertexAttribAPPLE = (mogl_function_glDisableVertexAttribAPPLE) wglGetProcAddress("glDisableVertexAttribAPPLE");
    glIsVertexAttribEnabledAPPLE = (mogl_function_glIsVertexAttribEnabledAPPLE) wglGetProcAddress("glIsVertexAttribEnabledAPPLE");
    glMapVertexAttrib1dAPPLE = (mogl_function_glMapVertexAttrib1dAPPLE) wglGetProcAddress("glMapVertexAttrib1dAPPLE");
    glMapVertexAttrib1fAPPLE = (mogl_function_glMapVertexAttrib1fAPPLE) wglGetProcAddress("glMapVertexAttrib1fAPPLE");
    glMapVertexAttrib2dAPPLE = (mogl_function_glMapVertexAttrib2dAPPLE) wglGetProcAddress("glMapVertexAttrib2dAPPLE");
    glMapVertexAttrib2fAPPLE = (mogl_function_glMapVertexAttrib2fAPPLE) wglGetProcAddress("glMapVertexAttrib2fAPPLE");
    glDrawBuffersATI = (mogl_function_glDrawBuffersATI) wglGetProcAddress("glDrawBuffersATI");
    glElementPointerATI = (mogl_function_glElementPointerATI) wglGetProcAddress("glElementPointerATI");
    glDrawElementArrayATI = (mogl_function_glDrawElementArrayATI) wglGetProcAddress("glDrawElementArrayATI");
    glDrawRangeElementArrayATI = (mogl_function_glDrawRangeElementArrayATI) wglGetProcAddress("glDrawRangeElementArrayATI");
    glTexBumpParameterivATI = (mogl_function_glTexBumpParameterivATI) wglGetProcAddress("glTexBumpParameterivATI");
    glTexBumpParameterfvATI = (mogl_function_glTexBumpParameterfvATI) wglGetProcAddress("glTexBumpParameterfvATI");
    glGetTexBumpParameterivATI = (mogl_function_glGetTexBumpParameterivATI) wglGetProcAddress("glGetTexBumpParameterivATI");
    glGetTexBumpParameterfvATI = (mogl_function_glGetTexBumpParameterfvATI) wglGetProcAddress("glGetTexBumpParameterfvATI");
    glGenFragmentShadersATI = (mogl_function_glGenFragmentShadersATI) wglGetProcAddress("glGenFragmentShadersATI");
    glBindFragmentShaderATI = (mogl_function_glBindFragmentShaderATI) wglGetProcAddress("glBindFragmentShaderATI");
    glDeleteFragmentShaderATI = (mogl_function_glDeleteFragmentShaderATI) wglGetProcAddress("glDeleteFragmentShaderATI");
    glBeginFragmentShaderATI = (mogl_function_glBeginFragmentShaderATI) wglGetProcAddress("glBeginFragmentShaderATI");
    glEndFragmentShaderATI = (mogl_function_glEndFragmentShaderATI) wglGetProcAddress("glEndFragmentShaderATI");
    glPassTexCoordATI = (mogl_function_glPassTexCoordATI) wglGetProcAddress("glPassTexCoordATI");
    glSampleMapATI = (mogl_function_glSampleMapATI) wglGetProcAddress("glSampleMapATI");
    glColorFragmentOp1ATI = (mogl_function_glColorFragmentOp1ATI) wglGetProcAddress("glColorFragmentOp1ATI");
    glColorFragmentOp2ATI = (mogl_function_glColorFragmentOp2ATI) wglGetProcAddress("glColorFragmentOp2ATI");
    glColorFragmentOp3ATI = (mogl_function_glColorFragmentOp3ATI) wglGetProcAddress("glColorFragmentOp3ATI");
    glAlphaFragmentOp1ATI = (mogl_function_glAlphaFragmentOp1ATI) wglGetProcAddress("glAlphaFragmentOp1ATI");
    glAlphaFragmentOp2ATI = (mogl_function_glAlphaFragmentOp2ATI) wglGetProcAddress("glAlphaFragmentOp2ATI");
    glAlphaFragmentOp3ATI = (mogl_function_glAlphaFragmentOp3ATI) wglGetProcAddress("glAlphaFragmentOp3ATI");
    glSetFragmentShaderConstantATI = (mogl_function_glSetFragmentShaderConstantATI) wglGetProcAddress("glSetFragmentShaderConstantATI");
    glMapObjectBufferATI = (mogl_function_glMapObjectBufferATI) wglGetProcAddress("glMapObjectBufferATI");
    glUnmapObjectBufferATI = (mogl_function_glUnmapObjectBufferATI) wglGetProcAddress("glUnmapObjectBufferATI");
    glPNTrianglesiATI = (mogl_function_glPNTrianglesiATI) wglGetProcAddress("glPNTrianglesiATI");
    glPNTrianglesfATI = (mogl_function_glPNTrianglesfATI) wglGetProcAddress("glPNTrianglesfATI");
    glStencilOpSeparateATI = (mogl_function_glStencilOpSeparateATI) wglGetProcAddress("glStencilOpSeparateATI");
    glStencilFuncSeparateATI = (mogl_function_glStencilFuncSeparateATI) wglGetProcAddress("glStencilFuncSeparateATI");
    glNewObjectBufferATI = (mogl_function_glNewObjectBufferATI) wglGetProcAddress("glNewObjectBufferATI");
    glIsObjectBufferATI = (mogl_function_glIsObjectBufferATI) wglGetProcAddress("glIsObjectBufferATI");
    glUpdateObjectBufferATI = (mogl_function_glUpdateObjectBufferATI) wglGetProcAddress("glUpdateObjectBufferATI");
    glGetObjectBufferfvATI = (mogl_function_glGetObjectBufferfvATI) wglGetProcAddress("glGetObjectBufferfvATI");
    glGetObjectBufferivATI = (mogl_function_glGetObjectBufferivATI) wglGetProcAddress("glGetObjectBufferivATI");
    glFreeObjectBufferATI = (mogl_function_glFreeObjectBufferATI) wglGetProcAddress("glFreeObjectBufferATI");
    glArrayObjectATI = (mogl_function_glArrayObjectATI) wglGetProcAddress("glArrayObjectATI");
    glGetArrayObjectfvATI = (mogl_function_glGetArrayObjectfvATI) wglGetProcAddress("glGetArrayObjectfvATI");
    glGetArrayObjectivATI = (mogl_function_glGetArrayObjectivATI) wglGetProcAddress("glGetArrayObjectivATI");
    glVariantArrayObjectATI = (mogl_function_glVariantArrayObjectATI) wglGetProcAddress("glVariantArrayObjectATI");
    glGetVariantArrayObjectfvATI = (mogl_function_glGetVariantArrayObjectfvATI) wglGetProcAddress("glGetVariantArrayObjectfvATI");
    glGetVariantArrayObjectivATI = (mogl_function_glGetVariantArrayObjectivATI) wglGetProcAddress("glGetVariantArrayObjectivATI");
    glVertexAttribArrayObjectATI = (mogl_function_glVertexAttribArrayObjectATI) wglGetProcAddress("glVertexAttribArrayObjectATI");
    glGetVertexAttribArrayObjectfvATI = (mogl_function_glGetVertexAttribArrayObjectfvATI) wglGetProcAddress("glGetVertexAttribArrayObjectfvATI");
    glGetVertexAttribArrayObjectivATI = (mogl_function_glGetVertexAttribArrayObjectivATI) wglGetProcAddress("glGetVertexAttribArrayObjectivATI");
    glVertexStream1sATI = (mogl_function_glVertexStream1sATI) wglGetProcAddress("glVertexStream1sATI");
    glVertexStream1svATI = (mogl_function_glVertexStream1svATI) wglGetProcAddress("glVertexStream1svATI");
    glVertexStream1iATI = (mogl_function_glVertexStream1iATI) wglGetProcAddress("glVertexStream1iATI");
    glVertexStream1ivATI = (mogl_function_glVertexStream1ivATI) wglGetProcAddress("glVertexStream1ivATI");
    glVertexStream1fATI = (mogl_function_glVertexStream1fATI) wglGetProcAddress("glVertexStream1fATI");
    glVertexStream1fvATI = (mogl_function_glVertexStream1fvATI) wglGetProcAddress("glVertexStream1fvATI");
    glVertexStream1dATI = (mogl_function_glVertexStream1dATI) wglGetProcAddress("glVertexStream1dATI");
    glVertexStream1dvATI = (mogl_function_glVertexStream1dvATI) wglGetProcAddress("glVertexStream1dvATI");
    glVertexStream2sATI = (mogl_function_glVertexStream2sATI) wglGetProcAddress("glVertexStream2sATI");
    glVertexStream2svATI = (mogl_function_glVertexStream2svATI) wglGetProcAddress("glVertexStream2svATI");
    glVertexStream2iATI = (mogl_function_glVertexStream2iATI) wglGetProcAddress("glVertexStream2iATI");
    glVertexStream2ivATI = (mogl_function_glVertexStream2ivATI) wglGetProcAddress("glVertexStream2ivATI");
    glVertexStream2fATI = (mogl_function_glVertexStream2fATI) wglGetProcAddress("glVertexStream2fATI");
    glVertexStream2fvATI = (mogl_function_glVertexStream2fvATI) wglGetProcAddress("glVertexStream2fvATI");
    glVertexStream2dATI = (mogl_function_glVertexStream2dATI) wglGetProcAddress("glVertexStream2dATI");
    glVertexStream2dvATI = (mogl_function_glVertexStream2dvATI) wglGetProcAddress("glVertexStream2dvATI");
    glVertexStream3sATI = (mogl_function_glVertexStream3sATI) wglGetProcAddress("glVertexStream3sATI");
    glVertexStream3svATI = (mogl_function_glVertexStream3svATI) wglGetProcAddress("glVertexStream3svATI");
    glVertexStream3iATI = (mogl_function_glVertexStream3iATI) wglGetProcAddress("glVertexStream3iATI");
    glVertexStream3ivATI = (mogl_function_glVertexStream3ivATI) wglGetProcAddress("glVertexStream3ivATI");
    glVertexStream3fATI = (mogl_function_glVertexStream3fATI) wglGetProcAddress("glVertexStream3fATI");
    glVertexStream3fvATI = (mogl_function_glVertexStream3fvATI) wglGetProcAddress("glVertexStream3fvATI");
    glVertexStream3dATI = (mogl_function_glVertexStream3dATI) wglGetProcAddress("glVertexStream3dATI");
    glVertexStream3dvATI = (mogl_function_glVertexStream3dvATI) wglGetProcAddress("glVertexStream3dvATI");
    glVertexStream4sATI = (mogl_function_glVertexStream4sATI) wglGetProcAddress("glVertexStream4sATI");
    glVertexStream4svATI = (mogl_function_glVertexStream4svATI) wglGetProcAddress("glVertexStream4svATI");
    glVertexStream4iATI = (mogl_function_glVertexStream4iATI) wglGetProcAddress("glVertexStream4iATI");
    glVertexStream4ivATI = (mogl_function_glVertexStream4ivATI) wglGetProcAddress("glVertexStream4ivATI");
    glVertexStream4fATI = (mogl_function_glVertexStream4fATI) wglGetProcAddress("glVertexStream4fATI");
    glVertexStream4fvATI = (mogl_function_glVertexStream4fvATI) wglGetProcAddress("glVertexStream4fvATI");
    glVertexStream4dATI = (mogl_function_glVertexStream4dATI) wglGetProcAddress("glVertexStream4dATI");
    glVertexStream4dvATI = (mogl_function_glVertexStream4dvATI) wglGetProcAddress("glVertexStream4dvATI");
    glNormalStream3bATI = (mogl_function_glNormalStream3bATI) wglGetProcAddress("glNormalStream3bATI");
    glNormalStream3bvATI = (mogl_function_glNormalStream3bvATI) wglGetProcAddress("glNormalStream3bvATI");
    glNormalStream3sATI = (mogl_function_glNormalStream3sATI) wglGetProcAddress("glNormalStream3sATI");
    glNormalStream3svATI = (mogl_function_glNormalStream3svATI) wglGetProcAddress("glNormalStream3svATI");
    glNormalStream3iATI = (mogl_function_glNormalStream3iATI) wglGetProcAddress("glNormalStream3iATI");
    glNormalStream3ivATI = (mogl_function_glNormalStream3ivATI) wglGetProcAddress("glNormalStream3ivATI");
    glNormalStream3fATI = (mogl_function_glNormalStream3fATI) wglGetProcAddress("glNormalStream3fATI");
    glNormalStream3fvATI = (mogl_function_glNormalStream3fvATI) wglGetProcAddress("glNormalStream3fvATI");
    glNormalStream3dATI = (mogl_function_glNormalStream3dATI) wglGetProcAddress("glNormalStream3dATI");
    glNormalStream3dvATI = (mogl_function_glNormalStream3dvATI) wglGetProcAddress("glNormalStream3dvATI");
    glClientActiveVertexStreamATI = (mogl_function_glClientActiveVertexStreamATI) wglGetProcAddress("glClientActiveVertexStreamATI");
    glVertexBlendEnviATI = (mogl_function_glVertexBlendEnviATI) wglGetProcAddress("glVertexBlendEnviATI");
    glVertexBlendEnvfATI = (mogl_function_glVertexBlendEnvfATI) wglGetProcAddress("glVertexBlendEnvfATI");
    glEGLImageTargetTexStorageEXT = (mogl_function_glEGLImageTargetTexStorageEXT) wglGetProcAddress("glEGLImageTargetTexStorageEXT");
    glEGLImageTargetTextureStorageEXT = (mogl_function_glEGLImageTargetTextureStorageEXT) wglGetProcAddress("glEGLImageTargetTextureStorageEXT");
    glUniformBufferEXT = (mogl_function_glUniformBufferEXT) wglGetProcAddress("glUniformBufferEXT");
    glGetUniformBufferSizeEXT = (mogl_function_glGetUniformBufferSizeEXT) wglGetProcAddress("glGetUniformBufferSizeEXT");
    glGetUniformOffsetEXT = (mogl_function_glGetUniformOffsetEXT) wglGetProcAddress("glGetUniformOffsetEXT");
    glBlendColorEXT = (mogl_function_glBlendColorEXT) wglGetProcAddress("glBlendColorEXT");
    glBlendEquationSeparateEXT = (mogl_function_glBlendEquationSeparateEXT) wglGetProcAddress("glBlendEquationSeparateEXT");
    glBlendFuncSeparateEXT = (mogl_function_glBlendFuncSeparateEXT) wglGetProcAddress("glBlendFuncSeparateEXT");
    glBlendEquationEXT = (mogl_function_glBlendEquationEXT) wglGetProcAddress("glBlendEquationEXT");
    glColorSubTableEXT = (mogl_function_glColorSubTableEXT) wglGetProcAddress("glColorSubTableEXT");
    glCopyColorSubTableEXT = (mogl_function_glCopyColorSubTableEXT) wglGetProcAddress("glCopyColorSubTableEXT");
    glLockArraysEXT = (mogl_function_glLockArraysEXT) wglGetProcAddress("glLockArraysEXT");
    glUnlockArraysEXT = (mogl_function_glUnlockArraysEXT) wglGetProcAddress("glUnlockArraysEXT");
    glConvolutionFilter1DEXT = (mogl_function_glConvolutionFilter1DEXT) wglGetProcAddress("glConvolutionFilter1DEXT");
    glConvolutionFilter2DEXT = (mogl_function_glConvolutionFilter2DEXT) wglGetProcAddress("glConvolutionFilter2DEXT");
    glConvolutionParameterfEXT = (mogl_function_glConvolutionParameterfEXT) wglGetProcAddress("glConvolutionParameterfEXT");
    glConvolutionParameterfvEXT = (mogl_function_glConvolutionParameterfvEXT) wglGetProcAddress("glConvolutionParameterfvEXT");
    glConvolutionParameteriEXT = (mogl_function_glConvolutionParameteriEXT) wglGetProcAddress("glConvolutionParameteriEXT");
    glConvolutionParameterivEXT = (mogl_function_glConvolutionParameterivEXT) wglGetProcAddress("glConvolutionParameterivEXT");
    glCopyConvolutionFilter1DEXT = (mogl_function_glCopyConvolutionFilter1DEXT) wglGetProcAddress("glCopyConvolutionFilter1DEXT");
    glCopyConvolutionFilter2DEXT = (mogl_function_glCopyConvolutionFilter2DEXT) wglGetProcAddress("glCopyConvolutionFilter2DEXT");
    glGetConvolutionFilterEXT = (mogl_function_glGetConvolutionFilterEXT) wglGetProcAddress("glGetConvolutionFilterEXT");
    glGetConvolutionParameterfvEXT = (mogl_function_glGetConvolutionParameterfvEXT) wglGetProcAddress("glGetConvolutionParameterfvEXT");
    glGetConvolutionParameterivEXT = (mogl_function_glGetConvolutionParameterivEXT) wglGetProcAddress("glGetConvolutionParameterivEXT");
    glGetSeparableFilterEXT = (mogl_function_glGetSeparableFilterEXT) wglGetProcAddress("glGetSeparableFilterEXT");
    glSeparableFilter2DEXT = (mogl_function_glSeparableFilter2DEXT) wglGetProcAddress("glSeparableFilter2DEXT");
    glTangent3bEXT = (mogl_function_glTangent3bEXT) wglGetProcAddress("glTangent3bEXT");
    glTangent3bvEXT = (mogl_function_glTangent3bvEXT) wglGetProcAddress("glTangent3bvEXT");
    glTangent3dEXT = (mogl_function_glTangent3dEXT) wglGetProcAddress("glTangent3dEXT");
    glTangent3dvEXT = (mogl_function_glTangent3dvEXT) wglGetProcAddress("glTangent3dvEXT");
    glTangent3fEXT = (mogl_function_glTangent3fEXT) wglGetProcAddress("glTangent3fEXT");
    glTangent3fvEXT = (mogl_function_glTangent3fvEXT) wglGetProcAddress("glTangent3fvEXT");
    glTangent3iEXT = (mogl_function_glTangent3iEXT) wglGetProcAddress("glTangent3iEXT");
    glTangent3ivEXT = (mogl_function_glTangent3ivEXT) wglGetProcAddress("glTangent3ivEXT");
    glTangent3sEXT = (mogl_function_glTangent3sEXT) wglGetProcAddress("glTangent3sEXT");
    glTangent3svEXT = (mogl_function_glTangent3svEXT) wglGetProcAddress("glTangent3svEXT");
    glBinormal3bEXT = (mogl_function_glBinormal3bEXT) wglGetProcAddress("glBinormal3bEXT");
    glBinormal3bvEXT = (mogl_function_glBinormal3bvEXT) wglGetProcAddress("glBinormal3bvEXT");
    glBinormal3dEXT = (mogl_function_glBinormal3dEXT) wglGetProcAddress("glBinormal3dEXT");
    glBinormal3dvEXT = (mogl_function_glBinormal3dvEXT) wglGetProcAddress("glBinormal3dvEXT");
    glBinormal3fEXT = (mogl_function_glBinormal3fEXT) wglGetProcAddress("glBinormal3fEXT");
    glBinormal3fvEXT = (mogl_function_glBinormal3fvEXT) wglGetProcAddress("glBinormal3fvEXT");
    glBinormal3iEXT = (mogl_function_glBinormal3iEXT) wglGetProcAddress("glBinormal3iEXT");
    glBinormal3ivEXT = (mogl_function_glBinormal3ivEXT) wglGetProcAddress("glBinormal3ivEXT");
    glBinormal3sEXT = (mogl_function_glBinormal3sEXT) wglGetProcAddress("glBinormal3sEXT");
    glBinormal3svEXT = (mogl_function_glBinormal3svEXT) wglGetProcAddress("glBinormal3svEXT");
    glTangentPointerEXT = (mogl_function_glTangentPointerEXT) wglGetProcAddress("glTangentPointerEXT");
    glBinormalPointerEXT = (mogl_function_glBinormalPointerEXT) wglGetProcAddress("glBinormalPointerEXT");
    glCopyTexImage1DEXT = (mogl_function_glCopyTexImage1DEXT) wglGetProcAddress("glCopyTexImage1DEXT");
    glCopyTexImage2DEXT = (mogl_function_glCopyTexImage2DEXT) wglGetProcAddress("glCopyTexImage2DEXT");
    glCopyTexSubImage1DEXT = (mogl_function_glCopyTexSubImage1DEXT) wglGetProcAddress("glCopyTexSubImage1DEXT");
    glCopyTexSubImage2DEXT = (mogl_function_glCopyTexSubImage2DEXT) wglGetProcAddress("glCopyTexSubImage2DEXT");
    glCopyTexSubImage3DEXT = (mogl_function_glCopyTexSubImage3DEXT) wglGetProcAddress("glCopyTexSubImage3DEXT");
    glCullParameterdvEXT = (mogl_function_glCullParameterdvEXT) wglGetProcAddress("glCullParameterdvEXT");
    glCullParameterfvEXT = (mogl_function_glCullParameterfvEXT) wglGetProcAddress("glCullParameterfvEXT");
    glLabelObjectEXT = (mogl_function_glLabelObjectEXT) wglGetProcAddress("glLabelObjectEXT");
    glGetObjectLabelEXT = (mogl_function_glGetObjectLabelEXT) wglGetProcAddress("glGetObjectLabelEXT");
    glInsertEventMarkerEXT = (mogl_function_glInsertEventMarkerEXT) wglGetProcAddress("glInsertEventMarkerEXT");
    glPushGroupMarkerEXT = (mogl_function_glPushGroupMarkerEXT) wglGetProcAddress("glPushGroupMarkerEXT");
    glPopGroupMarkerEXT = (mogl_function_glPopGroupMarkerEXT) wglGetProcAddress("glPopGroupMarkerEXT");
    glDepthBoundsEXT = (mogl_function_glDepthBoundsEXT) wglGetProcAddress("glDepthBoundsEXT");
    glMatrixLoadfEXT = (mogl_function_glMatrixLoadfEXT) wglGetProcAddress("glMatrixLoadfEXT");
    glMatrixLoaddEXT = (mogl_function_glMatrixLoaddEXT) wglGetProcAddress("glMatrixLoaddEXT");
    glMatrixMultfEXT = (mogl_function_glMatrixMultfEXT) wglGetProcAddress("glMatrixMultfEXT");
    glMatrixMultdEXT = (mogl_function_glMatrixMultdEXT) wglGetProcAddress("glMatrixMultdEXT");
    glMatrixLoadIdentityEXT = (mogl_function_glMatrixLoadIdentityEXT) wglGetProcAddress("glMatrixLoadIdentityEXT");
    glMatrixRotatefEXT = (mogl_function_glMatrixRotatefEXT) wglGetProcAddress("glMatrixRotatefEXT");
    glMatrixRotatedEXT = (mogl_function_glMatrixRotatedEXT) wglGetProcAddress("glMatrixRotatedEXT");
    glMatrixScalefEXT = (mogl_function_glMatrixScalefEXT) wglGetProcAddress("glMatrixScalefEXT");
    glMatrixScaledEXT = (mogl_function_glMatrixScaledEXT) wglGetProcAddress("glMatrixScaledEXT");
    glMatrixTranslatefEXT = (mogl_function_glMatrixTranslatefEXT) wglGetProcAddress("glMatrixTranslatefEXT");
    glMatrixTranslatedEXT = (mogl_function_glMatrixTranslatedEXT) wglGetProcAddress("glMatrixTranslatedEXT");
    glMatrixFrustumEXT = (mogl_function_glMatrixFrustumEXT) wglGetProcAddress("glMatrixFrustumEXT");
    glMatrixOrthoEXT = (mogl_function_glMatrixOrthoEXT) wglGetProcAddress("glMatrixOrthoEXT");
    glMatrixPopEXT = (mogl_function_glMatrixPopEXT) wglGetProcAddress("glMatrixPopEXT");
    glMatrixPushEXT = (mogl_function_glMatrixPushEXT) wglGetProcAddress("glMatrixPushEXT");
    glClientAttribDefaultEXT = (mogl_function_glClientAttribDefaultEXT) wglGetProcAddress("glClientAttribDefaultEXT");
    glPushClientAttribDefaultEXT = (mogl_function_glPushClientAttribDefaultEXT) wglGetProcAddress("glPushClientAttribDefaultEXT");
    glTextureParameterfEXT = (mogl_function_glTextureParameterfEXT) wglGetProcAddress("glTextureParameterfEXT");
    glTextureParameterfvEXT = (mogl_function_glTextureParameterfvEXT) wglGetProcAddress("glTextureParameterfvEXT");
    glTextureParameteriEXT = (mogl_function_glTextureParameteriEXT) wglGetProcAddress("glTextureParameteriEXT");
    glTextureParameterivEXT = (mogl_function_glTextureParameterivEXT) wglGetProcAddress("glTextureParameterivEXT");
    glTextureImage1DEXT = (mogl_function_glTextureImage1DEXT) wglGetProcAddress("glTextureImage1DEXT");
    glTextureImage2DEXT = (mogl_function_glTextureImage2DEXT) wglGetProcAddress("glTextureImage2DEXT");
    glTextureSubImage1DEXT = (mogl_function_glTextureSubImage1DEXT) wglGetProcAddress("glTextureSubImage1DEXT");
    glTextureSubImage2DEXT = (mogl_function_glTextureSubImage2DEXT) wglGetProcAddress("glTextureSubImage2DEXT");
    glCopyTextureImage1DEXT = (mogl_function_glCopyTextureImage1DEXT) wglGetProcAddress("glCopyTextureImage1DEXT");
    glCopyTextureImage2DEXT = (mogl_function_glCopyTextureImage2DEXT) wglGetProcAddress("glCopyTextureImage2DEXT");
    glCopyTextureSubImage1DEXT = (mogl_function_glCopyTextureSubImage1DEXT) wglGetProcAddress("glCopyTextureSubImage1DEXT");
    glCopyTextureSubImage2DEXT = (mogl_function_glCopyTextureSubImage2DEXT) wglGetProcAddress("glCopyTextureSubImage2DEXT");
    glGetTextureImageEXT = (mogl_function_glGetTextureImageEXT) wglGetProcAddress("glGetTextureImageEXT");
    glGetTextureParameterfvEXT = (mogl_function_glGetTextureParameterfvEXT) wglGetProcAddress("glGetTextureParameterfvEXT");
    glGetTextureParameterivEXT = (mogl_function_glGetTextureParameterivEXT) wglGetProcAddress("glGetTextureParameterivEXT");
    glGetTextureLevelParameterfvEXT = (mogl_function_glGetTextureLevelParameterfvEXT) wglGetProcAddress("glGetTextureLevelParameterfvEXT");
    glGetTextureLevelParameterivEXT = (mogl_function_glGetTextureLevelParameterivEXT) wglGetProcAddress("glGetTextureLevelParameterivEXT");
    glTextureImage3DEXT = (mogl_function_glTextureImage3DEXT) wglGetProcAddress("glTextureImage3DEXT");
    glTextureSubImage3DEXT = (mogl_function_glTextureSubImage3DEXT) wglGetProcAddress("glTextureSubImage3DEXT");
    glCopyTextureSubImage3DEXT = (mogl_function_glCopyTextureSubImage3DEXT) wglGetProcAddress("glCopyTextureSubImage3DEXT");
    glBindMultiTextureEXT = (mogl_function_glBindMultiTextureEXT) wglGetProcAddress("glBindMultiTextureEXT");
    glMultiTexCoordPointerEXT = (mogl_function_glMultiTexCoordPointerEXT) wglGetProcAddress("glMultiTexCoordPointerEXT");
    glMultiTexEnvfEXT = (mogl_function_glMultiTexEnvfEXT) wglGetProcAddress("glMultiTexEnvfEXT");
    glMultiTexEnvfvEXT = (mogl_function_glMultiTexEnvfvEXT) wglGetProcAddress("glMultiTexEnvfvEXT");
    glMultiTexEnviEXT = (mogl_function_glMultiTexEnviEXT) wglGetProcAddress("glMultiTexEnviEXT");
    glMultiTexEnvivEXT = (mogl_function_glMultiTexEnvivEXT) wglGetProcAddress("glMultiTexEnvivEXT");
    glMultiTexGendEXT = (mogl_function_glMultiTexGendEXT) wglGetProcAddress("glMultiTexGendEXT");
    glMultiTexGendvEXT = (mogl_function_glMultiTexGendvEXT) wglGetProcAddress("glMultiTexGendvEXT");
    glMultiTexGenfEXT = (mogl_function_glMultiTexGenfEXT) wglGetProcAddress("glMultiTexGenfEXT");
    glMultiTexGenfvEXT = (mogl_function_glMultiTexGenfvEXT) wglGetProcAddress("glMultiTexGenfvEXT");
    glMultiTexGeniEXT = (mogl_function_glMultiTexGeniEXT) wglGetProcAddress("glMultiTexGeniEXT");
    glMultiTexGenivEXT = (mogl_function_glMultiTexGenivEXT) wglGetProcAddress("glMultiTexGenivEXT");
    glGetMultiTexEnvfvEXT = (mogl_function_glGetMultiTexEnvfvEXT) wglGetProcAddress("glGetMultiTexEnvfvEXT");
    glGetMultiTexEnvivEXT = (mogl_function_glGetMultiTexEnvivEXT) wglGetProcAddress("glGetMultiTexEnvivEXT");
    glGetMultiTexGendvEXT = (mogl_function_glGetMultiTexGendvEXT) wglGetProcAddress("glGetMultiTexGendvEXT");
    glGetMultiTexGenfvEXT = (mogl_function_glGetMultiTexGenfvEXT) wglGetProcAddress("glGetMultiTexGenfvEXT");
    glGetMultiTexGenivEXT = (mogl_function_glGetMultiTexGenivEXT) wglGetProcAddress("glGetMultiTexGenivEXT");
    glMultiTexParameteriEXT = (mogl_function_glMultiTexParameteriEXT) wglGetProcAddress("glMultiTexParameteriEXT");
    glMultiTexParameterivEXT = (mogl_function_glMultiTexParameterivEXT) wglGetProcAddress("glMultiTexParameterivEXT");
    glMultiTexParameterfEXT = (mogl_function_glMultiTexParameterfEXT) wglGetProcAddress("glMultiTexParameterfEXT");
    glMultiTexParameterfvEXT = (mogl_function_glMultiTexParameterfvEXT) wglGetProcAddress("glMultiTexParameterfvEXT");
    glMultiTexImage1DEXT = (mogl_function_glMultiTexImage1DEXT) wglGetProcAddress("glMultiTexImage1DEXT");
    glMultiTexImage2DEXT = (mogl_function_glMultiTexImage2DEXT) wglGetProcAddress("glMultiTexImage2DEXT");
    glMultiTexSubImage1DEXT = (mogl_function_glMultiTexSubImage1DEXT) wglGetProcAddress("glMultiTexSubImage1DEXT");
    glMultiTexSubImage2DEXT = (mogl_function_glMultiTexSubImage2DEXT) wglGetProcAddress("glMultiTexSubImage2DEXT");
    glCopyMultiTexImage1DEXT = (mogl_function_glCopyMultiTexImage1DEXT) wglGetProcAddress("glCopyMultiTexImage1DEXT");
    glCopyMultiTexImage2DEXT = (mogl_function_glCopyMultiTexImage2DEXT) wglGetProcAddress("glCopyMultiTexImage2DEXT");
    glCopyMultiTexSubImage1DEXT = (mogl_function_glCopyMultiTexSubImage1DEXT) wglGetProcAddress("glCopyMultiTexSubImage1DEXT");
    glCopyMultiTexSubImage2DEXT = (mogl_function_glCopyMultiTexSubImage2DEXT) wglGetProcAddress("glCopyMultiTexSubImage2DEXT");
    glGetMultiTexImageEXT = (mogl_function_glGetMultiTexImageEXT) wglGetProcAddress("glGetMultiTexImageEXT");
    glGetMultiTexParameterfvEXT = (mogl_function_glGetMultiTexParameterfvEXT) wglGetProcAddress("glGetMultiTexParameterfvEXT");
    glGetMultiTexParameterivEXT = (mogl_function_glGetMultiTexParameterivEXT) wglGetProcAddress("glGetMultiTexParameterivEXT");
    glGetMultiTexLevelParameterfvEXT = (mogl_function_glGetMultiTexLevelParameterfvEXT) wglGetProcAddress("glGetMultiTexLevelParameterfvEXT");
    glGetMultiTexLevelParameterivEXT = (mogl_function_glGetMultiTexLevelParameterivEXT) wglGetProcAddress("glGetMultiTexLevelParameterivEXT");
    glMultiTexImage3DEXT = (mogl_function_glMultiTexImage3DEXT) wglGetProcAddress("glMultiTexImage3DEXT");
    glMultiTexSubImage3DEXT = (mogl_function_glMultiTexSubImage3DEXT) wglGetProcAddress("glMultiTexSubImage3DEXT");
    glCopyMultiTexSubImage3DEXT = (mogl_function_glCopyMultiTexSubImage3DEXT) wglGetProcAddress("glCopyMultiTexSubImage3DEXT");
    glEnableClientStateIndexedEXT = (mogl_function_glEnableClientStateIndexedEXT) wglGetProcAddress("glEnableClientStateIndexedEXT");
    glDisableClientStateIndexedEXT = (mogl_function_glDisableClientStateIndexedEXT) wglGetProcAddress("glDisableClientStateIndexedEXT");
    glGetFloatIndexedvEXT = (mogl_function_glGetFloatIndexedvEXT) wglGetProcAddress("glGetFloatIndexedvEXT");
    glGetDoubleIndexedvEXT = (mogl_function_glGetDoubleIndexedvEXT) wglGetProcAddress("glGetDoubleIndexedvEXT");
    glGetPointerIndexedvEXT = (mogl_function_glGetPointerIndexedvEXT) wglGetProcAddress("glGetPointerIndexedvEXT");
    glEnableIndexedEXT = (mogl_function_glEnableIndexedEXT) wglGetProcAddress("glEnableIndexedEXT");
    glDisableIndexedEXT = (mogl_function_glDisableIndexedEXT) wglGetProcAddress("glDisableIndexedEXT");
    glIsEnabledIndexedEXT = (mogl_function_glIsEnabledIndexedEXT) wglGetProcAddress("glIsEnabledIndexedEXT");
    glGetIntegerIndexedvEXT = (mogl_function_glGetIntegerIndexedvEXT) wglGetProcAddress("glGetIntegerIndexedvEXT");
    glGetBooleanIndexedvEXT = (mogl_function_glGetBooleanIndexedvEXT) wglGetProcAddress("glGetBooleanIndexedvEXT");
    glCompressedTextureImage3DEXT = (mogl_function_glCompressedTextureImage3DEXT) wglGetProcAddress("glCompressedTextureImage3DEXT");
    glCompressedTextureImage2DEXT = (mogl_function_glCompressedTextureImage2DEXT) wglGetProcAddress("glCompressedTextureImage2DEXT");
    glCompressedTextureImage1DEXT = (mogl_function_glCompressedTextureImage1DEXT) wglGetProcAddress("glCompressedTextureImage1DEXT");
    glCompressedTextureSubImage3DEXT = (mogl_function_glCompressedTextureSubImage3DEXT) wglGetProcAddress("glCompressedTextureSubImage3DEXT");
    glCompressedTextureSubImage2DEXT = (mogl_function_glCompressedTextureSubImage2DEXT) wglGetProcAddress("glCompressedTextureSubImage2DEXT");
    glCompressedTextureSubImage1DEXT = (mogl_function_glCompressedTextureSubImage1DEXT) wglGetProcAddress("glCompressedTextureSubImage1DEXT");
    glGetCompressedTextureImageEXT = (mogl_function_glGetCompressedTextureImageEXT) wglGetProcAddress("glGetCompressedTextureImageEXT");
    glCompressedMultiTexImage3DEXT = (mogl_function_glCompressedMultiTexImage3DEXT) wglGetProcAddress("glCompressedMultiTexImage3DEXT");
    glCompressedMultiTexImage2DEXT = (mogl_function_glCompressedMultiTexImage2DEXT) wglGetProcAddress("glCompressedMultiTexImage2DEXT");
    glCompressedMultiTexImage1DEXT = (mogl_function_glCompressedMultiTexImage1DEXT) wglGetProcAddress("glCompressedMultiTexImage1DEXT");
    glCompressedMultiTexSubImage3DEXT = (mogl_function_glCompressedMultiTexSubImage3DEXT) wglGetProcAddress("glCompressedMultiTexSubImage3DEXT");
    glCompressedMultiTexSubImage2DEXT = (mogl_function_glCompressedMultiTexSubImage2DEXT) wglGetProcAddress("glCompressedMultiTexSubImage2DEXT");
    glCompressedMultiTexSubImage1DEXT = (mogl_function_glCompressedMultiTexSubImage1DEXT) wglGetProcAddress("glCompressedMultiTexSubImage1DEXT");
    glGetCompressedMultiTexImageEXT = (mogl_function_glGetCompressedMultiTexImageEXT) wglGetProcAddress("glGetCompressedMultiTexImageEXT");
    glMatrixLoadTransposefEXT = (mogl_function_glMatrixLoadTransposefEXT) wglGetProcAddress("glMatrixLoadTransposefEXT");
    glMatrixLoadTransposedEXT = (mogl_function_glMatrixLoadTransposedEXT) wglGetProcAddress("glMatrixLoadTransposedEXT");
    glMatrixMultTransposefEXT = (mogl_function_glMatrixMultTransposefEXT) wglGetProcAddress("glMatrixMultTransposefEXT");
    glMatrixMultTransposedEXT = (mogl_function_glMatrixMultTransposedEXT) wglGetProcAddress("glMatrixMultTransposedEXT");
    glNamedBufferDataEXT = (mogl_function_glNamedBufferDataEXT) wglGetProcAddress("glNamedBufferDataEXT");
    glNamedBufferSubDataEXT = (mogl_function_glNamedBufferSubDataEXT) wglGetProcAddress("glNamedBufferSubDataEXT");
    glMapNamedBufferEXT = (mogl_function_glMapNamedBufferEXT) wglGetProcAddress("glMapNamedBufferEXT");
    glUnmapNamedBufferEXT = (mogl_function_glUnmapNamedBufferEXT) wglGetProcAddress("glUnmapNamedBufferEXT");
    glGetNamedBufferParameterivEXT = (mogl_function_glGetNamedBufferParameterivEXT) wglGetProcAddress("glGetNamedBufferParameterivEXT");
    glGetNamedBufferPointervEXT = (mogl_function_glGetNamedBufferPointervEXT) wglGetProcAddress("glGetNamedBufferPointervEXT");
    glGetNamedBufferSubDataEXT = (mogl_function_glGetNamedBufferSubDataEXT) wglGetProcAddress("glGetNamedBufferSubDataEXT");
    glProgramUniform1fEXT = (mogl_function_glProgramUniform1fEXT) wglGetProcAddress("glProgramUniform1fEXT");
    glProgramUniform2fEXT = (mogl_function_glProgramUniform2fEXT) wglGetProcAddress("glProgramUniform2fEXT");
    glProgramUniform3fEXT = (mogl_function_glProgramUniform3fEXT) wglGetProcAddress("glProgramUniform3fEXT");
    glProgramUniform4fEXT = (mogl_function_glProgramUniform4fEXT) wglGetProcAddress("glProgramUniform4fEXT");
    glProgramUniform1iEXT = (mogl_function_glProgramUniform1iEXT) wglGetProcAddress("glProgramUniform1iEXT");
    glProgramUniform2iEXT = (mogl_function_glProgramUniform2iEXT) wglGetProcAddress("glProgramUniform2iEXT");
    glProgramUniform3iEXT = (mogl_function_glProgramUniform3iEXT) wglGetProcAddress("glProgramUniform3iEXT");
    glProgramUniform4iEXT = (mogl_function_glProgramUniform4iEXT) wglGetProcAddress("glProgramUniform4iEXT");
    glProgramUniform1fvEXT = (mogl_function_glProgramUniform1fvEXT) wglGetProcAddress("glProgramUniform1fvEXT");
    glProgramUniform2fvEXT = (mogl_function_glProgramUniform2fvEXT) wglGetProcAddress("glProgramUniform2fvEXT");
    glProgramUniform3fvEXT = (mogl_function_glProgramUniform3fvEXT) wglGetProcAddress("glProgramUniform3fvEXT");
    glProgramUniform4fvEXT = (mogl_function_glProgramUniform4fvEXT) wglGetProcAddress("glProgramUniform4fvEXT");
    glProgramUniform1ivEXT = (mogl_function_glProgramUniform1ivEXT) wglGetProcAddress("glProgramUniform1ivEXT");
    glProgramUniform2ivEXT = (mogl_function_glProgramUniform2ivEXT) wglGetProcAddress("glProgramUniform2ivEXT");
    glProgramUniform3ivEXT = (mogl_function_glProgramUniform3ivEXT) wglGetProcAddress("glProgramUniform3ivEXT");
    glProgramUniform4ivEXT = (mogl_function_glProgramUniform4ivEXT) wglGetProcAddress("glProgramUniform4ivEXT");
    glProgramUniformMatrix2fvEXT = (mogl_function_glProgramUniformMatrix2fvEXT) wglGetProcAddress("glProgramUniformMatrix2fvEXT");
    glProgramUniformMatrix3fvEXT = (mogl_function_glProgramUniformMatrix3fvEXT) wglGetProcAddress("glProgramUniformMatrix3fvEXT");
    glProgramUniformMatrix4fvEXT = (mogl_function_glProgramUniformMatrix4fvEXT) wglGetProcAddress("glProgramUniformMatrix4fvEXT");
    glProgramUniformMatrix2x3fvEXT = (mogl_function_glProgramUniformMatrix2x3fvEXT) wglGetProcAddress("glProgramUniformMatrix2x3fvEXT");
    glProgramUniformMatrix3x2fvEXT = (mogl_function_glProgramUniformMatrix3x2fvEXT) wglGetProcAddress("glProgramUniformMatrix3x2fvEXT");
    glProgramUniformMatrix2x4fvEXT = (mogl_function_glProgramUniformMatrix2x4fvEXT) wglGetProcAddress("glProgramUniformMatrix2x4fvEXT");
    glProgramUniformMatrix4x2fvEXT = (mogl_function_glProgramUniformMatrix4x2fvEXT) wglGetProcAddress("glProgramUniformMatrix4x2fvEXT");
    glProgramUniformMatrix3x4fvEXT = (mogl_function_glProgramUniformMatrix3x4fvEXT) wglGetProcAddress("glProgramUniformMatrix3x4fvEXT");
    glProgramUniformMatrix4x3fvEXT = (mogl_function_glProgramUniformMatrix4x3fvEXT) wglGetProcAddress("glProgramUniformMatrix4x3fvEXT");
    glTextureBufferEXT = (mogl_function_glTextureBufferEXT) wglGetProcAddress("glTextureBufferEXT");
    glMultiTexBufferEXT = (mogl_function_glMultiTexBufferEXT) wglGetProcAddress("glMultiTexBufferEXT");
    glTextureParameterIivEXT = (mogl_function_glTextureParameterIivEXT) wglGetProcAddress("glTextureParameterIivEXT");
    glTextureParameterIuivEXT = (mogl_function_glTextureParameterIuivEXT) wglGetProcAddress("glTextureParameterIuivEXT");
    glGetTextureParameterIivEXT = (mogl_function_glGetTextureParameterIivEXT) wglGetProcAddress("glGetTextureParameterIivEXT");
    glGetTextureParameterIuivEXT = (mogl_function_glGetTextureParameterIuivEXT) wglGetProcAddress("glGetTextureParameterIuivEXT");
    glMultiTexParameterIivEXT = (mogl_function_glMultiTexParameterIivEXT) wglGetProcAddress("glMultiTexParameterIivEXT");
    glMultiTexParameterIuivEXT = (mogl_function_glMultiTexParameterIuivEXT) wglGetProcAddress("glMultiTexParameterIuivEXT");
    glGetMultiTexParameterIivEXT = (mogl_function_glGetMultiTexParameterIivEXT) wglGetProcAddress("glGetMultiTexParameterIivEXT");
    glGetMultiTexParameterIuivEXT = (mogl_function_glGetMultiTexParameterIuivEXT) wglGetProcAddress("glGetMultiTexParameterIuivEXT");
    glProgramUniform1uiEXT = (mogl_function_glProgramUniform1uiEXT) wglGetProcAddress("glProgramUniform1uiEXT");
    glProgramUniform2uiEXT = (mogl_function_glProgramUniform2uiEXT) wglGetProcAddress("glProgramUniform2uiEXT");
    glProgramUniform3uiEXT = (mogl_function_glProgramUniform3uiEXT) wglGetProcAddress("glProgramUniform3uiEXT");
    glProgramUniform4uiEXT = (mogl_function_glProgramUniform4uiEXT) wglGetProcAddress("glProgramUniform4uiEXT");
    glProgramUniform1uivEXT = (mogl_function_glProgramUniform1uivEXT) wglGetProcAddress("glProgramUniform1uivEXT");
    glProgramUniform2uivEXT = (mogl_function_glProgramUniform2uivEXT) wglGetProcAddress("glProgramUniform2uivEXT");
    glProgramUniform3uivEXT = (mogl_function_glProgramUniform3uivEXT) wglGetProcAddress("glProgramUniform3uivEXT");
    glProgramUniform4uivEXT = (mogl_function_glProgramUniform4uivEXT) wglGetProcAddress("glProgramUniform4uivEXT");
    glNamedProgramLocalParameters4fvEXT = (mogl_function_glNamedProgramLocalParameters4fvEXT) wglGetProcAddress("glNamedProgramLocalParameters4fvEXT");
    glNamedProgramLocalParameterI4iEXT = (mogl_function_glNamedProgramLocalParameterI4iEXT) wglGetProcAddress("glNamedProgramLocalParameterI4iEXT");
    glNamedProgramLocalParameterI4ivEXT = (mogl_function_glNamedProgramLocalParameterI4ivEXT) wglGetProcAddress("glNamedProgramLocalParameterI4ivEXT");
    glNamedProgramLocalParametersI4ivEXT = (mogl_function_glNamedProgramLocalParametersI4ivEXT) wglGetProcAddress("glNamedProgramLocalParametersI4ivEXT");
    glNamedProgramLocalParameterI4uiEXT = (mogl_function_glNamedProgramLocalParameterI4uiEXT) wglGetProcAddress("glNamedProgramLocalParameterI4uiEXT");
    glNamedProgramLocalParameterI4uivEXT = (mogl_function_glNamedProgramLocalParameterI4uivEXT) wglGetProcAddress("glNamedProgramLocalParameterI4uivEXT");
    glNamedProgramLocalParametersI4uivEXT = (mogl_function_glNamedProgramLocalParametersI4uivEXT) wglGetProcAddress("glNamedProgramLocalParametersI4uivEXT");
    glGetNamedProgramLocalParameterIivEXT = (mogl_function_glGetNamedProgramLocalParameterIivEXT) wglGetProcAddress("glGetNamedProgramLocalParameterIivEXT");
    glGetNamedProgramLocalParameterIuivEXT = (mogl_function_glGetNamedProgramLocalParameterIuivEXT) wglGetProcAddress("glGetNamedProgramLocalParameterIuivEXT");
    glEnableClientStateiEXT = (mogl_function_glEnableClientStateiEXT) wglGetProcAddress("glEnableClientStateiEXT");
    glDisableClientStateiEXT = (mogl_function_glDisableClientStateiEXT) wglGetProcAddress("glDisableClientStateiEXT");
    glGetFloati_vEXT = (mogl_function_glGetFloati_vEXT) wglGetProcAddress("glGetFloati_vEXT");
    glGetDoublei_vEXT = (mogl_function_glGetDoublei_vEXT) wglGetProcAddress("glGetDoublei_vEXT");
    glGetPointeri_vEXT = (mogl_function_glGetPointeri_vEXT) wglGetProcAddress("glGetPointeri_vEXT");
    glNamedProgramStringEXT = (mogl_function_glNamedProgramStringEXT) wglGetProcAddress("glNamedProgramStringEXT");
    glNamedProgramLocalParameter4dEXT = (mogl_function_glNamedProgramLocalParameter4dEXT) wglGetProcAddress("glNamedProgramLocalParameter4dEXT");
    glNamedProgramLocalParameter4dvEXT = (mogl_function_glNamedProgramLocalParameter4dvEXT) wglGetProcAddress("glNamedProgramLocalParameter4dvEXT");
    glNamedProgramLocalParameter4fEXT = (mogl_function_glNamedProgramLocalParameter4fEXT) wglGetProcAddress("glNamedProgramLocalParameter4fEXT");
    glNamedProgramLocalParameter4fvEXT = (mogl_function_glNamedProgramLocalParameter4fvEXT) wglGetProcAddress("glNamedProgramLocalParameter4fvEXT");
    glGetNamedProgramLocalParameterdvEXT = (mogl_function_glGetNamedProgramLocalParameterdvEXT) wglGetProcAddress("glGetNamedProgramLocalParameterdvEXT");
    glGetNamedProgramLocalParameterfvEXT = (mogl_function_glGetNamedProgramLocalParameterfvEXT) wglGetProcAddress("glGetNamedProgramLocalParameterfvEXT");
    glGetNamedProgramivEXT = (mogl_function_glGetNamedProgramivEXT) wglGetProcAddress("glGetNamedProgramivEXT");
    glGetNamedProgramStringEXT = (mogl_function_glGetNamedProgramStringEXT) wglGetProcAddress("glGetNamedProgramStringEXT");
    glNamedRenderbufferStorageEXT = (mogl_function_glNamedRenderbufferStorageEXT) wglGetProcAddress("glNamedRenderbufferStorageEXT");
    glGetNamedRenderbufferParameterivEXT = (mogl_function_glGetNamedRenderbufferParameterivEXT) wglGetProcAddress("glGetNamedRenderbufferParameterivEXT");
    glNamedRenderbufferStorageMultisampleEXT = (mogl_function_glNamedRenderbufferStorageMultisampleEXT) wglGetProcAddress("glNamedRenderbufferStorageMultisampleEXT");
    glNamedRenderbufferStorageMultisampleCoverageEXT = (mogl_function_glNamedRenderbufferStorageMultisampleCoverageEXT) wglGetProcAddress("glNamedRenderbufferStorageMultisampleCoverageEXT");
    glCheckNamedFramebufferStatusEXT = (mogl_function_glCheckNamedFramebufferStatusEXT) wglGetProcAddress("glCheckNamedFramebufferStatusEXT");
    glNamedFramebufferTexture1DEXT = (mogl_function_glNamedFramebufferTexture1DEXT) wglGetProcAddress("glNamedFramebufferTexture1DEXT");
    glNamedFramebufferTexture2DEXT = (mogl_function_glNamedFramebufferTexture2DEXT) wglGetProcAddress("glNamedFramebufferTexture2DEXT");
    glNamedFramebufferTexture3DEXT = (mogl_function_glNamedFramebufferTexture3DEXT) wglGetProcAddress("glNamedFramebufferTexture3DEXT");
    glNamedFramebufferRenderbufferEXT = (mogl_function_glNamedFramebufferRenderbufferEXT) wglGetProcAddress("glNamedFramebufferRenderbufferEXT");
    glGetNamedFramebufferAttachmentParameterivEXT = (mogl_function_glGetNamedFramebufferAttachmentParameterivEXT) wglGetProcAddress("glGetNamedFramebufferAttachmentParameterivEXT");
    glGenerateTextureMipmapEXT = (mogl_function_glGenerateTextureMipmapEXT) wglGetProcAddress("glGenerateTextureMipmapEXT");
    glGenerateMultiTexMipmapEXT = (mogl_function_glGenerateMultiTexMipmapEXT) wglGetProcAddress("glGenerateMultiTexMipmapEXT");
    glFramebufferDrawBufferEXT = (mogl_function_glFramebufferDrawBufferEXT) wglGetProcAddress("glFramebufferDrawBufferEXT");
    glFramebufferDrawBuffersEXT = (mogl_function_glFramebufferDrawBuffersEXT) wglGetProcAddress("glFramebufferDrawBuffersEXT");
    glFramebufferReadBufferEXT = (mogl_function_glFramebufferReadBufferEXT) wglGetProcAddress("glFramebufferReadBufferEXT");
    glGetFramebufferParameterivEXT = (mogl_function_glGetFramebufferParameterivEXT) wglGetProcAddress("glGetFramebufferParameterivEXT");
    glNamedCopyBufferSubDataEXT = (mogl_function_glNamedCopyBufferSubDataEXT) wglGetProcAddress("glNamedCopyBufferSubDataEXT");
    glNamedFramebufferTextureEXT = (mogl_function_glNamedFramebufferTextureEXT) wglGetProcAddress("glNamedFramebufferTextureEXT");
    glNamedFramebufferTextureLayerEXT = (mogl_function_glNamedFramebufferTextureLayerEXT) wglGetProcAddress("glNamedFramebufferTextureLayerEXT");
    glNamedFramebufferTextureFaceEXT = (mogl_function_glNamedFramebufferTextureFaceEXT) wglGetProcAddress("glNamedFramebufferTextureFaceEXT");
    glTextureRenderbufferEXT = (mogl_function_glTextureRenderbufferEXT) wglGetProcAddress("glTextureRenderbufferEXT");
    glMultiTexRenderbufferEXT = (mogl_function_glMultiTexRenderbufferEXT) wglGetProcAddress("glMultiTexRenderbufferEXT");
    glVertexArrayVertexOffsetEXT = (mogl_function_glVertexArrayVertexOffsetEXT) wglGetProcAddress("glVertexArrayVertexOffsetEXT");
    glVertexArrayColorOffsetEXT = (mogl_function_glVertexArrayColorOffsetEXT) wglGetProcAddress("glVertexArrayColorOffsetEXT");
    glVertexArrayEdgeFlagOffsetEXT = (mogl_function_glVertexArrayEdgeFlagOffsetEXT) wglGetProcAddress("glVertexArrayEdgeFlagOffsetEXT");
    glVertexArrayIndexOffsetEXT = (mogl_function_glVertexArrayIndexOffsetEXT) wglGetProcAddress("glVertexArrayIndexOffsetEXT");
    glVertexArrayNormalOffsetEXT = (mogl_function_glVertexArrayNormalOffsetEXT) wglGetProcAddress("glVertexArrayNormalOffsetEXT");
    glVertexArrayTexCoordOffsetEXT = (mogl_function_glVertexArrayTexCoordOffsetEXT) wglGetProcAddress("glVertexArrayTexCoordOffsetEXT");
    glVertexArrayMultiTexCoordOffsetEXT = (mogl_function_glVertexArrayMultiTexCoordOffsetEXT) wglGetProcAddress("glVertexArrayMultiTexCoordOffsetEXT");
    glVertexArrayFogCoordOffsetEXT = (mogl_function_glVertexArrayFogCoordOffsetEXT) wglGetProcAddress("glVertexArrayFogCoordOffsetEXT");
    glVertexArraySecondaryColorOffsetEXT = (mogl_function_glVertexArraySecondaryColorOffsetEXT) wglGetProcAddress("glVertexArraySecondaryColorOffsetEXT");
    glVertexArrayVertexAttribOffsetEXT = (mogl_function_glVertexArrayVertexAttribOffsetEXT) wglGetProcAddress("glVertexArrayVertexAttribOffsetEXT");
    glVertexArrayVertexAttribIOffsetEXT = (mogl_function_glVertexArrayVertexAttribIOffsetEXT) wglGetProcAddress("glVertexArrayVertexAttribIOffsetEXT");
    glEnableVertexArrayEXT = (mogl_function_glEnableVertexArrayEXT) wglGetProcAddress("glEnableVertexArrayEXT");
    glDisableVertexArrayEXT = (mogl_function_glDisableVertexArrayEXT) wglGetProcAddress("glDisableVertexArrayEXT");
    glEnableVertexArrayAttribEXT = (mogl_function_glEnableVertexArrayAttribEXT) wglGetProcAddress("glEnableVertexArrayAttribEXT");
    glDisableVertexArrayAttribEXT = (mogl_function_glDisableVertexArrayAttribEXT) wglGetProcAddress("glDisableVertexArrayAttribEXT");
    glGetVertexArrayIntegervEXT = (mogl_function_glGetVertexArrayIntegervEXT) wglGetProcAddress("glGetVertexArrayIntegervEXT");
    glGetVertexArrayPointervEXT = (mogl_function_glGetVertexArrayPointervEXT) wglGetProcAddress("glGetVertexArrayPointervEXT");
    glGetVertexArrayIntegeri_vEXT = (mogl_function_glGetVertexArrayIntegeri_vEXT) wglGetProcAddress("glGetVertexArrayIntegeri_vEXT");
    glGetVertexArrayPointeri_vEXT = (mogl_function_glGetVertexArrayPointeri_vEXT) wglGetProcAddress("glGetVertexArrayPointeri_vEXT");
    glMapNamedBufferRangeEXT = (mogl_function_glMapNamedBufferRangeEXT) wglGetProcAddress("glMapNamedBufferRangeEXT");
    glFlushMappedNamedBufferRangeEXT = (mogl_function_glFlushMappedNamedBufferRangeEXT) wglGetProcAddress("glFlushMappedNamedBufferRangeEXT");
    glNamedBufferStorageEXT = (mogl_function_glNamedBufferStorageEXT) wglGetProcAddress("glNamedBufferStorageEXT");
    glClearNamedBufferDataEXT = (mogl_function_glClearNamedBufferDataEXT) wglGetProcAddress("glClearNamedBufferDataEXT");
    glClearNamedBufferSubDataEXT = (mogl_function_glClearNamedBufferSubDataEXT) wglGetProcAddress("glClearNamedBufferSubDataEXT");
    glNamedFramebufferParameteriEXT = (mogl_function_glNamedFramebufferParameteriEXT) wglGetProcAddress("glNamedFramebufferParameteriEXT");
    glGetNamedFramebufferParameterivEXT = (mogl_function_glGetNamedFramebufferParameterivEXT) wglGetProcAddress("glGetNamedFramebufferParameterivEXT");
    glProgramUniform1dEXT = (mogl_function_glProgramUniform1dEXT) wglGetProcAddress("glProgramUniform1dEXT");
    glProgramUniform2dEXT = (mogl_function_glProgramUniform2dEXT) wglGetProcAddress("glProgramUniform2dEXT");
    glProgramUniform3dEXT = (mogl_function_glProgramUniform3dEXT) wglGetProcAddress("glProgramUniform3dEXT");
    glProgramUniform4dEXT = (mogl_function_glProgramUniform4dEXT) wglGetProcAddress("glProgramUniform4dEXT");
    glProgramUniform1dvEXT = (mogl_function_glProgramUniform1dvEXT) wglGetProcAddress("glProgramUniform1dvEXT");
    glProgramUniform2dvEXT = (mogl_function_glProgramUniform2dvEXT) wglGetProcAddress("glProgramUniform2dvEXT");
    glProgramUniform3dvEXT = (mogl_function_glProgramUniform3dvEXT) wglGetProcAddress("glProgramUniform3dvEXT");
    glProgramUniform4dvEXT = (mogl_function_glProgramUniform4dvEXT) wglGetProcAddress("glProgramUniform4dvEXT");
    glProgramUniformMatrix2dvEXT = (mogl_function_glProgramUniformMatrix2dvEXT) wglGetProcAddress("glProgramUniformMatrix2dvEXT");
    glProgramUniformMatrix3dvEXT = (mogl_function_glProgramUniformMatrix3dvEXT) wglGetProcAddress("glProgramUniformMatrix3dvEXT");
    glProgramUniformMatrix4dvEXT = (mogl_function_glProgramUniformMatrix4dvEXT) wglGetProcAddress("glProgramUniformMatrix4dvEXT");
    glProgramUniformMatrix2x3dvEXT = (mogl_function_glProgramUniformMatrix2x3dvEXT) wglGetProcAddress("glProgramUniformMatrix2x3dvEXT");
    glProgramUniformMatrix2x4dvEXT = (mogl_function_glProgramUniformMatrix2x4dvEXT) wglGetProcAddress("glProgramUniformMatrix2x4dvEXT");
    glProgramUniformMatrix3x2dvEXT = (mogl_function_glProgramUniformMatrix3x2dvEXT) wglGetProcAddress("glProgramUniformMatrix3x2dvEXT");
    glProgramUniformMatrix3x4dvEXT = (mogl_function_glProgramUniformMatrix3x4dvEXT) wglGetProcAddress("glProgramUniformMatrix3x4dvEXT");
    glProgramUniformMatrix4x2dvEXT = (mogl_function_glProgramUniformMatrix4x2dvEXT) wglGetProcAddress("glProgramUniformMatrix4x2dvEXT");
    glProgramUniformMatrix4x3dvEXT = (mogl_function_glProgramUniformMatrix4x3dvEXT) wglGetProcAddress("glProgramUniformMatrix4x3dvEXT");
    glTextureBufferRangeEXT = (mogl_function_glTextureBufferRangeEXT) wglGetProcAddress("glTextureBufferRangeEXT");
    glTextureStorage1DEXT = (mogl_function_glTextureStorage1DEXT) wglGetProcAddress("glTextureStorage1DEXT");
    glTextureStorage2DEXT = (mogl_function_glTextureStorage2DEXT) wglGetProcAddress("glTextureStorage2DEXT");
    glTextureStorage3DEXT = (mogl_function_glTextureStorage3DEXT) wglGetProcAddress("glTextureStorage3DEXT");
    glTextureStorage2DMultisampleEXT = (mogl_function_glTextureStorage2DMultisampleEXT) wglGetProcAddress("glTextureStorage2DMultisampleEXT");
    glTextureStorage3DMultisampleEXT = (mogl_function_glTextureStorage3DMultisampleEXT) wglGetProcAddress("glTextureStorage3DMultisampleEXT");
    glVertexArrayBindVertexBufferEXT = (mogl_function_glVertexArrayBindVertexBufferEXT) wglGetProcAddress("glVertexArrayBindVertexBufferEXT");
    glVertexArrayVertexAttribFormatEXT = (mogl_function_glVertexArrayVertexAttribFormatEXT) wglGetProcAddress("glVertexArrayVertexAttribFormatEXT");
    glVertexArrayVertexAttribIFormatEXT = (mogl_function_glVertexArrayVertexAttribIFormatEXT) wglGetProcAddress("glVertexArrayVertexAttribIFormatEXT");
    glVertexArrayVertexAttribLFormatEXT = (mogl_function_glVertexArrayVertexAttribLFormatEXT) wglGetProcAddress("glVertexArrayVertexAttribLFormatEXT");
    glVertexArrayVertexAttribBindingEXT = (mogl_function_glVertexArrayVertexAttribBindingEXT) wglGetProcAddress("glVertexArrayVertexAttribBindingEXT");
    glVertexArrayVertexBindingDivisorEXT = (mogl_function_glVertexArrayVertexBindingDivisorEXT) wglGetProcAddress("glVertexArrayVertexBindingDivisorEXT");
    glVertexArrayVertexAttribLOffsetEXT = (mogl_function_glVertexArrayVertexAttribLOffsetEXT) wglGetProcAddress("glVertexArrayVertexAttribLOffsetEXT");
    glTexturePageCommitmentEXT = (mogl_function_glTexturePageCommitmentEXT) wglGetProcAddress("glTexturePageCommitmentEXT");
    glVertexArrayVertexAttribDivisorEXT = (mogl_function_glVertexArrayVertexAttribDivisorEXT) wglGetProcAddress("glVertexArrayVertexAttribDivisorEXT");
    glColorMaskIndexedEXT = (mogl_function_glColorMaskIndexedEXT) wglGetProcAddress("glColorMaskIndexedEXT");
    glDrawArraysInstancedEXT = (mogl_function_glDrawArraysInstancedEXT) wglGetProcAddress("glDrawArraysInstancedEXT");
    glDrawElementsInstancedEXT = (mogl_function_glDrawElementsInstancedEXT) wglGetProcAddress("glDrawElementsInstancedEXT");
    glDrawRangeElementsEXT = (mogl_function_glDrawRangeElementsEXT) wglGetProcAddress("glDrawRangeElementsEXT");
    glBufferStorageExternalEXT = (mogl_function_glBufferStorageExternalEXT) wglGetProcAddress("glBufferStorageExternalEXT");
    glNamedBufferStorageExternalEXT = (mogl_function_glNamedBufferStorageExternalEXT) wglGetProcAddress("glNamedBufferStorageExternalEXT");
    glFogCoordfEXT = (mogl_function_glFogCoordfEXT) wglGetProcAddress("glFogCoordfEXT");
    glFogCoordfvEXT = (mogl_function_glFogCoordfvEXT) wglGetProcAddress("glFogCoordfvEXT");
    glFogCoorddEXT = (mogl_function_glFogCoorddEXT) wglGetProcAddress("glFogCoorddEXT");
    glFogCoorddvEXT = (mogl_function_glFogCoorddvEXT) wglGetProcAddress("glFogCoorddvEXT");
    glFogCoordPointerEXT = (mogl_function_glFogCoordPointerEXT) wglGetProcAddress("glFogCoordPointerEXT");
    glBlitFramebufferEXT = (mogl_function_glBlitFramebufferEXT) wglGetProcAddress("glBlitFramebufferEXT");
    glBlitFramebufferLayersEXT = (mogl_function_glBlitFramebufferLayersEXT) wglGetProcAddress("glBlitFramebufferLayersEXT");
    glBlitFramebufferLayerEXT = (mogl_function_glBlitFramebufferLayerEXT) wglGetProcAddress("glBlitFramebufferLayerEXT");
    glRenderbufferStorageMultisampleEXT = (mogl_function_glRenderbufferStorageMultisampleEXT) wglGetProcAddress("glRenderbufferStorageMultisampleEXT");
    glIsRenderbufferEXT = (mogl_function_glIsRenderbufferEXT) wglGetProcAddress("glIsRenderbufferEXT");
    glBindRenderbufferEXT = (mogl_function_glBindRenderbufferEXT) wglGetProcAddress("glBindRenderbufferEXT");
    glDeleteRenderbuffersEXT = (mogl_function_glDeleteRenderbuffersEXT) wglGetProcAddress("glDeleteRenderbuffersEXT");
    glGenRenderbuffersEXT = (mogl_function_glGenRenderbuffersEXT) wglGetProcAddress("glGenRenderbuffersEXT");
    glRenderbufferStorageEXT = (mogl_function_glRenderbufferStorageEXT) wglGetProcAddress("glRenderbufferStorageEXT");
    glGetRenderbufferParameterivEXT = (mogl_function_glGetRenderbufferParameterivEXT) wglGetProcAddress("glGetRenderbufferParameterivEXT");
    glIsFramebufferEXT = (mogl_function_glIsFramebufferEXT) wglGetProcAddress("glIsFramebufferEXT");
    glBindFramebufferEXT = (mogl_function_glBindFramebufferEXT) wglGetProcAddress("glBindFramebufferEXT");
    glDeleteFramebuffersEXT = (mogl_function_glDeleteFramebuffersEXT) wglGetProcAddress("glDeleteFramebuffersEXT");
    glGenFramebuffersEXT = (mogl_function_glGenFramebuffersEXT) wglGetProcAddress("glGenFramebuffersEXT");
    glCheckFramebufferStatusEXT = (mogl_function_glCheckFramebufferStatusEXT) wglGetProcAddress("glCheckFramebufferStatusEXT");
    glFramebufferTexture1DEXT = (mogl_function_glFramebufferTexture1DEXT) wglGetProcAddress("glFramebufferTexture1DEXT");
    glFramebufferTexture2DEXT = (mogl_function_glFramebufferTexture2DEXT) wglGetProcAddress("glFramebufferTexture2DEXT");
    glFramebufferTexture3DEXT = (mogl_function_glFramebufferTexture3DEXT) wglGetProcAddress("glFramebufferTexture3DEXT");
    glFramebufferRenderbufferEXT = (mogl_function_glFramebufferRenderbufferEXT) wglGetProcAddress("glFramebufferRenderbufferEXT");
    glGetFramebufferAttachmentParameterivEXT = (mogl_function_glGetFramebufferAttachmentParameterivEXT) wglGetProcAddress("glGetFramebufferAttachmentParameterivEXT");
    glGenerateMipmapEXT = (mogl_function_glGenerateMipmapEXT) wglGetProcAddress("glGenerateMipmapEXT");
    glProgramParameteriEXT = (mogl_function_glProgramParameteriEXT) wglGetProcAddress("glProgramParameteriEXT");
    glProgramEnvParameters4fvEXT = (mogl_function_glProgramEnvParameters4fvEXT) wglGetProcAddress("glProgramEnvParameters4fvEXT");
    glProgramLocalParameters4fvEXT = (mogl_function_glProgramLocalParameters4fvEXT) wglGetProcAddress("glProgramLocalParameters4fvEXT");
    glGetUniformuivEXT = (mogl_function_glGetUniformuivEXT) wglGetProcAddress("glGetUniformuivEXT");
    glBindFragDataLocationEXT = (mogl_function_glBindFragDataLocationEXT) wglGetProcAddress("glBindFragDataLocationEXT");
    glGetFragDataLocationEXT = (mogl_function_glGetFragDataLocationEXT) wglGetProcAddress("glGetFragDataLocationEXT");
    glUniform1uiEXT = (mogl_function_glUniform1uiEXT) wglGetProcAddress("glUniform1uiEXT");
    glUniform2uiEXT = (mogl_function_glUniform2uiEXT) wglGetProcAddress("glUniform2uiEXT");
    glUniform3uiEXT = (mogl_function_glUniform3uiEXT) wglGetProcAddress("glUniform3uiEXT");
    glUniform4uiEXT = (mogl_function_glUniform4uiEXT) wglGetProcAddress("glUniform4uiEXT");
    glUniform1uivEXT = (mogl_function_glUniform1uivEXT) wglGetProcAddress("glUniform1uivEXT");
    glUniform2uivEXT = (mogl_function_glUniform2uivEXT) wglGetProcAddress("glUniform2uivEXT");
    glUniform3uivEXT = (mogl_function_glUniform3uivEXT) wglGetProcAddress("glUniform3uivEXT");
    glUniform4uivEXT = (mogl_function_glUniform4uivEXT) wglGetProcAddress("glUniform4uivEXT");
    glVertexAttribI1iEXT = (mogl_function_glVertexAttribI1iEXT) wglGetProcAddress("glVertexAttribI1iEXT");
    glVertexAttribI2iEXT = (mogl_function_glVertexAttribI2iEXT) wglGetProcAddress("glVertexAttribI2iEXT");
    glVertexAttribI3iEXT = (mogl_function_glVertexAttribI3iEXT) wglGetProcAddress("glVertexAttribI3iEXT");
    glVertexAttribI4iEXT = (mogl_function_glVertexAttribI4iEXT) wglGetProcAddress("glVertexAttribI4iEXT");
    glVertexAttribI1uiEXT = (mogl_function_glVertexAttribI1uiEXT) wglGetProcAddress("glVertexAttribI1uiEXT");
    glVertexAttribI2uiEXT = (mogl_function_glVertexAttribI2uiEXT) wglGetProcAddress("glVertexAttribI2uiEXT");
    glVertexAttribI3uiEXT = (mogl_function_glVertexAttribI3uiEXT) wglGetProcAddress("glVertexAttribI3uiEXT");
    glVertexAttribI4uiEXT = (mogl_function_glVertexAttribI4uiEXT) wglGetProcAddress("glVertexAttribI4uiEXT");
    glVertexAttribI1ivEXT = (mogl_function_glVertexAttribI1ivEXT) wglGetProcAddress("glVertexAttribI1ivEXT");
    glVertexAttribI2ivEXT = (mogl_function_glVertexAttribI2ivEXT) wglGetProcAddress("glVertexAttribI2ivEXT");
    glVertexAttribI3ivEXT = (mogl_function_glVertexAttribI3ivEXT) wglGetProcAddress("glVertexAttribI3ivEXT");
    glVertexAttribI4ivEXT = (mogl_function_glVertexAttribI4ivEXT) wglGetProcAddress("glVertexAttribI4ivEXT");
    glVertexAttribI1uivEXT = (mogl_function_glVertexAttribI1uivEXT) wglGetProcAddress("glVertexAttribI1uivEXT");
    glVertexAttribI2uivEXT = (mogl_function_glVertexAttribI2uivEXT) wglGetProcAddress("glVertexAttribI2uivEXT");
    glVertexAttribI3uivEXT = (mogl_function_glVertexAttribI3uivEXT) wglGetProcAddress("glVertexAttribI3uivEXT");
    glVertexAttribI4uivEXT = (mogl_function_glVertexAttribI4uivEXT) wglGetProcAddress("glVertexAttribI4uivEXT");
    glVertexAttribI4bvEXT = (mogl_function_glVertexAttribI4bvEXT) wglGetProcAddress("glVertexAttribI4bvEXT");
    glVertexAttribI4svEXT = (mogl_function_glVertexAttribI4svEXT) wglGetProcAddress("glVertexAttribI4svEXT");
    glVertexAttribI4ubvEXT = (mogl_function_glVertexAttribI4ubvEXT) wglGetProcAddress("glVertexAttribI4ubvEXT");
    glVertexAttribI4usvEXT = (mogl_function_glVertexAttribI4usvEXT) wglGetProcAddress("glVertexAttribI4usvEXT");
    glVertexAttribIPointerEXT = (mogl_function_glVertexAttribIPointerEXT) wglGetProcAddress("glVertexAttribIPointerEXT");
    glGetVertexAttribIivEXT = (mogl_function_glGetVertexAttribIivEXT) wglGetProcAddress("glGetVertexAttribIivEXT");
    glGetVertexAttribIuivEXT = (mogl_function_glGetVertexAttribIuivEXT) wglGetProcAddress("glGetVertexAttribIuivEXT");
    glGetHistogramEXT = (mogl_function_glGetHistogramEXT) wglGetProcAddress("glGetHistogramEXT");
    glGetHistogramParameterfvEXT = (mogl_function_glGetHistogramParameterfvEXT) wglGetProcAddress("glGetHistogramParameterfvEXT");
    glGetHistogramParameterivEXT = (mogl_function_glGetHistogramParameterivEXT) wglGetProcAddress("glGetHistogramParameterivEXT");
    glGetMinmaxEXT = (mogl_function_glGetMinmaxEXT) wglGetProcAddress("glGetMinmaxEXT");
    glGetMinmaxParameterfvEXT = (mogl_function_glGetMinmaxParameterfvEXT) wglGetProcAddress("glGetMinmaxParameterfvEXT");
    glGetMinmaxParameterivEXT = (mogl_function_glGetMinmaxParameterivEXT) wglGetProcAddress("glGetMinmaxParameterivEXT");
    glHistogramEXT = (mogl_function_glHistogramEXT) wglGetProcAddress("glHistogramEXT");
    glMinmaxEXT = (mogl_function_glMinmaxEXT) wglGetProcAddress("glMinmaxEXT");
    glResetHistogramEXT = (mogl_function_glResetHistogramEXT) wglGetProcAddress("glResetHistogramEXT");
    glResetMinmaxEXT = (mogl_function_glResetMinmaxEXT) wglGetProcAddress("glResetMinmaxEXT");
    glIndexFuncEXT = (mogl_function_glIndexFuncEXT) wglGetProcAddress("glIndexFuncEXT");
    glIndexMaterialEXT = (mogl_function_glIndexMaterialEXT) wglGetProcAddress("glIndexMaterialEXT");
    glApplyTextureEXT = (mogl_function_glApplyTextureEXT) wglGetProcAddress("glApplyTextureEXT");
    glTextureLightEXT = (mogl_function_glTextureLightEXT) wglGetProcAddress("glTextureLightEXT");
    glTextureMaterialEXT = (mogl_function_glTextureMaterialEXT) wglGetProcAddress("glTextureMaterialEXT");
    glGetUnsignedBytevEXT = (mogl_function_glGetUnsignedBytevEXT) wglGetProcAddress("glGetUnsignedBytevEXT");
    glGetUnsignedBytei_vEXT = (mogl_function_glGetUnsignedBytei_vEXT) wglGetProcAddress("glGetUnsignedBytei_vEXT");
    glDeleteMemoryObjectsEXT = (mogl_function_glDeleteMemoryObjectsEXT) wglGetProcAddress("glDeleteMemoryObjectsEXT");
    glIsMemoryObjectEXT = (mogl_function_glIsMemoryObjectEXT) wglGetProcAddress("glIsMemoryObjectEXT");
    glCreateMemoryObjectsEXT = (mogl_function_glCreateMemoryObjectsEXT) wglGetProcAddress("glCreateMemoryObjectsEXT");
    glMemoryObjectParameterivEXT = (mogl_function_glMemoryObjectParameterivEXT) wglGetProcAddress("glMemoryObjectParameterivEXT");
    glGetMemoryObjectParameterivEXT = (mogl_function_glGetMemoryObjectParameterivEXT) wglGetProcAddress("glGetMemoryObjectParameterivEXT");
    glTexStorageMem2DEXT = (mogl_function_glTexStorageMem2DEXT) wglGetProcAddress("glTexStorageMem2DEXT");
    glTexStorageMem2DMultisampleEXT = (mogl_function_glTexStorageMem2DMultisampleEXT) wglGetProcAddress("glTexStorageMem2DMultisampleEXT");
    glTexStorageMem3DEXT = (mogl_function_glTexStorageMem3DEXT) wglGetProcAddress("glTexStorageMem3DEXT");
    glTexStorageMem3DMultisampleEXT = (mogl_function_glTexStorageMem3DMultisampleEXT) wglGetProcAddress("glTexStorageMem3DMultisampleEXT");
    glBufferStorageMemEXT = (mogl_function_glBufferStorageMemEXT) wglGetProcAddress("glBufferStorageMemEXT");
    glTextureStorageMem2DEXT = (mogl_function_glTextureStorageMem2DEXT) wglGetProcAddress("glTextureStorageMem2DEXT");
    glTextureStorageMem2DMultisampleEXT = (mogl_function_glTextureStorageMem2DMultisampleEXT) wglGetProcAddress("glTextureStorageMem2DMultisampleEXT");
    glTextureStorageMem3DEXT = (mogl_function_glTextureStorageMem3DEXT) wglGetProcAddress("glTextureStorageMem3DEXT");
    glTextureStorageMem3DMultisampleEXT = (mogl_function_glTextureStorageMem3DMultisampleEXT) wglGetProcAddress("glTextureStorageMem3DMultisampleEXT");
    glNamedBufferStorageMemEXT = (mogl_function_glNamedBufferStorageMemEXT) wglGetProcAddress("glNamedBufferStorageMemEXT");
    glTexStorageMem1DEXT = (mogl_function_glTexStorageMem1DEXT) wglGetProcAddress("glTexStorageMem1DEXT");
    glTextureStorageMem1DEXT = (mogl_function_glTextureStorageMem1DEXT) wglGetProcAddress("glTextureStorageMem1DEXT");
    glImportMemoryFdEXT = (mogl_function_glImportMemoryFdEXT) wglGetProcAddress("glImportMemoryFdEXT");
    glImportMemoryWin32HandleEXT = (mogl_function_glImportMemoryWin32HandleEXT) wglGetProcAddress("glImportMemoryWin32HandleEXT");
    glImportMemoryWin32NameEXT = (mogl_function_glImportMemoryWin32NameEXT) wglGetProcAddress("glImportMemoryWin32NameEXT");
    glMultiDrawArraysEXT = (mogl_function_glMultiDrawArraysEXT) wglGetProcAddress("glMultiDrawArraysEXT");
    glMultiDrawElementsEXT = (mogl_function_glMultiDrawElementsEXT) wglGetProcAddress("glMultiDrawElementsEXT");
    glSampleMaskEXT = (mogl_function_glSampleMaskEXT) wglGetProcAddress("glSampleMaskEXT");
    glSamplePatternEXT = (mogl_function_glSamplePatternEXT) wglGetProcAddress("glSamplePatternEXT");
    glColorTableEXT = (mogl_function_glColorTableEXT) wglGetProcAddress("glColorTableEXT");
    glGetColorTableEXT = (mogl_function_glGetColorTableEXT) wglGetProcAddress("glGetColorTableEXT");
    glGetColorTableParameterivEXT = (mogl_function_glGetColorTableParameterivEXT) wglGetProcAddress("glGetColorTableParameterivEXT");
    glGetColorTableParameterfvEXT = (mogl_function_glGetColorTableParameterfvEXT) wglGetProcAddress("glGetColorTableParameterfvEXT");
    glPixelTransformParameteriEXT = (mogl_function_glPixelTransformParameteriEXT) wglGetProcAddress("glPixelTransformParameteriEXT");
    glPixelTransformParameterfEXT = (mogl_function_glPixelTransformParameterfEXT) wglGetProcAddress("glPixelTransformParameterfEXT");
    glPixelTransformParameterivEXT = (mogl_function_glPixelTransformParameterivEXT) wglGetProcAddress("glPixelTransformParameterivEXT");
    glPixelTransformParameterfvEXT = (mogl_function_glPixelTransformParameterfvEXT) wglGetProcAddress("glPixelTransformParameterfvEXT");
    glGetPixelTransformParameterivEXT = (mogl_function_glGetPixelTransformParameterivEXT) wglGetProcAddress("glGetPixelTransformParameterivEXT");
    glGetPixelTransformParameterfvEXT = (mogl_function_glGetPixelTransformParameterfvEXT) wglGetProcAddress("glGetPixelTransformParameterfvEXT");
    glPointParameterfEXT = (mogl_function_glPointParameterfEXT) wglGetProcAddress("glPointParameterfEXT");
    glPointParameterfvEXT = (mogl_function_glPointParameterfvEXT) wglGetProcAddress("glPointParameterfvEXT");
    glPolygonOffsetEXT = (mogl_function_glPolygonOffsetEXT) wglGetProcAddress("glPolygonOffsetEXT");
    glPolygonOffsetClampEXT = (mogl_function_glPolygonOffsetClampEXT) wglGetProcAddress("glPolygonOffsetClampEXT");
    glProvokingVertexEXT = (mogl_function_glProvokingVertexEXT) wglGetProcAddress("glProvokingVertexEXT");
    glRasterSamplesEXT = (mogl_function_glRasterSamplesEXT) wglGetProcAddress("glRasterSamplesEXT");
    glSecondaryColor3bEXT = (mogl_function_glSecondaryColor3bEXT) wglGetProcAddress("glSecondaryColor3bEXT");
    glSecondaryColor3bvEXT = (mogl_function_glSecondaryColor3bvEXT) wglGetProcAddress("glSecondaryColor3bvEXT");
    glSecondaryColor3dEXT = (mogl_function_glSecondaryColor3dEXT) wglGetProcAddress("glSecondaryColor3dEXT");
    glSecondaryColor3dvEXT = (mogl_function_glSecondaryColor3dvEXT) wglGetProcAddress("glSecondaryColor3dvEXT");
    glSecondaryColor3fEXT = (mogl_function_glSecondaryColor3fEXT) wglGetProcAddress("glSecondaryColor3fEXT");
    glSecondaryColor3fvEXT = (mogl_function_glSecondaryColor3fvEXT) wglGetProcAddress("glSecondaryColor3fvEXT");
    glSecondaryColor3iEXT = (mogl_function_glSecondaryColor3iEXT) wglGetProcAddress("glSecondaryColor3iEXT");
    glSecondaryColor3ivEXT = (mogl_function_glSecondaryColor3ivEXT) wglGetProcAddress("glSecondaryColor3ivEXT");
    glSecondaryColor3sEXT = (mogl_function_glSecondaryColor3sEXT) wglGetProcAddress("glSecondaryColor3sEXT");
    glSecondaryColor3svEXT = (mogl_function_glSecondaryColor3svEXT) wglGetProcAddress("glSecondaryColor3svEXT");
    glSecondaryColor3ubEXT = (mogl_function_glSecondaryColor3ubEXT) wglGetProcAddress("glSecondaryColor3ubEXT");
    glSecondaryColor3ubvEXT = (mogl_function_glSecondaryColor3ubvEXT) wglGetProcAddress("glSecondaryColor3ubvEXT");
    glSecondaryColor3uiEXT = (mogl_function_glSecondaryColor3uiEXT) wglGetProcAddress("glSecondaryColor3uiEXT");
    glSecondaryColor3uivEXT = (mogl_function_glSecondaryColor3uivEXT) wglGetProcAddress("glSecondaryColor3uivEXT");
    glSecondaryColor3usEXT = (mogl_function_glSecondaryColor3usEXT) wglGetProcAddress("glSecondaryColor3usEXT");
    glSecondaryColor3usvEXT = (mogl_function_glSecondaryColor3usvEXT) wglGetProcAddress("glSecondaryColor3usvEXT");
    glSecondaryColorPointerEXT = (mogl_function_glSecondaryColorPointerEXT) wglGetProcAddress("glSecondaryColorPointerEXT");
    glGenSemaphoresEXT = (mogl_function_glGenSemaphoresEXT) wglGetProcAddress("glGenSemaphoresEXT");
    glDeleteSemaphoresEXT = (mogl_function_glDeleteSemaphoresEXT) wglGetProcAddress("glDeleteSemaphoresEXT");
    glIsSemaphoreEXT = (mogl_function_glIsSemaphoreEXT) wglGetProcAddress("glIsSemaphoreEXT");
    glSemaphoreParameterui64vEXT = (mogl_function_glSemaphoreParameterui64vEXT) wglGetProcAddress("glSemaphoreParameterui64vEXT");
    glGetSemaphoreParameterui64vEXT = (mogl_function_glGetSemaphoreParameterui64vEXT) wglGetProcAddress("glGetSemaphoreParameterui64vEXT");
    glWaitSemaphoreEXT = (mogl_function_glWaitSemaphoreEXT) wglGetProcAddress("glWaitSemaphoreEXT");
    glSignalSemaphoreEXT = (mogl_function_glSignalSemaphoreEXT) wglGetProcAddress("glSignalSemaphoreEXT");
    glImportSemaphoreFdEXT = (mogl_function_glImportSemaphoreFdEXT) wglGetProcAddress("glImportSemaphoreFdEXT");
    glImportSemaphoreWin32HandleEXT = (mogl_function_glImportSemaphoreWin32HandleEXT) wglGetProcAddress("glImportSemaphoreWin32HandleEXT");
    glImportSemaphoreWin32NameEXT = (mogl_function_glImportSemaphoreWin32NameEXT) wglGetProcAddress("glImportSemaphoreWin32NameEXT");
    glUseShaderProgramEXT = (mogl_function_glUseShaderProgramEXT) wglGetProcAddress("glUseShaderProgramEXT");
    glActiveProgramEXT = (mogl_function_glActiveProgramEXT) wglGetProcAddress("glActiveProgramEXT");
    glCreateShaderProgramEXT = (mogl_function_glCreateShaderProgramEXT) wglGetProcAddress("glCreateShaderProgramEXT");
    glFramebufferFetchBarrierEXT = (mogl_function_glFramebufferFetchBarrierEXT) wglGetProcAddress("glFramebufferFetchBarrierEXT");
    glBindImageTextureEXT = (mogl_function_glBindImageTextureEXT) wglGetProcAddress("glBindImageTextureEXT");
    glMemoryBarrierEXT = (mogl_function_glMemoryBarrierEXT) wglGetProcAddress("glMemoryBarrierEXT");
    glStencilClearTagEXT = (mogl_function_glStencilClearTagEXT) wglGetProcAddress("glStencilClearTagEXT");
    glActiveStencilFaceEXT = (mogl_function_glActiveStencilFaceEXT) wglGetProcAddress("glActiveStencilFaceEXT");
    glTexSubImage1DEXT = (mogl_function_glTexSubImage1DEXT) wglGetProcAddress("glTexSubImage1DEXT");
    glTexSubImage2DEXT = (mogl_function_glTexSubImage2DEXT) wglGetProcAddress("glTexSubImage2DEXT");
    glTexImage3DEXT = (mogl_function_glTexImage3DEXT) wglGetProcAddress("glTexImage3DEXT");
    glTexSubImage3DEXT = (mogl_function_glTexSubImage3DEXT) wglGetProcAddress("glTexSubImage3DEXT");
    glFramebufferTextureLayerEXT = (mogl_function_glFramebufferTextureLayerEXT) wglGetProcAddress("glFramebufferTextureLayerEXT");
    glTexBufferEXT = (mogl_function_glTexBufferEXT) wglGetProcAddress("glTexBufferEXT");
    glTexParameterIivEXT = (mogl_function_glTexParameterIivEXT) wglGetProcAddress("glTexParameterIivEXT");
    glTexParameterIuivEXT = (mogl_function_glTexParameterIuivEXT) wglGetProcAddress("glTexParameterIuivEXT");
    glGetTexParameterIivEXT = (mogl_function_glGetTexParameterIivEXT) wglGetProcAddress("glGetTexParameterIivEXT");
    glGetTexParameterIuivEXT = (mogl_function_glGetTexParameterIuivEXT) wglGetProcAddress("glGetTexParameterIuivEXT");
    glClearColorIiEXT = (mogl_function_glClearColorIiEXT) wglGetProcAddress("glClearColorIiEXT");
    glClearColorIuiEXT = (mogl_function_glClearColorIuiEXT) wglGetProcAddress("glClearColorIuiEXT");
    glAreTexturesResidentEXT = (mogl_function_glAreTexturesResidentEXT) wglGetProcAddress("glAreTexturesResidentEXT");
    glBindTextureEXT = (mogl_function_glBindTextureEXT) wglGetProcAddress("glBindTextureEXT");
    glDeleteTexturesEXT = (mogl_function_glDeleteTexturesEXT) wglGetProcAddress("glDeleteTexturesEXT");
    glGenTexturesEXT = (mogl_function_glGenTexturesEXT) wglGetProcAddress("glGenTexturesEXT");
    glIsTextureEXT = (mogl_function_glIsTextureEXT) wglGetProcAddress("glIsTextureEXT");
    glPrioritizeTexturesEXT = (mogl_function_glPrioritizeTexturesEXT) wglGetProcAddress("glPrioritizeTexturesEXT");
    glTextureNormalEXT = (mogl_function_glTextureNormalEXT) wglGetProcAddress("glTextureNormalEXT");
    glTexStorage1DEXT = (mogl_function_glTexStorage1DEXT) wglGetProcAddress("glTexStorage1DEXT");
    glTexStorage2DEXT = (mogl_function_glTexStorage2DEXT) wglGetProcAddress("glTexStorage2DEXT");
    glTexStorage3DEXT = (mogl_function_glTexStorage3DEXT) wglGetProcAddress("glTexStorage3DEXT");
    glGetQueryObjecti64vEXT = (mogl_function_glGetQueryObjecti64vEXT) wglGetProcAddress("glGetQueryObjecti64vEXT");
    glGetQueryObjectui64vEXT = (mogl_function_glGetQueryObjectui64vEXT) wglGetProcAddress("glGetQueryObjectui64vEXT");
    glBeginTransformFeedbackEXT = (mogl_function_glBeginTransformFeedbackEXT) wglGetProcAddress("glBeginTransformFeedbackEXT");
    glEndTransformFeedbackEXT = (mogl_function_glEndTransformFeedbackEXT) wglGetProcAddress("glEndTransformFeedbackEXT");
    glBindBufferRangeEXT = (mogl_function_glBindBufferRangeEXT) wglGetProcAddress("glBindBufferRangeEXT");
    glBindBufferOffsetEXT = (mogl_function_glBindBufferOffsetEXT) wglGetProcAddress("glBindBufferOffsetEXT");
    glBindBufferBaseEXT = (mogl_function_glBindBufferBaseEXT) wglGetProcAddress("glBindBufferBaseEXT");
    glTransformFeedbackVaryingsEXT = (mogl_function_glTransformFeedbackVaryingsEXT) wglGetProcAddress("glTransformFeedbackVaryingsEXT");
    glGetTransformFeedbackVaryingEXT = (mogl_function_glGetTransformFeedbackVaryingEXT) wglGetProcAddress("glGetTransformFeedbackVaryingEXT");
    glArrayElementEXT = (mogl_function_glArrayElementEXT) wglGetProcAddress("glArrayElementEXT");
    glColorPointerEXT = (mogl_function_glColorPointerEXT) wglGetProcAddress("glColorPointerEXT");
    glDrawArraysEXT = (mogl_function_glDrawArraysEXT) wglGetProcAddress("glDrawArraysEXT");
    glEdgeFlagPointerEXT = (mogl_function_glEdgeFlagPointerEXT) wglGetProcAddress("glEdgeFlagPointerEXT");
    glGetPointervEXT = (mogl_function_glGetPointervEXT) wglGetProcAddress("glGetPointervEXT");
    glIndexPointerEXT = (mogl_function_glIndexPointerEXT) wglGetProcAddress("glIndexPointerEXT");
    glNormalPointerEXT = (mogl_function_glNormalPointerEXT) wglGetProcAddress("glNormalPointerEXT");
    glTexCoordPointerEXT = (mogl_function_glTexCoordPointerEXT) wglGetProcAddress("glTexCoordPointerEXT");
    glVertexPointerEXT = (mogl_function_glVertexPointerEXT) wglGetProcAddress("glVertexPointerEXT");
    glVertexAttribL1dEXT = (mogl_function_glVertexAttribL1dEXT) wglGetProcAddress("glVertexAttribL1dEXT");
    glVertexAttribL2dEXT = (mogl_function_glVertexAttribL2dEXT) wglGetProcAddress("glVertexAttribL2dEXT");
    glVertexAttribL3dEXT = (mogl_function_glVertexAttribL3dEXT) wglGetProcAddress("glVertexAttribL3dEXT");
    glVertexAttribL4dEXT = (mogl_function_glVertexAttribL4dEXT) wglGetProcAddress("glVertexAttribL4dEXT");
    glVertexAttribL1dvEXT = (mogl_function_glVertexAttribL1dvEXT) wglGetProcAddress("glVertexAttribL1dvEXT");
    glVertexAttribL2dvEXT = (mogl_function_glVertexAttribL2dvEXT) wglGetProcAddress("glVertexAttribL2dvEXT");
    glVertexAttribL3dvEXT = (mogl_function_glVertexAttribL3dvEXT) wglGetProcAddress("glVertexAttribL3dvEXT");
    glVertexAttribL4dvEXT = (mogl_function_glVertexAttribL4dvEXT) wglGetProcAddress("glVertexAttribL4dvEXT");
    glVertexAttribLPointerEXT = (mogl_function_glVertexAttribLPointerEXT) wglGetProcAddress("glVertexAttribLPointerEXT");
    glGetVertexAttribLdvEXT = (mogl_function_glGetVertexAttribLdvEXT) wglGetProcAddress("glGetVertexAttribLdvEXT");
    glBeginVertexShaderEXT = (mogl_function_glBeginVertexShaderEXT) wglGetProcAddress("glBeginVertexShaderEXT");
    glEndVertexShaderEXT = (mogl_function_glEndVertexShaderEXT) wglGetProcAddress("glEndVertexShaderEXT");
    glBindVertexShaderEXT = (mogl_function_glBindVertexShaderEXT) wglGetProcAddress("glBindVertexShaderEXT");
    glGenVertexShadersEXT = (mogl_function_glGenVertexShadersEXT) wglGetProcAddress("glGenVertexShadersEXT");
    glDeleteVertexShaderEXT = (mogl_function_glDeleteVertexShaderEXT) wglGetProcAddress("glDeleteVertexShaderEXT");
    glShaderOp1EXT = (mogl_function_glShaderOp1EXT) wglGetProcAddress("glShaderOp1EXT");
    glShaderOp2EXT = (mogl_function_glShaderOp2EXT) wglGetProcAddress("glShaderOp2EXT");
    glShaderOp3EXT = (mogl_function_glShaderOp3EXT) wglGetProcAddress("glShaderOp3EXT");
    glSwizzleEXT = (mogl_function_glSwizzleEXT) wglGetProcAddress("glSwizzleEXT");
    glWriteMaskEXT = (mogl_function_glWriteMaskEXT) wglGetProcAddress("glWriteMaskEXT");
    glInsertComponentEXT = (mogl_function_glInsertComponentEXT) wglGetProcAddress("glInsertComponentEXT");
    glExtractComponentEXT = (mogl_function_glExtractComponentEXT) wglGetProcAddress("glExtractComponentEXT");
    glGenSymbolsEXT = (mogl_function_glGenSymbolsEXT) wglGetProcAddress("glGenSymbolsEXT");
    glSetInvariantEXT = (mogl_function_glSetInvariantEXT) wglGetProcAddress("glSetInvariantEXT");
    glSetLocalConstantEXT = (mogl_function_glSetLocalConstantEXT) wglGetProcAddress("glSetLocalConstantEXT");
    glVariantbvEXT = (mogl_function_glVariantbvEXT) wglGetProcAddress("glVariantbvEXT");
    glVariantsvEXT = (mogl_function_glVariantsvEXT) wglGetProcAddress("glVariantsvEXT");
    glVariantivEXT = (mogl_function_glVariantivEXT) wglGetProcAddress("glVariantivEXT");
    glVariantfvEXT = (mogl_function_glVariantfvEXT) wglGetProcAddress("glVariantfvEXT");
    glVariantdvEXT = (mogl_function_glVariantdvEXT) wglGetProcAddress("glVariantdvEXT");
    glVariantubvEXT = (mogl_function_glVariantubvEXT) wglGetProcAddress("glVariantubvEXT");
    glVariantusvEXT = (mogl_function_glVariantusvEXT) wglGetProcAddress("glVariantusvEXT");
    glVariantuivEXT = (mogl_function_glVariantuivEXT) wglGetProcAddress("glVariantuivEXT");
    glVariantPointerEXT = (mogl_function_glVariantPointerEXT) wglGetProcAddress("glVariantPointerEXT");
    glEnableVariantClientStateEXT = (mogl_function_glEnableVariantClientStateEXT) wglGetProcAddress("glEnableVariantClientStateEXT");
    glDisableVariantClientStateEXT = (mogl_function_glDisableVariantClientStateEXT) wglGetProcAddress("glDisableVariantClientStateEXT");
    glBindLightParameterEXT = (mogl_function_glBindLightParameterEXT) wglGetProcAddress("glBindLightParameterEXT");
    glBindMaterialParameterEXT = (mogl_function_glBindMaterialParameterEXT) wglGetProcAddress("glBindMaterialParameterEXT");
    glBindTexGenParameterEXT = (mogl_function_glBindTexGenParameterEXT) wglGetProcAddress("glBindTexGenParameterEXT");
    glBindTextureUnitParameterEXT = (mogl_function_glBindTextureUnitParameterEXT) wglGetProcAddress("glBindTextureUnitParameterEXT");
    glBindParameterEXT = (mogl_function_glBindParameterEXT) wglGetProcAddress("glBindParameterEXT");
    glIsVariantEnabledEXT = (mogl_function_glIsVariantEnabledEXT) wglGetProcAddress("glIsVariantEnabledEXT");
    glGetVariantBooleanvEXT = (mogl_function_glGetVariantBooleanvEXT) wglGetProcAddress("glGetVariantBooleanvEXT");
    glGetVariantIntegervEXT = (mogl_function_glGetVariantIntegervEXT) wglGetProcAddress("glGetVariantIntegervEXT");
    glGetVariantFloatvEXT = (mogl_function_glGetVariantFloatvEXT) wglGetProcAddress("glGetVariantFloatvEXT");
    glGetVariantPointervEXT = (mogl_function_glGetVariantPointervEXT) wglGetProcAddress("glGetVariantPointervEXT");
    glGetInvariantBooleanvEXT = (mogl_function_glGetInvariantBooleanvEXT) wglGetProcAddress("glGetInvariantBooleanvEXT");
    glGetInvariantIntegervEXT = (mogl_function_glGetInvariantIntegervEXT) wglGetProcAddress("glGetInvariantIntegervEXT");
    glGetInvariantFloatvEXT = (mogl_function_glGetInvariantFloatvEXT) wglGetProcAddress("glGetInvariantFloatvEXT");
    glGetLocalConstantBooleanvEXT = (mogl_function_glGetLocalConstantBooleanvEXT) wglGetProcAddress("glGetLocalConstantBooleanvEXT");
    glGetLocalConstantIntegervEXT = (mogl_function_glGetLocalConstantIntegervEXT) wglGetProcAddress("glGetLocalConstantIntegervEXT");
    glGetLocalConstantFloatvEXT = (mogl_function_glGetLocalConstantFloatvEXT) wglGetProcAddress("glGetLocalConstantFloatvEXT");
    glVertexWeightfEXT = (mogl_function_glVertexWeightfEXT) wglGetProcAddress("glVertexWeightfEXT");
    glVertexWeightfvEXT = (mogl_function_glVertexWeightfvEXT) wglGetProcAddress("glVertexWeightfvEXT");
    glVertexWeightPointerEXT = (mogl_function_glVertexWeightPointerEXT) wglGetProcAddress("glVertexWeightPointerEXT");
    glAcquireKeyedMutexWin32EXT = (mogl_function_glAcquireKeyedMutexWin32EXT) wglGetProcAddress("glAcquireKeyedMutexWin32EXT");
    glReleaseKeyedMutexWin32EXT = (mogl_function_glReleaseKeyedMutexWin32EXT) wglGetProcAddress("glReleaseKeyedMutexWin32EXT");
    glWindowRectanglesEXT = (mogl_function_glWindowRectanglesEXT) wglGetProcAddress("glWindowRectanglesEXT");
    glImportSyncEXT = (mogl_function_glImportSyncEXT) wglGetProcAddress("glImportSyncEXT");
    glFrameTerminatorGREMEDY = (mogl_function_glFrameTerminatorGREMEDY) wglGetProcAddress("glFrameTerminatorGREMEDY");
    glStringMarkerGREMEDY = (mogl_function_glStringMarkerGREMEDY) wglGetProcAddress("glStringMarkerGREMEDY");
    glImageTransformParameteriHP = (mogl_function_glImageTransformParameteriHP) wglGetProcAddress("glImageTransformParameteriHP");
    glImageTransformParameterfHP = (mogl_function_glImageTransformParameterfHP) wglGetProcAddress("glImageTransformParameterfHP");
    glImageTransformParameterivHP = (mogl_function_glImageTransformParameterivHP) wglGetProcAddress("glImageTransformParameterivHP");
    glImageTransformParameterfvHP = (mogl_function_glImageTransformParameterfvHP) wglGetProcAddress("glImageTransformParameterfvHP");
    glGetImageTransformParameterivHP = (mogl_function_glGetImageTransformParameterivHP) wglGetProcAddress("glGetImageTransformParameterivHP");
    glGetImageTransformParameterfvHP = (mogl_function_glGetImageTransformParameterfvHP) wglGetProcAddress("glGetImageTransformParameterfvHP");
    glMultiModeDrawArraysIBM = (mogl_function_glMultiModeDrawArraysIBM) wglGetProcAddress("glMultiModeDrawArraysIBM");
    glMultiModeDrawElementsIBM = (mogl_function_glMultiModeDrawElementsIBM) wglGetProcAddress("glMultiModeDrawElementsIBM");
    glFlushStaticDataIBM = (mogl_function_glFlushStaticDataIBM) wglGetProcAddress("glFlushStaticDataIBM");
    glColorPointerListIBM = (mogl_function_glColorPointerListIBM) wglGetProcAddress("glColorPointerListIBM");
    glSecondaryColorPointerListIBM = (mogl_function_glSecondaryColorPointerListIBM) wglGetProcAddress("glSecondaryColorPointerListIBM");
    glEdgeFlagPointerListIBM = (mogl_function_glEdgeFlagPointerListIBM) wglGetProcAddress("glEdgeFlagPointerListIBM");
    glFogCoordPointerListIBM = (mogl_function_glFogCoordPointerListIBM) wglGetProcAddress("glFogCoordPointerListIBM");
    glIndexPointerListIBM = (mogl_function_glIndexPointerListIBM) wglGetProcAddress("glIndexPointerListIBM");
    glNormalPointerListIBM = (mogl_function_glNormalPointerListIBM) wglGetProcAddress("glNormalPointerListIBM");
    glTexCoordPointerListIBM = (mogl_function_glTexCoordPointerListIBM) wglGetProcAddress("glTexCoordPointerListIBM");
    glVertexPointerListIBM = (mogl_function_glVertexPointerListIBM) wglGetProcAddress("glVertexPointerListIBM");
    glBlendFuncSeparateINGR = (mogl_function_glBlendFuncSeparateINGR) wglGetProcAddress("glBlendFuncSeparateINGR");
    glApplyFramebufferAttachmentCMAAINTEL = (mogl_function_glApplyFramebufferAttachmentCMAAINTEL) wglGetProcAddress("glApplyFramebufferAttachmentCMAAINTEL");
    glSyncTextureINTEL = (mogl_function_glSyncTextureINTEL) wglGetProcAddress("glSyncTextureINTEL");
    glUnmapTexture2DINTEL = (mogl_function_glUnmapTexture2DINTEL) wglGetProcAddress("glUnmapTexture2DINTEL");
    glMapTexture2DINTEL = (mogl_function_glMapTexture2DINTEL) wglGetProcAddress("glMapTexture2DINTEL");
    glVertexPointervINTEL = (mogl_function_glVertexPointervINTEL) wglGetProcAddress("glVertexPointervINTEL");
    glNormalPointervINTEL = (mogl_function_glNormalPointervINTEL) wglGetProcAddress("glNormalPointervINTEL");
    glColorPointervINTEL = (mogl_function_glColorPointervINTEL) wglGetProcAddress("glColorPointervINTEL");
    glTexCoordPointervINTEL = (mogl_function_glTexCoordPointervINTEL) wglGetProcAddress("glTexCoordPointervINTEL");
    glBeginPerfQueryINTEL = (mogl_function_glBeginPerfQueryINTEL) wglGetProcAddress("glBeginPerfQueryINTEL");
    glCreatePerfQueryINTEL = (mogl_function_glCreatePerfQueryINTEL) wglGetProcAddress("glCreatePerfQueryINTEL");
    glDeletePerfQueryINTEL = (mogl_function_glDeletePerfQueryINTEL) wglGetProcAddress("glDeletePerfQueryINTEL");
    glEndPerfQueryINTEL = (mogl_function_glEndPerfQueryINTEL) wglGetProcAddress("glEndPerfQueryINTEL");
    glGetFirstPerfQueryIdINTEL = (mogl_function_glGetFirstPerfQueryIdINTEL) wglGetProcAddress("glGetFirstPerfQueryIdINTEL");
    glGetNextPerfQueryIdINTEL = (mogl_function_glGetNextPerfQueryIdINTEL) wglGetProcAddress("glGetNextPerfQueryIdINTEL");
    glGetPerfCounterInfoINTEL = (mogl_function_glGetPerfCounterInfoINTEL) wglGetProcAddress("glGetPerfCounterInfoINTEL");
    glGetPerfQueryDataINTEL = (mogl_function_glGetPerfQueryDataINTEL) wglGetProcAddress("glGetPerfQueryDataINTEL");
    glGetPerfQueryIdByNameINTEL = (mogl_function_glGetPerfQueryIdByNameINTEL) wglGetProcAddress("glGetPerfQueryIdByNameINTEL");
    glGetPerfQueryInfoINTEL = (mogl_function_glGetPerfQueryInfoINTEL) wglGetProcAddress("glGetPerfQueryInfoINTEL");
    glFramebufferParameteriMESA = (mogl_function_glFramebufferParameteriMESA) wglGetProcAddress("glFramebufferParameteriMESA");
    glGetFramebufferParameterivMESA = (mogl_function_glGetFramebufferParameterivMESA) wglGetProcAddress("glGetFramebufferParameterivMESA");
    glResizeBuffersMESA = (mogl_function_glResizeBuffersMESA) wglGetProcAddress("glResizeBuffersMESA");
    glWindowPos2dMESA = (mogl_function_glWindowPos2dMESA) wglGetProcAddress("glWindowPos2dMESA");
    glWindowPos2dvMESA = (mogl_function_glWindowPos2dvMESA) wglGetProcAddress("glWindowPos2dvMESA");
    glWindowPos2fMESA = (mogl_function_glWindowPos2fMESA) wglGetProcAddress("glWindowPos2fMESA");
    glWindowPos2fvMESA = (mogl_function_glWindowPos2fvMESA) wglGetProcAddress("glWindowPos2fvMESA");
    glWindowPos2iMESA = (mogl_function_glWindowPos2iMESA) wglGetProcAddress("glWindowPos2iMESA");
    glWindowPos2ivMESA = (mogl_function_glWindowPos2ivMESA) wglGetProcAddress("glWindowPos2ivMESA");
    glWindowPos2sMESA = (mogl_function_glWindowPos2sMESA) wglGetProcAddress("glWindowPos2sMESA");
    glWindowPos2svMESA = (mogl_function_glWindowPos2svMESA) wglGetProcAddress("glWindowPos2svMESA");
    glWindowPos3dMESA = (mogl_function_glWindowPos3dMESA) wglGetProcAddress("glWindowPos3dMESA");
    glWindowPos3dvMESA = (mogl_function_glWindowPos3dvMESA) wglGetProcAddress("glWindowPos3dvMESA");
    glWindowPos3fMESA = (mogl_function_glWindowPos3fMESA) wglGetProcAddress("glWindowPos3fMESA");
    glWindowPos3fvMESA = (mogl_function_glWindowPos3fvMESA) wglGetProcAddress("glWindowPos3fvMESA");
    glWindowPos3iMESA = (mogl_function_glWindowPos3iMESA) wglGetProcAddress("glWindowPos3iMESA");
    glWindowPos3ivMESA = (mogl_function_glWindowPos3ivMESA) wglGetProcAddress("glWindowPos3ivMESA");
    glWindowPos3sMESA = (mogl_function_glWindowPos3sMESA) wglGetProcAddress("glWindowPos3sMESA");
    glWindowPos3svMESA = (mogl_function_glWindowPos3svMESA) wglGetProcAddress("glWindowPos3svMESA");
    glWindowPos4dMESA = (mogl_function_glWindowPos4dMESA) wglGetProcAddress("glWindowPos4dMESA");
    glWindowPos4dvMESA = (mogl_function_glWindowPos4dvMESA) wglGetProcAddress("glWindowPos4dvMESA");
    glWindowPos4fMESA = (mogl_function_glWindowPos4fMESA) wglGetProcAddress("glWindowPos4fMESA");
    glWindowPos4fvMESA = (mogl_function_glWindowPos4fvMESA) wglGetProcAddress("glWindowPos4fvMESA");
    glWindowPos4iMESA = (mogl_function_glWindowPos4iMESA) wglGetProcAddress("glWindowPos4iMESA");
    glWindowPos4ivMESA = (mogl_function_glWindowPos4ivMESA) wglGetProcAddress("glWindowPos4ivMESA");
    glWindowPos4sMESA = (mogl_function_glWindowPos4sMESA) wglGetProcAddress("glWindowPos4sMESA");
    glWindowPos4svMESA = (mogl_function_glWindowPos4svMESA) wglGetProcAddress("glWindowPos4svMESA");
    glBeginConditionalRenderNVX = (mogl_function_glBeginConditionalRenderNVX) wglGetProcAddress("glBeginConditionalRenderNVX");
    glEndConditionalRenderNVX = (mogl_function_glEndConditionalRenderNVX) wglGetProcAddress("glEndConditionalRenderNVX");
    glUploadGpuMaskNVX = (mogl_function_glUploadGpuMaskNVX) wglGetProcAddress("glUploadGpuMaskNVX");
    glMulticastViewportArrayvNVX = (mogl_function_glMulticastViewportArrayvNVX) wglGetProcAddress("glMulticastViewportArrayvNVX");
    glMulticastViewportPositionWScaleNVX = (mogl_function_glMulticastViewportPositionWScaleNVX) wglGetProcAddress("glMulticastViewportPositionWScaleNVX");
    glMulticastScissorArrayvNVX = (mogl_function_glMulticastScissorArrayvNVX) wglGetProcAddress("glMulticastScissorArrayvNVX");
    glAsyncCopyBufferSubDataNVX = (mogl_function_glAsyncCopyBufferSubDataNVX) wglGetProcAddress("glAsyncCopyBufferSubDataNVX");
    glAsyncCopyImageSubDataNVX = (mogl_function_glAsyncCopyImageSubDataNVX) wglGetProcAddress("glAsyncCopyImageSubDataNVX");
    glLGPUNamedBufferSubDataNVX = (mogl_function_glLGPUNamedBufferSubDataNVX) wglGetProcAddress("glLGPUNamedBufferSubDataNVX");
    glLGPUCopyImageSubDataNVX = (mogl_function_glLGPUCopyImageSubDataNVX) wglGetProcAddress("glLGPUCopyImageSubDataNVX");
    glLGPUInterlockNVX = (mogl_function_glLGPUInterlockNVX) wglGetProcAddress("glLGPUInterlockNVX");
    glCreateProgressFenceNVX = (mogl_function_glCreateProgressFenceNVX) wglGetProcAddress("glCreateProgressFenceNVX");
    glSignalSemaphoreui64NVX = (mogl_function_glSignalSemaphoreui64NVX) wglGetProcAddress("glSignalSemaphoreui64NVX");
    glWaitSemaphoreui64NVX = (mogl_function_glWaitSemaphoreui64NVX) wglGetProcAddress("glWaitSemaphoreui64NVX");
    glClientWaitSemaphoreui64NVX = (mogl_function_glClientWaitSemaphoreui64NVX) wglGetProcAddress("glClientWaitSemaphoreui64NVX");
    glAlphaToCoverageDitherControlNV = (mogl_function_glAlphaToCoverageDitherControlNV) wglGetProcAddress("glAlphaToCoverageDitherControlNV");
    glMultiDrawArraysIndirectBindlessNV = (mogl_function_glMultiDrawArraysIndirectBindlessNV) wglGetProcAddress("glMultiDrawArraysIndirectBindlessNV");
    glMultiDrawElementsIndirectBindlessNV = (mogl_function_glMultiDrawElementsIndirectBindlessNV) wglGetProcAddress("glMultiDrawElementsIndirectBindlessNV");
    glMultiDrawArraysIndirectBindlessCountNV = (mogl_function_glMultiDrawArraysIndirectBindlessCountNV) wglGetProcAddress("glMultiDrawArraysIndirectBindlessCountNV");
    glMultiDrawElementsIndirectBindlessCountNV = (mogl_function_glMultiDrawElementsIndirectBindlessCountNV) wglGetProcAddress("glMultiDrawElementsIndirectBindlessCountNV");
    glGetTextureHandleNV = (mogl_function_glGetTextureHandleNV) wglGetProcAddress("glGetTextureHandleNV");
    glGetTextureSamplerHandleNV = (mogl_function_glGetTextureSamplerHandleNV) wglGetProcAddress("glGetTextureSamplerHandleNV");
    glMakeTextureHandleResidentNV = (mogl_function_glMakeTextureHandleResidentNV) wglGetProcAddress("glMakeTextureHandleResidentNV");
    glMakeTextureHandleNonResidentNV = (mogl_function_glMakeTextureHandleNonResidentNV) wglGetProcAddress("glMakeTextureHandleNonResidentNV");
    glGetImageHandleNV = (mogl_function_glGetImageHandleNV) wglGetProcAddress("glGetImageHandleNV");
    glMakeImageHandleResidentNV = (mogl_function_glMakeImageHandleResidentNV) wglGetProcAddress("glMakeImageHandleResidentNV");
    glMakeImageHandleNonResidentNV = (mogl_function_glMakeImageHandleNonResidentNV) wglGetProcAddress("glMakeImageHandleNonResidentNV");
    glUniformHandleui64NV = (mogl_function_glUniformHandleui64NV) wglGetProcAddress("glUniformHandleui64NV");
    glUniformHandleui64vNV = (mogl_function_glUniformHandleui64vNV) wglGetProcAddress("glUniformHandleui64vNV");
    glProgramUniformHandleui64NV = (mogl_function_glProgramUniformHandleui64NV) wglGetProcAddress("glProgramUniformHandleui64NV");
    glProgramUniformHandleui64vNV = (mogl_function_glProgramUniformHandleui64vNV) wglGetProcAddress("glProgramUniformHandleui64vNV");
    glIsTextureHandleResidentNV = (mogl_function_glIsTextureHandleResidentNV) wglGetProcAddress("glIsTextureHandleResidentNV");
    glIsImageHandleResidentNV = (mogl_function_glIsImageHandleResidentNV) wglGetProcAddress("glIsImageHandleResidentNV");
    glBlendParameteriNV = (mogl_function_glBlendParameteriNV) wglGetProcAddress("glBlendParameteriNV");
    glBlendBarrierNV = (mogl_function_glBlendBarrierNV) wglGetProcAddress("glBlendBarrierNV");
    glViewportPositionWScaleNV = (mogl_function_glViewportPositionWScaleNV) wglGetProcAddress("glViewportPositionWScaleNV");
    glCreateStatesNV = (mogl_function_glCreateStatesNV) wglGetProcAddress("glCreateStatesNV");
    glDeleteStatesNV = (mogl_function_glDeleteStatesNV) wglGetProcAddress("glDeleteStatesNV");
    glIsStateNV = (mogl_function_glIsStateNV) wglGetProcAddress("glIsStateNV");
    glStateCaptureNV = (mogl_function_glStateCaptureNV) wglGetProcAddress("glStateCaptureNV");
    glGetCommandHeaderNV = (mogl_function_glGetCommandHeaderNV) wglGetProcAddress("glGetCommandHeaderNV");
    glGetStageIndexNV = (mogl_function_glGetStageIndexNV) wglGetProcAddress("glGetStageIndexNV");
    glDrawCommandsNV = (mogl_function_glDrawCommandsNV) wglGetProcAddress("glDrawCommandsNV");
    glDrawCommandsAddressNV = (mogl_function_glDrawCommandsAddressNV) wglGetProcAddress("glDrawCommandsAddressNV");
    glDrawCommandsStatesNV = (mogl_function_glDrawCommandsStatesNV) wglGetProcAddress("glDrawCommandsStatesNV");
    glDrawCommandsStatesAddressNV = (mogl_function_glDrawCommandsStatesAddressNV) wglGetProcAddress("glDrawCommandsStatesAddressNV");
    glCreateCommandListsNV = (mogl_function_glCreateCommandListsNV) wglGetProcAddress("glCreateCommandListsNV");
    glDeleteCommandListsNV = (mogl_function_glDeleteCommandListsNV) wglGetProcAddress("glDeleteCommandListsNV");
    glIsCommandListNV = (mogl_function_glIsCommandListNV) wglGetProcAddress("glIsCommandListNV");
    glListDrawCommandsStatesClientNV = (mogl_function_glListDrawCommandsStatesClientNV) wglGetProcAddress("glListDrawCommandsStatesClientNV");
    glCommandListSegmentsNV = (mogl_function_glCommandListSegmentsNV) wglGetProcAddress("glCommandListSegmentsNV");
    glCompileCommandListNV = (mogl_function_glCompileCommandListNV) wglGetProcAddress("glCompileCommandListNV");
    glCallCommandListNV = (mogl_function_glCallCommandListNV) wglGetProcAddress("glCallCommandListNV");
    glBeginConditionalRenderNV = (mogl_function_glBeginConditionalRenderNV) wglGetProcAddress("glBeginConditionalRenderNV");
    glEndConditionalRenderNV = (mogl_function_glEndConditionalRenderNV) wglGetProcAddress("glEndConditionalRenderNV");
    glSubpixelPrecisionBiasNV = (mogl_function_glSubpixelPrecisionBiasNV) wglGetProcAddress("glSubpixelPrecisionBiasNV");
    glConservativeRasterParameterfNV = (mogl_function_glConservativeRasterParameterfNV) wglGetProcAddress("glConservativeRasterParameterfNV");
    glConservativeRasterParameteriNV = (mogl_function_glConservativeRasterParameteriNV) wglGetProcAddress("glConservativeRasterParameteriNV");
    glCopyImageSubDataNV = (mogl_function_glCopyImageSubDataNV) wglGetProcAddress("glCopyImageSubDataNV");
    glDepthRangedNV = (mogl_function_glDepthRangedNV) wglGetProcAddress("glDepthRangedNV");
    glClearDepthdNV = (mogl_function_glClearDepthdNV) wglGetProcAddress("glClearDepthdNV");
    glDepthBoundsdNV = (mogl_function_glDepthBoundsdNV) wglGetProcAddress("glDepthBoundsdNV");
    glDrawTextureNV = (mogl_function_glDrawTextureNV) wglGetProcAddress("glDrawTextureNV");
    glDrawVkImageNV = (mogl_function_glDrawVkImageNV) wglGetProcAddress("glDrawVkImageNV");
    glGetVkProcAddrNV = (mogl_function_glGetVkProcAddrNV) wglGetProcAddress("glGetVkProcAddrNV");
    glWaitVkSemaphoreNV = (mogl_function_glWaitVkSemaphoreNV) wglGetProcAddress("glWaitVkSemaphoreNV");
    glSignalVkSemaphoreNV = (mogl_function_glSignalVkSemaphoreNV) wglGetProcAddress("glSignalVkSemaphoreNV");
    glSignalVkFenceNV = (mogl_function_glSignalVkFenceNV) wglGetProcAddress("glSignalVkFenceNV");
    glMapControlPointsNV = (mogl_function_glMapControlPointsNV) wglGetProcAddress("glMapControlPointsNV");
    glMapParameterivNV = (mogl_function_glMapParameterivNV) wglGetProcAddress("glMapParameterivNV");
    glMapParameterfvNV = (mogl_function_glMapParameterfvNV) wglGetProcAddress("glMapParameterfvNV");
    glGetMapControlPointsNV = (mogl_function_glGetMapControlPointsNV) wglGetProcAddress("glGetMapControlPointsNV");
    glGetMapParameterivNV = (mogl_function_glGetMapParameterivNV) wglGetProcAddress("glGetMapParameterivNV");
    glGetMapParameterfvNV = (mogl_function_glGetMapParameterfvNV) wglGetProcAddress("glGetMapParameterfvNV");
    glGetMapAttribParameterivNV = (mogl_function_glGetMapAttribParameterivNV) wglGetProcAddress("glGetMapAttribParameterivNV");
    glGetMapAttribParameterfvNV = (mogl_function_glGetMapAttribParameterfvNV) wglGetProcAddress("glGetMapAttribParameterfvNV");
    glEvalMapsNV = (mogl_function_glEvalMapsNV) wglGetProcAddress("glEvalMapsNV");
    glGetMultisamplefvNV = (mogl_function_glGetMultisamplefvNV) wglGetProcAddress("glGetMultisamplefvNV");
    glSampleMaskIndexedNV = (mogl_function_glSampleMaskIndexedNV) wglGetProcAddress("glSampleMaskIndexedNV");
    glTexRenderbufferNV = (mogl_function_glTexRenderbufferNV) wglGetProcAddress("glTexRenderbufferNV");
    glDeleteFencesNV = (mogl_function_glDeleteFencesNV) wglGetProcAddress("glDeleteFencesNV");
    glGenFencesNV = (mogl_function_glGenFencesNV) wglGetProcAddress("glGenFencesNV");
    glIsFenceNV = (mogl_function_glIsFenceNV) wglGetProcAddress("glIsFenceNV");
    glTestFenceNV = (mogl_function_glTestFenceNV) wglGetProcAddress("glTestFenceNV");
    glGetFenceivNV = (mogl_function_glGetFenceivNV) wglGetProcAddress("glGetFenceivNV");
    glFinishFenceNV = (mogl_function_glFinishFenceNV) wglGetProcAddress("glFinishFenceNV");
    glSetFenceNV = (mogl_function_glSetFenceNV) wglGetProcAddress("glSetFenceNV");
    glFragmentCoverageColorNV = (mogl_function_glFragmentCoverageColorNV) wglGetProcAddress("glFragmentCoverageColorNV");
    glProgramNamedParameter4fNV = (mogl_function_glProgramNamedParameter4fNV) wglGetProcAddress("glProgramNamedParameter4fNV");
    glProgramNamedParameter4fvNV = (mogl_function_glProgramNamedParameter4fvNV) wglGetProcAddress("glProgramNamedParameter4fvNV");
    glProgramNamedParameter4dNV = (mogl_function_glProgramNamedParameter4dNV) wglGetProcAddress("glProgramNamedParameter4dNV");
    glProgramNamedParameter4dvNV = (mogl_function_glProgramNamedParameter4dvNV) wglGetProcAddress("glProgramNamedParameter4dvNV");
    glGetProgramNamedParameterfvNV = (mogl_function_glGetProgramNamedParameterfvNV) wglGetProcAddress("glGetProgramNamedParameterfvNV");
    glGetProgramNamedParameterdvNV = (mogl_function_glGetProgramNamedParameterdvNV) wglGetProcAddress("glGetProgramNamedParameterdvNV");
    glCoverageModulationTableNV = (mogl_function_glCoverageModulationTableNV) wglGetProcAddress("glCoverageModulationTableNV");
    glGetCoverageModulationTableNV = (mogl_function_glGetCoverageModulationTableNV) wglGetProcAddress("glGetCoverageModulationTableNV");
    glCoverageModulationNV = (mogl_function_glCoverageModulationNV) wglGetProcAddress("glCoverageModulationNV");
    glRenderbufferStorageMultisampleCoverageNV = (mogl_function_glRenderbufferStorageMultisampleCoverageNV) wglGetProcAddress("glRenderbufferStorageMultisampleCoverageNV");
    glProgramVertexLimitNV = (mogl_function_glProgramVertexLimitNV) wglGetProcAddress("glProgramVertexLimitNV");
    glFramebufferTextureEXT = (mogl_function_glFramebufferTextureEXT) wglGetProcAddress("glFramebufferTextureEXT");
    glFramebufferTextureFaceEXT = (mogl_function_glFramebufferTextureFaceEXT) wglGetProcAddress("glFramebufferTextureFaceEXT");
    glRenderGpuMaskNV = (mogl_function_glRenderGpuMaskNV) wglGetProcAddress("glRenderGpuMaskNV");
    glMulticastBufferSubDataNV = (mogl_function_glMulticastBufferSubDataNV) wglGetProcAddress("glMulticastBufferSubDataNV");
    glMulticastCopyBufferSubDataNV = (mogl_function_glMulticastCopyBufferSubDataNV) wglGetProcAddress("glMulticastCopyBufferSubDataNV");
    glMulticastCopyImageSubDataNV = (mogl_function_glMulticastCopyImageSubDataNV) wglGetProcAddress("glMulticastCopyImageSubDataNV");
    glMulticastBlitFramebufferNV = (mogl_function_glMulticastBlitFramebufferNV) wglGetProcAddress("glMulticastBlitFramebufferNV");
    glMulticastFramebufferSampleLocationsfvNV = (mogl_function_glMulticastFramebufferSampleLocationsfvNV) wglGetProcAddress("glMulticastFramebufferSampleLocationsfvNV");
    glMulticastBarrierNV = (mogl_function_glMulticastBarrierNV) wglGetProcAddress("glMulticastBarrierNV");
    glMulticastWaitSyncNV = (mogl_function_glMulticastWaitSyncNV) wglGetProcAddress("glMulticastWaitSyncNV");
    glMulticastGetQueryObjectivNV = (mogl_function_glMulticastGetQueryObjectivNV) wglGetProcAddress("glMulticastGetQueryObjectivNV");
    glMulticastGetQueryObjectuivNV = (mogl_function_glMulticastGetQueryObjectuivNV) wglGetProcAddress("glMulticastGetQueryObjectuivNV");
    glMulticastGetQueryObjecti64vNV = (mogl_function_glMulticastGetQueryObjecti64vNV) wglGetProcAddress("glMulticastGetQueryObjecti64vNV");
    glMulticastGetQueryObjectui64vNV = (mogl_function_glMulticastGetQueryObjectui64vNV) wglGetProcAddress("glMulticastGetQueryObjectui64vNV");
    glProgramLocalParameterI4iNV = (mogl_function_glProgramLocalParameterI4iNV) wglGetProcAddress("glProgramLocalParameterI4iNV");
    glProgramLocalParameterI4ivNV = (mogl_function_glProgramLocalParameterI4ivNV) wglGetProcAddress("glProgramLocalParameterI4ivNV");
    glProgramLocalParametersI4ivNV = (mogl_function_glProgramLocalParametersI4ivNV) wglGetProcAddress("glProgramLocalParametersI4ivNV");
    glProgramLocalParameterI4uiNV = (mogl_function_glProgramLocalParameterI4uiNV) wglGetProcAddress("glProgramLocalParameterI4uiNV");
    glProgramLocalParameterI4uivNV = (mogl_function_glProgramLocalParameterI4uivNV) wglGetProcAddress("glProgramLocalParameterI4uivNV");
    glProgramLocalParametersI4uivNV = (mogl_function_glProgramLocalParametersI4uivNV) wglGetProcAddress("glProgramLocalParametersI4uivNV");
    glProgramEnvParameterI4iNV = (mogl_function_glProgramEnvParameterI4iNV) wglGetProcAddress("glProgramEnvParameterI4iNV");
    glProgramEnvParameterI4ivNV = (mogl_function_glProgramEnvParameterI4ivNV) wglGetProcAddress("glProgramEnvParameterI4ivNV");
    glProgramEnvParametersI4ivNV = (mogl_function_glProgramEnvParametersI4ivNV) wglGetProcAddress("glProgramEnvParametersI4ivNV");
    glProgramEnvParameterI4uiNV = (mogl_function_glProgramEnvParameterI4uiNV) wglGetProcAddress("glProgramEnvParameterI4uiNV");
    glProgramEnvParameterI4uivNV = (mogl_function_glProgramEnvParameterI4uivNV) wglGetProcAddress("glProgramEnvParameterI4uivNV");
    glProgramEnvParametersI4uivNV = (mogl_function_glProgramEnvParametersI4uivNV) wglGetProcAddress("glProgramEnvParametersI4uivNV");
    glGetProgramLocalParameterIivNV = (mogl_function_glGetProgramLocalParameterIivNV) wglGetProcAddress("glGetProgramLocalParameterIivNV");
    glGetProgramLocalParameterIuivNV = (mogl_function_glGetProgramLocalParameterIuivNV) wglGetProcAddress("glGetProgramLocalParameterIuivNV");
    glGetProgramEnvParameterIivNV = (mogl_function_glGetProgramEnvParameterIivNV) wglGetProcAddress("glGetProgramEnvParameterIivNV");
    glGetProgramEnvParameterIuivNV = (mogl_function_glGetProgramEnvParameterIuivNV) wglGetProcAddress("glGetProgramEnvParameterIuivNV");
    glProgramSubroutineParametersuivNV = (mogl_function_glProgramSubroutineParametersuivNV) wglGetProcAddress("glProgramSubroutineParametersuivNV");
    glGetProgramSubroutineParameteruivNV = (mogl_function_glGetProgramSubroutineParameteruivNV) wglGetProcAddress("glGetProgramSubroutineParameteruivNV");
    glVertex2hNV = (mogl_function_glVertex2hNV) wglGetProcAddress("glVertex2hNV");
    glVertex2hvNV = (mogl_function_glVertex2hvNV) wglGetProcAddress("glVertex2hvNV");
    glVertex3hNV = (mogl_function_glVertex3hNV) wglGetProcAddress("glVertex3hNV");
    glVertex3hvNV = (mogl_function_glVertex3hvNV) wglGetProcAddress("glVertex3hvNV");
    glVertex4hNV = (mogl_function_glVertex4hNV) wglGetProcAddress("glVertex4hNV");
    glVertex4hvNV = (mogl_function_glVertex4hvNV) wglGetProcAddress("glVertex4hvNV");
    glNormal3hNV = (mogl_function_glNormal3hNV) wglGetProcAddress("glNormal3hNV");
    glNormal3hvNV = (mogl_function_glNormal3hvNV) wglGetProcAddress("glNormal3hvNV");
    glColor3hNV = (mogl_function_glColor3hNV) wglGetProcAddress("glColor3hNV");
    glColor3hvNV = (mogl_function_glColor3hvNV) wglGetProcAddress("glColor3hvNV");
    glColor4hNV = (mogl_function_glColor4hNV) wglGetProcAddress("glColor4hNV");
    glColor4hvNV = (mogl_function_glColor4hvNV) wglGetProcAddress("glColor4hvNV");
    glTexCoord1hNV = (mogl_function_glTexCoord1hNV) wglGetProcAddress("glTexCoord1hNV");
    glTexCoord1hvNV = (mogl_function_glTexCoord1hvNV) wglGetProcAddress("glTexCoord1hvNV");
    glTexCoord2hNV = (mogl_function_glTexCoord2hNV) wglGetProcAddress("glTexCoord2hNV");
    glTexCoord2hvNV = (mogl_function_glTexCoord2hvNV) wglGetProcAddress("glTexCoord2hvNV");
    glTexCoord3hNV = (mogl_function_glTexCoord3hNV) wglGetProcAddress("glTexCoord3hNV");
    glTexCoord3hvNV = (mogl_function_glTexCoord3hvNV) wglGetProcAddress("glTexCoord3hvNV");
    glTexCoord4hNV = (mogl_function_glTexCoord4hNV) wglGetProcAddress("glTexCoord4hNV");
    glTexCoord4hvNV = (mogl_function_glTexCoord4hvNV) wglGetProcAddress("glTexCoord4hvNV");
    glMultiTexCoord1hNV = (mogl_function_glMultiTexCoord1hNV) wglGetProcAddress("glMultiTexCoord1hNV");
    glMultiTexCoord1hvNV = (mogl_function_glMultiTexCoord1hvNV) wglGetProcAddress("glMultiTexCoord1hvNV");
    glMultiTexCoord2hNV = (mogl_function_glMultiTexCoord2hNV) wglGetProcAddress("glMultiTexCoord2hNV");
    glMultiTexCoord2hvNV = (mogl_function_glMultiTexCoord2hvNV) wglGetProcAddress("glMultiTexCoord2hvNV");
    glMultiTexCoord3hNV = (mogl_function_glMultiTexCoord3hNV) wglGetProcAddress("glMultiTexCoord3hNV");
    glMultiTexCoord3hvNV = (mogl_function_glMultiTexCoord3hvNV) wglGetProcAddress("glMultiTexCoord3hvNV");
    glMultiTexCoord4hNV = (mogl_function_glMultiTexCoord4hNV) wglGetProcAddress("glMultiTexCoord4hNV");
    glMultiTexCoord4hvNV = (mogl_function_glMultiTexCoord4hvNV) wglGetProcAddress("glMultiTexCoord4hvNV");
    glVertexAttrib1hNV = (mogl_function_glVertexAttrib1hNV) wglGetProcAddress("glVertexAttrib1hNV");
    glVertexAttrib1hvNV = (mogl_function_glVertexAttrib1hvNV) wglGetProcAddress("glVertexAttrib1hvNV");
    glVertexAttrib2hNV = (mogl_function_glVertexAttrib2hNV) wglGetProcAddress("glVertexAttrib2hNV");
    glVertexAttrib2hvNV = (mogl_function_glVertexAttrib2hvNV) wglGetProcAddress("glVertexAttrib2hvNV");
    glVertexAttrib3hNV = (mogl_function_glVertexAttrib3hNV) wglGetProcAddress("glVertexAttrib3hNV");
    glVertexAttrib3hvNV = (mogl_function_glVertexAttrib3hvNV) wglGetProcAddress("glVertexAttrib3hvNV");
    glVertexAttrib4hNV = (mogl_function_glVertexAttrib4hNV) wglGetProcAddress("glVertexAttrib4hNV");
    glVertexAttrib4hvNV = (mogl_function_glVertexAttrib4hvNV) wglGetProcAddress("glVertexAttrib4hvNV");
    glVertexAttribs1hvNV = (mogl_function_glVertexAttribs1hvNV) wglGetProcAddress("glVertexAttribs1hvNV");
    glVertexAttribs2hvNV = (mogl_function_glVertexAttribs2hvNV) wglGetProcAddress("glVertexAttribs2hvNV");
    glVertexAttribs3hvNV = (mogl_function_glVertexAttribs3hvNV) wglGetProcAddress("glVertexAttribs3hvNV");
    glVertexAttribs4hvNV = (mogl_function_glVertexAttribs4hvNV) wglGetProcAddress("glVertexAttribs4hvNV");
    glFogCoordhNV = (mogl_function_glFogCoordhNV) wglGetProcAddress("glFogCoordhNV");
    glFogCoordhvNV = (mogl_function_glFogCoordhvNV) wglGetProcAddress("glFogCoordhvNV");
    glSecondaryColor3hNV = (mogl_function_glSecondaryColor3hNV) wglGetProcAddress("glSecondaryColor3hNV");
    glSecondaryColor3hvNV = (mogl_function_glSecondaryColor3hvNV) wglGetProcAddress("glSecondaryColor3hvNV");
    glVertexWeighthNV = (mogl_function_glVertexWeighthNV) wglGetProcAddress("glVertexWeighthNV");
    glVertexWeighthvNV = (mogl_function_glVertexWeighthvNV) wglGetProcAddress("glVertexWeighthvNV");
    glGetInternalformatSampleivNV = (mogl_function_glGetInternalformatSampleivNV) wglGetProcAddress("glGetInternalformatSampleivNV");
    glGetMemoryObjectDetachedResourcesuivNV = (mogl_function_glGetMemoryObjectDetachedResourcesuivNV) wglGetProcAddress("glGetMemoryObjectDetachedResourcesuivNV");
    glResetMemoryObjectParameterNV = (mogl_function_glResetMemoryObjectParameterNV) wglGetProcAddress("glResetMemoryObjectParameterNV");
    glTexAttachMemoryNV = (mogl_function_glTexAttachMemoryNV) wglGetProcAddress("glTexAttachMemoryNV");
    glBufferAttachMemoryNV = (mogl_function_glBufferAttachMemoryNV) wglGetProcAddress("glBufferAttachMemoryNV");
    glTextureAttachMemoryNV = (mogl_function_glTextureAttachMemoryNV) wglGetProcAddress("glTextureAttachMemoryNV");
    glNamedBufferAttachMemoryNV = (mogl_function_glNamedBufferAttachMemoryNV) wglGetProcAddress("glNamedBufferAttachMemoryNV");
    glBufferPageCommitmentMemNV = (mogl_function_glBufferPageCommitmentMemNV) wglGetProcAddress("glBufferPageCommitmentMemNV");
    glTexPageCommitmentMemNV = (mogl_function_glTexPageCommitmentMemNV) wglGetProcAddress("glTexPageCommitmentMemNV");
    glNamedBufferPageCommitmentMemNV = (mogl_function_glNamedBufferPageCommitmentMemNV) wglGetProcAddress("glNamedBufferPageCommitmentMemNV");
    glTexturePageCommitmentMemNV = (mogl_function_glTexturePageCommitmentMemNV) wglGetProcAddress("glTexturePageCommitmentMemNV");
    glDrawMeshTasksNV = (mogl_function_glDrawMeshTasksNV) wglGetProcAddress("glDrawMeshTasksNV");
    glDrawMeshTasksIndirectNV = (mogl_function_glDrawMeshTasksIndirectNV) wglGetProcAddress("glDrawMeshTasksIndirectNV");
    glMultiDrawMeshTasksIndirectNV = (mogl_function_glMultiDrawMeshTasksIndirectNV) wglGetProcAddress("glMultiDrawMeshTasksIndirectNV");
    glMultiDrawMeshTasksIndirectCountNV = (mogl_function_glMultiDrawMeshTasksIndirectCountNV) wglGetProcAddress("glMultiDrawMeshTasksIndirectCountNV");
    glGenOcclusionQueriesNV = (mogl_function_glGenOcclusionQueriesNV) wglGetProcAddress("glGenOcclusionQueriesNV");
    glDeleteOcclusionQueriesNV = (mogl_function_glDeleteOcclusionQueriesNV) wglGetProcAddress("glDeleteOcclusionQueriesNV");
    glIsOcclusionQueryNV = (mogl_function_glIsOcclusionQueryNV) wglGetProcAddress("glIsOcclusionQueryNV");
    glBeginOcclusionQueryNV = (mogl_function_glBeginOcclusionQueryNV) wglGetProcAddress("glBeginOcclusionQueryNV");
    glEndOcclusionQueryNV = (mogl_function_glEndOcclusionQueryNV) wglGetProcAddress("glEndOcclusionQueryNV");
    glGetOcclusionQueryivNV = (mogl_function_glGetOcclusionQueryivNV) wglGetProcAddress("glGetOcclusionQueryivNV");
    glGetOcclusionQueryuivNV = (mogl_function_glGetOcclusionQueryuivNV) wglGetProcAddress("glGetOcclusionQueryuivNV");
    glProgramBufferParametersfvNV = (mogl_function_glProgramBufferParametersfvNV) wglGetProcAddress("glProgramBufferParametersfvNV");
    glProgramBufferParametersIivNV = (mogl_function_glProgramBufferParametersIivNV) wglGetProcAddress("glProgramBufferParametersIivNV");
    glProgramBufferParametersIuivNV = (mogl_function_glProgramBufferParametersIuivNV) wglGetProcAddress("glProgramBufferParametersIuivNV");
    glGenPathsNV = (mogl_function_glGenPathsNV) wglGetProcAddress("glGenPathsNV");
    glDeletePathsNV = (mogl_function_glDeletePathsNV) wglGetProcAddress("glDeletePathsNV");
    glIsPathNV = (mogl_function_glIsPathNV) wglGetProcAddress("glIsPathNV");
    glPathCommandsNV = (mogl_function_glPathCommandsNV) wglGetProcAddress("glPathCommandsNV");
    glPathCoordsNV = (mogl_function_glPathCoordsNV) wglGetProcAddress("glPathCoordsNV");
    glPathSubCommandsNV = (mogl_function_glPathSubCommandsNV) wglGetProcAddress("glPathSubCommandsNV");
    glPathSubCoordsNV = (mogl_function_glPathSubCoordsNV) wglGetProcAddress("glPathSubCoordsNV");
    glPathStringNV = (mogl_function_glPathStringNV) wglGetProcAddress("glPathStringNV");
    glPathGlyphsNV = (mogl_function_glPathGlyphsNV) wglGetProcAddress("glPathGlyphsNV");
    glPathGlyphRangeNV = (mogl_function_glPathGlyphRangeNV) wglGetProcAddress("glPathGlyphRangeNV");
    glWeightPathsNV = (mogl_function_glWeightPathsNV) wglGetProcAddress("glWeightPathsNV");
    glCopyPathNV = (mogl_function_glCopyPathNV) wglGetProcAddress("glCopyPathNV");
    glInterpolatePathsNV = (mogl_function_glInterpolatePathsNV) wglGetProcAddress("glInterpolatePathsNV");
    glTransformPathNV = (mogl_function_glTransformPathNV) wglGetProcAddress("glTransformPathNV");
    glPathParameterivNV = (mogl_function_glPathParameterivNV) wglGetProcAddress("glPathParameterivNV");
    glPathParameteriNV = (mogl_function_glPathParameteriNV) wglGetProcAddress("glPathParameteriNV");
    glPathParameterfvNV = (mogl_function_glPathParameterfvNV) wglGetProcAddress("glPathParameterfvNV");
    glPathParameterfNV = (mogl_function_glPathParameterfNV) wglGetProcAddress("glPathParameterfNV");
    glPathDashArrayNV = (mogl_function_glPathDashArrayNV) wglGetProcAddress("glPathDashArrayNV");
    glPathStencilFuncNV = (mogl_function_glPathStencilFuncNV) wglGetProcAddress("glPathStencilFuncNV");
    glPathStencilDepthOffsetNV = (mogl_function_glPathStencilDepthOffsetNV) wglGetProcAddress("glPathStencilDepthOffsetNV");
    glStencilFillPathNV = (mogl_function_glStencilFillPathNV) wglGetProcAddress("glStencilFillPathNV");
    glStencilStrokePathNV = (mogl_function_glStencilStrokePathNV) wglGetProcAddress("glStencilStrokePathNV");
    glStencilFillPathInstancedNV = (mogl_function_glStencilFillPathInstancedNV) wglGetProcAddress("glStencilFillPathInstancedNV");
    glStencilStrokePathInstancedNV = (mogl_function_glStencilStrokePathInstancedNV) wglGetProcAddress("glStencilStrokePathInstancedNV");
    glPathCoverDepthFuncNV = (mogl_function_glPathCoverDepthFuncNV) wglGetProcAddress("glPathCoverDepthFuncNV");
    glCoverFillPathNV = (mogl_function_glCoverFillPathNV) wglGetProcAddress("glCoverFillPathNV");
    glCoverStrokePathNV = (mogl_function_glCoverStrokePathNV) wglGetProcAddress("glCoverStrokePathNV");
    glCoverFillPathInstancedNV = (mogl_function_glCoverFillPathInstancedNV) wglGetProcAddress("glCoverFillPathInstancedNV");
    glCoverStrokePathInstancedNV = (mogl_function_glCoverStrokePathInstancedNV) wglGetProcAddress("glCoverStrokePathInstancedNV");
    glGetPathParameterivNV = (mogl_function_glGetPathParameterivNV) wglGetProcAddress("glGetPathParameterivNV");
    glGetPathParameterfvNV = (mogl_function_glGetPathParameterfvNV) wglGetProcAddress("glGetPathParameterfvNV");
    glGetPathCommandsNV = (mogl_function_glGetPathCommandsNV) wglGetProcAddress("glGetPathCommandsNV");
    glGetPathCoordsNV = (mogl_function_glGetPathCoordsNV) wglGetProcAddress("glGetPathCoordsNV");
    glGetPathDashArrayNV = (mogl_function_glGetPathDashArrayNV) wglGetProcAddress("glGetPathDashArrayNV");
    glGetPathMetricsNV = (mogl_function_glGetPathMetricsNV) wglGetProcAddress("glGetPathMetricsNV");
    glGetPathMetricRangeNV = (mogl_function_glGetPathMetricRangeNV) wglGetProcAddress("glGetPathMetricRangeNV");
    glGetPathSpacingNV = (mogl_function_glGetPathSpacingNV) wglGetProcAddress("glGetPathSpacingNV");
    glIsPointInFillPathNV = (mogl_function_glIsPointInFillPathNV) wglGetProcAddress("glIsPointInFillPathNV");
    glIsPointInStrokePathNV = (mogl_function_glIsPointInStrokePathNV) wglGetProcAddress("glIsPointInStrokePathNV");
    glGetPathLengthNV = (mogl_function_glGetPathLengthNV) wglGetProcAddress("glGetPathLengthNV");
    glPointAlongPathNV = (mogl_function_glPointAlongPathNV) wglGetProcAddress("glPointAlongPathNV");
    glMatrixLoad3x2fNV = (mogl_function_glMatrixLoad3x2fNV) wglGetProcAddress("glMatrixLoad3x2fNV");
    glMatrixLoad3x3fNV = (mogl_function_glMatrixLoad3x3fNV) wglGetProcAddress("glMatrixLoad3x3fNV");
    glMatrixLoadTranspose3x3fNV = (mogl_function_glMatrixLoadTranspose3x3fNV) wglGetProcAddress("glMatrixLoadTranspose3x3fNV");
    glMatrixMult3x2fNV = (mogl_function_glMatrixMult3x2fNV) wglGetProcAddress("glMatrixMult3x2fNV");
    glMatrixMult3x3fNV = (mogl_function_glMatrixMult3x3fNV) wglGetProcAddress("glMatrixMult3x3fNV");
    glMatrixMultTranspose3x3fNV = (mogl_function_glMatrixMultTranspose3x3fNV) wglGetProcAddress("glMatrixMultTranspose3x3fNV");
    glStencilThenCoverFillPathNV = (mogl_function_glStencilThenCoverFillPathNV) wglGetProcAddress("glStencilThenCoverFillPathNV");
    glStencilThenCoverStrokePathNV = (mogl_function_glStencilThenCoverStrokePathNV) wglGetProcAddress("glStencilThenCoverStrokePathNV");
    glStencilThenCoverFillPathInstancedNV = (mogl_function_glStencilThenCoverFillPathInstancedNV) wglGetProcAddress("glStencilThenCoverFillPathInstancedNV");
    glStencilThenCoverStrokePathInstancedNV = (mogl_function_glStencilThenCoverStrokePathInstancedNV) wglGetProcAddress("glStencilThenCoverStrokePathInstancedNV");
    glPathGlyphIndexRangeNV = (mogl_function_glPathGlyphIndexRangeNV) wglGetProcAddress("glPathGlyphIndexRangeNV");
    glPathGlyphIndexArrayNV = (mogl_function_glPathGlyphIndexArrayNV) wglGetProcAddress("glPathGlyphIndexArrayNV");
    glPathMemoryGlyphIndexArrayNV = (mogl_function_glPathMemoryGlyphIndexArrayNV) wglGetProcAddress("glPathMemoryGlyphIndexArrayNV");
    glProgramPathFragmentInputGenNV = (mogl_function_glProgramPathFragmentInputGenNV) wglGetProcAddress("glProgramPathFragmentInputGenNV");
    glGetProgramResourcefvNV = (mogl_function_glGetProgramResourcefvNV) wglGetProcAddress("glGetProgramResourcefvNV");
    glPathColorGenNV = (mogl_function_glPathColorGenNV) wglGetProcAddress("glPathColorGenNV");
    glPathTexGenNV = (mogl_function_glPathTexGenNV) wglGetProcAddress("glPathTexGenNV");
    glPathFogGenNV = (mogl_function_glPathFogGenNV) wglGetProcAddress("glPathFogGenNV");
    glGetPathColorGenivNV = (mogl_function_glGetPathColorGenivNV) wglGetProcAddress("glGetPathColorGenivNV");
    glGetPathColorGenfvNV = (mogl_function_glGetPathColorGenfvNV) wglGetProcAddress("glGetPathColorGenfvNV");
    glGetPathTexGenivNV = (mogl_function_glGetPathTexGenivNV) wglGetProcAddress("glGetPathTexGenivNV");
    glGetPathTexGenfvNV = (mogl_function_glGetPathTexGenfvNV) wglGetProcAddress("glGetPathTexGenfvNV");
    glPixelDataRangeNV = (mogl_function_glPixelDataRangeNV) wglGetProcAddress("glPixelDataRangeNV");
    glFlushPixelDataRangeNV = (mogl_function_glFlushPixelDataRangeNV) wglGetProcAddress("glFlushPixelDataRangeNV");
    glPointParameteriNV = (mogl_function_glPointParameteriNV) wglGetProcAddress("glPointParameteriNV");
    glPointParameterivNV = (mogl_function_glPointParameterivNV) wglGetProcAddress("glPointParameterivNV");
    glPresentFrameKeyedNV = (mogl_function_glPresentFrameKeyedNV) wglGetProcAddress("glPresentFrameKeyedNV");
    glPresentFrameDualFillNV = (mogl_function_glPresentFrameDualFillNV) wglGetProcAddress("glPresentFrameDualFillNV");
    glGetVideoivNV = (mogl_function_glGetVideoivNV) wglGetProcAddress("glGetVideoivNV");
    glGetVideouivNV = (mogl_function_glGetVideouivNV) wglGetProcAddress("glGetVideouivNV");
    glGetVideoi64vNV = (mogl_function_glGetVideoi64vNV) wglGetProcAddress("glGetVideoi64vNV");
    glGetVideoui64vNV = (mogl_function_glGetVideoui64vNV) wglGetProcAddress("glGetVideoui64vNV");
    glPrimitiveRestartNV = (mogl_function_glPrimitiveRestartNV) wglGetProcAddress("glPrimitiveRestartNV");
    glPrimitiveRestartIndexNV = (mogl_function_glPrimitiveRestartIndexNV) wglGetProcAddress("glPrimitiveRestartIndexNV");
    glQueryResourceNV = (mogl_function_glQueryResourceNV) wglGetProcAddress("glQueryResourceNV");
    glGenQueryResourceTagNV = (mogl_function_glGenQueryResourceTagNV) wglGetProcAddress("glGenQueryResourceTagNV");
    glDeleteQueryResourceTagNV = (mogl_function_glDeleteQueryResourceTagNV) wglGetProcAddress("glDeleteQueryResourceTagNV");
    glQueryResourceTagNV = (mogl_function_glQueryResourceTagNV) wglGetProcAddress("glQueryResourceTagNV");
    glCombinerParameterfvNV = (mogl_function_glCombinerParameterfvNV) wglGetProcAddress("glCombinerParameterfvNV");
    glCombinerParameterfNV = (mogl_function_glCombinerParameterfNV) wglGetProcAddress("glCombinerParameterfNV");
    glCombinerParameterivNV = (mogl_function_glCombinerParameterivNV) wglGetProcAddress("glCombinerParameterivNV");
    glCombinerParameteriNV = (mogl_function_glCombinerParameteriNV) wglGetProcAddress("glCombinerParameteriNV");
    glCombinerInputNV = (mogl_function_glCombinerInputNV) wglGetProcAddress("glCombinerInputNV");
    glCombinerOutputNV = (mogl_function_glCombinerOutputNV) wglGetProcAddress("glCombinerOutputNV");
    glFinalCombinerInputNV = (mogl_function_glFinalCombinerInputNV) wglGetProcAddress("glFinalCombinerInputNV");
    glGetCombinerInputParameterfvNV = (mogl_function_glGetCombinerInputParameterfvNV) wglGetProcAddress("glGetCombinerInputParameterfvNV");
    glGetCombinerInputParameterivNV = (mogl_function_glGetCombinerInputParameterivNV) wglGetProcAddress("glGetCombinerInputParameterivNV");
    glGetCombinerOutputParameterfvNV = (mogl_function_glGetCombinerOutputParameterfvNV) wglGetProcAddress("glGetCombinerOutputParameterfvNV");
    glGetCombinerOutputParameterivNV = (mogl_function_glGetCombinerOutputParameterivNV) wglGetProcAddress("glGetCombinerOutputParameterivNV");
    glGetFinalCombinerInputParameterfvNV = (mogl_function_glGetFinalCombinerInputParameterfvNV) wglGetProcAddress("glGetFinalCombinerInputParameterfvNV");
    glGetFinalCombinerInputParameterivNV = (mogl_function_glGetFinalCombinerInputParameterivNV) wglGetProcAddress("glGetFinalCombinerInputParameterivNV");
    glCombinerStageParameterfvNV = (mogl_function_glCombinerStageParameterfvNV) wglGetProcAddress("glCombinerStageParameterfvNV");
    glGetCombinerStageParameterfvNV = (mogl_function_glGetCombinerStageParameterfvNV) wglGetProcAddress("glGetCombinerStageParameterfvNV");
    glFramebufferSampleLocationsfvNV = (mogl_function_glFramebufferSampleLocationsfvNV) wglGetProcAddress("glFramebufferSampleLocationsfvNV");
    glNamedFramebufferSampleLocationsfvNV = (mogl_function_glNamedFramebufferSampleLocationsfvNV) wglGetProcAddress("glNamedFramebufferSampleLocationsfvNV");
    glResolveDepthValuesNV = (mogl_function_glResolveDepthValuesNV) wglGetProcAddress("glResolveDepthValuesNV");
    glScissorExclusiveNV = (mogl_function_glScissorExclusiveNV) wglGetProcAddress("glScissorExclusiveNV");
    glScissorExclusiveArrayvNV = (mogl_function_glScissorExclusiveArrayvNV) wglGetProcAddress("glScissorExclusiveArrayvNV");
    glMakeBufferResidentNV = (mogl_function_glMakeBufferResidentNV) wglGetProcAddress("glMakeBufferResidentNV");
    glMakeBufferNonResidentNV = (mogl_function_glMakeBufferNonResidentNV) wglGetProcAddress("glMakeBufferNonResidentNV");
    glIsBufferResidentNV = (mogl_function_glIsBufferResidentNV) wglGetProcAddress("glIsBufferResidentNV");
    glMakeNamedBufferResidentNV = (mogl_function_glMakeNamedBufferResidentNV) wglGetProcAddress("glMakeNamedBufferResidentNV");
    glMakeNamedBufferNonResidentNV = (mogl_function_glMakeNamedBufferNonResidentNV) wglGetProcAddress("glMakeNamedBufferNonResidentNV");
    glIsNamedBufferResidentNV = (mogl_function_glIsNamedBufferResidentNV) wglGetProcAddress("glIsNamedBufferResidentNV");
    glGetBufferParameterui64vNV = (mogl_function_glGetBufferParameterui64vNV) wglGetProcAddress("glGetBufferParameterui64vNV");
    glGetNamedBufferParameterui64vNV = (mogl_function_glGetNamedBufferParameterui64vNV) wglGetProcAddress("glGetNamedBufferParameterui64vNV");
    glGetIntegerui64vNV = (mogl_function_glGetIntegerui64vNV) wglGetProcAddress("glGetIntegerui64vNV");
    glUniformui64NV = (mogl_function_glUniformui64NV) wglGetProcAddress("glUniformui64NV");
    glUniformui64vNV = (mogl_function_glUniformui64vNV) wglGetProcAddress("glUniformui64vNV");
    glProgramUniformui64NV = (mogl_function_glProgramUniformui64NV) wglGetProcAddress("glProgramUniformui64NV");
    glProgramUniformui64vNV = (mogl_function_glProgramUniformui64vNV) wglGetProcAddress("glProgramUniformui64vNV");
    glBindShadingRateImageNV = (mogl_function_glBindShadingRateImageNV) wglGetProcAddress("glBindShadingRateImageNV");
    glGetShadingRateImagePaletteNV = (mogl_function_glGetShadingRateImagePaletteNV) wglGetProcAddress("glGetShadingRateImagePaletteNV");
    glGetShadingRateSampleLocationivNV = (mogl_function_glGetShadingRateSampleLocationivNV) wglGetProcAddress("glGetShadingRateSampleLocationivNV");
    glShadingRateImageBarrierNV = (mogl_function_glShadingRateImageBarrierNV) wglGetProcAddress("glShadingRateImageBarrierNV");
    glShadingRateImagePaletteNV = (mogl_function_glShadingRateImagePaletteNV) wglGetProcAddress("glShadingRateImagePaletteNV");
    glShadingRateSampleOrderNV = (mogl_function_glShadingRateSampleOrderNV) wglGetProcAddress("glShadingRateSampleOrderNV");
    glShadingRateSampleOrderCustomNV = (mogl_function_glShadingRateSampleOrderCustomNV) wglGetProcAddress("glShadingRateSampleOrderCustomNV");
    glTextureBarrierNV = (mogl_function_glTextureBarrierNV) wglGetProcAddress("glTextureBarrierNV");
    glTexImage2DMultisampleCoverageNV = (mogl_function_glTexImage2DMultisampleCoverageNV) wglGetProcAddress("glTexImage2DMultisampleCoverageNV");
    glTexImage3DMultisampleCoverageNV = (mogl_function_glTexImage3DMultisampleCoverageNV) wglGetProcAddress("glTexImage3DMultisampleCoverageNV");
    glTextureImage2DMultisampleNV = (mogl_function_glTextureImage2DMultisampleNV) wglGetProcAddress("glTextureImage2DMultisampleNV");
    glTextureImage3DMultisampleNV = (mogl_function_glTextureImage3DMultisampleNV) wglGetProcAddress("glTextureImage3DMultisampleNV");
    glTextureImage2DMultisampleCoverageNV = (mogl_function_glTextureImage2DMultisampleCoverageNV) wglGetProcAddress("glTextureImage2DMultisampleCoverageNV");
    glTextureImage3DMultisampleCoverageNV = (mogl_function_glTextureImage3DMultisampleCoverageNV) wglGetProcAddress("glTextureImage3DMultisampleCoverageNV");
    glCreateSemaphoresNV = (mogl_function_glCreateSemaphoresNV) wglGetProcAddress("glCreateSemaphoresNV");
    glSemaphoreParameterivNV = (mogl_function_glSemaphoreParameterivNV) wglGetProcAddress("glSemaphoreParameterivNV");
    glGetSemaphoreParameterivNV = (mogl_function_glGetSemaphoreParameterivNV) wglGetProcAddress("glGetSemaphoreParameterivNV");
    glBeginTransformFeedbackNV = (mogl_function_glBeginTransformFeedbackNV) wglGetProcAddress("glBeginTransformFeedbackNV");
    glEndTransformFeedbackNV = (mogl_function_glEndTransformFeedbackNV) wglGetProcAddress("glEndTransformFeedbackNV");
    glTransformFeedbackAttribsNV = (mogl_function_glTransformFeedbackAttribsNV) wglGetProcAddress("glTransformFeedbackAttribsNV");
    glBindBufferRangeNV = (mogl_function_glBindBufferRangeNV) wglGetProcAddress("glBindBufferRangeNV");
    glBindBufferOffsetNV = (mogl_function_glBindBufferOffsetNV) wglGetProcAddress("glBindBufferOffsetNV");
    glBindBufferBaseNV = (mogl_function_glBindBufferBaseNV) wglGetProcAddress("glBindBufferBaseNV");
    glTransformFeedbackVaryingsNV = (mogl_function_glTransformFeedbackVaryingsNV) wglGetProcAddress("glTransformFeedbackVaryingsNV");
    glActiveVaryingNV = (mogl_function_glActiveVaryingNV) wglGetProcAddress("glActiveVaryingNV");
    glGetVaryingLocationNV = (mogl_function_glGetVaryingLocationNV) wglGetProcAddress("glGetVaryingLocationNV");
    glGetActiveVaryingNV = (mogl_function_glGetActiveVaryingNV) wglGetProcAddress("glGetActiveVaryingNV");
    glGetTransformFeedbackVaryingNV = (mogl_function_glGetTransformFeedbackVaryingNV) wglGetProcAddress("glGetTransformFeedbackVaryingNV");
    glTransformFeedbackStreamAttribsNV = (mogl_function_glTransformFeedbackStreamAttribsNV) wglGetProcAddress("glTransformFeedbackStreamAttribsNV");
    glBindTransformFeedbackNV = (mogl_function_glBindTransformFeedbackNV) wglGetProcAddress("glBindTransformFeedbackNV");
    glDeleteTransformFeedbacksNV = (mogl_function_glDeleteTransformFeedbacksNV) wglGetProcAddress("glDeleteTransformFeedbacksNV");
    glGenTransformFeedbacksNV = (mogl_function_glGenTransformFeedbacksNV) wglGetProcAddress("glGenTransformFeedbacksNV");
    glIsTransformFeedbackNV = (mogl_function_glIsTransformFeedbackNV) wglGetProcAddress("glIsTransformFeedbackNV");
    glPauseTransformFeedbackNV = (mogl_function_glPauseTransformFeedbackNV) wglGetProcAddress("glPauseTransformFeedbackNV");
    glResumeTransformFeedbackNV = (mogl_function_glResumeTransformFeedbackNV) wglGetProcAddress("glResumeTransformFeedbackNV");
    glDrawTransformFeedbackNV = (mogl_function_glDrawTransformFeedbackNV) wglGetProcAddress("glDrawTransformFeedbackNV");
    glVDPAUInitNV = (mogl_function_glVDPAUInitNV) wglGetProcAddress("glVDPAUInitNV");
    glVDPAUFiniNV = (mogl_function_glVDPAUFiniNV) wglGetProcAddress("glVDPAUFiniNV");
    glVDPAURegisterVideoSurfaceNV = (mogl_function_glVDPAURegisterVideoSurfaceNV) wglGetProcAddress("glVDPAURegisterVideoSurfaceNV");
    glVDPAURegisterOutputSurfaceNV = (mogl_function_glVDPAURegisterOutputSurfaceNV) wglGetProcAddress("glVDPAURegisterOutputSurfaceNV");
    glVDPAUIsSurfaceNV = (mogl_function_glVDPAUIsSurfaceNV) wglGetProcAddress("glVDPAUIsSurfaceNV");
    glVDPAUUnregisterSurfaceNV = (mogl_function_glVDPAUUnregisterSurfaceNV) wglGetProcAddress("glVDPAUUnregisterSurfaceNV");
    glVDPAUGetSurfaceivNV = (mogl_function_glVDPAUGetSurfaceivNV) wglGetProcAddress("glVDPAUGetSurfaceivNV");
    glVDPAUSurfaceAccessNV = (mogl_function_glVDPAUSurfaceAccessNV) wglGetProcAddress("glVDPAUSurfaceAccessNV");
    glVDPAUMapSurfacesNV = (mogl_function_glVDPAUMapSurfacesNV) wglGetProcAddress("glVDPAUMapSurfacesNV");
    glVDPAUUnmapSurfacesNV = (mogl_function_glVDPAUUnmapSurfacesNV) wglGetProcAddress("glVDPAUUnmapSurfacesNV");
    glVDPAURegisterVideoSurfaceWithPictureStructureNV = (mogl_function_glVDPAURegisterVideoSurfaceWithPictureStructureNV) wglGetProcAddress("glVDPAURegisterVideoSurfaceWithPictureStructureNV");
    glFlushVertexArrayRangeNV = (mogl_function_glFlushVertexArrayRangeNV) wglGetProcAddress("glFlushVertexArrayRangeNV");
    glVertexArrayRangeNV = (mogl_function_glVertexArrayRangeNV) wglGetProcAddress("glVertexArrayRangeNV");
    glVertexAttribL1i64NV = (mogl_function_glVertexAttribL1i64NV) wglGetProcAddress("glVertexAttribL1i64NV");
    glVertexAttribL2i64NV = (mogl_function_glVertexAttribL2i64NV) wglGetProcAddress("glVertexAttribL2i64NV");
    glVertexAttribL3i64NV = (mogl_function_glVertexAttribL3i64NV) wglGetProcAddress("glVertexAttribL3i64NV");
    glVertexAttribL4i64NV = (mogl_function_glVertexAttribL4i64NV) wglGetProcAddress("glVertexAttribL4i64NV");
    glVertexAttribL1i64vNV = (mogl_function_glVertexAttribL1i64vNV) wglGetProcAddress("glVertexAttribL1i64vNV");
    glVertexAttribL2i64vNV = (mogl_function_glVertexAttribL2i64vNV) wglGetProcAddress("glVertexAttribL2i64vNV");
    glVertexAttribL3i64vNV = (mogl_function_glVertexAttribL3i64vNV) wglGetProcAddress("glVertexAttribL3i64vNV");
    glVertexAttribL4i64vNV = (mogl_function_glVertexAttribL4i64vNV) wglGetProcAddress("glVertexAttribL4i64vNV");
    glVertexAttribL1ui64NV = (mogl_function_glVertexAttribL1ui64NV) wglGetProcAddress("glVertexAttribL1ui64NV");
    glVertexAttribL2ui64NV = (mogl_function_glVertexAttribL2ui64NV) wglGetProcAddress("glVertexAttribL2ui64NV");
    glVertexAttribL3ui64NV = (mogl_function_glVertexAttribL3ui64NV) wglGetProcAddress("glVertexAttribL3ui64NV");
    glVertexAttribL4ui64NV = (mogl_function_glVertexAttribL4ui64NV) wglGetProcAddress("glVertexAttribL4ui64NV");
    glVertexAttribL1ui64vNV = (mogl_function_glVertexAttribL1ui64vNV) wglGetProcAddress("glVertexAttribL1ui64vNV");
    glVertexAttribL2ui64vNV = (mogl_function_glVertexAttribL2ui64vNV) wglGetProcAddress("glVertexAttribL2ui64vNV");
    glVertexAttribL3ui64vNV = (mogl_function_glVertexAttribL3ui64vNV) wglGetProcAddress("glVertexAttribL3ui64vNV");
    glVertexAttribL4ui64vNV = (mogl_function_glVertexAttribL4ui64vNV) wglGetProcAddress("glVertexAttribL4ui64vNV");
    glGetVertexAttribLi64vNV = (mogl_function_glGetVertexAttribLi64vNV) wglGetProcAddress("glGetVertexAttribLi64vNV");
    glGetVertexAttribLui64vNV = (mogl_function_glGetVertexAttribLui64vNV) wglGetProcAddress("glGetVertexAttribLui64vNV");
    glVertexAttribLFormatNV = (mogl_function_glVertexAttribLFormatNV) wglGetProcAddress("glVertexAttribLFormatNV");
    glBufferAddressRangeNV = (mogl_function_glBufferAddressRangeNV) wglGetProcAddress("glBufferAddressRangeNV");
    glVertexFormatNV = (mogl_function_glVertexFormatNV) wglGetProcAddress("glVertexFormatNV");
    glNormalFormatNV = (mogl_function_glNormalFormatNV) wglGetProcAddress("glNormalFormatNV");
    glColorFormatNV = (mogl_function_glColorFormatNV) wglGetProcAddress("glColorFormatNV");
    glIndexFormatNV = (mogl_function_glIndexFormatNV) wglGetProcAddress("glIndexFormatNV");
    glTexCoordFormatNV = (mogl_function_glTexCoordFormatNV) wglGetProcAddress("glTexCoordFormatNV");
    glEdgeFlagFormatNV = (mogl_function_glEdgeFlagFormatNV) wglGetProcAddress("glEdgeFlagFormatNV");
    glSecondaryColorFormatNV = (mogl_function_glSecondaryColorFormatNV) wglGetProcAddress("glSecondaryColorFormatNV");
    glFogCoordFormatNV = (mogl_function_glFogCoordFormatNV) wglGetProcAddress("glFogCoordFormatNV");
    glVertexAttribFormatNV = (mogl_function_glVertexAttribFormatNV) wglGetProcAddress("glVertexAttribFormatNV");
    glVertexAttribIFormatNV = (mogl_function_glVertexAttribIFormatNV) wglGetProcAddress("glVertexAttribIFormatNV");
    glGetIntegerui64i_vNV = (mogl_function_glGetIntegerui64i_vNV) wglGetProcAddress("glGetIntegerui64i_vNV");
    glAreProgramsResidentNV = (mogl_function_glAreProgramsResidentNV) wglGetProcAddress("glAreProgramsResidentNV");
    glBindProgramNV = (mogl_function_glBindProgramNV) wglGetProcAddress("glBindProgramNV");
    glDeleteProgramsNV = (mogl_function_glDeleteProgramsNV) wglGetProcAddress("glDeleteProgramsNV");
    glExecuteProgramNV = (mogl_function_glExecuteProgramNV) wglGetProcAddress("glExecuteProgramNV");
    glGenProgramsNV = (mogl_function_glGenProgramsNV) wglGetProcAddress("glGenProgramsNV");
    glGetProgramParameterdvNV = (mogl_function_glGetProgramParameterdvNV) wglGetProcAddress("glGetProgramParameterdvNV");
    glGetProgramParameterfvNV = (mogl_function_glGetProgramParameterfvNV) wglGetProcAddress("glGetProgramParameterfvNV");
    glGetProgramivNV = (mogl_function_glGetProgramivNV) wglGetProcAddress("glGetProgramivNV");
    glGetProgramStringNV = (mogl_function_glGetProgramStringNV) wglGetProcAddress("glGetProgramStringNV");
    glGetTrackMatrixivNV = (mogl_function_glGetTrackMatrixivNV) wglGetProcAddress("glGetTrackMatrixivNV");
    glGetVertexAttribdvNV = (mogl_function_glGetVertexAttribdvNV) wglGetProcAddress("glGetVertexAttribdvNV");
    glGetVertexAttribfvNV = (mogl_function_glGetVertexAttribfvNV) wglGetProcAddress("glGetVertexAttribfvNV");
    glGetVertexAttribivNV = (mogl_function_glGetVertexAttribivNV) wglGetProcAddress("glGetVertexAttribivNV");
    glGetVertexAttribPointervNV = (mogl_function_glGetVertexAttribPointervNV) wglGetProcAddress("glGetVertexAttribPointervNV");
    glIsProgramNV = (mogl_function_glIsProgramNV) wglGetProcAddress("glIsProgramNV");
    glLoadProgramNV = (mogl_function_glLoadProgramNV) wglGetProcAddress("glLoadProgramNV");
    glProgramParameter4dNV = (mogl_function_glProgramParameter4dNV) wglGetProcAddress("glProgramParameter4dNV");
    glProgramParameter4dvNV = (mogl_function_glProgramParameter4dvNV) wglGetProcAddress("glProgramParameter4dvNV");
    glProgramParameter4fNV = (mogl_function_glProgramParameter4fNV) wglGetProcAddress("glProgramParameter4fNV");
    glProgramParameter4fvNV = (mogl_function_glProgramParameter4fvNV) wglGetProcAddress("glProgramParameter4fvNV");
    glProgramParameters4dvNV = (mogl_function_glProgramParameters4dvNV) wglGetProcAddress("glProgramParameters4dvNV");
    glProgramParameters4fvNV = (mogl_function_glProgramParameters4fvNV) wglGetProcAddress("glProgramParameters4fvNV");
    glRequestResidentProgramsNV = (mogl_function_glRequestResidentProgramsNV) wglGetProcAddress("glRequestResidentProgramsNV");
    glTrackMatrixNV = (mogl_function_glTrackMatrixNV) wglGetProcAddress("glTrackMatrixNV");
    glVertexAttribPointerNV = (mogl_function_glVertexAttribPointerNV) wglGetProcAddress("glVertexAttribPointerNV");
    glVertexAttrib1dNV = (mogl_function_glVertexAttrib1dNV) wglGetProcAddress("glVertexAttrib1dNV");
    glVertexAttrib1dvNV = (mogl_function_glVertexAttrib1dvNV) wglGetProcAddress("glVertexAttrib1dvNV");
    glVertexAttrib1fNV = (mogl_function_glVertexAttrib1fNV) wglGetProcAddress("glVertexAttrib1fNV");
    glVertexAttrib1fvNV = (mogl_function_glVertexAttrib1fvNV) wglGetProcAddress("glVertexAttrib1fvNV");
    glVertexAttrib1sNV = (mogl_function_glVertexAttrib1sNV) wglGetProcAddress("glVertexAttrib1sNV");
    glVertexAttrib1svNV = (mogl_function_glVertexAttrib1svNV) wglGetProcAddress("glVertexAttrib1svNV");
    glVertexAttrib2dNV = (mogl_function_glVertexAttrib2dNV) wglGetProcAddress("glVertexAttrib2dNV");
    glVertexAttrib2dvNV = (mogl_function_glVertexAttrib2dvNV) wglGetProcAddress("glVertexAttrib2dvNV");
    glVertexAttrib2fNV = (mogl_function_glVertexAttrib2fNV) wglGetProcAddress("glVertexAttrib2fNV");
    glVertexAttrib2fvNV = (mogl_function_glVertexAttrib2fvNV) wglGetProcAddress("glVertexAttrib2fvNV");
    glVertexAttrib2sNV = (mogl_function_glVertexAttrib2sNV) wglGetProcAddress("glVertexAttrib2sNV");
    glVertexAttrib2svNV = (mogl_function_glVertexAttrib2svNV) wglGetProcAddress("glVertexAttrib2svNV");
    glVertexAttrib3dNV = (mogl_function_glVertexAttrib3dNV) wglGetProcAddress("glVertexAttrib3dNV");
    glVertexAttrib3dvNV = (mogl_function_glVertexAttrib3dvNV) wglGetProcAddress("glVertexAttrib3dvNV");
    glVertexAttrib3fNV = (mogl_function_glVertexAttrib3fNV) wglGetProcAddress("glVertexAttrib3fNV");
    glVertexAttrib3fvNV = (mogl_function_glVertexAttrib3fvNV) wglGetProcAddress("glVertexAttrib3fvNV");
    glVertexAttrib3sNV = (mogl_function_glVertexAttrib3sNV) wglGetProcAddress("glVertexAttrib3sNV");
    glVertexAttrib3svNV = (mogl_function_glVertexAttrib3svNV) wglGetProcAddress("glVertexAttrib3svNV");
    glVertexAttrib4dNV = (mogl_function_glVertexAttrib4dNV) wglGetProcAddress("glVertexAttrib4dNV");
    glVertexAttrib4dvNV = (mogl_function_glVertexAttrib4dvNV) wglGetProcAddress("glVertexAttrib4dvNV");
    glVertexAttrib4fNV = (mogl_function_glVertexAttrib4fNV) wglGetProcAddress("glVertexAttrib4fNV");
    glVertexAttrib4fvNV = (mogl_function_glVertexAttrib4fvNV) wglGetProcAddress("glVertexAttrib4fvNV");
    glVertexAttrib4sNV = (mogl_function_glVertexAttrib4sNV) wglGetProcAddress("glVertexAttrib4sNV");
    glVertexAttrib4svNV = (mogl_function_glVertexAttrib4svNV) wglGetProcAddress("glVertexAttrib4svNV");
    glVertexAttrib4ubNV = (mogl_function_glVertexAttrib4ubNV) wglGetProcAddress("glVertexAttrib4ubNV");
    glVertexAttrib4ubvNV = (mogl_function_glVertexAttrib4ubvNV) wglGetProcAddress("glVertexAttrib4ubvNV");
    glVertexAttribs1dvNV = (mogl_function_glVertexAttribs1dvNV) wglGetProcAddress("glVertexAttribs1dvNV");
    glVertexAttribs1fvNV = (mogl_function_glVertexAttribs1fvNV) wglGetProcAddress("glVertexAttribs1fvNV");
    glVertexAttribs1svNV = (mogl_function_glVertexAttribs1svNV) wglGetProcAddress("glVertexAttribs1svNV");
    glVertexAttribs2dvNV = (mogl_function_glVertexAttribs2dvNV) wglGetProcAddress("glVertexAttribs2dvNV");
    glVertexAttribs2fvNV = (mogl_function_glVertexAttribs2fvNV) wglGetProcAddress("glVertexAttribs2fvNV");
    glVertexAttribs2svNV = (mogl_function_glVertexAttribs2svNV) wglGetProcAddress("glVertexAttribs2svNV");
    glVertexAttribs3dvNV = (mogl_function_glVertexAttribs3dvNV) wglGetProcAddress("glVertexAttribs3dvNV");
    glVertexAttribs3fvNV = (mogl_function_glVertexAttribs3fvNV) wglGetProcAddress("glVertexAttribs3fvNV");
    glVertexAttribs3svNV = (mogl_function_glVertexAttribs3svNV) wglGetProcAddress("glVertexAttribs3svNV");
    glVertexAttribs4dvNV = (mogl_function_glVertexAttribs4dvNV) wglGetProcAddress("glVertexAttribs4dvNV");
    glVertexAttribs4fvNV = (mogl_function_glVertexAttribs4fvNV) wglGetProcAddress("glVertexAttribs4fvNV");
    glVertexAttribs4svNV = (mogl_function_glVertexAttribs4svNV) wglGetProcAddress("glVertexAttribs4svNV");
    glVertexAttribs4ubvNV = (mogl_function_glVertexAttribs4ubvNV) wglGetProcAddress("glVertexAttribs4ubvNV");
    glBeginVideoCaptureNV = (mogl_function_glBeginVideoCaptureNV) wglGetProcAddress("glBeginVideoCaptureNV");
    glBindVideoCaptureStreamBufferNV = (mogl_function_glBindVideoCaptureStreamBufferNV) wglGetProcAddress("glBindVideoCaptureStreamBufferNV");
    glBindVideoCaptureStreamTextureNV = (mogl_function_glBindVideoCaptureStreamTextureNV) wglGetProcAddress("glBindVideoCaptureStreamTextureNV");
    glEndVideoCaptureNV = (mogl_function_glEndVideoCaptureNV) wglGetProcAddress("glEndVideoCaptureNV");
    glGetVideoCaptureivNV = (mogl_function_glGetVideoCaptureivNV) wglGetProcAddress("glGetVideoCaptureivNV");
    glGetVideoCaptureStreamivNV = (mogl_function_glGetVideoCaptureStreamivNV) wglGetProcAddress("glGetVideoCaptureStreamivNV");
    glGetVideoCaptureStreamfvNV = (mogl_function_glGetVideoCaptureStreamfvNV) wglGetProcAddress("glGetVideoCaptureStreamfvNV");
    glGetVideoCaptureStreamdvNV = (mogl_function_glGetVideoCaptureStreamdvNV) wglGetProcAddress("glGetVideoCaptureStreamdvNV");
    glVideoCaptureNV = (mogl_function_glVideoCaptureNV) wglGetProcAddress("glVideoCaptureNV");
    glVideoCaptureStreamParameterivNV = (mogl_function_glVideoCaptureStreamParameterivNV) wglGetProcAddress("glVideoCaptureStreamParameterivNV");
    glVideoCaptureStreamParameterfvNV = (mogl_function_glVideoCaptureStreamParameterfvNV) wglGetProcAddress("glVideoCaptureStreamParameterfvNV");
    glVideoCaptureStreamParameterdvNV = (mogl_function_glVideoCaptureStreamParameterdvNV) wglGetProcAddress("glVideoCaptureStreamParameterdvNV");
    glViewportSwizzleNV = (mogl_function_glViewportSwizzleNV) wglGetProcAddress("glViewportSwizzleNV");
    glFramebufferTextureMultiviewOVR = (mogl_function_glFramebufferTextureMultiviewOVR) wglGetProcAddress("glFramebufferTextureMultiviewOVR");
    glHintPGI = (mogl_function_glHintPGI) wglGetProcAddress("glHintPGI");
    glDetailTexFuncSGIS = (mogl_function_glDetailTexFuncSGIS) wglGetProcAddress("glDetailTexFuncSGIS");
    glGetDetailTexFuncSGIS = (mogl_function_glGetDetailTexFuncSGIS) wglGetProcAddress("glGetDetailTexFuncSGIS");
    glFogFuncSGIS = (mogl_function_glFogFuncSGIS) wglGetProcAddress("glFogFuncSGIS");
    glGetFogFuncSGIS = (mogl_function_glGetFogFuncSGIS) wglGetProcAddress("glGetFogFuncSGIS");
    glSampleMaskSGIS = (mogl_function_glSampleMaskSGIS) wglGetProcAddress("glSampleMaskSGIS");
    glSamplePatternSGIS = (mogl_function_glSamplePatternSGIS) wglGetProcAddress("glSamplePatternSGIS");
    glPixelTexGenParameteriSGIS = (mogl_function_glPixelTexGenParameteriSGIS) wglGetProcAddress("glPixelTexGenParameteriSGIS");
    glPixelTexGenParameterivSGIS = (mogl_function_glPixelTexGenParameterivSGIS) wglGetProcAddress("glPixelTexGenParameterivSGIS");
    glPixelTexGenParameterfSGIS = (mogl_function_glPixelTexGenParameterfSGIS) wglGetProcAddress("glPixelTexGenParameterfSGIS");
    glPixelTexGenParameterfvSGIS = (mogl_function_glPixelTexGenParameterfvSGIS) wglGetProcAddress("glPixelTexGenParameterfvSGIS");
    glGetPixelTexGenParameterivSGIS = (mogl_function_glGetPixelTexGenParameterivSGIS) wglGetProcAddress("glGetPixelTexGenParameterivSGIS");
    glGetPixelTexGenParameterfvSGIS = (mogl_function_glGetPixelTexGenParameterfvSGIS) wglGetProcAddress("glGetPixelTexGenParameterfvSGIS");
    glPointParameterfSGIS = (mogl_function_glPointParameterfSGIS) wglGetProcAddress("glPointParameterfSGIS");
    glPointParameterfvSGIS = (mogl_function_glPointParameterfvSGIS) wglGetProcAddress("glPointParameterfvSGIS");
    glSharpenTexFuncSGIS = (mogl_function_glSharpenTexFuncSGIS) wglGetProcAddress("glSharpenTexFuncSGIS");
    glGetSharpenTexFuncSGIS = (mogl_function_glGetSharpenTexFuncSGIS) wglGetProcAddress("glGetSharpenTexFuncSGIS");
    glTexImage4DSGIS = (mogl_function_glTexImage4DSGIS) wglGetProcAddress("glTexImage4DSGIS");
    glTexSubImage4DSGIS = (mogl_function_glTexSubImage4DSGIS) wglGetProcAddress("glTexSubImage4DSGIS");
    glTextureColorMaskSGIS = (mogl_function_glTextureColorMaskSGIS) wglGetProcAddress("glTextureColorMaskSGIS");
    glGetTexFilterFuncSGIS = (mogl_function_glGetTexFilterFuncSGIS) wglGetProcAddress("glGetTexFilterFuncSGIS");
    glTexFilterFuncSGIS = (mogl_function_glTexFilterFuncSGIS) wglGetProcAddress("glTexFilterFuncSGIS");
    glAsyncMarkerSGIX = (mogl_function_glAsyncMarkerSGIX) wglGetProcAddress("glAsyncMarkerSGIX");
    glFinishAsyncSGIX = (mogl_function_glFinishAsyncSGIX) wglGetProcAddress("glFinishAsyncSGIX");
    glPollAsyncSGIX = (mogl_function_glPollAsyncSGIX) wglGetProcAddress("glPollAsyncSGIX");
    glGenAsyncMarkersSGIX = (mogl_function_glGenAsyncMarkersSGIX) wglGetProcAddress("glGenAsyncMarkersSGIX");
    glDeleteAsyncMarkersSGIX = (mogl_function_glDeleteAsyncMarkersSGIX) wglGetProcAddress("glDeleteAsyncMarkersSGIX");
    glIsAsyncMarkerSGIX = (mogl_function_glIsAsyncMarkerSGIX) wglGetProcAddress("glIsAsyncMarkerSGIX");
    glFlushRasterSGIX = (mogl_function_glFlushRasterSGIX) wglGetProcAddress("glFlushRasterSGIX");
    glFragmentColorMaterialSGIX = (mogl_function_glFragmentColorMaterialSGIX) wglGetProcAddress("glFragmentColorMaterialSGIX");
    glFragmentLightfSGIX = (mogl_function_glFragmentLightfSGIX) wglGetProcAddress("glFragmentLightfSGIX");
    glFragmentLightfvSGIX = (mogl_function_glFragmentLightfvSGIX) wglGetProcAddress("glFragmentLightfvSGIX");
    glFragmentLightiSGIX = (mogl_function_glFragmentLightiSGIX) wglGetProcAddress("glFragmentLightiSGIX");
    glFragmentLightivSGIX = (mogl_function_glFragmentLightivSGIX) wglGetProcAddress("glFragmentLightivSGIX");
    glFragmentLightModelfSGIX = (mogl_function_glFragmentLightModelfSGIX) wglGetProcAddress("glFragmentLightModelfSGIX");
    glFragmentLightModelfvSGIX = (mogl_function_glFragmentLightModelfvSGIX) wglGetProcAddress("glFragmentLightModelfvSGIX");
    glFragmentLightModeliSGIX = (mogl_function_glFragmentLightModeliSGIX) wglGetProcAddress("glFragmentLightModeliSGIX");
    glFragmentLightModelivSGIX = (mogl_function_glFragmentLightModelivSGIX) wglGetProcAddress("glFragmentLightModelivSGIX");
    glFragmentMaterialfSGIX = (mogl_function_glFragmentMaterialfSGIX) wglGetProcAddress("glFragmentMaterialfSGIX");
    glFragmentMaterialfvSGIX = (mogl_function_glFragmentMaterialfvSGIX) wglGetProcAddress("glFragmentMaterialfvSGIX");
    glFragmentMaterialiSGIX = (mogl_function_glFragmentMaterialiSGIX) wglGetProcAddress("glFragmentMaterialiSGIX");
    glFragmentMaterialivSGIX = (mogl_function_glFragmentMaterialivSGIX) wglGetProcAddress("glFragmentMaterialivSGIX");
    glGetFragmentLightfvSGIX = (mogl_function_glGetFragmentLightfvSGIX) wglGetProcAddress("glGetFragmentLightfvSGIX");
    glGetFragmentLightivSGIX = (mogl_function_glGetFragmentLightivSGIX) wglGetProcAddress("glGetFragmentLightivSGIX");
    glGetFragmentMaterialfvSGIX = (mogl_function_glGetFragmentMaterialfvSGIX) wglGetProcAddress("glGetFragmentMaterialfvSGIX");
    glGetFragmentMaterialivSGIX = (mogl_function_glGetFragmentMaterialivSGIX) wglGetProcAddress("glGetFragmentMaterialivSGIX");
    glLightEnviSGIX = (mogl_function_glLightEnviSGIX) wglGetProcAddress("glLightEnviSGIX");
    glFrameZoomSGIX = (mogl_function_glFrameZoomSGIX) wglGetProcAddress("glFrameZoomSGIX");
    glIglooInterfaceSGIX = (mogl_function_glIglooInterfaceSGIX) wglGetProcAddress("glIglooInterfaceSGIX");
    glGetInstrumentsSGIX = (mogl_function_glGetInstrumentsSGIX) wglGetProcAddress("glGetInstrumentsSGIX");
    glInstrumentsBufferSGIX = (mogl_function_glInstrumentsBufferSGIX) wglGetProcAddress("glInstrumentsBufferSGIX");
    glPollInstrumentsSGIX = (mogl_function_glPollInstrumentsSGIX) wglGetProcAddress("glPollInstrumentsSGIX");
    glReadInstrumentsSGIX = (mogl_function_glReadInstrumentsSGIX) wglGetProcAddress("glReadInstrumentsSGIX");
    glStartInstrumentsSGIX = (mogl_function_glStartInstrumentsSGIX) wglGetProcAddress("glStartInstrumentsSGIX");
    glStopInstrumentsSGIX = (mogl_function_glStopInstrumentsSGIX) wglGetProcAddress("glStopInstrumentsSGIX");
    glGetListParameterfvSGIX = (mogl_function_glGetListParameterfvSGIX) wglGetProcAddress("glGetListParameterfvSGIX");
    glGetListParameterivSGIX = (mogl_function_glGetListParameterivSGIX) wglGetProcAddress("glGetListParameterivSGIX");
    glListParameterfSGIX = (mogl_function_glListParameterfSGIX) wglGetProcAddress("glListParameterfSGIX");
    glListParameterfvSGIX = (mogl_function_glListParameterfvSGIX) wglGetProcAddress("glListParameterfvSGIX");
    glListParameteriSGIX = (mogl_function_glListParameteriSGIX) wglGetProcAddress("glListParameteriSGIX");
    glListParameterivSGIX = (mogl_function_glListParameterivSGIX) wglGetProcAddress("glListParameterivSGIX");
    glPixelTexGenSGIX = (mogl_function_glPixelTexGenSGIX) wglGetProcAddress("glPixelTexGenSGIX");
    glDeformationMap3dSGIX = (mogl_function_glDeformationMap3dSGIX) wglGetProcAddress("glDeformationMap3dSGIX");
    glDeformationMap3fSGIX = (mogl_function_glDeformationMap3fSGIX) wglGetProcAddress("glDeformationMap3fSGIX");
    glDeformSGIX = (mogl_function_glDeformSGIX) wglGetProcAddress("glDeformSGIX");
    glLoadIdentityDeformationMapSGIX = (mogl_function_glLoadIdentityDeformationMapSGIX) wglGetProcAddress("glLoadIdentityDeformationMapSGIX");
    glReferencePlaneSGIX = (mogl_function_glReferencePlaneSGIX) wglGetProcAddress("glReferencePlaneSGIX");
    glSpriteParameterfSGIX = (mogl_function_glSpriteParameterfSGIX) wglGetProcAddress("glSpriteParameterfSGIX");
    glSpriteParameterfvSGIX = (mogl_function_glSpriteParameterfvSGIX) wglGetProcAddress("glSpriteParameterfvSGIX");
    glSpriteParameteriSGIX = (mogl_function_glSpriteParameteriSGIX) wglGetProcAddress("glSpriteParameteriSGIX");
    glSpriteParameterivSGIX = (mogl_function_glSpriteParameterivSGIX) wglGetProcAddress("glSpriteParameterivSGIX");
    glTagSampleBufferSGIX = (mogl_function_glTagSampleBufferSGIX) wglGetProcAddress("glTagSampleBufferSGIX");
    glColorTableSGI = (mogl_function_glColorTableSGI) wglGetProcAddress("glColorTableSGI");
    glColorTableParameterfvSGI = (mogl_function_glColorTableParameterfvSGI) wglGetProcAddress("glColorTableParameterfvSGI");
    glColorTableParameterivSGI = (mogl_function_glColorTableParameterivSGI) wglGetProcAddress("glColorTableParameterivSGI");
    glCopyColorTableSGI = (mogl_function_glCopyColorTableSGI) wglGetProcAddress("glCopyColorTableSGI");
    glGetColorTableSGI = (mogl_function_glGetColorTableSGI) wglGetProcAddress("glGetColorTableSGI");
    glGetColorTableParameterfvSGI = (mogl_function_glGetColorTableParameterfvSGI) wglGetProcAddress("glGetColorTableParameterfvSGI");
    glGetColorTableParameterivSGI = (mogl_function_glGetColorTableParameterivSGI) wglGetProcAddress("glGetColorTableParameterivSGI");
    glFinishTextureSUNX = (mogl_function_glFinishTextureSUNX) wglGetProcAddress("glFinishTextureSUNX");
    glGlobalAlphaFactorbSUN = (mogl_function_glGlobalAlphaFactorbSUN) wglGetProcAddress("glGlobalAlphaFactorbSUN");
    glGlobalAlphaFactorsSUN = (mogl_function_glGlobalAlphaFactorsSUN) wglGetProcAddress("glGlobalAlphaFactorsSUN");
    glGlobalAlphaFactoriSUN = (mogl_function_glGlobalAlphaFactoriSUN) wglGetProcAddress("glGlobalAlphaFactoriSUN");
    glGlobalAlphaFactorfSUN = (mogl_function_glGlobalAlphaFactorfSUN) wglGetProcAddress("glGlobalAlphaFactorfSUN");
    glGlobalAlphaFactordSUN = (mogl_function_glGlobalAlphaFactordSUN) wglGetProcAddress("glGlobalAlphaFactordSUN");
    glGlobalAlphaFactorubSUN = (mogl_function_glGlobalAlphaFactorubSUN) wglGetProcAddress("glGlobalAlphaFactorubSUN");
    glGlobalAlphaFactorusSUN = (mogl_function_glGlobalAlphaFactorusSUN) wglGetProcAddress("glGlobalAlphaFactorusSUN");
    glGlobalAlphaFactoruiSUN = (mogl_function_glGlobalAlphaFactoruiSUN) wglGetProcAddress("glGlobalAlphaFactoruiSUN");
    glDrawMeshArraysSUN = (mogl_function_glDrawMeshArraysSUN) wglGetProcAddress("glDrawMeshArraysSUN");
    glReplacementCodeuiSUN = (mogl_function_glReplacementCodeuiSUN) wglGetProcAddress("glReplacementCodeuiSUN");
    glReplacementCodeusSUN = (mogl_function_glReplacementCodeusSUN) wglGetProcAddress("glReplacementCodeusSUN");
    glReplacementCodeubSUN = (mogl_function_glReplacementCodeubSUN) wglGetProcAddress("glReplacementCodeubSUN");
    glReplacementCodeuivSUN = (mogl_function_glReplacementCodeuivSUN) wglGetProcAddress("glReplacementCodeuivSUN");
    glReplacementCodeusvSUN = (mogl_function_glReplacementCodeusvSUN) wglGetProcAddress("glReplacementCodeusvSUN");
    glReplacementCodeubvSUN = (mogl_function_glReplacementCodeubvSUN) wglGetProcAddress("glReplacementCodeubvSUN");
    glReplacementCodePointerSUN = (mogl_function_glReplacementCodePointerSUN) wglGetProcAddress("glReplacementCodePointerSUN");
    glColor4ubVertex2fSUN = (mogl_function_glColor4ubVertex2fSUN) wglGetProcAddress("glColor4ubVertex2fSUN");
    glColor4ubVertex2fvSUN = (mogl_function_glColor4ubVertex2fvSUN) wglGetProcAddress("glColor4ubVertex2fvSUN");
    glColor4ubVertex3fSUN = (mogl_function_glColor4ubVertex3fSUN) wglGetProcAddress("glColor4ubVertex3fSUN");
    glColor4ubVertex3fvSUN = (mogl_function_glColor4ubVertex3fvSUN) wglGetProcAddress("glColor4ubVertex3fvSUN");
    glColor3fVertex3fSUN = (mogl_function_glColor3fVertex3fSUN) wglGetProcAddress("glColor3fVertex3fSUN");
    glColor3fVertex3fvSUN = (mogl_function_glColor3fVertex3fvSUN) wglGetProcAddress("glColor3fVertex3fvSUN");
    glNormal3fVertex3fSUN = (mogl_function_glNormal3fVertex3fSUN) wglGetProcAddress("glNormal3fVertex3fSUN");
    glNormal3fVertex3fvSUN = (mogl_function_glNormal3fVertex3fvSUN) wglGetProcAddress("glNormal3fVertex3fvSUN");
    glColor4fNormal3fVertex3fSUN = (mogl_function_glColor4fNormal3fVertex3fSUN) wglGetProcAddress("glColor4fNormal3fVertex3fSUN");
    glColor4fNormal3fVertex3fvSUN = (mogl_function_glColor4fNormal3fVertex3fvSUN) wglGetProcAddress("glColor4fNormal3fVertex3fvSUN");
    glTexCoord2fVertex3fSUN = (mogl_function_glTexCoord2fVertex3fSUN) wglGetProcAddress("glTexCoord2fVertex3fSUN");
    glTexCoord2fVertex3fvSUN = (mogl_function_glTexCoord2fVertex3fvSUN) wglGetProcAddress("glTexCoord2fVertex3fvSUN");
    glTexCoord4fVertex4fSUN = (mogl_function_glTexCoord4fVertex4fSUN) wglGetProcAddress("glTexCoord4fVertex4fSUN");
    glTexCoord4fVertex4fvSUN = (mogl_function_glTexCoord4fVertex4fvSUN) wglGetProcAddress("glTexCoord4fVertex4fvSUN");
    glTexCoord2fColor4ubVertex3fSUN = (mogl_function_glTexCoord2fColor4ubVertex3fSUN) wglGetProcAddress("glTexCoord2fColor4ubVertex3fSUN");
    glTexCoord2fColor4ubVertex3fvSUN = (mogl_function_glTexCoord2fColor4ubVertex3fvSUN) wglGetProcAddress("glTexCoord2fColor4ubVertex3fvSUN");
    glTexCoord2fColor3fVertex3fSUN = (mogl_function_glTexCoord2fColor3fVertex3fSUN) wglGetProcAddress("glTexCoord2fColor3fVertex3fSUN");
    glTexCoord2fColor3fVertex3fvSUN = (mogl_function_glTexCoord2fColor3fVertex3fvSUN) wglGetProcAddress("glTexCoord2fColor3fVertex3fvSUN");
    glTexCoord2fNormal3fVertex3fSUN = (mogl_function_glTexCoord2fNormal3fVertex3fSUN) wglGetProcAddress("glTexCoord2fNormal3fVertex3fSUN");
    glTexCoord2fNormal3fVertex3fvSUN = (mogl_function_glTexCoord2fNormal3fVertex3fvSUN) wglGetProcAddress("glTexCoord2fNormal3fVertex3fvSUN");
    glTexCoord2fColor4fNormal3fVertex3fSUN = (mogl_function_glTexCoord2fColor4fNormal3fVertex3fSUN) wglGetProcAddress("glTexCoord2fColor4fNormal3fVertex3fSUN");
    glTexCoord2fColor4fNormal3fVertex3fvSUN = (mogl_function_glTexCoord2fColor4fNormal3fVertex3fvSUN) wglGetProcAddress("glTexCoord2fColor4fNormal3fVertex3fvSUN");
    glTexCoord4fColor4fNormal3fVertex4fSUN = (mogl_function_glTexCoord4fColor4fNormal3fVertex4fSUN) wglGetProcAddress("glTexCoord4fColor4fNormal3fVertex4fSUN");
    glTexCoord4fColor4fNormal3fVertex4fvSUN = (mogl_function_glTexCoord4fColor4fNormal3fVertex4fvSUN) wglGetProcAddress("glTexCoord4fColor4fNormal3fVertex4fvSUN");
    glReplacementCodeuiVertex3fSUN = (mogl_function_glReplacementCodeuiVertex3fSUN) wglGetProcAddress("glReplacementCodeuiVertex3fSUN");
    glReplacementCodeuiVertex3fvSUN = (mogl_function_glReplacementCodeuiVertex3fvSUN) wglGetProcAddress("glReplacementCodeuiVertex3fvSUN");
    glReplacementCodeuiColor4ubVertex3fSUN = (mogl_function_glReplacementCodeuiColor4ubVertex3fSUN) wglGetProcAddress("glReplacementCodeuiColor4ubVertex3fSUN");
    glReplacementCodeuiColor4ubVertex3fvSUN = (mogl_function_glReplacementCodeuiColor4ubVertex3fvSUN) wglGetProcAddress("glReplacementCodeuiColor4ubVertex3fvSUN");
    glReplacementCodeuiColor3fVertex3fSUN = (mogl_function_glReplacementCodeuiColor3fVertex3fSUN) wglGetProcAddress("glReplacementCodeuiColor3fVertex3fSUN");
    glReplacementCodeuiColor3fVertex3fvSUN = (mogl_function_glReplacementCodeuiColor3fVertex3fvSUN) wglGetProcAddress("glReplacementCodeuiColor3fVertex3fvSUN");
    glReplacementCodeuiNormal3fVertex3fSUN = (mogl_function_glReplacementCodeuiNormal3fVertex3fSUN) wglGetProcAddress("glReplacementCodeuiNormal3fVertex3fSUN");
    glReplacementCodeuiNormal3fVertex3fvSUN = (mogl_function_glReplacementCodeuiNormal3fVertex3fvSUN) wglGetProcAddress("glReplacementCodeuiNormal3fVertex3fvSUN");
    glReplacementCodeuiColor4fNormal3fVertex3fSUN = (mogl_function_glReplacementCodeuiColor4fNormal3fVertex3fSUN) wglGetProcAddress("glReplacementCodeuiColor4fNormal3fVertex3fSUN");
    glReplacementCodeuiColor4fNormal3fVertex3fvSUN = (mogl_function_glReplacementCodeuiColor4fNormal3fVertex3fvSUN) wglGetProcAddress("glReplacementCodeuiColor4fNormal3fVertex3fvSUN");
    glReplacementCodeuiTexCoord2fVertex3fSUN = (mogl_function_glReplacementCodeuiTexCoord2fVertex3fSUN) wglGetProcAddress("glReplacementCodeuiTexCoord2fVertex3fSUN");
    glReplacementCodeuiTexCoord2fVertex3fvSUN = (mogl_function_glReplacementCodeuiTexCoord2fVertex3fvSUN) wglGetProcAddress("glReplacementCodeuiTexCoord2fVertex3fvSUN");
    glReplacementCodeuiTexCoord2fNormal3fVertex3fSUN = (mogl_function_glReplacementCodeuiTexCoord2fNormal3fVertex3fSUN) wglGetProcAddress("glReplacementCodeuiTexCoord2fNormal3fVertex3fSUN");
    glReplacementCodeuiTexCoord2fNormal3fVertex3fvSUN = (mogl_function_glReplacementCodeuiTexCoord2fNormal3fVertex3fvSUN) wglGetProcAddress("glReplacementCodeuiTexCoord2fNormal3fVertex3fvSUN");
    glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fSUN = (mogl_function_glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fSUN) wglGetProcAddress("glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fSUN");
    glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fvSUN = (mogl_function_glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fvSUN) wglGetProcAddress("glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fvSUN");
    wglCreateBufferRegionARB = (mogl_function_wglCreateBufferRegionARB) wglGetProcAddress("wglCreateBufferRegionARB");
    wglDeleteBufferRegionARB = (mogl_function_wglDeleteBufferRegionARB) wglGetProcAddress("wglDeleteBufferRegionARB");
    wglSaveBufferRegionARB = (mogl_function_wglSaveBufferRegionARB) wglGetProcAddress("wglSaveBufferRegionARB");
    wglRestoreBufferRegionARB = (mogl_function_wglRestoreBufferRegionARB) wglGetProcAddress("wglRestoreBufferRegionARB");
    wglCreateContextAttribsARB = (mogl_function_wglCreateContextAttribsARB) wglGetProcAddress("wglCreateContextAttribsARB");
    wglGetExtensionsStringARB = (mogl_function_wglGetExtensionsStringARB) wglGetProcAddress("wglGetExtensionsStringARB");
    wglMakeContextCurrentARB = (mogl_function_wglMakeContextCurrentARB) wglGetProcAddress("wglMakeContextCurrentARB");
    wglGetCurrentReadDCARB = (mogl_function_wglGetCurrentReadDCARB) wglGetProcAddress("wglGetCurrentReadDCARB");
    wglCreatePbufferARB = (mogl_function_wglCreatePbufferARB) wglGetProcAddress("wglCreatePbufferARB");
    wglGetPbufferDCARB = (mogl_function_wglGetPbufferDCARB) wglGetProcAddress("wglGetPbufferDCARB");
    wglReleasePbufferDCARB = (mogl_function_wglReleasePbufferDCARB) wglGetProcAddress("wglReleasePbufferDCARB");
    wglDestroyPbufferARB = (mogl_function_wglDestroyPbufferARB) wglGetProcAddress("wglDestroyPbufferARB");
    wglQueryPbufferARB = (mogl_function_wglQueryPbufferARB) wglGetProcAddress("wglQueryPbufferARB");
    wglGetPixelFormatAttribivARB = (mogl_function_wglGetPixelFormatAttribivARB) wglGetProcAddress("wglGetPixelFormatAttribivARB");
    wglGetPixelFormatAttribfvARB = (mogl_function_wglGetPixelFormatAttribfvARB) wglGetProcAddress("wglGetPixelFormatAttribfvARB");
    wglChoosePixelFormatARB = (mogl_function_wglChoosePixelFormatARB) wglGetProcAddress("wglChoosePixelFormatARB");
    wglBindTexImageARB = (mogl_function_wglBindTexImageARB) wglGetProcAddress("wglBindTexImageARB");
    wglReleaseTexImageARB = (mogl_function_wglReleaseTexImageARB) wglGetProcAddress("wglReleaseTexImageARB");
    wglSetPbufferAttribARB = (mogl_function_wglSetPbufferAttribARB) wglGetProcAddress("wglSetPbufferAttribARB");
    wglSetStereoEmitterState3DL = (mogl_function_wglSetStereoEmitterState3DL) wglGetProcAddress("wglSetStereoEmitterState3DL");
    wglGetGPUIDsAMD = (mogl_function_wglGetGPUIDsAMD) wglGetProcAddress("wglGetGPUIDsAMD");
    wglGetGPUInfoAMD = (mogl_function_wglGetGPUInfoAMD) wglGetProcAddress("wglGetGPUInfoAMD");
    wglGetContextGPUIDAMD = (mogl_function_wglGetContextGPUIDAMD) wglGetProcAddress("wglGetContextGPUIDAMD");
    wglCreateAssociatedContextAMD = (mogl_function_wglCreateAssociatedContextAMD) wglGetProcAddress("wglCreateAssociatedContextAMD");
    wglCreateAssociatedContextAttribsAMD = (mogl_function_wglCreateAssociatedContextAttribsAMD) wglGetProcAddress("wglCreateAssociatedContextAttribsAMD");
    wglDeleteAssociatedContextAMD = (mogl_function_wglDeleteAssociatedContextAMD) wglGetProcAddress("wglDeleteAssociatedContextAMD");
    wglMakeAssociatedContextCurrentAMD = (mogl_function_wglMakeAssociatedContextCurrentAMD) wglGetProcAddress("wglMakeAssociatedContextCurrentAMD");
    wglGetCurrentAssociatedContextAMD = (mogl_function_wglGetCurrentAssociatedContextAMD) wglGetProcAddress("wglGetCurrentAssociatedContextAMD");
    wglBlitContextFramebufferAMD = (mogl_function_wglBlitContextFramebufferAMD) wglGetProcAddress("wglBlitContextFramebufferAMD");
    wglCreateDisplayColorTableEXT = (mogl_function_wglCreateDisplayColorTableEXT) wglGetProcAddress("wglCreateDisplayColorTableEXT");
    wglLoadDisplayColorTableEXT = (mogl_function_wglLoadDisplayColorTableEXT) wglGetProcAddress("wglLoadDisplayColorTableEXT");
    wglBindDisplayColorTableEXT = (mogl_function_wglBindDisplayColorTableEXT) wglGetProcAddress("wglBindDisplayColorTableEXT");
    wglDestroyDisplayColorTableEXT = (mogl_function_wglDestroyDisplayColorTableEXT) wglGetProcAddress("wglDestroyDisplayColorTableEXT");
    wglGetExtensionsStringEXT = (mogl_function_wglGetExtensionsStringEXT) wglGetProcAddress("wglGetExtensionsStringEXT");
    wglMakeContextCurrentEXT = (mogl_function_wglMakeContextCurrentEXT) wglGetProcAddress("wglMakeContextCurrentEXT");
    wglGetCurrentReadDCEXT = (mogl_function_wglGetCurrentReadDCEXT) wglGetProcAddress("wglGetCurrentReadDCEXT");
    wglCreatePbufferEXT = (mogl_function_wglCreatePbufferEXT) wglGetProcAddress("wglCreatePbufferEXT");
    wglGetPbufferDCEXT = (mogl_function_wglGetPbufferDCEXT) wglGetProcAddress("wglGetPbufferDCEXT");
    wglReleasePbufferDCEXT = (mogl_function_wglReleasePbufferDCEXT) wglGetProcAddress("wglReleasePbufferDCEXT");
    wglDestroyPbufferEXT = (mogl_function_wglDestroyPbufferEXT) wglGetProcAddress("wglDestroyPbufferEXT");
    wglQueryPbufferEXT = (mogl_function_wglQueryPbufferEXT) wglGetProcAddress("wglQueryPbufferEXT");
    wglGetPixelFormatAttribivEXT = (mogl_function_wglGetPixelFormatAttribivEXT) wglGetProcAddress("wglGetPixelFormatAttribivEXT");
    wglGetPixelFormatAttribfvEXT = (mogl_function_wglGetPixelFormatAttribfvEXT) wglGetProcAddress("wglGetPixelFormatAttribfvEXT");
    wglChoosePixelFormatEXT = (mogl_function_wglChoosePixelFormatEXT) wglGetProcAddress("wglChoosePixelFormatEXT");
    wglSwapIntervalEXT = (mogl_function_wglSwapIntervalEXT) wglGetProcAddress("wglSwapIntervalEXT");
    wglGetSwapIntervalEXT = (mogl_function_wglGetSwapIntervalEXT) wglGetProcAddress("wglGetSwapIntervalEXT");
    wglGetDigitalVideoParametersI3D = (mogl_function_wglGetDigitalVideoParametersI3D) wglGetProcAddress("wglGetDigitalVideoParametersI3D");
    wglSetDigitalVideoParametersI3D = (mogl_function_wglSetDigitalVideoParametersI3D) wglGetProcAddress("wglSetDigitalVideoParametersI3D");
    wglGetGammaTableParametersI3D = (mogl_function_wglGetGammaTableParametersI3D) wglGetProcAddress("wglGetGammaTableParametersI3D");
    wglSetGammaTableParametersI3D = (mogl_function_wglSetGammaTableParametersI3D) wglGetProcAddress("wglSetGammaTableParametersI3D");
    wglGetGammaTableI3D = (mogl_function_wglGetGammaTableI3D) wglGetProcAddress("wglGetGammaTableI3D");
    wglSetGammaTableI3D = (mogl_function_wglSetGammaTableI3D) wglGetProcAddress("wglSetGammaTableI3D");
    wglEnableGenlockI3D = (mogl_function_wglEnableGenlockI3D) wglGetProcAddress("wglEnableGenlockI3D");
    wglDisableGenlockI3D = (mogl_function_wglDisableGenlockI3D) wglGetProcAddress("wglDisableGenlockI3D");
    wglIsEnabledGenlockI3D = (mogl_function_wglIsEnabledGenlockI3D) wglGetProcAddress("wglIsEnabledGenlockI3D");
    wglGenlockSourceI3D = (mogl_function_wglGenlockSourceI3D) wglGetProcAddress("wglGenlockSourceI3D");
    wglGetGenlockSourceI3D = (mogl_function_wglGetGenlockSourceI3D) wglGetProcAddress("wglGetGenlockSourceI3D");
    wglGenlockSourceEdgeI3D = (mogl_function_wglGenlockSourceEdgeI3D) wglGetProcAddress("wglGenlockSourceEdgeI3D");
    wglGetGenlockSourceEdgeI3D = (mogl_function_wglGetGenlockSourceEdgeI3D) wglGetProcAddress("wglGetGenlockSourceEdgeI3D");
    wglGenlockSampleRateI3D = (mogl_function_wglGenlockSampleRateI3D) wglGetProcAddress("wglGenlockSampleRateI3D");
    wglGetGenlockSampleRateI3D = (mogl_function_wglGetGenlockSampleRateI3D) wglGetProcAddress("wglGetGenlockSampleRateI3D");
    wglGenlockSourceDelayI3D = (mogl_function_wglGenlockSourceDelayI3D) wglGetProcAddress("wglGenlockSourceDelayI3D");
    wglGetGenlockSourceDelayI3D = (mogl_function_wglGetGenlockSourceDelayI3D) wglGetProcAddress("wglGetGenlockSourceDelayI3D");
    wglQueryGenlockMaxSourceDelayI3D = (mogl_function_wglQueryGenlockMaxSourceDelayI3D) wglGetProcAddress("wglQueryGenlockMaxSourceDelayI3D");
    wglCreateImageBufferI3D = (mogl_function_wglCreateImageBufferI3D) wglGetProcAddress("wglCreateImageBufferI3D");
    wglDestroyImageBufferI3D = (mogl_function_wglDestroyImageBufferI3D) wglGetProcAddress("wglDestroyImageBufferI3D");
    wglAssociateImageBufferEventsI3D = (mogl_function_wglAssociateImageBufferEventsI3D) wglGetProcAddress("wglAssociateImageBufferEventsI3D");
    wglReleaseImageBufferEventsI3D = (mogl_function_wglReleaseImageBufferEventsI3D) wglGetProcAddress("wglReleaseImageBufferEventsI3D");
    wglEnableFrameLockI3D = (mogl_function_wglEnableFrameLockI3D) wglGetProcAddress("wglEnableFrameLockI3D");
    wglDisableFrameLockI3D = (mogl_function_wglDisableFrameLockI3D) wglGetProcAddress("wglDisableFrameLockI3D");
    wglIsEnabledFrameLockI3D = (mogl_function_wglIsEnabledFrameLockI3D) wglGetProcAddress("wglIsEnabledFrameLockI3D");
    wglQueryFrameLockMasterI3D = (mogl_function_wglQueryFrameLockMasterI3D) wglGetProcAddress("wglQueryFrameLockMasterI3D");
    wglGetFrameUsageI3D = (mogl_function_wglGetFrameUsageI3D) wglGetProcAddress("wglGetFrameUsageI3D");
    wglBeginFrameTrackingI3D = (mogl_function_wglBeginFrameTrackingI3D) wglGetProcAddress("wglBeginFrameTrackingI3D");
    wglEndFrameTrackingI3D = (mogl_function_wglEndFrameTrackingI3D) wglGetProcAddress("wglEndFrameTrackingI3D");
    wglQueryFrameTrackingI3D = (mogl_function_wglQueryFrameTrackingI3D) wglGetProcAddress("wglQueryFrameTrackingI3D");
    wglDXSetResourceShareHandleNV = (mogl_function_wglDXSetResourceShareHandleNV) wglGetProcAddress("wglDXSetResourceShareHandleNV");
    wglDXOpenDeviceNV = (mogl_function_wglDXOpenDeviceNV) wglGetProcAddress("wglDXOpenDeviceNV");
    wglDXCloseDeviceNV = (mogl_function_wglDXCloseDeviceNV) wglGetProcAddress("wglDXCloseDeviceNV");
    wglDXRegisterObjectNV = (mogl_function_wglDXRegisterObjectNV) wglGetProcAddress("wglDXRegisterObjectNV");
    wglDXUnregisterObjectNV = (mogl_function_wglDXUnregisterObjectNV) wglGetProcAddress("wglDXUnregisterObjectNV");
    wglDXObjectAccessNV = (mogl_function_wglDXObjectAccessNV) wglGetProcAddress("wglDXObjectAccessNV");
    wglDXLockObjectsNV = (mogl_function_wglDXLockObjectsNV) wglGetProcAddress("wglDXLockObjectsNV");
    wglDXUnlockObjectsNV = (mogl_function_wglDXUnlockObjectsNV) wglGetProcAddress("wglDXUnlockObjectsNV");
    wglCopyImageSubDataNV = (mogl_function_wglCopyImageSubDataNV) wglGetProcAddress("wglCopyImageSubDataNV");
    wglDelayBeforeSwapNV = (mogl_function_wglDelayBeforeSwapNV) wglGetProcAddress("wglDelayBeforeSwapNV");
    wglEnumGpusNV = (mogl_function_wglEnumGpusNV) wglGetProcAddress("wglEnumGpusNV");
    wglEnumGpuDevicesNV = (mogl_function_wglEnumGpuDevicesNV) wglGetProcAddress("wglEnumGpuDevicesNV");
    wglCreateAffinityDCNV = (mogl_function_wglCreateAffinityDCNV) wglGetProcAddress("wglCreateAffinityDCNV");
    wglEnumGpusFromAffinityDCNV = (mogl_function_wglEnumGpusFromAffinityDCNV) wglGetProcAddress("wglEnumGpusFromAffinityDCNV");
    wglDeleteDCNV = (mogl_function_wglDeleteDCNV) wglGetProcAddress("wglDeleteDCNV");
    wglEnumerateVideoDevicesNV = (mogl_function_wglEnumerateVideoDevicesNV) wglGetProcAddress("wglEnumerateVideoDevicesNV");
    wglBindVideoDeviceNV = (mogl_function_wglBindVideoDeviceNV) wglGetProcAddress("wglBindVideoDeviceNV");
    wglQueryCurrentContextNV = (mogl_function_wglQueryCurrentContextNV) wglGetProcAddress("wglQueryCurrentContextNV");
    wglJoinSwapGroupNV = (mogl_function_wglJoinSwapGroupNV) wglGetProcAddress("wglJoinSwapGroupNV");
    wglBindSwapBarrierNV = (mogl_function_wglBindSwapBarrierNV) wglGetProcAddress("wglBindSwapBarrierNV");
    wglQuerySwapGroupNV = (mogl_function_wglQuerySwapGroupNV) wglGetProcAddress("wglQuerySwapGroupNV");
    wglQueryMaxSwapGroupsNV = (mogl_function_wglQueryMaxSwapGroupsNV) wglGetProcAddress("wglQueryMaxSwapGroupsNV");
    wglQueryFrameCountNV = (mogl_function_wglQueryFrameCountNV) wglGetProcAddress("wglQueryFrameCountNV");
    wglResetFrameCountNV = (mogl_function_wglResetFrameCountNV) wglGetProcAddress("wglResetFrameCountNV");
    wglAllocateMemoryNV = (mogl_function_wglAllocateMemoryNV) wglGetProcAddress("wglAllocateMemoryNV");
    wglFreeMemoryNV = (mogl_function_wglFreeMemoryNV) wglGetProcAddress("wglFreeMemoryNV");
    wglBindVideoCaptureDeviceNV = (mogl_function_wglBindVideoCaptureDeviceNV) wglGetProcAddress("wglBindVideoCaptureDeviceNV");
    wglEnumerateVideoCaptureDevicesNV = (mogl_function_wglEnumerateVideoCaptureDevicesNV) wglGetProcAddress("wglEnumerateVideoCaptureDevicesNV");
    wglLockVideoCaptureDeviceNV = (mogl_function_wglLockVideoCaptureDeviceNV) wglGetProcAddress("wglLockVideoCaptureDeviceNV");
    wglQueryVideoCaptureDeviceNV = (mogl_function_wglQueryVideoCaptureDeviceNV) wglGetProcAddress("wglQueryVideoCaptureDeviceNV");
    wglReleaseVideoCaptureDeviceNV = (mogl_function_wglReleaseVideoCaptureDeviceNV) wglGetProcAddress("wglReleaseVideoCaptureDeviceNV");
    wglGetVideoDeviceNV = (mogl_function_wglGetVideoDeviceNV) wglGetProcAddress("wglGetVideoDeviceNV");
    wglReleaseVideoDeviceNV = (mogl_function_wglReleaseVideoDeviceNV) wglGetProcAddress("wglReleaseVideoDeviceNV");
    wglBindVideoImageNV = (mogl_function_wglBindVideoImageNV) wglGetProcAddress("wglBindVideoImageNV");
    wglReleaseVideoImageNV = (mogl_function_wglReleaseVideoImageNV) wglGetProcAddress("wglReleaseVideoImageNV");
    wglSendPbufferToVideoNV = (mogl_function_wglSendPbufferToVideoNV) wglGetProcAddress("wglSendPbufferToVideoNV");
    wglGetVideoInfoNV = (mogl_function_wglGetVideoInfoNV) wglGetProcAddress("wglGetVideoInfoNV");
    wglGetSyncValuesOML = (mogl_function_wglGetSyncValuesOML) wglGetProcAddress("wglGetSyncValuesOML");
    wglGetMscRateOML = (mogl_function_wglGetMscRateOML) wglGetProcAddress("wglGetMscRateOML");
    wglSwapBuffersMscOML = (mogl_function_wglSwapBuffersMscOML) wglGetProcAddress("wglSwapBuffersMscOML");
    wglSwapLayerBuffersMscOML = (mogl_function_wglSwapLayerBuffersMscOML) wglGetProcAddress("wglSwapLayerBuffersMscOML");
    wglWaitForMscOML = (mogl_function_wglWaitForMscOML) wglGetProcAddress("wglWaitForMscOML");
    wglWaitForSbcOML = (mogl_function_wglWaitForSbcOML) wglGetProcAddress("wglWaitForSbcOML");
}

#endif