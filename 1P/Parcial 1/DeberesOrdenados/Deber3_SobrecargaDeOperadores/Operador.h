/***************************
 UNIVERSIDAD DE LAS FUERZAS ARMADAS (ESPE)
 Asignatura: Estructuras de Datos
 Nombre: Juan Pablo Pinza Armijos
 Fecha de creacion: 16/05/23 21:39
 Fecha de modificacion: 19/05/23 10:30
 Enunciado General:Deber3 Operadores Sobrecargados
 ****************************/
 
#pragma once

#include <iostream>

class Operacion;

class Operador{
	public:
		virtual float operator +(const Operacion&) const = 0;
		friend std::ostream& operator<<(std::ostream& os, const Operacion& op);
		virtual bool operator ==(const Operacion&)const=0;
};

