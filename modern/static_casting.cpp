//
// Created by c.hernani on 21/11/2023.
//

#include <iostream>
#include "static_casting.hpp"

namespace static_casting {
    int main() {
        int x = 1;
        double y = 2.0;

        // ``static_cast`` operator catches the error at compile time
        int z = x + static_cast<int>(y);
        std::cout << z;

        return 0;
    }
}
