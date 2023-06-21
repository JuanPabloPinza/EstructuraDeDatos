/*******************************
 UNIVERSIDAD DE LAS FUERZAS ARMADAS (ESPE)
 Asignatura: Estructuras de Datos
 Nombre: Juan Pablo Pinza Armijos
 Fecha de creacion: 30/05/23 9:10
 Fecha de modificacion: 31/05/23 10:10
 Enunciado General: Prueba 2 Parcial 1
 ********************************/
#include <iostream>
#include "Lista.h"

int main() {
    Lista<int> lista,listaImpar;
    
    std::cout<<"Ordenamiento en caso de una lista par: "<<std::endl;
	lista.insertar(1);
	lista.insertar(3);
	lista.insertar(5);
	lista.insertar(7);
	lista.insertar(9);
	lista.insertar(11);
	
    std::cout<<"Lista Original:"<<std::endl;
    lista.imprimirLista();

	//LLAMAMOS A LA FUNCIÓN ordenNuevoMatriz() la cuál va a ordenar en base al algoritmo nuestra lista
    lista.ordenNuevoMatriz();

    std::cout<<"Lista Ordenada:"<<std::endl;
	//Imprimimos la nueva matriz con el nuevo orden:
	lista.imprimirLista();

	

    std::cout<<"\n\nOrdenamiento en caso de una lista impar: "<<std::endl;
    listaImpar.insertar(1);
    listaImpar.insertar(3);
    listaImpar.insertar(5);
    listaImpar.insertar(7);
    listaImpar.insertar(9);
    listaImpar.insertar(11);
    listaImpar.insertar(13);
    
    std::cout<<"Lista Original:"<<std::endl;
    listaImpar.imprimirLista();
    listaImpar.ordenNuevoMatriz();
    std::cout<<"Lista Ordenada:"<<std::endl;
    listaImpar.imprimirLista();
    
    return 0;
}
