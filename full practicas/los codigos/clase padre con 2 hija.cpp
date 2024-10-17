#include <iostream>
using namespace std;
class Electrodomestico {
protected:
    int id;
    string marca;
    string modelo;
    float precio;
public:
    void setDatos(int di, string mar, string model, float prec) {
        id = di;
        marca = mar;
        modelo = model;
        precio = prec;
    }
    void mostrarInformacion() {
        cout << "ID: " << id << endl;
        cout << "Precio en soles: " << precio << endl;
        cout << "Marca: " << marca << endl;
        cout << "Modelo: " << modelo << endl;
    }
};

class Licuadora : public Electrodomestico {
private:
    float capacidad;
    int numdevelocidades;
    int potencia;

public:
    void setDatosProductos(int di, string mar, string model, float prec, float capa, int nvelo, int pot) {
        setDatos(di, mar, model, prec);
        capacidad = capa;
        numdevelocidades = nvelo;
        potencia = pot;
    }

    void ENCENDIDO() {
        cout << "Esta licuadora está prendida." << endl;
    }

    void info() {
        cout << "------------------" << endl;
        cout << "INFORMACION DEL ELECTRODOMESTICO" << endl;
        mostrarInformacion();
        cout << "CAPACIDAD: " << capacidad << " litros" << endl;
        cout << "NUMERO DE VELOCIDADES: " << numdevelocidades << endl;
        cout << "POTENCIA: " << potencia << " vatios" << endl;
        cout << "------------------" << endl;
    }
};

class Microondas : public Electrodomestico {
private:
    int vatios;
    int litros;

public:
    void setDatosProduct(int di, string mar, string model, float prec, int vat, int lit) {
        setDatos(di, mar, model, prec);
        vatios = vat;
        litros = lit;
    }

    double calcularTiempoCoccion(double cantidadAlimento) {
        return (cantidadAlimento * 0.5) / (vatios / 1000.0); // Asume 0.5 minutos por cada 1000 vatios
    }

    void info() {
        cout << "------------------" << endl;
        cout << "INFORMACION DEL PRODUCTO" << endl;
        mostrarInformacion();
        cout << "POTENCIA EN VATIOS: " << vatios << endl;
        cout << "LITROS DE CAPACIDAD: " << litros << endl;
        cout << "------------------" << endl;
    }
};

int main() {
    int opcion;

    cout << "Menu de opciones:" << endl;
    cout << "1. Ingresar datos de una licuadora" << endl;
    cout << "2. Ingresar datos de un microondas" << endl;
    cout << "3. Salir" << endl;
    cout << "Seleccione una opción (1-3): ";
    cin >> opcion;

    switch (opcion) {
    case 1: {
        Licuadora l1;
        float capacidad;
        int numdevelocidades, potencia, id;
        string marca, modelo;
        float precio;

        cout << "Ingrese datos de la licuadora:" << endl;
        cout << "ID: "; cin >> id;
        cout << "Precio: "; cin >> precio;
        cout << "Marca: "; cin >> marca;
        cout << "Modelo: "; cin >> modelo;
        cout << "Capacidad: "; cin >> capacidad;
        cout << "Número de velocidades: "; cin >> numdevelocidades;
        cout << "Potencia: "; cin >> potencia;

        l1.setDatosProductos(id, marca, modelo, precio, capacidad, numdevelocidades, potencia);
        l1.info();
        l1.ENCENDIDO();
        break;
    }
    case 2: {
        Microondas m1;
        int vatios, litros, id;
        string marca, modelo;
        float precio;
        double cantidadAlimento;

        cout << "Ingrese datos del microondas:" << endl;
        cout << "ID: "; cin >> id;
        cout << "Precio: "; cin >> precio;
        cout << "Marca: "; cin >> marca;
        cout << "Modelo: "; cin >> modelo;
        cout << "Vatios: "; cin >> vatios;
        cout << "Litros: "; cin >> litros;

        m1.setDatosProduct(id, marca, modelo, precio, vatios, litros);

        cout << "Ingrese cantidad de alimento para calcular tiempo de cocción (en gramos): ";
        cin >> cantidadAlimento;

        m1.info();
        cout << "Tiempo de cocción estimado: " << m1.calcularTiempoCoccion(cantidadAlimento) << " minutos" << endl;
        break;
    }
    case 3:
        cout << "Saliendo del programa..." << endl;
        break;
    default:
        cout << "Opción no válida. Por favor, seleccione una opción del menú (1-3)." << endl;
        break;
    }

    return 0;
}