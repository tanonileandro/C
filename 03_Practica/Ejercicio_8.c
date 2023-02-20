#include <stdlib.h>
#include <stdio.h>

void main()
{
    int n1 = 0, i, resultado = 0;
    
    printf("Elija la tabla del 1 al 10 para que se muestre en pantalla: \n");
    scanf("%i", &n1);

    for (i = 1; i <= 10; i++)
    {
        resultado = n1 * i;
        
        printf("\n %i x %i = %i ", n1, i, resultado);
    }
    
    system("pause");

}