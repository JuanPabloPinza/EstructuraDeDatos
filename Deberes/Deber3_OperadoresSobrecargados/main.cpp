#include <iostream>
/*******************************************************************************
 UNIVERSIDAD DE LAS FUERZAS ARMADAS (ESPE)
 Asignatura: Estructuras de Datos
 Nombre: Juan Pablo Pinza Armijos
 Fecha de creacion: 17/05/23 21:39
 Fecha de modificacion: 23/05/23 03:09
 Enunciado General: Deber 3 Operadores Sobrecargados
 *******************************************************************************/
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
	std::cout << obj1.getNum1() << " + " << obj1.getNum2() << " + " << obj2.getNum1() << " + " << obj2.getNum2()<< " = " << obj1 + obj2 << std::endl;	
	
	
	
	return 0;
}