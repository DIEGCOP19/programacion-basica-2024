/*aquí tienes un ejercicio basado en el concepto de clases amigas. En este ejercicio,
crearemos dos clases: Rectangulo y AmigoRectangulo.
La clase Rectangulo tendrá atributos privados para el largo y el ancho
y la clase AmigoRectangulo será una clase amiga que podrá acceder a estos atributos para calcular el área y el perímetro del rectángulo.*/
#include <iostream>
using namespace std;
class Rectangulo{
private:
float largo;
float ancho;
public:
Rectangulo(float l, float a){
largo=l;
ancho=a;
}
friend class AmigoRectangulo;
};
class AmigoRectangulo{
public:    

float calcular_area(Rectangulo rt){
    
    return rt.largo*rt.ancho;
}
};

int main()
{
 Rectangulo r1(20.0,30.0);
 AmigoRectangulo f1;
 cout << "Area del rectangulo: " << f1.calcular_area(r1)<<endl;
    return 0;
}