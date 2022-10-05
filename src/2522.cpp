//
// Created by Kevin Choi on 2022/10/04.
//
#include <iostream>

int main(void) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n;
    std::cin >> n;
    int cnt = n - 1;
    bool ascending = true;

    for (int i = 0; i < (2 * n); i++) {
        for (int j = 0; j < cnt; j++) {
            std::cout << " ";
        }
        for (int j = 0; j < n - cnt; j++) {
            std::cout << "*";
        }

        std::cout << '\n';
        if (cnt == 0 || !ascending) {
            ascending = false;
            cnt++;
            continue;
        }
        cnt--;
    }
    return 0;
}