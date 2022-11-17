#include <stdio.h>
#include <stdlib.h>

/*Faça um programa que receba um número inteiro e verifique se este número é par ou ímpar.*/


int main()
{
    int number;
    printf("Digite um numero:");
    scanf ("%d", &number);
    if( number % 2 == 0){
        printf("\nPar");
    }else{
        printf("\nImpar.");
    }
    return 0;
}
