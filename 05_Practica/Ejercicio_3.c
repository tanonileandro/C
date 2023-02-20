#include <stdio.h>
#include <stdlib.h>

void main()
{
    int numeros[5];
    int i= 0;
    int acum= 0;

    printf("Ingrese 5 numeros\n");

    for ( i = 0; i < 5; i++)
    {
        printf("Ingrese un numero\n");
        scanf("%i", &numeros[i]);

        if (numeros[i] == 5)
    {
        acum= acum + 1;
    }
    } 
    printf("El numero 5 se repite: %i veces\n", acum);
    system("pause");
}