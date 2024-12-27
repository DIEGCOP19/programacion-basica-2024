#include <iostream>

using namespace std;

class Figura {
private:
    string color;
    double area;

public:
    Figura(string c, double a) : color(c), area(a) {}

    void setFigura(string c, double a) {
        color = c;
        area = a;
    }

    string getColor() {
        return color;
    }

    double getArea() {
        return area;
    }
};

class Circulo : public Figura {
private:
    double radio;

public:
    Circulo(string c, double a, double r) : Figura(c, a), radio(r) {}

    void setRadio(double r) {
        radio = r;
    }

    double getRadio() {
        return radio;
    }
};

class Rectangulo : public Figura {
private:
    double largo;
    double ancho;

public:
    Rectangulo(string c, double a, double l, double an) : Figura(c, a), largo(l), ancho(an) {}

    void setRectangulo(double l, double an) {
        largo = l;
        ancho = an;
    }

    double getLargo() {
        return largo;
    }

    double getAncho() {
        return ancho;
    }
};

int main() {
    Circulo circulo("Rojo", 0.0, 5.0);
    Rectangulo rectangulo("Azul", 0.0, 4.0, 6.0);

    cout << "Circulo - Color: " << circulo.getColor() << ", Radio: " << circulo.getRadio() << endl;
    cout << "Rectangulo - Color: " << rectangulo.getColor() << ", Largo: " << rectangulo.getLargo()<< ", Ancho: " << rectangulo.getAncho() << endl;

    return 0;
}
