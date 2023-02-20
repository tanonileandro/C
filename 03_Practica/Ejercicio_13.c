#include <stdlib.h>
#include <stdio.h>

int main () 
{
    int i, j;

    for(i=10; i>=1; i--) 
    {
        for(j=0; j<i; j++) 
        {
            printf("%c", 64);
        }
        printf("\n");
    }
    system("pause");
}