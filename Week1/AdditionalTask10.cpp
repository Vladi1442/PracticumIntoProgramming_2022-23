#include <iostream>

int main() {
    // Ќапишете програма, ко€то размен€ стойностите на две числови променливи.

    int x1, y1;
    std::cout << "Enter two numbers: ";
    std::cin >> x1 >> y1;

    std::cout << "Before swapping numbers: ";
    std::cout << "x1 = " << x1 << ", " << "x2 = " << x2 << std::endl;

    int help = x1;
    x1 = y1;
    y1 = help;

    std::cout << "Before swapping numbers: ";
    std::cout << "x1 = " << x1 << ", " << "x2 = " << x2 << std::endl;

	return 0;
}