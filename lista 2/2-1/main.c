#include <stdio.h>
#include <stdlib.h>
//Faça um programa que leia um número e informe se ele é igual a zero.
int main()
{
    float n;
    printf("Digite um numero\n");
    scanf("%f", &n);
    if (n == 0){
        printf("Esse numero é igual a 0! ");
    }else{
        printf("Esse numero não é igual a zero ");
    }


    return 0;
}
