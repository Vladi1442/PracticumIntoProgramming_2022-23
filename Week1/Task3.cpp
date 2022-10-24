#include <iostream>

int main() {
    // Въвежа се символ. Да се отпечата 1, ако е английска гласна буква, и 0, ако не е.

    char letter;
    std::cin >> letter;

    bool isVowel = (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u' || letter == 'A' || letter == 'E' || letter == 'I' || letter == 'O' || letter == 'U');

    std::cout << isVowel << std::endl;


	return 0;
}