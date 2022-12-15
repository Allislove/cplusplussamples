// isAVocal.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;

//Escribir una función lógica Vocal que determine si un carácter es una vocal


void isVocal(char V) {

    char Vcls = tolower(V);
    cout << "Ingresa una vocal: " << endl;
    cin >> V;
    if (Vcls == 'a' || Vcls == 'e' || Vcls == 'i' || Vcls == 'o' || Vcls == 'u')
        cout << "is a Voval: " << endl;
    else
        cout << "is not a Voval: " << endl;

}

int main()
{
    cout << "Hello World!\n";

    isVocal('A');

    return 0;
}
