#pragma once

#include "Matriz.h"
#include <time.h>
#include <iomanip>


template <typename T>
class OpMatrices {
public:
	void encerarMatriz();
	void generarMatriz();
	void imprimirMatriz();
	void setMatrizOp(Matriz<T>&);
	Matriz<T> getMatrizOp();
	Matriz<T> inicializarMatriz(Matriz<T>);
	Matriz<T> sumarMatrices(Matriz<T> matriz1, Matriz<T> matriz2);
	
private:
	Matriz<T> matrizOp;
};

template <typename T>
void OpMatrices<T>::setMatrizOp(Matriz<T> &matriz) {
	this->matrizOp = matriz;
}

template <typename T>
Matriz<T> OpMatrices<T>::getMatrizOp() {
	return matrizOp;
}



template <typename T>
void OpMatrices<T>::encerarMatriz() {
	for (int i = 0; i < matrizOp.getDim(); i++) {
		for (int j = 0; j < matrizOp.getDim(); j++) {
			*(*(matrizOp.getPuntMatriz() + i) + j) = 0;
		}
	}
}

template <typename T>
void OpMatrices<T>::imprimirMatriz() {
	for (int i = 0; i < matrizOp.getDim(); i++) {
		for (int j = 0; j < matrizOp.getDim(); j++) {
			std::cout << *( *(matrizOp.getPuntMatriz() + i) + j) << " ";
		}
		std::cout << "\n";
	}
}

template <typename T>
void OpMatrices<T>::generarMatriz() {
	// Generamos números aleatorios y los guardamos en la matriz.
	srand(time(NULL));
	for (int i = 0; i < matrizOp.getDim(); i++) {
		for (int j = 0; j < matrizOp.getDim(); j++) {
			if (std::is_same<T, float>::value) {
				// Si T es float, generamos un float aleatorio en el rango 0-9 con 2 decimales.
				float randomFloat = static_cast<float>(rand()) / static_cast<float>(RAND_MAX) * 9.0f;
				matrizOp.getPuntMatriz()[i][j] = std::roundf(randomFloat * 100) / 100; // Redondear a 2 decimales
			}
			else if (std::is_same<T, int>::value) {
				// Si T es int, generamos un entero aleatorio en el rango 0-9.
				matrizOp.getPuntMatriz()[i][j] = rand() % 10;
			}
		}
	}
}

template <typename T>
Matriz<T> OpMatrices<T>::inicializarMatriz(Matriz<T> matriz) {
	setMatrizOp(matriz);
	encerarMatriz();
	generarMatriz();
	imprimirMatriz();
	return matrizOp;
}


template <typename T>
Matriz<T> OpMatrices<T>::sumarMatrices(Matriz<T> matriz1, Matriz<T> matriz2) {
	Matriz<T> matrizR(matriz1.getDim());
	matrizR = inicializarMatriz(matrizR);
	for (int i = 0; i < matrizR.getDim(); i++) {
		for (int j = 0; j < matrizR.getDim(); j++) {
			matrizR.getPuntMatriz()[i][j] = matriz1.getPuntMatriz()[i][j] + matriz2.getPuntMatriz()[i][j];
		}
	}

	return matrizR;
}