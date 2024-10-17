#include <iostream>
using namespace std;

string cifradocesar( string texto , int n ){
string cifrado=" ";
for(char c : texto ){
cifrado=cifrado + char (c + n);
}
return cifrado;
}

int main(){
    string palabras;
    int x;
 cout<<"ingrese el texto "<<endl; cin>>palabras;
 cout<<"ingrese la cantidad de dezplar cada letra "<<endl; cin>>x;
cout<< palabras << " en cifrado cesar es: "<<cifradocesar(palabras,x);
return 0;
}