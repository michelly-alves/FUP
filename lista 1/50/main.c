#include <stdio.h>
#include <stdlib.h>
//50. Fa�a um programa para ler as dimens�es de um terreno (comprimento c e largura l), bem como o
//pre�o do metro de tela p. Imprima o custo para cercar este mesmo terreno com tela.



int main()

{
    float c, l, p, custo;
    printf("Digite o comprimento do terreno ");
    scanf("%f", &c);
    printf("\nDigite a largura do terreno ");
    scanf("%f", &l);
    printf("\nDigite o pre�o por metro de tela: ");
    scanf("%f", &p);
    custo = (2 * c + 2 * l) * p;
    printf ("O custo para cercar o terreno ser� de: %2.f", custo);

    return 0;
}
