#include <stdio.h>
#include <stdlib.h>

/* Fa�a um programa que mostre os cinco primeiros m�ltiplos de 3,considerando n�meros maiores que 0. */

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
