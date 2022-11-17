#include <stdio.h>
#include <stdlib.h>

/*Faça um programa que leia o valor de um produto e imprima o valor com desconto, tendo em
vista que o desconto foi de 12%
*/

int main()
{
    float v, d, vf;
    printf("Digite um valor: ");
    scanf("%f", &v);
    d = v * 0.12;
    vf = v - d;
    printf("%2.f", vf);

    return 0;
}
