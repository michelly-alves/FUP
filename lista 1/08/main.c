#include <stdio.h>
#include <stdlib.h>

/*Leia uma temperatura em graus Kelvin e apresente-a convertida em graus Celsius. A f�rmula de
convers�o �: C = K - 273.15, sendo C a temperatura em Celsius e K a temperatura em Kelvin.*/

int main()
{

    float k, c;

    printf("Digite uma temperatura em Kevin: ");
    scanf("%f", &k);
    c = (k - 273);
    printf("/nA temperatura convertida em graus celsius �: %2.f", c);
    return 0;
}
