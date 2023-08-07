@echo off

set name="gl_bindings_generator"
set source=%cd%\source\mo_gl_bindings_generator.c
set includes=/I %cd%\source
set options=%source% /nologo /Zi /Od /DEBUG %includes%

if not exist build mkdir build

pushd build

rem C compilation
cl /Fe%name% /TC %options%

popd

copy build\%name%.* %name%.* >NUL