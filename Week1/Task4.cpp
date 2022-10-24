#include <iostream>

int main() {
    //  Въвежа се цяло число. Да се отпечата 1, ако числото е валидна оценка от училище, и 0, ако не е валидна.

    int num1;
    std::cout << "Enter whole number: ";
    std::cin >> num1;

    bool isValidGrade = (num1 == '5' || num1 == '4' || num1 == '3' || num1 == '2' || num1 == '1');

    std::cout << isValidGrade << std::endl;


	return 0;
}