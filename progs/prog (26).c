#include <stdlib.h>
#include <stdio.h>
/*calcular indice de mortalidade infantil em um hospital
  calcular e mostrar porcentagem de crianças do sexo masculino mortas
  calcular e mostrar indice de criancas do sexo feminino mortas
  calcular porcentagens*/
int main()
{
    char usuario;
    int numcriancas, numfalecidas, masc = 0, fem = 0, meses, contmeses = 0;
    float porcm, porcf, porc36, porcfaleceram, porcm2, porcf2, porc36_2;

    // entrada de quantidade de dados

    printf("\nDigite o numero de criancas nascidas nos ultimos meses: ");
    scanf("%i", &numcriancas);

    printf("\nDigite o numero de criancas que faleceram nos ultimos meses: ");
    scanf("%i", &numfalecidas);

    // entrada dos dados

    for (int i = 1; i <= numfalecidas; i++)
    {
        printf("\nDigite: \n M - Masculino \n F - Feminino\n");
        fflush(stdin);
        scanf("%c", &usuario);

        if (usuario == 'M')
        {
            printf("\nDigite o tempo que permaneceu com vida em meses: ");
            scanf("%i", &meses);
            if (meses <= 36)
            {
                contmeses++;
            }
            masc++;
        }

        else if (usuario == 'F')
        {
            printf("\nDigite o tempo que permaneceu com vida em meses: ");
            scanf("%i", &meses);
            if (meses <= 36)
            {
                contmeses++;
            }
            fem++;
        }

        else
        {
            printf("\nEntrada nao permitida, lembre que M ou F devera ser em letra maisucula.\n");
            i--;
        }
    }

    // calculos para porcentagem

    porcm = 100 * masc / numcriancas;
    porcf = 100 * fem / numcriancas;
    porc36 = 100 * contmeses / numcriancas;
    porcf2 = 100 * fem / numfalecidas;
    porcm2 = 100 * masc / numfalecidas;
    porc36_2 = 100 * contmeses / numfalecidas;

    // aqui é inserido na tela do usuario as informações

    printf("\nA taxa de mortalidade de criancas do sexo masculino em relacao as que nasceram e: %.1f porcento.", porcm);
    printf("\nDentre as mortas do sexo masculino e: %.1f porcento", porcm2);
    printf("\nA taxa de mortalidade de criancas do sexo feminino em relacao as que nasceram e: %.1f porcento.", porcf);
    printf("\nDentre as mortas do sexo feminino e de: %.1f porcento.", porcf2);
    printf("\nA taxa de criancas que viveram 36 meses ou menos em relacaoa as que nasceram e: %.1f porcento.", porc36);
    printf("\nDentre as mortas que viveram 36 meses ou menos e de: %.1f porcento.", porc36_2);

    // programa finalizado
    return 0;
}