#include <stdio.h>
#include <stdlib.h>
/*Faça um programa que receba a altura e o sexo de uma pessoa e calcule  e mostre seu peso ideal, utilizando as
seguintes fórmulas (onde h corresponde a altura): ○ Homens: (72.7 *  h) - 58 ○ Mulheres: (62.1 *  h) - 44.7 */
int main()
{
    char S;
    float H, Hideal, Mideal;
    printf("Altura:");
    scanf("%f",&H);
    printf("sexo (F ou M):");
    fflush(stdin);
    scanf("%c", &S);
    Hideal = (72.7 * H) - 58;
    Mideal = (62.1 * H) - 44.7;
    if (S == 'F'){
        printf ("Peso Ideal: %f", Mideal);
    }else{
        printf ("Peso Ideal: %f", Hideal);
    }


    return 0;
}
