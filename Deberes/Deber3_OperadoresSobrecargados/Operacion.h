/*******************************************************************************
 UNIVERSIDAD DE LAS FUERZAS ARMADAS (ESPE)
 Asignatura: Estructuras de Datos
 Nombre: Juan Pablo Pinza Armijos
 Fecha de creacion: 17/05/23 21:39
 Fecha de modificacion: 23/05/23 03:09
 Enunciado General: Deber 3 Operadores Sobrecargados
 *******************************************************************************/
#ifndef OPERACION_H
#define OPERACION_H
#include "OpSobrecargados.h"

class Operacion: public OpSobrecargados
{
	private:
		float num1;
		float num2;
	public:
		void setNum1(float);
		float getNum1();
		void setNum2(float);
		float getNum2();
		~Operacion();
		Operacion();
		Operacion(float, float);
		float operator +(const Operacion&)const override;
};

#endif