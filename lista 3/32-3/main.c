#include <stdio.h>
#include <stdlib.h>

/* Fa�a um algoritmo que converta uma velocidade expressa em km/h para m/s e vice versa. Voc�
deve criar um menu com as duas op��es de convers�o e com uma op��o para finalizar o
programa. O usu�rio poder� fazer quantas convers�es desejar, sendo que o programa s� ser�
finalizado quando a op��o de finalizar for escolhida */

int main()
{
    float km, ms;
    int vel;

    while ( vel != 3){

    printf("\n");
    printf("\n\n\tOpcoes");
    printf("\n[1] Converter km/h em m/s.\n");
    printf("\n[2] Converter m/s em km/h.\n");
    printf("\n[3] finalizar o programa.\n ");
    printf("\nDigite uma opcao: ");
    scanf("%d", &vel);

    if ( vel < 0 || vel > 3){
       break;
    }


    switch (vel){
        case 1:
        printf("\nentre com um numero: ");
        scanf ("%f", &km);
        ms = (km / 3.6);
        printf("\nConversao em m/s: %f", ms); break;


        case 2:
        printf("\nEntre com um numero: ");
        scanf ("%f", &ms);
        km = (ms * 3.6);
        printf("\nConversao em m/s: %f", km); break;
    }
    }
    return 0;
}
