/***********************************************************************
 * Module:  OperacionesFraccion.h
 * Author:  JuanPa
 * Modified: Saturday, May 20, 2023 11:24:40 PM
 * Purpose: Declaration of the class OperacionesFraccion
 ***********************************************************************/

#if !defined(__Fraccion_TDA_OperacionesFraccion_h)
#define __Fraccion_TDA_OperacionesFraccion_h

#include "Fraccion.h"

class OperacionesFraccion
{
public:
   virtual void evitarIndeterminacion(float denominador)=0;
   virtual float operacionesFloat(float num1, float den1, float num2, float den2)=0;

protected:
private:

};

#endif