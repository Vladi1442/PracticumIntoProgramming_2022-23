#include <iostream>

int main() {

	// Напишете програма която приема номер на кредитна карта(16 цифри).
	// Програмата да изведе същият този номер, но със скрити първите 12 цифри(XXXXXXXXXXXX1234).

	long long cardNumber;
	std::cin >> cardNumber;

	std::cout << "XXXXXXXXXXXX" << cardNumber % 10000;

	return 0;
}