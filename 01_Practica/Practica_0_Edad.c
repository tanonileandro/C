#include <stdio.h> //Libreria que permite hacer uso de las funciones printf y scanf
#include <stdlib.h> //Libreria que  permite hacer uso de la funcion system

//Ejemplo de escritura en consola y lectura de un valor ingresado por teclado

int main() {

    char inicialNombre; //Variable donde guardaremos la inicial ingresada
    int edad; //Variable donde guardaremos la edad ingresada

    printf("Ingresa la inicial de tu nombre:\n");
    scanf("%c", &inicialNombre);

    printf("Ingresa tu edad:\n");
    scanf("%i", &edad);

    printf("Hola %c, tu edad es %i. Bienvenido a TUP. \n",inicialNombre, edad);

    system("pause"); //Necesario para que la consola no se cierre automaticamente

    return 0;
}