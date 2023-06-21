/*******************************************************************************
 UNIVERSIDAD DE LAS FUERZAS ARMADAS (ESPE)
 Asignatura: Estructuras de Datos
 Nombre: Juan Pablo Pinza Armijos
 Fecha de creacion: 17/05/23 21:39
 Fecha de modificacion: 21/05/23 03:09
 Enunciado General: Deber 2 Templates para fracciones
 *******************************************************************************/

#include "FraccionGenerica.h"
template <typename T>
void FraccionGenerica<T>::setNumerador(T num) {
	numerador = num;
}
template <typename T>
T FraccionGenerica<T>::getNumerador() {
	return numerador;
}

template <typename T>
void FraccionGenerica<T>::setDenominador(T den) {
	denominador = den;
}

template <typename T>
T FraccionGenerica<T>::getDenominador() {
	return denominador;
}

template <typename T>
FraccionGenerica<T>::FraccionGenerica() {
}

template <typename T>
FraccionGenerica<T>::FraccionGenerica(T num, T den) {
	denominador = den;
	numerador = num;
}

template <typename T>
FraccionGenerica<T>::~FraccionGenerica(){}

template <typename T>
T FraccionGenerica<T>::operacionesGenericas(T num1, T den1, T num2, T den2) {
	numerador = (num1 * den2) + (num2 * den1);
	denominador = (den1 + den2);
	return (numerador / denominador);
}