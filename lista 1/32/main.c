#include <stdio.h>
#include <stdlib.h>
/*Leia um número inteiro e imprima a soma do sucessor de seu triplo com o antecessor de seu
dobro
*/
int main()
{
    int n, soma, dobro, triplo;
    printf("Digite um numero: \n");
    scanf("%d", &n);
    dobro = (n * 2) - 1;
    triplo = (n * 3) + 1;
    soma = dobro + triplo;
    printf("\nsucessor de seu triplo: %d", triplo);
    printf("\nantecessor de seu dobro: %d", dobro);
    printf("\nsoma: %d", soma);

    return 0;
}
