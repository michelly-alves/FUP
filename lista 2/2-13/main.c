#include <stdio.h>
#include <stdlib.h>
/*Escreva um programa que leia um n�mero inteiro de tr�s algarismos maior do que zero e devolva,
na tela, a soma de todos os seus algarismos. Por exemplo, ao n�mero 251 corresponder� ao valor
8 (2 + 5 + 1). Se o n�mero lido n�o for maior do que zero, o programa terminar� com a
mensagem: n�mero invalido.*/

#include <stdio.h>

int main()
{
  int N, /* inteiro positivo dado (a ser lido) */
      soma, /* soma dos d�gitos de N */
      digito; /* para armazenar cada digito de N */

  printf("Digite um numero inteiro positivo: ");
  scanf("%d", &N);
  printf("\n Numero dado = %d", N);

  soma = 0; /* Inicializacao da soma */

  while (N > 0){
    digito =  N % 10; /* o digito mais � direita de N � obtido */
    soma = soma + digito;
    N = N / 10;  /* N passa a ser o N anterior sem o d�gito mais � direita */
  }

  printf("\n Soma dos digitos do numero dado = %d\n", soma);
  return 0;
}


