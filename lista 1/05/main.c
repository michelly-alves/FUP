#include <stdio.h>
#include <stdlib.h>
//Leia um n�mero real e imprima a quinta parte deste n�mero.
int main()
{

    float numReal, numPart;

    printf("Digite um numero real: ");
    scanf("%f", &numReal);
    numPart = numReal / 5;
    printf("\n A quinta Parte do numero � %2.f", numPart);

    return 0;
}
