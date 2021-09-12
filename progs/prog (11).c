#include <stdlib.h>
#include <stdio.h>

// Esse é um programa de Banco, onde o usuario pode efetuar deposito, efetuar saque, consultar saldo do banco e finalizar o programa.

int main()
{

    int opcao, opcao2;
    float codigos[1000], saldos[1000], aux3, saldototal;

    for (int i = 1; i <= 1000; i++)
    {
        codigos[i] = 0;
        saldos[i] = 0;
    }

    printf("\n\n Digite a opcao que deseja: \n\n 1 - Efetuar deposito \n 2 - Efetuar Saque \n 3 - Consultar saldo \n 4 - Finalizar programa \n\n");
    scanf("%i", &opcao);

    while (opcao != 4)
    {
        saldototal = 0;
        int aux = 0, aux4 = 0;

        if (opcao != 3)
        {
            printf("Digite a conta que deseja fazer tal operacao: \n");
            scanf("%i", &aux);
        }

        if (codigos[aux] != aux && opcao != 3)
        {
            printf("Voce precisa cadastrar essa conta, deseja cadastrar agora? Digite: \n 1-Sim \n 2-Nao \n");
            scanf("%i", &opcao2);
            if (opcao2 == 1)
            {
                codigos[aux] = aux;
                printf("Digite o saldo inicial da conta: \n");
                scanf("%f", &aux3);
                saldos[aux] = saldos[aux] + aux3;
            }
            else
            {
                printf("\n Conta nao cadastrada \n");
                aux4 = 1;
            }
        }

        if (opcao == 1 && aux4 == 0)
        {
            float aux2 = 0;
            printf("Digite quantos deseja depositar na conta: \n");
            scanf("%f", &aux2);
            saldos[aux] = saldos[aux] + aux2;
            printf("\n\n O saldo atual e de: %.2f reais.\n\n", saldos[aux]);
        }

        if (opcao == 2 && aux4 == 0)
        {
            printf("Saldo atual dessa conta e de: %.2f reais.\n", saldos[aux]);
            printf("Digite o valor que deseja sacar: \n");
            scanf("%f", &aux3);

            if (aux3 <= saldos[aux])
            {
                saldos[aux] = saldos[aux] - aux3;
                printf("Saldo atual da conta: %.2f reais \n", saldos[aux]);
            }
            else
            {
                printf("\n O valor disponivel na conta e inferior ao valor de saque. \n");
            }
        }

        if (opcao == 3)
        {

            for (int i = 1; i <= 1000; i++)
            {
                saldototal = saldototal + saldos[i];
            }
            printf("O valor total do banco e %.2f reais.\n", saldototal);
        }

        printf("\n\n Digite a opcao que deseja: \n\n 1 - Efetuar deposito \n 2 - Efetuar Saque \n 3 - Consultar saldo \n 4 - Finalizar programa \n\n");
        scanf("%i", &opcao);
    }

    return 0;
}