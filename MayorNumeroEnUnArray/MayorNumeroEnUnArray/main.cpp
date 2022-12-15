

#include <iostream>

//# define sizeoff(type) ((char *)(&type+1)-(char*)(&type))

void mayorIntoArray(int numbers[]) {
	bool flag = true;
	int valorMayor = numbers[0]; // Digamos que el primer valor es el valor mayor:
	// luego en el loop, con un condicional, comparemos el primer valor de el array 
	// con cada uno de los valores de el array
	int valorMenor = numbers[0];
	std::cout << flag << " :flag" << std::endl;
	for (int i = 0; i <= sizeof(numbers); ++i) {
		if (numbers[i] > valorMayor ) {
			// si el numero inicial es mayor que el proximo, pongamos la flag en true
			//std::cout << numbers[i] << std::endl;
			valorMayor = numbers[i];
			flag = false;
		}

		/* Entonces, esto lo que hace es que, buscara el numero mayor de el array
		y luego determinaremos que valorMayor = mayor de dicho array, ya que 
		este mandara al final a valorMayor, el mayor que haya detectado en el loop*/
	}
	std::cout << flag << " :flag after:" << std::endl;
	std::cout << valorMayor << std::endl;

}


int main() {

	/* Escriba una función que devuelva el mayor valor entre los almacenados en un array. 
	Compruebe la función con un programa sencillo. : Solucionado =*/

	std::cout << "Mayor elemento de un array" << std::endl;

	int arrayNumbers[] = {15,6,9,20,48, 90};

	mayorIntoArray(arrayNumbers);



	return 0;
}