#include <iostream>
using namespace std;
int sumadelarray(int array[], int n){
int i, suma=0;    
for(i=0;i<n;i++){
suma=suma+array[i];
}
return suma;
}
int main(){
int t,i;
cout<<"ingrese el tamaño del array: ";cin>>t;
int array[t];
cout<<"ingrese los valores del array: ";
for(i=0;i<t;i++){
    cin>>array[i];
}
cout<<"la suma de los elementos del array son: "<<sumadelarray(array,t)<< endl;
return 0;   
}