// This program prints the C++ language standard your compiler is currently using
// Freely redistributable, courtesy of learncpp.com (https://www.learncpp.com/cpp-tutorial/what-language-standard-is-my-compiler-using/)

#include <iostream>
#include "utils/cmath/cmath.h"

int main()
{
    int x {add(1, 2)};
    std::cout << x << std::endl;

    return 0;
}