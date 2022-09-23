#include <iostream>

int main (void) {

    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int month_days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    std::string weekdays[] = {"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};

    int x, y;
    std::cin >> x >> y;

    int dates = y; // day
    for (int i = 0; i < x - 1; i++) {
        dates += month_days[i]; // month
    }

    int result = dates % 7;

    std::cout << weekdays[result] << std::endl;

    return 0;
}