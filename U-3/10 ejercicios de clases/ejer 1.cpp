#include<iostream>
using namespace std;

class producto{
private:
int id;
float precio;
string nombredeproducto;

public:

producto(int di, float price, string name){
id=di;
precio=price;
nombredeproducto=name;
}
 
void setdato(int di, float price, string name){
id=di;
precio=price;
nombredeproducto=name;
} 

void getdato(){
cout<<"ID: "<<id<<endl;
cout<<"Precio: "<<precio<<endl;
cout<<"Nombre del producto: "<<nombredeproducto<<endl;
}

void ingresadatos(){
cout<<"ingresa id del producto: "<<endl;cin>>id;
cout<<"ingresa el precio: "<<endl;cin>>precio;
cout<<"ingresa nombre de producto: "<<endl;cin>>nombredeproducto;
}

};

int main(){

producto p1(01,20.50,"ventiladora");
cout<<"mostrando datos iniciales: "<<endl;
p1.getdato();
cout<<"ingrese todo los datos"<<endl;
p1.ingresadatos();
cout<<"mostrando informacion del producto: "<<endl;
p1.getdato();

return 0;    
}