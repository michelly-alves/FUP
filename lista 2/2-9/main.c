#include <stdio.h>
#include <stdlib.h>
/*Fa�a um programa que receba dois n�meros e mostre o maior. Se por acaso, os dois n�meros
forem iguais, imprima a mensagem: n�meros iguais
*/

int main()
{
    int num1, num2;
    printf("Digite um numero: ");
    scanf("%d", &num1);
    printf("Digite outro numero:");
    scanf ("%d", &num2);
    if(num1 > num2){
        printf("\n%d � maior que %d", num1, num2);
    }else{
        if(num1 == num2){
        printf("\nOs numeros s�o iguais");
    }else{
        printf("\n%d � maior que %d", num2, num1);
    }

    }

    return 0;
}
