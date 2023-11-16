#include <iostream>

namespace Matematicas {
    int suma(int a, int b)
    {
        return a + b;
    }
    int resta(int a, int b)
    {
        return a - b;
    }
    int multiplicacion(int a, int b) {
        return a * b;
    }
    float division(float a, float b)
    {
        if (b != 0) {
            return a / b;
        } else
        {
            std::cerr << "Error: División por cero." << std::endl;
            return 0;
        }
    }
}

int main()
{
    int a, b;
    std::cout << "Ingrese el primer número: ";
    std::cin >> a;
    std::cout << "Ingrese el segundo número: ";
    std::cin >> b;

    std::cout << "La suma es: " << Matematicas::suma(a, b) << std::endl;
    std::cout << "La resta es: " << Matematicas::resta(a, b) << std::endl;

    return 0;
}