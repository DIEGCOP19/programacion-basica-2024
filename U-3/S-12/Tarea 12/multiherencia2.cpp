#include <iostream>
using namespace std;

class Mama {
protected:
    string nombreMama;
public:
    Mama(string n) : nombreMama(n) {}

    void setDatosMama(string n) {
        nombreMama = n;
    }

    virtual void infoMama() {
        cout << "NOMBRE DE LA MAMA: " << nombreMama << endl;
    }
};

class Papa {
protected:
    string nombrePapa;
    string ocupacion;
    string edad;
public:
    Papa(string n, string o, string e) : nombrePapa(n), ocupacion(o), edad(e) {}

    void setDatosPapa(string n, string o, string e) {
        nombrePapa = n;
        ocupacion = o;
        edad = e;
    }

    virtual void infoPapa() {
        cout << "NOMBRE DEL PAPA: " << nombrePapa << endl;
        cout << "OCUPACION: " << ocupacion << endl;
        cout << "EDAD: " << edad << endl;
    }
};

class Hijo : public Mama, public Papa {
private:
    string nombreHijo;
    int edadHijo;
public:
    Hijo(string nMama, string nPapa, string ocupacionPapa, string edadPapa, string nHijo, int eHijo)
        : Mama(nMama), Papa(nPapa, ocupacionPapa, edadPapa), nombreHijo(nHijo), edadHijo(eHijo) {}

    void setDatos(string nMama, string nPapa, string ocupacionPapa, string edadPapa, string nHijo, int eHijo) {
        Mama::setDatosMama(nMama);
        Papa::setDatosPapa(nPapa, ocupacionPapa, edadPapa);
        nombreHijo = nHijo;
        edadHijo = eHijo;
    }

    void info() {
        Mama::infoMama();
        Papa::infoPapa();
        cout << "NOMBRE DEL HIJO: " << nombreHijo << endl;
        cout << "EDAD DEL HIJO: " << edadHijo << endl;
    }
};

int main() {
    Mama m1("Juana");
    Papa p1("Carlos", "Ingeniero", "45 años");
    Hijo h1("Juana", "Carlos", "Ingeniero", "45 años", "Pedro", 18);
    
    cout << "Info de la mama: " << endl;
    m1.infoMama();
    
    cout << "\nInfo del papa: " << endl;
    p1.infoPapa();
    
    cout << "\nInfo del hijo: " << endl;
    h1.info();
    
    return 0;
}
