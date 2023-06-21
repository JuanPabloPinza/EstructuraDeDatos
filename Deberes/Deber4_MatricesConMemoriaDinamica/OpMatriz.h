/*******************************************************************************
 UNIVERSIDAD DE LAS FUERZAS ARMADAS (ESPE)
 Asignatura: Estructuras de Datos
 Nombre: Juan Pablo Pinza Armijos
 Fecha de creacion: 17/05/23 21:39
 Fecha de modificacion: 22/05/23 03:09
 Enunciado General: Deber 4 Matrices Dinámicas
 *******************************************************************************/ 
#ifndef OPMATRIZ_H
#define OPMATRIZ_H

#include <iostream>
#include <typeinfo>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <conio.h>
#include "MatrizCuadrada.h"

template <typename T>
class OpMatriz {
	
	private:
		MatrizCuadrada<T> _matriz;
	public:
		OpMatriz();
		OpMatriz(MatrizCuadrada<T>&);
		~OpMatriz();
		void encerar();
		void generar();
		void multiplicacionMatrices(MatrizCuadrada<T>&,MatrizCuadrada<T>&);
		void sumaMatrices(MatrizCuadrada<T>&,MatrizCuadrada<T>&);
		void imprimir();

	protected:
};

template <typename T>
	OpMatriz<T>::OpMatriz(){
		
	}
	
template <typename T>
	OpMatriz<T>::~OpMatriz(){
		
	}
	
template <typename T>
	OpMatriz<T>::OpMatriz(MatrizCuadrada<T>& m){
		this->_matriz=m;
	}
	
template <typename T>
void OpMatriz<T>::encerar() {
	int dimension = _matriz.getDimension();
	T **matriz = _matriz.getMatrizCuadrada();
	for(int i=0; i<dimension; i++) {
		for(int j=0; j<dimension; j++) {
			*(*(matriz+i)+j)=0;
		}
	}
}

template <typename T>
void OpMatriz<T>::imprimir(){
	printf("La matriz es:\n");
	int dimension = _matriz.getDimension();
	T **matriz = _matriz.getMatrizCuadrada();
	
	for(int i=0;i<dimension;i++){
		for(int j=0;j< dimension;j++){
			if (typeid(T) == typeid(int)) {
				printf("%d\t",*(*(matriz+i)+j));
		    } else {
		        printf("%f\t",*(*(matriz+i)+j));
		    }								
		}
		printf("\n");

}
}

template <typename T>
void OpMatriz<T>::multiplicacionMatrices(MatrizCuadrada<T> &objMatriz1 ,MatrizCuadrada<T> &objMatriz2){
	int dim = _matriz.getDimension();
	T **matriz1 = objMatriz1.getMatrizCuadrada();
	T **matriz2 = objMatriz2.getMatrizCuadrada();
	T **matrizR = _matriz.getMatrizCuadrada();
	
	for(int i = 0; i < dim; i++) {
		for(int j = 0; j < dim; j++) {
			matrizR[i][j] = 0;
			for(int k = 0; k < dim; k++) {
				matrizR[i][j] += matriz1[i][k] * matriz2[k][j];
			}
		}
	}
}

template <typename T>
void OpMatriz<T>::sumaMatrices(MatrizCuadrada<T> &objMatriz1 ,MatrizCuadrada<T> &objMatriz2){
	int dim = _matriz.getDimension();
	T **matriz1 = objMatriz1.getMatrizCuadrada();
	T **matriz2 = objMatriz2.getMatrizCuadrada();
	T **matrizR = _matriz.getMatrizCuadrada();
	
	for(int i = 0; i < dim; i++) {
		for(int j = 0; j < dim; j++) {
			matrizR[i][j] = matriz1[i][j] + matriz2[i][j];
		}
	}
}

int generarAleatoriosEntero(int min, int max) {
	return min + (rand() % (max - min + 1));
}

float generarAleatoriosFloat(int imin, int imax) {
	float fmin = (float)imin;
	float fmax = (float)imax;
	float frango = fmax - fmin;
	float fescala = static_cast<float>(rand()) / RAND_MAX;
	return fmin + fescala * frango;
}


template <typename T>
void OpMatriz<T>::generar(){
	T numeroAleatorio;
	int min = 0, max = 10;
	for (int i = 0; i < _matriz.getDimension(); i++) {
		for (int j = 0; j < _matriz.getDimension(); j++) {
			if (typeid(T) == typeid(int)) {
        		numeroAleatorio = generarAleatoriosEntero(min, max);
		    } else {
		        numeroAleatorio = generarAleatoriosFloat(min, max);
		    }	
		    *(*(_matriz.getMatrizCuadrada() + i) + j) = numeroAleatorio;		    	
		}
	}
}




#endif