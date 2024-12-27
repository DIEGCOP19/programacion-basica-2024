/*Crea una clase llamada ContadorInstancias que cuente cuántas instancias de la clase han sido creadas. 
El usuario debe poder ver el número total de instancias creadas hasta el momento.*/

#include <iostream>
using namespace std;

class ContadorInstancias{
private:
static int contar;
public:

ContadorInstancias(){
contar++;
}

void contadora(){
    cout<<"el numero de objetos es: "<<contar<<endl;
}

};

int ContadorInstancias::contar=0;

int main()
{
    ContadorInstancias c1;
    c1.contadora();
    
    ContadorInstancias c2;
    c2.contadora();
    
    ContadorInstancias c3;
    c3.contadora();
    return 0;
}