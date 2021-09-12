#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Calcular medidas de uma esfera

int main(){

    float raio, c, a, v;

    printf("Insira o raio da esfera: \n");
    scanf("%f", &raio);

    c=2*3.14*raio;
    a=4*3.14*(pow(raio, 2));
    v=(4*3.14*(pow(raio, 3)))/3;

    printf("O comprimendo da esfera e de: %.2f m.\n", c);
    printf("A area da esfera e de: %.2f m2.\n", a);
    printf("O volume da esfera e de: %.2f m3.\n", v);

    return 0;
}