#include <iostream>
#include <cmath>
using namespace std;

float pitagoras(float ladoa, float ladob){
return sqrt(pow(ladoa,2) + pow(ladob,2));
}

int main(){
    float A,B;
    cout<<"ingrese lado A: ";cin>>A;
    cout<<"ingrese lado B: ";cin>>B;
 cout<<"la hipotenusa es: "<<pitagoras(A,B)<<endl;

return 0;   
}