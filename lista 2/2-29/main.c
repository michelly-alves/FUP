#include <stdio.h>

/*29. Leia uma data e determine se ela é válida. Ou seja, verifique se o mês está entre 1 e
12, e se o dia existe naquele mês. Note que Fevereiro tem 29 dias em anos bissextos, e 28 dias em anos não
bissextos.*/

int main()
{
    int dd, mm, aa;

    printf("Data (Dia/Mes/Ano): ");
    scanf("%d/%d/%d", &dd, &mm, &aa);

    //Ano
    if (aa >= 1500 && aa <= 9999)
    {
        //Mês
        if (mm >= 1 && mm <= 12)
        {
            //31 dias
            if ((dd >= 1 && dd <= 31) && (mm == 1 || mm == 3 || mm == 5 || mm == 7 || mm == 8 || mm == 10 || mm == 12))
                printf("Data valida.\n");
            //30 dias
            else if ((dd >= 1 && dd <= 30) && (mm == 4 || mm == 6 || mm == 9 || mm == 11))
                printf("Data valida.\n");
            //28 dias
            else if ((dd >= 1 && dd <= 28) && (mm == 2))
                printf("Data valida.\n");
            //29 + ano bissexto
            else if (dd == 29 && mm == 2 && (aa % 400 == 0 || (aa % 4 == 0 && aa % 100 != 0)))
                printf("Data valida.\n");

            else
                printf("Data invalido.\n");
        }
        else
        {
            printf("Data invalido.\n");
        }
    }
    else
    {
        printf("Data invalido.\n");
    }

    return 0;
}
