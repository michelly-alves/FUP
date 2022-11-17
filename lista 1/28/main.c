#include <stdio.h>
#include <stdlib.h>

int main()
{
        float x, y, z, soma;
        printf("Digite o primeiro valor: ");
            scanf("%f", &x);
         printf("Digite o primeiro valor: ");
            scanf("%f", &y);
         printf("Digite o primeiro valor: ");
            scanf("%f", &z);
            soma = x * x + y * y + z * z;
        printf ("A soma dos quadrados desses numeros e: %2.f", soma);

    return 0;
}
