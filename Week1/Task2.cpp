#include <iostream>

int main() {
    // ������� �� ���������� ���� ����� n. �� �� �������� ���������� ����� ������� � �������.

    int num;
    std::cout << "Enter a three digit number: ";
    std::cin >> num;

    int firstDigit = num / 100;
    int secondDigit = (num / 10) % 10;
    int thirdDigit = num % 10;

    int reverse = ((thirdDigit * 100) + (secondDigit * 10) + firstDigit) + 1;

    std::cout << reverse << std::endl;


	return 0;
}