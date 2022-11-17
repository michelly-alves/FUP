#include <stdio.h>
#include <stdlib.h>
/* Leia um valor de comprimento em metros e apresente-o convertido em jardas.
A fórmula de conversão é: J = M / 0.91 , sendo J o comprimento em jardas e M o comprimento em metros. */
int main()
{
    float Vj, Vm;
    printf("Valor de comprimento em metros:");
    scanf ("%f", &Vm);
    Vj = Vm / 0.91;
    printf ("O comprimento em jardas será de: %2.f", Vj);
    return 0;
}
