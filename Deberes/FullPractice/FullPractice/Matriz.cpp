#include "Matriz.h"
#include "Operaciones.h"
#include <iostream>

void Matriz::generarMatriz(int dimension) {

	//Reservar espacio de memoria
	int **punt_matriz;
	Operaciones op;

	punt_matriz = new int* [dimension]; //Reservamos espacio para las filas
	for (int i = 0; i < dimension; i++) {
		punt_matriz[i] = new int[dimension]; //Reser. espacio para las columnas
	}

	//Generación de datos en la matriz aleatorios.
	for (int i = 0; i < dimension; i++) {
		for (int j = 0; j < dimension; j++) {
			*(*(punt_matriz + i) + j) = op.generarIntRnd();
		}
	}
	imprimirMatriz(punt_matriz,dimension);

}
void Matriz::encerarMatriz() {
	//Reservar espacio de memoria
	int** punt_matriz;
	Operaciones op;

	punt_matriz = new int * [dimension]; //Reservamos espacio para las filas
	for (int i = 0; i < dimension; i++) {
		punt_matriz[i] = new int[dimension]; //Reser. espacio para las columnas
	}

	//Generación de datos en la matriz aleatorios.
	for (int i = 0; i < dimension; i++) {
		for (int j = 0; j < dimension; j++) {
			*(*(punt_matriz + i) + j) = 0;
		}
	}
	imprimirMatriz(punt_matriz, dimension);
}

void Matriz::imprimirMatriz(int **matriz,int dimension) {

	std::cout << "La matriz resultante es:" << std::endl;
	for (int i = 0; i < dimension; i++) {
		for (int j = 0; j < dimension; j++) {
			std::cout << *(*(matriz + i) + j) << " ";
		}
		std::cout << "\n";
	}
}
Matriz::Matriz(){}

Matriz::~Matriz(){}
