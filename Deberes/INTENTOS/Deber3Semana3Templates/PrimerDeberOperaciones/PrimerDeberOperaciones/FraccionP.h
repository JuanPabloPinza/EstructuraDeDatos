#pragma once

template <typename T>
class FraccionP
{

public:
	T getNumerador(void);
	void setNumerador(T newNumerador);
	T getDenominador(void);
	void setDenominador(T newDenominador);
	FraccionP(T, T);
	FraccionP();
	~FraccionP();
	T operacionesGenericas(T, T, T, T);
protected:
private:
	T numerador;
	T denominador;
};


