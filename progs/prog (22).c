#include <stdlib.h>
#include <stdio.h>
/* Objetivo
   se o numero inserido for 1, o resultado devera ser 1;
   se o numero inserido for 2, o resultado devera ser 2;
   se o numero inserido for diferente de 1 e 2, o resultado deve ser a conta F(n) = 2 * F(n-1) + 3*F(n-2).
*/
void main()
{
    int f(int n);
    int resultado, n;

    printf("\nDigite o numero que deseja inserir na funcao recursiva: ");
    scanf("%i", &n);

    resultado = f(n);

    printf("\nResultado da recursao: %i", resultado);

    return 0;
}
int f(int n)
{
    int resultado;

    if (n == 1)
    {
        resultado = 1;
    }
    else if (n == 2)
    {
        resultado = 2;
    }
    else
    {
        resultado = 2 * f(n - 1) + 3 * f(n - 2);
    }
    return resultado;
}