#include <stdio.h>
#include <stdlib.h>
 //c = (f - 32) * 5 / 9;
 //Leia uma temperatura em graus Fahrenheit e apresente-a convertidaemgrausCelsius.Afórmula de conversão é: C = 5.0 (F * 32.0)/9.0, sendo C a temperatura em CelsiuseFatemperaturaem Fahrenheit.
int main()
{

    float f, c;
    printf("Digite uma temperaturam em graus Fahrenheit para a conversao: ");
    scanf("%f", &f);
    c = (f - 32) * 5 / 9;;
    printf("A temperatura será de %2.f graus Celsius. ", c);
    return 0;
}
