#include <iostream>

int main() {
    // Да се напише програма, която изчислява периметъра и лицето на правоъгълник със страни 5,4 и 7,9.

    int x, y;
    std::cout << "Enter two sides of ractangle ";
    std::cin >> x >> y;

    int perimeter = 2 * x + 2 * y;
    int area = x * y;

    std::cout << "Perimeter: " << perimeter << std::endl;
    std::cout << "Area: " << area << std::endl;

	return 0;
}