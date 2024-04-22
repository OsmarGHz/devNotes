#include <stdio.h>
#include <string.h>

// Definición de la estructura para representar un estudiante
struct Estudiante {
    char nombre[50];
    int edad;
    float promedio;
};

int main() {
    FILE *archivo;
    struct Estudiante estudiante;
    int num_estudiantes;
    char caracter = 1, cadena [100];

    // Abrir el archivo binario para escritura
    archivo = fopen("archivoDeTexto.txt", "w");
    if (archivo == NULL) {
        printf("Error al abrir el archivo.");
        return 1;
    }
    
    while (strcmp(0,caracter)!=0){
        printf("Insertar cadena con espacios: ");
        scanf("%s",cadena);
        fputs(cadena,archivo); //escribe cadena con espacios
    }
    fclose(archivo);
    /*
    archivo = fopen("archivoDeTexto.txt", "r");
    fscanf("%s");
    feof();
    fclose(archivo);


    // Cerrar el archivo
    fclose(archivo);

    // Leer y mostrar la información de los estudiantes desde el archivo
    printf("\nInformacion de los estudiantes:\n");
    while (fread(&estudiante, sizeof(struct Estudiante), 1, archivo)) {
        printf("\nNombre: %s\n", estudiante.nombre);
        printf("Edad: %d\n", estudiante.edad);
        printf("Promedio: %.2f\n", estudiante.promedio);
    }

    // Cerrar el archivo
    fclose(archivo);

    return 0;
    */
}