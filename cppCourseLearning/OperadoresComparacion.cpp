#include <iostream>
using namespace std;
int main(){
    //Operadores comparacion o relacionales
    int a = 5, b = 6;
    cout << "Valor a: " << a << endl;
    cout << "Valor b: " << b << endl;
    //Operador Igualdad ==
    bool c = (a == b); //bool c = a == b
    cout << "a es igual que b? " << c << endl;
    //Operador distinto !=
    c = a != b;
    cout << "a distinto que b? " << c << endl;
    //Operador Mayor que >
    c = a > b;
    cout << "a mayor que b? " << c << endl;
    //Operador Mayor o igual que >=
    c = a >= b;
    cout << "a mayor o igual que b? " << c << endl;
    //Operador menor que <
    c = a < b;
    cout << "a es menor que b? " << c << endl;
    //Operador menor o igual que <=
    c = a <= b;
    cout << "a menor o igual que b? " << c << endl;
    return 0;
}