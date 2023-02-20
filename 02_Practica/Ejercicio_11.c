#include <stdlib.h>
#include <stdio.h>

void main()
{
    float res = 0, num1 = 0, num2 = 0;
    int opciones = 0;

    printf("A continuaici%cn ingrese dos valores y elija que desea calcular, recordar: si es un n%cmero decimal utilizar el punto y NO la coma.\n\n", 162,163);

    printf("Ingrese su primer valor:\n");
    scanf("%f", &num1);

    printf("Ingrese su segundo valor:\n");
    scanf("%f", &num2);
    printf("1. Informar su suma\n");
    printf("2. Informar su resta\n");
    printf("3. Informar su multiplicaci%cn\n", 162);
    printf("4. Informar su divisi%cn\n", 162);
    printf("5. Salir\n");

    scanf("%i", &opciones);

    switch (opciones)
    {
    case 1:
        res = num1 + num2;
        printf("El resultado de la suma es: %f\n.", res);
        break;
    case 2:
        res = num1 - num2;
        printf("El resultado de la resta es: %f\n.", res);
        break;
    case 3:
        res = num1 * num2;
        printf("El resultado de la multiplicaci%cn es: %f\n.",162,res);
        break;
    case 4:
        res = num1 / num2;
        printf("El resultado de la suma es: %f\n.", res);
        break;
    case 5:
        break;
    }

    system("pause");
}