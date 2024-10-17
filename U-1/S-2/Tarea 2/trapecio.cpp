#include <stdio.h>
#include <cmath>
using namespace std;
int main(){
float a,h,b,B;
    printf("ingrese la Base mayor del trapecio: ");
    scanf ("%f",&B);
    printf("ingrese la Base menor del trapecio: ");
    scanf("%f" ,&b);
    printf("ingrese la altura del trapecio: ");
    scanf("%f" ,&h);
     a = (B+b)*h/2;
    printf("El area del trapecio es %.2f\n", a);
    return 0;
}