#include<iostream>
using namespace std;

class bicicleta{
private:
string marca;
string modelo;
float precio;

public:

bicicleta(){

}
 
void setdato(string marc, string model, float price){
marca=marc;
modelo=model;
precio=price;
} 

void getdato(){
cout<<"MARCA: "<<marca<<endl;
cout<<"MODELO: "<<modelo<<endl;
cout<<"PRECIO: "<<precio<<endl;
}

void ingresadatos(){
cout<<"ingresa la marca: "<<endl;cin>>marca;
cout<<"ingresa el modelo: "<<endl;cin>>modelo;
cout<<"ingresa el precio: "<<endl;cin>>precio;
}

};

int main(){

bicicleta l1;
cout<<"ingrese todo los datos"<<endl;
l1.ingresadatos();
cout<<"mostrando informacion de la bicicleta: "<<endl;
l1.getdato();

return 0;    
}