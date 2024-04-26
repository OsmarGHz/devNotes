#include <stdio.h>
#include <string.h>
#include <ctype.h>

char cifrar(char letraSinCifrar, int codigo){
    char letraCifrada;
    int temp, base;
    if (letraSinCifrar >= 65 && letraSinCifrar <= 90) base = 65;
    else if (letraSinCifrar >= 97 && letraSinCifrar <= 122) base = 97;
    else return letraSinCifrar;
    temp = letraSinCifrar - base + codigo;
    temp %= 26;
    temp += base;
    letraCifrada = temp;
    return letraCifrada;
}

char descifrar(char letraCifrada, int codigo){ 
    char letraSinCifrar;
    int temp, base;
    if (letraCifrada >= 65 && letraCifrada <= 90) base = 65;
    else if (letraCifrada >= 97 && letraCifrada <= 122) base = 97;
    else return letraCifrada;
    temp = letraCifrada - base - codigo;
    temp = (temp + 26)%26;
    temp += base;
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
    } while (codigo <= 0 || codigo >= 26);
    
    if((archivoOrigen=fopen("archivoOrigen.txt","r")) != NULL){
        if((archivoCifrado=fopen("archivoCifrado.txt","w")) != NULL){
            while (!feof(archivoOrigen)){
                letraSinCifrar = fgetc(archivoOrigen);
                if (letraSinCifrar != -1){
                    letraCifrada = cifrar(letraSinCifrar, codigo);
                    fputc(letraCifrada, archivoCifrado);
                }
            }
        }
    }
    fclose(archivoOrigen);
    fclose(archivoCifrado);

    do{
        printf("Ingrese el codigo para descifrar: ");
        scanf("%d", &codigoContrasena);                
    } while (codigoContrasena <= 0 || codigoContrasena >= 26 || codigoContrasena != codigo);

    if((archivoCifradoLectura=fopen("archivoCifrado.txt","r")) != NULL){
        if((archivoDescifrado=fopen("archivoDescifrado.txt","w")) != NULL){
            while (!feof(archivoCifradoLectura)){
                letraCifrada = fgetc(archivoCifradoLectura);
                if (letraCifrada != -1){
                    letraSinCifrar = descifrar(letraCifrada, codigoContrasena);
                    fputc(letraSinCifrar, archivoDescifrado);
                }
            }
        }
    }
    fclose(archivoDescifrado);
    fclose(archivoCifradoLectura);
}