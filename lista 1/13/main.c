#include <stdio.h>
#include <stdlib.h>
/*Leia uma dist�ncia em quil�metros e apresente-a convertida em milhas. A f�rmuladeconvers�o
�: M = K / 1.61 , sendo K a dist�ncia em quil�metros e M em milhas.*/
int main()
{
    float m, k;
    printf("Digite uma distancia em quilometros: ");
    scanf ("%f", &k);
    m = k / 1.61;
    printf ("A distancia em  milhas sera de %f", m);

    return 0;
}
