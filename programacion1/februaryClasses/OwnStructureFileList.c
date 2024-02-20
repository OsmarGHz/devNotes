#include <stdio.h>
#include <string.h>

typedef struct{
    int h,m;
}Time;

typedef struct{
    char mes[20];
    int d;
}Date;

typedef struct{
    char perm[3];
}Permisos;

typedef struct{
    char nomArchivo[20];
    char usua[20];
    int tam;
    char tipoArchivo;
    Time tiempo;
    Date fecha;
    Permisos pro[3];
}Archivo;

int main(){
    Archivo files[20];
    strcpy(files[0].nomArchivo,"datos.txt");
    files[0].pro[0].perm[0] = 1; // Lectura
    files[0].pro[0].perm[1] = 1; // Escritura
    files[0].pro[0].perm[2] = 0; // Ejecucion
    files[0].tiempo.h = 17;

    printf("\nTamano en bytes: %d", sizeof(Archivo));
}