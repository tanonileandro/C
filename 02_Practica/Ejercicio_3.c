#include <stdlib.h>
#include <stdio.h>

void main() {

    int num1 =0;

    printf("Ingrese el primer N%cmero: \n", 163);
    scanf("%i", &num1);

    if (num1 > 0)
        printf("El N%cmero %i es positivo. \n",163, num1);
    else if (num1 < 0)
        printf("El N%cmero %i es negativo. \n",163, num1);
    else
        printf("El N%cmero %i es nulo. \n", 163, num1);

    system("pause");
}