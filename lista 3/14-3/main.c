#include <stdio.h>
#include <stdlib.h>

/*Fa�a um programa que leia um n�mero inteiro positivo N e imprima todos os n�meros naturais de
0 at� N em ordem decrescente*/

int main()
{
    int i, num;

    printf("Digite um numero: \n");
    scanf("%d", &num);

    if( num < 0){
        printf("Numero invalido!!");
    }else{
        for ( i = num; i >=0; i--){

            printf ("%d", i );

        }
    }

    return 0;
}
