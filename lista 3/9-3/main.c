#include <stdio.h>
#include <stdlib.h>
/*Fa�a um programa que leia 10 inteiros positivos, ignorando n�o positivos, e imprima sua m�dia.*/
int main()
{
    int i, num;
    float media, soma;
    soma = 0;

    for( i = 1; i <=10; i++){
            printf("Digite um Numero:\n");
            scanf ("\t%d", &num);
        if ( num < 0 ){
            printf ("numero invalido, digite novamente:" );
            scanf("%d", &num);
        }
        soma += num;
    }

        media = soma/ 10;
        printf ("%f\n", media);

    return 0;
}
