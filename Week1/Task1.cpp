#include <iostream>

int main() {
    // Въвежда се цяло число. Отпечатайте 1, ако числото е четно и 0, ако е нечетно.

    int number;
    std::cout << "Enter a number: ";
    std::cin >> number;

    bool isEven = number % 2 == 0;

    std::cout << isEven << std::endl;


	return 0;
}