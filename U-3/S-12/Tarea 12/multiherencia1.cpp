#include <iostream>
using namespace std;
class continente{
protected:
string nombre;
public:

continente(string n):nombre(n){

}

void setdatos(string n){
nombre=n;
}

virtual void info(){
cout<<"UBICACION DEL CONTINENTE: "<<nombre<<endl;
}
};

class pais{
protected:
string name;
string idioma;
string superficie;
public:

pais(string nam,string i, string s):name(nam),idioma(i),superficie(s){
}

void setdatos(string nam, string i, string s){
name=nam;
idioma=i;
superficie=s;
}

virtual void info(){
cout<<"NOMBRE DEL PAIS: "<<name<<endl;
cout<<"IDIOMA: "<<idioma<<endl;
cout<<"SUPERFICIE: "<<superficie<<endl;
}
};

class ciudad:public continente,public pais{
private:
string name_;
int habitantes;
public:

ciudad(string n,string nam,string i, string s,string nm,int h):continente(n),pais(nam,i,s),name_(nm),habitantes(h){

}

void setdatos(string n,string nam,string i, string s,string nm,int h){
continente::setdatos(n);
pais::setdatos(nam,i,s);
name_=nm;
habitantes=h;
}

void info()override{
continente::info();
pais::info();
cout<<"NOMBRE DE LA CIUDAD: "<<name_<<endl;
cout<<"HABITANTES: "<<habitantes<<endl;
}

};

int main()
{
   continente c1("AMERICA DEL SUR");
   pais p1("PERU","ESPAÑOL","1.285 millones km2");
   ciudad ci1("AMERICA DEL SUR","PERU","ESPAÑOL","4,395.46 km2","TINGO MARIA", 72225);
   
   cout<<"info del continente: "<<endl;
   c1.info();
   cout<<"info del pais: "<<endl;
   p1.info();
   cout<<"info de la ciudad: "<<endl;
   ci1.info();
    return 0;
}