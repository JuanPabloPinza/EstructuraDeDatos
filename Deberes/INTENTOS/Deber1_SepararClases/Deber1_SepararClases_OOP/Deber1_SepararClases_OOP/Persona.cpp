#include "Persona.h"

void Persona::setEdad(int edad) {
	this->edad = edad;
}

int Persona::getEdad(void) {
	return edad;
}
void Persona::setNombre(std::string nombre){
	this->nombre = nombre;
}

std::string Persona::getNombre(void){
	return nombre;
}

void Persona::setApellido(std::string apellido){
	this->apellido = apellido;
}

std::string Persona::getApellido(void){
	return apellido;
}

Persona::Persona(){
}
Persona::Persona(int edad, std::string nombre, std::string apellido){
	this->edad = edad;
	this->nombre = nombre;
	this->apellido = apellido;
}
Persona::~Persona(){}