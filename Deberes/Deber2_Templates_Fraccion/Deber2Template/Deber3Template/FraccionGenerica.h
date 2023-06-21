/*******************************************************************************
 UNIVERSIDAD DE LAS FUERZAS ARMADAS (ESPE)
 Asignatura: Estructuras de Datos
 Nombre: Juan Pablo Pinza Armijos
 Fecha de creacion: 17/05/23 21:39
 Fecha de modificacion: 21/05/23 03:09
 Enunciado General: Deber 2 Templates para fracciones
 *******************************************************************************/

#pragma once

template <typename T>
class FraccionGenerica
{
private:
	T numerador;
	T denominador;

public:
	void setNumerador(T);
	T getNumerador();
	void setDenominador(T);
	T getDenominador();
	FraccionGenerica();
	FraccionGenerica(T num, T den);
	~FraccionGenerica();
	T operacionesGenericas(T num1, T den1, T num2, T den2);

};

