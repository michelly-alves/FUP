#include <stdio.h>
#include <stdlib.h>

/* Fa�a um programa que leia um n�mero inteiro positivo par N e imprima todos os n�meros pares
de 0 at� N em ordem crescente*/

int main()
{
    int i, num;

    printf("\n Digite um numero:");
    scanf("%d", &num);

    if ( num < 0){
        printf("Numero Invalido, digite outro:");
        scanf("%d", &num);
    }

    for ( i = 0; i <= num; i++){
     if ( i % 2 == 0)
     printf("\t%d", i);

    }
    return 0;
}
