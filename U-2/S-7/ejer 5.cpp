#include <iostream>
using namespace std;
int sumadelamatriz(int matriz[][10], int filas , int columnas){
int i,j, suma=0;    
for(i=0;i<filas;i++){
for(j=0;j<columnas;j++){
suma=suma+matriz[i][j];
}
}
return suma;
}
int main(){
int f,c,j,i;
cout<<"ingrese el tamaño de las filas del la matriz: ";cin>>f;
cout<<"ingrese el tamaño de las columnas del la matriz: ";cin>>c;
int matriz[f][10];
cout<<"ingrese los valores de la matriz: ";
for(i=0;i<f;i++){
for(j=0;j<c;j++){
cin>>matriz[i][j];
}
}
cout<<"la suma de los elementos de la matriz son: "<<sumadelamatriz(matriz,f,c)<< endl;
return 0;   
}