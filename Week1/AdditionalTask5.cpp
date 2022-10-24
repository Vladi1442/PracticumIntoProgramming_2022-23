#include <iostream>

int main() {
    // Напишете програма, която взима две числа от стандартния вход и извежда true ако първото е по - малко от второто и false в противен случай.

    int a1, b1;
    std::cout << "Enter two numbers: ";
    std::cin >> a1 >> b1;

    bool isFirstLessThanSecond = a1 < b1;

    std::cout << std::boolalpha << isFirstLessThanSecond << std::endl;


	return 0;
}