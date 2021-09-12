#include <stdlib.h>
#include <stdio.h>

// Calcular valor de contas diante  o pagamento do mes e possiveis multas

int main()
{
    float valorpagamento, valorconta1, valorconta2, conta1multa, conta2multa, valortotal;

    printf("\nInsira o valor do seu pagamento: ");
    scanf("%f", &valorpagamento);

    printf("\nInsira o valor da primeira conta: ");
    scanf("%f", &valorconta1);

    printf("\nInsira o valor da segunda conta: ");
    scanf("%f", &valorconta2);

    conta1multa = valorconta1 * 1.04;
    conta2multa = valorconta2 * 1.04;
    valortotal = conta1multa + conta2multa;

    if (valorpagamento < valortotal)
    {

        printf("\nO valor total das contas com multa e maior que o valor do paagmento de Darlan. \n Valor da conta 1 sem multa: %.2f \n Valor da conta 2 sem multa: %.2f \n Valor conta 1 com multa: %.2f \n Valor com 2 com multa: %.2f \n Valor pagamento: %.2f \n Valor total das contas com multa: %.2f \n", valorconta1, valorconta2, conta1multa, conta2multa, valorpagamento, valortotal);
        valorpagamento = valortotal - valorpagamento;
        printf("\n\nFaltara %.2f reais.\n", valorpagamento);
    }
    else
    {

        valorpagamento = valorpagamento - valortotal;
        printf("\nO pagamento e suficiente e ira sobrar %.2f reais do pagamento de Darlan.\n", valorpagamento);
    }

    return 0;
}