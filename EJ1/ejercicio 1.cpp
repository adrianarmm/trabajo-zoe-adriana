#include <iostream>

using namespace std;

namespace matematicas {
    int suma(int a, int b) {
        return a + b;
    }
    int resta(int a, int b) {
        return a - b;
    }
    int multiplicacion(int a, int b) {
        return a * b;
    }
    int division(int a, int b) {
        return a / b;
    }
    int logaritmo(int a, int b) {
        return a % b;
    }
}

int main() {
    cout << "Suma: " << matematicas::suma(10, 5) << endl;
    cout << "Resta: " << matematicas::resta(7, 2) << endl;
    cout << "Multiplicacion: " << matematicas::multiplicacion(9, 4) << endl;

    // denominador no sea cero antes de realizar la división
    int divisor = 3;
    if (divisor != 0) {
        cout << "Division: " << matematicas::division(1, divisor) << endl;
    } else {
        cout << "No se puede realizar la división. El denominador es cero." << endl;
    }

    // el segundo número en el logaritmo sea mayor que cero
    int base = 6;
    int exponente = 17;
    if (exponente > 0) {
        cout << "Logaritmo: " << matematicas::logaritmo(base, exponente) << endl;
    } else {
        cout << "No se puede calcular el logaritmo. El exponente debe ser mayor que cero." << endl;
    }

    return 0;
}
