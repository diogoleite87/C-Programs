#include <stdlib.h>
#include <stdio.h>
/* O objetivo do codigo é criar um vetor usando ponteiro, solicitar o tamanho do vetpr
   depois de inserir os valores, o programa deve retornar os numeros pares*/
int main()
{

    int *ponteiro, tamanho;

    printf("\nDigite o tamanho do ponteiro (Quantidade de numeros que deseja inserir no vetor): ");
    scanf("%i", &tamanho);

    ponteiro = malloc(tamanho * sizeof(int));

    for (int i = 0; i < tamanho; i++)
    {
        printf("\nDigite o numero inteiro de posicao %i: ", i + 1);
        scanf("%i", &ponteiro[i]);
    }

    printf("\nNumeros pares: ");

    for (int i = 0; i < tamanho; i++)
    {
        if (ponteiro[i] % 2 == 0)
        {
            printf(" %i ", ponteiro[i]);
        }
    }

    return 0;
}