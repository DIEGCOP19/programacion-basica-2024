#include<iostream>
using namespace std;

class persona{
private:
string dni;
string nombre;
string apellido;

public:

persona(){

}
 
void setdato(string ind,string name, string lastname){
dni=ind;
nombre=name;
apellido=lastname;
} 

void getdato(){
cout<<"DNI: "<<dni<<endl;
cout<<"Nombre: "<<nombre<<endl;
cout<<"Apellido: "<<apellido<<endl;
}

void ingresadatos(){
cout<<"ingresa dni de la persona: "<<endl;cin>>dni;
cout<<"ingresa su nombre: "<<endl;cin>>nombre;
cout<<"ingresa su apellido: "<<endl;cin>>apellido;
}

};

int main(){

persona p1;
cout<<"ingrese todo los datos"<<endl;
p1.ingresadatos();
cout<<"mostrando informacion de la persona: "<<endl;
p1.getdato();

return 0;    
}