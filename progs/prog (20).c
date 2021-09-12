#include <stdlib.h>
#include <stdio.h>
#include <math.h>
/* O objetivo desse programa é calcular a projeção de V sobre W
   Calcular tambem produto escalar e norma escalar.
   O programa deve ser escrito usando 2 ponteiros.*/
int main()
{

    int *W, *V, tamanho, somaW = 0, somaV = 0, normaW = 0, produtoescalar, W2 = 0;
    float projecao;

    printf("\nDigite o tamanho dos vetores W e V: ");
    scanf("%i", &tamanho);

    W = malloc(tamanho * sizeof(int));
    V = malloc(tamanho * sizeof(int));

    printf("\nDigite os elementos dos vetores W e V:");

    for (int i = 0; i < tamanho; i++)
    {
        printf("\nDigite o numero para o vetor W[%i]: ", i + 1);
        scanf("%i", &W[i]);
        printf("\nDigite o numero para o vetor V[%i]: ", i + 1);
        scanf("%i", &V[i]);
    }
    for (int i = 0; i < tamanho; i++)
    {
        if (i % 2 != 0)
        {
            somaV += W[i] * V[i];
        }
        else
        {
            somaW += W[i] * V[i];
        }
    }
    for (int i = 0; i < tamanho; i++)
    {
        normaW += pow(W[i], 2);
        W2 += W[i];
    }
    normaW = sqrt(normaW);
    produtoescalar = somaV + somaW;
    projecao = (produtoescalar / pow(normaW, 2)) * W2;
    printf("\n Produto escalar dos vetores U e W: %i", produtoescalar);
    printf("\n A norma do vetor W: %i", normaW);
    printf("\n Valor de W: %i", W2);
    printf("\n A projecao de V sobre W: %.1f", projecao);

    return 0;
}