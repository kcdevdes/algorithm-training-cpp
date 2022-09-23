//
// Created by Kevin Choi on 2022/09/16.
//

#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;

    for (int i = 0; i < T; i++){
        int a, b;
        cin >> a >> b;
        cout << "Case #" << i + 1 << ": " << a+b << "\n";
    }

    return 0;
}