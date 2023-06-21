/*******************************
 UNIVERSIDAD DE LAS FUERZAS ARMADAS (ESPE)
 Asignatura: Estructuras de Datos
 Nombre: Juan Pablo Pinza Armijos
 Fecha de creacion: 30/05/23 9:10
 Fecha de modificacion: 31/05/23 9:57
 Enunciado General: Prueba 2 Parcial 1
 ********************************/
#pragma once

template <typename T>
class Nodo {
private:
	T valor;
	Nodo* ptrSiguiente;
public:
	Nodo(T, Nodo*);
	void setValor(T);
	T getValor();
	void setPtrSiguiente(Nodo*);
	Nodo* getPtrSiguiente();
};

template <typename T>
Nodo<T>::Nodo(T valor, Nodo* ptrSiguiente) {
	this->valor = valor;
	this->ptrSiguiente = ptrSiguiente;
}

template <typename T>
void Nodo<T>::setValor(T valor) {
	this->valor = valor;
}

template <typename T>
T Nodo<T>::getValor() {
	return valor;
}

template <typename T>
void Nodo<T>::setPtrSiguiente(Nodo* siguiente) {
	this->ptrSiguiente = siguiente;
}

template <typename T>
Nodo<T>* Nodo<T>::getPtrSiguiente() {
	return ptrSiguiente;
}
