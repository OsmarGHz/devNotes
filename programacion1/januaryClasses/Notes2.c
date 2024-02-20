#include <stdio.h>

int x=0; //Tipo primitivo de lenguaje
char c='t', a, b; //Tipo primitivo de lenguaje

//Con void NO es portable la funci�n main. Con int, S�
int fA()
{
	return 0;
}
int fB(){
	fA();
	return 1;
}
void imprime(){
	int r; //Esta variable local se declar�, pero no inicializ� (en este punto). Si se imprime, puede contener "basura"

	r=90; //Aqu� ya contiene 90 en vez de la "Basura"

	fB();
	printf("\n Esta es una funcion: %c", c);
	printf("\n Esta es una funcion: %d", r);
}

int main(){
	int r; //Variable local

	r=45;
	printf("\nR = %d %c\n", r, c); //printf es el escribir. NO COLOCAR ACENTOS, no son portables.
	imprime();
	// \n es secuencia de escape
	// %d es para imprimir un entero decimal
	// %c es para imprimir caracter
	/*
		Se puede usar para terminar la funcion estos 2:
			return 0;
			exit(0);
		Pero para la funcion main, no es necesario.
		Error sem�ntico: Ejemplo: cuando no se declara una variable (error: 't' undeclared)
	*/
}
