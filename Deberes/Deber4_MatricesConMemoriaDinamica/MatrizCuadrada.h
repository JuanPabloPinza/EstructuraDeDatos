/*******************************************************************************
 UNIVERSIDAD DE LAS FUERZAS ARMADAS (ESPE)
 Asignatura: Estructuras de Datos
 Nombre: Juan Pablo Pinza Armijos
 Fecha de creacion: 17/05/23 21:39
 Fecha de modificacion: 22/05/23 03:09
 Enunciado General: Deber 4 Matrices Dinámicas
 *******************************************************************************/ 
#ifndef MATRIZCUADRADA_H
#define MATRIZCUADRADA_H

#include <iostream>

template <typename T>
class MatrizCuadrada {
private:
    int dimension;
    T** matriz;

public:
    MatrizCuadrada();
    MatrizCuadrada(int);
    ~MatrizCuadrada();
    int getDimension();
    void setDimension(int);
    T **getMatrizCuadrada();
    void setMatrizCuadrada(T **);
    
};

template <typename T>
MatrizCuadrada<T>::MatrizCuadrada(){
	matriz = nullptr;
	dimension = 0;
}

template <typename T>
MatrizCuadrada<T>::~MatrizCuadrada(){
	for(int i=0;i<dimension;i++){
		delete[] matriz[i];
	}
	delete[] matriz;
	matriz = NULL;
}

template <typename T>
MatrizCuadrada<T>::MatrizCuadrada(int dimension) {
	this->dimension=dimension;
	
	matriz = (T**)malloc(dimension * sizeof(T*)); //Asignar espacio filas
	
	for(int j = 0; j < dimension; j++){
		*(matriz+j) = (T*)malloc(dimension * sizeof(T)); //Asignar espacio columnas
	}
}

template <typename T>
int MatrizCuadrada<T>::getDimension() {
	return dimension;
}

template <typename T>
void MatrizCuadrada<T>::setDimension(int dimension) {
	this->dimension = dimension;
}

template <typename T>
T **MatrizCuadrada<T>::getMatrizCuadrada() {
	return matriz;
}

template <typename T>
void MatrizCuadrada<T>::setMatrizCuadrada(T **matriz1) {
	this->matriz = matriz1;
}

#endif