#include <iostream>

int main() {
    // Пешо отива на пазар за плодове – ябълки, круши и банани. Помогнете на майка му да генерира автоматично съобщение, с което да му напомни колко от всеки плод трябва да купи.

    int apples, pears, bananas;
    std::cout << "Apples: ";
    std::cin >> apples;
    std::cout << "Pears: ";
    std::cin >> pears;
    std::cout << "Bananas: ";
    std::cin >> bananas;

    std::cout << "Pesho, don't forger to buy " << apples << " apples, " << pears << " pears and " << bananas << " bananas!" << std::endl;



	return 0;
}