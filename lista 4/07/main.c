#include <stdio.h>
#include <stdlib.h>

/*Escreva um programa que leia 10 números inteiros e os armazene em um vetor. Imprima o vetor,
o maior elemento e a posição que ele se encontra.*/

int main()
{
    int vetor[10], i, maior = 0, posmaior = 0;
    for (i = 0; i < 10; i++){
        printf("Digite um valor: ");
        scanf("%d", &vetor[i]);

        if (vetor[i] > maior){
        maior = vetor[i];
        posmaior = i;
        }
    }
          printf("\nmaior: %d", maior);
          printf("\nposição maior: %d", posmaior);
    return 0;
}
