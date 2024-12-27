#include <iostream>
using namespace std;
int main(){

string nombre="Diego"; 
int num=2345;
string *pNombre = &nombre; 
int *pNumber=&num;
cout<<*pNombre<<endl;
cout<<pNumber;
return 0;
}