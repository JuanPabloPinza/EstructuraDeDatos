/*
UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
Materia: Estructura de Datos
NRC: 9686
Nombre:    Juan Pablo Pinza

Fecha de inicio: 02/08/2023 - 11:37
Fecha de modificación: 04/08/2023 - 02:37

Deber Parte 1: Creación de Tablero NxN
*/
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