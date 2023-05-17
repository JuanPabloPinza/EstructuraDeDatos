/* UFA - ESPE
Estructuras de Datos
Nombres : Juan Pablo Pinza, Sebastian Lasso, Dylan Alvarado.
Fecha de Creación : 09/05/23
Fecha de modificación : 12/05/23
Enunciado General : Deber 1 */

#include <iostream>
#include "Fraccion.h"

int main()
{
	Fraccion fraccion1, fraccion2, fraccionR;
	float resultadoFinal;
	std::cout << "Bienvenido al Programa" << std::endl;
	fraccion1.setNumerador(3);
	fraccion1.setDenominador(4);
	fraccion2.setNumerador(7);
	fraccion2.setDenominador(2);
	resultadoFinal= fraccionR.proceso(fraccion1.getNumerador(), fraccion1.getDenominador(),
		fraccion2.getNumerador(), fraccion2.getDenominador());

	std::cout << "El numerador tiene el valor de: " << fraccionR.getNumerador()<<std::endl;
	std::cout << "El denominador tiene el valor de: " << fraccionR.getDenominador()<<std::endl;
	std::cout << "El resultado es: " << resultadoFinal;



}

