#include <iostream>
using namespace std;
void calcular(int a, int b){
cout<<"la suma es: "<<a+b<<endl;
cout<<"la resta es: "<<a-b<<endl;
cout<<"la multiplicacion es: "<<a*b<<endl;
}
int main(){
int n,x;
cout<<"ingrese 2 num: ";cin>>n>>x;
cout<<"mostrando la suma , resta y multiplicacion"<<endl;
calcular(n,x);
return 0;   
}