#include <stdio.h>
#include <stdlib.h>
/*Faça um programa que leia 10 inteiros positivos, ignorando não positivos, e imprima sua média.*/
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
