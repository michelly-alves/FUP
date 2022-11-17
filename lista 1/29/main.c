#include <stdio.h>
#include <stdlib.h>
/*Leia quatro notas, calcule a média aritmética e imprima o resultado*/


int main()
{
    float n1, n2, n3, n4, media;
        printf("\nDigite sua primeira nota ");
        scanf("%f", &n1);
        printf("\nDigite sua segunda nota ");
        scanf("%f", &n2);
        printf("\nDigite sua terceira nota ");
        scanf("%f", &n3);
        printf("\nDigite sua quarta nota ");
        scanf("%f", &n4);

        media = (n1 + n2 + n3 + n4)/4;

        printf ("A media é: %
                f", media);

    return 0;
}
