#include <stdio.h> 
#include <stdlib.h>

int main() {

    int a = 0, b = 0, c = 0, suma = 0;

    printf("Ingrese el primer numero:\n");
    scanf("%i", &a );

    printf("Ingrese el segundo numero:\n");
    scanf("%i", &b);

    printf("Ingrese el segundo numero:\n");
    scanf("%i", &c);

    suma = a + b + c;

    printf("La suma da un total de %i.\n",suma);

    return 0;

}