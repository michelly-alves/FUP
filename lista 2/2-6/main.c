#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*Faça um programa que leia um número e, caso ele seja positivo, calcule e mostre:
○ O número digitado ao quadrado
○ A raiz quadrada do número digitado
*/

int main()
{
    int num, n2;
    float raiz;


    printf("Digite um numero par: ");
    scanf("%d", &num);
    raiz = sqrt (num);
    n2 = num * num;
    if (num % 2 == 0){
        printf ("\nnumero ao quadrado: %d", n2);
        printf("\nraiz quadrada do numero: %f", raiz);
    }else{
        printf ("Numero invalido.");

    }
    return 0;
}
