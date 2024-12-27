#include <iostream>
using namespace std;
void prendido(){
cout<<"el auto esta prendido";
}
void apagado(){
cout<<"el auto esta apagado";
}
int main(){
int n;
cout<<"ingrese una opcion "<<endl;
cout<<"1) prender auto  "<<endl;
cout<<"2) apagar auto "<<endl;
cin>>n;

switch (n){
case 1: 
prendido();
break;

case 2:
apagado();
break;

default:
cout<<"ingrese una de las opciones";
    break;
}

return 0;   
}