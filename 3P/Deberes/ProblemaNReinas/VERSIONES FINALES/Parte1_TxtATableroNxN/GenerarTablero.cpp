/*
UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
Materia: Estructura de Datos
NRC: 9686
Nombre:    Juan Pablo Pinza

Fecha de inicio: 02/08/2023 - 11:37
Fecha de modificación: 04/08/2023 - 02:37

Deber Parte 1: Creación de Tablero NxN
*/
#include "GenerarTablero.h"
#include "Validaciones.h"
#include <fstream>
#include <graphics.h>
#include <fstream>
#include <limits>//Para validar con el buffer y eliminar memoria del teclado


//0 Negro, 1 Blanco

void GenerarTablero::generarTxtTableroNxN() {

	std::cout<<"Ingrese la dimension del tablero de ajedrez: (Min 2, Max 8): ";
	int dim,cuadros;
	std::cin>>dim;

	// Validación del valor de dim
	while (std::cin.fail() || dim < 2 || dim > 8) {
		std::cin.clear(); // Limpia el error de la mmeoria del teclado
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Descarta la entrada incorrecta
		std::cout << "\nValor ingresado no valido!!. Vuelva a ingresar un valor entre 2 y 8: ";
		std::cin >> dim;
	}

	cuadros = dim*dim;

	std::ofstream archivo("tablero.txt");

	if(archivo.is_open()) {
		//para poder guardar en el archivo usamos archivo<<
		for(int i = 1; i<=cuadros; i++) {
			//Para Tablas impares
			if(dim%2!=0) {
				if(i%2==0) {
					std::cout<<"1";
					archivo<<"1";
				} else if(i%2!=0) {
					std::cout<<"0";
					archivo<<"0";
				}
				//PARA LOS SALTOS DE LÍNEA:
				if(i%dim==0) {
					std::cout<<"\n";
					archivo<<"\n";
				}
			}
		}
		//Para tablas pares
		//Ejm: 4 filas, debería ser el máximo del valor de fila 4,
		//Cuando sea 0 va a empezar con negro, si cambia a 1 va a empezar con blanco
		if(dim%2==0) {

			bool validador = false;
			for(int i = 0; i<=dim-1; i++) {
				if(validador == false) {
					for(int j = 0 ; j <=dim-1; j++) {
						if(j%2==0) {
							std::cout<<"0";
							archivo<<"0";
						} else if(j%2!=0) {
							std::cout<<"1";
							archivo<<"1";
						}
						validador = true;
					}
				} else if(validador == true) {
					for(int j = 0 ; j <=dim-1; j++) {
						if(j%2==0) {
							std::cout<<"1";
							archivo<<"1";
						} else if(j%2!=0) {
							std::cout<<"0";
							archivo<<"0";
						}
						validador = false;
					}
				}
				std::cout<<"\n";
				archivo<<"\n";
			}
		}
		std::cout<<"\nEl archivo fue escrito con exito"<<std::endl;
	} else {
		std::cout << "No se pudo abrir el archivo." << std::endl;
	}
}


//FUNCIONES ADICIONALES PARA GRAFICAR:

// Función para cargar el tablero desde el archivo
void GenerarTablero::cargarTablero(std::string nombreArchivo, int**& tablero, int& n) {
	std::ifstream archivo(nombreArchivo);

	if (archivo.is_open()) {
		std::string linea;
		n = 0;
		while (std::getline(archivo, linea)) {
			n++;
		}

		archivo.clear();
		archivo.seekg(0, std::ios::beg);

		tablero = new int* [n];
		for (int i = 0; i < n; i++) {
			tablero[i] = new int[n];
			std::getline(archivo, linea);
			for (int j = 0; j < n; j++) {
				tablero[i][j] = linea[j] - '0';
			}
		}

		archivo.close();
	} else {
		std::cout << "No se pudo abrir el archivo." << std::endl;
	}
}

// Función para dibujar el tablero de ajedrez
void GenerarTablero::dibujarTablero(int** tablero, int n) {
	const int margen = 20;
	int ventanaSize = std::min(n * 100 + 2 * margen, 800);

	initwindow(ventanaSize, ventanaSize);

	int ladoCasilla = (ventanaSize - 2 * margen) / n;


	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			int x = margen + j * ladoCasilla;
			int y = margen + i * ladoCasilla;

			if (tablero[i][j] == 0) { // 0 representa el color negro
				setfillstyle(SOLID_FILL, BLACK);
			} else { // 1 representa el color blanco
				setfillstyle(SOLID_FILL, WHITE);
			}

			bar(x, y, x + ladoCasilla, y + ladoCasilla);
		}
	}
	outtextxy(20, 20 + 20, "Tablero de ajedrez en base a txt");

	getch();
	closegraph();
}

// Función para liberar la memoria utilizada por el tablero
void GenerarTablero::liberarTablero(int** tablero, int n) {
	for (int i = 0; i < n; i++) {
		delete[] tablero[i];
	}
	delete[] tablero;
}