#include <stdio.h>
#include <stdlib.h>
//Leia um número real e imprima a quinta parte deste número.
int main()
{

    float numReal, numPart;

    printf("Digite um numero real: ");
    scanf("%f", &numReal);
    numPart = numReal / 5;
    printf("\n A quinta Parte do numero é %2.f", numPart);

    return 0;
}
