#include <stdio.h>
#include <stdlib.h>
/*Leia uma distância em quilômetros e apresente-a convertida em milhas. A fórmuladeconversão
é: M = K / 1.61 , sendo K a distância em quilômetros e M em milhas.*/
int main()
{
    float m, k;
    printf("Digite uma distancia em quilometros: ");
    scanf ("%f", &k);
    m = k / 1.61;
    printf ("A distancia em  milhas sera de %f", m);

    return 0;
}
