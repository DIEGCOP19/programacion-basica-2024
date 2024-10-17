#include <iostream>
#include <string>
using namespace std;

int main() {
    string palabra;
    bool esPalindromo = true;

    cout << "Ingrese palabra: ";
    
    getline(cin,palabra);

    int longitud = palabra.size();

    for (int i = 0; i < longitud / 2; i++) {
        if (palabra[i] != palabra[longitud - 1 - i]) {
            esPalindromo = false;
            break;
        }
    }

    if (esPalindromo) {
        cout << "La palabra es palindroma" << endl;
    } else {
        cout << "La palabra no es palindroma" << endl;
    }

    return 0;
}