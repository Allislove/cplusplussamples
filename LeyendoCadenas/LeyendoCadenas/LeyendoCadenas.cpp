// LeyendoCadenas.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <cstdlib>

/*  Leer una serie de cadenas de caracteres y mostrar en pantalla 
para cada una de ellas su longitud, y la
concatenación de esa cadena con la cadena "EXE". 
Cuando se lea la cadena nula el programa terminará.*/


/*void readingStrings(const int* cadena) {

    for(int i=0; i<)
}*/

int main()
{
    std::cout << "Serie de cadenas de caracteres: !\n";

    char nombre[5] = "hell";
    char nombre2[] = " Andrés Felipe Romaña Romaña";

    std::cout << "Nombre2: " << nombre2 << std::endl;
    for (int i = 0; i < 5; ++i) {
        // AQUI VEREMOS QUE EL CARACTER EN EL INDICE 4(POSICION 5) no es imprimible,
        // dado que este es el valor nulo \0
        std::cout << "nombre: " << i << " " << nombre[i] << std::endl;

    }

    std::cout << "Mirando los retorno de cadena, cuando pedimos por teclado: " << std::endl;

    char example[31];

    std::cout << "Write a phrase: " << std::endl;
    std::cin.getline(example, 33);
    std::cout << "\t\"" << example << "\"\n";
    std::cout << "Write another phrase: " << "\n";
    std::cin >> example;
    std::cout << "\t\"" << example << "\"\n";


    return EXIT_SUCCESS;

}

/*int numbers[]{ 5,6,9,7,50 };
// or 

int numbers[4]{ 1,5,3,6 };

// or this
int numbersxx[] = { 5,6,8,9,6 };

// not this, deben de haber cuatro valores, o menos en el array
//int numbers2[4] = { 1,2,3,6,7}; */
