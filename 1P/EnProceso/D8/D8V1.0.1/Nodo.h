#pragma once

template <typename T>
class Nodo{
	private:
		T valor;
		Nodo* ptrSiguiente;
	public:
		Nodo(T,Nodo*);
		void setValor();
		int getValor();
		void setPtrSiguiente(Nodo*);
		Nodo* getPtrSiguiente();
};

template <typename T>
Nodo<T>::Nodo(T valor,Nodo*ptrSiguiente){
	this->valor = valor;
	this->ptrSiguiente=ptrSiguiente;
}

template <typename T>
void Nodo<T>::setValor(T valor){
	this->valor = valor;
}

template <typename T>
int Nodo<T>::getValor(){
	return valor;
	}

template <typename T>
void Nodo<T>::setPtrSiguiente(Nodo*siguiente){
	this->ptrSiguiente = siguiente;
}

template <typename T>
Nodo* Nodo<T>::getPtrSiguiente(){
	return ptrSiguiente;
	
}
