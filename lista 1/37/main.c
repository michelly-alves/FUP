#include <stdio.h>
#include <stdlib.h>
/*Leia o sal�rio de um funcion�rio. Calcule e imprima o valor do novo sal�rio, sabendo que ele
recebeu um aumento de 25%.*/
int main()
{
    int s, a, ns;
    printf("Salario: ");
    scanf("%d", &s);
    a = s / 4;
    ns = s + a;
    printf("%d", ns);
    return 0;
}
