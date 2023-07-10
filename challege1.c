#include <stdio.h>

int main() {
    char nombre[100]; // Definir un arreglo de caracteres para almacenar el nombre

    printf("Ingrese su nombre: ");
    scanf("%s", nombre);

    printf("Hola, %s\n", nombre);
    
    return 0;
}