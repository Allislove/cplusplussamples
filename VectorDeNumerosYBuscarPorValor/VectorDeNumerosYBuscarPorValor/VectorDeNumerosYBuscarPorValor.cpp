// VectorDeNumerosYBuscarPorValor.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <array>


/*
Leer un vector de 15 números enteros y a continuación se entre en un bucle de forma que 
mientras se introduzcan por teclado números distintos de cero, se deberán 
buscar estos números en el vector e indicar en pantalla si están dentro y en qué posición.
*/


void showThePositionNumberInto(const int* values, int size) {

    int vN;

	// recordemos, inicializamos el array con la cantidad que hemos puesto 0-nvalues
	int theNumberIs[1];
	// Pedimos el numero por teclado al usuario
	std::cout << "Please enter a number ! 0 : " << std::endl;
	std::cin >> vN;

	if (vN != 0) {
		for (int i = 0; i < size; i++) {
			if (values[i] == vN) { // si el valor actual, es igual al valor introducido
				theNumberIs[0] = values[i]; // entonces theNumberIs = valorActual
			}
			//return;
		}

		//std::cout << values << " " << std::endl;
	}

	for (int i = 0; i <1; i++) {
		//std::cout << "FROM THE OUTPUT OF theNumberIs: " << std::endl;
		std::cout << "The value is into: " << theNumberIs[i] << " " << std::endl;
	}

}

int main()
{
    std::cout << "Hello World!\n";

	const int myArray[] = {5,6,7,9,50,20,14};
	showThePositionNumberInto(myArray, 7);

	return 0;

}


// otra forma mas simple de hacerlo // mejor esta la de arriba
// debo de incluir la libreria array

/*
void showThePositionNumberInto(const int* values, int size)
{
	int vN;

	std::cout << "Please enter a number between 0 and the size of the array - 1: " << std::endl;
	std::cin >> vN;

	if( vN >= size or vN < 0 )
	{
		std::cout << "no\n";
		return;
	}

	std::cout << values[vN] << " " << std::endl;
}

int main()
{
	std::cout << "Hello World!\n";
	const std::array<int, 7> myArray = {5,6,7,9,50,20,14};
	showThePositionNumberInto( myArray.data(), myArray.size() );
}

*/