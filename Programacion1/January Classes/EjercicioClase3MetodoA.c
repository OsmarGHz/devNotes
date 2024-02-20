#include <stdio.h>

int main() {
	int m[4][5]; //Dimensión con numero de renglones y numero de columnas
	int h,i,j;
	for(h=0;h<4;h++){
		switch(h){
			case 0: i=5; break;
			case 1: i=15; break;
			case 2: i=10; break;
			case 3: i=30; break;
		}
		for(j=0;j<5;j++){
			m[h][j]=i;
			if(h==0 || h==2){
				i--;
			}else{
				i-=3;
			}
			printf("%d ",m[h][j]);
		}
		printf("\n");
	}
	
	return 0;
}

