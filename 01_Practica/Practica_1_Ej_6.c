#include <stdio.h> 
#include <stdlib.h>

int main() {

    float num1 = 0, num2 = 0, suma = 0, prod = 0, resta = 0; 

    printf("Ingrese el primer valor:\n");
    scanf("%i", &num1);

    printf("Ingrese el segundo valor:\n");
    scanf("%i", &num2);

    suma = num1 + num2;
    prod = num1 * num2;
    resta = num1 - num2;

    printf("La suma de los numeros ingresados es = a %i:\n",suma);
    printf("El producto de los numeros ingresados es = a %i:\n",prod);
    printf("La resta del 1mer numero ingresado menos el 2do es = a %i:\n",resta);

    system("pause");

    return 0;
} 