#include <stdio.h>
#include <stdlib.h>
/*A import�ncia de R$ 780.000,00 ser� dividida entre tr�s ganhadores de um concurso. Sendo que
da quantia total:
a. O primeiro ganhador receber� 46%;
b. O segundo receber� 32%;
c. O terceiro receber� o restante;*/
int main()
{
    float g1, g2, g3, i = 780.000;
    g1 = i * 0.46;
    g2 = i * 0.32;
    g3 = i - (g1 + g2);
    printf("primeiro ganhador: %f \n", g1);
    printf("Segundo Ganhador: %f \n", g2);
    printf("Terceiro Ganhador: %f \n", g3);
    return 0;
}
