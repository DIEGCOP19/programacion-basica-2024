#include <iostream>
using namespace std;

class B;  // Declaración anticipada de la clase B

class A {
private:
    int x;  // Atributo privado
public:
    // Constructor con valor predeterminado para x
    A(int x_ = 10) : x(x_) {}  // Si no se pasa un valor, x se inicializa con 10
    friend class B;  // Clase B es amiga de la clase A
};

class B {
public:
    void mostrar(A cualquier_name) {
        // Puede acceder al atributo privado de la clase A
        cout << "El valor de x en A es: " << cualquier_name.x << endl;
    }
};

int main() {
    A a1;  // Crear un objeto de la clase A, usa el valor predeterminado de 10
    B b1;  // Crear un objeto de la clase B
    
    b1.mostrar(a1);  // Llamar al método de B que accede al atributo privado de A
    
    return 0;
}
