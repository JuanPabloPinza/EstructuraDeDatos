#pragma once

template <typename T>
class Matriz {
public:
	Matriz();
	Matriz(int);
	~Matriz();
	void setPuntMatriz(T**);
	T** getPuntMatriz();
	void setDim(int);
	int getDim();

private:
	T** puntMatriz;
	int dim;

};

//Cómo es una plantilla Template, debemos implementar todo debajo para no generar errores.
template <typename T>
Matriz<T>::Matriz() {
	puntMatriz = nullptr;
	dim = 0;
}

template <typename T>
Matriz<T>::Matriz(int dim) {
	this->dim = dim;
	//Reservamos espacio de memoria:
	puntMatriz = new T * [dim];
	for (int i = 0; i < dim; i++)
		puntMatriz[i] = new T[dim];
}

template <typename T>
Matriz<T>::~Matriz() {
	for (int i = 0; i < dim; i++) {
		puntMatriz[i] = NULL;
	}
	puntMatriz = NULL;
}

template <typename T>
void Matriz<T>::setPuntMatriz(T** puntMatriz) {
	this->puntMatriz = puntMatriz;
}

template <typename T>
T** Matriz<T>::getPuntMatriz() {
	return puntMatriz;
}

template <typename T>
void Matriz<T>::setDim(int dim) {
	this->dim = dim;
}

template <typename T>
int Matriz<T>::getDim() {
	return dim;
}
