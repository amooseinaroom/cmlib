@echo off

set source=%cd%\source\mo_string.h %cd%\source\mo_platform.h
set includes=/I %cd%\lib
set options=%source% /Dmos_implementation /Dmop_implementation /nologo /Zi /Od /DEBUG %includes%

if not exist build mkdir build

pushd build

rem test C compilation
cl /c /TC %options%

rem test C++ compilation
cl /c /TP %options%

popd

rem copy build\%name%.* %name%.* >NUL