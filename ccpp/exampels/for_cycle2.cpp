//Программа находит все делители целого положительного числа

#include <iostream>
using namespace std;

main() {
    int num, half, div;
    cout << "\nВведите число : "; cin >> num;
    for (half = num / 2, div = 2; div <= half; div++)
        if (!(num % div)) cout << div << "\n";
    return 0;
}