#include<iostream>
using namespace std;

class libro{
private:
string titulo;
string editorial;
string genero;

public:

libro(){

}
 
void setdato(string titu, string edit, string gen){
titulo=titu;
editorial=edit;
genero=gen;
} 

void getdato(){
cout<<"TITULO: "<<titulo<<endl;
cout<<"EDITORIAL: "<<editorial<<endl;
cout<<"GENERO: "<<genero<<endl;
}

void ingresadatos(){
cout<<"ingresa el titulo: "<<endl;cin>>titulo;
cout<<"ingresa la Editorial: "<<endl;cin>>editorial;
cout<<"ingresa el genero: "<<endl;cin>>genero;
}

};

int main(){

libro l1;
cout<<"ingrese todo los datos"<<endl;
l1.ingresadatos();
cout<<"mostrando informacion de la pelicula: "<<endl;
l1.getdato();

return 0;    
}