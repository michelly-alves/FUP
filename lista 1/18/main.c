#include <stdio.h>
#include <stdlib.h>
/* Leia um valor de volume em metros cúbicosm3 eapresente-oconvertidoemlitros.
Afórmulade conversão é: L = 1000 * M, sendo L o volume em litros e M o volume em metros cúbicos.*/
int main()
{
    float l, m;
    printf("Digite um valor de metros cubicos: ");
    scanf("%f", &m);
    l = 1000 * m;
    printf (" l= %f", l);
    return 0;
}
