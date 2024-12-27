#include <iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
int main()
{
    int i,j;
    int x[4][4];
    cout<<"mostrando los valores de una matriz 4x4 con elementos aleatorios: "<<endl;
    srand(time(0));
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
         x[i][j]=rand()%16+1;
          cout<<"el valor de ["<<i+1<<"] ["<<j+1<<"] : "<<x[i][j]<<endl;
        }
    }
    cout<<"mostrando la matriz 4x4 con elementos aleatorios: "<<endl;
    srand(time(0));
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
          x[i][j]=rand()%16+1;
          cout<<x[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"hallando el mayor y menor elemento de la matriz ....."<<endl;
   int mayor=x[0][0],menor=x[0][0];
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
         if(x[i][j]<menor) menor=x[i][j]; 
         if(x[i][j]>mayor) mayor=x[i][j]; 
        }
    }
    cout<<"el mayor elemento de la matriz es: "<<mayor<<endl;
    cout<<"el menor elemento de la matriz es: "<<menor<<endl;
    return 0;
}