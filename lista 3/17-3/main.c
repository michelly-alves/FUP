#include <stdio.h>
#include <stdlib.h>

/*. Faça um programa que leia um número inteiro positivo n e calcule a soma dos n primeiros
números naturais*/

int main()
{
    int i, num, soma = 0;

    printf("\nDigite um numero: ");
    scanf("%d", &num);

    while (num < 0){
        printf("\nNumero invalido, tente novamente: ");
        scanf("%d", &num);
    }

    for ( i = 0; i <= num; i++){
        soma += i;
        printf("\n%d", i);
    }
      printf("\n%d", soma);
    return 0;
}
