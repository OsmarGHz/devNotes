#include <stdio.h>
#define REN 5
#define COL 7

int main() {
	int m[REN][COL]; //Dimension con numero de renglones y numero de columnas
	int h,valor,j;
	for(h=0,valor=1;h<REN;h+=2,valor++){
		for(j=0;j<COL;j++){
            m[h][j]=(COL*valor)-j;
			if (REN-h>1)
			{
				m[h+1][j]=(3*COL*valor)-(3*j);
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

