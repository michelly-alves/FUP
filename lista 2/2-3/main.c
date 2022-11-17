#include <stdio.h>
#include <stdlib.h>
//Faça um programa que receba dois números e mostre qual deles é o maior.
int main()
{
    float number1, number2;
    printf("Digite um numero: ");
    scanf("%f", &number1);
    printf("\nDigite outro numero: "),
    scanf("%f", &number2);
    if (number1 > number2){
        printf("\nO %2.f é maior que o %2.f", number1, number2 );
    }else{
        printf("\nO %2.f é maior que o %2.f", number2, number1);
    }
    return 0;
}
