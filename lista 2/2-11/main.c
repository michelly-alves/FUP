#include <stdio.h>
#include <stdlib.h>

/*Leia o sal�rio de um trabalhador e o valor da presta��o de um empr�stimo.
Se a presta��o for maior que 20% do sal�rio imprima: Emprestimo n�o concedido,
caso contr�rio imprima: Emprestimo concedido*/

int main()
{
    float salario, salariop, prestacao;
    printf("salario: ");
    scanf("%f", &salario);
    printf("presta��o: ");
    salariop = salario * 0.2;
    scanf("%f", &prestacao);
    if( prestacao > salariop ){
        printf("Emprestimo n�o concebido.");
    }else{
        printf("Emprestimo concebido.");
    }
    return 0;
}
