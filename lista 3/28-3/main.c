#include <stdio.h>
#include <stdlib.h>

/*Fa�a um programa que some os n�meros �mpares contidos em um intervalo definido pelo usu�rio. Caso o usu�rio digite um intervalo
inv�lido (come�ando por um valor maior que o valor final) deve ser escrito uma mensagem de
erro na tela, �Intervalo de valores inv�lido� e o programa termina*/

int main()
{
    int a, b, i, soma = 0;

    printf("Digite o numero inicial e final: ");
    scanf("%d %d", &a, &b);


    if (b < a)
        printf("\nIntervalo de valores invalidos.");

    for (i = a; i < b; i++){
        if ( i % 2 != 0){
        soma += i;
        }
    }

    printf("Resultado da soma dos numeros impares contidos nesse intervalo: %d\n", soma);

    return 0;
}
