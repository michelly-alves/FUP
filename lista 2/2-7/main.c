#include <stdio.h>
#include <stdlib.h>

/*Fa�a um programa que receba um n�mero inteiro e verifique se este n�mero � par ou �mpar.*/


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
