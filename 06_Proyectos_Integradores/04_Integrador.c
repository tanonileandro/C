#include <stdio.h>
#include <stdlib.h>

void main()
{
    int i, menu, cod_barra[100], new_cod, cant[100], new_cant, finBusq;
    char descrip[100][50];

    do
    {
        //MENU
        printf("SELECCIONA UNA OPCI%cN DEL MEN%c\n", 224, 233);
        printf("1- Cargar productos.\n");
        printf("2- Modificar stock.\n");
        printf("3- Mostrar productos sin stock.\n");
        printf("4- Lista productos.\n");
        printf("5- Salir.\n");
        printf("USTED VA A SELECCIONAR LA OPCI%cN: ", 224);
        scanf("%i", &menu);

        //SWITCH PARA ENTRAR AL MENU
        switch (menu)
        {
            //CARGA DE PRODUCTOS
        case 1:
                for ( i = 0; i < 100; i++)                                         
                {
                    printf("ELECTRODOM%cSTICO N%c %i\n", 144, 248, i + 1);
                    printf("C%cdigo de barra: ", 162);
                    scanf("%i", &cod_barra[i]);
                    printf("Descripci%cn: ", 162);
                    scanf("%s", &descrip[i]);
                    printf("Cantidad: ");
                    scanf("%i", &cant[i]);
                }
            break;
            //MODIFICAR STOCK
        case 2:
                printf("C%cdigo de barra: ", 162);
                scanf("%i", &new_cod);
                finBusq= 0;
                for ( i = 0; i < 100; i++)
                {
                    if (cod_barra[i] == new_cod)
                    {
                        finBusq= 1;
                        printf("Nueva cantidad: ");
                        scanf("%i", &new_cant);
                        cant[i]= new_cant;
                    }
                }
                if (finBusq != 1)
                {
                    printf("Electrodom%cstico inexistente\n", 130);
                }   
            break;
            //MOSTRAR PRODUCTOS SIN STOCK
        case 3:
                for ( i = 0; i < 100; i++)
                {
                    if (cant[i] == 0)
                    {
                        printf("COD. DE BARRA: %i \t DESCRIPCI%cN: %s \t CANTIDAD: %i (Sin Stock)\n", cod_barra[i], 224, descrip, cant[i]);
                    }                    
                }
            break;
            //LISTADO DE PRODUCTOS
        case 4:
                printf("\tLISTADO DE PRODUCTOS\n\n");
                for ( i = 0; i < 100; i++)
                {
                    printf("COD. DE BARRA: %i \t DESCRIPCI%cN: %s \t CANTIDAD: %i \n", cod_barra[i], 224, descrip[i], cant[i]);
                }
                printf("\n");
            break;
            //FIN PROGRAMA
        case 5:
                printf("\tFIN DEL PROGRAMA\n");
            break;
        default:
            printf("\tMEN%c INEXISTENTE\n", 233);
            printf("\n");
            break;
        }
    } while (menu != 5);
    system("pause");

    //INTEGRANTES: LEANDRO MURZYLA, LEANDRO TANONI, FELIPE SBUTTONI, RONCORONI TOMAS.
}