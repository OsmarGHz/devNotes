#include <stdio.h>
#include <string.h>

int main(){
	int i,j,potencias[8],suma=0;
	char palabra[50];
	
	potencias[0]=1;
	
	for(i=1;i<8;i++){
		potencias[i]=potencias[i-1]*2;
	}
	//10101100
	strcpy(palabra, "01001101");
	for(i=strlen(palabra)-1,j=0;i>=0;i--,j++){
		if(palabra[i]=='1'){
			suma+=potencias[j];
		}
	}
	printf("%d",suma);
}
