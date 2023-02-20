#include <stdlib.h>
#include <stdio.h>

void main() {

    int num1 =0;

    printf("Ingrese el primer N%cmero: \n", 163);
    scanf("%i", &num1);

    if (num1 % 2 == 0)
        printf("El N%cmero %i es par. \n",163, num1);
    else
        printf("El N%cmero %i es impar. \n", 163, num1);

    system("pause");
}