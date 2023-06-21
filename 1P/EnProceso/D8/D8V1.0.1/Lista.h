#pragma once

#include "Nodo.h"

template <typename T>
class Lista{
	private:
		Nodo* primero;
		Nodo* actual;
	public:
	bool listaVaciaCheck();
	Lista();
	void insertarAlInicio(Nodo**,int);
};

Lista::Lista(){
	this->actual = NULL;
	this->primero = NULL;
}

bool Lista::listaVaciaCheck(){
	return(this->primero==NULL);
}

template <typename T>
void Lista::insertarAlInicio(Nodo** ptrDir,int valor){
	Nodo<T>* nuevoNodo = new Nodo();
}