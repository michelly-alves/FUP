#include <stdio.h>
#include <stdlib.h>
/*Faça um programa que leia um nome e imprima as 4 primeiras letras do nome.*/

int main()
{
    char srt[20];
    int i;

    printf("Digite um nome: ");
    gets(srt);

    for( i = 0; i < 3; i++){
        printf("%c", srt[i]);
    }
    return 0;
}
