#include <iostream>

int main() {
    //  ������ �� ���� �����. �� �� �������� 1, ��� ������� � ������� ������ �� �������, � 0, ��� �� � �������.

    int num1;
    std::cout << "Enter whole number: ";
    std::cin >> num1;

    bool isValidGrade = (num1 == '5' || num1 == '4' || num1 == '3' || num1 == '2' || num1 == '1');

    std::cout << isValidGrade << std::endl;


	return 0;
}