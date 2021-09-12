#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/*Preencher uma lista com 15 produtos com nome, codigo, preço, porcentagem de lucro e mostrar
  os produtos em seguide com todas as contas feitas*/

int main()
{

    char nome[16][1000];
    float codigo[15], preco[15], porc[15], lucro[15], soma;

    for (int i = 1; i <= 15; i++)
    {
        printf("\nDigite o nome do produto: ");
        scanf("%s", &nome[i]);
        printf("\nDigite o codigo do produto: ");
        scanf("%f", &codigo[i]);
        printf("\nDigite o preco do produto: ");
        scanf("%f", &preco[i]);
        printf("\nDigite a porcentagem de lucro do produto: ");
        scanf("%f", &porc[i]);
    }

    for (int i = 1; i <= 15; i++)
    {
        lucro[i] = preco[i] * (porc[i] / 100);
        soma = soma + lucro[i];
    }

    for (int f = 1; f <= 15; f++)
    {
        printf("\n Nome do produto: %s ", nome[f]);
        printf("\n Codigo do produto: %.2f", codigo[f]);
        printf("\n Preco do produto: %.2f", preco[f]);
        printf("\n Valor do lucro do produto: %.2f", lucro[f]);
    }
    // aqui eu imprimo a soma total
    printf("\nO lucro total da loja e de: %.2f", soma);
    // aqui finaliza
    return 0;
}