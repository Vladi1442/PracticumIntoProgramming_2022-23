#include <iostream>

int main() {

    // �� �� ������ ��������, �����:
   // �) ������������ ������� ������ �� ���������;
   // �) ���������� ��������� ��������� �� �����������;
   // �) ���������� ��������� ������ �� ����������� ��� ��������� ������(PI = 3, 14159265).

    double radius, length;
    std::cout << "Radius: ";
    std::cin >> radius;
    double pi = 3.14;

    double length = 2 * pi * radius;
    std::cout << "Length: " << length << std::endl;

    double area3 = pi * radius * radius;
    std::cout << "Area " << area3 << std::endl;

	return 0;
}