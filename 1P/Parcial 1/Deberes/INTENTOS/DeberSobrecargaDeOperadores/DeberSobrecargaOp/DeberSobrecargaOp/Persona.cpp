#include "Persona.h"

int Persona::getEdad(void) {


}

double Persona::getSalario(void){
	return salario; 
}

void Persona::setSalario(double _salario){
	salario = _salario;
}

void Persona::setEdad(int _edad){
	edad = _edad;
}

void Persona::setNacimiento(int _nacimiento){
	nacimiento = _nacimiento;
}
int Persona::getNacimiento(void){
	return nacimiento;
}

Persona::Persona(int _edad, int _nacimiento, double _salario){
	edad = _edad;
	nacimiento = _nacimiento;
	salario = _salario;
}

Persona::Persona(){}
Persona::~Persona(){}
