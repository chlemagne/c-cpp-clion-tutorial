#include <iostream>
#include "ansi/char_echo.hpp"
#include "ansi/string_length.hpp"
#include "ansi/string_concatenate.hpp"
#include "ansi/string_array_print.hpp"
#include "ansi/string_compare.hpp"

#define DEMO 5

enum Demo {
    ANSI_CHAR_ECHO = 1,
    ANSI_STRING_LENGTH,
    ANSI_STRING_CONCATENATE,
    ANSI_STRING_ARRAY_PRINT,
    ANSI_STRING_COMPARE,
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

        default:
            std::cout << "Hello, World!" << std::endl;
            status = 0;
            break;
    }
    return status;
}
