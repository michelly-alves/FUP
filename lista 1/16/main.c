#include <stdio.h>
#include <stdlib.h>
/* Leia umvalordecomprimentoempolegadaseapresente-oconvertidoemcent�metros.
Af�rmula de convers�o �: C = P * 2.54, sendo C o comprimento em cent�metros e P o comprimento em polegadas*/
int main()
{
    float c , p;
    printf("Digite um comprimento em Polegadas: ");
    scanf ("%f", &p);
    c = p * 2.54;
    printf ("A convers�o em centimentros %f", c);
    return 0;
}
