#include <iostream>

int main() {
    // �������� ��������, ����� ������� ��� ����� - a � b � ������� ���� �������� (a + b)^4 - (a-b)^2

    int a, b;
    std::cout << "Enter two numbers: ";
    std::cin >> a >> b;

    int expr1 = a + b;
    int expr2 = a - b;

    std::cout << expr1 * expr1 * expr1 * expr1 - expr2 * expr2 << std::endl;


	return 0;
}