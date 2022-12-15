// ArraysDeclaracionesdePila.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

int main()
{
    std::cout << "Hello World!\n";

    constexpr size_t value = 1000;

    double numbers[value]{ 0 }; // definimos la longitud de numbers a value=1000
    // y accedemos al indice 0
    // pero esto en el loop, contara desde el 1000+1.1 hacia atras

    numbers[0] = 1; // asignamos un valor al elemento inicial de la matriz
    // ahora insertemos valores en dicho array numbers
    // debibo a que el array en el indice 0, lo hemos seleccionado, pues empecemos por el indice 1 
    for (size_t i = 1; i < value; i++) {

        numbers[i] = numbers[i-1] + 1.1;
    }

    // ahora accedemos a dichos valores de el array

    for (size_t i = 0; i < value; ++i) {

        std::cout << numbers[i] << " " << std::endl;
    }

}
