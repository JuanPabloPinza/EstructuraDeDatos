#include <iostream>
#include "GenerarTablero.h"

int main() {

	std::cout<<"PROGRAMA DE TABLERO DE REINAS, PARTE 1 \n";

	//Función para generar tablero en txt
	GenerarTablero::generarTxtTableroNxN();

	//Funciones para cargar tablero, dibujarlo en modo gráfico y liberar memoria
	//Inicializamos ciertas variables para poder cargarlas
	std::string nombreArchivo = "tablero.txt";
	int** tablero;
	int n;
	GenerarTablero::cargarTablero(nombreArchivo, tablero, n);
	GenerarTablero::dibujarTablero(tablero, n);
	GenerarTablero::liberarTablero(tablero, n);

	return 0;
}
