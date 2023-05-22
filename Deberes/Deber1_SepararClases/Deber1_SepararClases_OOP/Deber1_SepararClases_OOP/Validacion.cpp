#include "Validacion.h"
#include <iostream>
#include <string>

float Validacion::validarFloat(){
    std::string input;
    char tecla;

    while (true) {
        tecla = std::cin.get(); // Lee un caracter de la entrada

        if (tecla == '\n') { // Si se presiona Enter
            if (!input.empty()) { // Verifica si se ha ingresado algún dato
                std::cout << std::endl;
                break;
            }
            else {
                std::cout << "Debe ingresar un número float." << std::endl;
            }
        }
        else if (isdigit(tecla) || tecla == '.' || tecla == '-') { // Si el caracter es un dígito, punto decimal o signo menos
            input += tecla;
            std::cout << tecla;
        }
        else {
            std::cout << "\b \b"; // Borra el caracter no válido de la consola
        }
    }

    return std::stof(input); // Convierte la cadena a un número float y lo retorna
}