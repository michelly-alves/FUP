#include <stdio.h>
#include <stdlib.h>

/*Fa�a um programa que leia um vetor de 8 posi��es e, em seguida, leia tamb�m dois valores X e Y
quaisquer correspondentes a duas posi��es no vetor. Ao final seu programa dever� escrever a
soma dos valores encontrados nas respectivas posi��es X e Y*/

int main()
{
    int vetor[8], x, y, i, j, soma;

        for(i = 0; i < 8; i++){
            printf("Digite um numero:" );
            scanf("%d", &vetor[i]);
    }
        for (j = 0; j < 8; j++){
        printf("\nposi��o %d: %d",j, vetor[j]);
        }
        printf("\nDigite a posi��o que quer no vetor para efetuar a soma:");
        scanf("%d%d", &x, &y);

        if ( x < 8 && x >= 0){
            if ( y < 8 && y >= 0){
                soma = vetor[x] + vetor[y];
                printf("\nsoma:%d", soma);
            }
        }else{
            printf("\nN�o tem uma posi��o pra esse valor.");
        }
    return 0;
}
