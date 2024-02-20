#include <stdio.h>
#include <string.h>

int main(){
    short caracter,temp,bin[3];
    int i;
    scanf("%i",&caracter);
    temp=caracter;
    for (i = 2; i >= 0; i--){
        if ((temp & 1) == 1){
            bin[i]=1;
        }else{
            bin[i]=0;
        }
        temp = temp >> 1;
    }
    for (i = 0; i < 3; i++)
    {
        printf("%i",bin[i]);
    }
    
}