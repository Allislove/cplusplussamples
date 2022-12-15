// LeerCuantasVocalesHay.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

using namespace std;

// Crearemos una funcion que lea cuantas vocales se han introducido
// usaremos la funcion get() del objeto cin = cin.get()
// 

bool countVocals(char vcls) {
	// vcls = vocals
	vcls = toupper(vcls);
	
	return (vcls == 'A' || vcls == 'E' || vcls == 'I' || vcls == 'O' || vcls == 'U');

}

int main()
{
	cout << "Lectura de vocales!\n";
	int count = 0; // inicializamos la cuenta a 0
	char ch; // creamos el parametro que recibira la funcion

	// mientras estemos introduciendo caracteres, (hasta que cerremos el programa con ctrl c)
	while (cin.get(ch)) { // mientras se este introduciendo
		if (countVocals(ch)) {
			count++;
		}
	}

	cout << "Numero de vocales leidas: " << count << endl;

	return EXIT_SUCCESS;
}
