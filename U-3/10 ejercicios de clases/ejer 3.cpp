#include<iostream>
using namespace std;

class celular{
private:
int id;
string marca;
string modelo;

public:

celular(){

}
 
void setdato(int di, string mar, string model){
id=di;
marca=mar;
modelo=model;
} 

void getdato(){
cout<<"ID: "<<id<<endl;
cout<<"Marca: "<<marca<<endl;
cout<<"Modelo: "<<modelo<<endl;
}

void ingresadatos(){
cout<<"ingresa id : "<<endl;cin>>id;
cout<<"ingresa la marca: "<<endl;cin>>marca;
cout<<"ingresa el modelo: "<<endl;cin>>modelo;
}

};

int main(){

celular c1;
cout<<"ingrese todo los datos"<<endl;
c1.ingresadatos();
cout<<"mostrando informacion del celular: "<<endl;
c1.getdato();

return 0;    
}