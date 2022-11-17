#include <stdio.h>
#include <stdlib.h>
/* Leia um valor de comprimento em cent´ımetros e apresente-o convertido em
polegadas. A fórmuladeconversãoé:P=C/2.54,sendoCocomprimentoemcentímetrosePocomprimento em polegadas*/
int main()
{
    float c, p;
    printf("Digite um comprimento em centimetros: ");
    scanf ("%f", &c);
    p = c / 2.54;
    printf ("\nos centimetros em polegadas será: %f", p);
    return 0;
}
