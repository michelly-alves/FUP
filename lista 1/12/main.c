#include <stdio.h>
#include <stdlib.h>
/*Leia uma dist�ncia em milhas e apresente-a convertida em quil�metros. A f�rmuladeconvers�o
�: K = 1.61 * M, sendo K a dist�ncia em quil�metros e M em milhas
*/

int main()
{
    float m, k;
    printf("Digite uma distancia em milhas: ");
    scanf ("%f", &m);
    k = m * 1.61;
    printf (" A distancia em K ser� de: %2.f", k);

    return 0;
}
