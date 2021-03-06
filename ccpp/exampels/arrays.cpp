//Сортировка целочисленного массива методом выбора

#include <iostream>
using namespace std;

int main() {
    const int n = 20;                       //количество элементов массива
    int b[n];                               //описание массива
    int i;
    for (i = 0; i<n; i++) cin >> b[i];      //ввод массива
    for (i = 0; i<n-1; i++) {               //n-1 раз ищем наименьший элемент
        //принимаем за наимаеньший первый из рассматриваемых элементов:
        int imin = i;
        //поиск номера минимального элемента из неупорядоченных:
        for (int j = i + 1; j<n; j++)
        //если нашли меньший элемент, запоминаем его номер:
            if (b[j] < b[imin]) imin = j;
        int a = b[i];       //обмен элементов
        b[i] = b[imin];     //с номерами
        b[imin] = a;        //i и imin
    }
    //ввод упорядоченного массива:
    for (i = 0; i<n; i++) cout << b[i] << ' ';
    return 0;
}