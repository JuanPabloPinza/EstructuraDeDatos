#pragma once
class Persona
{
private:
	
	int edad;
	double salario;
	int nacimiento;

public:

	int getEdad(void);
	double getSalario(void);
	void setSalario(double);
	void setEdad(int);
	void setNacimiento(int);
	int getNacimiento(void);
	Persona(int, int, double);
	Persona();
	~Persona();

};

