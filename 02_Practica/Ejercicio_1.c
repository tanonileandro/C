#include <stdlib.h>
#include <stdio.h>

void main() {

    int num1 =0, num2 = 0;

    printf("Ingrese el primer N%cmero: \n", 163);
    scanf("%i", &num1);

    printf("Ingrese el segundo N%cmero: \n", 163);
    scanf("%i", &num2);

    if(num1 > num2)
        printf("El N%cmero 1 es mas grande que el N%cmero 2 \n", 163, 163);
    else
        printf("El N%cmero 2 es mas grande que el N%cmero 1 \n", 163, 163);

    system("pause");

}