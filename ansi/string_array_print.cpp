//
// Created by c.hernani on 28/10/2023.
//

#include "string_array_print.hpp"

namespace string_array_print {
    void print_string(const char *s) {
        while (*s)
            std::cout << *s++;

        std::cout << std::endl;
    }

    void print_strings(int argc, const char *argv[]) {
        for (int i = 0; i < argc; i++)
            print_string(argv[i]);
    }

    int main() {
        const int len = 5;
        const char *s[len] = {
                "Apple",
                "Banana",
                "Cabbage",
                "Eggplant",
                "Green Beans"
        };

        print_strings(len, s);

        return 0;
    }
}
