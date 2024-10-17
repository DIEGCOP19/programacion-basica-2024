#include <stdio.h>
#include <cmath>
using namespace std;
int main(){
float a,p,d,b,h;
    printf("ingrese la base del rectangulo: ");
    scanf ("%f",&b);
    printf("ingrese la altura del rectangulo: ");
    scanf("%f" ,&h);
     a = b*h;
     p = 2*(b+h);
     d =sqrt(pow(b,2)+pow(h,2));
    printf("El area del rectangulo es %.2f\n", a);
    printf("El perimetro del rectangulo es %.2f\n", p);
    printf("La diagonal del rectangulo es %.2f\n",d);
    return 0;
}