#include <stdlib.h>
#include <stdio.h>

void main()
{
    int acum= 0;

    for (int i = 1; i <= 10; i++)
    {
        if (i % 2 == 1)
        {
            acum= acum + i;   
        }
    }
    
    printf("La suma de los numeros impares es = %i \n", acum);
    
    system("pause");

}