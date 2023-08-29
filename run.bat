@echo off

set file_name=%1

IF NOT DEFINED file_name (set file_name=main)

IF EXIST *.exe (del *.exe)

g++ -std=c++17 -Wall -Werror -Wunused -O2 %file_name%.cpp -o %file_name%.exe

echo.

    echo         --------------------------------------------

IF EXIST %file_name%.exe (
    echo          Running %file_name%.exe...
    echo         -------------------------------------------- & echo.
    %file_name%.exe
) ELSE (
    echo          Failed to generate %file_name%.exe...
    echo         -------------------------------------------- & echo.
)