#include <stdio.h>
#include <stdlib.h>
/*Faça um programa que leia duas notas de um aluno, verifique se as notas são válidas e
exibana tela a média destas notas. Uma nota válida deve ser, obrigatoriamente,umvalorentre0.0e10.0,
onde caso a nota não possua um valor válido, este fato deve ser informado ao usuário e o programa termina. */

int main()
{
    float nota1, nota2;
    float media;
    printf("Digite a 1º nota:");
    scanf ("%f", &nota1);
    printf("Digite a 2º nota:");
    scanf ("%f", &nota2);
    media = (nota1 + nota2) / 2;
    if((nota1 >= 0) && (nota1 <=10.0) && (nota2 >= 0.0) && (nota2<= 10.0)){
        printf ("%2.f", media);
    }else{
        printf("\nnota invalida");
    }

    return 0;
}
