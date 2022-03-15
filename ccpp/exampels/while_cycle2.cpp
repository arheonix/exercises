//Программа находит все делители целого положительного числа

#include <iostream>
using namespace std;

main() {
    int num;
    cout << "\nВведите число : "; cin >> num;
    int half = num / 2;
    int div = 2;
    while (div <= half) {
        if (!(num % div)) cout << div << "\n";
        div++;
    }
    return 0;
}