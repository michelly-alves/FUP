#include <stdio.h>
#include <stdlib.h>

/* Escreva um programa que declare um inteiro, inicialize-o com 0, e incremente-o de
1000 em 1000, imprimindo seu valor na tela, até que seu valor seja 100000 (cem mil).
*/

int main()
{
    int i;
    i = 0;
    while( i <= 100000){
        printf ("\t%d", i);
        i = i + 1000;
    }
    return 0;
}
