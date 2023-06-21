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