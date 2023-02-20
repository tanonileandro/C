#include <stdio.h>
#include <stdlib.h>

void main()
{
    int numeros[5] = {7, 25, 45, 57, 62};

    printf("En el orden ingresado\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Indice %i \t Valor: %i\n", i, numeros[i]);
    }
    printf("De atras hacia adelante\n");
        for (int i = 4; i >= 0; i--)
    {
        printf("Indice %i \t Valor: %i\n", i, numeros[i]);
    }

    system("pause");
}