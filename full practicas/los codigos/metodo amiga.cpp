/*Queremos tener una clase llamada Circulo con un miembro privado radio, 
y un método amigo que calcule el área del círculo.
El método amigo no será parte de la clase Círculo, pero podrá acceder al miembro privado radio para hacer el cálculo.*/
#include <iostream>
using namespace std;

class Circulo {
    
private:    
float radio;    
public:

Circulo(float rad):radio(rad){
}

friend float area(Circulo c);
    
};

float area(Circulo c){
    return 3.1416*(c.radio*c.radio);
}




int main(){
Circulo c1(5);    
cout<<"el area del Circulo es: "<<area(c1)<<endl;
    
    
    
return 0;    
}