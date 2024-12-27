#include <iostream>
using namespace std;
int main(){
    int cantd;
cout<<"ingrese la cantidad de numeros q escribira: ";cin>>cantd;

int num[cantd];
cout<<"ingrese "<<cantd<<" nums "<<endl;
int i=0;
do{
cin>>num[i];
i++;
}while(i<cantd);
int posi=0,nega=0,ceros=0;
i=0;
do{
if(num[i]>0) posi ++;
else if(num[i]<0) nega ++;
else ceros ++;
i++;
}while (i<cantd);
cout<<"los positivos son: "<<posi<<" ,los negativos son: "<<nega<<" ,los ceros son: "<<ceros;
return 0;
}