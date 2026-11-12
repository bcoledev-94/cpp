#include <iostream>
#include <format>

//
// Created by Brandon on 7/20/2026.
//

static void first_program () {
    int x{};
    std::cout << "Enter an integer: ";
    std::cin >> x;
    std::cout << "Double that number is: " << x * 2;
}


static void var_init_test () {
    int x, y, z;
    std::cin >> x >> y >> z;
    std::cout << "You entered " << x << y << z << '\n';
}

static void iostream_test () {
    std::cout << "Enter a number: "; // ask user for a number
    int x{}; // define variable x to hold user input
    std::cin >> x; // get number from keyboard and store it in variable x

    std::cout << "You entered " << x << '\n';
}

static void brackets () {
    int x {}, y {};

    std::cout << std::format("x = {}, y = {}\n", x, y);
}

static void size_of_x () {
    std::cout << "Size of int: " << sizeof(int) << '\n';
    std::cout << "Size of void: " << sizeof(void) << '\n';
}

int main () {
    double science {102123123e3};
    std::cout << "Hello World!" << std::endl;

    //brackets ();
    //iostream_test();
    //var_init_test();
    //first_program();
    size_of_x();
    int x {21'112};
    std::cout << science << '\n';
    return 0;
}
