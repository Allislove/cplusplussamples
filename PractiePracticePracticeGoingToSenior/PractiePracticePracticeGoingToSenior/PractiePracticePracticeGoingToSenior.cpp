// PractiePracticePracticeGoingToSenior.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

using namespace std;

int main()
{
    /*std::cout << "Hello World!\n";
    int i, Primero[21];
    for (i = 1; i <= 6; i++)
        cin >> Primero[i];
    for (i = 3; i > 0; i--)
        cout << Primero[2 * i];
    return EXIT_SUCCESS;
    // esto retorna  2 4 6 o = 6 4 2, debido a que en esta linea esta el -- */


    // programa dos

    int i, j, k, Primero[10];
    for (i = 0; i < 10; i++)
        Primero[i] = i + 3; // array Primero = 3 4 5 6 7 8 9 10 11 12 13 
    cin >> j >> k;
    for (i = j; i <= k; i++)
        cout << Primero[i] << " "; // si j = 5 y k = 10 
    // la salida del programa sera = 8 - 12

    return EXIT_SUCCESS;
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
