#include <stdio.h>
#include <stdlib.h>

// Calcular a media das notas de um aluno

int main()
{

    float nota1[10], nota2[10], media[10];

    for (int i = 1; i <= 10; i++)
    {
        printf("\nDigite a primeira nota do aluno %i: ", i);
        scanf("%f", &nota1[i]);
        printf("\nDigite a segunda nota do aluno %i: ", i);
        scanf("%f", &nota2[i]);
    }

    for (int i = 1; i <= 10; i++)
    {
        media[i] = (nota1[i] + nota2[i]) / 2;
    }

    for (int i = 1; i <= 10; i++)
    {

        printf("\n Aluno %i\n Nota 1: %.2f \n Nota 2: %.2f \n Media: %.2f\n", i, nota1[i], nota2[i], media[i]);
    }

    return 0;
}