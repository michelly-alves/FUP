#include <stdio.h>
#include <stdlib.h>

/*Leia o salário de um trabalhador e o valor da prestação de um empréstimo.
Se a prestação for maior que 20% do salário imprima: Emprestimo não concedido,
caso contrário imprima: Emprestimo concedido*/

int main()
{
    float salario, salariop, prestacao;
    printf("salario: ");
    scanf("%f", &salario);
    printf("prestação: ");
    salariop = salario * 0.2;
    scanf("%f", &prestacao);
    if( prestacao > salariop ){
        printf("Emprestimo não concebido.");
    }else{
        printf("Emprestimo concebido.");
    }
    return 0;
}
