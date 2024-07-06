@echo off

rem add embedded files
del build\embedded_files.rc > NUL 2> NUL
echo icon.ico ICON "%cd:\=/%/icon.ico" >> build\embedded_files.rc

if not exist build mkdir build

pushd build

rem build resource file
rc /nologo /fo embedded_files.res /r embedded_files.rc

popd