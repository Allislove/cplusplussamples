// LecturaYEscrituraDeCadenas.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

using namespace std;

/*EJEMPLO 9.3. Lectura y escritura de cadenas de caracteres*/

// Creamos una estructura con las variables principales de dicho registro
struct registro {
    char nombre_completo[61];
    char direccion[51];
    char barrio[51];
}r;


// Ahora creamos una funcion para leer(escribir) datos en dichos arrays de caracteres
/* Creación de un metodo qcon un parametro del tipo registro, con una referencia 
a dicho objeto r*/
void writeDataIntoRegistro(registro &r) {
    cout << "Ingresa tu nombre completo: "; cin.getline(r.nombre_completo, 62);
    cout << "Ingresa tu direccion: "; cin.getline(r.direccion, 52);
    cout << "Ingresa tu barrio: "; cin.getline(r.barrio, 52);
}

// Ahora escribimos un metodo, para la lectura de dicha informacion escrita
/* Metodo que recibe un parametro del tipo de la struct registro*/
void readingDataFromRegister(registro r) {
    cout << "Customer: " << r.nombre_completo << endl;
    cout << "Addres: " << r.direccion << "\n";
    cout << "Neighborhood: " << r.barrio << "\n";
}




int main(int argc, char *argv[])
{
    std::cout << "Trabajando con cadenas, mediante una creacion de registro!\n";

    writeDataIntoRegistro(r);
    readingDataFromRegister(r);

    return 0;
}
