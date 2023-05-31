/*******************************
 UNIVERSIDAD DE LAS FUERZAS ARMADAS (ESPE)
 Asignatura: Estructuras de Datos
 Nombre: Juan Pablo Pinza Armijos
 Fecha de creacion: 30/05/23 17:15
 Fecha de modificacion: 31/05/23 8:00
 Enunciado General: Deber 8
 ********************************/
#include <iostream>
#include "Lista.h"

int main() {
    Lista<int> lista,lista2;

    lista.insertarAlInicio(5);
    lista.insertarAlInicio(10);
    lista.insertarAlInicio(15);
    lista.insertarAlInicio(20);

    lista.imprimirLista();
	
	lista2.insertar(1);
	lista2.insertar(2);
	lista2.insertar(3);
	
    lista2.imprimirLista();
	
    return 0;
}
