#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*Ler um número inteiro. Se o número lido for negativo, escreva a mensagem: número invalido. Se
o número for positivo, calcular o logaritmo na base 10 deste número*/


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
