#include <stdio.h>
#include <stdlib.h>
/*Sejam a e b os catetos de um tri�ngulo ret�ngulo, fa�a um programa que receba os valores de a e
b e calcule o valor da hipotenusa. Imprima o resultado*/

int main()
{
    int a, b, h;
    printf("\nvalor do cateto a: ");
    scanf("%d", &a);
    printf("\nValor do cateto b: ");
    scanf("%d", &b);
    h = (a * a) + (b * b);
    printf("\n%d", h);
    return 0;
}
