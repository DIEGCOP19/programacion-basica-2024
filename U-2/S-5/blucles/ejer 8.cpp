#include <iostream>
using namespace std;
int main(){

int n,suma=0;

cout<<"ingrese un num: ";cin>>n;
if(n<0){
    cout<<"convirtiendo el num a positivo";
n=-(n);
} 
while(n>0){
suma=suma+(n%10);
n=n/10;
}
cout<<"la suma de los digitos del num es: "<<suma<<endl;
return 0;    
}