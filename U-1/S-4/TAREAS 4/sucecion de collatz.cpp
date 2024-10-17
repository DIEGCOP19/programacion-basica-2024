#include <iostream>
using namespace std;
int main(){
int n;
cout<<"ingrese # \n"; cin >> n;
while(n!=1){

if (n%2==0){
    cout<<"n es par ---> ";
n=(n/2);
cout<<n<<endl;
}
else{
    cout<<"n es impar ---> ";
    n=(n*3)+1;
    cout<<n<<endl;
}
}

cout<<"la secuencia acabo en 1";
    return 0;
}