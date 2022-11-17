#include <stdio.h>
#include <stdlib.h>

/*Uma empresa contrata um encanador a R$ 30,00 por dia. Faça um programa que solicite o
número de dias trabalhados pelo encanador e imprima a quantia líquida que deverá ser paga,
sabendo-se que são descontados 8% para imposto de renda*/

int main()
{
    int d, liq, t, imp;
    printf("Digite o numero de dias trabalhados: ");
    scanf("%d", &d);
    t = (d * 30);
    imp = t * 0.08;
    liq = t - imp;
    printf("Total liquido: %d", liq);
    return 0;
}
