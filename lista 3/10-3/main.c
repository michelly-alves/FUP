#include <stdio.h>
#include <stdlib.h>
/*. Escreva um programa que leia 10 números e escreva o menor valor lido e o maior valor lido.
*/
int main()
{
    int i, menor, maior, num;
    num = 0;
    maior = 0;
    for (i = 1; i <= 10; i++){
        printf ("Digite um numero: \n");
        scanf("%d", &num);
        if (num > maior) maior = num;
        if (num < menor) menor = num;
    }

        printf("%d %d", menor, maior);


    return 0;
}
