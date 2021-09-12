#include <stdlib.h>
#include <stdio.h>

/* um programa para receber o número de lados de um polígono convexo equilátero. 
   Este programa deve calcular e mostrar a medida dos ângulo internos deste polígono.*/

int main(){
    int numlados, resultado, medida1, medida2;

    printf("\nDigite o numero de lados do poligono convexo equilatero: ");
    scanf("%i", &numlados);

    if (numlados >= 3)
    { 

        medida1 = numlados - 2;
        resultado = medida1 * 180;
        medida2 = resultado / numlados;

        printf("\nSoma dos angulos internos: %i", resultado);
        printf("\nA medida dos angulos internos: %i\n", medida2);
    } else {

        printf("\n\n Nao existe poligono convexo equilatero de %i lados.\n\n", numlados);
    }

    return 0;
}