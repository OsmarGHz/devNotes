#include <stdio.h>

int main() {
	int m[4][5]; //Dimensión con numero de renglones y numero de columnas
	int h,valor,j,countPair=0,countUnpair=0;
	for(h=0;h<4;h++){
		for(j=4;j>=0;j--){
			if(h%2==0){
				countPair++;
				valor=countPair;
			}else{
				countUnpair+=3;
				valor=countUnpair;
			}
			m[h][j]=valor;
		}
		for(j=0;j<5;j++){
			printf("%d ",m[h][j]);
		}
		printf("\n");
	}
	
	return 0;
}

