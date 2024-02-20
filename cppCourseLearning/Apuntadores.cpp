#include <iostream>
using namespace std;

int main(){
    //Apuntadores (Referencia de memoria)
    int a = 10;
    //Definimos un apuntador
    int *b = &a;
    cout << "Dirección de memoria a: " << &a << endl;
    cout << "Dirección de memoria a la que apunta b: " << b << endl;
    cout << "Desreferencia *b: " << *b << endl;
    cout << "Valor a: " << a << endl;
    cout << "Dirección de memoria del apuntador: " << &b << endl << endl;

    //Modificar el valor de a, pero con el uso del apuntador
    //Desrreferencia para acceder al valor de la memoria a la que apuntamos
    *b = 20;
    cout << "Nuevo valor desde a: " << a << endl;
    cout << "Nuevo valor desde *b (apuntador): " << *b << endl;

    return 0;
}