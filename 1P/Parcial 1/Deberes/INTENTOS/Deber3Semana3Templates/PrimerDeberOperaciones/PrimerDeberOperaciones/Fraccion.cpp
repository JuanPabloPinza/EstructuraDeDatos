/***********************************************************************
UFA - ESPE
Estructuras de Datos
Nombres : Juan Pablo Pinza, Sebastian Lasso, Dylan Alvarado.
Fecha de Creación : 09/05/23
Fecha de modificación : 12/05/23
Enunciado General : Deber 1
 ***********************************************************************/

#include "Fraccion.h"

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

Fraccion::Fraccion(float _numerador, float _denominador)
{
	numerador = _numerador;
	denominador = _denominador;
}

Fraccion::Fraccion() {
	numerador = 0.0;
	denominador = 0.0;
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
// Name:       Fraccion::evitarIndeterminacion(float denominador)
// Purpose:    Implementation of Fraccion::evitarIndeterminacion()
// Parameters:
// - denominador
// Return:     bool
////////////////////////////////////////////////////////////////////////

bool Fraccion::evitarIndeterminacion(float denominador)
{
	return false;
}

float Fraccion::proceso(float numerador1, float denominador1, float numerador2, float denominador2) {
	float operacionesMatematicas;
	denominador = (denominador1 + denominador2);
	numerador = (numerador1 * denominador2) + (numerador2 * denominador1);
	operacionesMatematicas =  numerador/denominador;
	return operacionesMatematicas;
	
}
