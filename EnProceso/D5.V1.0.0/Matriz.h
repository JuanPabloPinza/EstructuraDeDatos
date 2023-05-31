#ifndef MATRIZ_H
#define MATRIZ_H


#include <iostream>
template <typename T>
class Matriz
{
	public:
		void encerarMatriz(int);
		void imprimirMatriz(T**,int);
		Matriz(int);
		Matriz();
		~Matriz();
		void setDim(int);
		int getDim(void);
		void setMatriz(T**);
		T** getMatriz(void);
	
	private:
		T **matriz;
		int dim;

};

//LOS TEMPLATE DEBEN SER IMPLEMENTADOS EN EL MISMO O NOS VA A MARCAR UN ERROR

template <typename T>
Matriz<T>::Matriz(){
	matriz = nullptr;
	dim = 0;
}

template <typename T>
Matriz<T>::Matriz(int dim){
	this->dim=dim;
}

template <typename T>
void Matriz<T>::encerarMatriz(int dim){
	T** puntMatriz;
	//Asignación de Memoria Dinámica
	puntMatriz = new T*[dim]; //Se crea un arreglo de punteros.
	
	//Asignamos memoria a cada fila
	for(int i=0;i<dim;i++){
		puntMatriz[i] = new T[dim];
	}
	
	//Proceso de Encerar la Matriz:
	
	for(int i=0;i<dim;i++){
		for(int j=0;j<dim;j++){
			*(*(puntMatriz+i)+j)=0;
		}
	}
	
	//Impresión de Matriz:
	
	imprimirMatriz(puntMatriz,dim);
	
}

template <typename T>
void  Matriz<T>::imprimirMatriz(T** puntMatriz,int dim){
	for(int i=0;i<dim;i++){
		for(int j=0;j<dim;j++){
			std::cout << *(*(puntMatriz+i)+j) << " ";
		}
		std::cout<<"\n";
	}
	
}

#endif