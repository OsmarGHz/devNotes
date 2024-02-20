#include <iostream>
#include <iomanip> //Input-output manipulation

using namespace std;

int main(){
    //Dirección de memoria de una variable en c++
    int entero = 10;
    cout << "Entero: " << entero << endl;
    //Dirección de memoria de una variable
    cout << "Su dirección de memoria es: " << &entero;
    return 0;
}