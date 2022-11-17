#include <stdio.h>
#include <stdlib.h>

/*Faça um algoritmo que calcule a média ponderada das notas de 3 provas. A primeira e a segunda
prova têm peso 1 e a terceira tem peso 2. Ao final, mostrar a média do aluno e indicar se o aluno
foi aprovado ou reprovado. A nota para aprovação deve ser igual ou superior a 60 pontos
*/

int main()
{
    int nota1, nota2, nota3, result, peso1, peso2, peso3;

    printf("primeira nota: \n");
    scanf("%d", &nota1);
    printf("Segunda nota: \n");
    scanf("%d", &nota2);
    printf("terceira nota: \n");
    scanf("%d", &nota3);

    peso1 = nota1 * 10;
    peso2 = nota2 * 10;
    peso3 = nota3 * 20;

    result = (peso1 + peso2 + peso3) / 4;

    if(result >= 00 && result <= 300)
{

        if(result >= 60 && result <= 180)
            printf ("Aprovado %ddps", result);

        if (result <= 59 && result > 00)
            printf("Reprovado %dpts", result);
}
        else
{
        printf ("Nota invalida. %dpts\n", result);
    }
    return 0;
}
