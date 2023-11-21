//
// Created by c.hernani on 21/11/2023.
//

#include <iostream>
#include "range_based_loop.hpp"

namespace range_based_loop {
    int main() {
        int numbers[] = {1, 2, 3, 4, 5};

        // calculate dynamically the size of the array
        const int size = sizeof(numbers) / sizeof(int);
        for (int i = 0; i < size; i++)
            std::cout << numbers[i];

        std::cout << std::endl;

        // use range-based loop
        for (int number: numbers)
            std::cout << number;

        return 0;
    }
}
