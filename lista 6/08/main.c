#include <stdio.h>
#include <stdlib.h>
/*Escreva um programa que substitui as ocorrências de um caractere ‘0’ em uma string por outro
caractere ‘1’.
*/
int main()
{
    char srt[20], srt2[20];
    int i;

    printf("Digite um numero binário: ");
    gets(srt);

    for(i = 0; srt[i] != '\0'; i++){
        if (srt[i] == '0'){
            srt[i] = '1';
        }
    }

        printf("%s", srt);



    return 0;



}
