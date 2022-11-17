#include <stdio.h>
#include <stdlib.h>

/*Faça um programa que leia um número inteiro positivo N e imprima todos os números naturais de
0 até N em ordem decrescente*/

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
