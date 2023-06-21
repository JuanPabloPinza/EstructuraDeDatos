/*******************************************************************************
 UNIVERSIDAD DE LAS FUERZAS ARMADAS (ESPE)
 Asignatura: Estructuras de Datos
 Nombre: Juan Pablo Pinza Armijos
 Fecha de creacion: 17/05/23 21:39
 Fecha de modificacion: 22/05/23 03:09
 Enunciado General: Deber 4 Matrices Dinámicas
 *******************************************************************************/ 
#include "Validador.h"
#include <iostream>
#include <limits> //para validar los límites en menus

float Validador::ingresarFlotante() {
  float numero;
  while (true) {
    std::cout << "Ingrese un número flotante: ";
    if (std::cin >> numero) {
      // Validación exitosa
      break;
    } else {
      // Limpia el flujo de entrada y muestra un mensaje de error
      std::cin.clear();
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
      std::cout << "Entrada inválida. Por favor, intente nuevamente." << std::endl;
    }
  }
  return numero;
}

int Validador::ingresarEntero() {
  int numero;
  while (true) {
    std::cout << "Ingrese un número entero: ";
    if (std::cin >> numero) {
      // Validación exitosa
      break;
    } else {
      // Limpia el flujo de entrada y muestra un mensaje de error
      std::cin.clear();
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
      std::cout << "Entrada inválida. Por favor, intente nuevamente." << std::endl;
    }
  }
  return numero;
}

int Validador::ingresarOpcionMenu(int min, int max) {
  int opcion;
  while (true) {
    std::cout << "Ingrese una opción (" << min << "-" << max << "): ";
    if (std::cin >> opcion && opcion >= min && opcion <= max) {
      // Validación exitosa
      break;
    } else {
      // Limpia el flujo de entrada y muestra un mensaje de error
      std::cin.clear();
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
      std::cout << "Opción inválida. Por favor, intente nuevamente." << std::endl;
    }
  }
  return opcion;
}


