#include<iostream>
using namespace std;

struct persona{
private:
 string nombre;
 unsigned int edad;
float peso;
public:
void setdato(string n,unsigned int age,float p){
nombre=n;
edad=age;
peso=p;
}
void Info(){
cout<<"<<<<<<<<<<>>>>>>>>>>>>>>>>"<<endl;
cout<<" dato de la persona"<<endl;
cout<<"name :"<<nombre<<endl;
cout<<"age :"<<edad<<endl;
cout<<"peso :"<<peso<<endl;
cout<<"<<<<<<<<<<<<<<<>>>>>>>>>>>>>>"<<endl;
}
};

int main(void){
persona p1;
 string nombre;
 unsigned int edad;
float peso;
cout<<"nombre"<<endl; cin>>nombre;
cout<<"edad"<<endl; cin>>edad;
cout<<"peso"<<endl; cin>>peso;
p1.setdato(nombre,edad,peso);
p1.Info();

return 0;
}