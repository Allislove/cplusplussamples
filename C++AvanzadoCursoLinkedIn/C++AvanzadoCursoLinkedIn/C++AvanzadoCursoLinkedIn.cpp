// C++AvanzadoCursoLinkedIn.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;


// Clases .  class Nombreclase 

/* Class = class Empleado { public: || private || protected , por defecto = private } */
// Example

class Empleado {
public:
    string name{};
    int id{};
    int age{};
    string email{};
    float salary{};
    const static int qtySalaryAnual = 12;

    float CalcularSueldo();
    // private // leer nuevamente = privado, solo podemos acceder a los miembros
    // desde dicha clase
// protected: // leer nuevamente

    Empleado() {};
};

// Maneo automatico de memoria con objetos

// Maneo No automatico de memoria con objetos
/*  Empleado *p = new Empleado();/

int main()
{
    std::cout << "Hello World!\n";

    Empleado emp1;
    emp1.name = "Andres";
    emp1.age = 24;
    emp1.salary = 500.00;

    cout << emp1.CalcularSueldo() << '\n';
}



float Empleado::CalcularSueldo() {

    return (salary / qtySalaryAnual);
}