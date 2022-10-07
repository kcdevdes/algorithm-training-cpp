//
// Created by Kevin Choi on 2022/10/06.
//

#include <iostream>

int main(void) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n;
    int arr[1000000];
    std::cin >> n;

    for (int i = 2; i <= n; i++) {
        arr[i] = arr[i - 1] + 1;

        if (i % 2 == 0) {
           arr[i] = std::min(arr[i], arr[i/2] + 1);
        }

        if (i % 3 == 0) {
            arr[i] = std::min(arr[i], arr[i/3] + 1);
        }

    }

    std::cout << arr[n] << '\n';
    return 0;
}
