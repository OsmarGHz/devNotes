#include <iostream>
using namespace std;

int main(){
    const int TOPE1 = 10, TOPE2 = -10;
    cout << "Incrementos de 3 en 3 (tope 10): " << endl;
    for(int i=1; i <= TOPE1; i+=3)
        cout << i << " ";
    cout << endl << "Decrementos de 3 en 3 (tope -10): " << endl;
    for(int j=1; j >= TOPE2; j-=3)
        cout << j << " ";
    return 0;
}