#include <stdio.h>

int main(){
	char cad[30];
	fflush(stdin);
	printf("\n Dame cadena: ");
	scanf("%s",cad);
	fflush(stdin);
	printf("\n ****   %s", cad);
	fflush(stdin);
	printf("\n Dame cadena con espacios: ");
	gets(cad);
	printf("\n ****  %s",cad);
}
