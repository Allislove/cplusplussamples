// DeGradosCelsiusAFarenheit.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;


/*Escribir una función que convierta una temperatura dada en grados
Celsius a grados Fahrenheit. La fórmula de conversión
es:  F = 9/5 * C + 32   */

void convertirFarenheit(float C) {
    float F;

    F = (9.0 / 5.0 * C)  + 32.0;

    cout << "El valor de Celcius en Farenheit es de : " << F << endl;
}


int main()
{
    std::cout << "Hello World!\n";
    convertirFarenheit(10.0);

}
