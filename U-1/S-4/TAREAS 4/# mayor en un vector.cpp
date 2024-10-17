#include <iostream>
#include <vector>
using namespace std;
int main(){
int n,i=0,nMAYOR;
cout<<"ingrese la cantidad q quiere q almacene el vector"<<endl;
cin>>n;
vector <int> numeros(n);
cout<<"ingrese "<< n <<" numeros en el vector "<<endl;
for(i=0;i<numeros.size();i++){
cin>>numeros[i];
}
cout<<"los num ingresados son"<<endl;
for(i=0;i<numeros.size();i++){
cout<<numeros[i]<<" ";
}
cout<<endl;
nMAYOR=numeros[0];

for(i=1;i<numeros.size();i++){
if (nMAYOR<numeros[i])
{
 nMAYOR = numeros[i];
}
}
cout<<"el num mayor del vector es: "<<nMAYOR<<endl;
return 0;    
}