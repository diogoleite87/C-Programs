#include <stdlib.h>
#include <stdio.h>
#include <math.h>
/* Usar ponteiro para definir o tamanho dos 3 vetores U, V e W.
   Depois calcular se a propriedade é verdadeira
   E calcular multiplicação e adição do vetor U e V.*/
int main()
{
    float *vetorU, *vetorV, *vetorW, U = 0, V = 0, W = 0, conta1 = 0, conta2 = 0;
    int tamanho;

    printf("\nDigite o tamanho dos 3 vetores: ");
    scanf("%i", &tamanho);

    vetorU = malloc(tamanho * sizeof(float));
    vetorV = malloc(tamanho * sizeof(float));
    vetorW = malloc(tamanho * sizeof(float));

    for (int i = 0; i < tamanho; i++)
    {
        printf("\nDigite o elemento %i do Vetor U: ", i + 1);
        scanf("%f", &vetorU[i]);
        printf("\nDigite o elemento %i do Vetor V: ", i + 1);
        scanf("%f", &vetorV[i]);
        printf("\nDigite o elemento %i do Vetor W: ", i + 1);
        scanf("%f", &vetorW[i]);
    }
    for (int i = 0; i < tamanho; i++)
    {
        U += vetorU[i];
        V += vetorV[i];
        W += vetorW[i];
    }

    conta1 = U * V;
    conta2 = U + V;

    if (U * (V + W) == U * V + U * W)
    {
        printf("\n A propriedade e verdadeira!");
    }
    else
    {
        printf("\n A propriedade 1 nao e verdadeira!");
    }

    printf("\nA multiplicacao do vetor U e V e: %.2f", conta1);
    printf("\nA soma dos vetores U e V e: %.2f", conta2);

    return 0;
}