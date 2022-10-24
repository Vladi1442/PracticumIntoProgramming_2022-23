#include <iostream>

int main() {
    // Да се напише програма, която чете от конзолата дадена сума в лева и ги превръща в долари и в евра.

    int sumInLeva;
    std::cout << "Suma v leva: ";
    std::cin >> sumInLeva;

    int sumInDolar = sumInLeva * 1.79549;
    int sumInEvra = sumInLeva * 1.95583;

    std::cout << "Suma v dolari: " << sumInDolar << std::endl;
    std::cout << "Suma v evra: " << sumInEvra << std::endl;


	return 0;
}