#include <stdio.h> 
#include <stdlib.h>
#include <math.h>

int main() {

    float a = 0, b = 0, Diag = 0, Sup = 0, Per = 0;

    printf("Ingrese la altura del Rectangulo:\n");
    scanf("%f", &a);

    printf("Ingrese la base del Rectangulo:\n");
    scanf("%f", &b);

    Diag = sqrt(a*a + b*b);
    Per = 2*a + 2*b;
    Sup = a * b;

    printf("La Diagonal principal del rectangulo es igual a %.2f:\n",Diag);
    printf("El perimetro es igual a %.2f:\n",Per);
    printf("La superficie es igual a %.2f:\n",Sup);

    system("pause");

    return 0;
}