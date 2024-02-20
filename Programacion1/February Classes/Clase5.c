/*Sintaxis:
	Tipo nombre(Argumentos){ ((Siendo argumentos, parametros formales
	var locales
	instrucciones
}

Tipo arg1, arg2, ...

int suma (int a, int b){ //siendo (int a, int b) parametros formales
	int resultado;
	resultado=a+b;
	return resultado;
}

int main(){
	suma(7,7); //Siendo 7,7 parametros actuales
}


//Esto es un paso de parametros por valor. El VALOR del 1er parametro es recibido por a, y el del 2do por b. a y b no saben la variable desde la que se transfiere su valor.
int x=25;
int r;
r=suma(x,10);
r=suma(x+3,x*8)
suma(suma(2,x),suma(suma(2,x),5)-2);

int suma(int a,int b){
	int resultado;
	a=b+a;
	resultado=a+b;
	return resultados;
}

///////////////////////////////
void imprime(float y,char z){
	printf("%f,%c",y,z);
}
imprime(7.5,'a');

///////////////////////////////
int longitud(char cad[]) //Tiene que ver con paso de parametros por referencia. Si modifico la variable dentro de la funcion, la variable principal queda modificada.
						//Se pasa la direccion de memoria a char cad[]

///////////////////////////////
int cambia(char cad[],int c){
	cad[i]=cad[0]+3;
	return i;
}
i=2;
strcpy/cadena,"abcdef");
z=cambia(cadena,i);
printf("%d,%s",z,cadena);




*/
