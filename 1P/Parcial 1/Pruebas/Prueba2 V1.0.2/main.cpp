/*******************************
 UNIVERSIDAD DE LAS FUERZAS ARMADAS (ESPE)
 Asignatura: Estructuras de Datos
 Nombre: Juan Pablo Pinza Armijos
 Fecha de creacion: 30/05/23 9:10
 Fecha de modificacion: 31/05/23 9:57
 Enunciado General: Prueba 2 Parcial 1
 ********************************/
#include <iostream>
#include "Lista.h"

int main() {
    Lista<int> lista,listaImpar,listaImpar2,listaInge;
    
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
    
    std::cout<<"\n\nOrdenamiento Ejemplo 2 en caso de una lista impar: "<<std::endl;
    listaImpar2.insertar(-3);
    listaImpar2.insertar(490);
    listaImpar2.insertar(777);
    listaImpar2.insertar(66);
    listaImpar2.insertar(-2);
    listaImpar2.insertar(0);
    listaImpar2.insertar(24);
    listaImpar2.insertar(11);
    listaImpar2.insertar(13);
    
    std::cout<<"Lista Original:"<<std::endl;
    listaImpar2.imprimirLista();
    listaImpar2.ordenNuevoMatriz();
    std::cout<<"Lista Ordenada:"<<std::endl;
    listaImpar2.imprimirLista();
    
    
    std::cout<<"\n\n*****************************"<<std::endl;
    std::cout<<"\n\nLISTA PEDIDA POR EL INGE: "<<std::endl;
    listaInge.insertar(10);
    listaInge.insertar(20);
    listaInge.insertar(30);
    listaInge.insertar(50);
    listaInge.insertar(80);
    listaInge.insertar(10);
    listaInge.insertar(35);
    listaInge.insertar(70);
    listaInge.insertar(49);
    std::cout<<"Lista Original:"<<std::endl;
    listaInge.imprimirLista();
    std::cout<<"Lista Ordenada:"<<std::endl;
    listaInge.ordenNuevoMatriz();
    listaInge.imprimirLista();
    
    
    
    //Para que el .exe funcione por individual y no se cierre enseguida
    std::cout << "Presiona Enter para salir...";
    std::cin.get(); 
    
    return 0;
}
