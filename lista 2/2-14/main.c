#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*Ler um n�mero inteiro. Se o n�mero lido for negativo, escreva a mensagem: n�mero invalido. Se
o n�mero for positivo, calcular o logaritmo na base 10 deste n�mero*/


int main()
{
    float num, result;
    printf("Digite um numero\n");
    scanf("%f", &num);
    result = log10(num);
    if (num >= 0)
    {
        printf("log de %2.f e: %f", num, result);
    }else{
        printf("Numero invalido.\n");
    }

    return 0;
}
