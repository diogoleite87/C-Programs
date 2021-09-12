#include <stdio.h>
#include <stdlib.h>
/* Criar um programa de venda de passagem, com opção 1-Vender passagem, 2- Mostrar mapa de ocupacao, 3-Encerrar
   Se escolher vender passagem, devera perguntar se deseja janela e corredor, se a poltrona estiver vazia, devera mostrar
   que a venda foi efetivada, se estivar ocupada, devera mostrar que a poltrona esta indisponivel
   Se escolher mostrar mapa de ocupação, deve mostrar as poltronas ocupada e disponiveis*/
int main()
{
    int usuario, janela[24], corredor[24], lugar, num;

    for (int i = 1; i <= 24; i++)
    {
        janela[i] = 0;
        corredor[i] = 0;
    }

    printf("\nInsira a opcao que deseja executar:\n 1 - Vender passagem; \n 2 - Mostrar mapa de ocupacao do onibus; \n 3 - Encerrar.\n");
    scanf("%i", &usuario);

    while (usuario != 3)
    {

        switch (usuario)
        {
        case 1:

            printf("\nInsira a opcao que deseja: \n 1 - Janela \n 2 - Corredor \n");
            scanf("%i", &lugar);

            switch (lugar)
            {
            case 1:

                printf("\n Poltronas da Janela disponiveis: ");
                for (int i = 1; i <= 24; i++)
                {
                    if (janela[i] == 0)
                    {
                        printf(" %i ", i);
                    }
                }
                printf("\nDigite o numero da poltrona: ");
                scanf("%i", &num);
                if (janela[num] == 0)
                {
                    printf("\nVenda efetivada.\n");
                    janela[num] = 1;
                }
                else
                {
                    printf("\nPoltrona ocupada.\n");
                }

                break;

            case 2:

                printf("\n Poltronas do corredor disponiveis: ");
                for (int i = 1; i <= 24; i++)
                {
                    if (corredor[i] == 0)
                    {
                        printf(" %i ", i);
                    }
                }
                printf("\nDigite o numero da poltrona: ");
                scanf("%i", &num);
                if (corredor[num] == 0)
                {
                    printf("\nVenda efetivada.\n");
                    corredor[num] = 1;
                }
                else
                {
                    printf("\nPoltrona ocupada.\n");
                }

            default:

                printf("\n\nOpcao invalida\n\n");

                break;
            }

            break;

        case 2:

            printf("\nMapa de ocupacao do onibus: \n Poltronas do corredor disponiveis: ");

            for (int i = 1; i <= 24; i++)
            {
                if (corredor[i] == 0)
                {
                    printf(" %i ", i);
                }
            }
            printf("\n Poltronas da janela disponiveis:   ");

            for (int i = 1; i <= 24; i++)
            {
                if (janela[i] == 0)
                {
                    printf(" %i ", i);
                }
            }
            printf("\n Poltronas do corredor ocupado: ");

            for (int i = 1; i <= 24; i++)
            {
                if (corredor[i] == 1)
                {
                    printf(" %i ", i);
                }
            }
            printf("\n Poltronas da janela ocupado: ");

            for (int i = 1; i <= 24; i++)
            {
                if (janela[i] == 1)
                {
                    printf(" %i ", i);
                }
            }

            break;

        default:

            printf("\n\nOpcao invalida!\n\n");

            break;
        }

        printf("\nInsira a proxima operacao:\n 1 - Vender passagem; \n 2 - Mostrar mapa de ocupacao do onibus; \n 3 - Encerrar.\n");
        scanf("%i", &usuario);
    }

    return 0;
}