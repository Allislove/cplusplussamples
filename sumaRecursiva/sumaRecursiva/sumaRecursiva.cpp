// sumaRecursiva.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

int showSum(int number) {

    std::cout << "Please enter a number: "; std::cin >> number;

    return (number + (showSum(number)));
}

int main()
{


    std::cout << "Suma Recursiva\n";
    int result;
    result = showSum(5);
    std::cout << result;
}
