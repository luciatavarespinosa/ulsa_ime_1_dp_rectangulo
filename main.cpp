#include <iostream>
#include "utilerias.h"

int main() {
    double a = 0;
    double b = 0;
    double area = 0;
    double perimetro = 0;

    std::cout << "Area y perimetro de un rectangulo\n";
    std::cout << "Ingresa la base y la altura: ";
    std::cin >> a >> b;

    while (a <= 0) {
        std::cout << "No se puede, ingresa otro numero\n";
        std::cout << "Ingresa la base: ";
        std::cin >> a;
    }

    while (b <= 0) {
        std::cout << "No se puede, ingresa otro numero\n";
        std::cout << "Ingresa la altura: ";
        std::cin >> b;
    }

    area = a * b;
    perimetro = 2 * (a + b);

    std::cout << "Area: " << area << " unidades cuadradas\n";
    std::cout << "Perimetro: " << perimetro << " unidades\n";

    return 0;
}