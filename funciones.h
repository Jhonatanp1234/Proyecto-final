#include <stdio.h>

struct Contaminacion {
    char nombreZona[50];
    float Co2;
    float NO2;
    float SO2;
    float PM2_5;
};

void eraselinebreak(char *str);
void GetDatos();
void writeDatos(struct Contaminacion zona[5]);
void readdatos();
 
