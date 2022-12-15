// LeerVocalesCongetYputback.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

using namespace std;

float siguienteReal() {
    char ch; // variable que recibira el dato del usuario por teclado
    float r;

    while (cin.get(ch)) { //  mientras que el siguiente caracter  (caracter que ingresa el usuario)
        if (ch >= '0' && ch <= '9') { // buscamos si el caracter anterior siguiente esta entre 0-9
            cin.putback(ch); // y restauramos el valor de ch
            cin >> r;  // si el caracter esta en ese rango, llamamos a r, para que sea igual a dicho valor entre 0-9
            break;
        }
    }
    return r; //  retornamos r

}

int main()
{
    float r1, r2;
    char ch;
    cout << "Introduzca linea con dos numeros a sumar!\n";
    while (cin.get(ch)) {
        cin.putback(ch); // restauramos para leer reales
        r1 = siguienteReal(), r2 = siguienteReal();
        cin.ignore(80, '\n'); // saltamos hasta fin de linea
        cout << r1 << " + " << r2 << " = " << r1 + r2 << " " << endl;
    }


    return 0;

}

