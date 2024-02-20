#include <stdio.h>
#define REN 3
#define COL 7

int main() {
	int m[REN][COL]; //Dimension con numero de renglones y numero de columnas
	int h,valor,j,p=1,uP=3;
	for(h=0;h<REN;h+=2){
		for(j=COL;j>0;j--,p++,uP+=3){
			if (REN-h>1)
			{
				m[h][j-1]=p;
				m[h+1][j-1]=uP;
			}else if(REN-h==1){
				m[h][j-1]=p;
			}
		}
		for(j=0;j<COL;j++){
			printf("%d ",m[h][j]);
		}
		printf("\n");
		if(REN-h>1){
			for(j=0;j<COL;j++){
				printf("%d ",m[h+1][j]);
			}
			printf("\n");
		}
	}
	return 0;
}

