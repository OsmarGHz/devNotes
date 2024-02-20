#include <iostream>
using namespace std;

int main(){
    //Ejercicio dia semana (if else)
    int diaSemana;
    cout << "Proporciona el dia de la semana: ";
    cin >> diaSemana;

    //Revisar qué dia de la semana es
    if(diaSemana == 1)
        cout << "Lunes" << endl;
    else if(diaSemana == 2)
        cout << "Martes" << endl;
    else if(diaSemana == 3)
        cout << "Miercoles" << endl;
    else if(diaSemana == 4)
        cout << "Jueves" << endl;
    else if(diaSemana == 5)
        cout << "Viernes" << endl;
    else if(diaSemana == 6)
        cout << "Sabado" << endl;
    else if(diaSemana == 7)
        cout << "Domingo" << endl;
    else
        cout << "Valor dia erróneo: " << diaSemana << endl;

    //Ejercicio Dia Semana (switch)

    //También es posible realizar:
    //  case 1: case 2: case 3:
    //para que en 3 casos se haga lo mismo.

    switch(diaSemana){
        case 1:
            cout << "Lunes" << endl;
            break;
        case 2:
            cout << "Martes" << endl;
            break;
        case 3:
            cout << "Miércoles" << endl;
            break;
        case 4:
            cout << "Jueves" << endl;
            break;
        case 5:
            cout << "Viernes" << endl;
            break;
        case 6:
            cout << "Sábado" << endl;
            break;
        case 7:
            cout << "Domingo" << endl;
            break;
        default:
            cout << "Valor dia erróneo: " << diaSemana << endl;
            break;
    }
    switch(diaSemana){
        case 1: case 2: case 3: case 4: case 5:
            cout << "Es día laboral";
            break;
        case 6: case 7:
            cout << "Es fin de semana!";
            break;
        default:
            cout << "Valor dia erróneo: " << diaSemana << endl;
            break;
    }
    return 0;
}