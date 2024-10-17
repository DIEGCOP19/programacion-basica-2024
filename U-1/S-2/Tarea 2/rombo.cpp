#include <stdio.h>
#include <cmath>
using namespace std;
int main(){
float a,l,p,d,D;
    printf("ingrese la diagonal mayor del rombo: ");
    scanf ("%f",&D);
    printf("ingrese la diagonal menor del rombo: ");
    scanf("%f" ,&d);
     a = (D*d)/2;
     l =sqrt(pow((D/2),2)+pow((d/2),2));
     p = 4*l;
    printf("El area del rombo es %.2f\n", a);
     printf("El lado del rombo es %.2f\n",l);
    printf("El perimetro del rombo es %.2f\n", p);
    return 0;
}