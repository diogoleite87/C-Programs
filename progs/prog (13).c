#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

// Mostrar quantas vezes um numero apareceu no vetor de ate 100 posições 

int vetor[100],vetor2[100][2],tam,i,k,aux,zero;

int main(){
    printf("Digite o tamanho do vetor, no maximo 100 : ");
    scanf("%d",&tam);
    printf("Digite os valores do vetor: ");

    for(i=0;i<tam;i++){
        scanf("%d",&vetor[i]);
        vetor2[i][0]=vetor[i];
    }

    for (k=0;k<=tam-2;k++){
        for (i=0;i<=tam-2;i++){
            if (vetor[i]>vetor[i+1]){
                aux=vetor[i];
                vetor[i]=vetor[i+1];
                vetor[i+1]=aux;
            }
        }
    }

    printf("Vetor ordenado: \n");
    for (i=0;i<tam;i++) {
        printf("%d ",vetor[i]);
    }

    for(i=0;i<tam;i++){
        if(vetor2[i][0]==0){
            zero++;
        }
    }
    for(i=0;i<tam;i++){
        for(k=0;k<tam;k++){
            if(i != k){
                if(vetor2[i][0]==vetor2[k][0]){
                    vetor2[k][0]=0;
                    vetor2[i][1]++;
                }
            }
        }
    }
    printf("\n\n");
    if(zero>0){
        if(zero==1){
            printf("O Numero 0 Saiu 1 Vez\n");
        }
        if(zero>1){
            printf("O Numero 0 Saiu %d Vezes\n",zero);
        }
    }

    for(i=0;i<tam;i++){
        if(vetor2[i][0]!=0)
            printf("O Numero %d Saiu %d vezes\n",vetor2[i][0],(vetor2[i][1])+1);
    }

    getch();
    return(1);
}