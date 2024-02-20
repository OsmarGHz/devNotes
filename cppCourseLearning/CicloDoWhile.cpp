#include <iostream>
using namespace std;

int main(){
    //Ciclo Do While
    //Solicitamos un valor positivo
    int numero;
    do{
        cout << "Proporciona un valor positivo: ";
        cin >> numero;
    } while (numero <= 0);
    cout << "Valor Positivo: " << numero << endl;
    return 0;
}