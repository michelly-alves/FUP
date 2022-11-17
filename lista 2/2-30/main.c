#include <stdio.h>
#include <stdlib.h>
/*Faça um algoritmo que calcule o IMC de uma pessoa e mostre sua classificação de acordo com a
tabela */

int main()
{
    float  altura,peso, imc;
    printf("Digite sua altura(em metros ex: 1.71): \n");
    scanf ("%f", &altura);
    printf ("Digite seu peso (em kg ex 58.100):\n");
    scanf ("%f", &peso);
    imc = peso / (altura * altura);
    if (imc < 18.5){
        printf("Abaixo do peso. IMC = %f \n", imc);
    }
    if (imc >= 18.6 && imc <= 24.9) {
        printf ("Saudável. IMC = %f \n", imc);
    }
    if ( imc >= 25.0 && imc <= 29.9){
        printf("Peso em excesso. IMC = %f \n", imc);
    }
    if ( imc >= 30.0 && imc <= 34.9){
        printf ("Obesidade grau 1. IMC = %f \n", imc);
    }
    if (imc >= 35.0 && imc <= 39.9){
        printf("Obsedidade grau 2. IMC = %f \n", imc);
    }
    if (imc >= 40.0){
        printf ("Obesidade grau 3. IMC = %f \n", imc);
    }
    return 0;
}
