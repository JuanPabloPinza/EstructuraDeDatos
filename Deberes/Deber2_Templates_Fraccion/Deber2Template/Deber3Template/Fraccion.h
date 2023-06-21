/*******************************************************************************
 UNIVERSIDAD DE LAS FUERZAS ARMADAS (ESPE)
 Asignatura: Estructuras de Datos
 Nombre: Juan Pablo Pinza Armijos
 Fecha de creacion: 17/05/23 21:39
 Fecha de modificacion: 21/05/23 03:09
 Enunciado General: Deber 2 Templates para fracciones
 *******************************************************************************/

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