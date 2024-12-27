#include <stdio.h>

int main() {
    int n, i;
    int nMayor, nMin;

    printf("Ingrese el número 1: ");
    scanf("%d", &n);
    nMayor = n;
    nMin = n;

    for (i = 2; i <= 10; i++) {
        printf("Ingrese el número %d: ", i);
        scanf("%d", &n);

        if (n > nMayor) nMayor = n;
        if (n < nMin) nMin = n;
    }

    printf("El número mayor es: %d\n", nMayor);
    printf("El número menor es: %d\n", nMin);

    return 0;
}