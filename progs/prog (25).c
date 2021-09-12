#include <stdlib.h>
#include <stdio.h>

/*O objetivo desse programa é inserir 15 produtos com nome, codigo e preço.
para produtos com codigo par e preço > 1550 vai ter um aumento de 20% no preço
para produtos com somente o codigo par, tera um aumento de 10%
para produtos com somente preço > 1550, tera um aumento de 15% no valor.*/

int main()
{
    int codigo[15];
    float preco[15];
    char nome[15][1000];

    printf("\nA seguir voce devera inserir nome do produto, codigo e preco.");
 
    for (int i = 0; i < 15; i++)
    {
        printf("\nNome do produto %i: ", i + 1);
        fgets(nome[i], 1000, stdin);
        fflush(stdin);

        printf("\nDigite o codigo do produto %i: ", i + 1);
        scanf("%i", &codigo[i]);
        fflush(stdin);

        printf("\nDigite o preco do produto %i: ", i + 1);
        scanf("%f", &preco[i]);
        fflush(stdin);
    }

    for (int i = 0; i < 15; i++)
    {
        if (codigo[i] % 2 == 0 && preco[i] > 1550)
        {
            printf("\nNome do produto: %s", nome[i]);
            printf("Codigo do produto: %i", codigo[i]);
            printf("\nPreco atual do produto: %.2f", preco[i]);
            printf("\nNovo preco do produto: %.2f\n", preco[i] * 1.20);
        }
        else if (codigo[i] % 2 == 0)
        {
            printf("\nNome do produto: %s", nome[i]);
            printf("Codigo do produto: %i", codigo[i]);
            printf("\nPreco atual do produto: %.2f", preco[i]);
            printf("\nNovo preco do produto: %.2f\n", preco[i] * 1.10);
        }
        else if (preco[i] > 1550)
        {
            printf("\nNome do produto: %s", nome[i]);
            printf("Codigo do produto: %i", codigo[i]);
            printf("\nPreco atual do produto: %.2f", preco[i]);
            printf("\nNovo preco do produto: %.2f\n", preco[i] * 1.15);
        }
        else
        {
            printf("\nNome do produto: %s", nome[i]);
            printf("Codigo do produto: %i", codigo[i]);
            printf("\nPreco atual do produto: %.2f", preco[i]);
            printf("\nEsse produto nao teve alteracao de preco.\n");
        }
    }

    return 0;
}