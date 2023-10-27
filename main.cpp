#include <iostream>
#include "ansi/char_echo.hpp"

enum Demo {
    ANSI_CHAR_ECHO = 1,
};

int main() {
    switch (1) {
        case ANSI_CHAR_ECHO:
            char_echo::main();
            break;

        default:
            std::cout << "Hello, World!" << std::endl;
            break;
    }
    return 0;
}
