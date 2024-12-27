#include<iostream>
using namespace std;

class computadora{
private:
string procesador;
string marca;
string modelo;

public:

computadora(){

}
 
void setdato(string procesa, string mar, string model){
procesador=procesa;
marca=mar;
modelo=model;
} 

void getdato(){
cout<<"Procesador: "<<procesador<<endl;
cout<<"Marca: "<<marca<<endl;
cout<<"Modelo: "<<modelo<<endl;
}

void ingresadatos(){
cout<<"ingresa el procesador : "<<endl;cin>>procesador;
cout<<"ingresa la marca: "<<endl;cin>>marca;
cout<<"ingresa el modelo: "<<endl;cin>>modelo;
}

};

int main(){

computadora p1;
cout<<"ingrese todo los datos"<<endl;
p1.ingresadatos();
cout<<"mostrando informacion del celular: "<<endl;
p1.getdato();

return 0;    
}