#include <stdio.h>
#include <stdlib.h>

// Manipular uma string

int main(){

char string[10][100];

for (int i = 1; i <= 3; i++)
{
    printf("\nDigite a string %i: ", i);
    fgets(string[i],100,stdin);
}

for (int i = 1; i <= 3; i++)
{
    puts(string[i]);
}


return 0;

}