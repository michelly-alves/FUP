#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*Ler um conjunto de números reais, armazenando-o em vetor e calcular o quadrado das
componentes deste vetor, armazenando o resultado em outro vetor. Os conjuntos têm 10
elementos cada. Imprimir todos os conjuntos.
*/
int main()
{
    int vetor1[10], vetor2[10], qua, i, j;

    for(i = 0; i < 10; i++){
        printf("Digite um valor: ");
        scanf("%d", &vetor1[i]);
        qua = pow(vetor1[i], 2);
        vetor2[i] = qua;


    }
    for(j = 0; j < 10; j++){
        printf("\nvetor 1: %d", vetor1[j]);
        printf("\tvetor 2: %d",  vetor2[j]);
        }


    return 0;
}
