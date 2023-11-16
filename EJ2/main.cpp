#include <iostream>
#include "geometria.h"

using namespace std;
using namespace Geometria;

int main() {
    double baseTriangulo = 5.0;
    double alturaTriangulo = 8.0;

    double radioCirculo = 3.0;

    double lado1Rectangulo = 4.0;
    double lado2Rectangulo = 6.0;

    cout << "Área del triángulo: " << calcularAreaTriangulo(baseTriangulo, alturaTriangulo) << endl;
    cout << "Área del círculo: " << calcularAreaCirculo(radioCirculo) << endl;
    cout << "Área del rectángulo: " << calcularAreaRectangulo(lado1Rectangulo, lado2Rectangulo) << endl;

    return 0;
}
