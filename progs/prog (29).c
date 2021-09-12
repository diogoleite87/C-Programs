#include <stdlib.h>
#include <stdio.h>

/*um programa que preencha um vetor de 5 elementos numéricos inteiros. O seu programa deverá calcular e mostrar:

  a) todos os números ímpares  e pares com uma mensagem descrevendo se o número é par ou ímpar;

  b) a quantidade de números pares e ímpares com uma mensagem também dizendo se é a quantidade de número pares ou ímpares;*/

int main()
{
    int num[5], cont1 = 0, cont2 = 0;

    printf("\nDigite os 5 numeros que deseja calcular. ");

    for (int i = 0; i < 5; i++)
    {
        printf("\nDigite o numero de posicao %i: ", i + 1);
        scanf("%i", &num[i]);
    }

    for (int i = 0; i < 5; i++)
    {

        if (num[i] % 2 == 0)
        {
            printf("\nNumero par: %i", num[i]);
            cont1++;
        }
        else
        {
            printf("\nNumero impar: %i", num[i]);
            cont2++;
        }
    }

    printf("\nQuantidade de numeros pares: %i", cont1);
    printf("\nQuantidade de numeros impares: %i", cont2);

    return 0;
}