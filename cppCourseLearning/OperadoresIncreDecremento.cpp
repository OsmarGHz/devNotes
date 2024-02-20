#include <iostream>
using namespace std;

int main(){
    //Operadores Incremento
        int a = 0, b, c;
        //Operador de pre-Incremento
        ++a; //Se incrementa antes de ser usada nuevamente
        cout << "Nuevo valor a (++a): " << a << endl;
        //Operador post-incremento
        a++; //Se incrementa hasta la siguiente vez que se utilice
        cout << "Nuevo valor a (a++): " << a << endl;

        //Operadores Decremento
        //Pre-decremento
        --a; //Se decrementa antes de ser utilizada nuevamernte esta variable
        cout << "Nuevo valor a (--a): " << a << endl;
        //Post-decremento
        a--; //Se decrementa hasta la siguiente vez que se utilice
        cout << "Nuevo valor a (a--): " << a << endl;
    return 0;
}