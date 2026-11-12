//
// Created by Brandon on 8/3/2026.
//


#include <iostream>
#include <string>
#include <windows.h>

class Account {

private:
    int id;
    std::string name;

public:
    Account(const int u_id, std::string f_name)
        : id(u_id), name{std::move(f_name)}
    {

    }
    
    void fetchUserInfo () {
        std::cout << id << std::endl;
        std::cout << name << std::endl;
    }
};



int main () {
    Account account{1, "Brandon"};
    account.fetchUserInfo();
    std::cout << "Cole" << std::flush;

    int x {89};
    std::cout << '\n' << static_cast<char>(x);
    return 0;
}