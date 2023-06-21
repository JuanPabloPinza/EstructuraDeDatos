/*******************************************************************************
 UNIVERSIDAD DE LAS FUERZAS ARMADAS (ESPE)
 Asignatura: Estructuras de Datos
 Nombre: Juan Pablo Pinza Armijos
 Fecha de creacion: 17/05/23 21:39
 Fecha de modificacion: 23/05/23 03:09
 Enunciado General: Deber 3 Operadores Sobrecargados
 *******************************************************************************/
#ifndef OPSOBRECARGADOS_H
#define OPSOBRECARGADOS_H
#include <iostream>

class Operacion;

class OpSobrecargados{
//Asi se declaran los operadores sobrecargados:
public:
	virtual float operator +(const Operacion&) const = 0;
};

#endif