#include <stdio.h>
#include <stdlib.h>

/*Leia uma velocidade em km/h (quil�metros por hora) e apresente-a convertida em m/s (metros
por segundo). A f�rmula de convers�o �: M = K/3.6, sendo K a velocidade em km/h e M em m/s*/

int main () {

    float km, m;

    printf("Digite uma velocidade em KM/H: ");
    scanf("%f", &km);
    m = km/3.6;
    printf("\nA temperatura convertida sera de: %2.f", m );

    return 0;


}
