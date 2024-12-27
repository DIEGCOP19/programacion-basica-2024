#include <iostream>
using namespace std;
int main()
{
    int a;
    
  cout<<"ingrese un num de 3 cifraz: ";cin>>a;
  if(a<100 or a>999){
      cout<<"INGRESE UN NUM DE 3 CIFRAZ";
      return 0;
  }
  int c=0,d=0,u=0,suma=0;
c=a/100;
d=(a/10)%10;
u=a%10;
suma=c+d+u;
cout<<"la suma de los digitos es: "<<suma<<endl;

if(c==d and d==u){
    cout<<"los tres digitos del num son iguales";
}
else if(c==d or d==u or c==u ){
    cout<<"dos digitos son iguales";
}
else{
    cout<<"los digitos son diferentes";
}
    return 0;
}