// EjercicioMeDivide.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

using namespace std;

/*Escribir una función lógica de dos argumentos enteros, 
que devuelva true si uno divide al otro y false en caso contrario.*/

bool meDivide(int number1, int number2) {

    if (number1 % number2 == 0)
        cout << number1 << " divide a : " << number2 << endl;
    /*else if (number2 % number1 == 0) // esto funciona, para hacerlo en el caso de que queramos mirarlo desde el lado b
        cout << number2 << " divide a : " << number1 << endl;*/
    else
        cout << "No son divivibles" << endl;

    return 0;
}


int main()
{
    std::cout << "Hello World!\n";

    meDivide(10, 20);

}
