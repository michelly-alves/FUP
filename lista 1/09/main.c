#include <stdio.h>
#include <stdlib.h>
//Leia uma temperatura em graus Celsius e apresente-a convertida em graus Kelvin. A f�rmula de
//convers�o �: K = C + 273.15, sendo C a temperatura em Celsius e K a temperatura em Kelvin.
int main ()
{

    float k, c;
    printf("Digite uma temperatura em graus Celsius:"),
    scanf ("%f", &c);
    k = c + 273.25;
    printf("A temperatura em convertida em K ser� %2.f", k);
    return 0;

}
