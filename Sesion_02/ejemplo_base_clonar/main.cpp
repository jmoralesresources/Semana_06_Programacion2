#include <iostream>
using namespace std;

class Figura {
public:
    virtual double area() const = 0;
    virtual Figura* clonar() const = 0;
    virtual ~Figura() = default;
};

class Circulo : public Figura {
    double r;
public:
    Circulo(double radio) : r(radio) {}
    double area() const override { return 3.14159 * r * r; }
    Figura* clonar() const override { return new Circulo(r); }
};

int main() {
    // Crear un objeto original
    Figura* f1 = new Circulo(5.0);

    // Mostrar su área
    cout << "Area del circulo original: " << f1->area() << endl;

    // Clonar el objeto
    Figura* f2 = f1->clonar();

    // Mostrar el área del clon
    cout << "Area del circulo clonado: " << f2->area() << endl;

    // Liberar memoria
    delete f1;
    delete f2;

    return 0;
}