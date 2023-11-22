cmake_minimum_required(VERSION 3.26)
project(c_cpp_clion_tutorial)

set(CMAKE_CXX_STANDARD 20)

add_executable(c_cpp_clion_tutorial main.cpp
        ansi/char_echo.cpp
        ansi/char_echo.hpp
        ansi/string_length.cpp
        ansi/string_length.hpp
        ansi/string_concatenate.cpp
        ansi/string_concatenate.hpp
        ansi/string_array_print.cpp
        ansi/string_array_print.hpp
        ansi/string_compare.cpp
        ansi/string_compare.hpp
        modern/static_casting.cpp
        modern/static_casting.hpp
        modern/range_based_loop.cpp
        modern/range_based_loop.hpp
        modern/overloaded_function.cpp
        modern/overloaded_function.hpp)
