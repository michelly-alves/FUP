#include <stdio.h>
#include <stdlib.h>
/* Leia um valor de volume em litros eapresente-oconvertidoemmetrosc�bicosm3.Af�rmulade convers�o
�: M = L / 1000 , sendo L o volume em litros e M o volume em metros c�bicos*/
int main()
{
    float m, l;
    printf("Digite o volume em litros: ");
    scanf ("%f", &l);
    m = l / 1000;
    printf ("\nO valor da convers�o em metros cubicos sera de: %f", m);
    return 0;
}
