#include <stdio.h>
#include <stdlib.h>
/*Leia uma matriz de 3 x 3 elementos. Imprima sua transposta.*/
int main()
{
    int matriz[3][3], i, j;
    for (i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("matriz [%d][%d]", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
        for (i = 0; i < 3; i++){
                printf("\n");
            for(j = 0; j < 3; j++){
                printf("\t[%d]", matriz[j][i]);
                printf("\t");
            }
        }


    return 0;
}
