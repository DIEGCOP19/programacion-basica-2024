#include<iostream>
using namespace std;

class automovil{
private:
float kilometraje;
string marca;
string modelo;

public:

automovil(){

}
 
void setdato(int kilometra, string mar, string model){
kilometraje=kilometra;
marca=mar;
modelo=model;
} 

void getdato(){
cout<<"Kilometraje: "<<kilometraje<<endl;
cout<<"Marca: "<<marca<<endl;
cout<<"Modelo: "<<modelo<<endl;
}

void ingresadatos(){
cout<<"ingresa el kilometraje : "<<endl;cin>>kilometraje;
cout<<"ingresa la marca: "<<endl;cin>>marca;
cout<<"ingresa el modelo: "<<endl;cin>>modelo;
}

};

int main(){

automovil a1;
cout<<"ingrese todo los datos"<<endl;
a1.ingresadatos();
cout<<"mostrando informacion del celular: "<<endl;
a1.getdato();

return 0;    
}