#include <stdio.h>
#include <stdlib.h>

/* Faça um programa que receba um número inteiro maior do que 1, e verifique se o número fornecido é primo ou não.*/

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
        printf("não primo.");
        }
    }
    return 0;
}
