#include <stdio.h>

int main() {
	//Cualquier numero diferente de 0, en c, es verdadero.
	char a;
	int i, j, s=0;
	do{
		a=getchar();
	} while(a!='s');
	
	//Ciclo for: Inicialización de variables; condición; actualización de variables (la cual SIEMPRE se actualiza hasta el final;
	for(i=1,j=10; i<j; i++,j--){
		s+=i;
		printf("\n i %d j %d suma %d", i, j, s);
	}
	for(;(a=getchar())!='c';);
	return 0;
}

