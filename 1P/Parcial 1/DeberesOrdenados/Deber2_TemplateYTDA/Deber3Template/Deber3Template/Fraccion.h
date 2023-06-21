/***********************************************************************
 * Module:  Fraccion.h
 * Author:  JuanPa
 * Modified: Saturday, May 20, 2023 11:24:46 PM
 * Purpose: Declaration of the class Fraccion
 ***********************************************************************/

#if !defined(__Fraccion_TDA_Fraccion_h)
#define __Fraccion_TDA_Fraccion_h
#include "OperacionesFraccion.h"

class Fraccion : public OperacionesFraccion {
public:
   float getNumerador(void);
   void setNumerador(float newNumerador);
   float getDenominador(void);
   void setDenominador(float newDenominador);
   Fraccion();
   Fraccion(float numerador, float denominador);
   ~Fraccion();
   void evitarIndeterminacion(float);
   Fraccion operacionesTDA(Fraccion, Fraccion);
   float operacionesFloat(float num1, float den1, float num2, float den2);

protected:
private:
   float numerador;
   float denominador;


};

#endif