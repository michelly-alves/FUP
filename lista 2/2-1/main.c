#include <stdio.h>
#include <stdlib.h>
//Fa�a um programa que leia um n�mero e informe se ele � igual a zero.
int main()
{
    float n;
    printf("Digite um numero\n");
    scanf("%f", &n);
    if (n == 0){
        printf("Esse numero � igual a 0! ");
    }else{
        printf("Esse numero n�o � igual a zero ");
    }


    return 0;
}
