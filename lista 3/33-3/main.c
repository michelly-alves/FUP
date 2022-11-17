#include <stdio.h>
#include <stdlib.h>

/*Chico tem 1.50 metro e cresce 2 centímetros por ano, enquanto Zé tem 1.10 metros e cresce 3
centímetros por ano. Escreva um programa que calcule e imprima quantos anos serão necessários
para que Zé seja maior que Chico.
*/

int main()
{
    int i, j = 0, c = 150, z = 110;

    while (z <= c ){
        c = c+ 2;
        z = z+ 3;
        j++;
        printf ("\n%d e %d", z, c);
    }
        printf("\n%d anos.", j);

    return 0;
}
