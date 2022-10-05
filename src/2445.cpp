//
// Created by Kevin Choi on 2022/10/04.
//
#include <iostream>

int main(void) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n, cnt = 1;
    bool ascending = true;
    std::cin >> n;

    for (int i = 0; i < 2 * n; i++) {
        for (int j = 0; j < cnt; j++) {
            std::cout << "*";
        }
        for (int j = 0; j < (2 * n) - (cnt * 2); j++) {
            std::cout << " ";
        }
        for (int j = 0; j < cnt; j++) {
            std::cout << "*";
        }
        std::cout << "\n";
        if (cnt == n || !ascending) {
            ascending = false;
            cnt--;
        } else {
            cnt++;
        }
    }

    return 0;
}