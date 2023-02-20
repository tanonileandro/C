#include <stdio.h>
#include <stdlib.h>

void main()
{
    int numeros[5] = {7, 25, 45, 57, 62};
    int suma= 0;
    float prom= 0;
    int tam= 5;

    for (int i = 0; i < tam; i++)
    {
        suma= suma + numeros[i]; 
    }
    prom= suma / tam;

    printf("La suma de los numeros asignados al arreglo es de: %i\n", suma);
    printf("El promedio de los numeros asignados al arreglo es de: %.1f\n", prom);

    system("pause");
}