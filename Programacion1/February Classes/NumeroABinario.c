#include <stdio.h>
#include <string.h>

int main(){
    short lectura,temp,mascara=256;
    int i;
    scanf("%i",&lectura);
    temp=lectura;
    for (i = 0; i <= 8; i++){
        if ((temp&mascara)==mascara){
            printf("1");
        }else{
            printf("0");
        }
        mascara/=2;
    }
}