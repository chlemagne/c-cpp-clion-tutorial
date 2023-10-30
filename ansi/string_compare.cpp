//
// Created by c.hernani on 30/10/2023.
//

#include "string_compare.hpp"

#define NULL_CHAR   '\0'
#define STRING_A    "abcdef"
#define STRING_B    "abcde"

namespace string_compare {
    /*
     * Return <0 if s<t,
     * Return 0  if s==t,
     * Return >0 if s>t
     *
     * ASCII Table: https://www.asciitable.com/
     */
    int strcmp(const char *s, const char *t) {
        for (; *s == *t; s++, t++)
            if (*s == NULL_CHAR)
                return 0;

        return *s - *t;
    }

    int main() {
        std::cout << strcmp(STRING_A, STRING_B);

        return 0;
    }
}
