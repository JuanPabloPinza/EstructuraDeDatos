/***********************************************************************
UFA - ESPE
Estructuras de Datos
Nombres : Juan Pablo Pinza, Sebastian Lasso, Dylan Alvarado.
Fecha de Creación : 09/05/23
Fecha de modificación : 12/05/23
Enunciado General : Deber 1
 ***********************************************************************/

#if !defined(__DiagramaDeClase_Deber1_Fraccion_h)
#define __DiagramaDeClase_Deber1_Fraccion_h
#include "Operaciones.h"


class Fraccion : public Operaciones
{
public:
   float getNumerador(void);
   void setNumerador(float newNumerador);
   float getDenominador(void);
   void setDenominador(float newDenominador);
   Fraccion(float numerador, float denominador);
   Fraccion();
   ~Fraccion();
   bool evitarIndeterminacion(float denominador);
   float proceso(float, float, float, float) override;

protected:
private:
   float numerador;
   float denominador;


};

#endif