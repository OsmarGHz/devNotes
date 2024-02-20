#include <stdio.h>

int main(){
    int x,y;
    x=7;
    y=(x++)-2;
    printf("\n Valor de x es %d, valor de y es %d",x,y);
    x=7;
    y=(++x)-2;
    
    printf("\n Valor de x es %d, valor de y es %d",x,y);
    printf("\n R=%d",y);
    printf("\n Para %d el valor d y es %d",x,y);
    return 0;
}

/*
Existen paradigma imperativo y estructurado
Estructurado: un inicio y un final, pasos hechos secuencialmente
Python es un lenguaje multiparadigma
C es un lenguaje fuertemente tipado, leng. compilado (si trasladas el .exe a otra pc con diferente procesador o SO, no funciona. Pero el codigo fuente, al volverlo a compilar en esa pc, ya funciona). Pertenece al paradigma imperativo

Con // se hace comentarios de linea
Con /* se hace conenbtarios de bloque
*/