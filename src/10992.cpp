//
// Created by Kevin Choi on 2022/10/05.
//
#include <iostream>

int main(void) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n;
    std::cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n + i; j++) {
           if (j < n - i - 1) {
               std::cout << " ";
               continue;
           }

           if (i == n - 1 || j == n - i - 1 || j == n + i - 1) {
               std::cout << "*";
           } else {
               std::cout << " ";
           }
        }
        std::cout << "\n";
    }

    return 0;
}