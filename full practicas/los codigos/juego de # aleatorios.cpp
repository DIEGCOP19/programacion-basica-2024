#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
int main(){
    int nAleatorio,intentos=0,n;
    srand(time(0));
    nAleatorio=rand()%100+1;
    bool bandera = false;
    cout<<"\n el num Aleatorio es -> "<< nAleatorio<<endl;
while(intentos<12){
    intentos++;
    cout<<"\n ingrese un numero -> ";cin>>n;
    if(n==nAleatorio)
    { bandera=true;
     break; }
 else if(n<nAleatorio)
     cout<<"\n es menor al numero Aleatorio ";
     else
     cout<<"\n es mayor al numero Aleatorio ";
     
}
if(1<=intentos && intentos <=3 ){
    cout<<"! Suertudo ¡\n";
}
else if(4<=intentos && intentos<=6){
    cout<<"! Genio :O ¡\n";
}
else if(7<=intentos && intentos<=9){
    cout<<"! No esta mal ;) ¡\n";
}
else if(9<intentos && intentos<=12){
    cout<<"! Se puede mejorar ¡\n";
}
if(bandera==true){
    cout<<" WAO GANASTE :D ";
}
else {
    cout<<"perdiste :( ";
}
    return 0;
}
