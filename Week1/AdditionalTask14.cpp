#include <iostream>

int main() {

	// �������� �������� ����� ������ ����� �� �������� �����(16 �����).
	// ���������� �� ������ ������ ���� �����, �� ��� ������ ������� 12 �����(XXXXXXXXXXXX1234).

	long long cardNumber;
	std::cin >> cardNumber;

	std::cout << "XXXXXXXXXXXX" << cardNumber % 10000;

	return 0;
}