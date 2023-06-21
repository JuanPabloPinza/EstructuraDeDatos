/*******************************************************************************
 UNIVERSIDAD DE LAS FUERZAS ARMADAS (ESPE)
 Asignatura: Estructuras de Datos
 Nombre: Juan Pablo Pinza Armijos
 Fecha de creacion: 17/05/23 21:39
 Fecha de modificacion: 23/05/23 03:09
 Enunciado General: Deber 3 Operadores Sobrecargados
 *******************************************************************************/
#include "Operacion.h"

void Operacion::setNum1(float num1){
	this->num1 = num1;
}

float Operacion::getNum1(){
	return num1;
}

void Operacion::setNum2(float num2){
	this -> num2 = num2;
}
float Operacion::getNum2(){
	return num2;
}
Operacion::~Operacion(){
}

Operacion::Operacion(){
}

float Operacion::operator +(const Operacion& op) const{
	Operacion opTotal(num1 + op.num1 , num2 + op.num2);
	return (opTotal.num1+opTotal.num2);	
}


Operacion::Operacion(float num1, float num2){
	this->num1 = num1;
	this->num2 = num2;
}
