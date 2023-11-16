#include <iostream>
#include <fstream>

namespace Ciencia {
    namespace Fisica {
        const double c = 299792458;

        double energia(double masa) {
            return masa * c * c;
        }

        double calcularMomentoLineal(double masa, double velocidad) {
            return masa * velocidad;
        }
        double calcularFuerza(double masa, double aceleracion) {
            return masa * aceleracion;
        }
    }
}

int main() {
    std::ofstream outputFile("output.txt"); // Abre un archivo de salida llamado "output.txt"

    double masa;
    std::cout << "Ingrese la masa del objeto en kg: ";
    std::cin >> masa;

    outputFile << "La energía de un objeto de " << masa << "kg es: " << Ciencia::Fisica::energia(masa) << std::endl;

    double velocidad;
    std::cout << "Ingrese la velocidad del objeto en m/s: ";
    std::cin >> velocidad;

    double momento_lineal = Ciencia::Fisica::calcularMomentoLineal(masa, velocidad);
    outputFile << "El momento lineal de un objeto de " << masa << "kg y " << velocidad << "m/s es: " << momento_lineal << std::endl;

    double aceleracion;
    std::cout << "Ingrese la aceleración del objeto en m/s^2: ";
    std::cin >> aceleracion;

    outputFile << "La fuerza de un objeto de " << masa << "kg y " << aceleracion << "m/s^2 es: " << Ciencia::Fisica::calcularFuerza(masa, aceleracion) << std::endl;

    outputFile.close(); // Cierra el archivo de salida

    return 0;
}