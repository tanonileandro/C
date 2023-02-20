#include <stdlib.h>
#include <stdio.h>

void main()
{
    int acum= 0;

    for (int i = 1; i <= 40; i++)
    {
        if (i % 2 == 1)
        {
            acum= acum + i;   
        }
    }
    
    printf("La suma de los primeros 20 n%cmeros impares es = %i \n",163, acum);
    
    system("pause");

}