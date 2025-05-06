@echo off
setlocal enabledelayedexpansion

rem Save current script directory
set "SCRIPT_DIR=%~dp0"
cd /d "%SCRIPT_DIR%"

rem Ask and run JetBrains install
if exist "jetbrains\install.bat" (
    choice /M "Run JetBrains install script?"
    if errorlevel 1 (
        pushd "jetbrains"
        call install.bat
        popd
    )
)

rem Ask and run homedir install
if exist "homedir\install.bat" (
    choice /M "Run Homedir install script?"
    if errorlevel 1 (
        pushd "homedir"
        call install.bat
        popd
    )
)

echo All done.
