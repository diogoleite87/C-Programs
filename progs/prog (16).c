#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*Calcular e mostrar a norma do vetor, o programa deve
  receber o tamanho do vetor e representar em forma de ponteiro
  em seguida deve exibir a norma do mesmo*/
int main()
{
    int *vetorU, tamanho, somatotal = 0, somaparcial = 0;
    float resultado;

    printf("Digite o tamanho do vetor: ");
    scanf("%i", &tamanho);

    vetorU = malloc(tamanho * sizeof(int));

    for (int i = 0; i < tamanho; i++)
    {
        printf("Digite o vetor de posicao %i: ", i + 1);
        scanf("%i", &vetorU[i]);
        somaparcial = pow(vetorU[i], 2);
        somatotal += somaparcial;
    }
    resultado = sqrt(somatotal);
    printf("\nA norma do vetor e: %.1f", resultado);

    free(vetorU);
    getchar();
    return 0;
}