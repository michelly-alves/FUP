#include <stdio.h>
#include <stdlib.h>

/*Leia o tamanho do lado de um quadrado e imprima como resultado a sua área.*/

int main()
{
    int l, a;
    printf("Lado de um quadrado: \n");
    scanf("%d", &l);
    a = l * l;
    printf("%d", a);
    return 0;
}
