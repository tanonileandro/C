#include <stdlib.h>
#include <stdio.h>

void main() {

    int retiro = 0, saldoBanco = 1500000;

    printf("Su saldo en la cuenta es de %i, ingrese la cantidad que quiere retirar:\n", saldoBanco);
    scanf("%i", &retiro);

    if ( retiro > 0 && retiro < saldoBanco) {

        saldoBanco = saldoBanco - retiro;
        printf("Su retiro es de: %i, su saldo actual de su cuenta es: %i \n", retiro, saldoBanco);
    }
    else 
        if ( retiro > saldoBanco)
            printf("Saldo insuficiente");

    system ("pause");
}