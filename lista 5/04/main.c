#include <stdio.h>
#include <stdlib.h>
/*Leia uma matriz 4 x 4, imprima a matriz e retorne a localização (linha e a coluna) do maior valor*/
int main()
{
    int matriz[4][4], i, j, maiorval = 0;
    for(i = 0; i < 4; i++){
        for ( j = 0; j < 4; j++){
            printf("Digite o valor de[%d][%d] ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    for(i = 0; i < 4; i++){
        for( j = 0; j< 4; j++){
            printf("[%d]\t\t", matriz[i][j]);
            if (matriz[i][j] > maiorval) maiorval = matriz[i][j];
        }
    }
    for(i = 0; i < 4; i++){
        for ( j = 0; j < 4; j++){
            if (matriz[i][j] == maiorval){
                printf("\nmaior valor na matriz[%d][%d]", i, j);
                printf("\tmaior valor %d\t", maiorval);
            }
        }
    }


    return 0;
}
