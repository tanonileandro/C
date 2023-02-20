#include <stdio.h>
#include <stdlib.h>

void main()
{
    int matriz[4];
    int i= 0;
    int sum= 0, sum1= 0, sum2= 0, sum3= 0;

    for ( i = 0; i < 4; i++)
    {
        printf("NUMERO %i: ", i+1);
        scanf("%i", &matriz[i]);
    }
    printf("\n");
    sum= matriz[0] + matriz[1];
    sum1= matriz[2] + matriz[3];
    sum2= matriz[0] + matriz[2];
    sum3= matriz[1] + matriz[3];

    printf("   MATRIZ\n");
    printf("  N ---- M\n");
    printf("| %i\t %i |\n", matriz[0], matriz[1]);
    printf("| %i\t %i |\n\n", matriz[2], matriz[3]);
    printf("OPERACIONES\n");
    printf("La suma de n1: %i + m2: %i = %i\n",matriz[0],matriz[1], sum);
    printf("La suma de n2: %i + m2: %i = %i\n",matriz[2],matriz[3], sum1);
    printf("La suma de n1: %i + n2: %i = %i\n",matriz[0],matriz[2], sum2);
    printf("La suma de m1: %i + m2: %i = %i\n",matriz[1],matriz[3], sum3);
    
}