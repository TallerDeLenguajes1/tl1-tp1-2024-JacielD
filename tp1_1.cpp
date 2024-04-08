#include <iostream>
using namespace std;


int main() {
    std::cout << "Hola Mundo\n";

int var = 20; // Declara una variable de cualquier tipo, en este caso un entero
    int *ptr; // Declara un puntero a un entero

    ptr = &var; // Almacena la dirección de la variable en el puntero

    cout << "1) Contenido del puntero: " << *ptr << endl; // Imprime el contenido del puntero
    cout << "2) Dirección de memoria almacenada por el puntero: " << ptr << endl; // Imprime la dirección de memoria almacenada por el puntero
    cout << "3) Dirección de memoria de la variable: " << &var << endl; // Imprime la dirección de memoria de la variable
    cout << "4) Dirección de memoria del puntero: " << &ptr << endl; // Imprime la dirección de memoria del puntero
    cout << "5) Tamaño de memoria utilizado por la variable: " << sizeof(var) << " bytes" << endl;

    return 0;
}
