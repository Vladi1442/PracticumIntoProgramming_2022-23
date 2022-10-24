#include <iostream>

int main() {

    // Да се напише програма, която чете от конзолата 2 числа и отпечатва остатъка и частното при делението им.

    int a2, b2;
    std::cout << "Dividend: ";
    std::cin >> a2;
    std::cout << "Divisor: ";
    std::cin >> b2;

    std::cout << "The quotient of the division is: " << a2 / b2 << std::endl;
    std::cout << "The remainder of the division is: " << a2 % b2 << std::endl;


	return 0;
}