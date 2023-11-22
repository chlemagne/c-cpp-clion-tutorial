//
// Created by c.hernani on 22/11/2023.
//

#include <iostream>
#include "overloaded_function.hpp"

namespace overloaded_function {
    // signature = name + (number and type of arguments)
    int greet(const char *name, const char *message) {
        std::cout << "(" << name << ") " << message << std::endl;
        return 0;
    }

    int greet(const char *message) {
        greet("Anonymous", message);
        return 0;
    }

    void sum(const int &a, const int &b, int &total) {
        total += a + b;
    }

    void sum(const int &a, const int &b, const int &c, int &total) {
        total += a + b + c;
    }

    int main() {
        greet("Hello, Pluto!");
        greet("Charlie", "Hello, Earth!");

        int total = 0;
        sum(1, 2, total);
        sum(3, 4, 5, total);
        std::cout << total;

        return 0;
    }
}