// EjercicioBookSerieSchaumPsiNEsPositivo.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

using namespace std;

/*Escribir una función que tenga un argumento de tipo entero 
y que devuelva la letra P si el número es positivo, y la letra N
si es cero o negativo.*/


void determineTheValue(int n) {
    if (n > 0)
        cout << "P" << endl;
    else
        cout << "N";
}


int main()
{
    cout << "Hello World!\n";

    determineTheValue(50);
    determineTheValue(-5);


}
