#include <iostream>
using namespace std;

bool primos(int n){
int i, div=0;
for(i=1;i<=n;i++){
if (n%i==0){
div++;}
}
if(div==2) {
    return true;
}
else{ 
return false;
}

}
int main(){
int a;
cout<<"ingrese un numero: ";cin>>a;
if(primos(a)==true){
cout<<"el num es primo";
}
else cout<<"el num no es primo";
return 0;   
}