#include <stdio.h>
#include <stdlib.h>
//Fa�a um programa que receba dois n�meros e mostre qual deles � o maior.
int main()
{
    float number1, number2;
    printf("Digite um numero: ");
    scanf("%f", &number1);
    printf("\nDigite outro numero: "),
    scanf("%f", &number2);
    if (number1 > number2){
        printf("\nO %2.f � maior que o %2.f", number1, number2 );
    }else{
        printf("\nO %2.f � maior que o %2.f", number2, number1);
    }
    return 0;
}
