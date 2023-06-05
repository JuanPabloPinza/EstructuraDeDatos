/***************************
 UNIVERSIDAD DE LAS FUERZAS ARMADAS (ESPE)
 Asignatura: Estructuras de Datos
 Nombre: Juan Pablo Pinza Armijos
 Fecha de creacion: 16/05/23 21:39
 Fecha de modificacion: 19/05/23 10:30
 Enunciado General:Deber3 Operadores Sobrecargados
 ****************************/
#include "Operacion.h"

Operacion::Operacion(){
}
Operacion::Operacion(float A, float B) {
	this-> a = A;
	this-> b = B;
}

Operacion::~Operacion() {
}

void Operacion::setA(float newA) {
	this->a = newA;
}

float Operacion::getA(void) {
	return a;
}

void Operacion::setB(float newB) {
	this->b = newB;
}

float Operacion::getB(void) {
	return b;
}

float Operacion::operator +(const Operacion& op) const {
	Operacion sumaTotal(a + op.a,  b + op.b);
	return (sumaTotal.a + sumaTotal.b);
}

std::ostream& operator<<(std::ostream& os, const Operacion& op) {
	os << "Tipo de Objeto: Operacion" << std::endl;
    os << "float a = " << op.a;
    os << ", float b = " << op.b << std::endl;	
	return os;
}

bool Operacion::operator ==(const Operacion& op)const{
	(a == op.a && b == op.b)?true:false;
}