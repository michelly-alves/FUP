#include <stdio.h>
#include <stdlib.h>
/*Leia o valor do raio de um círculo e calcule e imprima a área do círculo correspondente. A área
do círculo é 𝜋 * raio
2
, considere = 3.14.*/
int main()
{
    float r, a;
    printf("Digite o valor do raio: \n");
    scanf("%f", &r);
    a = 3.14 * r;
    printf("%2.f", a);

    return 0;
}
