#include <iostream>
using namespace std;
bool vocales(char x){
char vocal[10]={'a','e','i','o','u','A','E','I','O','U'};
for(char v : vocal){  
if(x==v){
    return true;
}
}
return false;
}
int main(){
string texto;
int contador=0;
cout<<"ingrese texto "<<endl;
getline(cin,texto);
for(char c: texto){
if (vocales(c)){
contador ++;
}
}
cout<<"la cantidad de vocales en la palabra "<< texto <<" es "<<contador<<endl;
return 0;    
}