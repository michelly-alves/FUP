#include <stdio.h>
#include <stdlib.h>

/*Uma empresa contrata um encanador a R$ 30,00 por dia. Fa�a um programa que solicite o
n�mero de dias trabalhados pelo encanador e imprima a quantia l�quida que dever� ser paga,
sabendo-se que s�o descontados 8% para imposto de renda*/

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
