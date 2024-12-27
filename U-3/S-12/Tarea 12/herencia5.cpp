#include <iostream>
using namespace std;

class spotify{
protected:
string autor;
string lanzamiento;
public:

spotify(string a, string l):autor(a),lanzamiento(l){
}

void setdatos(string a, string l){
autor=a;
lanzamiento=l;
}

virtual void info(){
    cout<<"AUTOR: "<<autor<<endl;
   cout<<"LANZAMIENTO: "<<lanzamiento<<endl;
}

};


class cancion:public spotify{
private:
string nombre;
string estribillo;
public:

cancion(string a, string l, string n, string e):spotify(a,l),nombre(n),estribillo(e){
}

void setdatos(string a, string l, string n, string e){
spotify::setdatos(a,l);
nombre=n;
estribillo=e;
}

void info()override{
spotify::info();
cout<<"TITULO: "<<nombre<<endl;
cout<<"ESTRIBILLO: "<<estribillo<<endl;
}

};


int main()
{
    spotify s1(	"Daniel Ek ,Martin Lorentzon","7 de octubre de 2008");
    cancion c1("Pedro_Suarez_vertiz","	8 de noviembre de 1993","Cuentame","Cuentame Cuentame sobre tu vida Y tratare De quererte todavia (Oh, oh, oh)");
    cout<<"info de spotify"<<endl;
    s1.info();
    cout<<"info de la cancion"<<endl;
    c1.info();
    return 0;
}