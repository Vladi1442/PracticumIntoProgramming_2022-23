#include <iostream>

int main() {

    // �������� ��������, ����� ������� ����������� �� ������ ��������� �� ����� ������ �� ������������,
    // ���� �� ������� ���������, �������� "Please enter the length of the first side:".
    // ���������� �� ������ ����������� � ������ �� ���� ������������.
    // �������� ���� �� �� �� ���� �����!

    double side1, side2;
    std::cout << "Please enter the length of the first side: ";
    std::cin >> side1;
    std::cout << "Please enter the length of the second side: ";
    std::cin >> side2;

    double perimeter1 = 2 * (side1 + side2);
    double area1 = side1 * side2;

    std::cout << "Perimeter: " << perimeter1 << std::endl;
    std::cout << "Area: " << area1 << std::endl;

	return 0;
}