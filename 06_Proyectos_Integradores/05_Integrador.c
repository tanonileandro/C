#include <stdio.h>
#include <stdlib.h>

int numerosID[50];
float pesos[50];
int destinos[50];
int horasPlanificadas[50];
int estados[50];

const int tam = 3;

void cargarEnvios();
void mostrarEnvios();
void modificarEstadoDeUnEnvio();
void mostrarEnvioParaDestino(int destino);
void mostrarEnvioDeMayorPeso();
void mostrarEnviosDespachados();

void main()
{
    int opcion = 0;
    int des = 0;

    do
    {
        printf("\n1- Cargar env%cos planificados.", 161);
        printf("\n2- Mostrar env%cos planificados.", 161);
        printf("\n3- Modificar estado de un env%co.", 161);
        printf("\n4- Mostrar env%cos para un destino.", 161);
        printf("\n5- Mostrar env%co de mayor peso .", 161);
        printf("\n6- Mostrar env%cos despachados.", 161);
        printf("\n7- Salir.\n\n");
        scanf("%d", &opcion);

        if (opcion != 7)
        {
            switch (opcion)
            {
            case 1:
                // Cargar envíos planificados
                cargarEnvios();
                break;
            case 2:
                // Mostrar envíos planificados
                mostrarEnvios();
                break;
            case 3:
                // Modificar estado de un envío
                modificarEstadoDeUnEnvio();
                break;
            case 4:
                // Mostrar envíos para un destino
                printf("Destino a buscar: ");
                printf("\n1- Rosario");
                printf("\n2- Funes");
                printf("\n3- Roldan");
                printf("\n4- Baigorria");
                printf("\n");
                scanf("%i", &des);

                mostrarEnvioParaDestino(des);

                break;
            case 5:
                mostrarEnvioDeMayorPeso();
                break;

            case 6:
                mostrarEnviosDespachados();
                break;
            default:
                printf("La opci%cn ingresada es inv%clida\n", 162, 160);
            }
        }

    } while (opcion != 5);

    system("pause");
}

void cargarEnvios()
{
    printf("--Ingrese los datos de los env%cos--\n", 161);

    for (int i = 0; i < tam; i++)
    {
        do
        {
            printf("Nro. de env%co: \n", 161);
            scanf("%d", &numerosID[i]);
            if (numerosID[i] < 100 || numerosID[i] > 999)
            {
                printf("no ingreso un ID valido\n");
            }

        } while (numerosID[i] < 100 || numerosID[i] > 999);

        printf("Ingrese el peso en kilos: \n");
        scanf("%f", &pesos[i]);

        do
        {
            printf("Ingrese el destino: \n");
            printf("\n1- Rosario");
            printf("\n2- Funes");
            printf("\n3- Roldan");
            printf("\n4- Baigorria");
            printf("\n");
            scanf("%i", &destinos[i]);
            if (destinos[i] < 1 || destinos[i] > 4)
            {
                printf("destino no valido\n");
            }

        } while (destinos[i] < 1 || destinos[i] > 4);

        do
        {
            printf("Ingrese la hora: \n");
            scanf("%d", &horasPlanificadas[i]);
            if (horasPlanificadas[i] < 8 || horasPlanificadas[i] > 22)
            {
                printf("no ingreso una hora valida (entre 8 y 22)\n");
            }

        } while (horasPlanificadas[i] < 8 || horasPlanificadas[i] > 22);

        do
        {
            printf("Ingrese el estado: \n");
            printf("\n0- Pendiente");
            printf("\n1- Despachado");
            printf("\n");
            scanf("%i", &estados[i]);
            if (estados[i] < 0 || estados[i] > 1)
            {
                printf("no ingreso un estado valido\n");
            }

        } while (estados[i] < 0 || estados[i] > 1);
    }
}

