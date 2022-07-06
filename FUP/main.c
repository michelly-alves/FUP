#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

char palavra[20], auxpalavra[20];
int erros = 0, linhas;

struct          ///dados do jogador
{
    char nome[10];
    int pontos ;

} jogador;

char adicionar_palavra()  /// adicionar palavra no arquivo
{

    FILE *arquivo = fopen("palavrasec.txt", "a+");
    if (arquivo == NULL)
    {
        printf("erro de abertura");
    }
    printf("\nNova palavra:");
    scanf("%s", &palavra);

    fprintf(arquivo, "%s\n",palavra);
    gera_palavra();
    fclose(arquivo);

    zera_aux();

}
void gera_palavra()
{
    int cont = 1;
    FILE *arquivo = fopen("palavrasec.txt", "a+");
    if (arquivo == NULL)
    {
        printf("erro de abertura");
    }
    srand(time(NULL));
    fscanf(arquivo,"%s",palavra);
    while(!feof(arquivo))   ///contando as linhas do arquivo
    {
        fscanf(arquivo,"%s",palavra);
        cont++;
    }
    rewind(arquivo);

    int num_rand = rand()%cont, i;

    for (i = 0; i <= num_rand; i++)     ///palavra aleatoria
    {
        fgets(palavra, sizeof(palavra), arquivo);
        palavra[strlen(palavra)-1]= '\0';
    }
    fclose(arquivo);

    forca(0);
    zera_aux();
}
void escolher_acao()
{
    int escolha;
    erros = 0;
    printf("\n1 - Adicionar palavra.");
    printf("\n2 - Jogar com as existentes.");
    printf("\n3 - Sair.");
    scanf("%d", &escolha);
    if(escolha == 1)
    {
        adicionar_palavra();
    }
    else if (escolha == 2)
    {
        gera_palavra();

    }
    else if (escolha == 3)
    {
        printf("\njogador %s com %d pontos\n", jogador.nome, jogador.pontos);
        exit (1);
    }

    return;
}

void forca(int erro)
{
    if(erro == 0)
    {
        printf("\n_________");
        printf("\n|/");
        printf("\n|");
        printf("\n|");
        printf("\n|");
        printf("\n|");
        printf("\n|");
    }
    else if(erro == 1)
    {
        printf("\n_________");
        printf("\n|/      0");
        printf("\n|");
        printf("\n|");
        printf("\n|");
        printf("\n|");
        printf("\n|");
    }
    else if( erro == 2)
    {

        printf("\n_________");
        printf("\n|       0");
        printf("\n|       |");
        printf("\n|");
        printf("\n|");
        printf("\n|");
        printf("\n|");
    }
    else if( erro == 3)
    {

        printf("\n_________");
        printf("\n|       0");
        printf("\n|       |\\");
        printf("\n|");
        printf("\n|");
        printf("\n|");
        printf("\n|");
    }
    else if( erro == 4)
    {

        printf("\n_________");
        printf("\n|       0");
        printf("\n|      /|\\");
        printf("\n|");
        printf("\n|");
        printf("\n|");
        printf("\n|");
    }
    else if( erro == 5)
    {

        printf("\n_________");
        printf("\n|       0");
        printf("\n|      /|\\");
        printf("\n|      /");
        printf("\n|");
        printf("\n|");
        printf("\n|");
    }
    else if( erro == 6)
    {

        printf("\n_________");
        printf("\n|       0");
        printf("\n|      /|\\");
        printf("\n|      / \\");
        printf("\n|");
        printf("\n|");
        printf("\n|");
        printf("\nvocê perdeu");
        printf("\nA palavra era: %s\n", &palavra);

        zera_aux();
        escolher_acao();

    }

}
void zera_aux()
{
    int j;
    strcpy(auxpalavra, palavra);
    for(j=0; j < strlen(auxpalavra); j++) /// trocando os caracteres das letras por '_'
    {
        auxpalavra[j] = '_';
    }

}
void palavrasecreta()
{
    int j;
     for(j=0; j < strlen(auxpalavra); j++)
    {
        printf("%c ", auxpalavra[j]);
    }
}
int main()
{
    struct jogador;
    char letra;
    int i;


    printf("______________________");
    printf("\n____Jogo da Forca___");
    printf("\n____________________");

    printf("\nJogador:");
    scanf("%s", &jogador.nome);

    escolher_acao();
    strcpy(auxpalavra, palavra); ///copiando pra outra string para que fiquem do mesmo tamanho
    zera_aux();
    palavrasecreta();

    while ((erros < 6 && erros >=0) || strcpy(palavra, auxpalavra)==0)
    {
        printf("\nletra:");
        scanf(" %c", &letra);

        int existe = 1;
        for (i = 0; i < strlen(palavra); i++)
        {

            if(letra == palavra[i]) ///letra igual a palavra[i]
            {
                auxpalavra[i] = letra;
                printf("%c", auxpalavra[i]);
                existe = 0;

            }
            else
            {
                printf(" %c ", auxpalavra[i]); /// pra guardar as letras anteriores
            }
        }

        if (existe == 1) ///caso não exista nenhuma letra em comum contabiliza um erro.
        {
            erros++;
        }
        forca(erros);
        int acertou = 0;
        for( i =0; i < strlen(palavra); i++)
        {
            if(auxpalavra[i] == palavra[i]) ///conferindo se os '_' já estão todos preenchidos
            {
                acertou++;
                if (acertou == strlen(palavra))
                {
                    printf("\nvoce ganhou");
                    jogador.pontos++;
                    zera_aux();
                    escolher_acao();
                }
            }
        }
    }


    return 0;
}
