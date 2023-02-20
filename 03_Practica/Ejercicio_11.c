#include <stdlib.h>
#include <stdio.h>

void main()
{
    int i;

    for (i = 0; i < 10; i++)
    {
        if (i % 2 == 0)
        {
            printf("%c%c \n",64,64);
        }
        else
            printf("%c \n",64);
        
    }
    
    system("pause");

}