//
// Created by Brandon on 9/1/2026.
//

#include <iostream>

constexpr int x {100};

static void scope_that_shit () {
    static int x {};
    std::cout << x << std::endl;
    ++x;
}

int main () {
    constexpr int y {x};
    for (int i = 1; i <= 10; ++i) {
        scope_that_shit();
    }

    std::cout << y << std::endl;
}