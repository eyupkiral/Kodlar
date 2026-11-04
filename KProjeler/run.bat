@echo off
color 0A
echo Derleniyor..
gcc main.c matislem.c -o main

if %errorlevel% == 0 (
    echo.
    echo [BASARILI] Program calistiriliyor:
    echo -----------------------------------
    main.exe
) else (
    echo.
    echo [HATA] Derleme basarisiz oldu! Kodlarini kontrol et.
)
echo.
echo -----------------------------------
pause