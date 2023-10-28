//
// Created by c.hernani on 28/10/2023.
//

#include "string_concatenate.hpp"

#define SIZE        32
#define STRING_A    "Hello,"
#define STRING_B    " world!"

namespace string_concatenate {
    void strcat(char *s, const char *t) {
        // find the end of s
        // the while-loop condition below is equivalent to ``*s != \0``; same as the next while-loop
        while (*s)
            s++;

        // copy t
        while ((*s++ = *t++));
    }

    int main() {
        char s[SIZE] = STRING_A;

        strcat(s, STRING_B);

        std::cout << s << std::endl;

        return 0;
    }
}
