#include <iostream>

int main() {
    // �������� ��������, ����� ����� ��� ����� �� ����������� ���� � ������� true ��� ������� � �� - ����� �� ������� � false � �������� ������.

    int a1, b1;
    std::cout << "Enter two numbers: ";
    std::cin >> a1 >> b1;

    bool isFirstLessThanSecond = a1 < b1;

    std::cout << std::boolalpha << isFirstLessThanSecond << std::endl;


	return 0;
}