@echo off
pause
set /p var=Enter The Number Of Files:
for /l %%i in (1,1,%var%) do (
    md %%i
)
