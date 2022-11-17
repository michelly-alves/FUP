#include <stdio.h>
#include <stdlib.h>
//50. Faça um programa para ler as dimensões de um terreno (comprimento c e largura l), bem como o
//preço do metro de tela p. Imprima o custo para cercar este mesmo terreno com tela.



int main()

{
    float c, l, p, custo;
    printf("Digite o comprimento do terreno ");
    scanf("%f", &c);
    printf("\nDigite a largura do terreno ");
    scanf("%f", &l);
    printf("\nDigite o preço por metro de tela: ");
    scanf("%f", &p);
    custo = (2 * c + 2 * l) * p;
    printf ("O custo para cercar o terreno será de: %2.f", custo);

    return 0;
}
