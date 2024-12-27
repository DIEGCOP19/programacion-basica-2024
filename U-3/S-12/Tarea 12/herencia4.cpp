#include <iostream>
using namespace std;

class Peru{
protected:
string moneda;
string superficie;
string region;

public:

Peru(string m, string s, string r):moneda(m),superficie(s),region(r){

}

void setdatos(string m, string s, string r){
moneda=m;
superficie=s;
region=r;
}

virtual void info(){
cout<<"MONEDA: "<<moneda<<endl;
cout<<"SUPERFICIE: "<<superficie<<endl;
cout<<"REGION: "<<region<<endl;
}

};


class tingo_maria:public Peru{
private:
string habitantes;
public:

tingo_maria(string m, string s, string r,string h):Peru(m,s,r),habitantes(h){
}

void setdatos(string m, string s, string r, string h){
Peru::setdatos(m,s,r);
habitantes=h;
}

void info()override{
Peru::info();
cout<<"HABITANTES: "<<habitantes<<endl;
}

};

int main()
{
     Peru p1("nuevo sol","1.285 millones km2","costa selva sierra");
     tingo_maria t1("nuevo sol","4,395.46 km2","selva","72,225 habitantes");

    cout<<"info de peru"<<endl;
    p1.info();
    cout<<"info de tingo maria"<<endl;
    t1.info();
    return 0;
}