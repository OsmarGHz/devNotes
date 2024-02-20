#include <stdio.h>
#include <string.h>

struct datos{
	char nom[30];
	char gen;
	int edad;
	float prom;
};

typedef int Entero; //Renombrar tipos

typedef struct datos1{
	int a,b;
	char x,y;
}DATOS1;

typedef struct { //Tipo anonimo
	char nom[20];
	char gen;
}NUEVO;

typedef struct {
	char nom[30];
	char mat[5][30];
	int calif[5];
	int dia, mes, ao;
};

typedef struct {
	int d, m, a;
}FECHA;

typedef struct {
	char nomMat[30];
	int calif;
}MATERIA;

typedef struct {
	char nom[30];
	char gen;
	MATERIA mat[5];
	FECHA fechaNac;
}ALUMNO;

int main(){
	Entero a;
	struct datos var1;
	struct datos1 aux1;
	DATOS1 aux2;
	strcpy(var1.nom, "A");
	var1.gen='o';
	var1.edad=34;
	var1.prom=6.7;
	
	printf("\n Nombre: %s Genero: %c Edad: %d Promedio: %f", var1.nom, var1.gen, var1.edad, var1.prom);
}
