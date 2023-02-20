#include <stdio.h>
#include <stdlib.h>

int legajos[20] = {0};
char apellidos[20][50] = {};
char nombre[20][50] = {};
int adeudanCuota[20] = {0};
int becados[20] = {0};

const int tam = 20;

void cargarAlumnos();
void modificarCondicionDeBecado();
void calcularYMostrarDeuda();
void mostrarAlumnos();

void main()
{
    int opcion = 0;

    do
    {
        printf("\n1- Cargar los alumnos.");
        printf("\n2- Modificar la condici%cn de becado de un alumno.", 162);
        printf("\n3- Mostrar el total de la deuda.");
        printf("\n4- Listado de alumnos.");
        printf("\n5- Salir.\n\n");
        scanf("%d", &opcion);

        if (opcion != 5)
        {
            switch (opcion)
            {
            case 1:
                cargarAlumnos();
                break;

            case 2:
                modificarCondicionDeBecado();
                break;

            case 3:
                calcularYMostrarDeuda();
                break;

            case 4:
                mostrarAlumnos();
                break;

            default:
                printf("Ingres%c una opci%cn incorrecta\n", 162, 162);
            }
        }
    } while (opcion != 5);
}

void cargarAlumnos()
{
    printf("\n--Ingrese los datos de los alumnos--\n");

    for (int i = 0; i < tam; i++)
    {
        do
        {
            printf("Legajo del alumno\n");
            scanf("%d", &legajos[i]);
            if (legajos[i] < 1000 || legajos[i] > 9999)
            {
                printf("Legajo ingresado NO v%clido \n", 160);
            }

        } while (legajos[i] < 1000 || legajos[i] > 9999);

        printf("Apellido del alumno: ");
        scanf("%s", &apellidos[i]);

        printf("Nombre del alumno: ");
        scanf("%s", &nombre[i]);

        do
        {
            printf("Adeuda cuota:\n0-NO\n1-SI\n");
            scanf("%i", &adeudanCuota[i]);
            if (adeudanCuota[i] != 0 && adeudanCuota[i] != 1)
            {
                printf("Opci%cn ingresada NO v%clida, ingrese 0-NO 1-SI \n", 162, 160);
            }

        } while (adeudanCuota[i] != 0 && adeudanCuota[i] != 1);

        do
        {
            printf("Becado:\n0-NO\n1-PARCIAL\n");
            scanf("%i", &becados[i]);
            if (becados[i] != 0 && becados[i] != 1)
            {
                printf("Opci%cn ingresada NO v%clida, ingrese 0-NO 1-PARCIAL \n", 162, 160);
            }

        } while (becados[i] != 0 && becados[i] != 1);
    }
}

void modificarCondicionDeBecado()
{
    int legajoMod;
    int nuevaCondicion;
    int encontrado = 0;

    printf("Legajo del alumno: ");
    scanf("%d", &legajoMod);

    for (int i = 0; i < tam; i++)
    {

        if (legajoMod == legajos[i])
        {
            encontrado = 1;
            do
            {
                printf("Ingrese la nueva condic%cn, 0-NO / 1-PARCIAL: ", 162);
                scanf("%i", &becados[i]);

            } while (becados[i] != 0 && becados[i] != 1);
        }
    }
    if (encontrado == 0)
    {
        printf("Legajo inexistente...\n");
    }
}

void calcularYMostrarDeuda()
{
    int valorCuota = 9000;
    int deudaTotal = 0;
    int totalNoBecados = 0;
    int totalBecados = 0;

    for (int i = 0; i < tam; i++)
    {
        if (adeudanCuota[i] == 1)
        {
            if (becados[i] == 0)
            {
                totalNoBecados = totalNoBecados + 1;
            }
            else if (becados[i] == 1)
            {
                totalBecados = totalBecados + 1;
            }
        }

        deudaTotal = (totalNoBecados * 9000) + (totalBecados * 4500);
    }

    printf("Becados con Deuda: %i\n", totalBecados);
    printf("No Becados con Deuda: %i\n", totalNoBecados);
    printf("Dinero total sin recaudar: $%i\n", deudaTotal);
}

void mostrarAlumnos()
{
    printf("\n--Listado de alumnos--\n");

    for (int i = 0; i < tam; i++)
    {
        printf("Legajo: %d\n", legajos[i]);
        printf("Apellido: %s\n", apellidos[i]);
        printf("Nombre: %s\n", nombre[i]);
        if (adeudanCuota[i] == 1)
        {
            printf("Adeuda Cuotas: Si\n");
        }
        else
        {
            printf("Adeuda Cuotas: No\n");
        }
        if (becados[i] == 1)
        {
            printf("Becado: Si\n");
        }
        else
        {
            printf("Becado: No\n");
        }   
        printf("\n");
    }
}