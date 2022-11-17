#include <stdio.h>
#include <stdlib.h>

/* Faça um programa que mostre os cinco primeiros múltiplos de 3,considerando números maiores que 0. */

int main()
{
    int num, soma, i;
    num = 3;

    for ( i = 0; i < 5; i++){
        printf("%d\t", num );
        num = num + 3;
    }

    return 0;
}
