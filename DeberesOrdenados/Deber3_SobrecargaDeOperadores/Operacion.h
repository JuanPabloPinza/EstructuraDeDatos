/***************************
 UNIVERSIDAD DE LAS FUERZAS ARMADAS (ESPE)
 Asignatura: Estructuras de Datos
 Nombre: Juan Pablo Pinza Armijos
 Fecha de creacion: 16/05/23 21:39
 Fecha de modificacion: 19/05/23 10:30
 Enunciado General:Deber3 Operadores Sobrecargados
 ****************************/
#ifndef OPERACION_H
#define OPERACION_H
#include "Operador.h"

class Operacion: public Operador
{
	public:
		Operacion();
		Operacion(float, float);
		~Operacion();
		void setA(float);
		float getA(void);
		void setB(float);
		float getB(void);
		float operator +(const Operacion&) const override;
		friend std::ostream& operator<<(std::ostream&, const Operacion&);	
		bool operator ==(const Operacion&)const override;
		
	private:
		float a;
		float b;
};

#endif