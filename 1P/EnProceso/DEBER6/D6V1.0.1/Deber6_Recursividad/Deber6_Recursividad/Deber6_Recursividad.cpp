#include <iostream>
#include "Matriz.h"
#include "OpMatrices.h"

int main()
{
	//Forma de inicializar una Matriz, le pasamos de parámetro una matriz y luego hacemos una copia para hacer todas las operaciones.
	Matriz<int> matrizInt1(3),matrizInt2(3),matrizR;
	OpMatrices<int> operaciones;

	//Creamos una función de inicializar la matriz para poder darme seteando una Matriz, encerandola, imprimiendola y devolviendola en el mismo.

	std::cout << "Suma de Matrices"<<std::endl;
	std::cout << "Matriz 1"<<std::endl;
	matrizInt1 = operaciones.inicializarMatriz(matrizInt1);
	std::cout << "Matriz 2"<<std::endl;
	matrizInt2 = operaciones.inicializarMatriz(matrizInt2);

	matrizR = operaciones.sumarMatrices(matrizInt1,matrizInt2);








}

