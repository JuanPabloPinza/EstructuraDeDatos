/*
UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
Materia: Estructura de Datos
NRC: 9686
Nombre:    Juan Pablo Pinza

Fecha de inicio: 02/08/2023 - 11:37
Fecha de modificación: 04/08/2023 - 03:37

Deber Parte 2: Reina en posición aleatoria del tablero de ajedrez
*/
#ifndef SOLUCIONNREINAS_H
#define SOLUCIONNREINAS_H
#include <iostream>
class SolucionNReinas
{
	public:
		static void solucionarNReinas();
		static void graficarSolucionesEnConsola();
		static void extraerSolucion(std::string nombreArchivo, int numeroSolucion);
		static void extraerSolucion(std::string nombreArchivo);
	protected:
};

#endif