#include <stdio.h>
#include <stdlib.h>
/*Leia uma matriz 5 x 5. Leia tamb�m um valor X. O programa dever� fazer uma busca desse valor
na matriz e, ao final, escrever a localiza��o (linha e coluna) ou uma mensagem de �n�o
encontrado�.*/
int main()
{
    int matriz[5][5], x, i, j, linha = 0, coluna = 0, count=0;

    for ( i = 0; i < 5; i++){
        for (j = 0; j < 5; j++){
            printf("Valor da matriz [%d][%d]", i ,j);
            scanf("%d", &matriz[i][j]);
        }
    }
        printf("\nValor a ser encontrado: ");
        scanf("%d", &x);

    for ( i = 0; i < 5; i++){
        for (j = 0; j < 5; j++){
            if (matriz[i][j] == x){
                linha = i;
                coluna = j;
                count++;
            }
        }
    }
        if (count != 0){
        printf("\nLocalizado em [%d][%d]", linha, coluna);
        }else{
            printf("\nNumero n�o encontrado.");
        }

    return 0;
}
