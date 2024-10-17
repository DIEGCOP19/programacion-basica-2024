#include <iostream>
#include <vector>
using namespace std;
int main(){
int i=0;
vector <int> elementos (5);
cout<<"ingrese 5 #"<<endl;
for(i;i<elementos.size();i++){
cin>>elementos[i];
}
i=0;
cout<<"los valores ingresados son: "<<endl;
while(i<elementos.size()){
cout<<elementos[i]<<"  ";
i++;
}
return 0;
}