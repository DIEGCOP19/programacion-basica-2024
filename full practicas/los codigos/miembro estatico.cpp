#include <iostream>
using namespace std;

class Ejemplo {
public:
    static int valor; // Declaración del miembro estático

    // Método estático para mostrar el valor
    static void mostrarValor() {
        cout << "El valor es: " << valor << endl;
    }
};

// Definición del miembro estático fuera de la clase
int Ejemplo::valor = 10;

int main() {
    // Llamada al método estático sin crear un objeto
    Ejemplo::mostrarValor(); // Debería mostrar 10

    // Cambiar el valor del miembro estático
    Ejemplo::valor = 20;

    // Llamada al método estático de nuevo para mostrar el nuevo valor
    Ejemplo::mostrarValor(); // Debería mostrar 20

    return 0;
}
