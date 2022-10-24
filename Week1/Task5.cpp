#include <iostream>

int main() {
    // Въвежа се цяло число. Да се отпечата без последната цифра.

    int num2;
    std::cout << "Enter whole number: ";
    std::cin >> num2;

    std::cout << "Without last digit " << num2 / 10 << std::endl;


	return 0;
}