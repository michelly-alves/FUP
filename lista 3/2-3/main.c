#include <stdio.h>
#include <stdlib.h>

/* Escreva um programa que escreva na tela, de 1 até 100, de1em1,3vezes.
Aprimeiravezdeve usar a estrutura de repetição for, a segunda while, e a terceira do while. */

int main()
{
    int i;
    for (i >= 0; i <=100; i++ ){
        printf ("\t%d ", i);
        i++;
    }

    i = 1;

    while ( i <= 100){
        printf ("\t%d ", i);
        i++;
    }
    i = 1;

    do {
        printf ("\t%d ", i);
        i++;
        }while(i <= 100);


    return 0;
}
