/*******************************************************************************
 UNIVERSIDAD DE LAS FUERZAS ARMADAS (ESPE)
 Asignatura: Estructuras de Datos
 Nombre: Juan Pablo Pinza Armijos
 Fecha de creacion: 27/05/23 21:39
 Fecha de modificacion: 01/06/23 03:09
 Enunciado General: Deber 5 Listas y Operaciones Relacionadas
 *******************************************************************************/ 
#include <iostream>
#include "Lista.h"

int main() {
    Lista<int> lista,lista2;
    
    std::cout<<"Insertar por cabeza"<<std::endl;
	
	lista2.insertarPorCabeza(1);
	lista2.insertarPorCabeza(2);
	lista2.insertarPorCabeza(3);
	
    lista2.imprimirLista();
    
    std::cout<<"Eliminar por cabeza"<<std::endl;
    lista2.eliminarPorCabeza();
    std::cout<<"Elemento eliminado"<<std::endl;
    lista2.imprimirLista();
    
    std::cout<<"SUMA DE LOS ELEMENTOS DEL ARREGLO"<<std::endl;
    int totalSuma;
	totalSuma = lista2.sumaDeElementosDeLista();
    std::cout<<"La suma total del arreglo es: "<<totalSuma<<std::endl;

    std::cout<<"Insertar"<<std::endl;
    lista.insertar(5);
    lista.insertar(10);
    lista.insertar(15);
    lista.insertar(20);

    lista.imprimirLista();
    
    std::cout<<"Número a buscar en la lista -> 20"<<std::endl;
    bool existeValor = lista.elementoABuscar(20);
    if(existeValor==true){
    std::cout<<"El valor si existe en la lista"<<std::endl;
	}
	else{
	std::cout<<"El valor NO existe en la lista"<<std::endl;
	}
	
    return 0;
}
