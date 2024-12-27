#include <iostream>
using namespace std;

class Videojuegos{
protected:
string año_lanzamiento;
string categoria;

public:

Videojuegos(string age_lanza, string categ):año_lanzamiento(age_lanza),categoria(categ){  
}


virtual void setdatos(string age_lanza, string categ){
año_lanzamiento=age_lanza;
categoria=categ;
}


virtual void info(){
 cout<<"AÑO LANZAMIENTO: "<<año_lanzamiento<<endl;
 cout<<"CATEGORIA: "<<categoria<<endl;  
}

};


class Fornite:public Videojuegos{
private:
string desarrollador;
string distribuidor;

public:

Fornite(string age_lanza, string categ, string developer, string distributor) : Videojuegos(age_lanza, categ) { 
        desarrollador = developer;
        distribuidor = distributor;  
 }


void setdatos(string age_lanza, string categ,string developer, string distributor) {
Videojuegos::setdatos(age_lanza,categ);
desarrollador=developer;
distribuidor=distributor;
}

void info()override{
Videojuegos::info();
 cout<<"DESARROLLADOR: "<<desarrollador<<endl;
 cout<<"DISTRIBUIDOR: "<<distribuidor<<endl;  
}

};


int main()
{
    Videojuegos v1("2002","Demo");
    Fornite f1("2017","Multijugador","Epic Games","Epic Games");

  cout<<"datos de videojuego"<<endl;
  v1.info();
  cout<<"datos del videojuego fornite"<<endl;
  f1.info();

    return 0;
}