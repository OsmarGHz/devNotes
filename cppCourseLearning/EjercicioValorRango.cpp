#include <iostream>
using namespace std;
int main(){
    //Validar si un valor está dentro de rango
    const int MINIMO = 0, MAXIMO = 5;
    //Solicitar al usuario un valor entre 0 y 5;
    int dato;
    cout << "Proporciona un dato entre 0 y 5: " << endl;
    cin >> dato;
    //Verificar si el dato proporcionado está dentro de rango
    bool dentroRango = dato >= MINIMO && dato <= MAXIMO;
    cout << "Valor dentro de rango? " << dentroRango << endl;
    return 0;
}