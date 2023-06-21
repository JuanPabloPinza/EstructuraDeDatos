#ifndef MATRIZ_H
#define MATRIZ_H


#include <iostream>
#include <cstdlib>
#include <ctime>
template <typename T>
class Matriz
{
	public:
		void encerarMatriz(int);
		void imprimirMatriz(T**,int);
		void generarMatriz();
		Matriz(int);
		Matriz();
		~Matriz();
		void setDim(int);
		int getDim(void);
		void setMatriz(T**);
		T** getMatriz(void);
	
	private:
		T** matriz;
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
	
    for (int i = 0; i < dim; i++) {
        for (int j = 0; j < dim; j++) {
            matriz[i][j] = 0;
        }
    }
    
}

template <typename T>
void Matriz<T>::generarMatriz() {
    srand(static_cast<unsigned>(time(nullptr)));

    for (int i = 0; i < dim; i++) {
        for (int j = 0; j < dim; j++) {
            matriz[i][j] = static_cast<T>(rand() % 10);
        }
    }
}


template <typename T>
void  Matriz<T>::imprimirMatriz(T** puntMatriz,int dim){
	for(int i=0;i<dim;i++){
		for(int j=0;j<dim;j++){
			std::cout << matriz[i][j] << " ";
		}
		std::cout<<"\n";
	}
}

#endif