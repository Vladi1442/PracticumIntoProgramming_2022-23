#include <iostream>

int main() {
    // �� �� ������ ��������, ����� ���� �� ��������� ������ ���� � ���� � �� �������� � ������ � � ����.

    int sumInLeva;
    std::cout << "Suma v leva: ";
    std::cin >> sumInLeva;

    int sumInDolar = sumInLeva * 1.79549;
    int sumInEvra = sumInLeva * 1.95583;

    std::cout << "Suma v dolari: " << sumInDolar << std::endl;
    std::cout << "Suma v evra: " << sumInEvra << std::endl;


	return 0;
}