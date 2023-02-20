#include <stdlib.h>
#include <stdio.h>

void main() {

    int nota =0;

    printf("Ingrese su nota: \n");
    scanf("%i", &nota);

    if (nota < 4 && nota >= 0)
        printf("Usted est%c Reprobado \n", 160, nota);
    else if (nota > 4 && nota < 6)
        printf("Usted est%c Regular \n", 160, nota);
    else if (nota >= 6 && nota <= 10)
    printf("Usted est%c Promocionado \n", 160, nota);
    else
        printf("Nota Inv%clida \n", 160);

    system("pause");
}