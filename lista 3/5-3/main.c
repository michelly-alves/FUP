#include <stdio.h>
#include <stdlib.h>

/* Fa�a um programa que receba um n�mero inteiro maior do que 1, e verifique se o n�mero fornecido � primo ou n�o.*/

int main()
{
    int num, i, count = 0;
    printf("digite um numero: \n");
    scanf ("%d", &num);
    if (num > 1 ){
        for ( i = 1; i <= num; i++){
            if (num % i == 0){
                count++;
            }
        }
    if (count == 2)
        {
        printf("primo.");
        }else{
        printf("n�o primo.");
        }
    }
    return 0;
}
