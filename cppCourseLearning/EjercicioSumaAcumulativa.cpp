#include <iostream>
using namespace std;

int main(){
    int sumaAcumulativa = 0, i = 1, max;
    cout << "¿Hasta qué numero quieres llegar? ";
    cin >> max;
    //Con ciclo while
    while (i <= max)
    {
        cout << i << ", ";
        sumaAcumulativa += i;
        i++;
        cout << "Suma acumulada al momento de: " << sumaAcumulativa << endl;
    }
    cout << endl << "La suma total fue: " << sumaAcumulativa << endl << endl;

    //Con ciclo do-while
    sumaAcumulativa = 0, i = 1;
    do
    {
        cout << i << ", ";
        sumaAcumulativa += i;
        i++;
        cout << "Suma acumulada al momento de: " << sumaAcumulativa << endl;
    } while (i <= max);
    cout << endl << "La suma total con do-while fue: " << sumaAcumulativa << endl << endl;

    //Con ciclo for
    sumaAcumulativa = 0;
    for (i = 1; i <= max; i++)
    {
        cout << i << ", ";
        sumaAcumulativa += i;
        cout << "Suma acumulada al momento de: " << sumaAcumulativa << endl;
    }
    cout << endl << "La suma total con for fue: " << sumaAcumulativa;
    
    
    return 0;
}