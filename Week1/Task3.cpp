#include <iostream>

int main() {
    // ������ �� ������. �� �� �������� 1, ��� � ��������� ������ �����, � 0, ��� �� �.

    char letter;
    std::cin >> letter;

    bool isVowel = (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u' || letter == 'A' || letter == 'E' || letter == 'I' || letter == 'O' || letter == 'U');

    std::cout << isVowel << std::endl;


	return 0;
}