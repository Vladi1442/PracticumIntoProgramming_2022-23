#include <iostream>

int main() {

    // Напишете програма, която подканя потребителя да въведе дължините на двете страни на правоъгълник,
    // като му извежда съобщение, например "Please enter the length of the first side:".
    // Програмата да изведе периметърът и лицето на този правоъгълник.
    // Страните може да не са цели числа!

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