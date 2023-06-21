/*******************************************************************************
 UNIVERSIDAD DE LAS FUERZAS ARMADAS (ESPE)
 Asignatura: Estructuras de Datos
 Nombre: Juan Pablo Pinza Armijos
 Fecha de creacion: 17/05/23 21:39
 Fecha de modificacion: 22/05/23 03:09
 Enunciado General: Deber 4 Matrices Dinámicas
 *******************************************************************************/ 
#include <iostream>
#include "MatrizCuadrada.h"
#include "OpMatriz.h"
#include "Validador.h"


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

template <typename T>
void inicializar(int dim){
	MatrizCuadrada<T> matriz1(dim), matriz2(dim), matrizR(dim);
		
	OpMatriz<T> operaciones1(matriz1);
	operaciones1.encerar();
	operaciones1.generar();
	std::cout << "\nMatriz1: " << std::endl;
	operaciones1.imprimir();
	
	OpMatriz<T> operaciones2(matriz2);
	operaciones2.encerar();
	operaciones2.generar();
	std::cout << "\nMatriz2: " << std::endl;
	operaciones2.imprimir();

	OpMatriz<T> operaciones3(matrizR);
	operaciones3.encerar();	
	operaciones3.multiplicacionMatrices(matriz1, matriz2);
	std::cout << "\nMatriz1 * Matriz2 = " << std::endl;
	operaciones3.imprimir();
	
	OpMatriz<T> operaciones4(matrizR);
	operaciones4.encerar();	
	operaciones4.sumaMatrices(matriz1, matriz2);
	std::cout << "\nMatriz1 + Matriz2 = " << std::endl;
	operaciones4.imprimir();
}

int main() {
	int dim;
	std::cout << "Ingrese la dimension de la matriz:" << std::endl;
	dim = Validador::ingresarOpcionMenu(2,9);
	
	std::cout << "Tipo de datos de la matriz?:" << std::endl;
	std::cout << "Entero -> 0" << std::endl;
	std::cout << " Flotante -> 1" << std::endl;
	int opcion = Validador::ingresarOpcionMenu(0, 1);
	
	if (opcion == 0) {
		inicializar<int>(dim);
	} else if (opcion == 1) {
		inicializar<float>(dim);
	}
	
	return 0;
	
}

