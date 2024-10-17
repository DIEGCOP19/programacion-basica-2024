#include <iostream>
using namespace std;
int main(){
int n[10],i,prom,sum=0;
cout<<"ingrese las 10 notas"<<endl;
for(i=0;i<10;i++){
cin>>n[i];
}
cout<<endl;
cout<<"las notas q ingreso son ---> "<<endl;
for(i=0;i<10;i++){
cout<<n[i];
if(i<9){
    cout<<" , ";
}
}
cout<<endl;
for(i=0;i<10;i++){
    sum+=n[i];
}
prom =sum/10;
cout<<"el promedio de notas es: "<<prom<<endl;
cout<<"las notas mayores q el promedio son: "<<endl;
for(i=0;i<10;i++){
    if(n[i]>prom){
cout << n[i] << " , ";
}
}
    return 0;
}
