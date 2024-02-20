#include <iostream>
using namespace std;

int main() {
	// Precedencia de Operadores en C++
	// 1. Parentesis y Corchetes
	// 2. Operadores unarios, como -, ++, --, !
	// 3. Aritmeticos *, / y %
	// 4. Aritmeticos + y -
	// 5. Relacionales <, <=, > y >=
	// 6. Igualdad == y !=
	// 7. Logicos && y ||
	// 8. Asignacion =, =+, -=, *=, etc
	
	// Ej. Se revisa de izquierda a derecha
	
	int a = 12 / 3 + 2 * 3 - 1;
	cout << "Resultado: " << a << endl;
	a = 12 / (3 + 2);
	cout << "Resultado: " << a << endl;
	a = 12 / (3 + 2) * 3 - 1;
	cout << "Resultado: " << a << endl;
	
	return 0;
}

