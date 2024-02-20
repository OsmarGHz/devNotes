#include <iostream>
using namespace std;

int main(){
    //Operadores lógicos
        bool a = true, b = false, c;
        cout << "Valor a: " << a << endl;
        cout << "Valor b: " << b << endl;
        //Operador AND (&&)
        //Regresa verdadero si ambos operandos son verdaderos
        c = a && b;
        cout << "Resultado operador AND: " << c << endl;

        //Operador OR (||)
        //Regresa verdadero si cualquiera de los operandos es verdadero
        c = a || b;
        cout << "Resultado operador OR: " << c << endl;

        //Operador logico NOT (!)
        //Invierte el valor original (true->false, false->true)
        c = !a;
        cout << "Resultado operador NOT: " << c << endl;
        return 0;
}