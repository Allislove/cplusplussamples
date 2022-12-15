// structAlumnos.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;

/* Crear un programa que reciba los datos de alumnos*/

struct Alumnos {
    string fullName;
    string university;
    int age;
    int since;
};

// necesitamos crear un array en un loop, que cree cada estudiante al pasar cada loop


int main()
{
    cout << "| Alumnos de la U! |\n";
    int n;
    Alumnos *alumnos;
    cout << "Ingresa porfavor la cantidad de alumnos." << "\n";
    cin >> n;
    alumnos = new (nothrow) Alumnos[n];

    if (alumnos == nullptr) {
        cout << "Porfavor debes de ingresar un valor >0" << '\n';
    }
    else {
        for (int i = 0; i <= n; ++i) {
            cout << "Nombre completo " << i + 1 << '\n';
            cin >> alumnos[i].fullName;
        }

    }


    // Leyendos los datos de Alumnos obj1
    for (int i = 0; i < n; ++i) {
        cout << alumnos->fullName << '\n';
    }
    

    delete alumnos;
}

