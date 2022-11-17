#include <stdio.h>
#include <stdlib.h>
/*Faça um programa que leia 10 inteiros e imprima sua média.
*/
int main()
{
    int i, num;
    float media, soma = 0;

    for (i = 1; i <= 10; i++){
        printf("Digite um Numero:\n");
        scanf ("\n%d", &num);

        soma = soma + num;
    }
        media = soma / 10;
        printf ("\n%f", media);

    return 0;
}
