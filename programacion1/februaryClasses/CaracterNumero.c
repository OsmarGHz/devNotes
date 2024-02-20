#include <stdio.h>
#include <string.h>

int main(){
    unsigned char caracter,temp,mascara=1;
    int i,bitsOn=0;
    scanf("%c",&caracter);
    temp=caracter;
    for (i = 1; i <= 8; i++){
        if ((temp&mascara)==mascara){
            bitsOn++;
        }
        mascara*=2;
    }
    printf("Hay %d bits encendidos en el caracter %c",bitsOn,temp);
}