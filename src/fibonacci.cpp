//
// Created by Kevin Choi on 2022/10/06.
//
#include <iostream>

int main(void) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n;
    int fib[100000];
    fib [0] = 1; // first element
    fib [1] = 1; // second element

    std::cin >> n;

    for (int i = 2; i < n; i++) {
       fib[i] = fib[i-1] + fib[i-2];
       std::cout << fib[i] << '\n';
    }

    std::cout << fib[n - 1] << "\n";
    return 0;
}
