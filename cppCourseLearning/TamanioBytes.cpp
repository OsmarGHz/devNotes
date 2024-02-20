#include <iostream>
using namespace std;

int main(){
    //Obtener el tamaño en bytes de cada tipo de dato
    int entero;
    float flotante;
    double doble;
    char caracter;
    bool boleano;
    string cadena = "Hola";
    //Imprimir cada variable (tamaño en bytes)
    cout << "int tamano bytes: " << sizeof(entero) << endl;
    cout << "float tamano bytes: " << sizeof(flotante) << endl;
    cout << "double tamano bytes: " << sizeof(doble) << endl;
    cout << "char tamano bytes: " << sizeof(caracter) << endl;
    cout << "bool tamano bytes: " << sizeof(boleano) << endl;
    cout << "string tamano bytes: " << sizeof(cadena) << endl;
    cout << "cadena tamano length: " << cadena.length() << endl;
    cout << "cadena tamano size: " << cadena.size() << endl;

    return 0;
}