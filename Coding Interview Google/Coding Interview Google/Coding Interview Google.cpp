// Coding Interview Google.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;

#define SIZE 3

/*
¡Buenos dias! Aquí está su problema de entrevista de codificación para hoy.
Este problema fue solicitado recientemente por Google.


Dada una lista de números y un número k, 
devuelve si dos números cualesquiera de la lista suman k.
Por ejemplo, dado [10, 15, 3, 7] y k de 17,
devuelve verdadero ya que 10 + 7 es 17.
*/

int validatingValueIntoArray(int* values) {
    int k = 13;
    //int arraySize = sizeof(values) / sizeof(values[0]);
    // cout << "Valor del array: " << SIZE << endl;

    for (int i = 0; i <= SIZE; i++) {
        // lo primero es pensar en como entro a los valores de el array
        // y luego de estar ahi, que se busque la suma de dos numeros que sean = k
       // cout << "Valores dentro del array: " << endl;
         
        if (k == values[i] + values[i] + 1) {
            cout << "K SUMA: > " << k << endl;
            return 0;
        }
        else {
            int valueSum = 0;
            valueSum = (values[i] + values[i+1]) ^ (values[i-1] + values[i+1]);
            cout << "Valor de la suma: " << valueSum << endl;
        }
        // cout << values[i] << endl; 

    }

    return 0;
}


int main()
{

    cout << "Encontrando la suma de k en el array\n";

    int listArr [] = {10, 5, 3, 20};

    validatingValueIntoArray(listArr);

    return 0;
}
