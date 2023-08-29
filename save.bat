@echo off

set question_number=%1
set folder_name=%2

set file_name=boj%question_number%

echo.

IF NOT DEFINED question_number (
    echo        -------------------------------------
    echo         **Question Number** is not defined
    echo        -------------------------------------

) ELSE (
    type main.cpp > %file_name%.cpp
)

echo.

IF NOT DEFINED folder_name (
    echo        -------------------------------------
    echo         **Folder Number** is not defined
    echo        -------------------------------------

) ELSE (
    move %file_name%.cpp 0x%folder_name%
)