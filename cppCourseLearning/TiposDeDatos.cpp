#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    //Tipos de datos en c++

    //Tipo entero
    int entero = 10;
    cout << "Entero: " << entero << endl;
    //Tipo flotante
    float flotante = 8.9;
    cout << fixed << setprecision(2);
    cout << "Flotante: " << flotante << endl;
    //Tipo Double
    double doble = 9.9999;
    cout <<  "Doble: " << doble << endl;
    //Tipo char
    char caracter = 'A';
    cout << "Caracter: " << caracter << endl;
    char caracterDecimal = 65; // A - Ascii
    cout << "Caracter en decimal: " << caracterDecimal << endl;
    //Tipo bool
    bool boleano = true; //true - 1, false - 0
    cout << "Boleano: " << boleano << endl;

    //Clase String
    string cadena = "Hola";
    cout << "Cadena: " << cadena;

    return 0;
}