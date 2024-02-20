#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char **argv){
	char cad[1000];
	int i,cuenta=0;
	if(argc>2){
		if(!strcmp(argv[1],"-v")){
			strcpy(cad,argv[2]);
			for(i=0;i<strlen(cad);i++){
				switch(cad[i]){
				case 'a': case'e': case 'i': case 'o': case 'u': case 'A': case 'E': case 'I': case 'O': case 'U': cuenta++; break;
				}
			}
			printf("\nLa cuenta de vocales es: %d",cuenta);
		}else if(!strcmp(argv[1],"-d")){
			strcpy(cad,argv[2]);
			for(i=0;i<strlen(cad);i++){
				switch(cad[i]){
					case '1': case'2': case '3': case '4': case '5': case '6': case'7': case '8': case '9': case '10': cuenta++; break;
				}
			}
			printf("\nLa cuenta de digitos es: %d",cuenta);
		}else if(!strcmp(argv[1],"-s")){
			strcpy(cad,argv[2]);
			for(i=0;i<strlen(cad);i++){
				switch(cad[i]){
				case ',': case '.': case ':': case ';': cuenta++; break;
				}
			}
			printf("\nLa cuenta de simbolos de puntuacion es: %d",cuenta);
		}
		printf("\nLa petición solicitada fue: %s",argv[1]);
		printf("\nLa cadena procesada fue: %s",cad);
	}
	else printf("\nNada");
	return 0;
}
