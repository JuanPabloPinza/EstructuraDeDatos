#pragma once

#include "Matriz.h"

template <typename T>
class OpMatrices {
public:
	void encerarMatriz();
	void generarMatriz(Matriz<T>);
	void imprimirMatriz();
	void setMatrizOp(Matriz<T>&);
	Matriz<T> getMatrizOp();
	Matriz<T> inicializarMatriz(Matriz<T>);
	
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
Matriz<T> OpMatrices<T>::inicializarMatriz(Matriz<T> matriz) {
	setMatrizOp(matriz);
	encerarMatriz();
	imprimirMatriz();

	return matrizOp;
}


