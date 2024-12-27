/*Vas a crear una jerarquía de clases para representar diferentes figuras geométricas. La clase base será Figura, 
que será una clase abstracta con un método virtual puro area(). Luego,
crearás clases derivadas Rectangulo y Circulo, cada una con su propia implementación del método area().
Finalmente, en la función main, crearás instancias de estas clases y llamarás al método area() para mostrar el área de cada figura.*/


#include <iostream>
using namespace std;

class Figura{
public:
    virtual void area()=0;
};


class Rectangulo:public Figura{
public:    

    void area(){
    cout<<"mostrando area del Rectangulo"<<endl;    
    }
    
};

class Circulo:public Figura{
public:    

void area(){
cout<<"mostrando area del circulo"<<endl;
}    
    
};

int main()
{
 Rectangulo r1;
 Circulo c1;
 r1.area();
 c1.area();
    return 0;
}