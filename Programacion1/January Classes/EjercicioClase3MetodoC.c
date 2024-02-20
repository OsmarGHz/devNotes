#include <stdio.h>
#define REN 3
#define COL 7

int main() {
	int m[REN][COL]; //Dimension con numero de renglones y numero de columnas
	int h,valor,j,countPair=0,countUnpair=0;
	for(h=0;h<REN;h++){
		for(j=COL;j>0;j--){
			if(h%2==0){
				countPair++;
				valor=countPair;
			}else{
				countUnpair+=3;
				valor=countUnpair;
			}
			m[h][j-1]=valor;
		}
		for(j=0;j<COL;j++){
			printf("%d ",m[h][j]);
		}
		printf("\n");
	}
	
	return 0;
}

