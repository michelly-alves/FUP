#include <stdio.h>
#include <stdlib.h>

/* Escreva um algoritmo que leia um número inteiro entre 100 e 999 e imprima na saída cada um
dos algarismos que compõem o número.*/

int main()
{
    int i, num, div, a, b, c;
    printf("\nDigite um algorismo entre 100 e 999: ");
    scanf("%d", &num);
    while ( num < 100 || num > 999){
        printf("\nNumero invalido, tente novamente: ");
        scanf("%d", &num);
    }
    while ( i = num ){
      a =  num % 10;
        printf("\t%d", a);
      i =  num  % 100;
      b = b - num;
      b = b / 10;
        printf("\t%d", b);
      i =  num  % 1000;
      c = c - num;
      c = c/ 100;
        printf("\t%d", c);
        break;


    }
    return 0;
}
