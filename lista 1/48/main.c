#include <stdio.h>
#include <stdlib.h>
/*Três amigos jogaram na loteria. Caso eles ganhem, o prêmio deve ser repartido
proporcionalmente ao valor que cada deu para a realização da aposta. Faça um programa que leia
quanto cada apostador investiu, o valor do prêmio, e imprima quanto cada um ganharia do prêmio
com base no valor investido.
*/
int main()
{
    float aposta1, aposta2, aposta3, premio, resultado1, resultado2, resultado3, apostaTotal, p1, p2, p3;



    printf("\nValor do premio: ");
    scanf("%f", &premio);
    printf("\nApostador 1: ");
    scanf("%f", &aposta1);
    printf("\nApostador 2: ");
    scanf("%f", &aposta2);
    printf("\nApostador 3: ");
    scanf("%f", &aposta3);
    apostaTotal = (aposta1 + aposta2 + aposta3);
    p1 = aposta1 / apostaTotal;
    p2 = aposta2 / apostaTotal;
    p3 = aposta3 / apostaTotal;

    resultado1 = p1 * premio;
    resultado2 = p2 * premio;
    resultado3 = p3 * premio;

    printf("\nRetorno para cada um de acordo com a aposta 1 %f ", resultado1);

    printf("\nRetorno para cada um de acordo com a aposta 2 %f ", resultado2);

    printf("\nRetorno para cada um de acordo com a aposta 3 %f",resultado3);

    return 0;
}
