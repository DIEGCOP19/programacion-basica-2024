#include <iostream>
using namespace std;

class medicamento {
private:
    string nombre;
    float precio;

public:
 
    medicamento() {
       
    }


    void setdato(string name, float price) {
        nombre = name;
        precio = price;
    }

    void getdato() {
        cout << "Nombre: " << nombre << endl;
        cout << "Precio: " << precio << endl;
    }

    void ingresadatos() {
        cout << "Ingresa el nombre del medicamento: ";
        cin.ignore(); 
        getline(cin, nombre);
        cout << "Ingresa el precio: ";
        cin >> precio;
    }
};

int main() {
    medicamento med1;
    cout << "Ingrese todos los datos del medicamento" << endl;
    med1.ingresadatos();
    cout << "Mostrando informacion del medicamento: " << endl;
    med1.getdato();
    return 0;
}
