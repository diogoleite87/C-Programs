#include <stdio.h>
#include <stdlib.h>

// Verificar a consistencia das medidas dos angulos internos de um triangulo

int main(){
    float angulo1, angulo2, angulo3, soma;
    printf("Vamos verificar a consistencia das medidas dos angulos internos de um triangulo\n");

    while (soma!=180){

    printf("Digite o primeiro angulo: \n");
    scanf("%f", &angulo1);
    printf("Digite o segundo angulo: \n");
    scanf("%f", &angulo2);
    printf("Digite o terceiro angulo: \n");
    scanf("%f", &angulo3);

    soma=angulo1+angulo2+angulo3;

    if (soma!=180){

    printf("A soma dos angulos deu: %.f\n Tente novamente!\n", soma);}

    }

    printf("Soma dos angulos correta = 180\n");
    return 0;
    

}