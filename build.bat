@echo off

g++ -std=c++17 src/main.cpp -o jogo ^
-I SFML/include ^
-L SFML/lib ^
-lsfml-graphics ^
-lsfml-window ^
-lsfml-system

if %errorlevel% neq 0 (
echo Erro na compilacao
pause
exit /b
)

jogo.exe

pause
