#include <stdio.h>
#include <stdlib.h>
/* Leia um valor de massa em quilogramas e apresente-o convertido em libras. A f�rmula de convers�o
�: L = K / 0.45 , sendo K a massa em quilogramas e L a massa em libras. */
int main()
{
    float Vk, Vl;
    printf("Valor da massa em Kg:");
    scanf ("%f", &Vk);
    Vl = Vk / 0.45;
    printf ("O pre�o em libras ser� de: %2.f", Vl);
    return 0;
}
