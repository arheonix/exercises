//Программа печатает таблицу значений функции y=x^2+1 во введенном диапазоне

#include <stdio.h>

int main() {
    float Xn, Xk, Dx;
    printf("Введите диапазон и шаг изменения аргумента: ");
    scanf("%f%f%f", &Xn, &Xk, &Dx);
    printf("|   X   |   Y   |\n");
    float X = Xn;
    while (X <= Xk) {
        printf("| %5.2f | %5.2f |\n", X, X*X + 1);
        X += Dx;
    }
    return 0;
}