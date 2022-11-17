#include <stdio.h>
#include <stdlib.h>
/*Faça um programa que preenche uma matriz 4 x 4 com o produto do valor da linha e da coluna de
cada elemento. Em seguida, imprima na tela a matriz.
*/
int main()
{
    int matriz[4][4], i, j, prod;
    for( i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            matriz[i][j] = i * j;
            printf("\t[%d]", matriz[i][j]);
            printf("\t");
        }
    }

    return 0;
}
