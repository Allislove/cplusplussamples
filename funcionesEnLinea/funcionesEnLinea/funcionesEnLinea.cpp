// funcionesEnLinea.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#define fspecial(x) (x * x + 5 * x - 2)
using namespace std;

/*Funciones en línea para calcular el volumen 
y el área total de un cilindro del que se leen su radio
y altura.
El volumen de un cilindro viene dado por: volumen = p * radio2 * altura.
El Areatotal viene dada por Areatotal =
= 2 * p * radio * altura + p * radio2.*/

const float PI = 3.141519;

// metodo inline volCilindro que calcula el volumen de un cilindro
inline float VolCilindro(float radio, float altura) {
    return PI * radio * radio * altura;
}

// Metodo que calcula el area total 

inline float AreaTotal(float radio, float altura) {
    return 2 * PI * radio * altura + PI * radio * radio;
}




int main()
{
    cout << "Porfavor ingresa solo valores positivos en los datos siguientes: \n";
    float radio, altura;
    float Volumen, areaTotal;

    float x;
    do { // si los datos son negativos, estare siempre en el do, de lo contrario su ejecucion sera normal, pedir los dos datos
        cout << "Porfavor ingresa el radio: " << "\n";
        cin >> radio;
        cout << "Porfavor ingresa la altura: " << endl;
        cin >> altura;

    } while (altura <= 0 || radio <= 0);
    // le damos valores a Volumen y areaTotal, que van a ser igual a el retorno de las funciones inline
    Volumen = VolCilindro(radio, altura);
    areaTotal = AreaTotal(radio, altura);
    cout << "El Volumen del Cilindro es: " << Volumen << endl;
    cout << "El Area total es: " << areaTotal << "\n";

    for (x = 0.0; x <= 6.0; x++) {
        cout << " X: " << fspecial(x);
    }

}

