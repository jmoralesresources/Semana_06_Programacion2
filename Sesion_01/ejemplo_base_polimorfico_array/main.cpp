#include <iostream>
using namespace std;

const int MAX_FIGURAS = 10;

class Figura {
public:
    virtual double area() const = 0;
    virtual void escalar(double factor) = 0;
    virtual ~Figura() = default;
};

class Circulo : public Figura {
    double r;
public:
    Circulo(double radio) : r(radio) {}
    double area() const override { return 3.14159 * r * r; }
    void escalar(double factor) override { r *= factor; }
};

class Rectangulo : public Figura {
    double b, h;
public:
    Rectangulo(double base, double alt) : b(base), h(alt) {}
    double area() const override { return b * h; }
    void escalar(double factor) override { b *= factor; h *= factor; }
};

int main() {
    Figura* figuras[MAX_FIGURAS];
    int numFiguras = 0;
    figuras[numFiguras++] = new Circulo(1.0);
    figuras[numFiguras++] = new Rectangulo(2.0, 3.0);

    for (int i = 0; i < numFiguras; i++)
        cout << "Area: " << figuras[i]->area() << endl;

    for (int i = 0; i < numFiguras; i++)
        figuras[i]->escalar(2.0);

    for (int i = 0; i < numFiguras; i++)
        cout << "Area escalada: " << figuras[i]->area() << endl;

    for (int i = 0; i < numFiguras; i++)
        delete figuras[i];
    return 0;
}
