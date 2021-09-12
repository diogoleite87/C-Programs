#include <stdio.h>
#include <stdlib.h>

// Calcular area do trapezio

int main(){

    float h, b, bm, a;

    printf("Defina a altura do trapezio: \n");
    scanf("%f", &h);
    printf("Defina a base menor do trapezio: \n");
    scanf("%f", &bm);
    printf("Defina a base maior do trapezio: \n");
    scanf("%f", &b);

    a=((b+bm)*h)/2;

    printf("A area do trapzeio e: %.2f\n", a);
    
    return 0;
}