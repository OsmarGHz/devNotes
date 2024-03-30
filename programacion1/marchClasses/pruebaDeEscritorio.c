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

    // Pedir al usuario el número de estudiantes
    printf("Ingrese el número de estudiantes: ");
    scanf("%d", &num_estudiantes);

    // Abrir el archivo binario para escritura
    archivo = fopen("estudiantes.bin", "wb");
    if (archivo == NULL) {
        printf("Error al abrir el archivo.");
        return 1;
    }

    // Solicitar y guardar información sobre cada estudiante
    for (int i = 0; i < num_estudiantes; i++) {
        printf("\nEstudiante %d:\n", i + 1);
        printf("Nombre: ");
        scanf("%s", estudiante.nombre);
        printf("Edad: ");
        scanf("%d", &estudiante.edad);
        printf("Promedio: ");
        scanf("%f", &estudiante.promedio);

        // Escribir los datos del estudiante en el archivo
        fwrite(&estudiante, sizeof(struct Estudiante), 1, archivo);
    }

    // Cerrar el archivo
    fclose(archivo);

    // Abrir el archivo binario para lectura
    archivo = fopen("estudiantes.bin", "rb");
    if (archivo == NULL) {
        printf("Error al abrir el archivo.");
        return 1;
    }

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
}