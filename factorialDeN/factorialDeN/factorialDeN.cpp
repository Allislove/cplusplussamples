// factorialDeN.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

using namespace std;


long int factorial(int n); // declaracion(prototipo) de la funcion factorial


int main()
{
    cout << "Factorial de n\n";

    int valor1, valor2;

    do {
        cout << "Porfavor ingresa dos numeros: x < y" << endl;
        cin >> valor1 >> valor2;


    } while (valor1 <= 0 || valor2 <= 0 || valor1 >= valor2);

    for (int i = valor1; i <= valor2; ++i) {
        cout << i << " factorial: " << factorial(i) << endl;
        /* La funcion factorial recibira, un rango entre el valor1 y valor2
        y ya en su definición dicha funcion lo que hara, es que 
        sacara el factorial de esos numeros dados, ya que se llamara en cada iteracion

        */
       
    }

    return 0;

}
    // Definición de la funcion factorial

long int factorial(int n) {
    long int f = 1;
    for (int i = 1; i <= n; i++) {
        f = f * i; // entonces, ejemplo f = 1 f = f * i 
        // f = 1 , 1 * 2 = 2 ahora f = 2. y el loop estare en 3
        // entonces 2 * 3 = 6, ahora el loop estara en 4 y f = 6
        // entonces 4 * 6 = 24 
    }
    return f;

}
