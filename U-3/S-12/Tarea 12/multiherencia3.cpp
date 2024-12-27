#include <iostream>
using namespace std;

class Empleado {
protected:
    string nombreEmpleado;
    string puesto;
public:
    Empleado(string n, string p) : nombreEmpleado(n), puesto(p) {}

    void setDatosEmpleado(string n, string p) {
        nombreEmpleado = n;
        puesto = p;
    }

    virtual void infoEmpleado() {
        cout << "NOMBRE DEL EMPLEADO: " << nombreEmpleado << endl;
        cout << "PUESTO: " << puesto << endl;
    }
};

class Freelancer {
protected:
    string nombreFreelancer;
    string especialidad;
public:
    Freelancer(string n, string e) : nombreFreelancer(n), especialidad(e) {}

    void setDatosFreelancer(string n, string e) {
        nombreFreelancer = n;
        especialidad = e;
    }

    virtual void infoFreelancer() {
        cout << "NOMBRE DEL FREELANCER: " << nombreFreelancer << endl;
        cout << "ESPECIALIDAD: " << especialidad << endl;
    }
};

class Trabajo : public Empleado, public Freelancer {
private:
    string proyecto;
public:
    Trabajo(string nEmpleado, string pEmpleado, string nFreelancer, string eFreelancer, string proy)
        : Empleado(nEmpleado, pEmpleado), Freelancer(nFreelancer, eFreelancer), proyecto(proy) {}

    void setDatos(string nEmpleado, string pEmpleado, string nFreelancer, string eFreelancer, string proy) {
        Empleado::setDatosEmpleado(nEmpleado, pEmpleado);
        Freelancer::setDatosFreelancer(nFreelancer, eFreelancer);
        proyecto = proy;
    }

    void info() {
        Empleado::infoEmpleado();
        Freelancer::infoFreelancer();
        cout << "PROYECTO: " << proyecto << endl;
    }
};

int main() {
    Empleado e1("Juan", "Desarrollador");
    Freelancer f1("Ana", "Diseñadora Gráfica");
    Trabajo t1("Juan", "Desarrollador", "Ana", "Diseñadora Gráfica", "Sitio Web de Empresa");

    cout << "Info del empleado: " << endl;
    e1.infoEmpleado();

    cout << "\nInfo del freelancer: " << endl;
    f1.infoFreelancer();

    cout << "\nInfo del trabajo: " << endl;
    t1.info();

    return 0;
}
