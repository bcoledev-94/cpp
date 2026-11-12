//
// Created by Brandon on 8/18/2026.
//
#include <bitset>
#include <cstdint>
#include <iostream>

void int_magic () {
    int num = 42;
    std::cout << num << " = " << std::bitset<8>(num) << '\n';
    num <<= 1;
    std::cout << num << " = " << std::bitset<8>(num) << '\n';
    num >>= 1;
    num >>= 1;
    std::cout << num << " = " << std::bitset<8>(num) << '\n';
    num <<= 2;
    std::cout << num << " = " << std::bitset<8>(num) << '\n';
}


void bool_magic () {
    bool num = true;
    std::cout << num << " = " << std::bitset<8>(num) << '\n';
    num <<= 1;
    std::cout << num << " = " << std::bitset<8>(num) << '\n';
}

void quiz_1 () {
    [[maybe_unused]] constexpr std::uint8_t option_viewed{ 0x01 };
    [[maybe_unused]] constexpr std::uint8_t option_edited{ 0x02 };
    [[maybe_unused]] constexpr std::uint8_t option_favorited{ 0x04 };
    [[maybe_unused]] constexpr std::uint8_t option_shared{ 0x08 };
    [[maybe_unused]] constexpr std::uint8_t option_deleted{ 0x10 };

    std::uint8_t myArticleFlags{ option_favorited };

    // Place all lines of code for the following quiz here
    // Add a line of code to set the article as viewed.
    myArticleFlags |= option_viewed;

    //Add a line of code to check if the article was deleted.
    if (myArticleFlags & option_deleted) {
        std::cout << "Article deleted\n";
    }

    /*
    myflags &= ~(option4 | option5); // turn options 4 and 5 off
    myflags &= ~option4 & ~option5; // turn options 4 and 5 off
     */

    // Add a line of code to clear the article as a favorite.
    myArticleFlags &= ~option_favorited;

    std::cout << std::bitset<8>{ myArticleFlags } << '\n';
}

int bit_value (int &num, int pow) {
    if (num >= pow) {
        num -= pow;
        return 1;
    }

    return 0;
}

void print_binary (int num) {
    std::cout << bit_value(num, 128);
    std::cout << bit_value(num, 64);
    std::cout << bit_value(num, 32);
    std::cout << bit_value(num, 16);
    std::cout << bit_value(num, 8);
    std::cout << bit_value(num, 4);
    std::cout << bit_value(num, 2);
    std::cout << bit_value(num, 1);
}


int main () {
    print_binary(266);
    //int_magic();
    return 0;
}
