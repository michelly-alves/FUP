#include <stdio.h>
#include <stdlib.h>
/*Faça um programa que peça ao usuário para digitar 10 valores e some-os.
*/
int main()
{
    int i, num, soma = 0;

    for (i = 1; i <= 10; i++){
        printf("Digite um Numero:\n");
        scanf ("\n%d", &num);

        soma += num;
    }
        printf ("%d\n", soma);

    return 0;
}
