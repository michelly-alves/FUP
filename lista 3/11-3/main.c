#include <stdio.h>
#include <stdlib.h>
/*Fa�a um programa que calcule e mostre a soma dos 50 primeiros n�meros pares.*/
int main()
{
    int i, par = 0;


    for ( i = 0; i <= 100; i++){
    if ( i % 2 == 0)

    par += i;


    }
    printf("\n%d", par);
    return 0;
}
