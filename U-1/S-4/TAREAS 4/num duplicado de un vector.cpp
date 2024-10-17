#include <iostream>
using namespace std;

int main() {
    int numeros[] = {1, 2, 3, 2, 4, 3, 5, 1, 6};
    int sinDuplicados[9];
    int contador = 0;

    for (int i = 0; i < 9; i++) {
        bool esDuplicado = false;

        for (int j = 0; j < i; j++) {
            if (numeros[i] == numeros[j]) {
                esDuplicado = true;
                break;
            }
        }

        int ocurrencias = 0;
        for (int k = 0; k < 9; k++) {
            if (numeros[i] == numeros[k]) {
                ocurrencias++;
            }
        }

        if (!esDuplicado && ocurrencias == 1) {
            sinDuplicados[contador] = numeros[i];
            contador++;
        }
    }

    cout << "nums sin duplicados: ";
    for (int i = 0; i < contador; i++) {
        cout << sinDuplicados[i] << " ";
    }
    cout << endl;

    return 0;
}

