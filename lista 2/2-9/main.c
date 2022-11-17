#include <stdio.h>
#include <stdlib.h>
/*Faça um programa que receba dois números e mostre o maior. Se por acaso, os dois números
forem iguais, imprima a mensagem: números iguais
*/

int main()
{
    int num1, num2;
    printf("Digite um numero: ");
    scanf("%d", &num1);
    printf("Digite outro numero:");
    scanf ("%d", &num2);
    if(num1 > num2){
        printf("\n%d é maior que %d", num1, num2);
    }else{
        if(num1 == num2){
        printf("\nOs numeros são iguais");
    }else{
        printf("\n%d é maior que %d", num2, num1);
    }

    }

    return 0;
}
