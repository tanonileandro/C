#include <stdlib.h>
#include <stdio.h>

void main()
{
    int mes = 0;

    printf("Ingrese un valor del 1 al 12:\n");
    scanf("%i", &mes);

    switch (mes)
    {
    case 1:
        printf("Corresponde al mes de Enero.\n");
        break;
    case 2:
        printf("Corresponde al mes de Febrero.\n");
        break;
    case 3:
        printf("Corresponde al mes de Marzo.\n");
        break;
    case 4:
        printf("Corresponde al mes de Abril.\n");
        break;
    case 5:
        printf("Corresponde al mes de Mayo.\n");
        break;
    case 6:
        printf("Corresponde al mes de Junio.\n");
        break;
    case 7:
        printf("Corresponde al mes de Julio.\n");
        break;
    case 8:
        printf("Corresponde al mes de Agosto.\n");
        break;
    case 9:
        printf("Corresponde al mes de Septiembre.\n");
        break;
    case 10:
        printf("Corresponde al mes de Octubre.\n");
        break;
    case 11:
        printf("Corresponde al mes de Noviembre.\n");
        break;
    case 12:
        printf("Corresponde al mes de Diciembre.\n");
        break;

    default:
            printf("Dato ingresado inv%clido.\n",160);
            break;
    }

    system("pause");
}