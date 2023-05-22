#include <iostream>
#include "Operacion.cpp"
#include "Operacion.h"


//Voy a crear los operadores sobrecargados
/*
<< -> Para poder imprimir datos de cierta clase.
- -> Para poder restar directamente entre clases fracciones los valores que este tenga.
+ -> Para poder sumar directamente.
== -> Para comprobar si dos números son iguales o no dentro de una clase.
Planificación:
Creamos una CLASE Operacion (.h y .cpp)
Creamos una Interfaz Operacion.
Creamos una Interfaz OpSobrecargados
Importamos las validaciones (para enteros, decimales, character)
*/

int main() {
	
	float float1,float2;
	
		
	std::cout <<"OBJETO 1"<<std::endl;
	std::cout <<"Impresion de Sobrecarga +"<<std::endl;
	std::cout <<"Ingrese el primer flotante: ";
	std::cin >> float1;
	std::cout <<"Ingrese el segundo flotante: ";
	std::cin >> float2;
	Operacion obj1(float1,float2);
		
	std::cout <<"OBJETO 2"<<std::endl;
	std::cout <<"Impresion de Sobrecarga +"<<std::endl;
	std::cout <<"Ingrese el primer flotante: ";
	std::cin >> float1;
	std::cout <<"Ingrese el segundo flotante: ";
	std::cin >> float2;
	Operacion obj2(float1,float2);
	
	std::cout <<"USO DE OPERADOR SOBRECARGADO +"<<std::endl;
	std::cout <<"SUMA ES: \n" << obj1.getNum1() << "+" << obj2.getNum1();
	std::cout <<"SUMA ES: \n" << obj2.getNum1() << "+" << obj2.getNum1();
	
	
	
	
	return 0;
}