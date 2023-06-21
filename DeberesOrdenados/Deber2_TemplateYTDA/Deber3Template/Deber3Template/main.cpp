#include <iostream>
#include "FraccionGenerica.cpp"

int main(){

	//FraccionGenerica<int> fracInt(153,2);
	//std::cout << fracInt.getNumerador() << std::endl;
	//std::cout << fracInt.getDenominador() << std::endl;

	FraccionGenerica<float> fracFloat1, fracFloat2, fracR;
	float tempFloat;
	std::cout << "Ingrese el numerador de la fraccion 1: ";
	std::cin >> tempFloat;
	fracFloat1.setNumerador(tempFloat);
	std::cout << "Ingrese el denominador de la fraccion 1: ";
	std::cin >> tempFloat;
	fracFloat1.setDenominador(tempFloat);
	std::cout << fracFloat1.getNumerador() << std::endl;
	std::cout << fracFloat1.getDenominador() << std::endl;

	std::cout << "Ingrese el numerador de la fraccion 2: ";
	std::cin >> tempFloat;
	fracFloat2.setNumerador(tempFloat);
	std::cout << "Ingrese el denominador de la fraccion 2: ";
	std::cin >> tempFloat;
	fracFloat2.setDenominador(tempFloat);
	std::cout << fracFloat2.getNumerador() << std::endl;
	std::cout << fracFloat2.getDenominador() << std::endl;

	tempFloat = fracR.operacionesGenericas(fracFloat1.getNumerador(), fracFloat1.getDenominador(),fracFloat2.getNumerador(), fracFloat2.getDenominador());

	std:: cout << "El resultado es: "<< tempFloat << std::endl;


	std:: cout << "El numerador del resultado es: "<< tempFloat << std::endl;
	std:: cout << fracR.getNumerador() << std::endl;
	std:: cout << "El denominador del resultado es: "<< tempFloat << std::endl;
	std:: cout << fracR.getDenominador() << std::endl;

	return 0;

}