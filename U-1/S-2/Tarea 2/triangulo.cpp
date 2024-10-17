#include <stdio.h>
#include <cmath>
using namespace std;
int main(){
float a,p,h,b,l1,l2;
    printf("ingrese el lado 1 del triangulo: ");
    scanf ("%f",&l1);
    printf("ingrese el lado 2 del triangulo: ");
    scanf("%f" ,&l2);
    printf("ingrese la base del triangulo: ");
    scanf("%f" ,&b);
    printf("ingrese la altura del triangulo: ");
    scanf("%f" ,&h);
     a =b*h/2;
     p =l1+l2+b;
    printf("El area del triangulo es %.2f\n", a);
    printf("El perimetro del triangulo es %.2f\n", p);
    return 0;
}