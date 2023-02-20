#include <stdio.h> 
#include <stdlib.h>
#include <math.h>

int main() {

    float a = 0, b = 0, Hip = 0, Per = 0, Sup = 0;

    printf("Ingrese el primer lado del triangulo:\n");
    scanf("%f", &a);

    printf("Ingrese el segundo lado del triangulo:\n");
    scanf("%f", &b);

    Hip = sqrt(pow(a,2) + pow(b,2));
    Per = a + b + Hip;
    Sup = (a * b)/2;
    
    printf("La Hipotenusa es igual a %.2f:\n",Hip);
    printf("El perimetro es igual a %.2f:\n",Per);
    printf("La superficie es igual a %.2f:\n",Sup);

    system("pause");

    return 0;
}