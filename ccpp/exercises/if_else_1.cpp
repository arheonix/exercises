/*
Составить программу, которая требует ввести два числа. Если первое число больше второго, то программа печатает слово "больше". 
Если первое число меньше второго, то программа печатает слово "меньше". А если числа равны, программа напечатает сообщение "Эти числа равны".
*/

#include <iostream>
using namespace std;

main() {
    int a, b;
    cout << "Сравнение чисел используя оператор ветвления\n";
    cout << "\nВведите 1 число: "; cin >> a;
    cout << "\nВведите 2 число: "; cin >> b; cout << "\n";
    if (a > b)
        cout << "БОЛЬШЕ";
    if (a < b) 
        cout << "МЕНЬШЕ";
    if (a == b) 
        cout << "ЭТИ ЧИСЛА РАВНЫ";
    system("pause");
    return 0;
}