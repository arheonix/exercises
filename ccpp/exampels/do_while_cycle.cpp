//Программа вычисляет квадратный корень вещественного аргумента Х с заданной точностью Eps

#include <stdio.h>
#include <math.h>

int main() {
    double X, Eps;      //аругмент и точность
    double Yp, Y = 1;   //предыдущее и последующее приближение
    printf("Введите аргумент и точность: ");
    scanf("%lf%lf", &X, &Eps);
    do {
        Yp= Y;
        Y = (Yp +X/Yp)/2;
    } while (fabs(Y - Yp) >= Eps);
    printf("\nкорень из %lf равен %lf", X, Y);
    return 0;
}