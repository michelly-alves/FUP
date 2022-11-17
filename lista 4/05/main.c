#include <stdio.h>
#include <stdlib.h>

/*Leia um vetor de 10 posições. Contar e escrever quantos valores pares ele possui.*/

int main()
{
    int vetor[10], i, count = 0;
    for(i = 0; i < 10; i++){
        printf("digite um valor: ");
        scanf("%d", &vetor[i]);
        if(vetor[i] % 2 == 0){
            count++;
        }
    }
    printf("\nexistem %d valores pares por aqui.", count);

    return 0;
}
