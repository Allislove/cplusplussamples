// SumaDeNumerosPares.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//


#include <iostream>
using namespace std;



/*

Realizar la suma de todos los números pares entre 2 y 1.000.
*/

int main()
{
	int sum = 0;
	for (int i = 0; i <= 1000; ++i) {

		if (i % 2 == 0) {
			sum += i;
		};

	}
	cout << sum;

}

