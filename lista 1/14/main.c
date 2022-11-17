#include <stdio.h>
#include <stdlib.h>
/*Leia um ânguloemgrauseapresente-o
convertidoemradianos.Afórmuladeconversãoé:R=G * 𝜋 /180, sendo G o ângulo em graus e R em radianos e  𝜋 = 3.14.*/
int main()
{
    float r, g;
    printf("Digite um angulo em graus: ");
    scanf ("%f", &g);
    r = g * 3.14 / 180;
    printf ("R: %f", r);
    return 0;
}
