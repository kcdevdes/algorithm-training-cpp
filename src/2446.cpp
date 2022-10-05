//
// Created by Kevin Choi on 2022/10/04.
//
#include <iostream>

int main(void) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n, cnt = 0;
    std::cin >> n;
    bool ascending = true;

    for (int i = 0; i < 2 * n - 1; i++) {
        for (int j = 0; j < cnt; j++) {
            std::cout << " ";
        }
        for (int j = 0; j < (2 * n - 1) - (2 * cnt); j++) {
            std::cout << "*";
        }
        std::cout << "\n";
        if (cnt == n - 1 || !ascending) {
            ascending = false;
            cnt--;
            continue;
        }
        cnt++;
    }

    return 0;
}