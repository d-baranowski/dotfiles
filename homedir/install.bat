@echo off
setlocal enabledelayedexpansion

set "SOURCE_DIR=%CD%"
set "TARGET_DIR=%USERPROFILE%"
set "BACKUP_DIR=%USERPROFILE%\Desktop\dotfile_backups"

if not exist "%BACKUP_DIR%" (
    mkdir "%BACKUP_DIR%"
)

rem Get timestamp in format YYYYMMDD_HHMMSS
for /f "tokens=1-4 delims=/ " %%a in ("%date%") do (
    set "DATE=%%d%%b%%c"
)
for /f "tokens=1-2 delims=: " %%x in ("%time%") do (
    set "TIME=%%x%%y"
)
set "TIMESTAMP=%DATE%_%TIME%"

for %%F in (%SOURCE_DIR%\.*) do (
    set "FILENAME=%%~nxF"
    set "SRC=%%F"
    set "DST=%TARGET_DIR%\!FILENAME!"
    if exist "!DST!" (
        choice /M "File !DST! exists. Overwrite?"
        if errorlevel 2 (
            echo Skipping !FILENAME!
            continue
        )
        set "BACKUP=!BACKUP_DIR!\!FILENAME!_backup_!TIMESTAMP!"
        copy /Y "!DST!" "!BACKUP!" >nul
        echo Backed up !DST! to !BACKUP!
    )
    copy /Y "!SRC!" "!DST!" >nul
    echo Installed !FILENAME!
)

echo Done.
