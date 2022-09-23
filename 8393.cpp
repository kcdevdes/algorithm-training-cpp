//
// Created by Kevin Choi on 2022/09/19.
//
#include <iostream>
#include <string>

int main(void) {
   std::ios::sync_with_stdio(false);
   std::cin.tie(NULL);

   int n;
   std::cin >> n;

   int result = (1 + n) * n / 2;

   std::cout << result << std::endl;

   return 0;
}
