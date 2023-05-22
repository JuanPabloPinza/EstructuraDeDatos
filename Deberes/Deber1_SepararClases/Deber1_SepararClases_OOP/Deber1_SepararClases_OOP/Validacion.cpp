#include "Validacion.h"
#include <iostream>
#include <string>

float Validacion::validarFloat(){
    std::string input;
    char tecla;

    while (true) {
        tecla = std::cin.get(); // Lee un caracter de la entrada

        if (tecla == '\n') { // Si se presiona Enter
            if (!input.empty()) { // Verifica si se ha ingresado alg�n dato
                std::cout << std::endl;
                break;
            }
            else {
                std::cout << "Debe ingresar un n�mero float." << std::endl;
            }
        }
        else if (isdigit(tecla) || tecla == '.' || tecla == '-') { // Si el caracter es un d�gito, punto decimal o signo menos
            input += tecla;
            std::cout << tecla;
        }
        else {
            std::cout << "\b \b"; // Borra el caracter no v�lido de la consola
        }
    }

    return std::stof(input); // Convierte la cadena a un n�mero float y lo retorna
}