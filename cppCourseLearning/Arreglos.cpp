#include <iostream>
using namespace std;

int main(){
    //Arreglos
    //1. Declararlo
    int numerosArreglo[5];
    //2. Modificar los elementos del arreglo
    numerosArreglo[0]=13;
    numerosArreglo[1]=21;
    numerosArreglo[4]=62;
    //3. Imprimir los valores del arreglo
    cout << "Elemento 1 - arreglo[0]: " << numerosArreglo[0] << endl;
    cout << "Elemento 2 - arreglo[1]: " << numerosArreglo[1] << endl;
    cout << "Elemento 3 - arreglo[2]: " << numerosArreglo[2] << endl;
    cout << "Elemento 4 - arreglo[3]: " << numerosArreglo[3] << endl;
    cout << "Elemento 5 - arreglo[4]: " << numerosArreglo[4] << endl;
    return 0;
}