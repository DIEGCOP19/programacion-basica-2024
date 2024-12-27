#include <iostream>
using namespace std;

class arbol{
protected:
int edad;
float diametro;
public:
arbol(int age, float d):edad(age),diametro(d){
}
virtual void setdatos(int age, float d){
edad=age;
diametro=d;
}

virtual void info(){
cout<<"EDAD DEL ARBOL: "<<edad<<" AÑOS"<<endl;
cout<<"DIAMETRO DEL ARBOL: "<<diametro<<" CENTIMETROS"<<endl;
}
};

class tornillo:public arbol{
private:
string nombre_cientifico;

public:

tornillo(int age, float d,string n):arbol(age,d),nombre_cientifico(n){
}

void setdatos(int age, float d,string n){
arbol::setdatos(age,d);
nombre_cientifico=n;
}

void info()override{
arbol::info();
cout<<"NOMBRE CIENTIFICO: "<<nombre_cientifico<<endl;    
}
};


int main()
{
    arbol a1(30,50.2);
    tornillo t1(20,30.7,"Cedrelinga cateniformis");
    cout<<"info de clase arbol"<<endl;
    a1.info();
    cout<<"info del arbol tornillo"<<endl;
    t1.info();
    return 0;
}