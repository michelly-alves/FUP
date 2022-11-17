#include <stdio.h>
#include <stdlib.h>
/*Leia uma distância em milhas e apresente-a convertida em quilômetros. A fórmuladeconversão
é: K = 1.61 * M, sendo K a distância em quilômetros e M em milhas
*/

int main()
{
    float m, k;
    printf("Digite uma distancia em milhas: ");
    scanf ("%f", &m);
    k = m * 1.61;
    printf (" A distancia em K será de: %2.f", k);

    return 0;
}
