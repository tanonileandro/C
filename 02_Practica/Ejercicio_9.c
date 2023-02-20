#include <stdlib.h>
#include <stdio.h>

void main()
{
    int altura = 0;

    printf("Ingrese su altura:\n");
    scanf("%i", &altura);

    if (altura <= 150)
    {
        printf("Persona de altura por debajo de la media\n");
    }
    else 
        if (altura >= 151 && altura <= 170)
        {
            printf("Persona de altura media\n");
        }
        else
            printf("Persona de altura por arriba de la media\n");

    system("pause");
}