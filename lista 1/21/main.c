#include <stdio.h>
#include <stdlib.h>
/*  Leia um valor de massa em libras e apresente-o convertido em quilogramas. A fórmula de conversão
é: K = L * 0.45, sendo K a massa em quilogramas e L a massa em libras*/
int main()
{
    float Vk, Vl;
    printf("Valor da massa em libras:");
    scanf ("%f", &Vl);
    Vk = Vl * 0.45;
    printf ("O preço em kg será de: %2.f", Vk);
    return 0;
}
