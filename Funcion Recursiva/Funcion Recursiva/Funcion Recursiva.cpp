// Funcion Recursiva.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;


// declaracion de funcion
int recursividad(int n);

int recursividad(int n) {
	if (n == 0) {
		n = 1;
	}
	else { // aqui se hace la recursividad, empeiza a llamar a la funcion misma
		n = n * recursividad(n - 1);
	}
	return n;


}
int main()
{
	// declaracion de funcion

	cout << "El factorial de: " << recursividad(5) << endl;

}

