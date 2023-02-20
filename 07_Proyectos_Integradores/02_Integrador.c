#include <stdio.h>
#include <stdlib.h>

void main()
{
    int cant_ventas = 0, dni = 0, metod_pago = 0, selecc_cuotas = 0, selecc_tarjeta = 0;
    float monto_venta = 0, interes = 0, acum_monto = 0;

    printf("BIENVENIDO AL SISTEMA DE CAJA DEL NEGOCIO\n");
    printf("POR FAVOR SIGA LOS PASOS CORRESPONDIENTES\n");
    printf("Cantidad de ventas a ingresar: ");
    scanf("%i", &cant_ventas);

    for (int i = 1; i <= cant_ventas; i++)
    {
        printf("Ingrese el documento del cliente: ");
        scanf("%i", &dni);

        while (dni < 1000000 || dni > 99999999)
        {
            printf("DNI invalido. Por favor ingresar nuevamente el DNI\n");
            scanf("%i", &dni);
        }

        printf("Introduce el monto de la venta: $");
        scanf("%f", &monto_venta);
        while (monto_venta < 0)
        {
            printf("El monto de venta no puede ser negativo\n");
            scanf("%f", &monto_venta);
        }

        acum_monto = acum_monto + monto_venta;

        printf("Selecciona el metodo de pago\n");
        printf("1.- Efectivo\n");
        printf("2.- Tarjeta de credito\n");
        scanf("%i", &metod_pago);

        while (metod_pago < 1 && metod_pago > 2)
        {
            printf("Metodo de pago incorrecto. Por favor reingrese un metodo\n");
            scanf("%i", &metod_pago);
        }

        switch (metod_pago)
        {
            // EFECTIVO
        case 1:
            monto_venta = monto_venta;
            break;
            // TARJETA DE CREDITO
        case 2:
            printf("Seleccione su tarjeta\n");
            printf("1.- VISA\n");
            printf("2.- AMERICAN EXPRESS\n");
            printf("3.- MERCADO PAGO\n");
            printf("4.- CABAL\n");
            scanf("%i", &selecc_tarjeta);

            printf("En cuantas cuotas desea abonar:\n");
            printf("1 CUOTA\n");
            printf("3 CUOTAS\n");
            printf("6 CUOTAS\n");
            printf("12 CUOTAS\n");
            scanf("%i", &selecc_cuotas);
            switch (selecc_cuotas)
            {
                // 1 CUOTA
            case 1:
                monto_venta = monto_venta;
                break;

                // 3 CUOTAS
            case 3:
                interes = monto_venta * 0.04;
                monto_venta = monto_venta + interes;
                break;

                // 6 CUOTAS
            case 6:
                interes = monto_venta * 0.08;
                monto_venta = monto_venta + interes;
                break;

                // 12 CUOTAS
            case 12:
                interes = monto_venta * 0.08;
                monto_venta = monto_venta + interes;
                break;

            default:
                while (selecc_cuotas != 1 && selecc_cuotas != 3 && selecc_cuotas != 6 && selecc_cuotas != 12)
                {
                    printf("Seleccion de cuotas incorrecta. Por favor selecione una cantidad de cuotas correcta\n");
                    scanf("%i", &selecc_cuotas);
                }
                break;
            }
            break;

        default:
            while (metod_pago < 1 || metod_pago > 2)
            {
                printf("Metodo de pago incorrecto. Por favor selecione un metodo correcto\n");
                scanf("%i", &metod_pago);
            }
            break;
        }
        printf("\n");

        if (metod_pago == 1)
        {
            printf("DNI: %i\n", dni);
            printf("MEDIO DE PAGO: EFECTIVO\n");
            printf("CUOTAS: -\n");
            printf("TOTAL: $ %.2f\n\n", monto_venta);
        }
        else
        {
            printf("DNI: %i\n", dni);
            printf("MEDIO DE PAGO: TARJETA DE CREDITO\n");

            if (selecc_tarjeta == 1)
            {
                printf("TARJETA: VISA\n");
            }
            else if (selecc_tarjeta == 2)
            {
                printf("TARJETA: AMERICAN EXPRESS\n");
            }
            else if (selecc_tarjeta == 3)
            {
                printf("TARJETA: MERCADO PAGO\n");
            }
            else if (selecc_tarjeta == 4)
            {
                printf("TARJETA: CABAL\n");
            }

            if (selecc_cuotas == 1)
            {
                printf("CUOTAS: 1\n");
            }
            else if (selecc_cuotas == 3)
            {
                printf("CUOTAS: 3\n");
            }
            else if (selecc_cuotas == 6)
            {
                printf("CUOTAS: 6\n");
            }
            else if (selecc_cuotas == 12)
            {
                printf("CUOTAS: 12\n");
            }
            printf("TOTAL: $ %.2f\n\n", monto_venta);
        }
    }

    printf("EL TOTAL DE VENTAS REGISTRADAS FUE DE: $%.2f\n", acum_monto);
    system("pause");
}