#include "Validador.h"
#include <string>
#include <iostream>
#include <sstream>

float Validador::ingresarFlotante() {
    std::string entrada;
    float valor;
    bool esValido = false;

    while (!esValido) {
        std::cout << "Ingrese un número flotante: ";
        std::getline(std::cin, entrada);

        // Intenta convertir la entrada a un número flotante
        std::stringstream ss(entrada);
        if (ss >> valor) {
            // Verifica si toda la entrada fue utilizada
            if (ss.eof()) {
                esValido = true;
            }
        }

        if (!esValido) {
            std::cout << "Entrada inválida. Inténtelo nuevamente." << std::endl;
        }
    }

    return valor;

}
