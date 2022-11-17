#include <stdio.h>
#include <stdlib.h>

/*Escreva um programa que leia um número inteiro positivo n e em seguida imprima n linhas do
chamado Triângulo de Floyd. Para n = 6, temos:
*/

int main()
{
    int i, j, n = 6, c = 0;
    printf("Digite um numero: \n");
    scanf("%d", &n);

        for (i = 1; i <= n; i++){
            for (j = 1; j<= i; j++){
                c++;
                printf("%d ", c);
            }
            printf("\n");
        }
    return 0;
}
