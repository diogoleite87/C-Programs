#include <stdio.h>
#include <stdlib.h>

/*A nutricionista está fazendo uma pesquisa e pede para você fazer um programa que leia a idade, a altura e o peso das pessoas. Ela deverá entrar com o número de pessoas. O programa deverá calcular e mostrar:

a) Quantas pessoas têm mais de 60 anos;

b) a média das alturas das pessoas com idade entre 30 e 40 anos;

c) a porcentagem de pessoas com peso maior do que 40kg entre todas as pessoas analisadas.*/

int main()
{
    float idade, altura, peso, pessoas, cont1, altura2 = 0, cont2, cont3, medialtura, porcentagem;
    int i;

    printf("Digite o numero de pessoas: \n");
    scanf("%f", &pessoas);

    for (i = 1; i <= pessoas; i++)
    {
        printf("Insira a idade da pessoa: \n");
        scanf("%f", &idade);
        printf("Insira a altura: \n");
        scanf("%f", &altura);
        printf("Digite o peso da pessoa: \n");
        scanf("%f", &peso);

        if (idade >= 60)
        {
            cont1++;
        }
        if (idade >= 30 && idade <= 40)
        {
            altura2 = altura2 + altura;
            cont2++;
        }
        if (peso >= 40)
        {
            cont3++;
        }
    }

    printf("Existe %.f pessoas acima de 60 anos.\n", cont1);
    medialtura = altura2 / cont2;
    printf("A media de altura entre as pessoas de 30 a 40 anos e: %.2f\n", medialtura);
    porcentagem = cont3 * 100 / pessoas;
    printf("A porcentagem de pessoas com peso maior de 40KG e: %.1f porcento.\n", porcentagem);

    return 0;
}
