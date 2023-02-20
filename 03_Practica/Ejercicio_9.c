#include <stdlib.h>
#include <stdio.h>

void main()
{
    int n1, i, resultado = 0;
    
    printf("Se mostrara en pantalla las tablas del 1 al 9: \n");

    for ( n1 = 1; n1 <= 9; n1++)
    {
        printf("\n\n Tabla de Multiplibar del: %i", n1);
       
       for (i = 1; i <= 10; i++)
        {
        resultado = n1 * i;
        
        printf("\n %i x %i = %i ", n1, i, resultado);
         } 

    }
    
    system("pause");

}