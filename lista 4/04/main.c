#include <stdio.h>
#include <stdlib.h>

/*Faça um programa que leia um vetor de 8 posições e, em seguida, leia também dois valores X e Y
quaisquer correspondentes a duas posições no vetor. Ao final seu programa deverá escrever a
soma dos valores encontrados nas respectivas posições X e Y*/

int main()
{
    int vetor[8], x, y, i, j, soma;

        for(i = 0; i < 8; i++){
            printf("Digite um numero:" );
            scanf("%d", &vetor[i]);
    }
        for (j = 0; j < 8; j++){
        printf("\nposição %d: %d",j, vetor[j]);
        }
        printf("\nDigite a posição que quer no vetor para efetuar a soma:");
        scanf("%d%d", &x, &y);

        if ( x < 8 && x >= 0){
            if ( y < 8 && y >= 0){
                soma = vetor[x] + vetor[y];
                printf("\nsoma:%d", soma);
            }
        }else{
            printf("\nNão tem uma posição pra esse valor.");
        }
    return 0;
}
