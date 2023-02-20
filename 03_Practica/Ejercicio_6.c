#include <stdlib.h>
#include <stdio.h>

void main()
{
    int i = 0, acum= 0;

    for (i = 1; i <= 30; i++)
    {
        if (i % 3 == 0)
        {
            acum= acum + i;   
        }
    }
    
    printf("La suma de los 10 primeros n%Cmeros m%cltiplos de 3 es = %i \n", 163, 163, acum);
    
    system("pause");

}