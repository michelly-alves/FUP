#include <stdio.h>
#include <stdlib.h>

/*Crie um programa que lê 6 valores inteiros e, em seguida, mostre na tela os valores lidos.*/

int main()
{
    int array[6], i, j;
    for (i = 0; i < 6; i++){
        printf("Digite um valor: ");
        scanf("%d", &array[i]);


    }
    for (j = 0; j < 6; j++){
        printf("\t%d", array[j]);
    }
    return 0;
}
