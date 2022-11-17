#include <stdio.h>
#include <stdlib.h>

/*Faça um programa que receba do usuário um vetor com 10 posições. Em seguida deverá ser
impresso o maior e o menor elemento do vetor.*/

int main()
{
    int vetor[10], i, maior, menor;
    for (i = 0; i < 10; i++){
        printf("Digite um valor:");
        scanf("%d", &vetor[i]);
        if (vetor[i] > maior) maior = vetor[i];
        if (vetor[i] < menor) menor = vetor[i];
    }
    printf("\nmenor: %d maior: %d", menor, maior);
    return 0;
}
