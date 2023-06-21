#pragma once

#include <iostream>

class Persona
{
private:
   std::string cedula;
   std::string nombre;
   std::string apellido;
   std::string fechaNacimiento;
   //fecha fechaDeNacimiento;
public:
   std::string getCedula(void);
   void setCedula(std::string newCedula);
   std::string getNombre(void);
   void setNombre(std::string newNombre);
   std::string getApellido(void);
   void setApellido(std::string newApellido);

   std::string getFechaNacimiento(void);
    void setFechaNacimiento(std::string newFechaNacimiento);
   Persona();
   Persona(std::string cedula,std::string nombre,std::string apellido, std::string fechaNacimiento);
   ~Persona();

   friend std::ostream& operator<<(std::ostream&, const Persona&);
};
