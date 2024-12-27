/*Vamos a crear una clase Persona que tiene un atributo privado llamado edad, y una clase amiga llamada Sistema, 
que tendrá acceso a ese atributo privado. 
El método amigoMostrarEdad de la clase Sistema podrá acceder al atributo edad de un objeto Persona y mostrarlo.*/
#include <iostream>
using namespace std;

class Persona{
    
private:    
int edad;    
public:

Persona(int e):edad(e){
}

friend class Sistema;
    
};

class Sistema{
public:  

void amigoMostrarEdad(Persona p){
cout<<"la edad de la clase Persona es: "<<p.edad<<endl;
}  
  
    
};

int main(){
Persona p1(19);    
Sistema s1;    
    
s1.amigoMostrarEdad(p1);
    
    
    
return 0;    
}