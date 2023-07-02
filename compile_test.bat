@echo off

set source=%cd%\source\cm_string.h
set includes=/I %cd%\lib

if not exist build mkdir build

pushd build

rem test C compilation
cl /c /TC %source% /Dstring_implementation /nologo /Zi /Od /DEBUG %includes%

rem test C++ compilation
cl /c /TP %source% /Dstring_implementation /nologo /Zi /Od /DEBUG %includes%

popd

rem copy build\%name%.* %name%.* >NUL