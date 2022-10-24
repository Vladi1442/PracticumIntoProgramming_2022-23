#include <iostream>

int main() {
    // Напишете програма, която намира минималното (максималното) от две цели числа.

    int x2, y2;
    std::cin >> x2 >> y2;

    int min;
    int max;

    if (x2 < y2) {
        min = x2;
    }
    else {
        min = y2;
    }

    if (x2 > y2) {
        max = x2;
    }
    else {
        max = y2;
    }

    std::cout << "Min: " << min << std::endl;
    std::cout << "Max: " << max << std::endl;


	return 0;
}