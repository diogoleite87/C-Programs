#include <stdio.h>
#include <stdlib.h>

int main()
{

    /*O custo ao consumidor de um carro é a soma do preço de fábrica com o percentual de lucro do distribuidor e 
dos impostos aplicados ao preço de fábrica. Faça um programa que receba o preço de fábrica de um veículo, 
o percentual de lucro do distribuidor e o percentual de impostos, calcule e mostre:

a) o valor correspondente ao lucro do distribuidor;

b) o valor correspondente aos impostos;

c) o preço final do veículo.*/

    float valor_veiculo, percentual_lucro, percentual_imposto, valorfinal1, valorfinal2, valorfinal3;
    printf("Digite o valor de fabrica do veiculo: \n");
    scanf("%f", &valor_veiculo);

    printf("Digite o percentual de lucro do distribuidor: \n");
    scanf("%f", &percentual_lucro);

    printf("Digite o percentual de impostos: \n");
    scanf("%f", &percentual_imposto);

    valorfinal1 = valor_veiculo * percentual_lucro / 100;
    valorfinal2 = valor_veiculo * percentual_imposto / 100;
    valorfinal3 = valor_veiculo + valorfinal1 + valorfinal2;

    printf("O lucro do distribuidor e de %.2f reais. \n", valorfinal1);
    printf("O valor dos impostos e de %.2f reias. \n", valorfinal2);
    printf("O valor total do veiculo e de %.2f reais. \n", valorfinal3);

    return 0;
}