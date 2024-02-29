/*

void B(){
    ---
    ---
    ---
}

void A(){
    ---
    ---
    ---
        B();
    ---
    ---
    ---
}

main(){
    ---
    ---
    ---
    A(); //En assembler: jump dir(call dir)
    ---
    ---
    ---
}

//En 4 segmentos estan divididos los programas:
//Segmento de codigo - CS - 
//DS
//Segmento de pila - SS - Stack segment. 
//Segmento extra - ES

//Paginacion y segmentacion (en el caso de procesadores INTEL)


Pila: tipo abstracto de dato o tipo de dato abstracto. Solo necesita ciertas caracteristicas, sin importar como esta implementada la pila. El ultimo elemento que entra en la pila, es el 1ro que sale.
El tope de la pila apunta al elemento siguiente dentro de la pila. Al sacar un elemento, el tope se decrementa.

//Imprimir un apuntador (variable que contiene direccion de memoria)

printf("La direccion de memoria de 'a' es: %p \n", &a);

Operador & -> Operador de referenciacion
Es posible asignar una direccion de memoria a otra variable, pero esta otra variable debe ser una variable apuntador

Al imprimir direcciones con printf, el compilador puede darnos un warning, porque espera un apuntador a void, por lo que se realiza un cast.

printf("\nX: direccion=%p contenido=") //Falta completar

Un apuntador se declara colocando un * (operador de referenciacion) antes del nombre de la variable.
    int *puntero

todas las direcciones de memoria ocupan 4 bytes

*/