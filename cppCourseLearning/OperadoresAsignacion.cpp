#include <iostream>
using namespace std;

int main(){
    //Operadores de asignación
    //Operador = para asignar un valor
    int miNumero = 10;
    int m = 6.999999999999999;
    int n = 6.9999999999999999;
    cout << "Valor miNumero: " << miNumero << endl;
    miNumero = 20;
    cout << "Valor miNumero: " << miNumero << endl;

    //Operadores de Asignacion Compuesto
    //Compuesto suma +=
    miNumero += 5; //miNumero = miNumero + 5;
    cout << "Valor miNumero: " << miNumero << endl;
    //Compuesto resta -=
    miNumero -= 3;
    cout << "Valor miNumero: " << miNumero << endl;
    //Compuesto multiplicación *=
    miNumero *=2;
    cout << "Valor miNumero: " << miNumero << endl;
    //Compuesto division /=
    miNumero /= 7;
    cout << "Valor miNumero: " << miNumero << endl;
    //Compuesto %=
    miNumero %= 2;
    cout << "Valor miNumero: " << miNumero << endl;

    cout << "Valor m: " << m << endl;
    cout << "Valor n: " << n << endl;
    cout << "De 1 a 15 9's después del punto decimal asignado a un número entero, se redonda hacia abajo (se hace un floor). De 16 en adelante, se redondea al número superior.";

    return 0;
}