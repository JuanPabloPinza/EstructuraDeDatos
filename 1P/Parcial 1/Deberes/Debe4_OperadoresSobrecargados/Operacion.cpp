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

Operacion::Operacion(float num1, float num2){
	this->num1 = num1;
	this->num2 = num2;
}

float Operacion::operator +(const Operacion& op) const{
	Operacion opTotal(num1 + op.num1 , num2 + op.num2);
	return (opTotal.num1+opTotal.num2);	
}