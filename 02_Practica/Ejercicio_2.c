#include <stdlib.h>
#include <stdio.h>

void main() {

    int num1 =0, num2 = 0;

    printf("Ingrese el primer N%cmero: \n", 163);
    scanf("%i", &num1);

    printf("Ingrese el segundo N%cmero: \n", 163);
    scanf("%i", &num2);

    if (num1 > num2)
        printf("El N%cmero %i es mas grande. \n",163, num1);
    else if (num2 > num1)
        printf("El N%cmero %i es mas grande. \n",163, num2);
    else
        printf("El N%cmero %i y N%cmero %i son iguales \n", 163, 163, num1, num2);

    system("pause");
}