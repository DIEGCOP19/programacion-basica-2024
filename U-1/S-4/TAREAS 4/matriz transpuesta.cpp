#include<iostream>
using namespace std;
int main(){
int i,j,f,c;
   cout << "Ingrese el número de filas: ";
    cin >> f;
    cout << "Ingrese el número de columnas: ";
    cin >> c;
int mtrix[f][c];
for(i=0;i<f;i++){
  for(j=0;j<c;j++){
cout<<"ingrese los valores de la matriz["<<i<<"] ["<<j<<"]: ";
cin>>mtrix[i][j];
  }
}
cout<<"la matriz es: \n";
for(i=0;i<f;i++){
  for(j=0;j<c;j++){
cout<<mtrix[i][j]<<" ";
  } 
  cout<<"\n";  
}
cout<<"la matriz transpuesta es: \n";
for(i=0;i<c;i++){
  for(j=0;j<f;j++){
cout<<mtrix[j][i]<<" ";
  } 
  cout<<"\n";  
}
return 0;
}