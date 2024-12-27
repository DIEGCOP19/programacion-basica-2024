#include<iostream>
using namespace std;

class comida{
private:
string nombre;
float precio;

public:

comida(){

}
 
void setdato(string name, float price){
nombre=name;
precio=price;
} 

void getdato(){
cout<<"Platillo"<<nombre<<endl;
cout<<"precio: "<<precio<<endl;
}

void ingresadatos(){
cout<<"ingresa el nombre del platillo: "<<endl;cin>>nombre;
cout<<"ingresa el precio: "<<endl;cin>>precio;
}

};

int main(){

comida l1;
cout<<"ingrese todo los datos"<<endl;
l1.ingresadatos();
cout<<"mostrando informacion de la pelicula: "<<endl;
l1.getdato();

return 0;    
}