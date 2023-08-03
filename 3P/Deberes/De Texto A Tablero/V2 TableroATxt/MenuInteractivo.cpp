#include "MenuInteractivo.h"
#include "GenerarTxtTableroNxN.h"
#include <iostream>
#include <conio.h>

void MenuInteractivo::menuInteractivo() {
	const int numOpciones = 3;
	int opcionSeleccionada = 0;

	// Nombres personalizados para cada opción
	std::string nombresOpciones[numOpciones] = {
		"Generar archivo del tablero nxn",
		"Opcion B",
		"Salir",
	};

	while (true) {
		system("cls"); // Limpiar la pantalla

		// Imprimir las opciones del menú
		std::cout << "Seleccione una opcion:" << std::endl;
		for (int i = 0; i < numOpciones; i++) {
			if (i == opcionSeleccionada) {
				std::cout << "> " << nombresOpciones[i] << std::endl;
			} else {
				std::cout << "  " << nombresOpciones[i] << std::endl;
			}
		}

		// Leer la tecla presionada
		char tecla = _getch();

		// Navegar hacia arriba o hacia abajo según la tecla presionada
		if (tecla == 72) { // Tecla de flecha arriba
			opcionSeleccionada = (opcionSeleccionada - 1 + numOpciones) % numOpciones;
		} else if (tecla == 80) { // Tecla de flecha abajo
			opcionSeleccionada = (opcionSeleccionada + 1) % numOpciones;
		} else if (tecla == 13) { // Tecla Enter para seleccionar la opción
			system("cls");
			std::cout << "Ha seleccionado: " << nombresOpciones[opcionSeleccionada] << std::endl;

			// Bloque switch para manejar las acciones de cada opción
			switch (opcionSeleccionada) {
				case 0:
					GenerarTxtTableroNxN generar;
					generar.generarTxtTableroNxn();
					
					break;
				case 1:
					// Código para la opción B
					break;
				case 2:
					exit(0);
					break;
			}

			// Pausa para que el usuario pueda ver el resultado antes de continuar
			std::cout << "Presione cualquier tecla para continuar..." << std::endl;
			_getch();
		}
	}
}
