#ifndef GENERARTABLERO_H
#define GENERARTABLERO_H

#include <iostream>

class GenerarTablero
{
	public:
		void generarTxtTableroNxN();
		void cargarTablero(std::string nombreArchivo, int**& tablero, int& n);
		void liberarTablero(int** tablero, int n);
		void dibujarTablero(int** tablero, int n);
		
	protected:
};

#endif