#include <stdio.h>
#include <stdlib.h>

/*Escreva um programa que, dados dois n�meros inteiros, mostre na tela o maior deles, assim como
a diferen�a existente entre ambos*/

int main()
{
    int num1, num2, dif1, dif2;
    printf("Digite dois numeros: ");
    scanf ("%d %d", &num1, &num2);
    dif1 = num1 - num2;
    dif2 = num2 - num1;
    if( num1 > num2){
        printf ("\n o maior numero ser� %d e a diferen�a entre %d e %d ser� de %d", num1, num1, num2, dif1);

    }else{
        printf ("\n o maior numero ser� %d e a diferen�a entre %d e %d sera de %d", num2, num2, num1, dif2);

    }
    return 0;
}
