#include <stdio.h>
//Leia um número fornecido pelo usuário. Se esse número for positivo, calcule a raiz quadrada do
//número. Se o número for negativo, mostre uma mensagem dizendo que o número é inválido.
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
