#include <stdio.h>
#include <stdlib.h>

/* Leia uma velocidade em m/s (metros por segundo) e apresente-a convertida em
 km/h (quilômetros por hora). A fórmula de conversãoé:K=M*3.6,sendoKavelocidadeemkm/he M em m/s.
*/
int main()
{

    float ms, km;
    printf ("velocidade em m/s:");
    scanf("%f", &ms);
    km = ms * 3.6;
    printf ("A velocidade será de %2.f", km);

    return 0;
}
