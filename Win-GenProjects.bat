@echo off
echo Generating Visual Studio 2022 solution...
echo.

if exist vendor\bin\premake\premake5.exe (
    call vendor\bin\premake\premake5.exe vs2022
) else if exist premake5.exe (
    call premake5.exe vs2022
) else (
    echo ERROR: Could not find premake5.exe
    echo Please download premake5 from https://premake.github.io/download.html
    echo and place it in the root directory or vendor\bin\premake\ folder
)

echo.
echo Done!
PAUSE
