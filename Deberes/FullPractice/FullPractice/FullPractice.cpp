#include <iostream>
#include "Matriz.h"
#include "Dato.h" 

int main()
{
	int dimension;
	Matriz mat;
	std::cout << "Ingrese la dimensi�n de la matriz"<<std::endl;
	std::cout << "El valor m�ximo es de 2 a 9"<<std::endl;
	dimension = Dato::ingresarEntero();


	return 0;
}

