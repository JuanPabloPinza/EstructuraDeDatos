#pragma once
#include <string>
#include <iostream>

class Persona {
public:
	void setEdad(int);
	int getEdad(void);
	void setNombre(std::string);
	std::string getNombre(void);
	void setApellido(std::string);
	std::string getApellido(void);
	Persona();
	Persona(int,std::string,std::string);
	~Persona();

private:
	int edad;
	std::string nombre;
	std::string apellido;






};