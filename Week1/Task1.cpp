#include <iostream>

int main() {
    // ������� �� ���� �����. ����������� 1, ��� ������� � ����� � 0, ��� � �������.

    int number;
    std::cout << "Enter a number: ";
    std::cin >> number;

    bool isEven = number % 2 == 0;

    std::cout << isEven << std::endl;


	return 0;
}