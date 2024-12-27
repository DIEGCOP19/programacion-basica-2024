#include <iostream>
using namespace std;

// Función que incrementa el valor de un número entero por referencia
void incrementarPorReferencia(int& numero) {
    numero++;
}

// Función que intercambia dos valores enteros por referencia
void intercambiar(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

// Función que muestra el contenido de un arreglo de enteros por referencia
void mostrarArreglo(const int (&arreglo)[5]) {
    for (int i = 0; i < 5; ++i) {
        cout << arreglo[i] << " ";
    }
    cout << endl;
}

int main() {
    int valor = 5;
    cout << "Valor antes de incrementar: " << valor << endl;
    incrementarPorReferencia(valor);
    cout << "Valor después de incrementar: " << valor << endl;

    int x = 10;
    int y = 20;
    cout << "Antes de intercambiar: x = " << x << ", y = " << y << endl;
    intercambiar(x, y);
    cout << "Después de intercambiar: x = " << x << ", y = " << y << endl;

    int arreglo[5] = {1, 2, 3, 4, 5};
    cout << "Arreglo: ";
    mostrarArreglo(arreglo);

    return 0;
}
