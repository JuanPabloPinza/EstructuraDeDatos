#include "Persona.h"

Persona::Persona()
{
}

Persona::Persona(std::string cedula,std::string nombre,std::string apellido, std::string fechaNacimiento)
{
    this->cedula = cedula;
    this->nombre = nombre;
    this->apellido = apellido;
    this->fechaNacimiento = fechaNacimiento;
}

Persona::~Persona()
{
}

std::string Persona::getCedula(void){
    return this->cedula;
}

void Persona::setCedula(std::string newCedula){
    this->cedula = newCedula;
}

std::string Persona::getNombre(void){
    return this->nombre;
}

void Persona::setNombre(std::string newNombre){
    this->nombre = newNombre;
}

std::string Persona::getApellido(void){
    return this->apellido;
}

void Persona::setApellido(std::string newApellido){
    this->apellido = newApellido;
}

std::string Persona::getFechaNacimiento(void){
    return this->fechaNacimiento;
}

void Persona::setFechaNacimiento(std::string newFechaNacimiento){
    this->fechaNacimiento = newFechaNacimiento;
}

std::ostream& operator<<(std::ostream& os, const Persona& empleado) {
    os << "Cedula: " << empleado.cedula << " " << empleado.apellido << std::endl
       << "Nombre: " << empleado.nombre << std::endl
       << "Apellido: "<<empleado.apellido << std::endl;
    return os;
}
