#include <iostream>
#include <string>
using namespace std;

class Provincia {
public:
    string gobernador;

  
    Provincia(string gobernador_val) : gobernador(gobernador_val) {}
};


class Pais : public Provincia {
public:
    string idioma;
    string presidente;


    Pais(string idioma_val, string presidente_val, string gobernador_val)
        : Provincia(gobernador_val), idioma(idioma_val), presidente(presidente_val) {}
};


class Persona {
public:
    string nombre;
    string apellido;

   
    Persona(string nombre_val, string apellido_val) : nombre(nombre_val), apellido(apellido_val) {}
};


class PadronElectoral : public Pais {
public:
    string distrito;
    
    
    PadronElectoral(string distrito_val, string idioma_val, string presidente_val, string gobernador_val)
        : Pais(idioma_val, presidente_val, gobernador_val), distrito(distrito_val) {}
};

class Ciudadano : public Persona, public PadronElectoral {
public:
    string id;


  Ciudadano(string id_val, string nombre_val, string apellido_val, string distrito_val, string idioma_val, string presidente_val, string gobernador_val)
        : Persona(nombre_val, apellido_val), PadronElectoral(distrito_val, idioma_val, presidente_val, gobernador_val), id(id_val) {}
};

class ExtranjeroEnTransito : public Pais, public Persona {
public:
    string paisOrigen;
    string fechaIngreso;
    string tiempoPermanencia;

    
    ExtranjeroEnTransito(string paisOrigen_val, string fechaIngreso_val, string tiempoPermanencia_val, string nombre_val, string apellido_val, string idioma_val, string presidente_val, string gobernador_val)
        : Persona(nombre_val, apellido_val), Pais(idioma_val, presidente_val, gobernador_val), paisOrigen(paisOrigen_val), fechaIngreso(fechaIngreso_val), tiempoPermanencia(tiempoPermanencia_val) {}
};

int main() {
    
    Pais peru("Español", "Pedro Castillo", "Gobernador de Lima");
    PadronElectoral padronLima("Lima Metropolitana", "Español", "Pedro Castillo", "Gobernador de Lima");

    Ciudadano ciudadano1("12345678", "Juan", "Perez", "Lima Metropolitana", "Español", "Pedro Castillo", "Gobernador de Lima");
    ExtranjeroEnTransito extranjero1("USA", "2024-01-01", "30 dias", "John", "Doe", "Ingles", "Joe Biden", "Gobernador de California");

    
    cout << "Pais: " << peru.idioma << ", Presidente: " << peru.presidente << ", Gobernador: " << peru.gobernador << endl;
    cout << "Padron Electoral Distrito: " << padronLima.distrito << endl;

    cout << "Ciudadano: " << ciudadano1.nombre << " " << ciudadano1.apellido << ", ID: " << ciudadano1.id << endl;
    cout << "Extranjero en Transito: " << extranjero1.nombre << " " << extranjero1.apellido << ", Pais de Origen: " << extranjero1.paisOrigen << endl;

    return 0;
}