void mostrarEnvios()
{
    for (int i = 0; i < tam; i++)
    {
        printf(" %d \t", numerosID[i]);
        printf(" %.2f \t", pesos[i]);
        switch (destinos[i])
        {
        case 1:
            printf("Rosario");
            break;
        case 2:
            printf("Funes");
            break;
        case 3:
            printf("Roldan");
            break;
        case 4:
            printf("Baigorria");
            break;
        }
        printf("\t");
        printf(" %d hs \t", horasPlanificadas[i]);

        switch (estados[i])
        {
        case 0:
            printf("Pendiente");
            break;
        case 1:
            printf("Despachado");
            break;
        }

        printf("\n");
    }
}

void modificarEstadoDeUnEnvio()
{
    int nroID = 0, est = 0;
    int encontrado = 0;

    printf("Nro del env%co a modificar:", 161);
    scanf("%d", &nroID);

    int i = 0;
    do
    {
        if (nroID == numerosID[i])
        {
            encontrado = 1;
        }
        else
        {
            i = i + 1;
        }

    } while (i < tam && encontrado == 0);

    if (encontrado == 1)
    {
        est = estados[i];
        if (est == 0)
        {
            estados[i] = 1;
        }
        else
        {
            estados[i] = 0;
        }

        printf("se cambio el estado del producto: %i\n", numerosID[i]);
    }
    else
    {

        printf("no se encontro un producto");
    }
}

void mostrarEnvioParaDestino(int des)
{

    for (int i = 0; i < tam; i++)
    {
        if (des == destinos[i])
        {
            printf(" %d \t", numerosID[i]);
            printf(" %.2f \t", pesos[i]);
            switch (destinos[i])
            {
            case 1:
                printf("Rosario");
                break;
            case 2:
                printf("Funes");
                break;
            case 3:
                printf("Roldan");
                break;
            case 4:
                printf("Baigorria");
                break;
            default:
                printf("Destino inv%clido\n", 160);
            }
            printf("\t");
            printf(" %d hs \t", horasPlanificadas[i]);

            switch (estados[i])
            {
            case 0:
                printf("Pendiente");
                break;
            case 1:
                printf("Despachado");
                break;
            }

            printf("\n");
        }
    }
}

void mostrarEnvioDeMayorPeso()
{
    int mayorPeso = 0;
    int posicion;
    for (int i = 0; i < tam; i++)
    {
        if (pesos[i] > mayorPeso)
        {
            mayorPeso = pesos[i];
            posicion = i;
        }
    }

    printf("producto de mayor peso: \n");
    printf(" %d \t", numerosID[posicion]);
    printf(" %.2f \t", pesos[posicion]);
    switch (destinos[posicion])
    {
    case 1:
        printf("Rosario");
        break;
    case 2:
        printf("Funes");
        break;
    case 3:
        printf("Roldan");
        break;
    case 4:
        printf("Baigorria");
        break;
    default:
        printf("Destino inv%clido\n", 160);
    }
    printf("\t");
    printf(" %d hs \t", horasPlanificadas[posicion]);

    switch (estados[posicion])
    {
    case 0:
        printf("Pendiente");
        break;
    case 1:
        printf("Despachado");
        break;
    }

    printf("\n");
}

void mostrarEnviosDespachados()
{
    int encontrado = 0;
    for (int i = 0; i < tam; i++)
    {
        if (estados[i] == 1)
        {
            printf(" %d \t", numerosID[i]);
            printf(" %.2f \t", pesos[i]);
            switch (destinos[i])
            {
            case 1:
                printf("Rosario");
                break;
            case 2:
                printf("Funes");
                break;
            case 3:
                printf("Roldan");
                break;
            case 4:
                printf("Baigorria");
                break;
            default:
                printf("Destino inv%clido\n", 160);
            }
            printf("\t");
            printf(" %d hs \t", horasPlanificadas[i]);

            switch (estados[i])
            {
            case 0:
                printf("Pendiente");
                break;
            case 1:
                printf("Despachado");
                break;
            }

            printf("\n");

            encontrado = 1;
        }
    }
    if (encontrado == 0)
    {
        printf("no hay envios despachados");
    }
}