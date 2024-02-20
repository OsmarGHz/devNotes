#include <stdio.h>
#include <string.h>

int main(int argc, char **argv){
	if(argc>2){
		if(!strcmp(argv[1],"-d")){
			printf("\nFue -d");
		}
		printf("\n%s",argv[1]);
	}
	else printf("\nNada");
	return 0;
}
	
