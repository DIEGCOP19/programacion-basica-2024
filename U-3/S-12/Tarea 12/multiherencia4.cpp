#include <iostream>
using namespace std;

class Fabricante {
protected:
    string nombreFabricante;
    string ubicacion;
public:
    Fabricante(string n, string u) : nombreFabricante(n), ubicacion(u) {}

    void setDatosFabricante(string n, string u) {
        nombreFabricante = n;
        ubicacion = u;
    }

    virtual void infoFabricante() {
        cout << "NOMBRE DEL FABRICANTE: " << nombreFabricante << endl;
        cout << "UBICACION: " << ubicacion << endl;
    }
};

class Investigador {
protected:
    string nombreInvestigador;
    string especialidad;
public:
    Investigador(string n, string e) : nombreInvestigador(n), especialidad(e) {}

    void setDatosInvestigador(string n, string e) {
        nombreInvestigador = n;
        especialidad = e;
    }

    virtual void infoInvestigador() {
        cout << "NOMBRE DEL INVESTIGADOR: " << nombreInvestigador << endl;
        cout << "ESPECIALIDAD: " << especialidad << endl;
    }
};

class Medicamento : public Fabricante, public Investigador {
private:
    string nombreMedicamento;
    string uso;
public:
    Medicamento(string nFabricante, string uFabricante, string nInvestigador, string eInvestigador, string nMedicamento, string uMedicamento)
        : Fabricante(nFabricante, uFabricante), Investigador(nInvestigador, eInvestigador), nombreMedicamento(nMedicamento), uso(uMedicamento) {}

    void setDatos(string nFabricante, string uFabricante, string nInvestigador, string eInvestigador, string nMedicamento, string uMedicamento) {
        Fabricante::setDatosFabricante(nFabricante, uFabricante);
        Investigador::setDatosInvestigador(nInvestigador, eInvestigador);
        nombreMedicamento = nMedicamento;
        uso = uMedicamento;
    }

    void info() {
        Fabricante::infoFabricante();
        Investigador::infoInvestigador();
        cout << "NOMBRE DEL MEDICAMENTO: " << nombreMedicamento << endl;
        cout << "USO DEL MEDICAMENTO: " << uso << endl;
    }
};

int main() {
    Fabricante f1("Farmacéutica XYZ", "Ciudad A");
    Investigador i1("Dr. Luis Pérez", "Química Farmacéutica");
    Medicamento m1("Farmacéutica XYZ", "Ciudad A", "Dr. Luis Pérez", "Química Farmacéutica", "Paracetamol", "Aliviar el dolor y la fiebre");

    cout << "Info del fabricante: " << endl;
    f1.infoFabricante();

    cout << "\nInfo del investigador: " << endl;
    i1.infoInvestigador();

    cout << "\nInfo del medicamento: " << endl;
    m1.info();

    return 0;
}
