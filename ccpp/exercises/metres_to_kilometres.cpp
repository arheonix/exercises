#include <stdio.h>

main () {
    int metres;
    scanf("Введите количество метров: %d", metres);
    float kilometres = metres/1000;
    printf("\n%d метров будет %f километра", metres, kilometres);
    return 0;
}