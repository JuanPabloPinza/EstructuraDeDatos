#ifndef GENERARTABLERO_H
#define GENERARTABLERO_H

#include <iostream>

class GenerarTablero
{
	public:
		static void generarTxtTableroNxN();
		static void cargarTablero(std::string nombreArchivo, int**& tablero, int& n);
		static void dibujarTablero(int** tablero, int n);
		static void liberarTablero(int** tablero, int n);
	protected:
};

#endif