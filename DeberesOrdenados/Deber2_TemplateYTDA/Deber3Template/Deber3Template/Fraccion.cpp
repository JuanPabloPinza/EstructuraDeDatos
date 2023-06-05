/***********************************************************************
 * Module:  Fraccion.cpp
 * Author:  JuanPa
 * Modified: Saturday, May 20, 2023 11:24:46 PM
 * Purpose: Implementation of the class Fraccion
 ***********************************************************************/

#include "Fraccion.h"
#include <iostream>

////////////////////////////////////////////////////////////////////////
// Name:       Fraccion::getNumerador()
// Purpose:    Implementation of Fraccion::getNumerador()
// Return:     float
////////////////////////////////////////////////////////////////////////

float Fraccion::getNumerador(void)
{
   return numerador;
}

////////////////////////////////////////////////////////////////////////
// Name:       Fraccion::setNumerador(float newNumerador)
// Purpose:    Implementation of Fraccion::setNumerador()
// Parameters:
// - newNumerador
// Return:     void
////////////////////////////////////////////////////////////////////////

void Fraccion::setNumerador(float newNumerador)
{
   numerador = newNumerador;
}

////////////////////////////////////////////////////////////////////////
// Name:       Fraccion::getDenominador()
// Purpose:    Implementation of Fraccion::getDenominador()
// Return:     float
////////////////////////////////////////////////////////////////////////

float Fraccion::getDenominador(void)
{
   return denominador;
}

////////////////////////////////////////////////////////////////////////
// Name:       Fraccion::setDenominador(float newDenominador)
// Purpose:    Implementation of Fraccion::setDenominador()
// Parameters:
// - newDenominador
// Return:     void
////////////////////////////////////////////////////////////////////////

void Fraccion::setDenominador(float newDenominador)
{
   denominador = newDenominador;
}

////////////////////////////////////////////////////////////////////////
// Name:       Fraccion::Fraccion(float numerador, float denominador)
// Purpose:    Implementation of Fraccion::Fraccion()
// Parameters:
// - numerador
// - denominador
// Return:     
////////////////////////////////////////////////////////////////////////

Fraccion::Fraccion(float numerador, float denominador)
{
 this->numerador = numerador;
 this->denominador = denominador;
 
}

////////////////////////////////////////////////////////////////////////
// Name:       Fraccion::~Fraccion()
// Purpose:    Implementation of Fraccion::~Fraccion()
// Return:     
////////////////////////////////////////////////////////////////////////

Fraccion::~Fraccion()
{
   // TODO : implement
}

////////////////////////////////////////////////////////////////////////
// Name:       Fraccion::Fraccion()
// Purpose:    Implementation of Fraccion::Fraccion()
// Return:     
////////////////////////////////////////////////////////////////////////

Fraccion::Fraccion()
{
}

void Fraccion::evitarIndeterminacion(float denominador) {
	if (denominador == 0) {
		std::cout << "El denominador debe ser distinto de cero" << std::endl;
		std::cout << "Vuelva a ingresar el denominador" << std::endl;
		std::cin >> denominador;
		evitarIndeterminacion(denominador);
	}
}

float Fraccion::operacionesFloat(float num1, float den1, float num2, float den2) {
	numerador = (num1 * den2) + (num2 * den1);
	denominador = (den1 + den2);
	return (numerador / denominador);
}

Fraccion Fraccion::operacionesTDA(Fraccion frac1, Fraccion frac2) {
	Fraccion fraccionResultante;
	fraccionResultante.setNumerador((frac1.getNumerador()*frac2.getDenominador())+(frac2.getNumerador()*frac1.getDenominador()));
	fraccionResultante.setDenominador(frac1.getDenominador() + frac2.getDenominador());
	return fraccionResultante;
}