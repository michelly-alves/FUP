#include <stdio.h>
#include <stdlib.h>
/*Fa�a um programa que leia duas notas de um aluno, verifique se as notas s�o v�lidas e
exibana tela a m�dia destas notas. Uma nota v�lida deve ser, obrigatoriamente,umvalorentre0.0e10.0,
onde caso a nota n�o possua um valor v�lido, este fato deve ser informado ao usu�rio e o programa termina. */

int main()
{
    float nota1, nota2;
    float media;
    printf("Digite a 1� nota:");
    scanf ("%f", &nota1);
    printf("Digite a 2� nota:");
    scanf ("%f", &nota2);
    media = (nota1 + nota2) / 2;
    if((nota1 >= 0) && (nota1 <=10.0) && (nota2 >= 0.0) && (nota2<= 10.0)){
        printf ("%2.f", media);
    }else{
        printf("\nnota invalida");
    }

    return 0;
}
