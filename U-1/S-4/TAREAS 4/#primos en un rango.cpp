#include <iostream>
using namespace std;



bool esPrimo(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}


int main() {
    int inicio, fin, rango, contador = 0;
    cout << "Introduce el num de inicio: ";
    cin >> inicio;
    cout << "Introduce el num de fin: ";
    cin >> fin;
    rango = fin - inicio + 1;
    int primos[rango];

    for (int num = inicio; num <= fin; num++) {
        if (!esPrimo(num)) {
            continue; 
        }
        primos[contador] = num;
        contador++;
    }

    cout << "numeros primos en el rango [" << inicio << ", " << fin << "]: ";
    for (int i = 0; i < contador; i++) {
        cout << primos[i] << " ";
    }
    cout << endl;

    return 0;
}