#include <stdio.h>

int main() {
	int m[4][5]; //Dimensión con numero de renglones y numero de columnas
	int i,j;
	for(i=5,j=0;j<5;i--,j++){
		m[0][j]=i;
	}
	for(i=15,j=0;j<5;i-=3,j++){
		m[1][j]=i;
	}
	for(i=10,j=0;j<5;i--,j++){
		m[2][j]=i;
	}
	for(i=30,j=0;j<5;i-=3,j++){
		m[3][j]=i;
	}
	
	for(i=0;i<4;i++){
		for(j=0;j<5;j++){
			printf("%d ",m[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}

