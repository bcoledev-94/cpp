//
// Created by Brandon on 8/4/2026.
//



#include <iostream>
#include <vector>
#include <bitset>


int implicit_conversion(int x) {
    return x;
}

void statis_cast_1 () {
    char ch {};
    std::cout << "Enter a single character: ";
    std::cin >> ch;
    std::cout << "You entered '" << ch << "', which has ASCII code "
    << implicit_conversion(ch) << '.' << '\n'; '.';

}

float add(float n1, float n2) {
    return n1 + n2;
}

float subtract(float n1, float n2) {
    return n1 - n2;
}

float divide(float n1, float n2) {
    return n1 / n2;
}

float multiply(float n1, float n2) {
    return n1 * n2;
}

float choice (char ch, float n1, float n2) {
    if (ch == '+') {
        return add(n1, n2);
    }

    if (ch == '-') {
        return subtract(n1, n2);
    }

    if (ch == '/') {
        return divide(n1, n2);
    }

    return multiply(n1, n2);

}


void quiz_4_2 () {
    float x, y;
    std::cout << "Enter 2 floating point numbers. \n";
    std::cout << "1:\t";
    std::cin >> x;
    std::cout << "2:\t";
    std::cin >> y;

    std::cout << "Enter a mathematical expression (+ - * /): ";
    char expression;
    std::cin >> expression;
    std::cout << choice(expression, x, y);
}


double prompt_height() {
    std::cout << "Enter height: ";
    double h {};
    std::cin >> h;

    return h;
}

double calc_height (int seconds, double height) {
    constexpr double gravity {9.8};           // gravity (9.8 m/s2)
    double dist {};
    dist = (gravity * (seconds * seconds)) / 2.0;

    if (height > dist) {
        return height - dist;
    }

    return 0;
}

void quiz_4_3 () {
    /*

    Write a short program to simulate a ball being dropped off of a tower.
    To start, the user should be asked for the height of the tower in meters.
    Assume normal gravity (9.8 m/s2), and that the ball has no initial velocity
    (the ball is not moving to start). Have the program output the height of the ball
    above the ground after 0, 1, 2, 3, 4, and 5 seconds. The ball should not go
    underneath the ground (height 0).

    Use a function to calculate the height of the ball after x seconds.
    The function can calculate how far the ball has fallen after
    x seconds using the following formula: distance fallen = gravity_constant * x_seconds2 / 2

    */
    const double height = prompt_height();

    for (int i {0}; i < 6; i++) {
        std::cout << "Height after " << i << " seconds " << calc_height(i, height) << '\n';
    }

}

constexpr bool isEven (int n) {
    return (n % 2 == 0);
}

void quiz_6_2 () {
    /*
     *Write a program that asks the user to input an integer, and tells the user whether the number is even or odd.
     *Write a constexpr function called isEven() that returns true if an integer passed to it is even, and false otherwise.
     *Use the remainder operator to test whether the integer parameter is even. Make sure isEven() works with both positive and negative numbers.
     */
    isEven (1);
}


void bit_magic () {
    int num = 42;
    std::cout << num << " = " << std::bitset<8>(num) << '\n';
}


int main () {
    bit_magic();
    //statis_cast_1();
    //quiz_4_2();
    //quiz_4_3();
}