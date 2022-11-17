#include <stdio.h>
#include <stdlib.h>
/*Leia o salário de um funcionário. Calcule e imprima o valor do novo salário, sabendo que ele
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
