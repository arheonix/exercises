//Составить алгоритм увеличения всех трех, введённых с клавиатуры, переменных на 5,если среди них есть хотя бы две равные. В противном случае выдать ответ «равных нет».

#include <iostream>
using namespace std;

main() {
    int a, b, c;
    cout << "\t\t\tУвеличение перменных с оператором if\n";
    cout << "\nВведите 1 число: "; cin >> a;
    cout << "\nВведите 2 число: "; cin >> b;
    cout << "\nВведите 3 число: "; cin >> c;
    if (a == b || a == c || b == c) {
        cout << "\n1 число = " << a+5;
        cout << "\n2 число = " << b+5;
        cout << "\n3 число = " << c+5 << "\n";
    } else {
        cout << "Равных нет\n";
    }
    system("pause");
    return 0;             
}
