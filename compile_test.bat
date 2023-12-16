@echo off

set source=%cd%\source\mo_string.h %cd%\source\mo_platform.h %cd%\source\mo_text_edit.h %cd%\source\mo_memory_arena.h %cd%\source\mo_gl.h
set includes=/I %cd%\lib
set options=/Dmos_implementation /Dmop_implementation /Dmote_implementation /Dmoma_implementation /Dmogl_implementation /nologo /Zi /Od /DEBUG %includes%

if not exist build mkdir build

pushd build

echo test C compilation
cl /c /TC %source% %options%
echo test C ui compilation
cl /c /TC %cd%\..\source\mo_ui.h %options% /Dmoui_implementation /Dmoui_debug
echo test C ui gl compilation
cl /c /TC %cd%\..\source\mo_ui.h %options% /Dmoui_implementation /Dmoui_debug /Dmoui_gl_implementation

echo test C++ compilation
cl /c /TP %source% %options%
echo test C ui compilation
cl /c /TP %cd%\..\source\mo_ui.h %options% /Dmoui_implementation /Dmoui_debug
echo test C ui gl compilation
cl /c /TP %cd%\..\source\mo_ui.h %options% /Dmoui_implementation /Dmoui_debug /Dmoui_gl_implementation

popd

rem copy build\%name%.* %name%.* >NUL