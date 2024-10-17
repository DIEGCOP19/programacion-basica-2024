#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int x,l,r;
    cout<<"menu de opciones "<<endl;
    cout<<"1) area de un cuadrado"<<endl;
    cout<<"2) perimetro de un cuadrado "<<endl;
    cout<<"3) raiz dd un numero "<<endl;
    cin>>x;

    switch(x){
  case 1:
  cout<<" ingrese lado del cuadrado"<<endl;
  cin>>l;
  cout<<"rpta es"<<pow(l,2)<<endl;
  break;
  case 2:
  cout<<"ingrese lado del //"<<endl;
  cin>>l;
  cout<<"perimetro es : "<<4*l;
  break;
  
  case 3:
  cout<<"ingrese el num q quiere la raiz "<<endl;
  cin>>r;
  cout<<"la raiz del # es : "<< sqrt(r)<< endl;
break;

  default:
  cout<<"ingrese una opcion";
  break;

    }

    return 0;
}