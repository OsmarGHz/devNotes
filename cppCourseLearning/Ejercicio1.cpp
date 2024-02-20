#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int edad;
    float sueldo;
    bool eConfianza;
    string nombreCompleto;

    cout << "Ingresa tu nombre: ";
    getline(cin,nombreCompleto);
    cout << "Ingresa tu edad: ";
    cin >> edad;
    cout << "Ingresa tu sueldo en MXN: ";
    cin >> sueldo;
    cout << "Eres empleado de confianza? (1-Verdadero/0-Falso)";
    cin >> eConfianza;

    cout << "La información dada es: " << endl;
    cout << "Nombre: " << nombreCompleto << endl;
    cout << "Edad: " << edad << endl;
    cout << fixed << setprecision(2);
    cout << "Sueldo(MXN): " << sueldo << endl;
    cout << "Empleado de confianza: " << eConfianza;

    return 0;
}