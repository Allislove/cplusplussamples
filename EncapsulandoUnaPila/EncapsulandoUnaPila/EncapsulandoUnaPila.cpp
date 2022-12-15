// EncapsulandoUnaPila.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#define N 7
#include <iostream>
// ´PILA Y MANEJO DEL CONSTRUCTOR

class Pila {

private:
    int VEC[N];
    int* SP; // STACK POINTER
public:
    void Push(int);
    int Pull();
    Pila();
};


void Pila::Push(int W) {
    if (SP == VEC + N) {
        std::cout << "\n\n  llena\n\n" ;
        return;
    }

    *SP = W;
    SP++;
}


int Pila::Pull() {
    if (SP == VEC) {
        std::cout << "\n\n  PILA VACIA\n\n";
        return 0;
    }

    SP--; // LUEGO AQUI, VACIAMOS LA PILA
    return *SP;
}

Pila::Pila() {

    std::cout << "\n\n CONSTRUCTOR EN ACCION";
    getchar();
    SP = VEC;
}

int main()
{
    std::cout << "Pila!\n";
    Pila P;
    //P.init();  ESTO, MEJOR LO HACEMOS EN EL CONSTRUCTOR
    int VALOR;

    // Llenamos la pila
    for (int i = 0; i < N + 3; ++i) {
        std::cout << "\n\n VALOR = ";
        std::cin >> VALOR;
        P.Push(VALOR);
    }

    // P.init(); // OJO Esto reiniciale nuevamente el vector de la pila
    // por lo tanto estaria mal

    // Leemos la pila
    std::cout << "\n\n\n VALORS DE LA PILA";

    for (int j = 0; j < N + 3; ++j) {
        std::cout << "\n\n  " << P.Pull();
    }

    return 0;
}

