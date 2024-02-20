#include <stdio.h>
const int max=20;

int obtenerConsecutivo(){
    static int valor=0;
    valor++;
    return valor;
}

int main(){
    printf("Consecutivo: %d\n", obtenerConsecutivo());
    printf("Consecutivo: %d\n", obtenerConsecutivo());
    printf("Consecutivo: %d\n", obtenerConsecutivo());
}

// argc -> numero de argumentos en la linea de comandos
// argv -> matriz de caracteres, manejando apuntadores (contiene los argumentos).