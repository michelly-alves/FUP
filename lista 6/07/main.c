#include <stdio.h>
#include <stdlib.h>
/*Faça um programa que conta o número de 1’s que aparecem em um string.
Exemplo: “0011001” -> 3*/

int main()
{
    char srt[50];
    int i, count = 0;

    printf("Digite um numero binario: ");
    gets(srt);

    for (i = 0; srt[i] != '\0'; i++){
        if( srt[i] == '1'){
            count++;
        }
    }

    printf("tem %d 1´s", count);
    return 0;
}
