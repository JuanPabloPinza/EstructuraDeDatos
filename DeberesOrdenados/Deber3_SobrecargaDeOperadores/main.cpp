/***************************
 UNIVERSIDAD DE LAS FUERZAS ARMADAS (ESPE)
 Asignatura: Estructuras de Datos
 Nombre: Juan Pablo Pinza Armijos
 Fecha de creacion: 16/05/23 21:39
 Fecha de modificacion: 19/05/23 10:30
 Enunciado General:Deber3 Operadores Sobrecargados
 ****************************/
 
 //Voy a crear los operadores sobrecargados
/*
+ -> Para poder sumar directamente.
<< -> Para poder imprimir datos de cierta clase.
- -> Para poder restar directamente entre clases fracciones los valores que este tenga.
Planificación:
Creamos una CLASE Operacion (.h y .cpp)
Creamos una Interfaz Operacion.
Creamos una Interfaz OpSobrecargados
Importamos las validaciones (para enteros, decimales, character)
*/

#include <iostream>
#include "Operacion.h"
#include "Dato.h"


int main(int argc, char** argv) {
	
	float fnum1, fnum2;
	std::cout << "DATOS DEL OBJETO 1 \n\n Ingrese el primer decimal -> ";
	fnum1 = Dato::ingresarFloat();
	std::cout << "Ingrese el segundo decimal -> ";
	fnum2 = Dato::ingresarFloat();
	Operacion op1(fnum1, fnum2);
	
	std::cout << "DATOS DEL OBJETO 2 \n\nIngrese el primer decimal ->";
	fnum1 = Dato::ingresarFloat();
	std::cout << "Ingrese el segundo decimal -> ";
	fnum2 = Dato::ingresarFloat();
	Operacion op2(fnum1, fnum2);
	
	std::cout << "\nUSANDO EL OPERADOR SOBRECARGADO (+)";
	std::cout << op1.getA() << "+" << op1.getB() << "+" << op2.getA() << "+" << op2.getB()<< "-> " << op1 + op2 << std::endl; 
	
	
	std::cout << "\nUSANDO EL OPERADOR SOBRECARGADO (<<)";
	std::cout << op1 << std::endl;
	std::cout << op2 << std::endl;	
	
	    std::cout << "\nUSANDO EL OPERADOR SOBRECARGADO (==)" << std::endl;
	std::cout << "objeto1 == objeto2 ?" << std::endl;
    if (op1 == op2){
		std::cout<<"OBJ1 es IGUAL al OBJ2";
	}else{
		std::cout<<"OBJ1 NO ES IGUAL al OBJ2";
	}
	
	
	return 0;
}