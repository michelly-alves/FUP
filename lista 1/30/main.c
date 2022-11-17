#include <stdio.h>
#include <stdlib.h>

/*Leia um valor em real e a cotação do dólar. Em seguida, imprima o valor correspondente em
dólares*/

int main()
{
    int r, d;
    printf("Digite o valor em real: ");
    scanf("%d", &r);
    d = r * 4.97;
    printf("%d", d);
    return 0;
}
