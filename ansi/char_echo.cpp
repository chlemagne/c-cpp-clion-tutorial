//
// Created by c.hernani on 28/10/2023.
//

#include "char_echo.hpp"

#define TERMINATING_CHAR '0'

namespace char_echo {
    char getchar() {
        char c;
        std::cin >> c;
        return c;
    }

    int main() {
        std::cout << "Enter any character to echo. Enter '0' to terminate." << std::endl;

        char c;
        while ((c = getchar()) != TERMINATING_CHAR)
            std::cout << c << std::endl;

        return 0;
    }
}
