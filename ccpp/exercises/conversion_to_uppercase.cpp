#include <iostream>
using namespace std;

main() {
    char letter('a');
    cout << "Введите букву нижнего регистра: \n"; cin >> letter;
    cout << "\nТа же буква в верхнем регистре: ";
    letter = letter - 32;
    cout << letter << "\n";
    system("pause");
    return 0;
}