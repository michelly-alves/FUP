#include <stdio.h>
#include <stdlib.h>
/*13. Fa�a um programa que leia um n�mero inteiro positivo N e imprima todos os n�meros naturais de
0 at� N em ordem crescente.
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
