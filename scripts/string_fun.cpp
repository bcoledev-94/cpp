//
// Created by Brandon on 8/7/2026.
//

#include <cstdint>
#include <iostream>
#include <string>

std::string getName () {
    std::string name {};
    std::getline(std::cin >> std::ws, name);
    return name;
}

void q_1 () {
    std::string_view name {"Brandon"};
    uint32_t age = 32;
    std::cout << "Your name + age = " << name.length() + age;
}

int main () {
    q_1();
    // const std::string name {getName()};
    // std::cout << name << '\n';
}