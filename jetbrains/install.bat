@echo off
setlocal enabledelayedexpansion

set "KEYMAP_FILE=oryx_keymap_windows.xml"
set "APPDATA_JB=%APPDATA%\JetBrains"
set "BACKUP_DIR=%USERPROFILE%\Desktop\keymap_backups"

if not exist "%KEYMAP_FILE%" (
    echo Keymap file "%KEYMAP_FILE%" not found.
    exit /b 1
)

if not exist "%BACKUP_DIR%" (
    mkdir "%BACKUP_DIR%"
)

rem Get timestamp
for /f "tokens=1-4 delims=/ " %%a in ("%date%") do (
    set "DATE=%%d%%b%%c"
)
for /f "tokens=1-2 delims=: " %%x in ("%time%") do (
    set "TIME=%%x%%y"
)
set "TIMESTAMP=%DATE%_%TIME%"

for /d %%D in ("%APPDATA_JB%\*") do (
    set "KEYMAPS_DIR=%%D\keymaps"
    if not exist "!KEYMAPS_DIR!" (
        mkdir "!KEYMAPS_DIR!"
    )
    set "DEST_FILE=!KEYMAPS_DIR!\%KEYMAP_FILE%"
    if exist "!DEST_FILE!" (
        choice /M "File !DEST_FILE! exists. Overwrite?"
        if errorlevel 2 (
            echo Skipping %%D
            continue
        )
        set "BACKUP_FILE=%BACKUP_DIR%\%%~nD_!KEYMAP_FILE!_!TIMESTAMP!"
        copy /Y "!DEST_FILE!" "!BACKUP_FILE!" >nul
        echo Backed up !DEST_FILE! to !BACKUP_FILE!
    )
    copy /Y "%KEYMAP_FILE%" "!KEYMAPS_DIR!\" >nul
    echo Installed to %%D
)

echo Done.
