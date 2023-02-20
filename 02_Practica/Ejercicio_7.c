#include <stdlib.h>
#include <stdio.h>

void main() {

    float venta = 0;

    printf("Ingrese el valor de su venta: \n");
    scanf("%f", &venta);

    if (venta >= 100000) {
        venta = venta - (venta * 0.15);
        printf("Su venta es de %0.2f. \n", venta);        
    }
    else if (venta < 100000 && venta > 0) {
         venta = venta - (venta * 0.10);
        printf("Su venta es de %0.2f. \n", venta);
    }
    else if (venta = 0 || venta < 0)
        printf("Usted no vendi%c ningun producto \n", 162);

    system("pause");
}