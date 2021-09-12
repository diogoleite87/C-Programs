#include <stdio.h>
#include <stdlib.h>

// Mostrar os numeros pares dentre os 10 inseridos

int main(){
    int num[10], i, f;

    printf("Insira os numeros inteiros em um total de '10': \n");


    for ( i = 0; i < 10; i++)
    {
        scanf("%i", &num[i]);
    }
     
    printf("Os numeros pares inseridos sao: \n");

    for  (f = 0; f < 10; f++)
    {
        if(num[f]%2==0){
            printf("\n %i \n", num[f]);
        }
    }

    return 0;

}