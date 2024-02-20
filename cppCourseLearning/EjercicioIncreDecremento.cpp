#include <iostream>
using namespace std;
int main(){
    //Ejercicio incremento/decremento
    int a = 5, b = 2, c;

    c = ++a * b++;
    cout << "Valor a: " << a << endl;
    cout << "Valor b: " << b << endl;
    cout << "Valor c: " << c << endl;

    c = --a * b--;
    cout << endl;
    cout << "Valor a: " << a << endl;
    cout << "Valor b: " << b << endl;
    cout << "Valor c: " << c << endl;
    return 0;
}