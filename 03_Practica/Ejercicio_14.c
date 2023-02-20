#include <stdlib.h>
#include <stdio.h>

int main () 
{
    int i, j, n;

    printf("Ingrese un numero entero: ");
    scanf("%i", &n);

    for(i=n; i>=1; i--) 
    {
        for(j=i; j<=i; j++) 
        {
            printf("%i\t", j);
        }
        printf("\n");
        
    }
    system("pause");
}