#include <iostream>
using namespace std;

const int MAX_FIGURAS = 10;

class Figura {
public:
    virtual double area() const = 0;
    virtual ~Figura() = default;
};

class Circulo : public Figura {
    double r;
public:
    Circulo(double radio) : r(radio) {}
    double area() const override { return 3.14159 * r * r; }
};

class Rectangulo : public Figura {
    double b, h;
public:
    Rectangulo(double x, double y) : b(x), h(y) {}
    double area() const override { return b * h; }
};

double sumaAreas(Figura* figuras[], int numFiguras) {
    double total = 0;
    for (int i = 0; i < numFiguras; i++)
        total += figuras[i]->area();
    return total;
}

int main() {
    Figura* figuras[MAX_FIGURAS];
    int numFiguras = 0;
    figuras[numFiguras++] = new Circulo(1.0);
    figuras[numFiguras++] = new Rectangulo(2.0, 3.0);
    cout << "Suma areas: " << sumaAreas(figuras, numFiguras) << endl;
    for (int i = 0; i < numFiguras; i++)
        delete figuras[i];
    return 0;
}