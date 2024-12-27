#include <iostream>
using namespace std;

class IngenieroCivil {
protected:
    string nombreIngeniero;
    string especialidad;
public:
    IngenieroCivil(string n, string e) : nombreIngeniero(n), especialidad(e) {}

    void setDatosIngeniero(string n, string e) {
        nombreIngeniero = n;
        especialidad = e;
    }

    virtual void infoIngeniero() {
        cout << "NOMBRE DEL INGENIERO CIVIL: " << nombreIngeniero << endl;
        cout << "ESPECIALIDAD: " << especialidad << endl;
    }
};

class Obreros {
protected:
    string nombreObrero;
    string oficio;
public:
    Obreros(string n, string o) : nombreObrero(n), oficio(o) {}

    void setDatosObrero(string n, string o) {
        nombreObrero = n;
        oficio = o;
    }

    virtual void infoObrero() {
        cout << "NOMBRE DEL OBRERO: " << nombreObrero << endl;
        cout << "OFICIO: " << oficio << endl;
    }
};

class Edificacion : public IngenieroCivil, public Obreros {
private:
    string nombreEdificacion;
    string tipoDeConstruccion;
public:
    Edificacion(string nIngeniero, string eIngeniero, string nObrero, string oObrero, string nEdificacion, string tConstruccion)
        : IngenieroCivil(nIngeniero, eIngeniero), Obreros(nObrero, oObrero), nombreEdificacion(nEdificacion), tipoDeConstruccion(tConstruccion) {}

    void setDatos(string nIngeniero, string eIngeniero, string nObrero, string oObrero, string nEdificacion, string tConstruccion) {
        IngenieroCivil::setDatosIngeniero(nIngeniero, eIngeniero);
        Obreros::setDatosObrero(nObrero, oObrero);
        nombreEdificacion = nEdificacion;
        tipoDeConstruccion = tConstruccion;
    }

    void info() {
        IngenieroCivil::infoIngeniero();
        Obreros::infoObrero();
        cout << "NOMBRE DE LA EDIFICACION: " << nombreEdificacion << endl;
        cout << "TIPO DE CONSTRUCCION: " << tipoDeConstruccion << endl;
    }
};

int main() {
    IngenieroCivil i1("Juan Perez", "Estructuras");
    Obreros o1("Carlos Gomez", "Albanil");
    Edificacion e1("Juan Perez", "Estructuras", "Carlos Gomez", "Albanil", "Edificio Moderno", "Construccion de viviendas");

    cout << "Info del ingeniero civil: " << endl;
    i1.infoIngeniero();

    cout << "\nInfo del obrero: " << endl;
    o1.infoObrero();

    cout << "\nInfo de la edificacion: " << endl;
    e1.info();

    return 0;
}
