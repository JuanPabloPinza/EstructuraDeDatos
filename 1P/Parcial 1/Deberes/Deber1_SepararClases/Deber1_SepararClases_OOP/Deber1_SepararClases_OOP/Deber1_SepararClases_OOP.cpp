#include <iostream>
#include <string>
#include "Persona.h"
#include "Validacion.h"


int main(int argc, char** argv)
{
	Persona usuario1(19,"Juan","Pinza"),usuario2;

	std::cout << "BIENVENIDO AL PROGRAMA DE REGISTRO DE PERSONAS" << std::endl;
	std::cout << "Datos del usuario1" << std::endl;
	std::cout << "Nombre: " << usuario1.getNombre()<<std::endl;
	std::cout << "Apellido: " << usuario1.getApellido()<<std::endl;
	std::cout << "Edad: " << usuario1.getEdad() << std::endl;

//Entrada de datos de un nuevo usuario validado:

	std::string cadenaTemporal;
	int numeroTemporal;
	std::cout << "\n\nINGRESE LOS DATOS DEL NUEVO USUARIO" << std::endl;
	std::cout << "Datos del usuario2" << std::endl;
	std::cout << "Ingrese el nombre -> ";
	std::getline(std::cin, cadenaTemporal);
	usuario2.setNombre(cadenaTemporal);
	std::cout << "Ingrese el apellido -> ";
	std::getline(std::cin, cadenaTemporal);
	usuario2.setApellido(cadenaTemporal);
	std::cout << "Ingrese la edad -> ";
	std::cin >> numeroTemporal;
	usuario2.setEdad(numeroTemporal);
	std::cout << "Los datos del Usuario 2 son:";
	std::cout << "Nombre: " << usuario2.getNombre() << std::endl;
	std::cout << "Apellido: " << usuario2.getApellido() << std::endl;
	std::cout << "Edad: " << usuario2.getEdad() << std::endl;

	return 0;
}

