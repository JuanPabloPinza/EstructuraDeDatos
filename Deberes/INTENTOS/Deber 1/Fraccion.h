/***********************************************************************
 * Module:  Fraccion.h
 * Author:  JuanPa
 * Modified: Friday, May 12, 2023 8:09:09 AM
 * Purpose: Declaration of the class Fraccion
 ***********************************************************************/

#if !defined(__DiagramaDeClase_Deber1_Fraccion_h)
#define __DiagramaDeClase_Deber1_Fraccion_h

class Fraccion
{
public:
   float getNumerador(void);
   void setNumerador(float newNumerador);
   float getDenominador(void);
   void setDenominador(float newDenominador);
   Fraccion(float numerador, float denominador);
   ~Fraccion();
   bool evitarIndeterminacion(float denominador);

protected:
private:
   float numerador;
   float denominador;


};

#endif