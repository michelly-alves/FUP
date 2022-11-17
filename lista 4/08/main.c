#include <stdio.h>
#include <stdlib.h>
/*Crie um programa que lê 6 valores inteiros e, em seguida, mostre na tela os valores lidos na
ordem inversa*/

int main()
{
    int vetor[6], j, i;
    for (i = 0; i < 6; i++){
        printf("Digite o valor:");
        scanf("%d", &vetor[i]);
    }
    for ( j = 5; j >= 0; j--){
        printf("\t%d", vetor[j]);
    }
    return 0;
}
