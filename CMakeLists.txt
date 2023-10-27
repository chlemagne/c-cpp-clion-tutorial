cmake_minimum_required(VERSION 3.26)
project(c_cpp_clion_tutorial)

set(CMAKE_CXX_STANDARD 20)

add_executable(c_cpp_clion_tutorial main.cpp
        ansi/char_echo.cpp
        ansi/char_echo.hpp)
