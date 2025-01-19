#include <stdio.h>
#include <string.h>
#include "funciones.h"

void eraselinebreak(char *str)
{   
    FFlush(stdin);
    fgets(str, 100, stdin);
    if (str == NULL) return;
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }
}   

void GetDatos()
{   
    struct Contaminacion zona[5];
    for(int i=0; i<5;i++){
        printf("Introduce los datos de la zona:\n");
        printf("Nombre de la zona: ");
        eraselinebreak(zona[i].nombreZona);
        printf("CO2: ");
        scanf("%f", &zona[i].Co2);
        printf("NO2: ");
        scanf("%f", &zona[i].NO2);
        printf("SO2: ");
        scanf("%f", &zona[i]);
        printf("PM2.5: ");
        scanf("%f", &zona->PM2_5);
    }
    writeDatos(zona);
    
}

void writeDatos(struct Contaminacion zona[5])
{
    FILE *fichero;
    fichero = fopen("datos.bin", "wb");
    if (fichero == NULL) {
        printf("Error al abrir el fichero\n");
        return;
    }
    fwrite(zona, sizeof(struct Contaminacion), 5, fichero);
    fclose(fichero);
}

void readdatos()
{
    struct Contaminacion zona[5];
    FILE *fichero;
    fichero = fopen("datos.bin", "rb");
    if (fichero == NULL) {
        printf("Error al abrir el fichero\n");
        return;
    }
    fread(zona, sizeof(struct Contaminacion), 5, fichero);
    fclose(fichero);
    for(int i=0; i<5; i++){
        printf("Nombre de la zona: %s\n", zona[i].nombreZona);
        printf("CO2: %f\n", zona[i].Co2);
        printf("NO2: %f\n", zona[i].NO2);
        printf("SO2: %f\n", zona[i].SO2);
        printf("PM2.5: %f\n", zona[i].PM2_5);
    }
}
