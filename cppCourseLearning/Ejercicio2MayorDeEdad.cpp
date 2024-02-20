#include <iostream>
using namespace std;

int main(){
    const int EDAD_ADULTO = 18;
    int edad;
    cout << "Ingresa tu edad: ";
    cin >> edad;
    if(edad >= EDAD_ADULTO)
        cout << "La persona con edad " << edad << " es un Adulto";
    else if(edad < EDAD_ADULTO && edad >= 0)
        cout << "La persona con edad " << edad << " NO es un adulto";
    else
        cout << "El valor ingresado no es una edad válida. Inténtelo de nuevo";
}