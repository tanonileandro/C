#include <stdio.h> 
#include <stdlib.h>

int main() {

    float valorHora = 0, tiempoTrabajado = 0, sueldo = 0;

    printf("Ingrese el valor de la hora de su tabajo:\n");
    scanf("%i", &valorHora);

    printf("Ingrese todas las horas trabajadas:\n");
    scanf("%i", &tiempoTrabajado);

    sueldo = valorHora * tiempoTrabajado;

    printf("Su sueldo total es de %i:\n",sueldo);

    system("pause");

    return 0;

}