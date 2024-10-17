#include <stdio.h>
#include <cmath>
using namespace std;
int main(){
float l1,l2,l3,r,a;
    printf("ingrese el lado 1 del triangulo inscrito: ");
    scanf ("%f",&l1);
    printf("ingrese el lado 2 del triangulo inscrito: ");
    scanf("%f" ,&l2);
    printf("ingrese el lado 3 del triangulo inscrito: ");
    scanf("%f" ,&l3);
    printf("ingrese el radio del triangulo inscrito: ");
    scanf("%f" ,&r);
     a =l1*l2*l3/(4*r);
    printf("El area del triangulo inscrito es %.2f\n", a);
    return 0;
}