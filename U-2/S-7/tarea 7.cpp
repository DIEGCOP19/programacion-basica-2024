#include <iostream>
#include <cmath>
using namespace std;

float areacuadrado(float lado){
return pow(lado,2);
}

int main(){
    float l;
    cout<<"ingrese lado: ";cin>>l;

 cout<<"el area es: "<<areacuadrado(l)<<endl;

return 0;   
}