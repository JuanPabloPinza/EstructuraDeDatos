#include <iostream>
#include "../../Modelo/Fraccion.h"
#include "Validador.h"

/*
El siguiente programa tiene el objetivo de hacer las siguientes operaciones :
(a+d)+(b*c)/(b+d)
Siendo:
a -> Numerador 1
b -> Denominador 1
c -> Numerador 2
d -> Denominador 2
*/
int main()
{

	Fraccion frac1, frac2, fracR;
	float variableTemp,resultado;
	Validador validar;

	std::cout << "Bienvenido" << std::endl;
	std::cout << "Ingrese los datos de la fraccion 1" << std::endl;
	std::cout << "Numerador: " << std::endl;
	variableTemp = validar.ingresarFlotante();
	frac1.setNumerador(variableTemp);
	std::cout << "Denominador: " << std::endl;
	variableTemp = validar.ingresarFlotante();
	frac1.evitarIndeterminacion(variableTemp);
	frac1.setDenominador(variableTemp);

	std::cout << "Ingrese los datos de la fraccion 2" << std::endl;
	std::cout << "Numerador: " << std::endl;
	variableTemp = validar.ingresarFlotante();
	frac2.setNumerador(variableTemp);
	std::cout << "Denominador: " << std::endl;
	variableTemp = validar.ingresarFlotante();
	frac2.evitarIndeterminacion(variableTemp);
	frac2.setDenominador(variableTemp);

	resultado = fracR.operacionesFloat(frac1.getNumerador(), frac1.getDenominador(), frac2.getNumerador(), frac2.getDenominador());
	std::cout << "Resultado de las operaciones: " << resultado << std::endl;
	std::cout << "Numerador: " << fracR.getNumerador() << std::endl;
	std::cout << "Denominador: " << fracR.getDenominador() << std::endl;

	std::cout << "ENVIO COMO TDA" << std::endl;
	fracR = fracR.operacionesTDA(frac1, frac2);
	std::cout << "Numerador TDA: " << fracR.getNumerador() << std::endl;
	std::cout << "Denominador TDA: " << fracR.getDenominador() << std::endl;




}

