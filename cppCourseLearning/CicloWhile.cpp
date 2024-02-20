#include <iostream>
using namespace std;

int main(){
    //Ciclo while
    //Imprimir 1 al 5
    int contador = 1, maximo = 5;
    /*
    while(contador <= maximo){
        cout << contador << endl;
        contador++;
    }
    */

    while(contador <= maximo){
        cout << contador++ << endl;
    }
    return 0;
}