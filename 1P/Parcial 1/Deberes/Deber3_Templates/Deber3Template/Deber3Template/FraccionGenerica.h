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

