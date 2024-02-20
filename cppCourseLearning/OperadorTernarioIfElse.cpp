#include <iostream>
using namespace std;

int main(){
    //Sentencia if
    //Revisar si el valor proporcionado es positivo
    int numero = 2;

    //Verificar si es positivo
    /*
    if(numero > 0){
        cout << "Valor positivo: " << numero << endl;
    }
    else{
        cout << "Valor Cero o Negativo: " << numero << endl;
    }
    */

    //Operador ternario
    //Usable para códigos compactos
    (numero > 0) ? cout << "Positivo": cout << "Cero o Negativo";

    return 0;
}