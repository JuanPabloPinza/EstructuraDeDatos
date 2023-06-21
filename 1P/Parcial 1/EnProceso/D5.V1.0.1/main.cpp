#include <iostream>
#include "Matriz.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	//Creación de matriz encerada e impresión
	int dimension = 3;
	Matriz<int> matrizEntera(3);
	matrizEntera.encerarMatriz(dimension);
	
	
	return 0;
}