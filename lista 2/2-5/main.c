#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*Leia um n�mero real. Se o n�mero for positivo imprima a raiz quadrada. Do contr�rio, imprima o
n�mero ao quadrado.
*/


int main()
{
    int num, n2;
    float raiz;
    printf("Digite um numero ");
    scanf("%d", &num);
    raiz = sqrt (num);
    n2 = num * num;
    if (num % 2 == 0){
        printf ("\n%f", raiz);
    }else{
        printf("\n%d", n2 );

    }
    return 0;
}
