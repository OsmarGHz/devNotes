#include <iostream>
using namespace std;

int main(){
    //Sentencia if
    //Revisar si el valor proporcionado es positivo
    int numero = -2;
    //Verificar si es positivo
    if(numero > 0){
        cout << "Valor positivo: " << numero << endl;
    }
    else if(numero < 0){
        cout << "Valor negativo: " << numero << endl;
    }
    else{
        cout << "Valor cero: " << numero << endl;
    }
    return 0;
}