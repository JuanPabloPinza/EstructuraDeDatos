
#include "FraccionP.h"

template <typename T>
T FraccionP<T>::getNumerador() {
	return numerador;
}

template <typename T>
void FraccionP<T>::setNumerador(T newNumerador) {
	numerador = newNumerador;
}

template <typename T>
T FraccionP<T>::getDenominador(void){
	return denominador;
}

template <typename T>
void FraccionP<T>::setDenominador(T newDenominador) {
	denominador = newDenominador;
}

template <typename T>
FraccionP<T>::FraccionP(T _numerador, T _denominador) {
	numerador = _numerador;
	denominador = _denominador;
}

template <typename T>
FraccionP<T>::~FraccionP(){}

template <typename T>
FraccionP<T>::FraccionP() :numerador(0), denominador(0){}

template <typename T>
T FraccionP<T>::operacionesGenericas(T numerador1, T denominador1, T numerador2, T denominador2) {
	T operacionesMatematicas;
	denominador = (denominador1 + denominador2);
	numerador = (numerador1 * denominador2) + (numerador2 * denominador1);
	operacionesMatematicas = numerador/denominador;
	return operacionesMatematicas;
}
