#include <stdio.h>
#include <stdlib.h>
/* Leia um valor de volume em metros c�bicosm3 eapresente-oconvertidoemlitros.
Af�rmulade convers�o �: L = 1000 * M, sendo L o volume em litros e M o volume em metros c�bicos.*/
int main()
{
    float l, m;
    printf("Digite um valor de metros cubicos: ");
    scanf("%f", &m);
    l = 1000 * m;
    printf (" l= %f", l);
    return 0;
}
