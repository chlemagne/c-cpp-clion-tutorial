//
// Created by c.hernani on 22/11/2023.
//

#ifndef C_CPP_CLION_TUTORIAL_OVERLOADED_FUNCTION_HPP
#define C_CPP_CLION_TUTORIAL_OVERLOADED_FUNCTION_HPP

#include <string>

namespace overloaded_function {
    int main();

    int greet(const char *message);

    int greet(const char *name, const char *message);

    void sum(const int &a, const int &b, int &total);

    void sum(const int &a, const int &b, const int &c, int &total);
}

#endif //C_CPP_CLION_TUTORIAL_OVERLOADED_FUNCTION_HPP
