#include <iostream>
#include "ansi/char_echo.hpp"
#include "ansi/string_length.hpp"
#include "ansi/string_concatenate.hpp"
#include "ansi/string_array_print.hpp"
#include "ansi/string_compare.hpp"
#include "modern/static_casting.hpp"
#include "modern/range_based_loop.hpp"
#include "modern/overloaded_function.hpp"

#define DEMO 8

enum Demo {
    ANSI_CHAR_ECHO = 1,
    ANSI_STRING_LENGTH,
    ANSI_STRING_CONCATENATE,
    ANSI_STRING_ARRAY_PRINT,
    ANSI_STRING_COMPARE,
    MODERN_STATIC_CASTING,
    MODERN_RANGE_BASED_LOOP,
    MODERN_OVERLOADED_FUNCTIONS,
};

int main() {
    int status;
    switch (DEMO) {
        case ANSI_CHAR_ECHO:
            status = char_echo::main();
            break;

        case ANSI_STRING_LENGTH:
            status = string_length::main();
            break;

        case ANSI_STRING_CONCATENATE:
            status = string_concatenate::main();
            break;

        case ANSI_STRING_ARRAY_PRINT:
            status = string_array_print::main();
            break;

        case ANSI_STRING_COMPARE:
            status = string_compare::main();
            break;

        case MODERN_STATIC_CASTING:
            status = static_casting::main();
            break;

        case MODERN_RANGE_BASED_LOOP:
            status = range_based_loop::main();
            break;

        case MODERN_OVERLOADED_FUNCTIONS:
            status = overloaded_function::main();
            break;

        default:
            std::cout << "Hello, World!" << std::endl;
            status = 0;
            break;
    }
    return status;
}
