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