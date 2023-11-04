@echo off
set 
set "folder_path=C:\Users\Hatemmousa\Pictures\New"

:select_image
REM Get a random image from the folder
setlocal enabledelayedexpansion
for /f "tokens=*" %%i in ('dir /b "%folder_path%\*.jpg" "%folder_path%\*.png" "%folder_path%\*.jpeg" 2^>nul ^|find /c /v ""') do set count_images=%%i

set /a "rand=(%random% %% %count_images%) + 1"
set i=0

for /r "%folder_path%" %%a in (*.jpg *.png *.jpeg) do (
    set /a i+=1
    if !i! equ %rand% (
        set "image_file=%%a"
        goto :set_wallpaper_command
    )
)

goto :select_image

:set_wallpaper_command
REM Set the selected image as the desktop wallpaper
reg add "HKCU\Control Panel\Desktop" /v Wallpaper /t REG_SZ /d "%image_file%" /f >nul
RUNDLL32.EXE user32.dll,UpdatePerUserSystemParameters >nul

exit