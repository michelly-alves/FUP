#include <stdio.h>
#include <stdlib.h>
/* Leia um ânguloemradianoseapresente-oconvertidoemgraus.Afórmulade
conversãoé:G=R * 180 / 𝜋, sendo G o ângulo em graus e R em radianos e  𝜋 = 3.14.*/
int main()
{
    float r, g;
    printf("Digite um angulo em rad: ");
    scanf ("%f", &r);
    g = (r * 180) / 3.14;
    printf ("R: %f", g);
    return 0;
}
