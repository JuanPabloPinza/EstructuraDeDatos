#include "Validador.h"
#include <string>
#include <iostream>
#include <sstream>

float Validador::ingresarFlotante() {
    std::string entrada;
    float valor;
    bool esValido = false;

    while (!esValido) {
        std::cout << "Ingrese un n�mero flotante: ";
        std::getline(std::cin, entrada);

        // Intenta convertir la entrada a un n�mero flotante
        std::stringstream ss(entrada);
        if (ss >> valor) {
            // Verifica si toda la entrada fue utilizada
            if (ss.eof()) {
                esValido = true;
            }
        }

        if (!esValido) {
            std::cout << "Entrada inv�lida. Int�ntelo nuevamente." << std::endl;
        }
    }

    return valor;

}
