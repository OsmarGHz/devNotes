#include <iostream>

using namespace std;

int main(){
    //Introducir datos desde la consola

    //1. Declarar variable:
    int entero;
    //2. Solicitar valor de entrada:
    cout << "Proporciona un numero: ";
    cin >> entero;
    //3. Desplegamos el valor:
    cout << "Valor proporcionado: " << entero << endl;

    //Introducir una cadena
    string nombre;
    //Pedimos el valor desde consola
    cout << "Proporciona tu nombre" << endl;
    //cin >> nombre; //Solo lee la línea, hasta encontrar un espacio
    cin.ignore(); //Limpiamos los caracteres del buffer de la consola
    getline(cin,nombre);
    cout << "Nombre Proporcionado: " << nombre;

    return 0;
}