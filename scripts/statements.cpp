//
// Created by Brandon on 9/21/2026.
//


#include <iostream>
#include <string>

/*
* Question #1
* Write a function called calculate() that takes two integers and a char representing one of
* the following mathematical operations: +, -, *, /, or % (remainder).
* Use a switch statement to perform the appropriate mathematical operation on the integers,
* and return the result. If an invalid operator is passed into the function,
* the function should print an error message. For the division operator,
* do an integer division, and don’t worry about divide by zero.
 */

void goto_test (int x) {
    faggot:
        std::cout << "Daniel is also a Faggot\n";

    std::cout << "Daniel Gase has AIDS " << '\n';

    if (x == 1) {
        std::cout << x;
    }

    else {
        goto faggot;
    }

}
void calculate(int x, int y, char c)
{
    switch (c)
    {
        case '+':
            std::cout << "x + y = " << x + y << '\n';
            break;

        case '-':
            std::cout << "x - y = " << x - y << '\n';
            break;

        case '*':
            std::cout << "x * y = " << x * y << '\n';
            break;

        case '/':
            std::cout << "x / y = " << x / y << '\n';
            break;

        case '%':
            std::cout << "x % y = " << x % y << '\n';
            break;

        default:
            std::cout << "Unknown operator given...\n";
    }
}


void switch_str (int num) {
    switch (num) {
        case 1:
            std::cout << "Suck Me Dry\n";
            [[fallthrough]];
        case 2:
            std::cout << "Imma bout to bust\n";
        default:
            std::cout << "I nutted.\n";
    }
}
int switches (int choice) {
    switch (choice) {
        case 0:
            return 100;
        case 1:
            return 101;
        case 2:
            return 102;
        default:
            return 69;
    }
}



int main() {
    goto_test(1);
}