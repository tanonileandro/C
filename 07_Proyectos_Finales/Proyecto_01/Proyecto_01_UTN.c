#include <stdio.h>
#include <stdlib.h>

void main() {

    int i, edad, suma=0, opc;
    int otraCarrera=0, otraCarreraSI=0, otraCarreraNO=0;
    int trabaja=0, trabajaSI=0, trabajaNO=0, partTime=0, fullTime=0, tipoTrabajo=0;
    float prom = 0;

    printf("Seleccione la opci%cn que quiera ejecutar: \n\n", 162);
    printf("1- Edad de los alumnos y calcular promedio \n");
    printf("2- Estudi%c otra carrera anteriormente \n", 162);
    printf("3- Trabaja actualmente \n");
    scanf("%i", &opc);

    switch (opc)
    {
    case 1:
    
        for ( i = 1; i <= 20; i++)
        {
            printf("Ingresa la edad No. %i \n", i);
            scanf("%i", &edad);

            while (edad == 0 || edad < 0)
            {
                printf("Edad ingresada incorrecta, vuelva a ingresar la edad No. %i \n", i);
                scanf("%i", &edad);
            }
            if (edad > 0)
            {
            suma = suma + edad;    
            }
        }
        prom = suma / 20;

        printf("El promedio de edad de los alumnos es: %.2f \n", prom);
        break;

    case 2:
        for ( i = 1; i <= 20; i++)
        {
            printf("Ingrese si el alumno No. %i estudio otra carrera. (1-SI / 0-NO). \n", i);
            scanf("%i", &otraCarrera);

            while (otraCarrera != 0 && otraCarrera != 1)
            {
                printf("Opci%cn no v%clida. Ingrese por 1-SI / 0-NO si el alumno No. %i estudio otra carrera \n",162,160,i);
                scanf("%i", &otraCarrera);
            }

            if (otraCarrera == 1)
            {
            otraCarreraSI = otraCarreraSI + 1;
            }
            else
            otraCarreraNO = otraCarreraNO + 1;
        }
        printf("Los alumnos estudiaron otra carrera son: %i \n", otraCarreraSI);
        printf("Los alumnos que NO estudiaron otra carrera son: %i\n", otraCarreraNO);
        
        break;

    case 3:
        for ( i = 1; i <= 20; i++)
        {
            printf("Ingrese si el alumno No. %i trabaja actualmente. (1-SI / 0-NO) \n", i);
            scanf("%i", &trabaja);

            while (trabaja != 0 && trabaja != 1)
            {
                printf("Opci%cn no v%clida. Ingrese por 1-SI / 0-NO si el alumno No. %i trabaja actualmente \n",162,160,i);
                scanf("%i", &trabaja);    
            }

            if ( trabaja == 1)
            {
                trabajaSI = trabajaSI + 1;

                printf("El alumno No. %i trabaja Part Time o Full Time? (1-PartTime / 2-FullTime) \n", i);
                scanf("%i", &tipoTrabajo);

            while (tipoTrabajo != 1 && tipoTrabajo != 2)
            {
                printf("Opci%cn no v%clida. Ingrese por 1-PartTime / 2-FullTime para el alumno No. %i \n",162,160,i);
                scanf("%i", &tipoTrabajo);    
            }
                if (tipoTrabajo == 1)
                {
                    partTime = partTime + 1;    
                }
                else
                    fullTime = fullTime + 1 ;
            }
            else
                trabajaNO = trabajaNO + 1;
        }

        printf("La cantidad de alumnos que trabajan son: %i \n", trabajaSI);
        printf("La cantidad de alumnos que trabajan Part Time son: %i \n", partTime);
        printf("La cantidad de alumnos que trabajan Full Time son: %i \n", fullTime);
        printf("La cantidad de alumnos que NO trabajan son: %i \n", trabajaNO);
        
        break;

    default:
        while (opc != 1 && opc != 2 && opc != 3)
        {
            printf("Opci%cn seleccionada incorrecta, por favor seleccione una de las indicadas.\n", 162 );
        scanf("%i", &opc);
        }
        
        break;
    }

    system("pause");
}