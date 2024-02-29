#include <stdio.h>
#include <malloc.h>

int main(){
    int cont=90;
    int *puntero, *copia;
	
	puntero = (int *) malloc (sizeof(int));
	copia = (int *) malloc (sizeof(int));
	
	printf("\n%p",(void *)&cont);
	printf("\n%p",(void *)puntero);
	printf("\n%p",(void *)copia);
	printf("\n%d",cont);
	printf("\n%d",*puntero);
	printf("\n%d",*copia);

    /*printf("\ncont: direccion=%p contenido=%d  puntero: direccion=%p contenido=%d  copia: direccion=%p contenido=%d", (void *)&cont, cont, (void *)puntero, *puntero, (void *)copia, *copia);
*/
    puntero=&cont;
    printf("\ncont: direccion=%p contenido=%d  puntero: direccion=%p contenido=%d  copia: direccion=%p ", (void *)&cont, cont, (void *)puntero, *puntero, (void *)copia);

    copia=puntero;
    printf("\ncont: direccion=%p contenido=%d  puntero: direccion=%p contenido=%d  copia: direccion=%p contenido=%d", (void *)&cont, cont, (void *)puntero, *puntero, (void *)copia, *copia);

    *copia=67;
    printf("\ncont: direccion=%p contenido=%d  puntero: direccion=%p contenido=%d  copia: direccion=%p contenido=%d", (void *)&cont, cont, (void *)puntero, *puntero, (void *)copia, *copia);
	
    return 0;
}
