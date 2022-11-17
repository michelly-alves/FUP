#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num1, num2, num3, soma;

    printf("\nDigite um numero: ");
    scanf("%d", &num1);
    printf("\nDigite um numero: ");
    scanf("%d", &num2);
    printf("\nDigite um numero: ");
    scanf("%d", &num3);
    soma = num1 + num2 + num3;
    printf ("A soma entre os 3 numeros é: %d", soma);

    return 0;
}
