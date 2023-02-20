#include <stdio.h> 
#include <stdlib.h>

int main() {

     int a = 0, b = 0, H = 0, P = 0;

    printf("Ingrese el primer lado del triangulo:\n");
    scanf("%i", &a);

    printf("Ingrese el segundo lado del triangulo:\n");
    scanf("%i", &b);

    printf("Ingrese la Hipotenusa del triangulo:\n");
    scanf("%i", &H);

    P = a + b + H;

    printf("El perimetro del Triangulo es %i:\n",P);

    system("pause");

    return 0;
}    