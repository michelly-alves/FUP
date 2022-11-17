#include <stdio.h>
#include <stdlib.h>
/* Leia umvalordecomprimentoempolegadaseapresente-oconvertidoemcentímetros.
Afórmula de conversão é: C = P * 2.54, sendo C o comprimento em centímetros e P o comprimento em polegadas*/
int main()
{
    float c , p;
    printf("Digite um comprimento em Polegadas: ");
    scanf ("%f", &p);
    c = p * 2.54;
    printf ("A conversão em centimentros %f", c);
    return 0;
}
