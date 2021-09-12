#include <stdio.h>
#include <stdio.h>

// Verificar se a soma de dois numeros é par ou impar, se for par o programa deve reiniciar

int main(){ 
    int num1, num2, soma;

    while(soma%2==0){

    printf("Digite um numero:\n");
    scanf("%i", &num1);
    printf("Digite mais um numero:\n");
    scanf("%i", &num2);

    soma=num1+num2;

    printf("A soma deu %i\n", soma);
    if(soma%2==0){

        printf("%i e um numero par. Mais uma vez!\n", soma);
    } else{
        printf("%i e um numero impar. Fim!\n");
    }
    }


    return 0;

}