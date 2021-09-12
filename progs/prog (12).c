#include <stdio.h>
#include <stdlib.h>

// Colocar 3 numeros inserido pelo usuario em forma decrescente

int main()
{

    float num[3];

    printf("Digite os 3 numeros que deseja colocar em ordem decrescente: \n");

    for (int i = 1; i <= 3; i++)
    {
        scanf("\n%f", &num[i]);
    }

    if (num[1] > num[2] && num[2] > num[3])
    {
        printf("%.1f %.1f %.1f", num[1], num[2], num[3]);
    }
    else if (num[1] > num[3] && num[3] > num[2])
    {
        printf("%.1f %.1f %.1f", num[1], num[3], num[2]);
    }
    else if (num[2] > num[1] && num[1] > num[3])
    {
        printf("%.1f %.1f %.1f", num[2], num[1], num[3]);
    }
    else if (num[2] > num[3] && num[3] > num[2])
    {
        printf("%.1f %.1f %.1f", num[2], num[3], num[1]);
    }
    else if (num[3] > num[1] && num[1] > num[2])
    {
        printf("%.1f %.1f %.1f", num[3], num[1], num[2]);
    }
    else
    {
        printf("%.1f %.1f %.1f", num[3], num[2], num[1]);
    }

    return 0;
}