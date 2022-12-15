// ConstructorYDestructor.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

class ALFA {
public:
    ALFA();
    ~ALFA();
    void Funcion();
};

ALFA::ALFA() {
    std::cout << "BRAHMA ES EL CREADOR \n\n";
    getchar();
}

ALFA::~ALFA() {
    std::cout << "SHIVA ES EL DESTRUCTOR\n\n";
    getchar();
}


void ALFA::Funcion() {
    std::cout << "VISHNU ES EL PROTECTO: \n\n";
    getchar();
}

void Funcion2();
int main()
{

    ALFA X;

    X.Funcion();
    Funcion2();

    std::cout << "FIN PROGRAMA!\n";

}

void Funcion2() {
    std::cout << "DENTRO DE LA  NVA FUNCION!\n";

    ALFA Y;

    Y.Funcion();

    std::cout << "POR SALIR DE LA FUNCION!\n";
}

