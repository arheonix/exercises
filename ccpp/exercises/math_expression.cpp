/*
Запрограммировать следующее выражение: (а + b — f / а) + f * a * a — (a + b) 
Числа а, b, f вводятся с клавиатуры. Организовать пользовательский интерфейс, таким образом, чтобы было понятно, в каком порядке должны вводиться числа.
*/

#include <iostream>
using namespace std;

main() {
    int a, b, f, x;
    cout << "\nВведите цифры a, b и f: ";
    cout << "\na="; cin >> a;
    cout << "\nb="; cin >> b;
    cout << "\nf="; cin >> f;
    cout << "\nВычисляем по формуле: x=(а + b — f / а) + f * a * a — (a + b)";
    x = (a + b - f / a) + f * a * a - (a + b);
    cout << "\nx=" << x << "\n";
    system("pause");
    return 0;
}