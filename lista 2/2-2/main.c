#include <stdio.h>
#include <stdlib.h>
// Faça um programa que leia um número e informe se ele é positivo
int main()
{
    float n;
    printf("\nDigite um numero");
    scanf("%f", &n);
    if (n >= 0 ){
        printf("Esse numero é positivo. ");
    }else{
        printf("\nEsse numero não é positivo. ");
    }



    return 0;
}
