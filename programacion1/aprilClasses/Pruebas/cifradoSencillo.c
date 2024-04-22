#include <stdio.h>
#include <string.h>

char cifrar(char letraSinCifrar, int code){
    char letraCifrada;
    int temp;
    temp = letraSinCifrar + code;
    temp = temp % 128;
    letraCifrada = temp;
    return letraCifrada;
}

char descifrar(char letraCifrada, int code){
    char letraSinCifrar;
    int temp;
    temp = letraCifrada - code;
    temp = temp % 128;
    letraSinCifrar = temp;
    return letraSinCifrar;
}

int main(){
    FILE *archivoOrigen, *archivoCifrado, *archivoCifradoLectura, *archivoDescifrado;
    int codigo, codigoContrasena;
    char letraCifrada, letraSinCifrar;
    do{
        printf("Ingrese el codigo: ");
        scanf("%d", &codigo);
    } while (codigo <= 0 || codigo >= 128);
    
    if((archivoOrigen=fopen("archivoOrigen.txt","r")) != NULL){
        if((archivoCifrado=fopen("archivoCifrado.txt","w")) != NULL){
            while (!feof(archivoOrigen)){
                letraSinCifrar = fgetc(archivoOrigen);
                letraCifrada = cifrar(letraSinCifrar, codigo);
                fputc(letraCifrada, archivoCifrado);
            }
        }
    }
    fclose(archivoCifrado);

    do{
        printf("Ingrese el codigo para descifrar: ");
        scanf("%d", &codigoContrasena);                
    } while (codigoContrasena <= 0 || codigoContrasena >= 128 || codigoContrasena != codigo);

    if((archivoCifradoLectura=fopen("archivoCifrado.txt","r")) != NULL){
        if((archivoDescifrado=fopen("archivoDescifrado.txt","w")) != NULL){
            while (!feof(archivoCifradoLectura)){
                letraCifrada = fgetc(archivoCifradoLectura);
                letraSinCifrar = descifrar(letraCifrada, codigoContrasena);
                fputc(letraSinCifrar, archivoDescifrado);
            }
        }
    }

}