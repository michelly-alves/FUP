#include <stdio.h>
#include <stdlib.h>

/*Declare uma matriz 5 x 5. Preencha com 1 a diagonal principal e com 0 os demais elementos.
Escreva ao final a matriz obtida*/

int main()
{
    int matriz[5][5], i, j;
    for(i = 0; i< 5; i++){
        for(j = 0; j < 5; j++){
            if( i == j){
                printf("\t[1]");
            }else{
                printf("\t[0]");
            }
            printf("\t");
        }
    }
    return 0;
}
