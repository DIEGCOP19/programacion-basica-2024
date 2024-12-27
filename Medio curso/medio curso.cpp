#include<iostream>
using namespace std;

struct cochera{
protected:
int id;
string servicio;
int precio;

public:

void setdatos(int di, string service, int price){
     id=di;
     servicio=service;
     precio=price;
}

void mostrar(cochera array[],int tamanio){
int i;
for (i=0;i<tamanio;i++){
cout<<"ID:"<<array[i].id<<" Servicio:"<<array[i].servicio<<" Precio:"<<array[i].precio<<endl;
}
}

void ingresodatos(cochera array[],int tama){
int i;
cout<<"ingrese los datos (id,servicio,precio)"<<endl;
for (i=0;i<tama;i++){
cin>>array[i].id>>array[i].servicio>>array[i].precio;
}
}

int Sumarterceratributo(cochera array[],int tamano){
int i,suma=0;

cout<<"sumando todos los precios de la lista .....:"<<endl;
for(i=0;i<tamano;i++){
suma=suma+array[i].precio;
}
return suma;
}

void modificar(cochera array[],int t , int id, int nuevoid, string nuevoservicio, int nuevoprecio){
int i;
 for (i=0;i<t;i++) {
        if (array[i].id == id) {
            array[i].id = nuevoid;
            array[i].servicio = nuevoservicio;
            array[i].precio = nuevoprecio;
            break;
        }
    }
}

void eliminarelemento(cochera array[],int ta, int id){
    int i;
    for (i = 0; i < ta; ++i) {
        if (array[i].id == id) {
            array[i].id = 0;
            array[i].servicio = "";
            array[i].precio = 0;
            break;
        }
    }
}
};



int main(){
    int opcion,x;
    cout<<"ingrese tamaño de la lista: ";cin>>x;
    cochera array[x];
    cochera c1;
    cout<<"ingrese una opcion"<<endl;
    do{
    cout<<"*****************************"<<endl;
    cout<<"           menu              "<<endl;
    cout<<"(1) Mostrar informacion      "<<endl;
    cout<<"(2) Ingresar datos           "<<endl;
    cout<<"(3) Sumar todo los precios   "<<endl;
    cout<<"(4) Modificar una informacion"<<endl;
    cout<<"(5) Eliminar una informacion "<<endl;
    cout<<"(6) Salir                    "<<endl;
    cout<<"*****************************"<<endl;
     cin>>opcion;
  
        switch (opcion) {
            case 1:
                c1.mostrar(array, x);
                break;
            case 2:
                c1.ingresodatos(array, x);
                break;
            case 3:
                cout << "La suma de todos los precios es: " << c1.Sumarterceratributo(array, x) << endl;
                break;
            case 4: {
                int id, nuevoId, nuevoPrecio;
                string nuevoServicio;
                cout << "Ingrese el codigo del elemento a modificar: ";
                cin >> id;
                cout << "Ingrese el nuevo codigo, nuevo servicio y nuevo precio: ";
                cin >> nuevoId >> nuevoServicio >> nuevoPrecio;
                c1.modificar(array, x, id, nuevoId, nuevoServicio, nuevoPrecio);
                break;
            }
            case 5: {
                int id;
                cout << "Ingrese el codigo del elemento a eliminar: ";
                cin >> id;
                c1.eliminarelemento(array, x, id);
                break;
            }
            case 6:
                cout << "Saliendo..." << endl;
                break;
            default:
                cout << "Opcion no valida!" << endl;
                break;
        }
    }while(opcion!=6);
    return 0;
}