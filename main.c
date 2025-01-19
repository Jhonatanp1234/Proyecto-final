#include <stdio.h>
#include <string.h>
#include "funciones.h"

void main() {
    int opcion;
    do {
        printf("Menu:\n");
        printf("1. Introducir datos\n");
        printf("2. Leer datos\n");
        printf("3. Salir\n");
        printf("Seleccione una opción: ");
        scanf("%d", &opcion);
        switch(opcion) {
            case 1:
                GetDatos();
                break;
            case 2:
                readdatos();
                break;
            case 3:
                printf("Saliendo...\n");
                break;
            default:
                printf("Opción no válida\n");
        }
    } while(opcion != 3);
}
