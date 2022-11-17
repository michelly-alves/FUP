#include <stdio.h>
#include <stdlib.h>

/* Faça um programa que leia um número inteiro positivo ímpar N e imprima todos os números
ímpares de 1 até N em ordem decrescente.
*/

int main()
{
    int i, num;

    printf("\nDigite um numero: ");
    scanf("%d", &num);

    while ( num < 0 || num % 2 == 0){
        printf("\nnumero invalido, insira outro valor: ");
        scanf("%d", &num);
    }
    for( i = num; i>=0; i--){
        if ( i % 2 != 0)
            printf( "\t%d", i);
    }

    return 0;
}
