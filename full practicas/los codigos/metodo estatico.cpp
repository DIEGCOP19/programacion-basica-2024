#include <iostream>
using namespace std;

class Utilidades {
public:
    static int Suma(int x,int y) {
        return x+y;
    }
};

int main() {
    cout << "La suma es: " << Utilidades::Suma(4,9)<<endl;
    return 0;
}
