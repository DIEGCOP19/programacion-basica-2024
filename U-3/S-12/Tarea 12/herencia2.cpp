#include <iostream>
using namespace std;

class celular{
protected:
string modelo;
string año_fabricacion;

public:

celular(string model, string a):modelo(model),año_fabricacion(a){

}

virtual void setdatos(string model, string a){
modelo=model;
año_fabricacion=a;
}

virtual void info(){
cout<<"MODELO: "<<modelo<<endl;
cout<<"AÑO DE FABRICACION: "<<año_fabricacion<<endl;
}

};

class iphone:public celular{
private:
string sistema_operativo;
float precio;

public: 

iphone(string model, string a, string SO, float price):celular(model,a),sistema_operativo(SO),precio(price){

}

void setdatos(string model, string a,string SO, float price){
celular::setdatos(model,a);
sistema_operativo=SO;
precio=price;
}

void info()override{
celular::info();
cout<<"SISTEMA OPERATIVO: "<<sistema_operativo<<endl;
cout<<"PRECIO: "<<precio<<" SOLES"<<endl;
}

};

int main()
{
  celular c1("samsung galaxy A53","2022");
  iphone  i1("iphone 15 pro max","2023","ios",5199);

cout<<"info de celular "<<endl;
c1.info();
cout<<"info del iphone "<<endl;
i1.info();
    return 0;
}