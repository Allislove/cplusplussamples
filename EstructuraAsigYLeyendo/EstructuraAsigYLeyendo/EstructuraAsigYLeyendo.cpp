// EstructuraAsigYLeyendo.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

using namespace std;

struct Persona {
    char name[30];
    int edad;
    int year;
};

Persona p1;
Persona* p2;

int main()
{
    std::cout << "Struct Person!\n";

    // De esta forma, podemos insertar el texto a dicho array, conservando espacios y demas
    strcpy_s(p1.name, "Andres Felipe");
    p1.edad = 24;
    p1.year = 2022;

    strcpy_s(p2->name, "Jesús Is My Lord");
    p2->edad = 33;
    p2->year = 2020;

    cout << p1.name << "\n";
    cout << p2->name << "\n" ;
}

