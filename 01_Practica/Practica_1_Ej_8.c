#include <stdio.h> 
#include <stdlib.h>


int main() {

    int valorHora = 800;
    float tiempoTrabajado = 0, sueldo = 0;

    printf("Con este programa podra calcular su sueldo, sabiendo que como contador se le paga $800 la hora de trabajo.\n\n");

    printf("Ingrese todas las horas trabajadas:\n");
    scanf("%i", &tiempoTrabajado);

    sueldo = valorHora * tiempoTrabajado;

    printf("Su sueldo total es de %i:\n",sueldo);

    system("pause");

    return 0;

}