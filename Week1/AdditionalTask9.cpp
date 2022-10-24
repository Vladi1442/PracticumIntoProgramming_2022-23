#include <iostream>

int main() {

    // Да се въведат от конзолата коефициенти за квадратното уравнение ax2 + bx + c. Да се намерят корените на уравнението.
    // Mоже да се използва(math.h) sqrt

    double a2, b2, c2;
    std::cin >> a2 >> b2 >> c2;

    if (a2 == 0) {
        if (b2 != 0 && c2 != 0) {
            std::cout << "x = " << -c2 / b2 << std::endl;
        }
        else if (b2 == 0 && c2 == 0) {
            std::cout << "NO" << std::endl;
        }
        else {
            std::cout << "INF" << std::endl;
        }
    }
    else {
        double D = (b2 * b2 - 4 * a2 * c2);
        double x1, x2;
        if (D > 0) {
            std::cout << x1 << " = " << (-b2 * sqrt(D)) / (2 * a2) << std::endl;
            std::cout << x1 << " = " << (b2 * sqrt(D)) / (2 * a2) << std::endl;
        }
        else if (D == 0) {
            std::cout << "x1 = x2 = " << -b2 / 2 * a2 << std::endl;
        }
        else {
            std::cout << "No solution" << std::endl;
        }
    }

	return 0;
}