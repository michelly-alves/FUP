#include <stdio.h>
//Leia um n�mero fornecido pelo usu�rio. Se esse n�mero for positivo, calcule a raiz quadrada do
//n�mero. Se o n�mero for negativo, mostre uma mensagem dizendo que o n�mero � inv�lido.
int main()
{
    int n;
    printf("Digite um numero positivo: ");
    scanf("%d", &n);
    if (n % 2 == 0){
        printf("Par");
    } else{
        printf("impar");
    }
    return 0;
}
