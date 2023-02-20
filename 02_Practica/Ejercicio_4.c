#include <stdlib.h>
#include <stdio.h>

void main() {

    int num1 =0, num2 = 0, num3 = 0;

    printf("Ingrese el primer N%cmero: \n", 163);
    scanf("%i", &num1);

    printf("Ingrese el segundo N%cmero: \n", 163);
    scanf("%i", &num2);

    printf("Ingrese el tercer N%cmero: \n", 163);
    scanf("%i", &num3);

    if (num1 > num2 && num1 > num3)
        printf("El Primer n%cmero %i es mas grande. \n",163, num1);
    else if (num2 > num1 && num2 > num3)
        printf("El Segundo n%cmero %i es mas grande. \n",163, num2);
    else
        printf("El Tercer n%cmero %i es mas grande \n", 163, num3);

    system("pause");
}