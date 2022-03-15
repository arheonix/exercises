//Программа печатает таблицу значений функции y=x^2+1 во введенном диапазоне

#include <stdio.h>

int main() {
    float Xn, Xk, Dx, X;
    printf("Введите диапазон и шаг изменения аргумента: ");
    scanf("%f%f%f", &Xn, &Xk, &Dx);
    printf("|   X   |   Y   |\n");
    for (X = Xn; X<= Xk; X += Dx)
        printf("| %5.2f | %5.2f |\n", X, X*X + 1);
    return 0;
}