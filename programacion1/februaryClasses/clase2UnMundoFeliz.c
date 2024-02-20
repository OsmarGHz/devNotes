#include <stdio.h>
#include <string.h> //No se te olvide el <string.h> cuando necesites strcpy.
int main(){
	char cadenaFeliz[50];
	int i;
	strcpy(cadenaFeliz,"Un Mundo Feliz");
	printf("\n%s",cadenaFeliz);
	
	for(i=0;i<strlen(cadenaFeliz);i++){
		if(cadenaFeliz[i]=='a' || cadenaFeliz[i]=='A' || cadenaFeliz[i]=='e' || cadenaFeliz[i]=='E' || cadenaFeliz[i]=='i' || cadenaFeliz[i]=='I' || cadenaFeliz[i]=='o' || cadenaFeliz[i]=='O' || cadenaFeliz[i]=='u' || cadenaFeliz[i]=='U'){
			printf("\n\t %c - %d", cadenaFeliz[i], i+1);
		}
	}
	for(i=0;i<strlen(cadenaFeliz);i++){
		switch(cadenaFeliz[i]){
			case 'a': case 'e': case 'i': case 'o': case 'u': case 'A': case 'E': case 'I': case 'O': case 'U':
			printf("\n\t %c - %d", cadenaFeliz[i], i+1);
		}
	}
}
