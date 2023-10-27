//
// Created by c.hernani on 28/10/2023.
//

#include "string_length.hpp"

#define NULL_CHAR '\0'
#define DEMO_STRING "Hello, " "world!"

namespace string_length {
    int strlen(const char *s) {
        int len;
        for (len = 0; *s != NULL_CHAR; len++)
            s++;

        return len;
    }

    int main() {
        int len;
        len = strlen(DEMO_STRING);
        std::cout << len << std::endl;

        return 0;
    }
}
