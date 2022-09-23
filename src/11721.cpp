//
// Created by Kevin Choi on 2022/09/16.
//
#include <iostream>

int main(void) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    std::string str;
    std::cin >> str;

    for (int i = 0; i < str.length(); i++) {
        std::cout << str[i] ;
        if ((i+1) % 10 == 0) {
            std::cout << "\n";
        }
    }

    return 0;
}
