#include <stdio.h>
#include <stdlib.h>
// Fa�a um programa que leia um n�mero e informe se ele � positivo
int main()
{
    float n;
    printf("\nDigite um numero");
    scanf("%f", &n);
    if (n >= 0 ){
        printf("Esse numero � positivo. ");
    }else{
        printf("\nEsse numero n�o � positivo. ");
    }



    return 0;
}
