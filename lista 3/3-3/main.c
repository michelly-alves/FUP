#include <stdio.h>
#include <stdlib.h>

/* Faça um algoritmo utilizando o comando while que mostra uma contagem regressiva na tela, iniciando em 10 e terminando em 0. */

int main()
{
    int i;
    i = 10;
    while (i > 0){
        printf ("\t%d", i);
        i = i - 1;
    }
    return 0;
}
