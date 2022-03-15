#include <stdio.h>

main() {
    const int nstr = 4, nstb = 5;                           //размерности массива
    int b[nstr][nstb];                                      //описание массива
    int i, j;
    for (i = 0; i<nstr; j++)                                //ввод массива
    for (j = 0; j<nstb; j++) scanf ("%d", &b[i][j]);
    int istr = -1, MaxKol = 0;
     for ( i = 0; i<nstr; i++) {                            //прсомотр массива по строкам
        int Kol = 0;
        for (j = 0; j<nstb; j++) if (b[i][j] == 0) Kol++;
        if (Kol > MaxKol) {istr = i; MaxKol = Kol;} 
    }
    printf(" Исходный массив:\n");
    for (i = 0; i<nstr; i++) {
        for (j= 0; j<nstb; j++) printf("%d ", b[i][j]);
        printf("\n");
    }
    if (istr == -1) printf("Нулевых элементов нет");
    else printf("Номер строки: %d", istr);
    return 0;    
} 