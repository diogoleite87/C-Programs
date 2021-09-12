#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Programa para calcular e mostrar a tabuada de um número digitado pelo usuário.

int main()
{

    int calculadora, i, resultado;

    printf("Digite a tabuada que deseja reproduzir: \n");
    scanf("%i", &calculadora);

    for (i = 0; i <= 10; ++i)
    {

        printf("%i x %i = %i\n", calculadora, i, i * calculadora);
    }

    return 0;
}