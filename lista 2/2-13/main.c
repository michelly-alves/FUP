#include <stdio.h>
#include <stdlib.h>
/*Escreva um programa que leia um número inteiro de três algarismos maior do que zero e devolva,
na tela, a soma de todos os seus algarismos. Por exemplo, ao número 251 corresponderá ao valor
8 (2 + 5 + 1). Se o número lido não for maior do que zero, o programa terminará com a
mensagem: número invalido.*/

#include <stdio.h>

int main()
{
  int N, /* inteiro positivo dado (a ser lido) */
      soma, /* soma dos dígitos de N */
      digito; /* para armazenar cada digito de N */

  printf("Digite um numero inteiro positivo: ");
  scanf("%d", &N);
  printf("\n Numero dado = %d", N);

  soma = 0; /* Inicializacao da soma */

  while (N > 0){
    digito =  N % 10; /* o digito mais à direita de N é obtido */
    soma = soma + digito;
    N = N / 10;  /* N passa a ser o N anterior sem o dígito mais à direita */
  }

  printf("\n Soma dos digitos do numero dado = %d\n", soma);
  return 0;
}


