#include <stdlib.h>
#include <stdio.h>

void main()
{
    float venta = 0, pago = 0;
    int dni = 0, formaPago = 0, tipoTarj = 0, cuotas = 0;

    printf("Ingrese el valor de la venta:\n");
    scanf("%f", &venta);
    printf("Ingrese el DNI del cliente:\n");
    scanf("%i", &dni);

    if (dni > 1000000 && dni < 99999999)
    {
        printf("Seleccione la forma de pago:\n");

        printf("1. Efectivo.\n");
        printf("2. Tarjeta de cr%cdito.\n", 130);
        scanf("%i", &formaPago);

        switch (formaPago)
        {
        case 1:
            pago = venta;
            printf("El total es de $%.2f.", pago);
            break;
        case 2:
            printf("Seleccione el tipo de tarjeta:\n");

            printf("1.Visa.\n");
            printf("2.American Express.\n");
            printf("3.Mercado Pago.\n");
            printf("4.Cabal.\n");
            scanf("%i", &tipoTarj);

            printf("Seleccione cantidad de cuotas.\n");

            printf("1. 1 Cuota.\n");
            printf("2. 3 Cuotas.\n");
            printf("3. 6 Cuotas.\n");
            printf("4. 12 Cuotas.\n");
            scanf("%i", &cuotas);

            switch (cuotas)
            {
            case 1:
                pago = venta;
                printf("El total es de $%.2f.", venta);
                break;
            case 2:
                pago = venta + (venta * 0.04);
                printf("El total es de $%.2f.", venta);
                break;
            case 3:
                pago = venta + (venta * 0.08);
                printf("El total es de $%.2f.", venta);
                break;
            case 4:
                pago = venta + (venta * 0.08);
                printf("El total es de $%.2f.", venta);
                break;
            default:
                printf("Opcion no v%clida.\n", 160);
                break;
            }

        default:
            printf("Opcion no v%clida, vuelva a ingresar los datos.\n", 160);
            break;
        }
    }
    else 
        printf("DNI ingresado inv%clido", 160);

    system("pause");
}