#include <stdio.h>
#include <stdlib.h>
/*13. Faça um programa que leia um número inteiro positivo N e imprima todos os números naturais de
0 até N em ordem crescente.
*/

int main()
{
    int num, i;
    printf("Digite um numero: \n");
    scanf("%d", &num);

    if (num < 0 ){
        printf ("Numero invalido. ");
    }else{
        for( i = 0; i <= num; i++){
            printf("\t%d", i);
        }
    }

    return 0;
}
