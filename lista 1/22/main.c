#include <stdio.h>
#include <stdlib.h>
/* Leia um valor de comprimento em jardas e apresente-o convertido em metros.
A f�rmula de convers�o �: M = 0.91 * J, sendo J o comprimento em jardas e M o comprimento em metros*/

int main()
{
    float Vj, Vm;
    printf("Valor de comprimento em jardas:");
    scanf ("%f", &Vj);
    Vm = Vj * 0.91;
    printf ("O comprimento em metros ser� de: %2.f", Vm);
    return 0;
}
