#include <stdio.h>
#include <stdlib.h>

/*Leia um número inteiro e imprima o seu antecessor e o seu sucessor.
*/

int main()
{
    int n, n1, n2;
    printf("Digite um numero: \n");
    scanf("%d", &n);
    n1 = n - 1;
    n2 = n + 1;
    printf("%d %d", n1, n2);
    return 0;
}
