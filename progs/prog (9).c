#include <stdlib.h>
#include <stdio.h>

// Preencher um vetor com 15 numeros e inverter a ordem

int main()
{

    int vetor[15];

    printf("Insira 15 numeros no vetor: \n");
    for (int i = 0; i < 15; i++)
    {

        scanf("%i", &vetor[i]);
    }

    printf("\n O vetor inserido em ordem: \n");
    for (int i = 0; i < 15; i++)
    {
        printf("[%i] ", vetor[i]);
    }

    for (int i = 0; i < 7; i++)
    {
        int aux;
        aux = vetor[i];
        vetor[i] = vetor[14 - i];
        vetor[14 - i] = aux;
    }

    printf("\n Novo vetor com as ordens invertidas: \n");
    for (int i = 0; i < 15; i++)
    {
        printf("[%i] ", vetor[i]);
    }

    return 0;
}