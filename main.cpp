#include <iostream>
#include "ansi/char_echo.hpp"
#include "ansi/string_length.hpp"

#define DEMO 2

enum Demo {
    ANSI_CHAR_ECHO = 1,
    ANSI_STRING_LENGTH,
};

int main() {
    switch (DEMO) {
        case ANSI_CHAR_ECHO:
            char_echo::main();
            break;

        case ANSI_STRING_LENGTH:
            string_length::main();
            break;

        default:
            std::cout << "Hello, World!" << std::endl;
            break;
    }
    return 0;
}
