#include <iostream>
#include "Matriz.h"
#include "OpMatrices.h"

int main()
{
	//Forma de inicializar una Matriz, le pasamos de parámetro una matriz y luego hacemos una copia para hacer todas las operaciones.
	Matriz<int> matrizEntera(4),matrizInt(7);
	OpMatrices<int> operaciones;
	operaciones.setMatrizOp(matrizEntera);
	operaciones.encerarMatriz();
	operaciones.imprimirMatriz();

	//Creamos una función de inicializar la matriz para poder darme seteando una Matriz, encerandola, imprimiendola y devolviendola en el mismo.

	std::cout << "Matriz Inicializada"<<std::endl;
	matrizInt = operaciones.inicializarMatriz(matrizEntera);








}

