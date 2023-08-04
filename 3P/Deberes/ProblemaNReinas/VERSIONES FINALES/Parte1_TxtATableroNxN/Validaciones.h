/*
UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
Materia: Estructura de Datos
NRC: 9686
Nombre:    Juan Pablo Pinza

Fecha de inicio: 02/08/2023 - 11:37
Fecha de modificación: 04/08/2023 - 02:37

Deber Parte 1: Creación de Tablero NxN
*/
#ifndef VALIDACIONES_H
#define VALIDACIONES_H

#include <string>

class Validaciones{
	
	public:
	static int validarMenuOpc(char, char);
	static char* validarStrings();
	static std::string validarCedulaEcuatoriana();
	static int validarAnioDeContratacion();
	static int validarEdad();
	static bool validarEdad(int);
	static bool validarC(int);
};

#endif