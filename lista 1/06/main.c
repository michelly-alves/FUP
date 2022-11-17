#include <stdio.h>
#include <stdlib.h>
/*Leia uma temperatura em graus Celsius eapresente-aconvertidaemgrausFahrenheit.Afórmula de conversão é: F = C * (9.0/5.0)+32.0,
sendo F a temperatura em Fahrenheit e C atemperatura em Celsius
*/
int main()
{
   float C, F;

    printf("Digite uma temperatura: ");
    scanf("%f", &C);
    F = C * (9.0/5.0) + 32.0;
    printf("\nO resultado e: %.2f ", F);

    return 0;
}
