#include<iostream>
using namespace std;

class Pelicula{
private:
string titulo;
string duracion;
string genero;

public:

Pelicula(){

}
 
void setdato(string titu, string dura, string gen){
titulo=titu;
duracion=dura;
genero=gen;
} 

void getdato(){
cout<<"TITULO: "<<titulo<<endl;
cout<<"DURACION: "<<duracion<<endl;
cout<<"GENERO: "<<genero<<endl;
}

void ingresadatos(){
cout<<"ingresa el titulo: "<<endl;cin>>titulo;
cout<<"ingresa la duracion de la pelicula: "<<endl;cin>>duracion;
cout<<"ingresa el genero: "<<endl;cin>>genero;
}

};

int main(){

Pelicula p1;
cout<<"ingrese todo los datos"<<endl;
p1.ingresadatos();
cout<<"mostrando informacion de la pelicula: "<<endl;
p1.getdato();

return 0;    
}