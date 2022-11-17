#include <stdio.h>
#include <stdlib.h>
/*Digite um nome, calcule e retorne quantas letras tem esse nome*/
int main()
{
    char srt[20];
    int i, count = 0;
    printf("Digite um nome: ");
    gets(srt);
    for( i = 0; srt[i] != '\0'; i++){
        count++;
    }
    printf("tem %d letras.", count);
    return 0;
}
