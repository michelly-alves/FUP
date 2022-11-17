#include <stdio.h>
#include <stdlib.h>

/*Leia uma matriz de 3 x 3 elementos. Calcule a soma dos elementos que estão na diagonal
principal*/

int main()
{
    int mat[3][3], i, j, soma = 0;
    for ( i =0; i< 3; i++){
        for(j = 0; j < 3; j++){
            printf("Digite um valor para a matriz [%d][%d]", i, j);
            scanf("%d", &mat[i][j]);
            }
        }

    for(i = 0; i < 3; i++){
        for( j = 0; j < 3; j++){
            printf("\t");
            printf("[%d]", mat[i][j]);
            printf("\t");
             if (i == j){
                soma += mat[i][j];
            }
        }
    }
        printf("\nSoma: %d", soma);
    return 0;
}
