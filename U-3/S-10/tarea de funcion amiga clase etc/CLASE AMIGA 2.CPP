#include <iostream>
#include <string>

using namespace std;

class Mamifero {
protected:
    string nombre;
    int edad;
    static int totalMamiferos;

public:
    Mamifero(string nombre, int edad) : nombre(nombre), edad(edad) {
        totalMamiferos++;
    }

    virtual void mostrarInfo() = 0;

    static int obtenerTotalMamiferos() {
        return totalMamiferos;
    }

    friend void mostrarInfoAmiga(Mamifero& m);
};

int Mamifero::totalMamiferos = 0;

class Felino : public Mamifero {
public:
    Felino(string nombre, int edad) : Mamifero(nombre, edad) {}

    void mostrarInfo() {
        cout << "Felino: " << nombre << ", Edad: " << edad << " años" << endl;
    }

    friend void mostrarInfoAmiga(Mamifero& m);
};

class Cetaceo : public Mamifero {
public:
    Cetaceo(string nombre, int edad) : Mamifero(nombre, edad) {}

    void mostrarInfo() {
        cout << "Cetaceo: " << nombre << ", Edad: " << edad << " años" << endl;
    }

    friend void mostrarInfoAmiga(Mamifero& m);
};

void mostrarInfoAmiga(Mamifero& m) {
    m.mostrarInfo();
}

int main() {
    Felino felino("Tigre", 5);
    Cetaceo cetaceo("Delfín", 8);

    mostrarInfoAmiga(felino);
    mostrarInfoAmiga(cetaceo);

    cout << "Total de mamíferos: " << Mamifero::obtenerTotalMamiferos() << endl;

    return 0;
}