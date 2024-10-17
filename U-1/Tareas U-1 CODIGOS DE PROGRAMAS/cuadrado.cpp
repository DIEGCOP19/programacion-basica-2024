#include <stdio.h>
#include <cmath>
using namespace std;
int main(){
float a,p,d,l;
    printf("ingrese el lado del cuadrado: ");
    scanf ("%f",&l);
     a = pow(l, 2);
     p = 4*l;
     d =l*sqrt(2);
    printf("El área del cuadrado es %.2f\n", a);
    printf("El perimetro del cuadrado es %.2f\n", p);
    printf("La diagonal del cuadrado es %.4f\n",d);
    return 0;
}