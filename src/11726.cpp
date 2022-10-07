//
// Created by Kevin Choi on 2022/10/06.
//
#include <iostream>

int main(void) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n;
    long count[1000];

    count [0] = 1; // first element
    count [1] = 1; // second element

    std::cin >> n;

    for (int i = 2; i <= n; i++) {
        count[i] = (count[i-1] + count[i-2]) % 10007;
    }

    std::cout << count[n] << "\n";

    return 0;
}