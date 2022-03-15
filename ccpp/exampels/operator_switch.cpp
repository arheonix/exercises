#include <iostream>
using namespace std;

main() {
    int a, b, res;
    char os;
    cout << "\nВведите 1й операнд : ";        cin >> a;
    cout << "\nВведите символ операции : ";   cin >> os;
    cout << "\nВедите 2й операнд : ";         cin >> b;  
    bool f = true;
    switch(os) {
        case '+': res = a + b; break;
        case '-': res = a - b; break;
        case '*': res = a * b; break;
        case '/': res = a / b; break;
        default : cout << "Введён некоректный символ";  f = false;
    }
    if (f) cout << "\nРезультат : " << res;
    return 0;
}