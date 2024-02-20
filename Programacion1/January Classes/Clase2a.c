#include <stdio.h>
#include <string.h>
int main(){
	char cad[20];
	int i=0;
	
	strcpy(cad, "Sistemas");
	printf("\n%s", cad);
	for(; i<strlen(cad); i++)
		printf("\n cad[%d]=%c", i, cad[i]);
	printf("\n\n\t\tFin del programa");
}
