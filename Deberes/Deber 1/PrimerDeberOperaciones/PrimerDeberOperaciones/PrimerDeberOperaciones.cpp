/* UFA - ESPE
Estructuras de Datos
Nombres : Juan Pablo Pinza, Sebastian Lasso, Dylan Alvarado.
Fecha de Creación : 09/05/23
Fecha de modificación : 12/05/23
Enunciado General : Deber 1 */

#include <iostream>
#include "Fraccion.h"
using namespace std;

int main()
{
	Fraccion fraccion1, fraccion2, fraccionR;
	float resultadoFinal;
	cout << "Bienvenido al Programa" << endl;
	fraccion1.setNumerador(3);
	fraccion1.setDenominador(4);
	fraccion2.setNumerador(7);
	fraccion2.setDenominador(2);
	resultadoFinal= fraccionR.proceso(fraccion1.getNumerador(), fraccion1.getDenominador(),
		fraccion2.getNumerador(), fraccion2.getDenominador());

	cout << "El resultado es: " << resultadoFinal;



}

