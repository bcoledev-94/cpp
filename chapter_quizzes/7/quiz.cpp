//
// Created by Brandon on 9/11/2026.
//

#include <iostream>

#include "constants.hpp"

void q1 () {
    /*
     * Write a file named constants.h that makes the
     * following program run. If your compiler is C++17 capable,
     * use an inline constexpr variable. Otherwise, use a normal
     * constexpr variable. maxClassSize should have value 35.
     */
    std::cout << constants::maxClassSize << std::endl;
}

int accumulate (int x) {
    static int num {};
    num += x;
    return num;
}

void q2 () {
    /*
     *Write a function int accumulate(int x).
     *This function should return the sum of all of the values of x
     *that have been passed to this function.
     */
    std::cout << accumulate(4) << '\n'; // prints 4
    std::cout << accumulate(3) << '\n'; // prints 7
    std::cout << accumulate(2) << '\n'; // prints 9
    std::cout << accumulate(1) << '\n'; // prints 10
}




int main () {
    q1();
    q2 ();
    return 0;
}